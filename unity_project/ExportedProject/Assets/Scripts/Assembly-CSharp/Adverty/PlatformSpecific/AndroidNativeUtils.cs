using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific
{
	public class AndroidNativeUtils : NativeBridge, IAndroidNativeUtils, INativeClass
	{
		[PreserveSig]
		private static extern void AdvertyRequestAdIdData(IntPtr callback);

		[PreserveSig]
		private static extern NativeIABData AdvertyRequestIABData();

		public void RequestAdIdData(IntPtr callback)
		{
		}

		public NativeIABData RequestIABData()
		{
			return default;
		}
	}
}
