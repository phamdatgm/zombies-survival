/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[CompilerGenerated]
private struct Purchaser.EGHDFLLEDAF : IAsyncStateMachine // TypeDefIndex: 5143
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public Purchaser <>4__this; // 0x28
	private TaskAwaiter <>u__1; // 0x30

	// Methods

	private void MoveNext() { }

	[DebuggerHidden]
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}
*/

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


// ==== private void SetStateMachine(IAsyncStateMachine stateMachine) { }   @0xb074e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser_EGHDFLLEDAF__SetStateMachine(void *__this,void *stateMachine)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (stateMachine == (void *)0x0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo,0,0);
    uVar1 = func_0x00a67b44();
    uVar2 = func_0x00a67914(&Str_stateMachine);
    System_ArgumentNullException___ctor(uVar1,uVar2,0);
    uVar2 = func_0x00a67914(&
                            Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__
                           );
    func_0x00a67a20(uVar1,uVar2);
  }
  else if (*(long *)((long)__this + 0x10) == 0) {
    *(long *)((long)__this + 0x10) = (long)stateMachine;
    return;
  }
  uVar1 = func_0x00a67914(&Str_The_builder_was_not_properly_initialized);
  uVar1 = System_Environment__GetResourceString(uVar1,0);
  func_0x00a67914(&System_InvalidOperationException_TypeInfo);
  uVar2 = func_0x00a67b44();
  System_InvalidOperationException___ctor(uVar2,uVar1,0);
  uVar1 = func_0x00a67914(&
                          Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__
                         );
  plVar3 = (long *)func_0x00a67a20(uVar2,uVar1);
  if (*plVar3 != 0) {
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


