using System;

namespace UnityEngine.Android;

internal static class AndroidApp
{
	private static AndroidJavaObject m_Context;

	private static AndroidJavaObject m_Activity;

	public static AndroidJavaObject Context => null;

	public static AndroidJavaObject Activity => null;

	public static IntPtr UnityPlayerRaw => (IntPtr)0;

	private static void AcquireContextAndActivity()
	{
	}
}
