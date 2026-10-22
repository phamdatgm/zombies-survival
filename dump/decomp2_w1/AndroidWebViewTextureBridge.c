// ==== private static extern void setOnCreated(IntPtr ptr, IntPtr onCreatedDelegate) { }   @0xad596c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidWebViewTextureBridge__setOnCreated
               (long ptr,long onCreatedDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916df0 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b92c8;
    uStack_38 = 0xc;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916df0 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916df0)(ptr,onCreatedDelegate);
  return;
}


// ==== public void SetOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate) { }   @0xad5afc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidWebViewTextureBridge__SetOnPageStarted
               (void *__this,long ptr,long onPageStartedDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001916de8 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ad453;
    uStack_38 = 0x10;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001916de8 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001916de8)(ptr,onPageStartedDelegate);
  return;
}


