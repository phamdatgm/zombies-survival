using System.Threading;
using System.Threading.Tasks;

namespace System.IO;

internal sealed class ChunkedMemoryStream : Stream
{
	private sealed class MemoryChunk
	{
		internal readonly byte[] _buffer;

		internal int _freeOffset;

		internal MemoryChunk _next;

		internal MemoryChunk(int bufferSize)
		{
		}
	}

	private MemoryChunk _headChunk;

	private MemoryChunk _currentChunk;

	private int _totalLength;

	public override bool CanRead => false;

	public override bool CanSeek => false;

	public override bool CanWrite => false;

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

	internal ChunkedMemoryStream()
	{
	}

	public byte[] ToArray()
	{
		return null;
	}

	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	public override Task WriteAsync(byte[] buffer, int offset, int count, CancellationToken cancellationToken)
	{
		return null;
	}

	private void AppendChunk(long count)
	{
	}

	public override void Flush()
	{
	}

	public override int Read(byte[] buffer, int offset, int count)
	{
		return 0;
	}

	public override long Seek(long offset, SeekOrigin origin)
	{
		return 0L;
	}

	public override void SetLength(long value)
	{
	}
}
