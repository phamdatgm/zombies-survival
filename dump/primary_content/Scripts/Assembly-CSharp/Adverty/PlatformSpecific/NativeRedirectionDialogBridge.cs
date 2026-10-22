using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific;

public class NativeRedirectionDialogBridge : NativeBridge, INativeRedirectionDialog, INativeClass
{
	[PreserveSig]
	private static extern void AdvertyShowRedirectionDialog(string url, IntPtr callback);

	public void ShowRedirectionDialog(string url, IntPtr callback)
	{
	}
}
