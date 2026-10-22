using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
public sealed class Event
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	private static Event s_Current;

	private static Event s_MasterEvent;

	public EventType rawType => EventType.MouseDown;

	public Vector2 mousePosition
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector2 delta
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public PointerType pointerType => PointerType.Mouse;

	public int button => 0;

	public EventModifiers modifiers
	{
		get
		{
			return EventModifiers.None;
		}
		set
		{
		}
	}

	public float pressure => 0f;

	public float twist => 0f;

	public Vector2 tilt => default;

	public PenStatus penStatus => PenStatus.None;

	public int clickCount => 0;

	public char character
	{
		get
		{
			return '\0';
		}
		set
		{
		}
	}

	public KeyCode keyCode
	{
		get
		{
			return KeyCode.None;
		}
		set
		{
		}
	}

	public int displayIndex
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public EventType type
	{
		get
		{
			return EventType.MouseDown;
		}
		set
		{
		}
	}

	public string commandName
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public bool shift => false;

	public bool control => false;

	public bool alt => false;

	public bool command => false;

	public static Event current
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public bool isKey => false;

	public bool isMouse => false;

	internal bool isDirectManipulationDevice => false;

	private void Internal_Use()
	{
	}

	private static IntPtr Internal_Create(int displayIndex)
	{
		return (IntPtr)0;
	}

	private static void Internal_Destroy(IntPtr ptr)
	{
	}

	public EventType GetTypeForControl(int controlID)
	{
		return EventType.MouseDown;
	}

	internal void CopyFromPtr(IntPtr ptr)
	{
	}

	public static bool PopEvent(Event outEvent)
	{
		return false;
	}

	private static void Internal_SetNativeEvent(IntPtr ptr)
	{
	}

	[RequiredByNativeCode]
	internal static void Internal_MakeMasterEventCurrent(int displayIndex)
	{
	}

	internal static int GetDoubleClickTime()
	{
		return 0;
	}

	public Event()
	{
	}

	public Event(int displayIndex)
	{
	}

	~Event()
	{
	}

	internal void CopyFrom(Event e)
	{
	}

	public static Event KeyboardEvent(string key)
	{
		return null;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}

	public void Use()
	{
	}

	[SpecialName]
	private void get_mousePosition_Injected(out Vector2 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_mousePosition_Injected(ref Vector2 value)
	{
	}

	[SpecialName]
	private void get_delta_Injected(out Vector2 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_delta_Injected(ref Vector2 value)
	{
	}

	[SpecialName]
	private void get_tilt_Injected(out Vector2 ret)
	{
		ret = default;
	}
}
