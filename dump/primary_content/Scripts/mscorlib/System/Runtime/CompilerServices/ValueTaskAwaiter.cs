using System.Diagnostics;
using System.Threading.Tasks;

namespace System.Runtime.CompilerServices;

public struct ValueTaskAwaiter : ICriticalNotifyCompletion
{
	internal static readonly Action<object> s_invokeActionDelegate;

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
	internal ValueTaskAwaiter(ValueTask value)
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
public struct ValueTaskAwaiter<TResult> : ICriticalNotifyCompletion
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
	internal ValueTaskAwaiter(ValueTask<TResult> value)
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
