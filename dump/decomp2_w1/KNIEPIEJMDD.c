// ==== private static uint FJNHHBMAOAP(uint INHGHFGNDIO, uint CEECPPMLPAE, uint EJHEKPFAGAI, uint CAOBMFABAAN, uint IEDNNDJELDE, int CLKOHKNPAHM, uint NGINIALJDPF) { }   @0xb3c670

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint KNIEPIEJMDD__FJNHHBMAOAP
               (uint INHGHFGNDIO,uint CEECPPMLPAE,uint EJHEKPFAGAI,uint CAOBMFABAAN,uint IEDNNDJELDE
               ,int CLKOHKNPAHM,uint NGINIALJDPF)

{
  uint uVar1;
  
  uVar1 = (EJHEKPFAGAI & (CAOBMFABAAN ^ 0xffffffff)) + INHGHFGNDIO + (CAOBMFABAAN & CEECPPMLPAE) +
          IEDNNDJELDE + NGINIALJDPF;
  return (uVar1 >> (-CLKOHKNPAHM & 0x1fU) | uVar1 << 0x20 - (-CLKOHKNPAHM & 0x1fU)) + CEECPPMLPAE;
}


// ==== public static byte[] COCCMCDDMBM(byte[] MGBIFHOADHG) { }   @0xb3c4e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * KNIEPIEJMDD__COCCMCDDMBM(void *MGBIFHOADHG)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  uint extraout_w1;
  uint uVar7;
  int in_w4;
  int in_w5;
  int in_w6;
  ulong uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (MGBIFHOADHG == (void *)0x0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar5 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_input);
    uVar1 = func_0x00a67914(&Str_Unable_to_calculate_hash_over_null_input);
    uVar7 = 0;
    System_ArgumentNullException___ctor(uVar5,uVar3);
    uVar3 = func_0x00a67914(&Method_KNIEPIEJMDD_COCCMCDDMBM__);
    iVar2 = func_0x00a67a20(uVar5,uVar3);
    uVar1 = in_w4 + iVar2 + ((extraout_w1 | uVar7 ^ 0xffffffff) ^ uVar1) + in_w6;
    return (void *)(ulong)((uVar1 >> (-in_w5 & 0x1fU) | uVar1 << 0x20 - (-in_w5 & 0x1fU)) +
                          extraout_w1);
  }
  uVar8 = *(ulong *)((long)MGBIFHOADHG + 0x18);
  if ((int)uVar8 + -0x40 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      KNIEPIEJMDD__AEICFIFFEJB(MGBIFHOADHG,&stack0xffffffffffffffd0,iVar2);
      uVar8 = *(ulong *)((long)MGBIFHOADHG + 0x18);
      iVar2 = iVar2 + 0x40;
    } while (iVar2 <= (int)uVar8 + -0x40);
  }
  uVar1 = (int)uVar8 - iVar2;
  uStack_50 = 0xefcdab8967452301;
  uStack_48 = 0x1032547698badcfe;
  if ((bRam000000000191710d & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo);
    bRam000000000191710d = 1;
  }
  lVar4 = func_0x00a679a0(_byte___TypeInfo,0x40);
  uVar5 = System_BitConverter__GetBytes
                    (-(uVar8 >> 0x1f & 1) & 0xfffffff800000000 | (uVar8 & 0xffffffff) << 3,0);
  System_Array__Copy(MGBIFHOADHG,iVar2,lVar4,0,uVar1,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined1 *)(lVar4 + (int)uVar1 + 0x20) = 0x80;
  if (0x37 < (int)uVar1) {
    KNIEPIEJMDD__AEICFIFFEJB(lVar4,&uStack_50,0);
    lVar4 = func_0x00a679a0(_byte___TypeInfo,0x40);
  }
  System_Array__Copy(uVar5,0,lVar4,0x38,8,0);
  KNIEPIEJMDD__AEICFIFFEJB(lVar4,&uStack_50,0);
  pvVar6 = (void *)func_0x00a679a0(_byte___TypeInfo,0x10);
  uVar5 = System_BitConverter__GetBytes(uStack_50 & 0xffffffff,0);
  System_Array__Copy(uVar5,0,pvVar6,0,4,0);
  uVar5 = System_BitConverter__GetBytes(uStack_50._4_4_,0);
  System_Array__Copy(uVar5,0,pvVar6,4,4,0);
  uVar5 = System_BitConverter__GetBytes(uStack_48 & 0xffffffff,0);
  System_Array__Copy(uVar5,0,pvVar6,8,4,0);
  uVar5 = System_BitConverter__GetBytes(uStack_48._4_4_,0);
  System_Array__Copy(uVar5,0,pvVar6,0xc,4,0);
  return pvVar6;
}


