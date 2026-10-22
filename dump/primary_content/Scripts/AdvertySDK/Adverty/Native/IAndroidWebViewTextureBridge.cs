using System;

namespace Adverty.Native;

public interface IAndroidWebViewTextureBridge : IWebViewTextureBridge, INativeClass
{
	void SetOnPageStarted(IntPtr ptr, IntPtr onPageStartedDelegate);

	void SetOnCreate(IntPtr ptr, IntPtr onCreateDelegate);

	IntPtr GetCustomRenderEventFunc();
}
