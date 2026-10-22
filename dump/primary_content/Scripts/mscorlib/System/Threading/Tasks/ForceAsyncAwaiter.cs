using System.Runtime.CompilerServices;

namespace System.Threading.Tasks;

internal struct ForceAsyncAwaiter : ICriticalNotifyCompletion
{
	private readonly Task _task = null;

	internal ForceAsyncAwaiter(Task task)
	{
	}

	public ForceAsyncAwaiter GetAwaiter()
	{
		return default;
	}

	public void GetResult()
	{
	}

	public void UnsafeOnCompleted(Action action)
	{
	}
}
