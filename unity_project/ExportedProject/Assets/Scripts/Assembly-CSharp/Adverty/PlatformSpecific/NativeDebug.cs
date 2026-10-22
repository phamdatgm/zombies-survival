using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific
{
	public class NativeDebug : NativeBridge, INativeDebug, INativeClass
	{
		[PreserveSig]
		private static extern void AdvertyInitializeDebug();

		public void Initialize()
		{
		}
	}
}
