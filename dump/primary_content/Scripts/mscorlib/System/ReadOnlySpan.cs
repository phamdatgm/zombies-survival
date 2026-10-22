using System.Runtime.CompilerServices;

namespace System;

public ref struct ReadOnlySpan<T>
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

	public bool IsEmpty => false;

	public static ReadOnlySpan<T> Empty => default;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ReadOnlySpan(T[] array)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ReadOnlySpan(T[] array, int start, int length)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe ReadOnlySpan(void* pointer, int length)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal ReadOnlySpan(ref T ptr, int length)
	{
	}

	public void CopyTo(Span<T> destination)
	{
	}

	public bool TryCopyTo(Span<T> destination)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ReadOnlySpan<T> Slice(int start)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ReadOnlySpan<T> Slice(int start, int length)
	{
		return default;
	}

	public T[] ToArray()
	{
		return null;
	}

	[Obsolete("Equals() on ReadOnlySpan will always throw an exception. Use == instead.")]
	public override bool Equals(object obj)
	{
		return false;
	}

	[Obsolete("GetHashCode() on ReadOnlySpan will always throw an exception.")]
	public override int GetHashCode()
	{
		return 0;
	}

	public static implicit operator ReadOnlySpan<T>(T[] array)
	{
		return default;
	}
}
