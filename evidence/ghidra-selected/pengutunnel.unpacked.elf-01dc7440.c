/* Ghidra focused static decompilation; not original source.
Import SHA256: 3638b68f377a65d5a65f10b5d38744157067ecd175377094b6cd48c923b2bd18
Entry: 01dc7440; whole-program auto-analysis disabled.
Go ABI/types/callees may be incomplete. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void analyst_entry_01dc7440(undefined8 param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int *extraout_R11;
  int unaff_R14;
  undefined8 uStack0000000000000008;
  int iStack0000000000000010;
  char cStack0000000000000018;

  uStack0000000000000008 = param_1;
  iStack0000000000000010 = param_2;
  cStack0000000000000018 = param_3;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_R14 + 0x10)) {
    func_0x0047c9e0();
  }
  func_0x01dc3a40();
  iVar1 = _DAT_02dde758;
  if (_DAT_02dde758 == 0) {
    if ((cStack0000000000000018 == '\0') && (_DAT_02ddf628 != 0)) {
      (*(code *)**(undefined8 **)(*(int *)(_DAT_02d53068 + 0x88) + 0x48))
                (0xea168e1959f51dc8,0x6e,*(undefined8 *)(_DAT_02d53068 + 0x80));
      (*(code *)*_DAT_02d42750)();
    }
    return;
  }
  if (cStack0000000000000018 == '\0') {
    func_0x01dc7320(_DAT_02dde758,uStack0000000000000008,iStack0000000000000010);
    return;
  }
  puVar2 = (undefined8 *)func_0x0041f9c0(0x20,&UNK_02bd2070,1);
  *puVar2 = &UNK_01e03380;
  if (_DAT_02e07dc0 != 0) {
    puVar2 = (undefined8 *)func_0x0047e280();
    *extraout_R11 = iVar1;
    extraout_R11[1] = iStack0000000000000010;
  }
  puVar2[1] = iVar1;
  puVar2[2] = uStack0000000000000008;
  puVar2[3] = iStack0000000000000010;
  func_0x00450a80();
  return;
}
