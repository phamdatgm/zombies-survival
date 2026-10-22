// ==== public void RequestAdIdData(IntPtr callback) { }   @0xb1b078

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidNativeUtils__RequestAdIdData(void *__this,long callback)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916ff0 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a1246;
    uStack_38 = 0x16;
    uStack_28 = 8;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916ff0 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916ff0)(callback);
  return;
}


