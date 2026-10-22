using System.IO;

namespace System.Net;

internal abstract class WebConnectionStream : Stream
{
	protected bool closed;

	private bool disposed;

	private object locker;

	private int read_timeout;

	private int write_timeout;

	private readonly HttpWebRequest Request;

	private readonly WebConnection Connection;

	private readonly WebOperation Operation;

	internal ServicePoint ServicePoint => null;

	public override bool CanTimeout => false;

	public override int ReadTimeout
	{
		set
		{
		}
	}

	public override int WriteTimeout
	{
		set
		{
		}
	}

	public override bool CanSeek => false;

	public override long Length => 0L;

	public override long Position
	{
		get
		{
			return 0L;
		}
		set
		{
		}
	}

	protected WebConnectionStream(WebConnection cnc, WebOperation operation)
	{
	}

	protected Exception GetException(Exception e)
	{
		return null;
	}

	protected abstract bool TryReadFromBufferedContent(byte[] buffer, int offset, int count, out int result);

	public override int Read(byte[] buffer, int offset, int count)
	{
		return 0;
	}

	public override IAsyncResult BeginRead(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	public override int EndRead(IAsyncResult r)
	{
		return 0;
	}

	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int count, AsyncCallback cb, object state)
	{
		return null;
	}

	public override void EndWrite(IAsyncResult r)
	{
	}

	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	public override void Flush()
	{
	}

	internal void InternalClose()
	{
	}

	protected abstract void Close_internal(ref bool disposed);

	public override void Close()
	{
	}

	public override long Seek(long a, SeekOrigin b)
	{
		return 0L;
	}

	public override void SetLength(long a)
	{
	}
}
