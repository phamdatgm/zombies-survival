// ==== private static extern void loadUrl(IntPtr ptr, string url) { }   @0xb2e77c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__loadUrl(long ptr,void *url)

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


// ==== private static extern void setRenderingActive(IntPtr ptr, bool active) { }   @0xb2ea28

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__setRenderingActive(long ptr,bool active)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917090 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005b372e;
    uStack_38 = 0x12;
    uStack_28 = 0xc;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917090 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917090)(ptr,active);
  return;
}


// ==== public virtual IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale) { }   @0xb2ecf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_BaseWebViewTextureBridge__Create
               (void *__this,long cbo,int width,int height,int loadTimeout,int scale)

{
  return 0;
}


// ==== public void SetOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate) { }   @0xb2ed2c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SetOnHtmlLoadTimeout
               (void *__this,long ptr,long onHtmlLoadTimeoutDelegate)

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


// ==== public void Touch(IntPtr ptr, float x, float y) { }   @0xb2ed6c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__Touch(void *__this,long ptr,float x,float y)

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


