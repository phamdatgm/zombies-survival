using System;

namespace UnityEngine.Purchasing.Security;

public class GooglePlayReceipt : IPurchaseReceipt
{
	public string productID { get; private set; }

	public string orderID { get; private set; }

	public string transactionID => null;

	public string packageName { get; private set; }

	public string purchaseToken { get; private set; }

	public DateTime purchaseDate { get; private set; }

	public GooglePurchaseState purchaseState { get; private set; }

	public GooglePlayReceipt(string productID, string orderID, string packageName, string purchaseToken, DateTime purchaseTime, GooglePurchaseState purchaseState)
	{
	}
}
