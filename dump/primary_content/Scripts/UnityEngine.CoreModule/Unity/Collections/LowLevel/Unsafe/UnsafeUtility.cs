using System;
using System.Runtime.CompilerServices;

namespace Unity.Collections.LowLevel.Unsafe;

public static class UnsafeUtility
{
	private struct AlignOfHelper<T> where T : struct
	{
		public byte dummy;

		public T data;
	}

	public unsafe static void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip)
	{
		return null;
	}

	public unsafe static void FreeTracked(void* memory, Allocator allocator)
	{
	}

	public unsafe static void MemCpy(void* destination, void* source, long size)
	{
	}

	public unsafe static void MemCpyStride(void* destination, int destinationStride, void* source, int sourceStride, int elementSize, int count)
	{
	}

	public unsafe static void MemSet(void* destination, byte value, long size)
	{
	}

	public unsafe static void MemClear(void* destination, long size)
	{
	}

	public static int SizeOf(Type type)
	{
		return 0;
	}

	public static bool IsBlittable(Type type)
	{
		return false;
	}

	private static bool IsBlittableValueType(Type t)
	{
		return false;
	}

	private static string GetReasonForTypeNonBlittableImpl(Type t, string name)
	{
		return null;
	}

	internal static bool IsArrayBlittable(Array arr)
	{
		return false;
	}

	internal static string GetReasonForArrayNonBlittable(Array arr)
	{
		return null;
	}

	public static int AlignOf<T>() where T : struct
	{
		return 0;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe static T ReadArrayElement<T>(void* source, int index)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe static T ReadArrayElementWithStride<T>(void* source, int index, int stride)
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe static void WriteArrayElement<T>(void* destination, int index, T value)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe static void WriteArrayElementWithStride<T>(void* destination, int index, int stride, T value)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe static void* AddressOf<T>(ref T output) where T : struct
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static int SizeOf<T>() where T : struct
	{
		return 0;
	}

	public static ref T As<U, T>(ref U from)
	{
		throw null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe static ref T AsRef<T>(void* ptr) where T : struct
	{
		throw null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static int EnumToInt<T>(T enumValue) where T : struct, IConvertible
	{
		return 0;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private static void InternalEnumToInt<T>(ref T enumValue, ref int intValue)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static bool EnumEquals<T>(T lhs, T rhs) where T : struct, IConvertible
	{
		return false;
	}
}
