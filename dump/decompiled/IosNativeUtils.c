/* ---- class definition (Il2CppDumper) ----

// Namespace: Adverty.PlatformSpecific
public class IosNativeUtils : NativeBridge, IIosNativeUtils, INativeClass // TypeDefIndex: 5095
{
	// Methods

	public string GetSystemLocale() { }

	public void SetUnityEventListenerId(int listenerId) { }

	public void GetUserAgent() { }

	public void RequestAdIdData(IntPtr callback) { }

	public NativeIABData RequestIABData() { }

	public void .ctor() { }
}
*/

// ==== public string GetSystemLocale() { }   @0xaed1f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Adverty_PlatformSpecific_IosNativeUtils__GetSystemLocale(void *__this)

{
  if ((bRam0000000001916ea2 & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916ea2 = 1;
  }
  return (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
}


// ==== public void SetUnityEventListenerId(int listenerId) { }   @0xaed240

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_IosNativeUtils__SetUnityEventListenerId(void *__this,int listenerId)

{
  return;
}


// ==== public void GetUserAgent() { }   @0xaed244

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_IosNativeUtils__GetUserAgent(void *__this)

{
  return;
}


// ==== public void RequestAdIdData(IntPtr callback) { }   @0xaed248

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_IosNativeUtils__RequestAdIdData(void *__this,long callback)

{
  return;
}


// ==== public NativeIABData RequestIABData() { }   @0xaed24c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Adverty_PlatformSpecific_IosNativeUtils__RequestIABData(void *__this)

{
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  return __this;
}


// ==== public void .ctor() { }   @0xaed258

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Adverty_PlatformSpecific_IosNativeUtils___ctor(void *__this)

{
  return;
}


