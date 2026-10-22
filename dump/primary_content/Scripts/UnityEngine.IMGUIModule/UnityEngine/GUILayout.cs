namespace UnityEngine;

public class GUILayout
{
	public static void Label(string text, params GUILayoutOption[] options)
	{
	}

	private static void DoLabel(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	public static bool Button(string text, params GUILayoutOption[] options)
	{
		return false;
	}

	private static bool DoButton(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return false;
	}

	public static Vector2 BeginScrollView(Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background, params GUILayoutOption[] options)
	{
		return default;
	}

	public static void EndScrollView()
	{
	}

	internal static void EndScrollView(bool handleScrollWheel)
	{
	}

	public static GUILayoutOption Width(float width)
	{
		return null;
	}

	public static GUILayoutOption Height(float height)
	{
		return null;
	}
}
