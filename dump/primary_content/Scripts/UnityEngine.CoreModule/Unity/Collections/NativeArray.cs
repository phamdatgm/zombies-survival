using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[NativeContainerSupportsDeallocateOnJobCompletion]
[NativeContainerSupportsMinMaxWriteRestriction]
[NativeContainer]
[NativeContainerSupportsDeferredConvertListToArray]
public struct NativeArray<T> : IDisposable, IEnumerable<T>, IEnumerable, IEquatable<NativeArray<T>> where T : struct
{
	public struct Enumerator(ref NativeArray<T> array) : IEnumerator<T>, IEnumerator, IDisposable
	{
		private NativeArray<T> m_Array = default;

		private int m_Index = 0;

		private T value = default;

		public T Current
		{
			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			get
			{
				return default;
			}
		}

		object IEnumerator.Current
		{
			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			get
			{
				return null;
			}
		}

		public void Dispose()
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public bool MoveNext()
		{
			return false;
		}

		public void Reset()
		{
		}
	}

	[NativeContainerIsReadOnly]
	[NativeContainer]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		public struct Enumerator([In] ref ReadOnly array) : IEnumerator<T>, IEnumerator, IDisposable
		{
			private ReadOnly m_Array = default;

			private int m_Index = 0;

			private T value = default;

			public T Current
			{
				[MethodImpl(MethodImplOptions.AggressiveInlining)]
				get
				{
					return default;
				}
			}

			object IEnumerator.Current => null;

			public void Dispose()
			{
			}

			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			public bool MoveNext()
			{
				return false;
			}

			public void Reset()
			{
			}
		}

		[NativeDisableUnsafePtrRestriction]
		internal unsafe void* m_Buffer = null;

		internal int m_Length = 0;

		public int Length
		{
			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			get
			{
				return 0;
			}
		}

		public T this[int index]
		{
			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			get
			{
				return default;
			}
		}

		internal unsafe ReadOnly(void* buffer, int length)
		{
		}

		public Enumerator GetEnumerator()
		{
			return default;
		}

		IEnumerator<T> IEnumerable<T>.GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}
	}

	[NativeDisableUnsafePtrRestriction]
	internal unsafe void* m_Buffer = null;

	internal int m_Length = 0;

	internal Allocator m_AllocatorLabel = Allocator.Invalid;

	public int Length
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return 0;
		}
	}

	public T this[int index]
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		set
		{
		}
	}

	public bool IsCreated
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return false;
		}
	}

	public unsafe NativeArray(int length, Allocator allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	public unsafe NativeArray(T[] array, Allocator allocator)
	{
	}

	private static void Allocate(int length, Allocator allocator, out NativeArray<T> array)
	{
		array = default;
	}

	public void Dispose()
	{
	}

	public void CopyTo(T[] array)
	{
	}

	public Enumerator GetEnumerator()
	{
		return default;
	}

	IEnumerator<T> IEnumerable<T>.GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}

	public bool Equals(NativeArray<T> other)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public static void Copy(T[] src, NativeArray<T> dst)
	{
	}

	public static void Copy(NativeArray<T> src, T[] dst)
	{
	}

	private static void CopySafe(T[] src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
	{
	}

	private static void CopySafe(NativeArray<T> src, int srcIndex, T[] dst, int dstIndex, int length)
	{
	}

	public ReadOnly AsReadOnly()
	{
		return default;
	}
}
