using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[UsedByNativeCode]
public class RectOffset : IFormattable
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	private readonly object m_SourceStyle;

	public int left
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int right
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int top
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int bottom
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int horizontal => 0;

	public int vertical => 0;

	public RectOffset()
	{
	}

	internal RectOffset(object sourceStyle, IntPtr source)
	{
	}

	~RectOffset()
	{
	}

	public RectOffset(int left, int right, int top, int bottom)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	private void Destroy()
	{
	}

	private static IntPtr InternalCreate()
	{
		return (IntPtr)0;
	}

	private static void InternalDestroy(IntPtr ptr)
	{
	}

	public Rect Remove(Rect rect)
	{
		return default;
	}

	private void Remove_Injected(ref Rect rect, out Rect ret)
	{
		ret = default;
	}
}
