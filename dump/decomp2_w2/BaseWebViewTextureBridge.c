// ==== private static extern IntPtr destroy(IntPtr ptr, string data) { }   @0xb2e648

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_BaseWebViewTextureBridge__destroy(long ptr,void *data)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917058 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a5e7b;
    uStack_38 = 7;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917058 = (code *)func_0x00a67fa8(&puStack_50);
  }
  uVar1 = func_0x00a67f88(data);
  lVar2 = (*pcRam0000000001917058)(ptr,uVar1);
  func_0x00a67fa0(uVar1);
  return lVar2;
}


// ==== private static extern void setOnReceivedError(IntPtr ptr, IntPtr onReceivedErrorDelegate) { }   @0xb2e920

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__setOnReceivedError
               (long ptr,long onReceivedErrorDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917080 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b371b;
    uStack_38 = 0x12;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917080 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917080)(ptr,onReceivedErrorDelegate);
  return;
}


// ==== private static extern void sendViewabilityData(IntPtr ptr, string data) { }   @0xb2ebc4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__sendViewabilityData(long ptr,void *data)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam00000000019170a8 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_0059e665;
    uStack_38 = 0x13;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam00000000019170a8 = (code *)func_0x00a67fa8(&puStack_50);
  }
  uVar1 = func_0x00a67f88(data);
  (*pcRam00000000019170a8)(ptr,uVar1);
  func_0x00a67fa0(uVar1);
  return;
}


// ==== public void LoadURL(IntPtr ptr, string url) { }   @0xb2ed14

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__LoadURL(void *__this,long ptr,void *url)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917068 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b3713;
    uStack_38 = 7;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917068 = (code *)func_0x00a67fa8(&puStack_50);
  }
  uVar1 = func_0x00a67f88(url);
  (*pcRam0000000001917068)(ptr,uVar1);
  func_0x00a67fa0(uVar1);
  return;
}


// ==== public void SetOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckPassedDelegate) { }   @0xb2ed50

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SetOnTextureCheckPassed
               (void *__this,long ptr,long onTextureCheckPassedDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917088 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a4137;
    uStack_38 = 0x17;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917088 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917088)(ptr,onTextureCheckPassedDelegate);
  return;
}


// ==== public void .ctor() { }   @0xb2ed8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge___ctor(void *__this)

{
  return;
}


