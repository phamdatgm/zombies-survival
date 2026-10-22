// ==== public void .ctor() { }   @0xb57874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void NNDOCLOMBPN() { }   @0xb58010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__NNDOCLOMBPN(void *__this)

{
  int iVar1;
  long lVar2;
  
  if ((bRam00000000019171bc & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019171bc = 1;
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) == 0) {
    return;
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x90);
    if (pcRam000000000191bcb0 == (code *)0x0) {
      pcRam000000000191bcb0 = (code *)func_0x00a678c4(&UNK_0059e800);
    }
                    /* WARNING: Could not recover jumptable at 0x01472fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191bcb0)(0 < iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


