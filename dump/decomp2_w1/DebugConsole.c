// ==== public void .ctor() { }   @0xb4cd88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917175 & 1) == 0) {
    func_0x00a67900(&System_Text_StringBuilder_TypeInfo);
    bRam0000000001917175 = 1;
  }
  *(undefined8 *)((long)__this + 0x28) = 0x42a0000043480000;
  *(undefined8 *)((long)__this + 0x20) = 0;
  *(undefined8 *)((long)__this + 0x38) = 0x447a0000447a0000;
  *(undefined8 *)((long)__this + 0x30) = 0x42a0000000000000;
  *(undefined8 *)((long)__this + 0x48) = 0x447a0000447a0000;
  *(undefined8 *)((long)__this + 0x40) = 0;
  uVar1 = func_0x00a67b44(_System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(uVar1,0);
  *(undefined8 *)((long)__this + 0x60) = uVar1;
  uVar1 = func_0x00a67b44(_System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(uVar1,0);
  *(undefined8 *)((long)__this + 0x68) = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


