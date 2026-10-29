#!/usr/bin/env python3
"""Check a selected Bash manager without running its root entrypoint or real backends.

Usage: python3 check-parity-installer.py /absolute/path/to/install-offline.sh
Requires Linux/WSL, Python 3, Bash, awk, flock, and standard file utilities.
The selected manager must be trusted: sourcing shell definitions is code execution.
"""
from __future__ import annotations

import argparse
from pathlib import Path
import subprocess
import tempfile


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("manager", type=Path, help="selected installer manager to check")
    arguments = parser.parse_args()
    manager = arguments.manager.resolve(strict=True)
    source = manager.read_text(encoding="utf-8")
    marker = "\nneed_root\n"
    if marker not in source:
        raise SystemExit("Refusing manager without the expected standalone need_root entrypoint")
    library, entrypoint = source.rsplit(marker, 1)
    if entrypoint.index("ensure_core") >= entrypoint.index("load_sysinfo"):
        raise AssertionError("prerequisites/core must precede sysinfo")
    if "au_enabled &&" in entrypoint:
        raise AssertionError("legacy auto-update startup remains")

    subprocess.run(["bash", "-n", str(manager)], check=True, timeout=10)
    with tempfile.TemporaryDirectory(prefix="pengu-parity-check-") as temporary:
        root = Path(temporary)
        library_file = root / "library.sh"
        library_file.write_text(library, encoding="utf-8")
        commands = root / "commands"
        commands.mkdir()
        control = commands / "systemctl"
        control.write_text(
            """#!/usr/bin/env bash
printf '%s\\n' "$*" >> "$MOCK_CALLS"
case "$1" in
 is-enabled) [[ -f "$MOCK_ENABLED" ]] ;;
 enable) touch "$MOCK_ENABLED" ;;
 disable) rm -f "$MOCK_ENABLED" ;;
 list-unit-files)
 printf '%s\\n' 'pengutunnel-live.service enabled' 'pengutunnel-booting.service enabled' 'pengutunnel-stopping.service enabled' 'pengutunnel-failed.service enabled' 'pengutunnel-stopped.service enabled' 'pengutunnel-disabled.service disabled' ;;
 show)
 case "${@: -1}" in
  *live*) echo active;; *booting*) echo activating;; *stopping*) echo deactivating;;
  *failed*) echo failed;; *) echo inactive;;
 esac ;;
 daemon-reload|reset-failed|start|status) exit 0 ;;
 *) exit 88 ;;
esac
""",
            encoding="utf-8",
        )
        control.chmod(0o755)
        # Fail closed if a tested path unexpectedly invokes another backend.
        for command in ("curl", "wget", "apt-get", "yum", "dnf", "iptables", "ip", "journalctl"):
            blocked = commands / command
            blocked.write_text(
                '#!/usr/bin/env bash\nprintf "Blocked unexpected backend: %s\\n" "$0" >&2\nexit 99\n',
                encoding="utf-8",
            )
            blocked.chmod(0o755)
        environment = {
            "PATH": str(commands) + ":/usr/bin:/bin",
            "HOME": str(root),
            "TMPDIR": str(root),
            "LANG": "C.UTF-8",
            "MOCK_CALLS": str(root / "calls"),
            "MOCK_ENABLED": str(root / "enabled"),
        }
        prefix = '''source "$1"
INSTALL_DIR="$2/install"; SERVICE_DIR="$2/services"
BIN_PATH="$2/never-execute-core"; KP_SCRIPT="$INSTALL_DIR/keeper.sh"; KP_LOG="$INSTALL_DIR/keeper.log"
banner(){ :; }; pause(){ :; }
'''
        passed = 0

        def check(name: str, code: str, data: str = "", expected: int = 0) -> subprocess.CompletedProcess[str]:
            nonlocal passed
            result = subprocess.run(
                ["bash", "-c", prefix + code, "test", str(library_file), str(root)],
                input=data,
                text=True,
                capture_output=True,
                env=environment,
                timeout=5,
            )
            if result.returncode != expected:
                raise AssertionError((name, result.returncode, result.stdout, result.stderr))
            passed += 1
            print("PASS:", name)
            return result

        for function in ("ask", "ask_req", "ask_yn"):
            check(function + " EOF", function + " question default", expected=1)
        for function in ("wask", "wask_req", "wyn"):
            check(function + " EOF", function + ' question default; test "$INPUT_EOF:$WIZ_BACK" = 1:1')
        check("main menu EOF", "menu", expected=1)
        check("main menu Exit", "menu", "0\n")
        check("first wizard EOF", "cn_side", expected=1)
        check("wizard controller EOF", "wiz_run cn_side cn_cat", expected=1)
        # Existing executable only establishes the wizard's presence check; it is never called.
        check("L4 wizard EOF", "core_at_least(){ return 0; }; BIN_PATH=/bin/true; configure_l4 1 tcpfwd", expected=1)
        check(
            "prerequisites checked for existing core",
            'install_prereqs(){ printf prereqs; }; BIN_PATH="$1"; '
            'sha256sum(){ echo "$OFFLINE_SHA  dummy"; }; install_core(){ return 77; }; ensure_core',
        )
        check("prerequisite failure stops installation", "install_prereqs(){ return 1; }; install_core(){ return 77; }; ensure_core", expected=1)
        check("offline license step", 'cn_license; test "$lic_enabled:$lic_key" = false:')
        check("PSK preserved", 'psk=""; cn_psk; test "$psk" = example-same-psk', "example-same-psk\n")
        check("keeper enable", "kp_install && kp_enabled")
        keeper = root / "install" / "keeper.sh"
        keeper_text = keeper.read_text(encoding="utf-8")
        for forbidden in ("license_stop", "journalctl", "autoupdate", "curl", "wget"):
            if forbidden in keeper_text:
                raise AssertionError("unexpected keeper content: " + forbidden)
        subprocess.run(["bash", "-n", str(keeper)], check=True, timeout=5)
        subprocess.run(["bash", str(keeper)], check=True, env=environment, timeout=5)
        calls = (root / "calls").read_text().splitlines()
        assert [line for line in calls if line.startswith("start ")] == [
            "start pengutunnel-failed.service", "start pengutunnel-stopped.service"
        ], calls
        assert "OnUnitActiveSec=1min" in (root / "services/pengu-tunnel-keeper.timer").read_text()
        assert "ExecStart=/bin/bash " + str(keeper) in (root / "services/pengu-tunnel-keeper.service").read_text()
        passed += 1
        print("PASS: generated keeper starts only stopped enabled units")
        check("keeper disable", "kp_disable; ! kp_enabled")
        check("keeper submenu enable/status/disable/back", "auto_update_menu", "1\n3\n2\n0\n")
        assert not (root / "enabled").exists()
        calls = (root / "calls").read_text().splitlines()
        assert any(line.startswith("enable --now pengu-tunnel-keeper.timer") for line in calls)
        assert any(line.startswith("disable --now pengu-tunnel-keeper.timer pengu-tunnel-keeper.service") for line in calls)
        assert any(line.startswith("status pengu-tunnel-keeper.timer pengu-tunnel-keeper.service") for line in calls)
        assert not any("pengu-core-autoupdate" in line for line in calls)
        check("keeper submenu EOF", "auto_update_menu", expected=1)
        print(f"PASS: {passed} checks, manager/keeper syntax and startup ordering")
        print("No root entrypoint, real systemctl, package installer, network backend or target ELF was executed.")


if __name__ == "__main__":
    main()
