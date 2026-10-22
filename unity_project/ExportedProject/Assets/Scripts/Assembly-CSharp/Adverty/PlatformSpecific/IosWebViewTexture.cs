using System;
using Adverty.Native;

namespace Adverty.PlatformSpecific
{
	public class IosWebViewTexture : IIosWebViewTexture, INativeClass
	{
		public void Initialize(int loadHtmlTimeout)
		{
		}

		public IntPtr NativeAdvertyWebViewTextureCreate(IntPtr textureId, int width, int height, int eventListenerId, int scale)
		{
			return (IntPtr)0;
		}

		public void NativeAdvertyWebViewTextureUpdateTexture(IntPtr instance)
		{
		}

		public void NativeAdvertyWebViewTextureLoadUrl(IntPtr instance, string url)
		{
		}

		public void NativeAdvertyWebViewTextureLoadHtml(IntPtr instance, string html)
		{
		}

		public void NativeAdvertyWebViewTextureRunJavaScript(IntPtr instance, string javaScriptString)
		{
		}

		public void NativeAdvertyWebViewTextureDestroy(IntPtr instance)
		{
		}
	}
}
