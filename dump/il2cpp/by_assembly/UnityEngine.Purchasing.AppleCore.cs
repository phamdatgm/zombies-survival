// Namespace: 
internal class <Module> // TypeDefIndex: 7906
{}


// Namespace: UnityEngine.Purchasing
internal interface INativeAppleStore : INativeStore // TypeDefIndex: 7907
{
	// Properties
	public abstract string appReceipt { get; }
	public abstract double appReceiptModificationDate { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetUnityPurchasingCallback(UnityPurchasingCallback AsyncCallback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RestoreTransactions();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void AddTransactionObserver();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string get_appReceipt();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract double get_appReceiptModificationDate();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void InterceptPromotionalPurchases();
}
