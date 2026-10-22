using System.Runtime.CompilerServices;

namespace UnityEngine;

public class Input
{
	public static bool anyKey => false;

	public static Vector3 mousePosition => default;

	public static Vector2 mouseScrollDelta => default;

	public static IMECompositionMode imeCompositionMode
	{
		get
		{
			return IMECompositionMode.Auto;
		}
		set
		{
		}
	}

	public static string compositionString => null;

	public static Vector2 compositionCursorPos
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public static bool mousePresent => false;

	public static int touchCount => 0;

	public static bool touchSupported => false;

	public static Vector3 acceleration => default;

	public static int accelerationEventCount => 0;

	public static float GetAxis(string axisName)
	{
		return 0f;
	}

	public static float GetAxisRaw(string axisName)
	{
		return 0f;
	}

	public static bool GetButton(string buttonName)
	{
		return false;
	}

	public static bool GetButtonDown(string buttonName)
	{
		return false;
	}

	private static bool GetKeyInt(KeyCode key)
	{
		return false;
	}

	private static bool GetKeyDownInt(KeyCode key)
	{
		return false;
	}

	public static bool GetMouseButton(int button)
	{
		return false;
	}

	public static bool GetMouseButtonDown(int button)
	{
		return false;
	}

	public static bool GetMouseButtonUp(int button)
	{
		return false;
	}

	public static Touch GetTouch(int index)
	{
		return default;
	}

	public static PenData GetLastPenContactEvent()
	{
		return default;
	}

	public static void ClearLastPenContactEvent()
	{
	}

	public static bool GetKey(KeyCode key)
	{
		return false;
	}

	public static bool GetKeyDown(KeyCode key)
	{
		return false;
	}

	internal static bool CheckDisabled()
	{
		return false;
	}

	private static void GetTouch_Injected(int index, out Touch ret)
	{
		ret = default;
	}

	private static void GetLastPenContactEvent_Injected(out PenData ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void get_mousePosition_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void get_mouseScrollDelta_Injected(out Vector2 ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void get_compositionCursorPos_Injected(out Vector2 ret)
	{
		ret = default;
	}

	[SpecialName]
	private static void set_compositionCursorPos_Injected(ref Vector2 value)
	{
	}

	[SpecialName]
	private static void get_acceleration_Injected(out Vector3 ret)
	{
		ret = default;
	}
}
