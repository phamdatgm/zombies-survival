using System.Buffers;
using System.Runtime.CompilerServices;

namespace System;

public struct Memory<T> : IEquatable<Memory<T>>
{
	private readonly object _object = null;

	private readonly int _index = 0;

	private readonly int _length = 0;

	public int Length => 0;

	public Span<T> Span
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Memory(T[] array)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Memory(T[] array, int start, int length)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal Memory(object obj, int start, int length)
	{
	}

	public static implicit operator Memory<T>(T[] array)
	{
		return default;
	}

	public static implicit operator ReadOnlyMemory<T>(Memory<T> memory)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Memory<T> Slice(int start, int length)
	{
		return default;
	}

	public MemoryHandle Pin()
	{
		return default;
	}

	public T[] ToArray()
	{
		return null;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(Memory<T> other)
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
}
