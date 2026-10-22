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


