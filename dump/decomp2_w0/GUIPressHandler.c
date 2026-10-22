// ==== public void .ctor() { }   @0xb2f214

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIPressHandler___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019170bb & 1) == 0) {
    func_0x00a67900(&GUIPressHandler_ButtonPressEvent_TypeInfo);
    bRam00000000019170bb = 1;
  }
  uVar1 = func_0x00a67b44(_GUIPressHandler_ButtonPressEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(uVar1,0);
  *(undefined8 *)((long)__this + 0x20) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


