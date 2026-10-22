// ==== private static uint OFBDEDHLGFO(uint INHGHFGNDIO, uint CEECPPMLPAE, uint EJHEKPFAGAI, uint CAOBMFABAAN, uint IEDNNDJELDE, int CLKOHKNPAHM, uint NGINIALJDPF) { }   @0xb3c5f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint KNIEPIEJMDD__OFBDEDHLGFO
               (uint INHGHFGNDIO,uint CEECPPMLPAE,uint EJHEKPFAGAI,uint CAOBMFABAAN,uint IEDNNDJELDE
               ,int CLKOHKNPAHM,uint NGINIALJDPF)

{
  uint uVar1;
  
  uVar1 = (EJHEKPFAGAI ^ CEECPPMLPAE ^ CAOBMFABAAN) + INHGHFGNDIO + IEDNNDJELDE + NGINIALJDPF;
  return (uVar1 >> (-CLKOHKNPAHM & 0x1fU) | uVar1 << 0x20 - (-CLKOHKNPAHM & 0x1fU)) + CEECPPMLPAE;
}


// ==== internal static byte[] MHNJNJGCEJL(byte[] MGBIFHOADHG, int LFFFFEGHPFJ, int PLIMKCAJCFK, JJDMDPAIABJ MJDENOPBPIL, long HHALMHDCBLK) { }   @0xb3d2a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * KNIEPIEJMDD__MHNJNJGCEJL
                 (void *MGBIFHOADHG,int LFFFFEGHPFJ,int PLIMKCAJCFK,void *MJDENOPBPIL,
                 long HHALMHDCBLK)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = MJDENOPBPIL;
  uStack_48 = HHALMHDCBLK;
  if ((bRam000000000191710d & 1) == 0) {
    func_0x00a67900(&byte___TypeInfo);
    bRam000000000191710d = 1;
  }
  lVar1 = func_0x00a679a0(_byte___TypeInfo,0x40);
  uVar2 = System_BitConverter__GetBytes();
  System_Array__Copy(MGBIFHOADHG,LFFFFEGHPFJ,lVar1,0,PLIMKCAJCFK,0);
  if (lVar1 != 0) {
    if ((uint)PLIMKCAJCFK < *(uint *)(lVar1 + 0x18)) {
      *(undefined1 *)(lVar1 + PLIMKCAJCFK + 0x20) = 0x80;
      if (0x37 < PLIMKCAJCFK) {
        KNIEPIEJMDD__AEICFIFFEJB(lVar1,&uStack_50,0);
        lVar1 = func_0x00a679a0(_byte___TypeInfo,0x40);
      }
      System_Array__Copy(uVar2,0,lVar1,0x38,8,0);
      KNIEPIEJMDD__AEICFIFFEJB(lVar1,&uStack_50,0);
      pvVar3 = (void *)func_0x00a679a0(_byte___TypeInfo,0x10);
      uVar2 = System_BitConverter__GetBytes((ulong)uStack_50 & 0xffffffff,0);
      System_Array__Copy(uVar2,0,pvVar3,0,4,0);
      uVar2 = System_BitConverter__GetBytes(uStack_50._4_4_,0);
      System_Array__Copy(uVar2,0,pvVar3,4,4,0);
      uVar2 = System_BitConverter__GetBytes(uStack_48 & 0xffffffff,0);
      System_Array__Copy(uVar2,0,pvVar3,8,4,0);
      uVar2 = System_BitConverter__GetBytes(uStack_48._4_4_,0);
      System_Array__Copy(uVar2,0,pvVar3,0xc,4,0);
      return pvVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


