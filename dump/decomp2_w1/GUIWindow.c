// ==== public IEnumerator FAAELIPKLCB() { }   @0xb48b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIWindow__FAAELIPKLCB(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917152 & 1) == 0) {
    func_0x00a67900(&GUIWindow_AIMKOIDBKLH_TypeInfo);
    bRam0000000001917152 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIWindow_AIMKOIDBKLH_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


