// ==== public void .ctor() { }   @0xb2f274

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIPressHandler_ButtonPressEvent___ctor(void *__this)

{
  undefined8 uVar1;
  
  *(undefined8 *)((long)__this + 0x28) = 0;
  if ((bRam000000000191c9d9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Events_InvokableCallList_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Events_PersistentCallGroup_TypeInfo);
    bRam000000000191c9d9 = 1;
  }
  *(undefined1 *)((long)__this + 0x20) = 1;
  System_Object___ctor(__this,0);
  uVar1 = func_0x00a67b44(_UnityEngine_Events_InvokableCallList_TypeInfo);
  UnityEngine_Events_InvokableCallList___ctor();
  *(undefined8 *)((long)__this + 0x10) = uVar1;
  uVar1 = func_0x00a67b44(_UnityEngine_Events_PersistentCallGroup_TypeInfo);
  UnityEngine_Events_PersistentCallGroup___ctor();
  *(undefined8 *)((long)__this + 0x18) = uVar1;
  return;
}


