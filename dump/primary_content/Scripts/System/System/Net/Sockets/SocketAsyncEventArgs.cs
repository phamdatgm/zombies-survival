using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace System.Net.Sockets;

/// <summary>Represents an asynchronous socket operation.</summary>
public class SocketAsyncEventArgs : EventArgs, IDisposable
{
	private bool disposed;

	internal int in_progress;

	private EndPoint remote_ep;

	private Socket current_socket;

	internal SocketAsyncResult socket_async_result;

	private Socket AcceptSocket;

	private int BytesTransferred;

	private SocketAsyncOperation LastOperation;

	private SocketError SocketError;

	private SocketFlags SocketFlags;

	private object UserToken;

	[CompilerGenerated]
	private EventHandler<SocketAsyncEventArgs> Completed;

	private Memory<byte> _buffer;

	private int _offset;

	private int _count;

	private bool _bufferIsExplicitArray;

	private IList<ArraySegment<byte>> _bufferList;

	internal SocketAsyncEventArgs(bool flowExecutionContext)
	{
	}

	/// <summary>Frees resources used by the <see cref="T:System.Net.Sockets.SocketAsyncEventArgs" /> class.</summary>
	~SocketAsyncEventArgs()
	{
	}

	private void Dispose(bool disposing)
	{
	}

	/// <summary>Releases the unmanaged resources used by the <see cref="T:System.Net.Sockets.SocketAsyncEventArgs" /> instance and optionally disposes of the managed resources.</summary>
	public void Dispose()
	{
	}

	internal void SetLastOperation(SocketAsyncOperation op)
	{
	}

	internal void Complete_internal()
	{
	}

	/// <summary>Represents a method that is called when an asynchronous operation completes.</summary>
	/// <param name="e">The event that is signaled.</param>
	protected virtual void OnCompleted(SocketAsyncEventArgs e)
	{
	}

	public void SetBuffer(Memory<byte> buffer)
	{
	}
}
