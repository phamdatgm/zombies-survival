/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
public class AndroidWebViewTextureBridge : BaseWebViewTextureBridge, IAndroidWebViewTextureBridge, IWebViewTextureBridge, INativeClass // TypeDefIndex: 5060
{
	// Methods

	private static extern IntPtr getCustomRenderEventFunc() { }

	private static extern void setOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate) { }

	private static extern void setOnCreated(IntPtr ptr, IntPtr onCreatedDelegate) { }

	private static extern IntPtr create(int cbo, int width, int height, int loadTimeout, int scale) { }

	public IntPtr GetCustomRenderEventFunc() { }

	public override IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale) { }

	public void SetOnCreate(IntPtr ptr, IntPtr onCreateDelegate) { }

	public void SetOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate) { }

	public void .ctor() { }
}
*/

// ==== private static extern IntPtr getCustomRenderEventFunc() { }   @0xad5884

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__getCustomRenderEventFunc(void)

{
  long lVar1;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (pcRam0000000001916de0 == (code *)0x0) {
    uStack_18 = 0;
    puStack_40 = &UNK_0059cb7a;
    uStack_38 = 8;
    puStack_30 = &UNK_005a52b5;
    uStack_28 = 0x18;
    uStack_20 = 0x200000000;
    uStack_14 = 0;
    pcRam0000000001916de0 = (code *)func_0x00a67fa8(&puStack_40);
  }
  lVar1 = (*pcRam0000000001916de0)();
  return lVar1;
}


// ==== private static extern void setOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate) { }   @0xad58ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidWebViewTextureBridge__setOnPageStarted
               (long ptr,long onPageStartedDelegate)

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


// ==== private static extern IntPtr create(int cbo, int width, int height, int loadTimeout, int scale) { }   @0xad59f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__create
               (int cbo,int width,int height,int loadTimeout,int scale)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  if (pcRam0000000001916df8 == (code *)0x0) {
    puStack_70 = &UNK_0059cb7a;
    uStack_68 = 8;
    puStack_60 = &UNK_005b83b1;
    uStack_58 = 6;
    uStack_48 = 0x14;
    uStack_50 = 0x200000000;
    uStack_44 = 0;
    pcRam0000000001916df8 = (code *)func_0x00a67fa8(&puStack_70,width,height,loadTimeout,scale);
  }
  lVar1 = (*pcRam0000000001916df8)(cbo,width,height,loadTimeout,scale);
  return lVar1;
}


// ==== public IntPtr GetCustomRenderEventFunc() { }   @0xad5a9c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__GetCustomRenderEventFunc(void *__this)

{
  long lVar1;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (pcRam0000000001916de0 == (code *)0x0) {
    uStack_18 = 0;
    puStack_40 = &UNK_0059cb7a;
    uStack_38 = 8;
    puStack_30 = &UNK_005a52b5;
    uStack_28 = 0x18;
    uStack_20 = 0x200000000;
    uStack_14 = 0;
    __this = (void *)func_0x00a67fa8(&puStack_40);
    pcRam0000000001916de0 = __this;
  }
  lVar1 = (*pcRam0000000001916de0)(__this);
  return lVar1;
}


// ==== public override IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale) { }   @0xad5aa0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long Adverty_PlatformSpecific_AndroidWebViewTextureBridge__Create
               (void *__this,long cbo,int width,int height,int loadTimeout,int scale)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_28;
  
  lStack_28 = cbo;
  uVar1 = System_IntPtr__ToInt32(&lStack_28,0,width,height,loadTimeout,scale);
  lVar2 = Adverty_PlatformSpecific_AndroidWebViewTextureBridge__create
                    (uVar1,width,height,loadTimeout,scale);
  return lVar2;
}


// ==== public void SetOnCreate(IntPtr ptr, IntPtr onCreateDelegate) { }   @0xad5af0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidWebViewTextureBridge__SetOnCreate
               (void *__this,long ptr,long onCreateDelegate)

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
  (*pcRam0000000001916df0)(ptr,onCreateDelegate);
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


// ==== public void .ctor() { }   @0xad5b08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidWebViewTextureBridge___ctor(void *__this)

{
  return;
}


