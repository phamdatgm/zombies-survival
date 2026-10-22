using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
public sealed class GUIStyleState
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	private readonly GUIStyle m_SourceStyle;

	public Color textColor
	{
		set
		{
		}
	}

	private static IntPtr Init()
	{
		return (IntPtr)0;
	}

	private void Cleanup()
	{
	}

	public GUIStyleState()
	{
	}

	private GUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
	}

	internal static GUIStyleState GetGUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
		return null;
	}

	~GUIStyleState()
	{
	}

	[SpecialName]
	private void set_textColor_Injected(ref Color value)
	{
	}
}
