using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific;

public class BaseWebViewTextureBridge : NativeBridge, IWebViewTextureBridge, INativeClass
{
	[PreserveSig]
	private static extern IntPtr destroy(IntPtr ptr, string data);

	[PreserveSig]
	private static extern void loadData(IntPtr ptr, string data);

	[PreserveSig]
	private static extern void loadUrl(IntPtr ptr, string url);

	[PreserveSig]
	private static extern bool setOnClickAction(IntPtr ptr, IntPtr onClickDelegate);

	[PreserveSig]
	private static extern void setOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate);

	[PreserveSig]
	private static extern void setOnReceivedError(IntPtr ptr, IntPtr onReceivedErrorDelegate);

	[PreserveSig]
	private static extern void setOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckCompleteDelegate);

	[PreserveSig]
	private static extern void setRenderingActive(IntPtr ptr, bool active);

	[PreserveSig]
	private static extern void setOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate);

	[PreserveSig]
	private static extern void touch(IntPtr ptr, float x, float y);

	[PreserveSig]
	private static extern void sendViewabilityData(IntPtr ptr, string data);

	[PreserveSig]
	private static extern void triggerViewedImpression(IntPtr ptr, string data);

	public virtual IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale)
	{
		return (IntPtr)0;
	}

	public void Destroy(IntPtr ptr, string data)
	{
	}

	public void LoadData(IntPtr ptr, string data)
	{
	}

	public void LoadURL(IntPtr ptr, string url)
	{
	}

	public void SetOnClicked(IntPtr ptr, IntPtr onClickedDelegate)
	{
	}

	public void SetOnHtmlLoadTimeout(IntPtr ptr, IntPtr onHtmlLoadTimeoutDelegate)
	{
	}

	public void SetOnPageFinished(IntPtr ptr, IntPtr onPageFinishedDelegate)
	{
	}

	public void SetOnReceiveError(IntPtr ptr, IntPtr onReceivedErrorDelegate)
	{
	}

	public void SetOnTextureCheckPassed(IntPtr ptr, IntPtr onTextureCheckPassedDelegate)
	{
	}

	public void SetRenderActive(IntPtr ptr, bool active)
	{
	}

	public void Touch(IntPtr ptr, float x, float y)
	{
	}

	public void SendViewabilityData(IntPtr ptr, string data)
	{
	}

	public void TriggerViewedImpression(IntPtr ptr, string data)
	{
	}
}
