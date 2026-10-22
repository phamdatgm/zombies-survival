using System;

namespace UnityEngine.Purchasing;

public interface IGooglePlayStoreExtensions : IStoreExtension
{
	void RestoreTransactions(Action<bool, string> callback);

	bool IsPurchasedProductDeferred(Product product);
}
