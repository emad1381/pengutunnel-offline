#!/usr/bin/env bash
set -euo pipefail

# Fetches this reviewed pair only. It never starts an updater.
REPOSITORY="emad1381/pengutunnel-offline"
CORE_SHA="5d58cdde3483029a70c8b52b9434c4fe4bb4fbc093e47c5c38aba4be9361fb52"
MANAGER_SHA="896853291178f9d6f68d9f45ba81825da4093762959f8ddcf3be88a659b9b950"
VERIFY_ONLY=false
REF="main"
SOURCE_DIR=""

die() { printf 'Error: %s\n' "$*" >&2; exit 1; }
while (($#)); do
  case "$1" in
    --verify-only) VERIFY_ONLY=true; shift ;;
    --ref) (($# >= 2)) || die '--ref needs a Git ref'; REF="$2"; shift 2 ;;
    --source-dir) (($# >= 2)) || die '--source-dir needs a directory'; SOURCE_DIR="$2"; shift 2 ;;
    -h|--help)
      printf '%s\n' 'Usage: bash install.sh [--verify-only] [--ref REF] [--source-dir DIR]' \
        'Use a local checkout for a private repository. No token is requested or stored.'
      exit 0 ;;
    *) die "unknown option: $1" ;;
  esac
done
[[ "$(uname -s)" == Linux ]] || die 'Linux is required'
[[ "$(uname -m)" == x86_64 ]] || die 'this core supports x86_64 only'
command -v sha256sum >/dev/null || die 'sha256sum is required'
[[ "$REF" =~ ^[[:alnum:]_.-]+$ && "$REF" != .* ]] || die 'invalid Git ref'

if [[ -z "$SOURCE_DIR" && -n "${BASH_SOURCE[0]:-}" && -f "${BASH_SOURCE[0]}" ]]; then
  candidate="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
  if [[ -f "$candidate/pengutunnel.offline.elf" && -f "$candidate/install-offline.sh" ]]; then
    SOURCE_DIR="$candidate"
  fi
fi

work="$(mktemp -d)"
trap 'rm -rf -- "$work"' EXIT
for filename in pengutunnel.offline.elf install-offline.sh; do
  if [[ -n "$SOURCE_DIR" ]]; then
    [[ -f "$SOURCE_DIR/$filename" ]] || die "missing $filename"
    cp -- "$SOURCE_DIR/$filename" "$work/$filename"
  else
    command -v curl >/dev/null || die 'curl and CA certificates are required'
    curl --fail --show-error --location --proto '=https' --tlsv1.2 \
      --connect-timeout 15 --max-time 600 --retry 2 \
      "https://raw.githubusercontent.com/$REPOSITORY/$REF/$filename" \
      --output "$work/$filename" || die "download failed: $filename; for a private repo use a local checkout"
  fi
done
(
  cd -- "$work"
  printf '%s  %s\n' "$CORE_SHA" pengutunnel.offline.elf "$MANAGER_SHA" install-offline.sh | sha256sum --check --strict -
) || die 'checksum mismatch; nothing installed'
bash -n "$work/install-offline.sh"
if "$VERIFY_ONLY"; then
  printf '%s\n' 'Verified core and manager. No installation or service change was performed.'
  exit 0
fi
[[ "$EUID" -eq 0 ]] || die 'run with sudo bash install.sh'
command -v systemctl >/dev/null || die 'systemd is required'
[[ -d /run/systemd/system ]] || die 'systemd must be running (WSL needs systemd enabled)'
[[ -r /dev/tty ]] || die 'an interactive terminal is required'
# The manager prompts on a terminal even when the bootstrap arrived through stdin.
bash "$work/install-offline.sh" </dev/tty
