using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[RequiredByNativeCode]
public sealed class GUIStyle
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	[NonSerialized]
	private GUIStyleState m_Normal;

	[NonSerialized]
	private GUIStyleState m_Hover;

	[NonSerialized]
	private GUIStyleState m_Active;

	[NonSerialized]
	private GUIStyleState m_Focused;

	[NonSerialized]
	private GUIStyleState m_OnNormal;

	[NonSerialized]
	private GUIStyleState m_OnHover;

	[NonSerialized]
	private GUIStyleState m_OnActive;

	[NonSerialized]
	private GUIStyleState m_OnFocused;

	[NonSerialized]
	private RectOffset m_Border;

	[NonSerialized]
	private RectOffset m_Padding;

	[NonSerialized]
	private RectOffset m_Margin;

	[NonSerialized]
	private RectOffset m_Overflow;

	[NonSerialized]
	private string m_Name;

	internal static bool showKeyboardFocus;

	private static GUIStyle s_None;

	internal string rawName
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Font font => null;

	public ImagePosition imagePosition => ImagePosition.ImageLeft;

	public bool wordWrap => false;

	public Vector2 contentOffset
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public float fixedWidth => 0f;

	public float fixedHeight => 0f;

	public bool stretchWidth => false;

	public bool stretchHeight
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	internal Vector2 Internal_clipOffset
	{
		set
		{
		}
	}

	public string name
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public GUIStyleState normal => null;

	public RectOffset margin => null;

	public RectOffset padding => null;

	public float lineHeight => 0f;

	public static GUIStyle none => null;

	public bool isHeightDependantOnWidth => false;

	private static IntPtr Internal_Create(GUIStyle self)
	{
		return (IntPtr)0;
	}

	private static void Internal_Destroy(IntPtr self)
	{
	}

	private IntPtr GetStyleStatePtr(int idx)
	{
		return (IntPtr)0;
	}

	private IntPtr GetRectOffsetPtr(int idx)
	{
		return (IntPtr)0;
	}

	private static float Internal_GetLineHeight(IntPtr target)
	{
		return 0f;
	}

	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	private void Internal_DrawCursor(Rect position, GUIContent content, int pos, Color cursorColor)
	{
	}

	private void Internal_DrawWithTextSelection(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int cursorFirst, int cursorLast, Color cursorColor, Color selectionColor)
	{
	}

	internal Vector2 Internal_GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex)
	{
		return default;
	}

	internal int Internal_GetCursorStringIndex(Rect position, GUIContent content, Vector2 cursorPixelPosition)
	{
		return 0;
	}

	internal string Internal_GetSelectedRenderedText(Rect localPosition, GUIContent mContent, int selectIndex, int cursorIndex)
	{
		return null;
	}

	internal Vector2 Internal_CalcSize(GUIContent content)
	{
		return default;
	}

	internal Vector2 Internal_CalcSizeWithConstraints(GUIContent content, Vector2 maxSize)
	{
		return default;
	}

	private float Internal_CalcHeight(GUIContent content, float width)
	{
		return 0f;
	}

	private Vector2 Internal_CalcMinMaxWidth(GUIContent content)
	{
		return default;
	}

	internal static void SetMouseTooltip(string tooltip, Rect screenRect)
	{
	}

	internal static bool IsTooltipActive(string tooltip)
	{
		return false;
	}

	private static float Internal_GetCursorFlashOffset()
	{
		return 0f;
	}

	internal static void SetDefaultFont(Font font)
	{
	}

	~GUIStyle()
	{
	}

	public void Draw(Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	public void Draw(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	public void Draw(Rect position, GUIContent content, int controlID, bool on, bool hover)
	{
	}

	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	public void DrawCursor(Rect position, GUIContent content, int controlID, int character)
	{
	}

	internal void DrawWithTextSelection(Rect position, GUIContent content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, Color selectionColor)
	{
	}

	internal void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition)
	{
	}

	public void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter)
	{
	}

	public Vector2 GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex)
	{
		return default;
	}

	public int GetCursorStringIndex(Rect position, GUIContent content, Vector2 cursorPixelPosition)
	{
		return 0;
	}

	public Vector2 CalcSize(GUIContent content)
	{
		return default;
	}

	internal Vector2 CalcSizeWithConstraints(GUIContent content, Vector2 constraints)
	{
		return default;
	}

	public float CalcHeight(GUIContent content, float width)
	{
		return 0f;
	}

	public void CalcMinMaxWidth(GUIContent content, out float minWidth, out float maxWidth)
	{
		minWidth = default;
		maxWidth = default;
	}

	public override string ToString()
	{
		return null;
	}

	[SpecialName]
	private void get_contentOffset_Injected(out Vector2 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_contentOffset_Injected(ref Vector2 value)
	{
	}

	[SpecialName]
	private void set_Internal_clipOffset_Injected(ref Vector2 value)
	{
	}

	private void Internal_Draw_Injected(ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	private void Internal_Draw2_Injected(ref Rect position, GUIContent content, int controlID, bool on)
	{
	}

	private void Internal_DrawCursor_Injected(ref Rect position, GUIContent content, int pos, ref Color cursorColor)
	{
	}

	private void Internal_DrawWithTextSelection_Injected(ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int cursorFirst, int cursorLast, ref Color cursorColor, ref Color selectionColor)
	{
	}

	private void Internal_GetCursorPixelPosition_Injected(ref Rect position, GUIContent content, int cursorStringIndex, out Vector2 ret)
	{
		ret = default;
	}

	private int Internal_GetCursorStringIndex_Injected(ref Rect position, GUIContent content, ref Vector2 cursorPixelPosition)
	{
		return 0;
	}

	private string Internal_GetSelectedRenderedText_Injected(ref Rect localPosition, GUIContent mContent, int selectIndex, int cursorIndex)
	{
		return null;
	}

	private void Internal_CalcSize_Injected(GUIContent content, out Vector2 ret)
	{
		ret = default;
	}

	private void Internal_CalcSizeWithConstraints_Injected(GUIContent content, ref Vector2 maxSize, out Vector2 ret)
	{
		ret = default;
	}

	private void Internal_CalcMinMaxWidth_Injected(GUIContent content, out Vector2 ret)
	{
		ret = default;
	}

	private static void SetMouseTooltip_Injected(string tooltip, ref Rect screenRect)
	{
	}
}
