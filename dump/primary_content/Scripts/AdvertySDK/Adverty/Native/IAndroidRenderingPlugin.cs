using System;

namespace Adverty.Native;

public interface IAndroidRenderingPlugin : INativeClass
{
	void DestroyTexture(int id);

	void SendTexture(IntPtr handler, int width, int height, int id, int scale);

	void NativeSetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode);

	void NativeIssuePluginEvent(int eventId);

	void Render(int eventId);
}
