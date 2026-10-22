// ==== public string JJJNIPAKLJF(string FDOOLAIBBPL) { }   @0xb31e58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Translate__JJJNIPAKLJF(void *__this,void *FDOOLAIBBPL)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvStack_28;
  
  if ((bRam0000000001917112 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_error);
    bRam0000000001917112 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
  if (lVar1 == 0) {
LAB_00c31f48:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                    (lVar1,FDOOLAIBBPL,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  pvVar3 = _Str_error;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
    if (lVar1 == 0) goto LAB_00c31f48;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
              (lVar1,FDOOLAIBBPL,&pvStack_28,
               _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    pvVar3 = pvStack_28;
  }
  return pvVar3;
}


// ==== public string BHBLPFCLNMA(string FDOOLAIBBPL) { }   @0xb3dc04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Translate__BHBLPFCLNMA(void *__this,void *FDOOLAIBBPL)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lStack_28;
  
  if ((bRam0000000001917117 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_error);
    bRam0000000001917117 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (lVar1,FDOOLAIBBPL,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    if ((uVar2 & 1) == 0) {
      return _Str_error;
    }
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                (lVar1,FDOOLAIBBPL,&lStack_28,
                 _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      uVar3 = System_Environment__get_NewLine(0);
      if (lStack_28 != 0) {
        pvVar4 = (void *)System_String__Replace(lStack_28,_Str__,uVar3,0);
        return pvVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


