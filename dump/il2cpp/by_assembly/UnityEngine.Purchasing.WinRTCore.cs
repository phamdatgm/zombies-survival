// Namespace: 
internal class <Module> // TypeDefIndex: 7880
{}


// Namespace: UnityEngine.Purchasing.Default
public interface IWindowsIAPCallback // TypeDefIndex: 7881
{}


// Namespace: UnityEngine.Purchasing.Default
public interface IWindowsIAP // TypeDefIndex: 7882
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void BuildDummyProducts(List<WinProductDescription> products);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Initialize(IWindowsIAPCallback callback);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void RetrieveProducts(bool retryIfOffline);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Purchase(string productId);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void FinaliseTransaction(string transactionId);
}


// Namespace: UnityEngine.Purchasing.Default
public class WinProductDescription // TypeDefIndex: 7883
{
	// Fields
	[CompilerGenerated]
	private string <platformSpecificID>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <price>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <title>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <description>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <ISOCurrencyCode>k__BackingField; // 0x30
	[CompilerGenerated]
	private Decimal <priceDecimal>k__BackingField; // 0x38
	[CompilerGenerated]
	private string <receipt>k__BackingField; // 0x48
	[CompilerGenerated]
	private string <transactionID>k__BackingField; // 0x50
	[CompilerGenerated]
	private bool <consumable>k__BackingField; // 0x58

	// Properties
	private string platformSpecificID { set; }
	private string price { set; }
	private string title { set; }
	private string description { set; }
	private string ISOCurrencyCode { set; }
	private Decimal priceDecimal { set; }
	private string receipt { set; }
	private string transactionID { set; }
	private bool consumable { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x141913C Offset: 0x141513C VA: 0x141913C
	private void set_platformSpecificID(string value) { }

	[CompilerGenerated]
	// RVA: 0x1419144 Offset: 0x1415144 VA: 0x1419144
	private void set_price(string value) { }

	[CompilerGenerated]
	// RVA: 0x141914C Offset: 0x141514C VA: 0x141914C
	private void set_title(string value) { }

	[CompilerGenerated]
	// RVA: 0x1419154 Offset: 0x1415154 VA: 0x1419154
	private void set_description(string value) { }

	[CompilerGenerated]
	// RVA: 0x141915C Offset: 0x141515C VA: 0x141915C
	private void set_ISOCurrencyCode(string value) { }

	[CompilerGenerated]
	// RVA: 0x1419164 Offset: 0x1415164 VA: 0x1419164
	private void set_priceDecimal(Decimal value) { }

	[CompilerGenerated]
	// RVA: 0x141916C Offset: 0x141516C VA: 0x141916C
	private void set_receipt(string value) { }

	[CompilerGenerated]
	// RVA: 0x1419174 Offset: 0x1415174 VA: 0x1419174
	private void set_transactionID(string value) { }

	[CompilerGenerated]
	// RVA: 0x141917C Offset: 0x141517C VA: 0x141917C
	private void set_consumable(bool value) { }

	// RVA: 0x1419188 Offset: 0x1415188 VA: 0x1419188
	public void .ctor(string id, string price, string title, string description, string isoCode, Decimal priceD, string receipt, string transactionId, bool consumable = False) { }
}
