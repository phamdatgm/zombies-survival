namespace UnityEngine.Internal;

internal static class InputUnsafeUtility
{
	internal unsafe static bool GetKeyString__Unmanaged(byte* name, int nameLen)
	{
		return false;
	}

	internal unsafe static bool GetKeyUpString__Unmanaged(byte* name, int nameLen)
	{
		return false;
	}

	internal unsafe static bool GetKeyDownString__Unmanaged(byte* name, int nameLen)
	{
		return false;
	}

	internal static float GetAxis(string axisName)
	{
		return 0f;
	}

	internal unsafe static float GetAxis__Unmanaged(byte* axisName, int axisNameLen)
	{
		return 0f;
	}

	internal static float GetAxisRaw(string axisName)
	{
		return 0f;
	}

	internal unsafe static float GetAxisRaw__Unmanaged(byte* axisName, int axisNameLen)
	{
		return 0f;
	}

	internal static bool GetButton(string buttonName)
	{
		return false;
	}

	internal unsafe static bool GetButton__Unmanaged(byte* buttonName, int buttonNameLen)
	{
		return false;
	}

	internal static bool GetButtonDown(string buttonName)
	{
		return false;
	}

	internal unsafe static byte GetButtonDown__Unmanaged(byte* buttonName, int buttonNameLen)
	{
		return 0;
	}

	internal unsafe static bool GetButtonUp__Unmanaged(byte* buttonName, int buttonNameLen)
	{
		return false;
	}
}
