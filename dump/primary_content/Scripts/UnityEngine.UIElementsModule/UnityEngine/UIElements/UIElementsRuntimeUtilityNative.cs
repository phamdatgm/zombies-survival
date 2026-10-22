using System;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements;

internal static class UIElementsRuntimeUtilityNative
{
	internal static Action RepaintOverlayPanelsCallback;

	internal static Action UpdateRuntimePanelsCallback;

	internal static Action RepaintOffscreenPanelsCallback;

	[RequiredByNativeCode]
	public static void RepaintOverlayPanels()
	{
	}

	[RequiredByNativeCode]
	public static void UpdateRuntimePanels()
	{
	}

	[RequiredByNativeCode]
	public static void RepaintOffscreenPanels()
	{
	}

	public static void RegisterPlayerloopCallback()
	{
	}

	public static void UnregisterPlayerloopCallback()
	{
	}

	public static void VisualElementCreation()
	{
	}
}
