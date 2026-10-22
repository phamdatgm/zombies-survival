// ==== public static Car get_Current() { }   @0xb44b04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Car__get_Current(void)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam000000000191713f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191713f = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = **(long **)(_Main_TypeInfo + 0xb8);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    uVar1 = *(uint *)((long)*(long **)(_Main_TypeInfo + 0xb8) + 0x2c);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(void **)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


