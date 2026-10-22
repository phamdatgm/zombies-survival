// ==== private static extern NativeIABData AdvertyRequestIABData() { }   @0xb1afe8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Adverty_PlatformSpecific_AndroidNativeUtils__AdvertyRequestIABData(void)

{
  void *pvVar1;
  undefined8 *in_x8;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916ff8 == (code *)0x0) {
    uStack_28 = 0;
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_0059f50d;
    uStack_38 = 0x15;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916ff8 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916ff8)(&puStack_50);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  func_0x009bc86c(&puStack_50);
  pvVar1 = (void *)func_0x009bc8b8(&puStack_50);
  return pvVar1;
}


