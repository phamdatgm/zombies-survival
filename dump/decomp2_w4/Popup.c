// ==== public void Awake() { }   @0xb49cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup__Awake(void *__this)

{
  if ((bRam000000000191715b & 1) == 0) {
    func_0x00a67900(&Assets_SimpleAndroidNotifications_Helpers_Popup_TypeInfo);
    bRam000000000191715b = 1;
  }
  **(undefined8 **)(_Assets_SimpleAndroidNotifications_Helpers_Popup_TypeInfo + 0xb8) = __this;
  return;
}


