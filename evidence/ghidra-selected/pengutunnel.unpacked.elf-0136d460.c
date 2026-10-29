/* Ghidra focused static decompilation; not original source.
Import SHA256: 3638b68f377a65d5a65f10b5d38744157067ecd175377094b6cd48c923b2bd18
Entry: 0136d460; whole-program auto-analysis disabled.
Go ABI/types/callees may be incomplete. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [32]
analyst_entry_0136d460
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,int param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_RAX;
  int extraout_RAX_00;
  int *piVar5;
  undefined8 *extraout_RAX_01;
  byte bVar2;
  uint *puVar6;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  uint uVar7;
  uint uVar24;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined8 extraout_RBX;
  int extraout_RBX_00;
  int extraout_RBX_01;
  undefined8 extraout_RBX_02;
  undefined8 extraout_RCX;
  undefined8 extraout_RCX_00;
  int extraout_RCX_01;
  undefined8 extraout_RCX_02;
  undefined8 extraout_RCX_03;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined8 extraout_RCX_04;
  undefined8 extraout_RBX_03;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined8 extraout_RCX_05;
  undefined8 extraout_RCX_06;
  undefined8 extraout_RBX_04;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined8 extraout_RCX_07;
  int iVar22;
  undefined *puVar23;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined8 extraout_RSI;
  int extraout_RDI;
  undefined8 *extraout_R9;
  undefined8 *extraout_R9_00;
  undefined8 *extraout_R11;
  undefined8 *extraout_R11_00;
  undefined8 *extraout_R11_01;
  undefined8 *extraout_R11_02;
  int *extraout_R11_03;
  undefined8 *extraout_R11_04;
  uint *extraout_R11_05;
  undefined8 *extraout_R11_06;
  undefined8 *extraout_R11_07;
  undefined8 *extraout_R11_08;
  undefined8 *extraout_R11_09;
  undefined8 *extraout_R11_10;
  undefined8 *extraout_R11_11;
  undefined8 *extraout_R11_12;
  undefined8 *extraout_R11_13;
  undefined8 *extraout_R11_14;
  undefined8 *extraout_R11_15;
  undefined8 *extraout_R11_16;
  int unaff_R14;
  bool bVar25;
  undefined8 in_XMM15_Qa;
  undefined8 in_XMM15_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000038;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  int iStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  int iStack_228;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  uint uStack_1e0;
  int iStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  uint uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  char *pcStack_18;
  undefined **ppuStack_10;

  uStack0000000000000008 = param_1;
  uStack0000000000000018 = param_3;
  uStack0000000000000010 = param_2;
  uStack0000000000000028 = param_5;
  uStack0000000000000038 = param_7;
  while (&uStack_2a8 <= *(undefined8 **)(unaff_R14 + 0x10)) {
    func_0x0047c9e0();
  }
  if (param_6 == 0) {
    auVar26 = (*(code *)*_DAT_02d5fc90)(0x81f15f01,0xffffc28a,_DAT_02d5fc80[6]);
    uStack_238 = auVar26._8_8_;
    uStack_130 = auVar26._0_8_;
    auVar26 = func_0x0066c760(uStack_130,uStack_238,0,0,0);
    if (auVar26._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_238;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11 = uStack_130;
      }
      *puVar3 = uStack_130;
      auVar26._8_8_ = puVar3;
      auVar26._0_8_ = &UNK_02c85ff0;
    }
    auVar8._24_8_ = auVar26._8_8_;
    auVar8._8_8_ = in_XMM15_Qb;
    auVar8._0_8_ = in_XMM15_Qa;
    auVar8._16_8_ = auVar26._0_8_;
    return auVar8;
  }
  iStack_228 = param_6;
  uStack_110 = uStack0000000000000028;
  auVar26 = func_0x0136d3e0(uStack0000000000000018,param_4,uStack0000000000000028,param_6);
  iStack_298 = auVar26._8_8_;
  uStack_188 = auVar26._0_8_;
  if (iStack_298 == 0) {
    auVar26 = (**(code **)_DAT_02d5fc88[1])
                        (0xc43ec1b5,0x6f,_DAT_02d5fc80[0xd],
                         *(undefined4 *)(*(int *)(_DAT_02d5fc88[5] + 8) + 8),0x2f4c9754a7d25eb3,
                         *(undefined8 *)(*(int *)(_DAT_02d5fc88[5] + 8) + 0x38));
    uStack_240 = auVar26._8_8_;
    uStack_138 = auVar26._0_8_;
    auVar27 = func_0x0066c760(uStack_138,uStack_240,0,0,0);
    if (auVar27._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_240;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11_00 = uStack_138;
      }
      *puVar3 = uStack_138;
      auVar27._8_8_ = puVar3;
      auVar27._0_8_ = &UNK_02c85ff0;
    }
    auVar9._24_8_ = auVar27._8_8_;
    auVar9._8_8_ = in_XMM15_Qb;
    auVar9._0_8_ = in_XMM15_Qa;
    auVar9._16_8_ = auVar27._0_8_;
    return auVar9;
  }
  auVar26 = func_0x0136ebc0();
  uStack_1a8 = auVar26._0_8_;
  auStack_30 = func_0x01396be0();
  uStack_70 = uStack_110;
  iStack_68 = iStack_228;
  uStack_60 = uStack_1a8;
  uStack_50 = uStack0000000000000038;
  uStack_40 = _DAT_02ddf6a0;
  uStack_38 = _DAT_02ddf6a8;
  uStack_20 = _DAT_02dde710;
  uStack_58 = auVar26._8_8_;
  iStack_48 = param_8;
  uVar4 = func_0x0041b340(&UNK_02c60000,&uStack_70);
  puStack_80 = &UNK_02c864f0;
  uStack_78 = 0x2d65aa0;
  func_0x008831e0(&UNK_02c60000,uVar4,&puStack_80,1,1);
  uStack_210 = extraout_RAX;
  auVar27 = func_0x0069e500(uStack_188,iStack_298,&UNK_01fd8178,1);
  auVar27 = func_0x0045f840(0,auVar27._0_8_,auVar27._8_8_,&UNK_01f5bfb2,7);
  uStack_1e8 = auVar27._0_8_;
  puVar3 = (undefined8 *)func_0x0041fd20(0x28,&UNK_02bd8ae8,1);
  puVar3[1] = extraout_RBX;
  puVar3[2] = extraout_RCX;
  if (_DAT_02e07dc0 != 0) {
    puVar3 = (undefined8 *)func_0x0047e260();
    *extraout_R11_01 = uStack_210;
  }
  *puVar3 = uStack_210;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffffffffffff;
  func_0x00ef4ee0(uStack0000000000000008,uStack0000000000000010,&UNK_01f57c16,4,uStack_1e8,
                  auVar27._8_8_,&UNK_02c86350,puVar3);
  if (extraout_RBX_00 != 0) {
    auVar11._8_8_ = in_XMM15_Qb;
    auVar11._0_8_ = in_XMM15_Qa;
    auVar11._16_8_ = extraout_RBX_00;
    auVar11._24_8_ = extraout_RCX_00;
    return auVar11;
  }
  iStack_1d8 = extraout_RAX_00;
  auVar27 = (**(code **)_DAT_02d5fc88[8])(0x8fe3512238222c67,0x785d,_DAT_02d5fc80[1]);
  uStack_290 = auVar27._8_8_;
  uStack_180 = auVar27._0_8_;
  auVar27 = (**(code **)_DAT_02d5fc80[0x12])
                      (_DAT_02d5fc80[0xb],DAT_02d5fcad,0xc5e6a8ec01101180,_DAT_02d5fcb8);
  uStack_2a8 = auVar27._8_8_;
  uStack_1a0 = auVar27._0_8_;
  uStack_190 = *(undefined8 *)(iStack_1d8 + 0x38);
  auVar27 = func_0x00d01b00(uStack_180,uStack_290);
  uStack_230 = auVar27._8_8_;
  uStack_118 = auVar27._0_8_;
  puStack_120 = (undefined8 *)func_0x0041f260(0x10,&UNK_02b04bd8,1);
  puStack_120[1] = uStack_2a8;
  if (_DAT_02e07dc0 != 0) {
    puStack_120 = (undefined8 *)func_0x0047e260();
    *extraout_R11_02 = uStack_1a0;
  }
  *puStack_120 = uStack_1a0;
  auVar27 = func_0x00408ea0(&UNK_02c5f5f0,uStack_190,uStack_118,uStack_230);
  piVar5 = auVar27._0_8_;
  piVar5[1] = 1;
  piVar5[2] = 1;
  if (_DAT_02e07dc0 != 0) {
    piVar5 = (int *)func_0x0047e280(piVar5,auVar27._8_8_,*piVar5);
    *extraout_R11_03 = (int)puStack_120;
    extraout_R11_03[1] = extraout_RCX_01;
  }
  *piVar5 = (int)puStack_120;
  func_0x00ea5f80(_DAT_02d42738,iStack_1d8);
  if (extraout_RBX_01 != 0) {
    uStack_1b0 = extraout_RCX_02;
    auVar26 = (*(code *)**(undefined8 **)(*(int *)(_DAT_02d5fc88[5] + 8) + 0x28))
                        (0x1e,*(undefined1 *)(_DAT_02d5fc88 + 2),(sdword)_DAT_02d5fc80[0x13],
                         *(undefined8 *)(*_DAT_02d5fc80 + 8));
    uStack_248 = auVar26._8_8_;
    uStack_140 = auVar26._0_8_;
    func_0x009baa60(extraout_RBX_01,uStack_1b0);
    uStack_88 = func_0x004754e0(extraout_RBX_02,extraout_RCX_03);
    puStack_90 = &UNK_02b5ef60;
    auVar28 = func_0x0066c760(uStack_140,uStack_248,&puStack_90,1,1);
    if (auVar28._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_248;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11_04 = uStack_140;
      }
      *puVar3 = uStack_140;
      auVar28._8_8_ = puVar3;
      auVar28._0_8_ = &UNK_02c85ff0;
    }
    auVar10._24_8_ = auVar28._8_8_;
    auVar10._8_8_ = in_XMM15_Qb;
    auVar10._0_8_ = in_XMM15_Qa;
    auVar10._16_8_ = auVar28._0_8_;
    return auVar10;
  }
  uStack_a0 = extraout_RAX_01[8];
  uStack_98 = extraout_RAX_01[9];
  puStack_a8 = &UNK_013bb200;
  ppuStack_10 = &puStack_a8;
  iVar22 = extraout_RAX_01[8];
  uStack_1e0 = extraout_RAX_01[9];
  uVar7 = 0;
  puStack_200 = extraout_RAX_01;
  if (iVar22 != 0) {
    uVar7 = (uint)*(dword *)(iVar22 + 0x10);
    do {
      uVar24 = uVar7 & *_DAT_02d446f0;
      if (_DAT_02d446f0[uVar24 * 2 + 1] == *(uint *)(iVar22 + 8)) {
        uVar7 = _DAT_02d446f0[uVar24 * 2 + 2];
        goto LAB_0136dca5;
      }
      uVar7 = uVar7 + 1;
    } while (_DAT_02d446f0[uVar24 * 2 + 1] != 0);
    uVar7 = func_0x0041b560(&DAT_02d446f0);
  }
LAB_0136dca5:
  uStack_118 = uVar7;
  puVar6 = (uint *)func_0x0041f5c0(0x18,&UNK_02bc6528,1);
  *puVar6 = uStack_118;
  if (_DAT_02e07dc0 != 0) {
    puVar6 = (uint *)func_0x0047e260();
    *extraout_R11_05 = uStack_1e0;
  }
  puVar6[1] = uStack_1e0;
  puVar6[2] = 0x10000;
  func_0x00628620(&UNK_02c860d0,puVar6);
  if (extraout_RDI != 0) {
    uStack_1b0 = extraout_RSI;
    auVar26 = (**(code **)_DAT_02d5fc80[9])(0xffffff99,_DAT_02d5fc80[0xf],_DAT_02d5fc80[0x14]);
    uStack_250 = auVar26._8_8_;
    uStack_148 = auVar26._0_8_;
    if (extraout_RDI == 0) {
      uStack_b8 = 0;
    }
    else {
      uStack_b8 = *(undefined8 *)(extraout_RDI + 8);
    }
    uStack_b0 = uStack_1b0;
    auStack_220 = func_0x0066c760(uStack_148,uStack_250,&uStack_b8,1,1);
    if (auStack_220._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_250;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11_16 = uStack_148;
      }
      *puVar3 = uStack_148;
      auStack_220._8_8_ = puVar3;
      auStack_220._0_8_ = &UNK_02c85ff0;
    }
    uStack_1f8 = in_XMM15_Qa;
    uStack_1f0 = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar21._8_8_ = uStack_1f0;
    auVar21._0_8_ = uStack_1f8;
    auVar21._16_8_ = auStack_220._0_8_;
    auVar21._24_8_ = auStack_220._8_8_;
    return auVar21;
  }
  iVar22 = puStack_200[2];
  if (iVar22 == 0x1ad) {
    auVar26 = (*(code *)*_DAT_02d5fcb0)
                        (*(undefined1 *)_DAT_02d5fc88[5],(sdword)_DAT_02d5fc80[10],_DAT_02d5fcc8);
    iStack_228 = auVar26._8_8_;
    uStack_110 = auVar26._0_8_;
    auStack_220._8_8_ = func_0x0041f9c0(0x20,&UNK_02bc57a8,1);
    *(int *)(auStack_220._8_8_ + 8) = iStack_228;
    if (_DAT_02e07dc0 != 0) {
      auStack_220._8_8_ = func_0x0047e280();
      *extraout_R11_15 = uStack_110;
      extraout_R11_15[1] = uStack0000000000000038;
    }
    *(undefined8 *)auStack_220._8_8_ = uStack_110;
    *(int *)(auStack_220._8_8_ + 0x18) = param_8;
    *(undefined8 *)(auStack_220._8_8_ + 0x10) = uStack0000000000000038;
    auStack_220._0_8_ = &UNK_02c864b0;
    uStack_1f8 = in_XMM15_Qa;
    uStack_1f0 = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar20._8_8_ = uStack_1f0;
    auVar20._0_8_ = uStack_1f8;
    auVar20._16_8_ = auStack_220._0_8_;
    auVar20._24_8_ = auStack_220._8_8_;
    return auVar20;
  }
  uStack_288 = extraout_RBX_03;
  uStack_280 = extraout_RCX_04;
  uStack_178 = extraout_RAX_02;
  if ((iVar22 != 200) && (iVar22 != 0x193)) {
    auVar26 = (*(code *)**(undefined8 **)(*(int *)(_DAT_02d5fc88[5] + 8) + 0x20))
                        (0xffffff94,0x2066,0xffffeaa4,*(undefined2 *)(_DAT_02d5fc88[5] + 2),
                         0xffffff82,_DAT_02d5fc80[0x16]);
    uStack_258 = auVar26._8_8_;
    uStack_150 = auVar26._0_8_;
    func_0x0045fdc0(0,uStack_178,uStack_288);
    auVar26 = func_0x0069e740();
    iStack_228 = auVar26._8_8_;
    uStack_110 = auVar26._0_8_;
    uStack_d0 = func_0x004754e0(*puStack_200,puStack_200[1]);
    puStack_d8 = &UNK_02b5ef60;
    uStack_c0 = func_0x004754e0(uStack_110,iStack_228);
    puStack_c8 = &UNK_02b5ef60;
    auStack_220 = func_0x0066c760(uStack_150,uStack_258,&puStack_d8,2,2);
    if (auStack_220._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_258;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11_06 = uStack_150;
      }
      *puVar3 = uStack_150;
      auStack_220._8_8_ = puVar3;
      auStack_220._0_8_ = &UNK_02c85ff0;
    }
    uStack_1f8 = in_XMM15_Qa;
    uStack_1f0 = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar12._8_8_ = uStack_1f0;
    auVar12._0_8_ = uStack_1f8;
    auVar12._16_8_ = auStack_220._0_8_;
    auVar12._24_8_ = auStack_220._8_8_;
    return auVar12;
  }
  pcStack_18 = (char *)func_0x0041e9a0(&UNK_02c68280);
  puStack_80 = &UNK_02c864f0;
  uStack_78 = 0x2d65aa0;
  auVar27 = func_0x00883e20(uStack_178,uStack_288,uStack_280,&UNK_02aca3f0,pcStack_18,&puStack_80,1,
                            1);
  uStack_208 = auVar27._8_8_;
  iVar22 = auVar27._0_8_;
  if (iVar22 != 0) {
    auVar26 = (**(code **)_DAT_02d5fc80[7])(0xc420c6b063bc21a4,0x2e,_DAT_02d5fc80[3]);
    uStack_260 = auVar26._8_8_;
    uStack_158 = auVar26._0_8_;
    if (iVar22 == 0) {
      uStack_e8 = 0;
    }
    else {
      uStack_e8 = *(undefined8 *)(iVar22 + 8);
    }
    uStack_e0 = uStack_208;
    auStack_220 = func_0x0066c760(uStack_158,uStack_260,&uStack_e8,1,1);
    if (auStack_220._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_260;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11_07 = uStack_158;
      }
      *puVar3 = uStack_158;
      auStack_220._8_8_ = puVar3;
      auStack_220._0_8_ = &UNK_02c85ff0;
    }
    uStack_1f8 = in_XMM15_Qa;
    uStack_1f0 = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar13._8_8_ = uStack_1f0;
    auVar13._0_8_ = uStack_1f8;
    auVar13._16_8_ = auStack_220._0_8_;
    auVar13._24_8_ = auStack_220._8_8_;
    return auVar13;
  }
  auVar26 = func_0x01399080(*pcStack_18,*(undefined8 *)(pcStack_18 + 8),
                            *(undefined8 *)(pcStack_18 + 0x10),*(undefined8 *)(pcStack_18 + 0x18),
                            uStack_1a8,auVar26._8_8_);
  uStack_2a0 = auVar26._8_8_;
  uStack_198 = auVar26._0_8_;
  auVar26 = func_0x0069e740(_DAT_02ddf610,_DAT_02ddf618);
  if (auVar26._8_8_ == 0) {
    cVar1 = func_0x013993c0(uStack_110,iStack_228,uStack_198,uStack_2a0,
                            *(undefined8 *)(pcStack_18 + 0x30),*(undefined8 *)(pcStack_18 + 0x38));
    if (cVar1 == '\0') {
      auVar26 = (*(code *)*_DAT_02d5fcd0)
                          (0x2f0a722,*(undefined2 *)(_DAT_02d5fc88[5] + 4),_DAT_02d5fc80[0x10],
                           _DAT_02d5fcc0);
      uStack_270 = auVar26._8_8_;
      uStack_168 = auVar26._0_8_;
      auStack_220 = func_0x0066c760(uStack_168,uStack_270,0,0,0);
      if (auStack_220._0_8_ == 0) {
        puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
        puVar3[1] = uStack_270;
        if (_DAT_02e07dc0 != 0) {
          puVar3 = (undefined8 *)func_0x0047e260();
          *extraout_R11_14 = uStack_168;
        }
        *puVar3 = uStack_168;
        auStack_220._8_8_ = puVar3;
        auStack_220._0_8_ = &UNK_02c85ff0;
      }
      uStack_1f8 = in_XMM15_Qa;
      uStack_1f0 = in_XMM15_Qb;
      (*(code *)*ppuStack_10)();
      auVar19._8_8_ = uStack_1f0;
      auVar19._0_8_ = uStack_1f8;
      auVar19._16_8_ = auStack_220._0_8_;
      auVar19._24_8_ = auStack_220._8_8_;
      return auVar19;
    }
  }
  else {
    cVar1 = func_0x01399da0(auVar26._0_8_,auVar26._8_8_,uStack_198,uStack_2a0,
                            *(undefined8 *)(pcStack_18 + 0x50),*(undefined8 *)(pcStack_18 + 0x58));
    if (cVar1 == '\0') {
      auVar26 = (**(code **)*_DAT_02d5fc88)
                          (0x8e72e72f14235559,*(undefined4 *)(_DAT_02d5fc88[5] + 0x14),0xffffffff,
                           _DAT_02d5fc88[6]);
      uStack_268 = auVar26._8_8_;
      uStack_160 = auVar26._0_8_;
      auStack_220 = func_0x0066c760(uStack_160,uStack_268,0,0,0);
      if (auStack_220._0_8_ == 0) {
        puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
        puVar3[1] = uStack_268;
        if (_DAT_02e07dc0 != 0) {
          puVar3 = (undefined8 *)func_0x0047e260();
          *extraout_R11_08 = uStack_160;
        }
        *puVar3 = uStack_160;
        auStack_220._8_8_ = puVar3;
        auStack_220._0_8_ = &UNK_02c85ff0;
      }
      uStack_1f8 = in_XMM15_Qa;
      uStack_1f0 = in_XMM15_Qb;
      (*(code *)*ppuStack_10)();
      auVar14._8_8_ = uStack_1f0;
      auVar14._0_8_ = uStack_1f8;
      auVar14._16_8_ = auStack_220._0_8_;
      auVar14._24_8_ = auStack_220._8_8_;
      return auVar14;
    }
  }
  if (param_8 == 0) {
    bVar2 = 0;
  }
  else if (param_8 == *(int *)(pcStack_18 + 0x10)) {
    bVar2 = func_0x0040a300(*(undefined8 *)(pcStack_18 + 8),uStack0000000000000038);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 1;
  }
  if (bVar2 != 0) {
    auVar26 = (**(code **)_DAT_02d5fc88[7])(0x4a98e2f9,0x25,_DAT_02d5fc88[3]);
    uStack_278 = auVar26._8_8_;
    uStack_170 = auVar26._0_8_;
    uStack_100 = func_0x004754e0(*(undefined8 *)(pcStack_18 + 8),*(undefined8 *)(pcStack_18 + 0x10))
    ;
    puStack_108 = &UNK_02b5ef60;
    uStack_f0 = func_0x004754e0(uStack0000000000000038,param_8);
    puStack_f8 = &UNK_02b5ef60;
    auStack_220 = func_0x0066c760(uStack_170,uStack_278,&puStack_108,2,2);
    if (auStack_220._0_8_ == 0) {
      puVar3 = (undefined8 *)func_0x0041f260(0x10,&UNK_02bac6d0,1);
      puVar3[1] = uStack_278;
      if (_DAT_02e07dc0 != 0) {
        puVar3 = (undefined8 *)func_0x0047e260();
        *extraout_R11_13 = uStack_170;
      }
      *puVar3 = uStack_170;
      auStack_220._8_8_ = puVar3;
      auStack_220._0_8_ = &UNK_02c85ff0;
    }
    uStack_1f8 = in_XMM15_Qa;
    uStack_1f0 = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar18._8_8_ = uStack_1f0;
    auVar18._0_8_ = uStack_1f8;
    auVar18._16_8_ = auStack_220._0_8_;
    auVar18._24_8_ = auStack_220._8_8_;
    return auVar18;
  }
  if (*pcStack_18 == '\0') {
    iVar22 = *(int *)(pcStack_18 + 0x28);
    puStack_1d0 = *(undefined **)(pcStack_18 + 0x20);
    auStack_220._8_8_ = func_0x0041f9c0(0x20,&UNK_02bc57a8,1);
    bVar25 = iVar22 == 0;
    if (bVar25) {
      iVar22 = 6;
    }
    *(int *)(auStack_220._8_8_ + 8) = iVar22;
    puVar23 = puStack_1d0;
    if (bVar25) {
      puVar23 = &UNK_01f59e83;
    }
    if (_DAT_02e07dc0 != 0) {
      auStack_220._8_8_ = func_0x0047e260();
      *extraout_R11_11 = puVar23;
    }
    *(undefined **)auStack_220._8_8_ = puVar23;
    uVar4 = *(undefined8 *)(pcStack_18 + 8);
    *(undefined8 *)(auStack_220._8_8_ + 0x18) = *(undefined8 *)(pcStack_18 + 0x10);
    if (_DAT_02e07dc0 != 0) {
      auStack_220._8_8_ = func_0x0047e260();
      *extraout_R11_12 = extraout_RCX_07;
      uVar4 = extraout_RCX_07;
    }
    *(undefined8 *)(auStack_220._8_8_ + 0x10) = uVar4;
    auStack_220._0_8_ = &UNK_02c864b0;
    uStack_1f8 = in_XMM15_Qa;
    uStack_1f0 = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar17._8_8_ = uStack_1f0;
    auVar17._0_8_ = uStack_1f8;
    auVar17._16_8_ = auStack_220._0_8_;
    auVar17._24_8_ = auStack_220._8_8_;
    return auVar17;
  }
  if (*(int *)(pcStack_18 + 0x18) == 0) {
    bVar25 = false;
  }
  else {
    auVar26 = func_0x005350a0();
    iVar22 = auVar26._8_8_;
    if ((int)auVar26._0_8_ < 0) {
      iVar22 = ((auVar26._0_8_ & 0x7fffffffffffffff) >> 0x1e) + 0xdd7b17f80;
    }
    bVar25 = *(int *)(pcStack_18 + 0x18) < iVar22 + -0xe7791f700;
  }
  if (!bVar25) {
    func_0x01396ca0(*(undefined8 *)(pcStack_18 + 0x60),*(undefined8 *)(pcStack_18 + 0x68));
    uStack_1f8 = *(undefined8 *)(pcStack_18 + 0x40);
    uStack_1f0 = *(undefined8 *)(pcStack_18 + 0x48);
    auStack_220._0_8_ = in_XMM15_Qa;
    auStack_220._8_8_ = in_XMM15_Qb;
    (*(code *)*ppuStack_10)();
    auVar16._8_8_ = uStack_1f0;
    auVar16._0_8_ = uStack_1f8;
    auVar16._16_8_ = auStack_220._0_8_;
    auVar16._24_8_ = auStack_220._8_8_;
    return auVar16;
  }
  auVar26 = (*(code *)**(undefined8 **)(*(int *)(_DAT_02d5fc88[5] + 8) + 0x18))
                      (_DAT_02d5fc80[0x15],0x3b2,*(undefined4 *)(_DAT_02d5fc88[5] + 0x10),
                       _DAT_02d5fc80[0x11],0xf1903f324d38c3fc,_DAT_02d5fc80[2]);
  iStack_228 = auVar26._8_8_;
  uStack_110 = auVar26._0_8_;
  iStack_1c0 = *(int *)(pcStack_18 + 0x18) + 0xe7791f700;
  uStack_1c8 = 0;
  uStack_1b8 = 0;
  auVar26 = func_0x004fe840(0,iStack_1c0,0);
  uStack_230 = auVar26._8_8_;
  uStack_118 = auVar26._0_8_;
  puStack_128 = (undefined8 *)func_0x0041f9c0(0x20,&UNK_02bc57a8,1);
  auVar29 = func_0x0045f840(0,uStack_110,iStack_228,uStack_118,uStack_230);
  puStack_128[1] = auVar29._8_8_;
  auStack_220._8_8_ = puStack_128;
  if (_DAT_02e07dc0 != 0) {
    func_0x0047e280(auVar29._0_8_,auVar29._8_8_,*puStack_128);
    auVar29._8_8_ = extraout_RBX_04;
    auVar29._0_8_ = extraout_RAX_03;
    *extraout_R11_09 = extraout_RAX_03;
    extraout_R11_09[1] = extraout_RCX_05;
    auStack_220._8_8_ = extraout_R9;
  }
  *(int *)auStack_220._8_8_ = auVar29._0_8_;
  uVar4 = *(undefined8 *)(pcStack_18 + 8);
  *(undefined8 *)(auStack_220._8_8_ + 0x18) = *(undefined8 *)(pcStack_18 + 0x10);
  if (_DAT_02e07dc0 != 0) {
    uVar4 = func_0x0047e280(uVar4,auVar29._8_8_,*(undefined8 *)(auStack_220._8_8_ + 0x10));
    *extraout_R11_10 = uVar4;
    extraout_R11_10[1] = extraout_RCX_06;
    auStack_220._8_8_ = extraout_R9_00;
  }
  *(undefined8 *)(auStack_220._8_8_ + 0x10) = uVar4;
  auStack_220._0_8_ = &UNK_02c864b0;
  uStack_1f8 = in_XMM15_Qa;
  uStack_1f0 = in_XMM15_Qb;
  (*(code *)*ppuStack_10)();
  auVar15._8_8_ = uStack_1f0;
  auVar15._0_8_ = uStack_1f8;
  auVar15._16_8_ = auStack_220._0_8_;
  auVar15._24_8_ = auStack_220._8_8_;
  return auVar15;
}
