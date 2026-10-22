using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public class GUIUtility
{
	internal static int s_ControlCount;

	internal static int s_SkinMode;

	internal static int s_OriginalID;

	internal static Action takeCapture;

	internal static Action releaseCapture;

	internal static Func<int, IntPtr, bool> processEvent;

	internal static Action cleanupRoots;

	internal static Func<Exception, bool> endContainerGUIFromException;

	internal static Action guiChanged;

	internal static Action<EventType, KeyCode> beforeEventProcessed;

	private static Event m_Event;

	internal static Func<bool> s_HasCurrentWindowKeyFocusFunc;

	internal static float pixelsPerPoint => 0f;

	internal static int guiDepth => 0;

	internal static bool textFieldInput
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static string systemCopyBuffer
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal static string compositionString => null;

	internal static IMECompositionMode imeCompositionMode
	{
		set
		{
		}
	}

	internal static Vector2 compositionCursorPos
	{
		set
		{
		}
	}

	internal static bool guiIsExiting { set; }

	public static int hotControl
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public static int keyboardControl
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	private static int Internal_GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return 0;
	}

	public static int GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return 0;
	}

	internal static void BeginContainerFromOwner(ScriptableObject owner)
	{
	}

	internal static void BeginContainer(ObjectGUIState objectGUIState)
	{
	}

	internal static void Internal_EndContainer()
	{
	}

	internal static int CheckForTabEvent(Event evt)
	{
		return 0;
	}

	internal static void SetKeyboardControlToFirstControlId()
	{
	}

	internal static void SetKeyboardControlToLastControlId()
	{
	}

	internal static bool HasFocusableControls()
	{
		return false;
	}

	internal static bool OwnsId(int id)
	{
		return false;
	}

	public static Rect AlignRectToDevice(Rect rect, out int widthInPixels, out int heightInPixels)
	{
		widthInPixels = default;
		heightInPixels = default;
		return default;
	}

	private static int Internal_GetHotControl()
	{
		return 0;
	}

	private static int Internal_GetKeyboardControl()
	{
		return 0;
	}

	private static void Internal_SetHotControl(int value)
	{
	}

	private static void Internal_SetKeyboardControl(int value)
	{
	}

	private static object Internal_GetDefaultSkin(int skinMode)
	{
		return null;
	}

	private static void Internal_ExitGUI()
	{
	}

	[RequiredByNativeCode]
	private static void MarkGUIChanged()
	{
	}

	public static int GetControlID(FocusType focus, Rect position)
	{
		return 0;
	}

	public static int GetControlID(int hint, FocusType focus)
	{
		return 0;
	}

	public static object GetStateObject(Type t, int controlID)
	{
		return null;
	}

	[RequiredByNativeCode]
	internal static void TakeCapture()
	{
	}

	[RequiredByNativeCode]
	internal static void RemoveCapture()
	{
	}

	internal static bool HasKeyFocus(int controlID)
	{
		return false;
	}

	public static void ExitGUI()
	{
	}

	internal static GUISkin GetDefaultSkin()
	{
		return null;
	}

	[RequiredByNativeCode]
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result)
	{
		result = default;
	}

	internal static void EndContainer()
	{
	}

	[RequiredByNativeCode]
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout)
	{
	}

	[RequiredByNativeCode]
	internal static void DestroyGUI(int instanceID)
	{
	}

	[RequiredByNativeCode]
	internal static void EndGUI(int layoutType)
	{
	}

	[RequiredByNativeCode]
	internal static bool EndGUIFromException(Exception exception)
	{
		return false;
	}

	[RequiredByNativeCode]
	internal static bool EndContainerGUIFromException(Exception exception)
	{
		return false;
	}

	internal static void ResetGlobalState()
	{
	}

	internal static bool IsExitGUIException(Exception exception)
	{
		return false;
	}

	internal static bool ShouldRethrowException(Exception exception)
	{
		return false;
	}

	internal static void CheckOnGUI()
	{
	}

	internal static float RoundToPixelGrid(float v)
	{
		return 0f;
	}

	public static Rect AlignRectToDevice(Rect rect)
	{
		return default;
	}

	internal static bool HitTest(Rect rect, Vector2 point, int offset)
	{
		return false;
	}

	internal static bool HitTest(Rect rect, Vector2 point, bool isDirectManipulationDevice)
	{
		return false;
	}

	internal static bool HitTest(Rect rect, Event evt)
	{
		return false;
	}

	private static int Internal_GetControlID_Injected(int hint, FocusType focusType, ref Rect rect)
	{
		return 0;
	}

	private static void AlignRectToDevice_Injected(ref Rect rect, out int widthInPixels, out int heightInPixels, out Rect ret)
	{
		widthInPixels = default;
		heightInPixels = default;
		ret = default;
	}

	[SpecialName]
	private static void set_compositionCursorPos_Injected(ref Vector2 value)
	{
	}
}
