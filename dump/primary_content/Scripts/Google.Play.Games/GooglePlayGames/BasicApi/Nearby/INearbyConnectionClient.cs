namespace GooglePlayGames.BasicApi.Nearby;

public interface INearbyConnectionClient
{
	void StopAdvertising();

	void StopDiscovery(string serviceId);

	string GetServiceId();
}
