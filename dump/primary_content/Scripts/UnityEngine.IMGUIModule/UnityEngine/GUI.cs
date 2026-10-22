using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

public class GUI
{
	public delegate void WindowFunction(int id);

	private static int s_ScrollControlId;

	private static int s_HotTextField;

	private static readonly int s_BoxHash;

	private static readonly int s_ButonHash;

	private static readonly int s_RepeatButtonHash;

	private static readonly int s_ToggleHash;

	private static readonly int s_ButtonGridHash;

	private static readonly int s_SliderHash;

	private static readonly int s_BeginGroupHash;

	private static readonly int s_ScrollviewHash;

	private static GUISkin s_Skin;

	internal static Rect s_ToolTipRect;

	public static Color color
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public static Color backgroundColor
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public static Color contentColor
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public static bool changed
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool enabled
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	internal static bool usePageScrollbars => false;

	internal static int scrollTroughSide { get; set; }

	internal static DateTime nextScrollStepTime { get; set; }

	public static GUISkin skin
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static Matrix4x4 matrix
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	internal static GenericStack scrollViewStates { get; }

	internal static void GrabMouseControl(int id)
	{
	}

	internal static bool HasMouseControl(int id)
	{
		return false;
	}

	internal static void ReleaseMouseControl()
	{
	}

	internal static void InternalRepaintEditorWindow()
	{
	}

	private static Rect Internal_DoWindow(int id, int instanceID, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout)
	{
		return default;
	}

	static GUI()
	{
	}

	internal static void DoSetSkin(GUISkin newSkin)
	{
	}

	public static void Label(Rect position, string text)
	{
	}

	public static void Label(Rect position, GUIContent content, GUIStyle style)
	{
	}

	public static void Box(Rect position, string text)
	{
	}

	public static void Box(Rect position, GUIContent content, GUIStyle style)
	{
	}

	public static bool Button(Rect position, string text)
	{
		return false;
	}

	public static bool Button(Rect position, GUIContent content, GUIStyle style)
	{
		return false;
	}

	internal static bool Button(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return false;
	}

	private static bool DoRepeatButton(Rect position, GUIContent content, GUIStyle style, FocusType focusType)
	{
		return false;
	}

	internal static string PasswordFieldGetStrToShow(string password, char maskChar)
	{
		return null;
	}

	public static string TextArea(Rect position, string text)
	{
		return null;
	}

	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style)
	{
	}

	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText)
	{
	}

	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar)
	{
	}

	private static void HandleTextFieldEventForTouchscreen(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar, TextEditor editor)
	{
	}

	private static void HandleTextFieldEventForDesktop(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, TextEditor editor)
	{
	}

	private static void HandleTextFieldEventForDesktopWithForcedKeyboard(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, TextEditor editor)
	{
	}

	internal static bool DoControl(Rect position, int id, bool on, bool hover, GUIContent content, GUIStyle style)
	{
		return false;
	}

	private static void DoLabel(Rect position, GUIContent content, GUIStyle style)
	{
	}

	internal static bool DoButton(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return false;
	}

	public static float Slider(Rect position, float value, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, GUIStyle thumbExtent = null)
	{
		return 0f;
	}

	public static float HorizontalScrollbar(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle style)
	{
		return 0f;
	}

	internal static bool ScrollerRepeatButton(int scrollerID, Rect rect, GUIStyle style)
	{
		return false;
	}

	public static float VerticalScrollbar(Rect position, float value, float size, float topValue, float bottomValue, GUIStyle style)
	{
		return 0f;
	}

	internal static float Scroller(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUIStyle leftButton, GUIStyle rightButton, bool horiz)
	{
		return 0f;
	}

	public static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect)
	{
		return default;
	}

	internal static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background)
	{
		return default;
	}

	public static void EndScrollView()
	{
	}

	public static void EndScrollView(bool handleScrollWheel)
	{
	}

	public static Rect Window(int id, Rect clientRect, WindowFunction func, string text)
	{
		return default;
	}

	private static Rect DoWindow(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, GUISkin skin, bool forceRectOnLayout)
	{
		return default;
	}

	[RequiredByNativeCode]
	internal static void CallWindowDelegate(WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style)
	{
	}

	[SpecialName]
	private static void get_color_Injected(out Color ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void set_color_Injected(ref Color value)
	{
	}

	[SpecialName]
	private static void get_backgroundColor_Injected(out Color ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void set_backgroundColor_Injected(ref Color value)
	{
	}

	[SpecialName]
	private static void get_contentColor_Injected(out Color ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void set_contentColor_Injected(ref Color value)
	{
	}

	private static void Internal_DoWindow_Injected(int id, int instanceID, ref Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout, out Rect ret)
	{
		ret = default;
	}
}
