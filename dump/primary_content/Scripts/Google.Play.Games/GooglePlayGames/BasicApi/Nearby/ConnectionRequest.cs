namespace GooglePlayGames.BasicApi.Nearby;

public struct ConnectionRequest(string remoteEndpointId, string remoteEndpointName, string serviceId, byte[] payload)
{
	private readonly EndpointDetails mRemoteEndpoint = default;

	private readonly byte[] mPayload = null;
}
