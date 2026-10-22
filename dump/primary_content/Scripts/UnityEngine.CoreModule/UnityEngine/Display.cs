using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public class Display
{
	public delegate void DisplaysUpdatedDelegate();

	internal IntPtr nativeDisplay;

	public static Display[] displays;

	private static Display _mainDisplay;

	private static int m_ActiveEditorGameViewTarget;

	[CompilerGenerated]
	private static DisplaysUpdatedDelegate onDisplaysUpdated;

	public int renderingWidth => 0;

	public int renderingHeight => 0;

	public int systemWidth => 0;

	public int systemHeight => 0;

	public static Display main => null;

	internal Display()
	{
	}

	internal Display(IntPtr nativeDisplay)
	{
	}

	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates)
	{
		return default;
	}

	[RequiredByNativeCode]
	internal static void RecreateDisplayList(IntPtr[] nativeDisplay)
	{
	}

	[RequiredByNativeCode]
	internal static void FireDisplaysUpdated()
	{
	}

	private static void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h)
	{
		w = default;
		h = default;
	}

	private static void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h)
	{
		w = default;
		h = default;
	}

	private static int RelativeMouseAtImpl(int x, int y, out int rx, out int ry)
	{
		rx = default;
		ry = default;
		return 0;
	}
}
