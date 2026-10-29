/* Ghidra focused static decompilation; not original source.
Import SHA256: 3638b68f377a65d5a65f10b5d38744157067ecd175377094b6cd48c923b2bd18
Entry: 01eb20c0; whole-program auto-analysis disabled.
Go ABI/types/callees may be incomplete. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [32]
analyst_entry_01eb20c0
          (int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  sdword *psVar1;
  sdword **ppsVar2;
  char cVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  int iVar4;
  undefined8 *puVar5;
  undefined8 extraout_RCX;
  int extraout_RCX_00;
  undefined8 extraout_RCX_01;
  undefined8 extraout_RCX_02;
  undefined8 *puVar8;
  undefined8 extraout_RBX;
  int extraout_RBX_00;
  undefined8 extraout_RBX_01;
  undefined8 extraout_RBX_02;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  sdword **ppsVar9;
  undefined8 extraout_RDI;
  sdword sVar10;
  int unaff_R14;
  bool bVar11;
  undefined1 auVar12 [16];
  int iStack0000000000000008;
  undefined8 uStack0000000000000010;
  int iStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined1 auStack_2f0 [8];
  int iStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  int iStack_2b8;
  int iStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  sdword *psStack_248;
  int iStack_240;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [2];
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;

  iStack0000000000000008 = param_1;
  iStack0000000000000018 = param_3;
  uStack0000000000000010 = param_2;
  uStack0000000000000028 = param_5;
  uStack0000000000000020 = param_4;
  while (&iStack_2a0 <= *(int **)(unaff_R14 + 0x10)) {
    func_0x0047c9e0();
  }
  auVar12 = func_0x01df7b40(*(undefined8 *)(iStack0000000000000018 + 0x48),
                            *(undefined8 *)(iStack0000000000000018 + 0x50));
  iStack_2e8 = auVar12._8_8_;
  uStack_288 = auVar12._0_8_;
  psVar1 = *(sdword **)(iStack0000000000000018 + 0x38);
  if (((*(int *)(iStack0000000000000018 + 0x40) != 3) ||
      ((((short)*psVar1 != 0x6c74 || (*(char *)((int)psVar1 + 2) != 's')) &&
       (((short)*psVar1 != 0x7377 || (*(char *)((int)psVar1 + 2) != 's')))))) &&
     (((*(int *)(iStack0000000000000018 + 0x40) != 6 || (*psVar1 != 0x74746878)) ||
      ((short)psVar1[1] != 0x7370)))) {
    sVar10 = 5;
    puVar5 = (undefined8 *)(iStack0000000000000018 + 0x38);
    ppsVar2 = &psStack_248;
    do {
      ppsVar9 = ppsVar2;
      puVar8 = puVar5;
      psVar1 = (sdword *)puVar8[1];
      *ppsVar9 = (sdword *)*puVar8;
      ppsVar9[1] = psVar1;
      psVar1 = (sdword *)puVar8[3];
      ppsVar9[2] = (sdword *)puVar8[2];
      ppsVar9[3] = psVar1;
      psVar1 = (sdword *)puVar8[5];
      ppsVar9[4] = (sdword *)puVar8[4];
      ppsVar9[5] = psVar1;
      psVar1 = (sdword *)puVar8[7];
      ppsVar9[6] = (sdword *)puVar8[6];
      ppsVar9[7] = psVar1;
      sVar10 = sVar10 + -1;
      puVar5 = puVar8 + 8;
      ppsVar2 = ppsVar9 + 8;
    } while (sVar10 != 0);
    psVar1 = (sdword *)puVar8[9];
    ppsVar9[8] = (sdword *)puVar8[8];
    ppsVar9[9] = psVar1;
    psVar1 = (sdword *)puVar8[0xb];
    ppsVar9[10] = (sdword *)puVar8[10];
    ppsVar9[0xb] = psVar1;
    psVar1 = (sdword *)puVar8[0xd];
    ppsVar9[0xc] = (sdword *)puVar8[0xc];
    ppsVar9[0xd] = psVar1;
    psVar1 = (sdword *)puVar8[0xe];
    ppsVar9[0xd] = (sdword *)puVar8[0xd];
    ppsVar9[0xe] = psVar1;
    if (((iStack_240 == 2) && ((short)*psStack_248 == 0x7377)) ||
       ((iStack_240 == 3 &&
        (((short)*psStack_248 == 0x7377 && (*(char *)((int)psStack_248 + 2) == 's')))))) {
      bVar11 = true;
    }
    else if (((iStack_240 == 5) && (*psStack_248 == 0x74746878)) && ((char)psStack_248[1] == 'p')) {
      bVar11 = true;
    }
    else if ((iStack_240 == 6) && (*psStack_248 == 0x74746878)) {
      bVar11 = (short)psStack_248[1] == 0x7370;
    }
    else {
      bVar11 = false;
    }
    if (!bVar11) {
      return ZEXT1632(auVar12);
    }
  }
  func_0x005350a0();
  func_0x0051fda0();
  iStack_2a0 = _DAT_02cbf758;
  uStack_298 = extraout_RBX;
  uStack_290 = extraout_RAX;
  uStack_10 = extraout_RCX;
  while( true ) {
    (*(code *)*_DAT_02d42730)
              (iStack0000000000000008,uStack0000000000000010,iStack0000000000000018,
               uStack0000000000000020,uStack0000000000000028);
    if (extraout_RBX_00 != 0) {
      iStack_2b0 = extraout_RBX_00;
      uStack_250 = extraout_RAX_00;
      if ((iStack_2e8 != extraout_RBX_00) ||
         (cVar3 = func_0x0040a300(extraout_RAX_00,uStack_288,extraout_RBX_00), cVar3 == '\0')) {
        auVar12 = (*(code *)**(undefined8 **)(_DAT_02d66410 + 0x40))
                            (0xec9cbcfe,0xcc626e37,_DAT_02d66428,0xfc2a685c,0xffffffb6,
                             *(undefined8 *)(_DAT_02d66410 + 0xa0));
        uStack_2c0 = auVar12._8_8_;
        uStack_260 = auVar12._0_8_;
        uStack_30 = func_0x004754e0(uStack_250,iStack_2b0);
        puStack_38 = &UNK_02b5ef60;
        uStack_20 = func_0x004754e0(uStack_288,iStack_2e8);
        puStack_28 = &UNK_02b5ef60;
        func_0x009bfea0(1,uStack_260,uStack_2c0,&puStack_38,2,2);
      }
      return ZEXT1632(CONCAT88(iStack_2b0,uStack_250));
    }
    iStack_2b8 = extraout_RCX_00;
    uStack_258 = extraout_RDI;
    iVar4 = (**(code **)(iStack0000000000000008 + 0x28))(uStack0000000000000010);
    if (iVar4 != 0) break;
    if (iStack_2b8 == 0) {
      func_0x005350a0();
      cVar3 = func_0x0051ed00();
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 != '\0') {
      auVar12 = (*(code *)**(undefined8 **)(_DAT_02d66410 + 0x108))
                          (*(undefined2 *)(_DAT_02d66410 + 0xe0),0xb012d851,0xffffffcc,
                           *(undefined4 *)(_DAT_02d66410 + 0xb8),
                           *(undefined8 *)(_DAT_02d66410 + 0x80),
                           *(undefined8 *)(_DAT_02d66410 + 0x38));
      uStack_2c8 = auVar12._8_8_;
      uStack_268 = auVar12._0_8_;
      uStack_40 = func_0x004754e0(uStack_288,iStack_2e8);
      puStack_48 = &UNK_02b5ef60;
      func_0x009bfea0(2,uStack_268,uStack_2c8,&puStack_48,1,1);
      return ZEXT1632(CONCAT88(iStack_2e8,uStack_288));
    }
    if (iStack_2b8 == 0) {
      auVar12 = (**(code **)_DAT_02d66458[9])
                          (0xadea30d2849bd693,*(undefined1 *)(_DAT_02d66410 + 0x58),
                           *(undefined8 *)(*_DAT_02d66458 + 0x30));
      uStack_2d0 = auVar12._8_8_;
      uStack_270 = auVar12._0_8_;
      uStack_50 = func_0x00475480(iStack_2a0);
      puStack_58 = &UNK_02c5ff10;
      func_0x009bfea0(1,uStack_270,uStack_2d0,&puStack_58,1,1);
    }
    else {
      cVar3 = func_0x00498f40(iStack_2b8,uStack_258,_DAT_02ddf5d0,_DAT_02ddf5d8);
      if (cVar3 == '\0') {
        cVar3 = func_0x01eb2940(iStack_2b8,uStack_258);
      }
      else {
        cVar3 = '\x01';
      }
      if (cVar3 != '\0') {
        auVar12 = (*(code *)**(undefined8 **)(_DAT_02d66410 + 0x98))
                            (_DAT_02d66442,0xd7d6f1c90d266763,0xeb90c9cd,0xffffc42f,_DAT_02d66408);
        uStack_2d8 = auVar12._8_8_;
        uStack_278 = auVar12._0_8_;
        func_0x009baa60(iStack_2b8,uStack_258);
        uStack_70 = func_0x004754e0(extraout_RBX_02,extraout_RCX_02);
        puStack_78 = &UNK_02b5ef60;
        uStack_60 = func_0x004754e0(uStack_288,iStack_2e8);
        puStack_68 = &UNK_02b5ef60;
        func_0x009bfea0(2,uStack_278,uStack_2d8,&puStack_78,2,2);
        return ZEXT1632(CONCAT88(iStack_2e8,uStack_288));
      }
      auVar12 = (*(code *)*_DAT_02d66400)(0x74,0xfffffffe,0x9cbc081e,_DAT_02d66438);
      uStack_2e0 = auVar12._8_8_;
      uStack_280 = auVar12._0_8_;
      func_0x009baa60(iStack_2b8,uStack_258);
      uStack_2a8 = extraout_RCX_01;
      uStack_d0 = extraout_RBX_01;
      uStack_a0 = func_0x004754e0(*(undefined8 *)(iStack0000000000000018 + 0x48),
                                  *(undefined8 *)(iStack0000000000000018 + 0x50));
      puStack_a8 = &UNK_02b5ef60;
      uStack_90 = func_0x004754e0(uStack_d0,uStack_2a8);
      puStack_98 = &UNK_02b5ef60;
      uStack_80 = func_0x00475480(iStack_2a0);
      puStack_88 = &UNK_02c5ff10;
      func_0x009bfea0(2,uStack_280,uStack_2e0,&puStack_a8,3,3);
    }
    uStack_18 = (**(code **)(iStack0000000000000008 + 0x20))(uStack0000000000000010);
    puVar5 = (undefined8 *)func_0x00519c00(iStack_2a0);
    auStack_c8[0] = *puVar5;
    uStack_b8 = uStack_18;
    iVar4 = func_0x004580e0(auStack_c8,auStack_2f0,0,0,2,1);
    if (iVar4 != 0) {
      auVar12 = (**(code **)(iStack0000000000000008 + 0x28))(uStack0000000000000010);
      auVar6._24_8_ = auVar12._8_8_;
      auVar6._0_16_ = ZEXT816(0);
      auVar6._16_8_ = auVar12._0_8_;
      return auVar6;
    }
    iStack_2a0 = iStack_2a0 * 2;
    if (30000000000 < iStack_2a0) {
      iStack_2a0 = 30000000000;
    }
  }
  auVar12 = (**(code **)(iStack0000000000000008 + 0x28))(uStack0000000000000010);
  auVar7._24_8_ = auVar12._8_8_;
  auVar7._0_16_ = ZEXT816(0);
  auVar7._16_8_ = auVar12._0_8_;
  return auVar7;
}
