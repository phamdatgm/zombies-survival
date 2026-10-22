// ==== public void Update() { }   @0xb4cc88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__Update(void *__this)

{
  ulong uVar1;
  
  uVar1 = UnityEngine_Input__GetKeyDown(0x60,0);
  if ((uVar1 & 1) != 0) {
    *(byte *)((long)__this + 0x52) = *(byte *)((long)__this + 0x52) ^ 1;
  }
  return;
}


// ==== public void EDPEBPCDFGO() { }   @0xb4ccd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__EDPEBPCDFGO(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917176 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_Assets_SimpleAndroidNotifications_Helpers_DebugConsole_EDLNLBFNEOO__);
    func_0x00a67900(&UnityEngine_Application_LogCallback_TypeInfo);
    bRam0000000001917176 = 1;
  }
  if (*(char *)((long)__this + 0x70) == '\0') {
    uVar1 = func_0x00a67b44(_UnityEngine_Application_LogCallback_TypeInfo);
    UnityEngine_Application_LogCallback___ctor
              (uVar1,__this,
               _Method_Assets_SimpleAndroidNotifications_Helpers_DebugConsole_EDLNLBFNEOO__,0);
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__add_logMessageReceived(uVar1,0);
    *(undefined1 *)((long)__this + 0x70) = 1;
  }
  return;
}


