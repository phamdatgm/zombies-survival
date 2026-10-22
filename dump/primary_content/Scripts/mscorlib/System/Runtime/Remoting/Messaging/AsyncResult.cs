using System.Runtime.InteropServices;
using System.Threading;

namespace System.Runtime.Remoting.Messaging;

/// <summary>Encapsulates the results of an asynchronous operation on a delegate.</summary>
[StructLayout((LayoutKind)0)]
public class AsyncResult : IAsyncResult, IMessageSink, IThreadPoolWorkItem
{
	private object async_state;

	private WaitHandle handle;

	private object async_delegate;

	private IntPtr data;

	private object object_data;

	private bool sync_completed;

	private bool completed;

	private bool endinvoke_called;

	private object async_callback;

	private ExecutionContext current;

	private ExecutionContext original;

	private long add_time;

	private MonoMethodMessage call_message;

	private IMessageCtrl message_ctrl;

	private IMessage reply_message;

	private WaitCallback orig_cb;

	/// <summary>Gets the object provided as the last parameter of a <see langword="BeginInvoke" /> method call.</summary>
	/// <returns>The object provided as the last parameter of a <see langword="BeginInvoke" /> method call.</returns>
	public virtual object AsyncState => null;

	/// <summary>Gets a <see cref="T:System.Threading.WaitHandle" /> that encapsulates Win32 synchronization handles, and allows the implementation of various synchronization schemes.</summary>
	/// <returns>A <see cref="T:System.Threading.WaitHandle" /> that encapsulates Win32 synchronization handles, and allows the implementation of various synchronization schemes.</returns>
	public virtual WaitHandle AsyncWaitHandle => null;

	/// <summary>Gets a value indicating whether the <see langword="BeginInvoke" /> call completed synchronously.</summary>
	/// <returns>
	///   <see langword="true" /> if the <see langword="BeginInvoke" /> call completed synchronously; otherwise, <see langword="false" />.</returns>
	public virtual bool CompletedSynchronously => false;

	/// <summary>Gets a value indicating whether the server has completed the call.</summary>
	/// <returns>
	///   <see langword="true" /> after the server has completed the call; otherwise, <see langword="false" />.</returns>
	public virtual bool IsCompleted => false;

	/// <summary>Gets the delegate object on which the asynchronous call was invoked.</summary>
	/// <returns>The delegate object on which the asynchronous call was invoked.</returns>
	public virtual object AsyncDelegate => null;

	internal AsyncResult()
	{
	}

	void IThreadPoolWorkItem.ExecuteWorkItem()
	{
	}

	void IThreadPoolWorkItem.MarkAborted(ThreadAbortException tae)
	{
	}

	internal object Invoke()
	{
		return null;
	}
}
