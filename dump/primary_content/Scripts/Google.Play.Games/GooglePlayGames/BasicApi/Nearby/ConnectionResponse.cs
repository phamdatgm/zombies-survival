namespace GooglePlayGames.BasicApi.Nearby;

public struct ConnectionResponse
{
	public enum Status
	{
		Accepted = 0,
		Rejected = 1,
		ErrorInternal = 2,
		ErrorNetworkNotConnected = 3,
		ErrorEndpointNotConnected = 4,
		ErrorAlreadyConnected = 5
	}

	private static readonly byte[] EmptyPayload;

	private readonly long mLocalClientId = 0L;

	private readonly string mRemoteEndpointId = null;

	private readonly Status mResponseStatus = Status.Accepted;

	private readonly byte[] mPayload = null;

	private ConnectionResponse(long localClientId, string remoteEndpointId, Status code, byte[] payload)
	{
	}

	public static ConnectionResponse Rejected(long localClientId, string remoteEndpointId)
	{
		return default;
	}

	public static ConnectionResponse Accepted(long localClientId, string remoteEndpointId, byte[] payload)
	{
		return default;
	}

	public static ConnectionResponse AlreadyConnected(long localClientId, string remoteEndpointId)
	{
		return default;
	}
}
