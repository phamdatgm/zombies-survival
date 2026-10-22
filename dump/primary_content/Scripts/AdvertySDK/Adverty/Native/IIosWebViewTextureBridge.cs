using System;

namespace Adverty.Native;

public interface IIosWebViewTextureBridge : IWebViewTextureBridge, INativeClass
{
	void SetDrawScreenAfterUpdate(IntPtr ptr, bool afterScreenUpdate);

	void SetFramerate(IntPtr ptr, int framesPerSecond);

	void ViewabilityCheck(IntPtr ptr, IntPtr checkPoints, IntPtr viewabilityCallback);
}
