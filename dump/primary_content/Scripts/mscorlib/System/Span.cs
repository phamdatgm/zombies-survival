using System.Runtime.CompilerServices;

namespace System;

public ref struct Span<T>
{
	internal readonly ByReference<T> _pointer = default;

	private readonly int _length = 0;

	public ref T this[int index]
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			throw null;
		}
	}

	public int Length => 0;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Span(T[] array)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Span(T[] array, int start, int length)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe Span(void* pointer, int length)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal Span(ref T ptr, int length)
	{
	}

	public ref T GetPinnableReference()
	{
		throw null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public void Clear()
	{
	}

	public void Fill(T value)
	{
	}

	public void CopyTo(Span<T> destination)
	{
	}

	public bool TryCopyTo(Span<T> destination)
	{
		return false;
	}

	public static implicit operator ReadOnlySpan<T>(Span<T> span)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Span<T> Slice(int start)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public Span<T> Slice(int start, int length)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public T[] ToArray()
	{
		return null;
	}

	[Obsolete("Equals() on Span will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return false;
	}

	[Obsolete("GetHashCode() on Span will always throw an exception.")]
	public override int GetHashCode()
	{
		return 0;
	}

	public static implicit operator Span<T>(T[] array)
	{
		return default;
	}
}
