// ==== public static byte[] COCCMCDDMBM(string MGBIFHOADHG) { }   @0xb3c614

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * KNIEPIEJMDD__COCCMCDDMBM(void *MGBIFHOADHG)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  uint extraout_w1;
  uint uVar11;
  int in_w4;
  int in_w5;
  int in_w6;
  ulong uVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  code *unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  if ((bRam000000000191710c & 1) == 0) {
    func_0x00a67900(&System_Text_UTF8Encoding_TypeInfo);
    bRam000000000191710c = 1;
  }
  plVar7 = (long *)func_0x00a67b44(_System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(plVar7,0);
  if (MGBIFHOADHG == (void *)0x0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    unaff_x19 = func_0x00a67b44();
    unaff_x20 = func_0x00a67914(&Str_input);
    puVar5 = &Str_Unable_to_calculate_hash_over_null_input;
  }
  else {
    if (plVar7 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar7 + 0x268))(plVar7,MGBIFHOADHG,*(undefined8 *)(*plVar7 + 0x270));
      puVar1 = (undefined1 *)register0x00000008;
      goto code_r0x00c3c4e4;
    }
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    unaff_x19 = func_0x00a67b44();
    unaff_x20 = func_0x00a67914(&Str_encoding);
    puVar5 = &Str_Unable_to_calculate_hash_over_a_string_w;
  }
  uVar9 = func_0x00a67914(puVar5);
  System_ArgumentNullException___ctor(unaff_x19,unaff_x20,uVar9,0);
  uVar9 = func_0x00a67914(&Method_KNIEPIEJMDD_COCCMCDDMBM__);
  unaff_x30 = KNIEPIEJMDD__COCCMCDDMBM;
  lVar4 = func_0x00a67a20(unaff_x19,uVar9);
code_r0x00c3c4e4:
  *(code **)(puVar1 + -0x20) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + -8) = unaff_x19;
  if (lVar4 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar9 = func_0x00a67b44();
    uVar6 = func_0x00a67914(&Str_input);
    uVar2 = func_0x00a67914(&Str_Unable_to_calculate_hash_over_null_input);
    uVar11 = 0;
    System_ArgumentNullException___ctor(uVar9,uVar6);
    uVar6 = func_0x00a67914(&Method_KNIEPIEJMDD_COCCMCDDMBM__);
    iVar3 = func_0x00a67a20(uVar9,uVar6);
    uVar2 = in_w4 + iVar3 + ((extraout_w1 | uVar11 ^ 0xffffffff) ^ uVar2) + in_w6;
    return (void *)(ulong)((uVar2 >> (-in_w5 & 0x1fU) | uVar2 << 0x20 - (-in_w5 & 0x1fU)) +
                          extraout_w1);
  }
  *(undefined8 *)(puVar1 + -0x28) = 0x1032547698badcfe;
  *(undefined8 *)(puVar1 + -0x30) = 0xefcdab8967452301;
  uVar12 = *(ulong *)(lVar4 + 0x18);
  if ((int)uVar12 + -0x40 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      KNIEPIEJMDD__AEICFIFFEJB(lVar4,puVar1 + -0x30,iVar3);
      uVar12 = *(ulong *)(lVar4 + 0x18);
      iVar3 = iVar3 + 0x40;
    } while (iVar3 <= (int)uVar12 + -0x40);
  }
  uVar9 = *(undefined8 *)(puVar1 + -0x30);
  uVar2 = (int)uVar12 - iVar3;
  *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x30) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  *(undefined8 *)(puVar1 + -0x50) = uVar9;
  if ((bRam000000000191710d & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo);
    bRam000000000191710d = 1;
  }
  lVar8 = func_0x00a679a0(_byte___TypeInfo,0x40);
  uVar9 = System_BitConverter__GetBytes
                    (-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3,0);
  System_Array__Copy(lVar4,iVar3,lVar8,0,uVar2,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined1 *)(lVar8 + (int)uVar2 + 0x20) = 0x80;
  if (0x37 < (int)uVar2) {
    KNIEPIEJMDD__AEICFIFFEJB(lVar8,puVar1 + -0x50,0);
    lVar8 = func_0x00a679a0(_byte___TypeInfo,0x40);
  }
  System_Array__Copy(uVar9,0,lVar8,0x38,8,0);
  KNIEPIEJMDD__AEICFIFFEJB(lVar8,puVar1 + -0x50,0);
  pvVar10 = (void *)func_0x00a679a0(_byte___TypeInfo,0x10);
  uVar9 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x50),0);
  System_Array__Copy(uVar9,0,pvVar10,0,4,0);
  uVar9 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x4c),0);
  System_Array__Copy(uVar9,0,pvVar10,4,4,0);
  uVar9 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x48),0);
  System_Array__Copy(uVar9,0,pvVar10,8,4,0);
  uVar9 = System_BitConverter__GetBytes(*(undefined4 *)(puVar1 + -0x44),0);
  System_Array__Copy(uVar9,0,pvVar10,0xc,4,0);
  return pvVar10;
}


// ==== private static uint ICANHCBBABJ(uint DGLGMLCACCE, int CLKOHKNPAHM) { }   @0xb3c5e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint KNIEPIEJMDD__ICANHCBBABJ(uint DGLGMLCACCE,int CLKOHKNPAHM)

{
  return DGLGMLCACCE >> (-CLKOHKNPAHM & 0x1fU) | DGLGMLCACCE << 0x20 - (-CLKOHKNPAHM & 0x1fU);
}


