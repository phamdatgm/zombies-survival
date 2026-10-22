using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific
{
	public class NativeMessageSystem : NativeBridge, INativeMessageSystem, INativeClass
	{
		[PreserveSig]
		private static extern void AdvertySetNativeEventsCallback(IntPtr callbackDelegate);

		[PreserveSig]
		private static extern void AdvertySetNativeEventsCallbackWithData(IntPtr callbackDelegate);

		public void SetNativeEventsCallback(IntPtr callbackDelegate)
		{
		}

		public void SetNativeEventsCallbackWithData(IntPtr callbackDelegate)
		{
		}
	}
}
