namespace Mono.Net.Security;

internal abstract class AsyncReadOrWriteRequest : AsyncProtocolRequest
{
	private readonly BufferOffsetSize UserBuffer;

	private int CurrentSize;

	public AsyncReadOrWriteRequest(MobileAuthenticatedStream parent, bool sync, byte[] buffer, int offset, int size)
		: base(null, sync: false)
	{
	}

	public override string ToString()
	{
		return null;
	}
}
