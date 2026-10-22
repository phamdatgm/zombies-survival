using System;
using System.Runtime.CompilerServices;

namespace UnityEngine;

public struct RefreshRate : IEquatable<RefreshRate>, IComparable<RefreshRate>
{
	public uint numerator;

	public uint denominator;

	public double value
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return 0.0;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public bool Equals(RefreshRate other)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public int CompareTo(RefreshRate other)
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}
}
