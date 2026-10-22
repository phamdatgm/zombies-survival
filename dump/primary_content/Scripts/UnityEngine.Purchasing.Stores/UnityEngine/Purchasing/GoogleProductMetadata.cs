namespace UnityEngine.Purchasing;

public class GoogleProductMetadata : ProductMetadata
{
	public string originalJson { get; internal set; }

	internal string subscriptionPeriod { set; }

	internal string freeTrialPeriod { set; }

	internal string introductoryPrice { set; }

	internal string introductoryPricePeriod { set; }

	internal int introductoryPriceCycles { set; }

	internal GoogleProductMetadata(string priceString, string title, string description, string currencyCode, decimal localizedPrice)
		: base(null, null, null, null, 0m)
	{
	}
}
