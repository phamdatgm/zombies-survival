using System;
using Adverty.Native;

namespace Adverty;

public interface IIosWebViewTexture : INativeClass
{
	void Initialize(int loadHtmlTimeout);

	IntPtr NativeAdvertyWebViewTextureCreate(IntPtr textureId, int width, int height, int eventListenerId, int scale);

	void NativeAdvertyWebViewTextureUpdateTexture(IntPtr instance);

	void NativeAdvertyWebViewTextureLoadUrl(IntPtr instance, string url);

	void NativeAdvertyWebViewTextureLoadHtml(IntPtr instance, string html);

	void NativeAdvertyWebViewTextureRunJavaScript(IntPtr instance, string javaScriptString);

	void NativeAdvertyWebViewTextureDestroy(IntPtr instance);
}
