// ==== public int HJICMDCENKN(int HCBODNKILEA = -1) { }   @0xad5d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ShopItem__HJICMDCENKN(void *__this,int HCBODNKILEA)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001916e00 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e00 = 1;
  }
  if (HCBODNKILEA == -1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    HCBODNKILEA = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar3 = DAFNMLEKHAD__DKJLCJPBPPN(lVar3,HCBODNKILEA,1,0);
    if (lVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)((long)__this + 0x70);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      lVar3 = DAFNMLEKHAD__DKJLCJPBPPN(lVar3,HCBODNKILEA,1,0);
      if (cVar1 == '\0') {
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50(lVar3,*(uint *)((long)__this + 0x28),0);
          }
          if (*(uint *)((long)__this + 0x28) < *(uint *)(*(long *)(lVar3 + 0x40) + 0x18)) {
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                              (&stack0xffffffffffffffd0,0);
            return iVar2;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
      else if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50(lVar3,*(uint *)((long)__this + 0x74),0);
        }
        if (*(uint *)((long)__this + 0x74) < *(uint *)(*(long *)(lVar3 + 0x48) + 0x18)) {
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                            (&stack0xffffffffffffffd0,0);
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


