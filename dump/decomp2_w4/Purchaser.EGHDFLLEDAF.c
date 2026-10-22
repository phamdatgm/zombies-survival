// ==== private void MoveNext() { }   @0xb071f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser_EGHDFLLEDAF__MoveNext(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001916f4f & 1) == 0) {
    func_0x00a67900(&
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompl
                   );
    func_0x00a67900(&Unity_Services_Core_InitializationOptions_TypeInfo);
    func_0x00a67900(&Unity_Services_Core_UnityServices_TypeInfo);
    bRam0000000001916f4f = 1;
  }
  uStack_28 = 0;
  if (*(int *)__this == 0) {
    uStack_28 = *(undefined8 *)((long)__this + 0x30);
    *(undefined8 *)((long)__this + 0x30) = 0;
    *(undefined4 *)__this = 0xffffffff;
  }
  else {
    lVar3 = *(long *)((long)__this + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(char *)(lVar3 + 0x48) != '\0') goto LAB_00c07320;
    *(undefined1 *)(lVar3 + 0x48) = 1;
    uVar1 = func_0x00a67b44(_Unity_Services_Core_InitializationOptions_TypeInfo);
    Unity_Services_Core_InitializationOptions___ctor(uVar1,0);
    uVar1 = Unity_Services_Core_Environments_EnvironmentsOptionsExtensions__SetEnvironmentName
                      (uVar1,*(undefined8 *)(lVar3 + 0x38),0);
    if (*(int *)(_Unity_Services_Core_UnityServices_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Unity_Services_Core_UnityServices__InitializeAsync(uVar1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uStack_28 = System_Threading_Tasks_Task__GetAwaiter(lVar3,0);
    uVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&uStack_28,0);
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)__this = 0;
      *(undefined8 *)((long)__this + 0x30) = uStack_28;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                ((long)__this + 8,&uStack_28,__this,
                 _Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompl);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&uStack_28,0);
LAB_00c07320:
  *(undefined4 *)__this = 0xfffffffe;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult((long)__this + 8,0);
  return;
}


