// ==== internal int NGEHJLMOFHG(string i) { }   @0xb589f8

/* WARNING: Removing unreachable block (ram,0x00f4578c) */
/* WARNING: Removing unreachable block (ram,0x00f45790) */
/* WARNING: Removing unreachable block (ram,0x00f457b8) */
/* WARNING: Removing unreachable block (ram,0x00f457bc) */
/* WARNING: Removing unreachable block (ram,0x00f457ec) */
/* WARNING: Removing unreachable block (ram,0x00f45804) */
/* WARNING: Removing unreachable block (ram,0x00f45814) */
/* WARNING: Removing unreachable block (ram,0x00f45818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int KKDJDGPGFPN___c__NGEHJLMOFHG(void *__this,void *i)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  short *psVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  uint uStack_124;
  code *pcStack_120;
  long lStack_118;
  code *pcStack_110;
  long lStack_108;
  short *psStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  byte abStack_d8 [4];
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  long lStack_48;
  
  uVar7 = 0;
  if ((bRam0000000001918361 & 1) == 0) {
    func_0x00a67900(&System_Number_TypeInfo,0);
    bRam0000000001918361 = 1;
    uVar7 = extraout_x1;
  }
  if (i == (void *)0x0) {
    System_ThrowHelper__ThrowArgumentNullException(0x30,0);
    uVar7 = extraout_x1_00;
  }
  if (cRam00000000019173c8 == '\0') {
    func_0x00a67900(&Method_System_ReadOnlySpan_char___ctor__,uVar7);
    cRam00000000019173c8 = '\x01';
  }
  if (i == (void *)0x0) {
    uVar11 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = System_String__GetRawStringData(i,0);
    uVar11 = (ulong)*(uint *)((long)i + 0x10);
  }
  psVar6 = (short *)System_Globalization_NumberFormatInfo__get_CurrentInfo(0);
  if (*(int *)(_System_Number_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Number_TypeInfo);
  }
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar10 = 7;
  if ((bRam00000000019183e5 & 1) == 0) {
    func_0x00a67900(&System_Number_TypeInfo);
    func_0x00a67900(&Str_Value_was_either_too_large_or_too_small_);
    bRam00000000019183e5 = 1;
  }
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_5e = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  abStack_d8[0] = 0;
  if (*(int *)(_System_Number_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = 7;
  psVar9 = psVar6;
  uVar4 = System_Number__TryParseInt32IntegerStyle
                    (uVar7,uVar11,7,psVar6,(long)&uStack_e0 + 4,abStack_d8);
  if ((uVar4 & 1) == 0) {
    uVar10 = (ulong)abStack_d8[0];
    func_0x009bc3b0(_System_Number_TypeInfo);
    System_Number__ThrowOverflowOrFormatException
              (uVar10,_Str_Value_was_either_too_large_or_too_small_);
  }
  else if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return uStack_e0._4_4_;
  }
  auVar12 = func_0x016dec70();
  lVar5 = auVar12._0_8_;
  pcStack_110 = System_Int16__TryParse;
  lStack_108 = lVar2;
  psStack_100 = psVar6;
  uStack_f8 = uVar7;
  uStack_f0 = uVar11;
  uStack_e8 = uVar10;
  System_Globalization_NumberFormatInfo__ValidateParseStyleInteger(auVar12._8_8_ & 0xffffffff,0);
  if (lVar5 == 0) {
    *psVar9 = 0;
    return 0;
  }
  if (cRam00000000019173c8 == '\0') {
    func_0x00a67900(&Method_System_ReadOnlySpan_char___ctor__);
    cRam00000000019173c8 = '\x01';
  }
  uVar7 = System_String__GetRawStringData(lVar5,0);
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  uVar8 = System_Globalization_NumberFormatInfo__GetInstance(uVar8,0);
  pcStack_120 = pcStack_110;
  pcStack_110 = (code *)&System_Number_TypeInfo;
  lStack_118 = (long)&uStack_e0 + 4;
  if ((bRam000000000191834c & 1) == 0) {
    func_0x00a67900(&System_Number_TypeInfo);
    bRam000000000191834c = 1;
  }
  uStack_124 = 0;
  *psVar9 = 0;
  if (*(int *)(_System_Number_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = System_Number__TryParseInt32(uVar7,uVar1,auVar12._8_8_ & 0xffffffff,uVar8,&uStack_124);
  if ((uVar11 & 1) == 0) {
LAB_00f459d8:
    iVar3 = 0;
  }
  else {
    if ((auVar12._8_4_ >> 9 & 1) == 0) {
      if (uStack_124 != (int)(short)uStack_124) goto LAB_00f459d8;
    }
    else if (uStack_124 >> 0x10 != 0) goto LAB_00f459d8;
    iVar3 = 1;
    *psVar9 = (short)uStack_124;
  }
  return iVar3;
}


