using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)2)]
[DefaultMember("Item")]
[UsedByNativeCode]
public struct Color32(byte r, byte g, byte b, byte a) : IFormattable
{
	[FieldOffset(0)]
	private int rgba = 0;

	[FieldOffset(0)]
	public byte r = 0;

	[FieldOffset(1)]
	public byte g = 0;

	[FieldOffset(2)]
	public byte b = 0;

	[FieldOffset(3)]
	public byte a = 0;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static implicit operator Color32(Color c)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static implicit operator Color(Color32 c)
	{
		return default;
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
}
