using System;
using System.Collections.Generic;
using UnityEngineInternal;

namespace UnityEngine;

public class GUILayoutUtility
{
	internal sealed class LayoutCache
	{
		internal GUILayoutGroup topLevel;

		internal GenericStack layoutGroups;

		internal GUILayoutGroup windows;

		private int id { set; }

		internal LayoutCache(int instanceID = -1)
		{
		}

		public void ResetCursor()
		{
		}
	}

	private static readonly Dictionary<int, LayoutCache> s_StoredLayouts;

	private static readonly Dictionary<int, LayoutCache> s_StoredWindows;

	internal static LayoutCache current;

	internal static readonly Rect kDummyRect;

	internal static int unbalancedgroupscount { get; set; }

	private static Rect Internal_GetWindowRect(int windowID)
	{
		return default;
	}

	private static void Internal_MoveWindow(int windowID, Rect r)
	{
	}

	internal static LayoutCache GetLayoutCache(int instanceID, bool isWindow)
	{
		return null;
	}

	internal static LayoutCache SelectIDList(int instanceID, bool isWindow)
	{
		return null;
	}

	internal static void RemoveSelectedIdList(int instanceID, bool isWindow)
	{
	}

	internal static void Begin(int instanceID)
	{
	}

	internal static void BeginContainer(LayoutCache cache)
	{
	}

	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options)
	{
	}

	internal static void Layout()
	{
	}

	internal static void LayoutFromEditorWindow()
	{
	}

	internal static void LayoutFromContainer(float w, float h)
	{
	}

	internal static void LayoutFreeGroup(GUILayoutGroup toplevel)
	{
	}

	private static void LayoutSingleGroup(GUILayoutGroup i)
	{
	}

	private static GUILayoutGroup CreateGUILayoutGroupInstanceOfType(Type LayoutType)
	{
		return null;
	}

	internal static GUILayoutGroup BeginLayoutGroup(GUIStyle style, GUILayoutOption[] options, Type layoutType)
	{
		return null;
	}

	internal static void EndLayoutGroup()
	{
	}

	public static Rect GetRect(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
		return default;
	}

	private static Rect DoGetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default;
	}

	private static void Internal_GetWindowRect_Injected(int windowID, out Rect ret)
	{
		ret = default;
	}

	private static void Internal_MoveWindow_Injected(int windowID, ref Rect r)
	{
	}
}
