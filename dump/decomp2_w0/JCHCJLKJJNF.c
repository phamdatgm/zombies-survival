// ==== public static void AEPHMLOMPBG() { }   @0xb52c74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void JCHCJLKJJNF__AEPHMLOMPBG(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000001917199 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Str_CancelAllNotifications);
    bRam0000000001917199 = 1;
  }
  lVar2 = JCHCJLKJJNF__AFJAAIMFNDF();
  lVar3 = _Method_System_Array_Empty_object___;
  lVar7 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
  if (lVar7 == 0) {
    func_0x00a9e42c(_Method_System_Array_Empty_object___);
    lVar7 = *(long *)(lVar3 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = func_0x00a9e3d0();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = func_0x00a9e3d0();
  }
  if (lVar2 != 0) {
    UnityEngine_AndroidJavaObject__CallStatic
              (lVar2,_Str_CancelAllNotifications,**(undefined8 **)(lVar3 + 0xb8),0);
    if ((bRam00000000019171ca & 1) == 0) {
      func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
      func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
      bRam00000000019171ca = 1;
    }
    uVar4 = func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (uVar4,_Method_System_Collections_Generic_List_int___ctor__);
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
    uVar6 = _Str_NotificationHelper_Scheduled;
    lVar3 = *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18);
    if (lVar3 == 0) {
      if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
      lVar3 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar3,uVar8,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
      *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18) = lVar3;
    }
    uVar4 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                      (uVar4,lVar3,_Method_System_Linq_Enumerable_Select_int__string___);
    uVar4 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                      (uVar4,_Method_System_Linq_Enumerable_ToArray_string___);
    uVar4 = System_String__Join(uVar1,uVar4,0);
    if (pcRam000000000191c270 == (code *)0x0) {
      pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar4,0);
    }
    uVar5 = (*pcRam000000000191c270)(uVar6,uVar4);
    if ((uVar5 & 1) != 0) {
      return;
    }
    func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
    uVar4 = func_0x00a67b44();
    uVar6 = func_0x00a67914(&Str_Could_not_store_preference_value);
    UnityEngine_PlayerPrefsException___ctor(uVar4,uVar6);
    uVar6 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
    auVar9 = func_0x00a67a20(uVar4,uVar6);
    if (pcRam000000000191c280 == (code *)0x0) {
      pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
    }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c280)(auVar9._0_8_,auVar9._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


