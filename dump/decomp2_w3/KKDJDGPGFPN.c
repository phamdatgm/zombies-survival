// ==== public static void EAKBEPCAPKE() { }   @0xb587d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__EAKBEPCAPKE(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam00000000019171ca & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_int___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_int__TypeInfo);
    bRam00000000019171ca = 1;
  }
  uVar2 = func_0x00a67b44(_System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar2,_Method_System_Collections_Generic_List_int___ctor__);
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
  lVar5 = *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18);
  if (lVar5 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar5 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar5,uVar6,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
    *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18) = lVar5;
  }
  uVar2 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                    (uVar2,lVar5,_Method_System_Linq_Enumerable_Select_int__string___);
  uVar2 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                    (uVar2,_Method_System_Linq_Enumerable_ToArray_string___);
  uVar2 = System_String__Join(uVar1,uVar2,0);
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar2,0);
  }
  uVar3 = (*pcRam000000000191c270)(uVar4,uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar4 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar2,uVar4);
  uVar4 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
  auVar7 = func_0x00a67a20(uVar2,uVar4);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar7._0_8_,auVar7._8_8_);
  return;
}


