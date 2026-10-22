using System.Runtime.CompilerServices;

namespace System;

public struct ReadOnlyMemory<T> : IEquatable<ReadOnlyMemory<T>>
{
	private readonly object _object = null;

	private readonly int _index = 0;

	private readonly int _length = 0;

	public int Length => 0;

	public ReadOnlySpan<T> Span
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ReadOnlyMemory(T[] array)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ReadOnlyMemory(T[] array, int start, int length)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(ReadOnlyMemory<T> other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	private static int CombineHashCodes(int left, int right)
	{
		return 0;
	}

	private static int CombineHashCodes(int h1, int h2, int h3)
	{
		return 0;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal object GetObjectStartLength(out int start, out int length)
	{
		start = default;
		length = default;
		return null;
	}
}
