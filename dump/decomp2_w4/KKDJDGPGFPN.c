// ==== public static void FIMDPBJGCNP(List<int> NMNPBPDBCEB) { }   @0xb5866c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void KKDJDGPGFPN__FIMDPBJGCNP(void *NMNPBPDBCEB)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
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
  uVar3 = _Str_NotificationHelper_Scheduled;
  lVar4 = *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18);
  if (lVar4 == 0) {
    if (*(int *)(_KKDJDGPGFPN___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = **(undefined8 **)(_KKDJDGPGFPN___c_TypeInfo + 0xb8);
    lVar4 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar4,uVar5,_Method_KKDJDGPGFPN___c_CJKGILBADPI__,0);
    *(long *)(*(long *)(_KKDJDGPGFPN___c_TypeInfo + 0xb8) + 0x18) = lVar4;
  }
  uVar5 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                    (NMNPBPDBCEB,lVar4,_Method_System_Linq_Enumerable_Select_int__string___);
  uVar5 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                    (uVar5,_Method_System_Linq_Enumerable_ToArray_string___);
  uVar1 = System_String__Join(uVar1,uVar5,0);
  if (pcRam000000000191c270 == (code *)0x0) {
    pcRam000000000191c270 = (code *)func_0x00a678c4(&UNK_005a189a,uVar1,0);
  }
  uVar2 = (*pcRam000000000191c270)(uVar3,uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00a67914(&UnityEngine_PlayerPrefsException_TypeInfo);
  uVar3 = func_0x00a67b44();
  uVar1 = func_0x00a67914(&Str_Could_not_store_preference_value);
  UnityEngine_PlayerPrefsException___ctor(uVar3,uVar1);
  uVar1 = func_0x00a67914(&Method_UnityEngine_PlayerPrefs_SetString__);
  auVar6 = func_0x00a67a20(uVar3,uVar1);
  if (pcRam000000000191c280 == (code *)0x0) {
    pcRam000000000191c280 = (code *)func_0x00a678c4(&UNK_005a8fe2);
  }
                    /* WARNING: Could not recover jumptable at 0x01486e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c280)(auVar6._0_8_,auVar6._8_8_);
  return;
}


