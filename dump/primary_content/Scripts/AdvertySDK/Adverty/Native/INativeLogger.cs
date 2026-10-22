using System;

namespace Adverty.Native;

public interface INativeLogger : INativeClass
{
	void SetNativeDebugCallback(IntPtr callbackDelegate);

	void SetNativeDebugWithStackTraceCallback(IntPtr callbackDelegate);
}
