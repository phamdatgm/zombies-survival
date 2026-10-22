using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading.Tasks;

namespace System.Runtime.CompilerServices;

[StructLayout((LayoutKind)3)]
public struct ConfiguredValueTaskAwaitable
{
	[StructLayout((LayoutKind)3)]
	public struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion
	{
		private readonly ValueTask _value = default;

		public bool IsCompleted
		{
			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			get
			{
				return false;
			}
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		internal ConfiguredValueTaskAwaiter(ValueTask value)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		[StackTraceHidden]
		public void GetResult()
		{
		}

		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	private readonly ValueTask _value = default;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal ConfiguredValueTaskAwaitable(ValueTask value)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default;
	}
}
[StructLayout((LayoutKind)3)]
public struct ConfiguredValueTaskAwaitable<TResult>
{
	[StructLayout((LayoutKind)3)]
	public struct ConfiguredValueTaskAwaiter : ICriticalNotifyCompletion
	{
		private readonly ValueTask<TResult> _value = default;

		public bool IsCompleted
		{
			[MethodImpl(MethodImplOptions.AggressiveInlining)]
			get
			{
				return false;
			}
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		internal ConfiguredValueTaskAwaiter(ValueTask<TResult> value)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		[StackTraceHidden]
		public TResult GetResult()
		{
			return default;
		}

		public void UnsafeOnCompleted(Action continuation)
		{
		}
	}

	private readonly ValueTask<TResult> _value = default;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal ConfiguredValueTaskAwaitable(ValueTask<TResult> value)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ConfiguredValueTaskAwaiter GetAwaiter()
	{
		return default;
	}
}
