// ==== public static Encyclopedia EILIOBHFJNB(CPFPFGOIDDO BAMPGHJACCL) { }   @0xb4ca38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Encyclopedia__EILIOBHFJNB(int BAMPGHJACCL)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((bRam0000000001917173 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917173 = 1;
  }
  uVar4 = 0;
  pvVar3 = (void *)0x0;
  lVar1 = _Main_TypeInfo;
  while( true ) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar1 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar4) {
      return pvVar3;
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar1 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_00c4cb50:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x10) == BAMPGHJACCL) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar1 = _Main_TypeInfo;
      }
      if ((**(long **)(lVar1 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c4cb50;
      pvVar3 = *(void **)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


