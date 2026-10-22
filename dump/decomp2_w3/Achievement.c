// ==== private bool ABKANHONENG() { }   @0xaf3cd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Achievement__ABKANHONENG(void *__this)

{
  int iVar1;
  
  if ((bRam0000000001916ed3 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916ed3 = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar1 != 8) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar1 != 9) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar1 != 0xc) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        return iVar1 == 0xd;
      }
    }
  }
  return true;
}


// ==== public void .ctor() { }   @0xaf4e04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement___ctor(void *__this)

{
  return;
}


