namespace UnityEngine.Purchasing;

public interface IStoreController
{
	ProductCollection products { get; }

	void InitiatePurchase(Product product);

	void InitiatePurchase(string productId);
}
