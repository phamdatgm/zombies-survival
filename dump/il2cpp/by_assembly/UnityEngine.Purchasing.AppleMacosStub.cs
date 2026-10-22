// Namespace: 
internal class <Module> // TypeDefIndex: 7894
{}


// Namespace: UnityEngine.Purchasing
internal class OSXStoreBindings : INativeAppleStore, INativeStore // TypeDefIndex: 7895
{
	// Properties
	public string appReceipt { get; }
	public double appReceiptModificationDate { get; }

	// Methods

	// RVA: 0x13D4CDC Offset: 0x13D0CDC VA: 0x13D4CDC Slot: 4
	public void SetUnityPurchasingCallback(UnityPurchasingCallback AsyncCallback) { }

	// RVA: 0x13D4D14 Offset: 0x13D0D14 VA: 0x13D4D14 Slot: 5
	public void RestoreTransactions() { }

	// RVA: 0x13D4D4C Offset: 0x13D0D4C VA: 0x13D4D4C Slot: 6
	public void AddTransactionObserver() { }

	// RVA: 0x13D4D84 Offset: 0x13D0D84 VA: 0x13D4D84 Slot: 10
	public void RetrieveProducts(string json) { }

	// RVA: 0x13D4DBC Offset: 0x13D0DBC VA: 0x13D4DBC Slot: 11
	public void Purchase(string productJSON, string developerPayload) { }

	// RVA: 0x13D4DF4 Offset: 0x13D0DF4 VA: 0x13D4DF4 Slot: 12
	public void FinishTransaction(string productJSON, string transactionID) { }

	// RVA: 0x13D4E2C Offset: 0x13D0E2C VA: 0x13D4E2C Slot: 7
	public string get_appReceipt() { }

	// RVA: 0x13D4E64 Offset: 0x13D0E64 VA: 0x13D4E64 Slot: 8
	public double get_appReceiptModificationDate() { }

	// RVA: 0x13D4E9C Offset: 0x13D0E9C VA: 0x13D4E9C Slot: 9
	public void InterceptPromotionalPurchases() { }

	// RVA: 0x13D4ED4 Offset: 0x13D0ED4 VA: 0x13D4ED4
	public void .ctor() { }
}
