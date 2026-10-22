using System.Runtime.CompilerServices;

namespace System.Numerics;

public struct Vector<T> : IEquatable<Vector<T>>, IFormattable where T : struct
{
	private struct VectorSizeHelper
	{
		internal Vector<T> _placeholder;

		internal byte _byte;
	}

	private Register register = default;

	private static readonly int s_count;

	private static readonly Vector<T> s_zero;

	private static readonly Vector<T> s_one;

	private static readonly Vector<T> s_allOnes;

	public T this[int index] => default;

	private static int InitializeCount()
	{
		return 0;
	}

	public Vector(T value)
	{
	}

	internal unsafe Vector(void* dataPointer)
	{
	}

	internal unsafe Vector(void* dataPointer, int offset)
	{
	}

	private Vector(ref Register existingRegister)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(Vector<T> other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}

	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static bool operator ==(Vector<T> left, Vector<T> right)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static bool operator !=(Vector<T> left, Vector<T> right)
	{
		return false;
	}

	public static explicit operator Vector<ulong>(Vector<T> value)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal static Vector<T> Equals(Vector<T> left, Vector<T> right)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private static bool ScalarEquals(T left, T right)
	{
		return false;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private static T GetOneValue()
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private static T GetAllBitsSetValue()
	{
		return default;
	}
}
public static class Vector
{
	public static bool IsHardwareAccelerated => false;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static Vector<T> Equals<T>(Vector<T> left, Vector<T> right) where T : struct
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static Vector<ulong> AsVectorUInt64<T>(Vector<T> value) where T : struct
	{
		return default;
	}
}
