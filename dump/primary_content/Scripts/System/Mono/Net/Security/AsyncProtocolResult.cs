using System.Runtime.ExceptionServices;

namespace Mono.Net.Security;

internal class AsyncProtocolResult
{
	private readonly int UserResult;

	private readonly ExceptionDispatchInfo Error;

	public AsyncProtocolResult(int result)
	{
	}

	public AsyncProtocolResult(ExceptionDispatchInfo error)
	{
	}
}
