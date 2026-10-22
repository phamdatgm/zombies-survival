/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
public class BaseWebViewTextureBridge : NativeBridge, IWebViewTextureBridge, INativeClass // TypeDefIndex: 5185
{
	// Methods

	private static extern IntPtr destroy(IntPtr ptr, string data) { }

	private static extern void loadData(IntPtr ptr, string data) { }

	private static extern void loadUrl(IntPtr ptr, string url) { }

	private static extern bool setOnClickAction(IntPtr ptr, IntPtr onClickDelegate) { }

	private static extern void setOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate) { }

	private static extern void setOnReceivedError(IntPtr ptr, IntPtr onReceivedErrorDelegate) { }

	private static extern void setOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckCompleteDelegate) { }

	private static extern void setRenderingActive(IntPtr ptr, bool active) { }

	private static extern void setOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate) { }

	private static extern void touch(IntPtr ptr, float x, float y) { }

	private static extern void sendViewabilityData(IntPtr ptr, string data) { }

	private static extern void triggerViewedImpression(IntPtr ptr, string data) { }

	public virtual IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale) { }

	public void Destroy(IntPtr ptr, string data) { }

	public void LoadData(IntPtr ptr, string data) { }

	public void LoadURL(IntPtr ptr, string url) { }

	public void SetOnClicked(IntPtr ptr, IntPtr onClickedDelegate) { }

	public void SetOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate) { }

	public void SetOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate) { }

	public void SetOnReceiveError(IntPtr ptr, IntPtr onReceivedErrorDelegate) { }

	public void SetOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckPassedDelegate) { }

	public void SetRenderActive(IntPtr ptr, bool active) { }

	public void Touch(IntPtr ptr, float x, float y) { }

	public void SendViewabilityData(IntPtr ptr, string data) { }

	public void TriggerViewedImpression(IntPtr ptr, string data) { }

	public void .ctor() { }
}
*/

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


// ==== private static extern void loadData(IntPtr ptr, string data) { }   @0xb2e6e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__loadData(long ptr,void *data)

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


// ==== private static extern void setOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckCompleteDelegate) { }   @0xb2e9a4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__setOnTextureCheckPassed
               (long ptr,long onTextureCheckCompleteDelegate)

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
  (*pcRam0000000001917088)(ptr,onTextureCheckCompleteDelegate);
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


// ==== private static extern void triggerViewedImpression(IntPtr ptr, string data) { }   @0xb2ec5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__triggerViewedImpression(long ptr,void *data)

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


// ==== public virtual IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale) { }   @0xb2ecf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_BaseWebViewTextureBridge__Create
               (void *__this,long cbo,int width,int height,int loadTimeout,int scale)

{
  return 0;
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


// ==== public void SetOnClicked(IntPtr ptr, IntPtr onClickedDelegate) { }   @0xb2ed20

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SetOnClicked
               (void *__this,long ptr,long onClickedDelegate)

{
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
  (*pcRam0000000001917070)(ptr,onClickedDelegate);
  return;
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


// ==== public void SetRenderActive(IntPtr ptr, bool active) { }   @0xb2ed5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge__SetRenderActive
               (void *__this,long ptr,bool active)

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


// ==== public void .ctor() { }   @0xb2ed8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_BaseWebViewTextureBridge___ctor(void *__this)

{
  return;
}


