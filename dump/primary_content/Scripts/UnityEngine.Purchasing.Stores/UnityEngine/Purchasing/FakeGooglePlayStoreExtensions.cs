using System;

namespace UnityEngine.Purchasing;

public class FakeGooglePlayStoreExtensions : IGooglePlayStoreExtensions, IStoreExtension
{
	public void RestoreTransactions(Action<bool, string> callback)
	{
	}

	public bool IsPurchasedProductDeferred(Product product)
	{
		return false;
	}
}
