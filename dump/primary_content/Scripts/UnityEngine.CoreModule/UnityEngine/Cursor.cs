namespace UnityEngine;

public class Cursor
{
	public static bool visible
	{
		set
		{
		}
	}

	public static CursorLockMode lockState
	{
		get
		{
			return CursorLockMode.None;
		}
		set
		{
		}
	}

	public static void SetCursor(Texture2D texture, Vector2 hotspot, CursorMode cursorMode)
	{
	}

	private static void SetCursor_Injected(Texture2D texture, ref Vector2 hotspot, CursorMode cursorMode)
	{
	}
}
