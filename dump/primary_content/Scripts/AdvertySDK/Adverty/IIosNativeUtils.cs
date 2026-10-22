using System;
using Adverty.Native;

namespace Adverty;

public interface IIosNativeUtils : INativeClass
{
	string GetSystemLocale();

	void GetUserAgent();

	void SetUnityEventListenerId(int listenerId);

	void RequestAdIdData(IntPtr callback);

	NativeIABData RequestIABData();
}
