using System;
using Adverty.Native;

namespace Adverty.PlatformSpecific
{
	public class IosNativeUtils : NativeBridge, IIosNativeUtils, INativeClass
	{
		public string GetSystemLocale()
		{
			return null;
		}

		public void SetUnityEventListenerId(int listenerId)
		{
		}

		public void GetUserAgent()
		{
		}

		public void RequestAdIdData(IntPtr callback)
		{
		}

		public NativeIABData RequestIABData()
		{
			return default;
		}
	}
}
