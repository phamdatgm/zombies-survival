// ==== private IEnumerator GEMPILJFGGI(bool NOBGKIBHCEN) { }   @0xb4bd98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ConsoleTipsBottom__GEMPILJFGGI(void *__this,bool NOBGKIBHCEN)

{
  void *pvVar1;
  
  if ((bRam000000000191716d & 1) == 0) {
    func_0x00a67900(&ConsoleTipsBottom_DHAADBBKHAG_TypeInfo);
    bRam000000000191716d = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_ConsoleTipsBottom_DHAADBBKHAG_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(bool *)((long)pvVar1 + 0x28) = NOBGKIBHCEN;
  return pvVar1;
}


