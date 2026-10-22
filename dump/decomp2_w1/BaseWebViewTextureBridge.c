// ==== private static extern void setOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate) { }   @0xb2e89c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__setOnPageFinished
               (long ptr,long onPageFinishedDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917078 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a317d;
    uStack_38 = 0x11;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917078 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917078)(ptr,onPageFinishedDelegate);
  return;
}


// ==== private static extern void touch(IntPtr ptr, float x, float y) { }   @0xb2eb30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__touch(long ptr,float x,float y)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if (pcRam00000000019170a0 == (code *)0x0) {
    puStack_60 = &UNK_0059cb7a;
    uStack_58 = 8;
    puStack_50 = &UNK_005a9baf;
    uStack_48 = 5;
    uStack_38 = 0x10;
    uStack_40 = 0x200000000;
    uStack_34 = 0;
    pcRam00000000019170a0 = (code *)func_0x00a67fa8(&puStack_60);
  }
  (*pcRam00000000019170a0)(CONCAT44(in_register_00005004,x),CONCAT44(in_register_00005024,y),ptr);
  return;
}


// ==== public void LoadData(IntPtr ptr, string data) { }   @0xb2ed08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__LoadData(void *__this,long ptr,void *data)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917060 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_0059f523;
    uStack_38 = 8;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917060 = (code *)func_0x00a67fa8(&puStack_50);
  }
  uVar1 = func_0x00a67f88(data);
  (*pcRam0000000001917060)(ptr,uVar1);
  func_0x00a67fa0(uVar1);
  return;
}


// ==== public void SetOnReceiveError(IntPtr ptr, IntPtr onReceivedErrorDelegate) { }   @0xb2ed44

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SetOnReceiveError
               (void *__this,long ptr,long onReceivedErrorDelegate)

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


// ==== public void TriggerViewedImpression(IntPtr ptr, string data) { }   @0xb2ed80

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__TriggerViewedImpression
               (void *__this,long ptr,void *data)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam00000000019170b0 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a5e83;
    uStack_38 = 0x17;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam00000000019170b0 = (code *)func_0x00a67fa8(&puStack_50);
  }
  uVar1 = func_0x00a67f88(data);
  (*pcRam00000000019170b0)(ptr,uVar1);
  func_0x00a67fa0(uVar1);
  return;
}


