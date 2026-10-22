using System;
using Adverty.Native;

namespace Adverty;

public interface IAndroidNativeUtils : INativeClass
{
	void RequestAdIdData(IntPtr callback);

	NativeIABData RequestIABData();
}
