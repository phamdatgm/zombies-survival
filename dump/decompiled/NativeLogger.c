/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
public class NativeLogger : NativeBridge, INativeLogger, INativeClass // TypeDefIndex: 5175
{
	// Methods

	private static extern void AdvertySetNativeDebugCallback(IntPtr callbackDelegate) { }

	private static extern void AdvertySetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate) { }

	public void SetNativeDebugCallback(IntPtr callbackDelegate) { }

	public void SetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate) { }

	public void .ctor() { }
}
*/

// ==== private static extern void AdvertySetNativeDebugCallback(IntPtr callbackDelegate) { }   @0xb1b0b8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeLogger__AdvertySetNativeDebugCallback(long callbackDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917000 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ab5c1;
    uStack_38 = 0x1d;
    uStack_28 = 8;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917000 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917000)(callbackDelegate);
  return;
}


// ==== private static extern void AdvertySetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate) { }   @0xb1b130

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeLogger__AdvertySetNativeDebugWithStackTraceCallback
               (long callbackDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917008 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ab5df;
    uStack_38 = 0x2b;
    uStack_28 = 8;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917008 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917008)(callbackDelegate);
  return;
}


// ==== public void SetNativeDebugCallback(IntPtr callbackDelegate) { }   @0xb1b1a8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeLogger__SetNativeDebugCallback
               (void *__this,long callbackDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917000 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ab5c1;
    uStack_38 = 0x1d;
    uStack_28 = 8;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917000 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917000)(callbackDelegate);
  return;
}


// ==== public void SetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate) { }   @0xb1b1b0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeLogger__SetNativeDebugWithStackTraceCallback
               (void *__this,long callbackDelegate)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000001917008 == (code *)0x0) {
    puStack_50 = &UNK_0059cb7a;
    uStack_48 = 8;
    puStack_40 = &UNK_005ab5df;
    uStack_38 = 0x2b;
    uStack_28 = 8;
    uStack_30 = 0x200000000;
    uStack_24 = 0;
    pcRam0000000001917008 = (code *)func_0x00a67fa8(&puStack_50);
  }
  (*pcRam0000000001917008)(callbackDelegate);
  return;
}


// ==== public void .ctor() { }   @0xb1b1b8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_NativeLogger___ctor(void *__this)

{
  return;
}


