/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
public class AndroidNativeUtils : NativeBridge, IAndroidNativeUtils, INativeClass // TypeDefIndex: 5174
{
	// Methods

	private static extern void AdvertyRequestAdIdData(IntPtr callback) { }

	private static extern NativeIABData AdvertyRequestIABData() { }

	public void RequestAdIdData(IntPtr callback) { }

	public NativeIABData RequestIABData() { }

	public void .ctor() { }
}
*/

// ==== private static extern void AdvertyRequestAdIdData(IntPtr callback) { }   @0xb1af70

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidNativeUtils__AdvertyRequestAdIdData(long callback)

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


// ==== public NativeIABData RequestIABData() { }   @0xb1b080

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Adverty_PlatformSpecific_AndroidNativeUtils__RequestIABData(void *__this)

{
  void *pvVar1;
  undefined8 *in_x8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  pvVar1 = (void *)Adverty_PlatformSpecific_AndroidNativeUtils__AdvertyRequestIABData(&uStack_28);
  in_x8[2] = uStack_18;
  in_x8[1] = uStack_20;
  *in_x8 = uStack_28;
  return pvVar1;
}


// ==== public void .ctor() { }   @0xb1b0b0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_AndroidNativeUtils___ctor(void *__this)

{
  return;
}


