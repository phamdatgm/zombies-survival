// Namespace: 
internal class <Module> // TypeDefIndex: 7896
{}


// Namespace: UnityEngine.Purchasing
internal class iOSStoreBindings : INativeAppleStore, INativeStore // TypeDefIndex: 7897
{
	// Properties
	public string appReceipt { get; }
	public double appReceiptModificationDate { get; }

	// Methods

	// RVA: 0x13D4EDC Offset: 0x13D0EDC VA: 0x13D4EDC Slot: 4
	public void SetUnityPurchasingCallback(UnityPurchasingCallback AsyncCallback) { }

	// RVA: 0x13D4F14 Offset: 0x13D0F14 VA: 0x13D4F14 Slot: 5
	public void RestoreTransactions() { }

	// RVA: 0x13D4F4C Offset: 0x13D0F4C VA: 0x13D4F4C Slot: 6
	public void AddTransactionObserver() { }

	// RVA: 0x13D4F84 Offset: 0x13D0F84 VA: 0x13D4F84 Slot: 10
	public void RetrieveProducts(string json) { }

	// RVA: 0x13D4FBC Offset: 0x13D0FBC VA: 0x13D4FBC Slot: 11
	public void Purchase(string productJSON, string developerPayload) { }

	// RVA: 0x13D4FF4 Offset: 0x13D0FF4 VA: 0x13D4FF4 Slot: 12
	public void FinishTransaction(string productJSON, string transactionID) { }

	// RVA: 0x13D502C Offset: 0x13D102C VA: 0x13D502C Slot: 7
	public string get_appReceipt() { }

	// RVA: 0x13D5064 Offset: 0x13D1064 VA: 0x13D5064 Slot: 8
	public double get_appReceiptModificationDate() { }

	// RVA: 0x13D509C Offset: 0x13D109C VA: 0x13D509C Slot: 9
	public void InterceptPromotionalPurchases() { }

	// RVA: 0x13D50D4 Offset: 0x13D10D4 VA: 0x13D50D4
	public void .ctor() { }
}
