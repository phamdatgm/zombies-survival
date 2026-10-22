// ==== public static byte[] COCCMCDDMBM(string MGBIFHOADHG, Encoding CBMECEHNMMG) { }   @0xb3c420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * KNIEPIEJMDD__COCCMCDDMBM(void *MGBIFHOADHG,void *CBMECEHNMMG)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined8 uVar6;
  void *MGBIFHOADHG_00;
  undefined8 uVar7;
  uint extraout_w1;
  uint uVar8;
  int in_w4;
  int in_w5;
  int in_w6;
  ulong uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  if (MGBIFHOADHG == (void *)0x0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    unaff_x19 = func_0x00a67b44();
    unaff_x20 = func_0x00a67914(&Str_input);
    puVar5 = &Str_Unable_to_calculate_hash_over_null_input;
  }
  else {
    if (CBMECEHNMMG != (void *)0x0) {
      pvVar4 = (void *)(**(code **)(*(long *)CBMECEHNMMG + 0x268))
                                 (CBMECEHNMMG,MGBIFHOADHG,
                                  *(undefined8 *)(*(long *)CBMECEHNMMG + 0x270));
      puVar1 = (undefined1 *)register0x00000008;
      goto code_r0x00c3c4e4;
    }
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    unaff_x19 = func_0x00a67b44();
    unaff_x20 = func_0x00a67914(&Str_encoding);
    puVar5 = &Str_Unable_to_calculate_hash_over_a_string_w;
  }
  uVar7 = func_0x00a67914(puVar5);
  System_ArgumentNullException___ctor(unaff_x19,unaff_x20,uVar7,0);
  uVar7 = func_0x00a67914(&Method_KNIEPIEJMDD_COCCMCDDMBM__);
  unaff_x30 = KNIEPIEJMDD__COCCMCDDMBM;
  pvVar4 = (void *)func_0x00a67a20(unaff_x19,uVar7);
code_r0x00c3c4e4:
  *(code **)(puVar1 + -0x20) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + -8) = unaff_x19;
  if (pvVar4 == (void *)0x0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar7 = func_0x00a67b44();
    uVar6 = func_0x00a67914(&Str_input);
    uVar2 = func_0x00a67914(&Str_Unable_to_calculate_hash_over_null_input);
    uVar8 = 0;
    System_ArgumentNullException___ctor(uVar7,uVar6);
    uVar6 = func_0x00a67914(&Method_KNIEPIEJMDD_COCCMCDDMBM__);
    iVar3 = func_0x00a67a20(uVar7,uVar6);
    uVar2 = in_w4 + iVar3 + ((extraout_w1 | uVar8 ^ 0xffffffff) ^ uVar2) + in_w6;
    return (void *)(ulong)((uVar2 >> (-in_w5 & 0x1fU) | uVar2 << 0x20 - (-in_w5 & 0x1fU)) +
                          extraout_w1);
  }
  *(undefined8 *)(puVar1 + -0x28) = 0x1032547698badcfe;
  *(undefined8 *)(puVar1 + -0x30) = 0xefcdab8967452301;
  uVar9 = *(ulong *)((long)pvVar4 + 0x18);
  if ((int)uVar9 + -0x40 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      KNIEPIEJMDD__AEICFIFFEJB(pvVar4,puVar1 + -0x30,iVar3);
      uVar9 = *(ulong *)((long)pvVar4 + 0x18);
      iVar3 = iVar3 + 0x40;
    } while (iVar3 <= (int)uVar9 + -0x40);
  }
  uVar7 = *(undefined8 *)(puVar1 + -0x30);
  uVar2 = (int)uVar9 - iVar3;
  *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x30) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  *(undefined8 *)(puVar1 + -0x50) = uVar7;
  if ((bRam000000000191710d & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo);
    bRam000000000191710d = 1;
  }
  MGBIFHOADHG_00 = (void *)func_0x00a679a0(_byte___TypeInfo,0x40);
  uVar7 = System_BitConverter__GetBytes
                    (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3,0);
  System_Array__Copy(pvVar4,iVar3,MGBIFHOADHG_00,0,uVar2,0);
  if (MGBIFHOADHG_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)((long)MGBIFHOADHG_00 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined1 *)((long)MGBIFHOADHG_00 + (long)(int)uVar2 + 0x20) = 0x80;
  if (0x37 < (int)uVar2) {
    KNIEPIEJMDD__AEICFIFFEJB(MGBIFHOADHG_00,puVar1 + -0x50,0);
    MGBIFHOADHG_00 = (void *)func_0x00a679a0(_byte___TypeInfo,0x40);
  }
  System_Array__Copy(uVar7,0,MGBIFHOADHG_00,0x38,8,0);
  KNIEPIEJMDD__AEICFIFFEJB(MGBIFHOADHG_00,puVar1 + -0x50,0);
  pvVar4 = (void *)func_0x00a679a0(_byte___TypeInfo,0x10);
  uVar7 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x50),0);
  System_Array__Copy(uVar7,0,pvVar4,0,4,0);
  uVar7 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x4c),0);
  System_Array__Copy(uVar7,0,pvVar4,4,4,0);
  uVar7 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x48),0);
  System_Array__Copy(uVar7,0,pvVar4,8,4,0);
  uVar7 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x44),0);
  System_Array__Copy(uVar7,0,pvVar4,0xc,4,0);
  return pvVar4;
}


// ==== internal static void AEICFIFFEJB(byte[] MGBIFHOADHG, ref JJDMDPAIABJ BIOHJEJFDIF, int LFFFFEGHPFJ) { }   @0xb3c698

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KNIEPIEJMDD__AEICFIFFEJB(void *MGBIFHOADHG,void *BIOHJEJFDIF,int LFFFFEGHPFJ)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  void *pvVar24;
  
  pvVar24 = KNIEPIEJMDD__NBFIJBHBCCH(MGBIFHOADHG,LFFFFEGHPFJ);
  if (pvVar24 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar23 = *(uint *)((long)pvVar24 + 0x18);
  if (((((uVar23 != 0) && (uVar23 != 1)) && (2 < uVar23)) &&
      (((uVar23 != 3 && (4 < uVar23)) && ((uVar23 != 5 && ((6 < uVar23 && (uVar23 != 7)))))))) &&
     ((8 < uVar23 &&
      (((((uVar23 != 9 && (10 < uVar23)) && (uVar23 != 0xb)) && ((0xc < uVar23 && (uVar23 != 0xd))))
       && ((0xe < uVar23 && (uVar23 != 0xf)))))))) {
    uVar13 = *(uint *)((long)BIOHJEJFDIF + 4);
    uVar4 = *(uint *)((long)BIOHJEJFDIF + 8);
    uVar14 = *(uint *)((long)BIOHJEJFDIF + 0xc);
    iVar5 = *(int *)((long)pvVar24 + 0x20);
    iVar15 = *(int *)((long)pvVar24 + 0x24);
    uVar23 = *(int *)BIOHJEJFDIF + (uVar4 & uVar13) + (uVar14 & (uVar13 ^ 0xffffffff)) + iVar5 +
             0xd76aa478;
    uVar23 = (uVar23 >> 0x19 | uVar23 * 0x80) + uVar13;
    uVar1 = uVar14 + (uVar23 & uVar13) + (uVar4 & (uVar23 ^ 0xffffffff)) + iVar15 + 0xe8c7b756;
    iVar6 = *(int *)((long)pvVar24 + 0x28);
    iVar16 = *(int *)((long)pvVar24 + 0x2c);
    uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar23;
    uVar2 = uVar4 + (uVar1 & uVar23) + (uVar13 & (uVar1 ^ 0xffffffff)) + iVar6 + 0x242070db;
    uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar1;
    uVar3 = uVar13 + (uVar2 & uVar1) + (uVar23 & (uVar2 ^ 0xffffffff)) + iVar16 + 0xc1bdceee;
    iVar7 = *(int *)((long)pvVar24 + 0x30);
    iVar17 = *(int *)((long)pvVar24 + 0x34);
    uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar2;
    uVar23 = uVar23 + (uVar3 & uVar2) + (uVar1 & (uVar3 ^ 0xffffffff)) + iVar7 + 0xf57c0faf;
    uVar23 = (uVar23 >> 0x19 | uVar23 * 0x80) + uVar3;
    uVar1 = uVar1 + (uVar23 & uVar3) + (uVar2 & (uVar23 ^ 0xffffffff)) + iVar17 + 0x4787c62a;
    iVar8 = *(int *)((long)pvVar24 + 0x38);
    iVar18 = *(int *)((long)pvVar24 + 0x3c);
    uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar23;
    uVar2 = uVar2 + (uVar1 & uVar23) + (uVar3 & (uVar1 ^ 0xffffffff)) + iVar8 + 0xa8304613;
    uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar1;
    uVar3 = uVar3 + (uVar2 & uVar1) + (uVar23 & (uVar2 ^ 0xffffffff)) + iVar18 + 0xfd469501;
    iVar9 = *(int *)((long)pvVar24 + 0x40);
    iVar19 = *(int *)((long)pvVar24 + 0x44);
    uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar2;
    uVar23 = uVar23 + (uVar3 & uVar2) + (uVar1 & (uVar3 ^ 0xffffffff)) + iVar9 + 0x698098d8;
    uVar23 = (uVar23 >> 0x19 | uVar23 * 0x80) + uVar3;
    uVar1 = uVar1 + (uVar23 & uVar3) + (uVar2 & (uVar23 ^ 0xffffffff)) + iVar19 + 0x8b44f7af;
    iVar10 = *(int *)((long)pvVar24 + 0x48);
    iVar20 = *(int *)((long)pvVar24 + 0x4c);
    uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar23;
    uVar2 = (uVar2 + (uVar1 & uVar23) + (uVar3 & (uVar1 ^ 0xffffffff)) + iVar10) - 0xa44f;
    uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar1;
    uVar3 = uVar3 + (uVar2 & uVar1) + (uVar23 & (uVar2 ^ 0xffffffff)) + iVar20 + 0x895cd7be;
    iVar11 = *(int *)((long)pvVar24 + 0x50);
    iVar21 = *(int *)((long)pvVar24 + 0x54);
    uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar2;
    uVar23 = uVar23 + (uVar3 & uVar2) + (uVar1 & (uVar3 ^ 0xffffffff)) + iVar11 + 0x6b901122;
    uVar23 = (uVar23 >> 0x19 | uVar23 * 0x80) + uVar3;
    uVar1 = uVar1 + (uVar23 & uVar3) + (uVar2 & (uVar23 ^ 0xffffffff)) + iVar21 + 0xfd987193;
    iVar12 = *(int *)((long)pvVar24 + 0x58);
    iVar22 = *(int *)((long)pvVar24 + 0x5c);
    uVar1 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar23;
    uVar2 = uVar2 + (uVar1 & uVar23) + (uVar3 & (uVar1 ^ 0xffffffff)) + iVar12 + 0xa679438e;
    uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) + uVar1;
    uVar3 = uVar3 + (uVar2 & uVar1) + (uVar23 & (uVar2 ^ 0xffffffff)) + iVar22 + 0x49b40821;
    uVar3 = (uVar3 >> 10 | uVar3 * 0x400000) + uVar2;
    uVar23 = iVar15 + uVar23 + (uVar2 & ~uVar1) + (uVar3 & uVar1) + 0xf61e2562;
    uVar23 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar3;
    uVar1 = iVar8 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar23 & uVar2) + 0xc040b340;
    uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar23;
    uVar2 = iVar20 + uVar2 + (uVar23 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0x265e5a51;
    uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar1;
    uVar3 = iVar5 + uVar3 + (uVar1 & (uVar23 ^ 0xffffffff)) + (uVar2 & uVar23) + 0xe9b6c7aa;
    uVar3 = (uVar3 >> 0xc | uVar3 * 0x100000) + uVar2;
    uVar23 = iVar17 + uVar23 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0xd62f105d;
    uVar23 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar3;
    uVar1 = iVar10 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar23 & uVar2) + 0x2441453;
    uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar23;
    uVar2 = iVar22 + uVar2 + (uVar23 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xd8a1e681;
    uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar1;
    uVar3 = iVar7 + uVar3 + (uVar1 & (uVar23 ^ 0xffffffff)) + (uVar2 & uVar23) + 0xe7d3fbc8;
    uVar3 = (uVar3 >> 0xc | uVar3 * 0x100000) + uVar2;
    uVar23 = iVar19 + uVar23 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0x21e1cde6;
    uVar23 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar3;
    uVar1 = iVar12 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar23 & uVar2) + 0xc33707d6;
    uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar23;
    uVar2 = iVar16 + uVar2 + (uVar23 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xf4d50d87;
    uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar1;
    uVar3 = iVar9 + uVar3 + (uVar1 & (uVar23 ^ 0xffffffff)) + (uVar2 & uVar23) + 0x455a14ed;
    uVar3 = (uVar3 >> 0xc | uVar3 * 0x100000) + uVar2;
    uVar23 = iVar21 + uVar23 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0xa9e3e905;
    uVar23 = (uVar23 >> 0x1b | uVar23 * 0x20) + uVar3;
    uVar1 = iVar6 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar23 & uVar2) + 0xfcefa3f8;
    uVar1 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar23;
    uVar2 = iVar18 + uVar2 + (uVar23 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0x676f02d9;
    uVar2 = (uVar2 >> 0x12 | uVar2 * 0x4000) + uVar1;
    uVar3 = iVar11 + uVar3 + (uVar1 & (uVar23 ^ 0xffffffff)) + (uVar2 & uVar23) + 0x8d2a4c8a;
    uVar3 = (uVar3 >> 0xc | uVar3 * 0x100000) + uVar2;
    uVar23 = (iVar17 + uVar23 + (uVar3 ^ uVar2 ^ uVar1)) - 0x5c6be;
    uVar23 = (uVar23 >> 0x1c | uVar23 * 0x10) + uVar3;
    uVar1 = iVar9 + uVar1 + (uVar3 ^ uVar2 ^ uVar23) + 0x8771f681;
    uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar23;
    uVar2 = iVar20 + uVar2 + (uVar23 ^ uVar3 ^ uVar1) + 0x6d9d6122;
    uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar1;
    uVar3 = iVar12 + uVar3 + (uVar1 ^ uVar23 ^ uVar2) + 0xfde5380c;
    uVar3 = (uVar3 >> 9 | uVar3 * 0x800000) + uVar2;
    uVar23 = iVar15 + uVar23 + (uVar2 ^ uVar1 ^ uVar3) + 0xa4beea44;
    uVar23 = (uVar23 >> 0x1c | uVar23 * 0x10) + uVar3;
    uVar1 = iVar7 + uVar1 + (uVar3 ^ uVar2 ^ uVar23) + 0x4bdecfa9;
    uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar23;
    uVar2 = iVar18 + uVar2 + (uVar23 ^ uVar3 ^ uVar1) + 0xf6bb4b60;
    uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar1;
    uVar3 = iVar10 + uVar3 + (uVar1 ^ uVar23 ^ uVar2) + 0xbebfbc70;
    uVar3 = (uVar3 >> 9 | uVar3 * 0x800000) + uVar2;
    uVar23 = iVar21 + uVar23 + (uVar2 ^ uVar1 ^ uVar3) + 0x289b7ec6;
    uVar23 = (uVar23 >> 0x1c | uVar23 * 0x10) + uVar3;
    uVar1 = iVar5 + uVar1 + (uVar3 ^ uVar2 ^ uVar23) + 0xeaa127fa;
    uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar23;
    uVar2 = iVar16 + uVar2 + (uVar23 ^ uVar3 ^ uVar1) + 0xd4ef3085;
    uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar1;
    uVar3 = iVar8 + uVar3 + (uVar1 ^ uVar23 ^ uVar2) + 0x4881d05;
    uVar3 = (uVar3 >> 9 | uVar3 * 0x800000) + uVar2;
    uVar23 = iVar19 + uVar23 + (uVar2 ^ uVar1 ^ uVar3) + 0xd9d4d039;
    uVar23 = (uVar23 >> 0x1c | uVar23 * 0x10) + uVar3;
    uVar1 = iVar11 + uVar1 + (uVar3 ^ uVar2 ^ uVar23) + 0xe6db99e5;
    uVar1 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar23;
    uVar2 = iVar22 + uVar2 + (uVar23 ^ uVar3 ^ uVar1) + 0x1fa27cf8;
    uVar2 = (uVar2 >> 0x10 | uVar2 * 0x10000) + uVar1;
    uVar3 = iVar6 + uVar3 + (uVar1 ^ uVar23 ^ uVar2) + 0xc4ac5665;
    uVar3 = (uVar3 >> 9 | uVar3 * 0x800000) + uVar2;
    uVar23 = iVar5 + uVar23 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xf4292244;
    uVar23 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar3;
    uVar1 = iVar18 + uVar1 + ((uVar23 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x432aff97;
    uVar1 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar23;
    uVar2 = iVar12 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar23) + 0xab9423a7;
    uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar1;
    uVar3 = iVar17 + uVar3 + ((uVar2 | uVar23 ^ 0xffffffff) ^ uVar1) + 0xfc93a039;
    uVar3 = (uVar3 >> 0xb | uVar3 * 0x200000) + uVar2;
    uVar23 = iVar11 + uVar23 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x655b59c3;
    uVar23 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar3;
    uVar1 = iVar16 + uVar1 + ((uVar23 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x8f0ccc92;
    uVar1 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar23;
    uVar2 = (iVar10 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar23)) - 0x100b83;
    uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar1;
    uVar3 = iVar15 + uVar3 + ((uVar2 | uVar23 ^ 0xffffffff) ^ uVar1) + 0x85845dd1;
    uVar3 = (uVar3 >> 0xb | uVar3 * 0x200000) + uVar2;
    uVar23 = iVar9 + uVar23 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x6fa87e4f;
    uVar23 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar3;
    uVar1 = iVar22 + uVar1 + ((uVar23 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xfe2ce6e0;
    uVar1 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar23;
    uVar2 = iVar8 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar23) + 0xa3014314;
    uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar1;
    uVar3 = iVar21 + uVar3 + ((uVar2 | uVar23 ^ 0xffffffff) ^ uVar1) + 0x4e0811a1;
    uVar3 = (uVar3 >> 0xb | uVar3 * 0x200000) + uVar2;
    uVar23 = iVar7 + uVar23 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xf7537e82;
    uVar23 = (uVar23 >> 0x1a | uVar23 * 0x40) + uVar3;
    uVar1 = iVar20 + uVar1 + ((uVar23 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xbd3af235;
    uVar1 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar23;
    uVar2 = iVar6 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar23) + 0x2ad7d2bb;
    uVar2 = (uVar2 >> 0x11 | uVar2 * 0x8000) + uVar1;
    uVar3 = iVar19 + uVar3 + ((uVar2 | uVar23 ^ 0xffffffff) ^ uVar1) + 0xeb86d391;
    *(uint *)BIOHJEJFDIF = uVar23 + *(int *)BIOHJEJFDIF;
    *(uint *)((long)BIOHJEJFDIF + 4) = uVar2 + uVar13 + (uVar3 >> 0xb | uVar3 * 0x200000);
    *(uint *)((long)BIOHJEJFDIF + 8) = uVar2 + uVar4;
    *(uint *)((long)BIOHJEJFDIF + 0xc) = uVar1 + uVar14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private static uint[] NBFIJBHBCCH(byte[] MGBIFHOADHG, int LFFFFEGHPFJ) { }   @0xb3d120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * KNIEPIEJMDD__NBFIJBHBCCH(void *MGBIFHOADHG,int LFFFFEGHPFJ)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  int in_w4;
  int in_w5;
  int in_w6;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((bRam000000000191710e & 1) == 0) {
    func_0x00a67900(&uint___TypeInfo);
    bRam000000000191710e = 1;
  }
  if (MGBIFHOADHG == (void *)0x0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar7 = func_0x00a67b44();
    uVar8 = func_0x00a67914(&Str_input);
    uVar4 = func_0x00a67914(&Str_Unable_convert_null_array_to_array_of_uI);
    uVar11 = 0;
    System_ArgumentNullException___ctor(uVar7,uVar8);
    uVar8 = func_0x00a67914(&Method_KNIEPIEJMDD_NBFIJBHBCCH__);
    iVar5 = func_0x00a67a20(uVar7,uVar8);
    uVar4 = (uVar4 & extraout_w1) + iVar5 + (uVar11 & (extraout_w1 ^ 0xffffffff)) + in_w4 + in_w6;
    return (void *)(ulong)((uVar4 >> (-in_w5 & 0x1fU) | uVar4 << 0x20 - (-in_w5 & 0x1fU)) +
                          extraout_w1);
  }
  pvVar6 = (void *)func_0x00a679a0(_uint___TypeInfo,0x10);
  uVar4 = *(uint *)((long)MGBIFHOADHG + 0x18);
  uVar9 = 0;
  lVar10 = 0x20;
  while (iVar5 = (int)lVar10, uVar11 = (LFFFFEGHPFJ + iVar5) - 0x20, uVar11 < uVar4) {
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(uint *)((long)pvVar6 + 0x18) <= uVar9) break;
    bVar1 = *(byte *)((long)MGBIFHOADHG + (long)(int)uVar11 + 0x20);
    uVar11 = (LFFFFEGHPFJ + iVar5) - 0x1f;
    *(uint *)((long)pvVar6 + lVar10) = (uint)bVar1;
    if (uVar4 <= uVar11) break;
    uVar12 = (LFFFFEGHPFJ + iVar5) - 0x1e;
    uVar2 = CONCAT11(*(undefined1 *)((long)MGBIFHOADHG + (long)(int)uVar11 + 0x20),bVar1);
    *(uint *)((long)pvVar6 + lVar10) = (uint)uVar2;
    if (uVar4 <= uVar12) break;
    uVar11 = (LFFFFEGHPFJ + iVar5) - 0x1d;
    uVar3 = CONCAT12(*(undefined1 *)((long)MGBIFHOADHG + (long)(int)uVar12 + 0x20),uVar2);
    *(uint *)((long)pvVar6 + lVar10) = (uint)uVar3;
    if (uVar4 <= uVar11) break;
    uVar9 = uVar9 + 1;
    *(uint *)((long)pvVar6 + lVar10) =
         CONCAT13(*(undefined1 *)((long)MGBIFHOADHG + (long)(int)uVar11 + 0x20),uVar3);
    lVar10 = lVar10 + 4;
    if (lVar10 == 0x60) {
      return pvVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


