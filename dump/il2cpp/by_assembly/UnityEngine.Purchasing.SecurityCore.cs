// Namespace: 
internal class <Module> // TypeDefIndex: 7874
{}


// Namespace: UnityEngine.Purchasing.Security
public class AppleReceipt // TypeDefIndex: 7875
{
	// Fields
	[CompilerGenerated]
	private string <bundleID>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <appVersion>k__BackingField; // 0x18
	[CompilerGenerated]
	private byte[] <opaque>k__BackingField; // 0x20
	[CompilerGenerated]
	private byte[] <hash>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <originalApplicationVersion>k__BackingField; // 0x30
	[CompilerGenerated]
	private DateTime <receiptCreationDate>k__BackingField; // 0x38
	public AppleInAppPurchaseReceipt[] inAppPurchaseReceipts; // 0x40

	// Properties
	public string bundleID { get; set; }
	internal string appVersion { set; }
	internal byte[] opaque { set; }
	internal byte[] hash { set; }
	internal string originalApplicationVersion { set; }
	public DateTime receiptCreationDate { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13EB578 Offset: 0x13E7578 VA: 0x13EB578
	public string get_bundleID() { }

	[CompilerGenerated]
	// RVA: 0x13EB580 Offset: 0x13E7580 VA: 0x13EB580
	internal void set_bundleID(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB588 Offset: 0x13E7588 VA: 0x13EB588
	internal void set_appVersion(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB590 Offset: 0x13E7590 VA: 0x13EB590
	internal void set_opaque(byte[] value) { }

	[CompilerGenerated]
	// RVA: 0x13EB598 Offset: 0x13E7598 VA: 0x13EB598
	internal void set_hash(byte[] value) { }

	[CompilerGenerated]
	// RVA: 0x13EB5A0 Offset: 0x13E75A0 VA: 0x13EB5A0
	internal void set_originalApplicationVersion(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB5A8 Offset: 0x13E75A8 VA: 0x13EB5A8
	public DateTime get_receiptCreationDate() { }

	[CompilerGenerated]
	// RVA: 0x13EB5B0 Offset: 0x13E75B0 VA: 0x13EB5B0
	internal void set_receiptCreationDate(DateTime value) { }

	// RVA: 0x13EB5B8 Offset: 0x13E75B8 VA: 0x13EB5B8
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class AppleInAppPurchaseReceipt : IPurchaseReceipt // TypeDefIndex: 7876
{
	// Fields
	[CompilerGenerated]
	private int <quantity>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <productID>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <transactionID>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <originalTransactionIdentifier>k__BackingField; // 0x28
	[CompilerGenerated]
	private DateTime <purchaseDate>k__BackingField; // 0x30
	[CompilerGenerated]
	private DateTime <originalPurchaseDate>k__BackingField; // 0x38
	[CompilerGenerated]
	private DateTime <subscriptionExpirationDate>k__BackingField; // 0x40
	[CompilerGenerated]
	private DateTime <cancellationDate>k__BackingField; // 0x48
	[CompilerGenerated]
	private int <isFreeTrial>k__BackingField; // 0x50
	[CompilerGenerated]
	private int <productType>k__BackingField; // 0x54
	[CompilerGenerated]
	private int <isIntroductoryPricePeriod>k__BackingField; // 0x58

	// Properties
	public int quantity { get; set; }
	public string productID { get; set; }
	public string transactionID { get; set; }
	public string originalTransactionIdentifier { get; set; }
	public DateTime purchaseDate { get; set; }
	internal DateTime originalPurchaseDate { set; }
	public DateTime subscriptionExpirationDate { get; set; }
	public DateTime cancellationDate { get; set; }
	public int isFreeTrial { get; set; }
	public int productType { get; set; }
	public int isIntroductoryPricePeriod { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13EB5C0 Offset: 0x13E75C0 VA: 0x13EB5C0
	public int get_quantity() { }

	[CompilerGenerated]
	// RVA: 0x13EB5C8 Offset: 0x13E75C8 VA: 0x13EB5C8
	internal void set_quantity(int value) { }

	[CompilerGenerated]
	// RVA: 0x13EB5D0 Offset: 0x13E75D0 VA: 0x13EB5D0 Slot: 5
	public string get_productID() { }

	[CompilerGenerated]
	// RVA: 0x13EB5D8 Offset: 0x13E75D8 VA: 0x13EB5D8
	internal void set_productID(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB5E0 Offset: 0x13E75E0 VA: 0x13EB5E0 Slot: 4
	public string get_transactionID() { }

	[CompilerGenerated]
	// RVA: 0x13EB5E8 Offset: 0x13E75E8 VA: 0x13EB5E8
	internal void set_transactionID(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB5F0 Offset: 0x13E75F0 VA: 0x13EB5F0
	public string get_originalTransactionIdentifier() { }

	[CompilerGenerated]
	// RVA: 0x13EB5F8 Offset: 0x13E75F8 VA: 0x13EB5F8
	internal void set_originalTransactionIdentifier(string value) { }

	[CompilerGenerated]
	// RVA: 0x13EB600 Offset: 0x13E7600 VA: 0x13EB600 Slot: 6
	public DateTime get_purchaseDate() { }

	[CompilerGenerated]
	// RVA: 0x13EB608 Offset: 0x13E7608 VA: 0x13EB608
	internal void set_purchaseDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13EB610 Offset: 0x13E7610 VA: 0x13EB610
	internal void set_originalPurchaseDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13EB618 Offset: 0x13E7618 VA: 0x13EB618
	public DateTime get_subscriptionExpirationDate() { }

	[CompilerGenerated]
	// RVA: 0x13EB620 Offset: 0x13E7620 VA: 0x13EB620
	internal void set_subscriptionExpirationDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13EB628 Offset: 0x13E7628 VA: 0x13EB628
	public DateTime get_cancellationDate() { }

	[CompilerGenerated]
	// RVA: 0x13EB630 Offset: 0x13E7630 VA: 0x13EB630
	internal void set_cancellationDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x13EB638 Offset: 0x13E7638 VA: 0x13EB638
	public int get_isFreeTrial() { }

	[CompilerGenerated]
	// RVA: 0x13EB640 Offset: 0x13E7640 VA: 0x13EB640
	internal void set_isFreeTrial(int value) { }

	[CompilerGenerated]
	// RVA: 0x13EB648 Offset: 0x13E7648 VA: 0x13EB648
	public int get_productType() { }

	[CompilerGenerated]
	// RVA: 0x13EB650 Offset: 0x13E7650 VA: 0x13EB650
	internal void set_productType(int value) { }

	[CompilerGenerated]
	// RVA: 0x13EB658 Offset: 0x13E7658 VA: 0x13EB658
	public int get_isIntroductoryPricePeriod() { }

	[CompilerGenerated]
	// RVA: 0x13EB660 Offset: 0x13E7660 VA: 0x13EB660
	internal void set_isIntroductoryPricePeriod(int value) { }

	// RVA: 0x13EB668 Offset: 0x13E7668 VA: 0x13EB668
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public class IAPSecurityException : Exception // TypeDefIndex: 7877
{
	// Methods

	// RVA: 0x13EB670 Offset: 0x13E7670 VA: 0x13EB670
	public void .ctor() { }

	// RVA: 0x13EB6C8 Offset: 0x13E76C8 VA: 0x13EB6C8
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing.Security
public class InvalidSignatureException : IAPSecurityException // TypeDefIndex: 7878
{
	// Methods

	// RVA: 0x13EB730 Offset: 0x13E7730 VA: 0x13EB730
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Security
public interface IPurchaseReceipt // TypeDefIndex: 7879
{
	// Properties
	public abstract string transactionID { get; }
	public abstract string productID { get; }
	public abstract DateTime purchaseDate { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_transactionID();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_productID();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract DateTime get_purchaseDate();
}
