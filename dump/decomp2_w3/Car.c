// ==== public static string DBJBMIGLBNF(int NBOMPJEGJMP) { }   @0xb44bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Car__DBJBMIGLBNF(int NBOMPJEGJMP)

{
  void *pvVar1;
  long lVar2;
  
  if ((bRam0000000001917141 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str____);
    bRam0000000001917141 = 1;
  }
  pvVar1 = _Str____;
  if (NBOMPJEGJMP < 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar2 == 0))
    goto LAB_00c44cc4;
    if (*(int *)(lVar2 + 0x18) <= NBOMPJEGJMP) {
      return pvVar1;
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)NBOMPJEGJMP) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar2 = *(long *)(lVar2 + (long)NBOMPJEGJMP * 8 + 0x20);
    if (lVar2 != 0) {
      return *(void **)(lVar2 + 0x10);
    }
  }
LAB_00c44cc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


