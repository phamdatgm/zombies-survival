using System.Collections.Generic;
using UnityEngine.Purchasing.Interfaces;

namespace UnityEngine.Purchasing.Models;

internal class GooglePurchase : IGooglePurchase
{
	private readonly string orderId;

	private readonly string obfuscatedAccountId;

	private readonly string obfuscatedProfileId;

	public bool isAcknowledged { get; }

	public int purchaseState { get; }

	public List<string> skus { get; }

	public string receipt { get; }

	public string signature { get; }

	public string originalJson { get; }

	public string purchaseToken { get; }

	public string sku => null;

	internal GooglePurchase(AndroidJavaObject purchase, IEnumerable<AndroidJavaObject> productDetailsEnum)
	{
	}

	public virtual bool IsAcknowledged()
	{
		return false;
	}

	public virtual bool IsPurchased()
	{
		return false;
	}

	public virtual bool IsPending()
	{
		return false;
	}
}
