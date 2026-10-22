// ==== public static void PCPJMOGFDCH(int HKGEOJPHLAN) { }   @0xb58840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__PCPJMOGFDCH(int HKGEOJPHLAN)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam00000000019171cc & 1) == 0) {
    func_0x00a67900(&Method_KKDJDGPGFPN_JLCBOCNCEOJ_ODEGCPJFCNL__);
    func_0x00a67900(&KKDJDGPGFPN_JLCBOCNCEOJ_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_int__RemoveAll__);
    func_0x00a67900(&System_Predicate_int__TypeInfo);
    bRam00000000019171cc = 1;
  }
  lVar2 = func_0x00a67b44(_KKDJDGPGFPN_JLCBOCNCEOJ_TypeInfo);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x10) = HKGEOJPHLAN;
    lVar3 = KKDJDGPGFPN__LNCHNOCKCAN();
    uVar4 = func_0x00a67b44(_System_Predicate_int__TypeInfo);
    System_Predicate___Il2CppFullySharedGenericType____ctor
              (uVar4,lVar2,_Method_KKDJDGPGFPN_JLCBOCNCEOJ_ODEGCPJFCNL__,0);
    if (lVar3 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAll
                (lVar3,uVar4,_Method_System_Collections_Generic_List_int__RemoveAll__);
      if ((bRam00000000019171cb & 1) == 0) {
        func_0x00a67900(&Method_System_Linq_Enumerable_Select_int__string___);
        func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_string___);
        func_0x00a67900(&System_Func_int__string__TypeInfo);
        func_0x00a67900(&Method_KKDJDGPGFPN___c_CJKGILBADPI__);
        func_0x00a67900(&KKDJDGPGFPN___c_TypeInfo);
        func_0x00a67900(&Str_NotificationHelper_Scheduled);
        func_0x00a67900(&Str__);
        bRam00000000019171cb = 1;
      }
      if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = _Str__;
      uVar4 = _Str_NotificationHelper_Scheduled;
      lVar2 = *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18);
      if (lVar2 == 0) {
        if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
        lVar2 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
        System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                  (lVar2,uVar6,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
        *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18) = lVar2;
      }
      uVar6 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                        (lVar3,lVar2,_Method_System_Linq_Enumerable_Select_int__string___);
      uVar6 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                        (uVar6,_Method_System_Linq_Enumerable_ToArray_string___);
      uVar1 = System_String__Join(uVar1,uVar6,0);
      if (pcRam000000000191c270 == (code *)0x0) {
        pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar1,0);
      }
      uVar5 = (*pcRam000000000191c270)(uVar4,uVar1);
      if ((uVar5 & 1) != 0) {
        return;
      }
      func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
      uVar4 = func_0x00a67b44();
      uVar1 = func_0x00a67914(&Str_Could_not_store_preference_value);
      UnityEngine_PlayerPrefsException___ctor(uVar4,uVar1);
      uVar1 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
      auVar7 = func_0x00a67a20(uVar4,uVar1);
      if (pcRam000000000191c280 == (code *)0x0) {
        pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
      }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c280)(auVar7._0_8_,auVar7._8_8_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


