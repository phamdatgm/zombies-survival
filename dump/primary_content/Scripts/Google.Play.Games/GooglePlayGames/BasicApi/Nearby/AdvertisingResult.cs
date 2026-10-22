namespace GooglePlayGames.BasicApi.Nearby;

public struct AdvertisingResult(ResponseStatus status, string localEndpointName)
{
	private readonly ResponseStatus mStatus = (ResponseStatus)0;

	private readonly string mLocalEndpointName = null;
}
