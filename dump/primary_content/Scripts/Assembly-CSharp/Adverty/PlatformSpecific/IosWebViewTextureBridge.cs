using System;
using Adverty.Native;

namespace Adverty.PlatformSpecific;

public class IosWebViewTextureBridge : BaseWebViewTextureBridge, IIosWebViewTextureBridge, IWebViewTextureBridge, INativeClass
{
	public override IntPtr Create(IntPtr cbo, int width, int height, int loadTimeout, int scale)
	{
		return (IntPtr)0;
	}

	public void SetDrawScreenAfterUpdate(IntPtr ptr, bool afterScreenUpdate)
	{
	}

	public void SetFramerate(IntPtr ptr, int framesPerSecond)
	{
	}

	public void ViewabilityCheck(IntPtr ptr, IntPtr checkPoints, IntPtr viewabilityCallback)
	{
	}
}
