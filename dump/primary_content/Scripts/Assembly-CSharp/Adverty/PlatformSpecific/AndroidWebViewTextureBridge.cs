using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific;

public class AndroidWebViewTextureBridge : BaseWebViewTextureBridge, IAndroidWebViewTextureBridge, IWebViewTextureBridge, INativeClass
{
	[PreserveSig]
	private static extern IntPtr getCustomRenderEventFunc();

	[PreserveSig]
	private static extern void setOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate);

	[PreserveSig]
	private static extern void setOnCreated(IntPtr ptr, IntPtr onCreatedDelegate);

	[PreserveSig]
	private static extern IntPtr create(int cbo, int width, int height, int loadTimeout, int scale);

	public IntPtr GetCustomRenderEventFunc()
	{
		return (IntPtr)0;
	}

	public override IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale)
	{
		return (IntPtr)0;
	}

	public void SetOnCreate(IntPtr ptr, IntPtr onCreateDelegate)
	{
	}

	public void SetOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate)
	{
	}
}
