using System;

namespace UnityEngine;

public class TouchScreenKeyboard
{
	public enum Status
	{
		Visible = 0,
		Done = 1,
		Canceled = 2,
		LostFocus = 3
	}

	[NonSerialized]
	internal IntPtr m_Ptr;

	public static bool isSupported => false;

	internal static bool disableInPlaceEditing { get; }

	public static bool isInPlaceEditingAllowed => false;

	internal static bool isRequiredToForceOpen => false;

	public string text
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static bool hideInput
	{
		set
		{
		}
	}

	public bool active
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public Status status => Status.Visible;

	public int characterLimit
	{
		set
		{
		}
	}

	public bool canGetSelection => false;

	public bool canSetSelection => false;

	public RangeInt selection
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	private static void Internal_Destroy(IntPtr ptr)
	{
	}

	private void Destroy()
	{
	}

	~TouchScreenKeyboard()
	{
	}

	public TouchScreenKeyboard(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit)
	{
	}

	private static IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, string text, string textPlaceholder)
	{
		return (IntPtr)0;
	}

	private static bool IsInPlaceEditingAllowed()
	{
		return false;
	}

	private static bool IsRequiredToForceOpen()
	{
		return false;
	}

	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit)
	{
		return null;
	}

	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)
	{
		return null;
	}

	private static void GetSelection(out int start, out int length)
	{
		start = default;
		length = default;
	}

	private static void SetSelection(int start, int length)
	{
	}
}
