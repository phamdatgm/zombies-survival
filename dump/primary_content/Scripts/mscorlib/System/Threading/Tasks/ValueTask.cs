using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks.Sources;

namespace System.Threading.Tasks;

[StructLayout((LayoutKind)3)]
public struct ValueTask : IEquatable<ValueTask>
{
	private sealed class ValueTaskSourceAsTask : Task<VoidTaskResult>
	{
		private static readonly Action<object> s_completionAction;

		private IValueTaskSource _source;

		private readonly short _token;

		public ValueTaskSourceAsTask(IValueTaskSource source, short token)
		{
		}
	}

	private static readonly Task s_canceledTask;

	internal readonly object _obj = null;

	internal readonly short _token = 0;

	internal readonly bool _continueOnCapturedContext = false;

	public bool IsCompleted
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return false;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ValueTask(Task task)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ValueTask(IValueTaskSource source, short token)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private ValueTask(object obj, short token, bool continueOnCapturedContext)
	{
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(ValueTask other)
	{
		return false;
	}

	public Task AsTask()
	{
		return null;
	}

	private Task GetTaskForValueTaskSource(IValueTaskSource t)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[StackTraceHidden]
	internal void ThrowIfCompletedUnsuccessfully()
	{
	}

	public ValueTaskAwaiter GetAwaiter()
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ConfiguredValueTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default;
	}
}
[StructLayout((LayoutKind)3)]
public struct ValueTask<TResult> : IEquatable<ValueTask<TResult>>
{
	private sealed class ValueTaskSourceAsTask : Task<TResult>
	{
		private static readonly Action<object> s_completionAction;

		private IValueTaskSource<TResult> _source;

		private readonly short _token;

		public ValueTaskSourceAsTask(IValueTaskSource<TResult> source, short token)
		{
		}
	}

	private static Task<TResult> s_canceledTask;

	internal readonly object _obj = null;

	internal readonly TResult _result = default;

	internal readonly short _token = 0;

	internal readonly bool _continueOnCapturedContext = false;

	public bool IsCompleted
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return false;
		}
	}

	public bool IsCompletedSuccessfully
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return false;
		}
	}

	public TResult Result
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		get
		{
			return default;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ValueTask(TResult result)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ValueTask(Task<TResult> task)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ValueTask(IValueTaskSource<TResult> source, short token)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	private ValueTask(object obj, TResult result, short token, bool continueOnCapturedContext)
	{
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(ValueTask<TResult> other)
	{
		return false;
	}

	public Task<TResult> AsTask()
	{
		return null;
	}

	private Task<TResult> GetTaskForValueTaskSource(IValueTaskSource<TResult> t)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ValueTaskAwaiter<TResult> GetAwaiter()
	{
		return default;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ConfiguredValueTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default;
	}

	public override string ToString()
	{
		return null;
	}
}
