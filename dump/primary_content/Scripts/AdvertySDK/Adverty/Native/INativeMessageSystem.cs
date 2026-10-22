using System;

namespace Adverty.Native;

public interface INativeMessageSystem : INativeClass
{
	void SetNativeEventsCallback(IntPtr callbackDelegate);

	void SetNativeEventsCallbackWithData(IntPtr callbackDelegate);
}
