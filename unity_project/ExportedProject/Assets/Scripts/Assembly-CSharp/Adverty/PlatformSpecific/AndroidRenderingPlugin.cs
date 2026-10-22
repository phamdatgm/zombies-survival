using System;
using System.Runtime.InteropServices;
using Adverty.Native;

namespace Adverty.PlatformSpecific
{
	public class AndroidRenderingPlugin : IAndroidRenderingPlugin, INativeClass
	{
		[PreserveSig]
		private static extern void SetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode);

		[PreserveSig]
		private static extern void IssuePluginEvent(int eventId);

		[PreserveSig]
		private static extern void CustomRenderEvent(int eventId);

		[PreserveSig]
		private static extern void SetNativeTexture(IntPtr handler, int width, int height, int id, int scale);

		[PreserveSig]
		private static extern void DestroyNativeTexture(int textureId);

		public void NativeSetGlIssuePluginEventMethod(IntPtr glIssuePluginMethod, int renderMode)
		{
		}

		public void NativeIssuePluginEvent(int eventId)
		{
		}

		public void Render(int eventId)
		{
		}

		public void SendTexture(IntPtr handler, int width, int height, int id, int scale)
		{
		}

		public void DestroyTexture(int id)
		{
		}
	}
}
