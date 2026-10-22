// ==== public string get_desc() { }   @0xaf349c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * EventContest__get_desc(void *__this)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000001916ed1 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_GOAL_);
    bRam0000000001916ed1 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_24 = *(undefined4 *)((long)__this + 0x18);
  lVar3 = **(long **)(_Translate_TypeInfo + 0xb8);
  uVar1 = System_Int32__ToString(&uStack_24,0);
  uVar1 = System_String__Concat(_Str_EVENT_GOAL_,uVar1,0);
  if (lVar3 != 0) {
    pvVar2 = (void *)Translate__JJJNIPAKLJF(lVar3,uVar1,0);
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


