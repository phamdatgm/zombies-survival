// ==== public void PPPHBJFOJDK(string BKOFCJJMGIM) { }   @0xb3d758

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__PPPHBJFOJDK(void *__this,void *BKOFCJJMGIM)

{
  long lVar1;
  undefined8 uVar2;
  void *__this_00;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((bRam0000000001917111 & 1) == 0) {
    func_0x00a67900(&DLOFHJEMLJG_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917111 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
  if ((lVar1 != 0) &&
     (System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
                (lVar1,_Method_System_Collections_Generic_Dictionary_string__string__Clear__),
     BKOFCJJMGIM != (void *)0x0)) {
    uVar2 = System_String__ToLower(BKOFCJJMGIM,0);
    __this_00 = (void *)func_0x00a67b44(_DLOFHJEMLJG_TypeInfo);
    DLOFHJEMLJG___ctor(__this_00,uVar2,0);
    if ((__this_00 != (void *)0x0) &&
       (pvVar3 = DLOFHJEMLJG__AOJEFKDJBNK(__this_00,BKOFCJJMGIM), pvVar3 != (void *)0x0)) {
      if (0 < (int)*(ulong *)((long)pvVar3 + 0x18)) {
        uVar6 = 0;
        uVar5 = *(ulong *)((long)pvVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          uVar2 = *(undefined8 *)((long)pvVar3 + uVar6 * 8 + 0x20);
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar1 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
          uVar4 = System_String__ToUpper(BKOFCJJMGIM,0);
          uVar4 = DLOFHJEMLJG__KGCOIHNNBDJ(__this_00,uVar4,uVar2,0);
          if (lVar1 == 0) goto LAB_00c3d8e8;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (lVar1,uVar2,uVar4,
                     _Method_System_Collections_Generic_Dictionary_string__string__Add__);
          uVar5 = (ulong)*(uint *)((long)pvVar3 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)((long)pvVar3 + 0x18));
      }
      return;
    }
  }
LAB_00c3d8e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void BDEKKODPMCA(string EBBKDPPGDAK) { }   @0xb3da90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__BDEKKODPMCA(void *__this,void *EBBKDPPGDAK)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = EBBKDPPGDAK;
  auVar2._0_8_ = __this;
  if ((bRam0000000001917116 & 1) == 0) {
    func_0x00a67900(&Str_HOUR_SHORT);
    auVar2 = func_0x00a67900(&Str_DAY_SHORT);
    bRam0000000001917116 = 1;
  }
  uVar1 = Translate__IJFFLNNCGHI(auVar2._0_8_,auVar2._8_8_);
  uVar1 = Translate__JJJNIPAKLJF(uVar1,_Str_DAY_SHORT);
  *(undefined8 *)((long)__this + 0x20) = uVar1;
  uVar1 = Translate__JJJNIPAKLJF(uVar1,_Str_HOUR_SHORT);
  *(undefined8 *)((long)__this + 0x28) = uVar1;
  return;
}


