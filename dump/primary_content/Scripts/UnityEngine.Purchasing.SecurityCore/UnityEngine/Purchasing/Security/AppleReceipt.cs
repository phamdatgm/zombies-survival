using System;

namespace UnityEngine.Purchasing.Security;

public class AppleReceipt
{
	public AppleInAppPurchaseReceipt[] inAppPurchaseReceipts;

	public string bundleID { get; internal set; }

	internal string appVersion { set; }

	internal byte[] opaque { set; }

	internal byte[] hash { set; }

	internal string originalApplicationVersion { set; }

	public DateTime receiptCreationDate { get; internal set; }
}
