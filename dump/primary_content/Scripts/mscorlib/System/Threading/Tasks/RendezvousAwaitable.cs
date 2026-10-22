using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;

namespace System.Threading.Tasks;

internal class RendezvousAwaitable<TResult> : ICriticalNotifyCompletion
{
	private static readonly Action s_completionSentinel;

	private Action _continuation;

	private ExceptionDispatchInfo _error;

	private TResult _result;

	public bool RunContinuationsAsynchronously { set; }

	public bool IsCompleted => false;

	public RendezvousAwaitable<TResult> GetAwaiter()
	{
		return null;
	}

	public TResult GetResult()
	{
		return default;
	}

	public void SetResult(TResult result)
	{
	}

	private void NotifyAwaiter()
	{
	}

	public void OnCompleted(Action continuation)
	{
	}

	public void UnsafeOnCompleted(Action continuation)
	{
	}
}
