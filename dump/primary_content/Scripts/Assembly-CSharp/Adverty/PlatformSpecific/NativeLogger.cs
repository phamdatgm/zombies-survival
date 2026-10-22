using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific;

public class NativeLogger : NativeBridge, INativeLogger, INativeClass
{
	[PreserveSig]
	private static extern void AdvertySetNativeDebugCallback(IntPtr callbackDelegate);

	[PreserveSig]
	private static extern void AdvertySetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate);

	public void SetNativeDebugCallback(IntPtr callbackDelegate)
	{
	}

	public void SetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate)
	{
	}
}
