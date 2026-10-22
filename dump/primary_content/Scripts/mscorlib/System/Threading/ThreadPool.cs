using System.Runtime.CompilerServices;

namespace System.Threading;

/// <summary>Provides a pool of threads that can be used to execute tasks, post work items, process asynchronous I/O, wait on behalf of other threads, and process timers.</summary>
public static class ThreadPool
{
	internal static bool IsThreadPoolThread => false;

	/// <summary>Queues a method for execution, and specifies an object containing data to be used by the method. The method executes when a thread pool thread becomes available.</summary>
	/// <param name="callBack">A <see cref="T:System.Threading.WaitCallback" /> representing the method to execute.</param>
	/// <param name="state">An object containing data to be used by the method.</param>
	/// <returns>
	///   <see langword="true" /> if the method is successfully queued; <see cref="T:System.NotSupportedException" /> is thrown if the work item could not be queued.</returns>
	/// <exception cref="T:System.NotSupportedException">The common language runtime (CLR) is hosted, and the host does not support this action.</exception>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="callBack" /> is <see langword="null" />.</exception>
	[MethodImpl(MethodImplOptions.NoInlining)]
	public static bool QueueUserWorkItem(WaitCallback callBack, object state)
	{
		return false;
	}

	/// <summary>Queues a method for execution. The method executes when a thread pool thread becomes available.</summary>
	/// <param name="callBack">A <see cref="T:System.Threading.WaitCallback" /> that represents the method to be executed.</param>
	/// <returns>
	///   <see langword="true" /> if the method is successfully queued; <see cref="T:System.NotSupportedException" /> is thrown if the work item could not be queued.</returns>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="callBack" /> is <see langword="null" />.</exception>
	/// <exception cref="T:System.NotSupportedException">The common language runtime (CLR) is hosted, and the host does not support this action.</exception>
	[MethodImpl(MethodImplOptions.NoInlining)]
	public static bool QueueUserWorkItem(WaitCallback callBack)
	{
		return false;
	}

	/// <summary>Queues the specified delegate to the thread pool, but does not propagate the calling stack to the worker thread.</summary>
	/// <param name="callBack">A <see cref="T:System.Threading.WaitCallback" /> that represents the delegate to invoke when a thread in the thread pool picks up the work item.</param>
	/// <param name="state">The object that is passed to the delegate when serviced from the thread pool.</param>
	/// <returns>
	///   <see langword="true" /> if the method succeeds; <see cref="T:System.OutOfMemoryException" /> is thrown if the work item could not be queued.</returns>
	/// <exception cref="T:System.Security.SecurityException">The caller does not have the required permission.</exception>
	/// <exception cref="T:System.ApplicationException">An out-of-memory condition was encountered.</exception>
	/// <exception cref="T:System.OutOfMemoryException">The work item could not be queued.</exception>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="callBack" /> is <see langword="null" />.</exception>
	[MethodImpl(MethodImplOptions.NoInlining)]
	public static bool UnsafeQueueUserWorkItem(WaitCallback callBack, object state)
	{
		return false;
	}

	public static bool QueueUserWorkItem<TState>(Action<TState> callBack, TState state, bool preferLocal)
	{
		return false;
	}

	private static bool QueueUserWorkItemHelper(WaitCallback callBack, object state, ref StackCrawlMark stackMark, bool compressStack, bool forceGlobal = true)
	{
		return false;
	}

	internal static void UnsafeQueueCustomWorkItem(IThreadPoolWorkItem workItem, bool forceGlobal)
	{
	}

	internal static bool TryPopCustomWorkItem(IThreadPoolWorkItem workItem)
	{
		return false;
	}

	internal static bool RequestWorkerThread()
	{
		return false;
	}

	private static void EnsureVMInitialized()
	{
	}

	internal static bool NotifyWorkItemComplete()
	{
		return false;
	}

	internal static void ReportThreadStatus(bool isWorking)
	{
	}

	internal static void NotifyWorkItemProgress()
	{
	}

	internal static void NotifyWorkItemProgressNative()
	{
	}

	internal static void NotifyWorkItemQueued()
	{
	}

	private static void InitializeVMTp(ref bool enableWorkerTracking)
	{
	}
}
