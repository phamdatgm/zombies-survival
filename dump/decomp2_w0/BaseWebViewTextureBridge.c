// ==== private static extern bool setOnClickAction(IntPtr ptr, IntPtr onClickDelegate) { }   @0xb2e814

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Adverty_PlatformSpecific_BaseWebViewTextureBridge__setOnClickAction
               (long ptr,long onClickDelegate)

{
  int iVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917070 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005a52ce;
    uStack_38 = 0x10;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917070 = (code *)func_0x00a67fa8(&puStack_50);
  }
  iVar1 = (*pcRam0000000001917070)(ptr,onClickDelegate);
  return iVar1 != 0;
}


// ==== private static extern void setOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate) { }   @0xb2eaac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__setOnHtmlLoadTimeout
               (long ptr,long onHtmlLoadTimeoutDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917098 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b0b23;
    uStack_38 = 0x14;
    uStack_28 = 0x10;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917098 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917098)(ptr,onHtmlLoadTimeoutDelegate);
  return;
}


// ==== public void Destroy(IntPtr ptr, string data) { }   @0xb2ecfc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__Destroy(void *__this,long ptr,void *data)

{
  undefined8 uVar1;
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
  (*pcRam0000000001917058)(ptr,uVar1);
  func_0x00a67fa0(uVar1);
  return;
}


// ==== public void SetOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate) { }   @0xb2ed38

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SetOnPageFinished
               (void *__this,long ptr,long onPageFinishedDelegate)

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


// ==== public void SendViewabilityData(IntPtr ptr, string data) { }   @0xb2ed74

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SendViewabilityData
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


