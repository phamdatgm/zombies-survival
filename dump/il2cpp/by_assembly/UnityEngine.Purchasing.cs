// Namespace: 
internal class <Module> // TypeDefIndex: 7263
{}


// Namespace: Uniject
internal interface IUtil // TypeDefIndex: 7264
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract object InitiateCoroutine(IEnumerator start);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void InitiateCoroutine(IEnumerator start, int delayInSeconds);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void RunOnMainThread(Action runnable);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void AddPauseListener(Action<bool> runnable);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool IsClassOrSubclass(Type potentialBase, Type potentialDescendant);
}


// Namespace: UnityEngine.Purchasing
internal class AnalyticsClient : IAnalyticsClient // TypeDefIndex: 7265
{
	// Fields
	private readonly IAnalyticsAdapter m_Analytics; // 0x10
	private readonly IAnalyticsAdapter m_LegacyAnalytics; // 0x18

	// Methods

	// RVA: 0x13D9F40 Offset: 0x13D5F40 VA: 0x13D9F40
	public void .ctor(IAnalyticsAdapter analytics, IAnalyticsAdapter legacyAnalytics) { }

	// RVA: 0x13D9F6C Offset: 0x13D5F6C VA: 0x13D9F6C Slot: 4
	public void OnPurchaseSucceeded(Product product) { }

	// RVA: 0x13DA0A4 Offset: 0x13D60A4 VA: 0x13DA0A4 Slot: 5
	public void OnPurchaseFailed(Product product, PurchaseFailureDescription description) { }
}


// Namespace: UnityEngine.Purchasing
internal class CoreAnalyticsAdapter : IAnalyticsAdapter // TypeDefIndex: 7266
{
	// Fields
	private readonly IAnalyticsService m_Analytics; // 0x10
	private readonly ILogger m_Logger; // 0x18
	private IAnalyticsStandardEventComponent m_CoreAnalytics; // 0x20

	// Methods

	// RVA: 0x13DA1CC Offset: 0x13D61CC VA: 0x13DA1CC
	public void .ctor(IAnalyticsService analytics, ILogger logger) { }

	// RVA: 0x13DA1F8 Offset: 0x13D61F8 VA: 0x13DA1F8 Slot: 4
	public void SendTransactionEvent(Product product) { }

	// RVA: 0x13DA424 Offset: 0x13D6424 VA: 0x13DA424
	private Dictionary<string, object> BuildTransactionParameters(Product product) { }

	// RVA: 0x13DABC8 Offset: 0x13D6BC8 VA: 0x13DABC8 Slot: 5
	public void SendTransactionFailedEvent(Product product, PurchaseFailureDescription description) { }

	// RVA: 0x13DA314 Offset: 0x13D6314 VA: 0x13DA314
	private IAnalyticsStandardEventComponent CoreAnalytics() { }

	// RVA: 0x13DACF4 Offset: 0x13D6CF4 VA: 0x13DACF4
	private Dictionary<string, object> BuildTransactionFailedParameters(Product product, PurchaseFailureReason reason) { }

	// RVA: 0x13DA848 Offset: 0x13D6848 VA: 0x13DA848
	private static string GetTransactionName(Product product) { }

	// RVA: 0x13DA954 Offset: 0x13D6954 VA: 0x13DA954
	private static Dictionary<string, object> GenerateItemReceivedForPurchase(Product product) { }

	// RVA: 0x13DA88C Offset: 0x13D688C VA: 0x13DA88C
	private Dictionary<string, object> GenerateRealCurrencySpentOnPurchase(Product product) { }

	// RVA: 0x13DAF14 Offset: 0x13D6F14 VA: 0x13DAF14
	private Dictionary<string, object> CreateRealCurrencyFromProduct(Product product) { }

	// RVA: 0x13DB040 Offset: 0x13D7040 VA: 0x13DB040
	private long CheckCurrencyCodeAndExtractRealCurrencyAmount(Product product) { }

	// RVA: 0x13DB0F4 Offset: 0x13D70F4 VA: 0x13DB0F4
	private long ExtractRealCurrencyAmount(Product product) { }
}


// Namespace: UnityEngine.Purchasing
internal class EmptyAnalyticsAdapter : IAnalyticsAdapter // TypeDefIndex: 7267
{
	// Methods

	// RVA: 0x13DB3AC Offset: 0x13D73AC VA: 0x13DB3AC Slot: 4
	public void SendTransactionEvent(Product product) { }

	// RVA: 0x13DB3B0 Offset: 0x13D73B0 VA: 0x13DB3B0 Slot: 5
	public void SendTransactionFailedEvent(Product product, PurchaseFailureDescription reason) { }

	// RVA: 0x13DB3B4 Offset: 0x13D73B4 VA: 0x13DB3B4
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal interface IAnalyticsAdapter // TypeDefIndex: 7268
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SendTransactionEvent(Product product);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendTransactionFailedEvent(Product product, PurchaseFailureDescription description);
}


// Namespace: UnityEngine.Purchasing
internal interface IAnalyticsClient // TypeDefIndex: 7269
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPurchaseSucceeded(Product product);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnPurchaseFailed(Product product, PurchaseFailureDescription purchaseFailureDescription);
}


// Namespace: UnityEngine.Purchasing
internal interface ILegacyUnityAnalytics // TypeDefIndex: 7270
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SendTransactionEvent(string productId, Decimal amount, string currency, string receiptPurchaseData, string signature);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendCustomEvent(string name, Dictionary<string, object> data);
}


// Namespace: UnityEngine.Purchasing
internal class LegacyAnalyticsAdapter : IAnalyticsAdapter // TypeDefIndex: 7271
{
	// Fields
	private readonly ILegacyUnityAnalytics m_LegacyAnalytics; // 0x10

	// Methods

	// RVA: 0x13DB3BC Offset: 0x13D73BC VA: 0x13DB3BC
	public void .ctor(ILegacyUnityAnalytics legacyAnalytics) { }

	// RVA: 0x13DB3E4 Offset: 0x13D73E4 VA: 0x13DB3E4 Slot: 4
	public void SendTransactionEvent(Product product) { }

	// RVA: 0x13DB4D4 Offset: 0x13D74D4 VA: 0x13DB4D4 Slot: 5
	public void SendTransactionFailedEvent(Product product, PurchaseFailureDescription description) { }
}


// Namespace: UnityEngine.Purchasing
internal class LegacyAnalyticsWrapper : IAnalyticsAdapter, ICoreServicesEnvironmentObserver // TypeDefIndex: 7272
{
	// Fields
	private bool m_Enabled; // 0x10
	private IAnalyticsAdapter m_LegacyAdapter; // 0x18
	private IAnalyticsAdapter m_EmptyAdapter; // 0x20

	// Properties
	private IAnalyticsAdapter m_AnalyticsAdapter { get; }

	// Methods

	// RVA: 0x13DB740 Offset: 0x13D7740 VA: 0x13DB740
	internal void .ctor(IAnalyticsAdapter legacyAdapter, IAnalyticsAdapter emptyAdapter) { }

	// RVA: 0x13DB900 Offset: 0x13D7900 VA: 0x13DB900 Slot: 4
	public void SendTransactionEvent(Product product) { }

	// RVA: 0x13DB9D8 Offset: 0x13D79D8 VA: 0x13DB9D8 Slot: 5
	public void SendTransactionFailedEvent(Product product, PurchaseFailureDescription description) { }

	// RVA: 0x13DBAA8 Offset: 0x13D7AA8 VA: 0x13DBAA8 Slot: 6
	public void OnUpdatedCoreServicesEnvironment(string currentEnvironment) { }

	// RVA: 0x13DB9BC Offset: 0x13D79BC VA: 0x13DB9BC
	private IAnalyticsAdapter get_m_AnalyticsAdapter() { }
}


// Namespace: UnityEngine.Purchasing
internal class LegacyUnityAnalytics : ILegacyUnityAnalytics // TypeDefIndex: 7273
{
	// Methods

	// RVA: 0x13DBB2C Offset: 0x13D7B2C VA: 0x13DBB2C Slot: 4
	public void SendTransactionEvent(string productId, Decimal amount, string currency, string receiptPurchaseData, string signature) { }

	// RVA: 0x13DBB4C Offset: 0x13D7B4C VA: 0x13DBB4C Slot: 5
	public void SendCustomEvent(string name, Dictionary<string, object> data) { }

	// RVA: 0x13DBB5C Offset: 0x13D7B5C VA: 0x13DBB5C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class AnalyticsTransactionReceipt // TypeDefIndex: 7274
{
	// Fields
	[CompilerGenerated]
	private string <transactionReceipt>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <transactionReceiptSignature>k__BackingField; // 0x18
	[CompilerGenerated]
	private Nullable<TransactionServer> <transactionServer>k__BackingField; // 0x20

	// Properties
	public string transactionReceipt { get; set; }
	public string transactionReceiptSignature { get; set; }
	public Nullable<TransactionServer> transactionServer { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13DBB64 Offset: 0x13D7B64 VA: 0x13DBB64
	public string get_transactionReceipt() { }

	[CompilerGenerated]
	// RVA: 0x13DBB6C Offset: 0x13D7B6C VA: 0x13DBB6C
	public void set_transactionReceipt(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DBB74 Offset: 0x13D7B74 VA: 0x13DBB74
	public string get_transactionReceiptSignature() { }

	[CompilerGenerated]
	// RVA: 0x13DBB7C Offset: 0x13D7B7C VA: 0x13DBB7C
	public void set_transactionReceiptSignature(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DBB84 Offset: 0x13D7B84 VA: 0x13DBB84
	public Nullable<TransactionServer> get_transactionServer() { }

	[CompilerGenerated]
	// RVA: 0x13DBB8C Offset: 0x13D7B8C VA: 0x13DBB8C
	public void set_transactionServer(Nullable<TransactionServer> value) { }

	// RVA: 0x13DBB94 Offset: 0x13D7B94 VA: 0x13DBB94
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
internal class GoogleReceipt // TypeDefIndex: 7275
{
	// Fields
	public string json; // 0x10
	public string signature; // 0x18

	// Methods

	// RVA: 0x13DBB9C Offset: 0x13D7B9C VA: 0x13DBB9C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class IDs : IEnumerable<KeyValuePair<string, string>>, IEnumerable // TypeDefIndex: 7276
{
	// Fields
	private readonly Dictionary<string, string> m_Dic; // 0x10

	// Methods

	// RVA: 0x13DBBA4 Offset: 0x13D7BA4 VA: 0x13DBBA4 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0x13DBC38 Offset: 0x13D7C38 VA: 0x13DBC38
	public void Add(string id, string[] stores) { }

	// RVA: 0x13DBCE4 Offset: 0x13D7CE4 VA: 0x13DBCE4
	internal string SpecificIDForStore(string store, string defaultValue) { }

	// RVA: 0x13DBD84 Offset: 0x13D7D84 VA: 0x13DBD84 Slot: 4
	public IEnumerator<KeyValuePair<string, string>> GetEnumerator() { }

	// RVA: 0x13DBE18 Offset: 0x13D7E18 VA: 0x13DBE18
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class ConfigurationBuilder // TypeDefIndex: 7277
{
	// Fields
	[CompilerGenerated]
	private bool <useCatalogProvider>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <logUnavailableProducts>k__BackingField; // 0x11
	[CompilerGenerated]
	private readonly HashSet<ProductDefinition> <products>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly PurchasingFactory <factory>k__BackingField; // 0x20

	// Properties
	public bool useCatalogProvider { get; }
	public bool logUnavailableProducts { get; }
	public HashSet<ProductDefinition> products { get; }
	internal PurchasingFactory factory { get; }

	// Methods

	// RVA: 0x13DBE94 Offset: 0x13D7E94 VA: 0x13DBE94
	internal void .ctor(PurchasingFactory factory) { }

	[CompilerGenerated]
	// RVA: 0x13DBF24 Offset: 0x13D7F24 VA: 0x13DBF24
	public bool get_useCatalogProvider() { }

	[CompilerGenerated]
	// RVA: 0x13DBF2C Offset: 0x13D7F2C VA: 0x13DBF2C
	public bool get_logUnavailableProducts() { }

	[CompilerGenerated]
	// RVA: 0x13DBF34 Offset: 0x13D7F34 VA: 0x13DBF34
	public HashSet<ProductDefinition> get_products() { }

	[CompilerGenerated]
	// RVA: 0x13DBF3C Offset: 0x13D7F3C VA: 0x13DBF3C
	internal PurchasingFactory get_factory() { }

	// RVA: 0x13DBF44 Offset: 0x13D7F44 VA: 0x13DBF44
	public static ConfigurationBuilder Instance(IPurchasingModule first, IPurchasingModule[] rest) { }

	// RVA: 0x13DC1BC Offset: 0x13D81BC VA: 0x13DC1BC
	public ConfigurationBuilder AddProduct(string id, ProductType type, IDs storeIDs, IEnumerable<PayoutDefinition> payouts) { }
}


// Namespace: UnityEngine.Purchasing
internal class CoreServicesEnvironmentSubject // TypeDefIndex: 7278
{
	// Fields
	private static CoreServicesEnvironmentSubject s_Instance; // 0x0
	private string m_LastKnownEnvironment; // 0x10
	private List<ICoreServicesEnvironmentObserver> m_Observers; // 0x18

	// Methods

	// RVA: 0x13DB784 Offset: 0x13D7784 VA: 0x13DB784
	internal static CoreServicesEnvironmentSubject Instance() { }

	// RVA: 0x13DB7F8 Offset: 0x13D77F8 VA: 0x13DB7F8
	public void SubscribeToUpdatesAndGetCurrent(ICoreServicesEnvironmentObserver newObserver) { }

	// RVA: 0x13DC3FC Offset: 0x13D83FC VA: 0x13DC3FC
	internal void UpdateCurrentEnvironment(string currentEnvironment) { }

	// RVA: 0x13DC404 Offset: 0x13D8404 VA: 0x13DC404
	private void NotifyObservers() { }

	// RVA: 0x13DBAE0 Offset: 0x13D7AE0 VA: 0x13DBAE0
	internal bool IsDefaultLiveEnvironment(string environment) { }

	// RVA: 0x13DC380 Offset: 0x13D8380 VA: 0x13DC380
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal interface ICoreServicesEnvironmentObserver // TypeDefIndex: 7279
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnUpdatedCoreServicesEnvironment(string currentEnvironment);
}


// Namespace: UnityEngine.Purchasing
internal interface IUnityServicesInitializationChecker // TypeDefIndex: 7280
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void CheckAndLogWarning();
}


// Namespace: UnityEngine.Purchasing
internal class UnityServicesInitializationChecker : IUnityServicesInitializationChecker // TypeDefIndex: 7281
{
	// Fields
	private readonly ILogger m_Logger; // 0x10

	// Methods

	// RVA: 0x13DC5D8 Offset: 0x13D85D8 VA: 0x13DC5D8
	public void .ctor(ILogger logger) { }

	// RVA: 0x13DC600 Offset: 0x13D8600 VA: 0x13DC600 Slot: 4
	public void CheckAndLogWarning() { }

	// RVA: 0x13DC624 Offset: 0x13D8624 VA: 0x13DC624
	private bool IsUninitialized() { }

	// RVA: 0x13DC744 Offset: 0x13D8744 VA: 0x13DC744
	private void LogWarning() { }
}


// Namespace: UnityEngine.Purchasing
public interface IStoreExtension // TypeDefIndex: 7282
{}


// Namespace: UnityEngine.Purchasing
public interface IDetailedStoreListener : IStoreListener // TypeDefIndex: 7283
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription);
}


// Namespace: UnityEngine.Purchasing
public interface IExtensionProvider // TypeDefIndex: 7284
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T GetExtension<T>();
}


// Namespace: UnityEngine.Purchasing
internal interface IInternalStoreListener // TypeDefIndex: 7285
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnInitializeFailed(InitializationFailureReason error, string message);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnPurchaseFailed(Product i, PurchaseFailureDescription p);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnInitialized(IStoreController controller);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void SendTransactionEvent(Product product);
}


// Namespace: UnityEngine.Purchasing
public enum InitializationFailureReason // TypeDefIndex: 7286
{
	// Fields
	public int value__; // 0x0
	public const InitializationFailureReason PurchasingUnavailable = 0;
	public const InitializationFailureReason NoProductsAvailable = 1;
	public const InitializationFailureReason AppNotKnown = 2;
}


// Namespace: UnityEngine.Purchasing
public interface IStoreController // TypeDefIndex: 7287
{
	// Properties
	public abstract ProductCollection products { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ProductCollection get_products();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void InitiatePurchase(Product product);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void InitiatePurchase(string productId);
}


// Namespace: UnityEngine.Purchasing
public interface IStoreListener // TypeDefIndex: 7288
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnInitializeFailed(InitializationFailureReason error, string message);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent);

	[Obsolete("Use IDetailedStoreListener.OnPurchaseFailed for more detailed callback.", False)]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnInitialized(IStoreController controller, IExtensionProvider extensions);
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class PayoutDefinition // TypeDefIndex: 7289
{
	// Fields
	[SerializeField]
	private PayoutType m_Type; // 0x10
	[SerializeField]
	private string m_Subtype; // 0x18
	[SerializeField]
	private double m_Quantity; // 0x20
	[SerializeField]
	private string m_Data; // 0x28

	// Properties
	private PayoutType type { set; }
	private string subtype { set; }
	private double quantity { set; }
	private string data { set; }

	// Methods

	// RVA: 0x13DC78C Offset: 0x13D878C VA: 0x13DC78C
	private void set_type(PayoutType value) { }

	// RVA: 0x13DC794 Offset: 0x13D8794 VA: 0x13DC794
	private void set_subtype(string value) { }

	// RVA: 0x13DC834 Offset: 0x13D8834 VA: 0x13DC834
	private void set_quantity(double value) { }

	// RVA: 0x13DC83C Offset: 0x13D883C VA: 0x13DC83C
	private void set_data(string value) { }

	// RVA: 0x13DC8DC Offset: 0x13D88DC VA: 0x13DC8DC
	public void .ctor() { }

	// RVA: 0x13DC938 Offset: 0x13D8938 VA: 0x13DC938
	public void .ctor(string typeString, string subtype, double quantity, string data) { }
}


// Namespace: UnityEngine.Purchasing
public enum PayoutType // TypeDefIndex: 7290
{
	// Fields
	public int value__; // 0x0
	public const PayoutType Other = 0;
	public const PayoutType Currency = 1;
	public const PayoutType Item = 2;
	public const PayoutType Resource = 3;
}


// Namespace: UnityEngine.Purchasing
public class Product // TypeDefIndex: 7291
{
	// Fields
	[CompilerGenerated]
	private ProductDefinition <definition>k__BackingField; // 0x10
	[CompilerGenerated]
	private ProductMetadata <metadata>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <availableToPurchase>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <transactionID>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <appleOriginalTransactionID>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <appleProductIsRestored>k__BackingField; // 0x38
	[CompilerGenerated]
	private string <receipt>k__BackingField; // 0x40

	// Properties
	public ProductDefinition definition { get; set; }
	public ProductMetadata metadata { get; set; }
	public bool availableToPurchase { get; set; }
	public string transactionID { get; set; }
	internal string appleOriginalTransactionID { set; }
	public bool appleProductIsRestored { get; set; }
	public bool hasReceipt { get; }
	public string receipt { get; set; }

	// Methods

	// RVA: 0x13DCAFC Offset: 0x13D8AFC VA: 0x13DCAFC
	internal void .ctor(ProductDefinition definition, ProductMetadata metadata, string receipt) { }

	// RVA: 0x13DCB38 Offset: 0x13D8B38 VA: 0x13DCB38
	internal void .ctor(ProductDefinition definition, ProductMetadata metadata) { }

	[CompilerGenerated]
	// RVA: 0x13DCB68 Offset: 0x13D8B68 VA: 0x13DCB68
	public ProductDefinition get_definition() { }

	[CompilerGenerated]
	// RVA: 0x13DCB70 Offset: 0x13D8B70 VA: 0x13DCB70
	private void set_definition(ProductDefinition value) { }

	[CompilerGenerated]
	// RVA: 0x13DCB78 Offset: 0x13D8B78 VA: 0x13DCB78
	public ProductMetadata get_metadata() { }

	[CompilerGenerated]
	// RVA: 0x13DCB80 Offset: 0x13D8B80 VA: 0x13DCB80
	internal void set_metadata(ProductMetadata value) { }

	[CompilerGenerated]
	// RVA: 0x13DCB88 Offset: 0x13D8B88 VA: 0x13DCB88
	public bool get_availableToPurchase() { }

	[CompilerGenerated]
	// RVA: 0x13DCB90 Offset: 0x13D8B90 VA: 0x13DCB90
	internal void set_availableToPurchase(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13DCB9C Offset: 0x13D8B9C VA: 0x13DCB9C
	public string get_transactionID() { }

	[CompilerGenerated]
	// RVA: 0x13DCBA4 Offset: 0x13D8BA4 VA: 0x13DCBA4
	internal void set_transactionID(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DCBAC Offset: 0x13D8BAC VA: 0x13DCBAC
	internal void set_appleOriginalTransactionID(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DCBB4 Offset: 0x13D8BB4 VA: 0x13DCBB4
	public bool get_appleProductIsRestored() { }

	[CompilerGenerated]
	// RVA: 0x13DCBBC Offset: 0x13D8BBC VA: 0x13DCBBC
	internal void set_appleProductIsRestored(bool value) { }

	// RVA: 0x13DCBC8 Offset: 0x13D8BC8 VA: 0x13DCBC8
	public bool get_hasReceipt() { }

	[CompilerGenerated]
	// RVA: 0x13DCBE8 Offset: 0x13D8BE8 VA: 0x13DCBE8
	public string get_receipt() { }

	[CompilerGenerated]
	// RVA: 0x13DCBF0 Offset: 0x13D8BF0 VA: 0x13DCBF0
	internal void set_receipt(string value) { }

	// RVA: 0x13DCBF8 Offset: 0x13D8BF8 VA: 0x13DCBF8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13DCC9C Offset: 0x13D8C9C VA: 0x13DCC9C Slot: 2
	public override int GetHashCode() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ProductCollection.<>c // TypeDefIndex: 7292
{
	// Fields
	public static readonly ProductCollection.<>c <>9; // 0x0
	public static Func<Product, string> <>9__3_0; // 0x8
	public static Func<Product, string> <>9__3_1; // 0x10

	// Methods

	// RVA: 0x13DD038 Offset: 0x13D9038 VA: 0x13DD038
	private static void .cctor() { }

	// RVA: 0x13DD094 Offset: 0x13D9094 VA: 0x13DD094
	public void .ctor() { }

	// RVA: 0x13DD09C Offset: 0x13D909C VA: 0x13DD09C
	internal string <AddProducts>b__3_0(Product x) { }

	// RVA: 0x13DD0BC Offset: 0x13D90BC VA: 0x13DD0BC
	internal string <AddProducts>b__3_1(Product x) { }
}


// Namespace: UnityEngine.Purchasing
public class ProductCollection // TypeDefIndex: 7293
{
	// Fields
	private Dictionary<string, Product> m_IdToProduct; // 0x10
	private Dictionary<string, Product> m_StoreSpecificIdToProduct; // 0x18
	[CompilerGenerated]
	private readonly HashSet<Product> <set>k__BackingField; // 0x20
	[CompilerGenerated]
	private Product[] <all>k__BackingField; // 0x28

	// Properties
	public HashSet<Product> set { get; }
	public Product[] all { get; set; }

	// Methods

	// RVA: 0x13DCCBC Offset: 0x13D8CBC VA: 0x13DCCBC
	internal void .ctor(Product[] products) { }

	// RVA: 0x13DCD48 Offset: 0x13D8D48 VA: 0x13DCD48
	internal void AddProducts(IEnumerable<Product> products) { }

	[CompilerGenerated]
	// RVA: 0x13DCF34 Offset: 0x13D8F34 VA: 0x13DCF34
	public HashSet<Product> get_set() { }

	[CompilerGenerated]
	// RVA: 0x13DCF3C Offset: 0x13D8F3C VA: 0x13DCF3C
	public Product[] get_all() { }

	[CompilerGenerated]
	// RVA: 0x13DCF44 Offset: 0x13D8F44 VA: 0x13DCF44
	private void set_all(Product[] value) { }

	// RVA: 0x13DCF4C Offset: 0x13D8F4C VA: 0x13DCF4C
	public Product WithID(string id) { }

	// RVA: 0x13DCFBC Offset: 0x13D8FBC VA: 0x13DCFBC
	public Product WithStoreSpecificID(string id) { }
}


// Namespace: UnityEngine.Purchasing
public class ProductDefinition // TypeDefIndex: 7294
{
	// Fields
	[CompilerGenerated]
	private string <id>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <storeSpecificId>k__BackingField; // 0x18
	[CompilerGenerated]
	private ProductType <type>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <enabled>k__BackingField; // 0x24
	private readonly List<PayoutDefinition> m_Payouts; // 0x28

	// Properties
	public string id { get; set; }
	public string storeSpecificId { get; set; }
	public ProductType type { get; set; }
	public bool enabled { get; set; }
	public IEnumerable<PayoutDefinition> payouts { get; }

	// Methods

	// RVA: 0x13DC2A4 Offset: 0x13D82A4 VA: 0x13DC2A4
	public void .ctor(string id, string storeSpecificId, ProductType type) { }

	// RVA: 0x13DD0DC Offset: 0x13D90DC VA: 0x13DD0DC
	public void .ctor(string id, string storeSpecificId, ProductType type, bool enabled) { }

	// RVA: 0x13DD0E8 Offset: 0x13D90E8 VA: 0x13DD0E8
	public void .ctor(string id, string storeSpecificId, ProductType type, bool enabled, IEnumerable<PayoutDefinition> payouts) { }

	// RVA: 0x13DD1A4 Offset: 0x13D91A4 VA: 0x13DD1A4
	public void .ctor(string id, ProductType type) { }

	[CompilerGenerated]
	// RVA: 0x13DD1B8 Offset: 0x13D91B8 VA: 0x13DD1B8
	public string get_id() { }

	[CompilerGenerated]
	// RVA: 0x13DD1C0 Offset: 0x13D91C0 VA: 0x13DD1C0
	private void set_id(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DD1C8 Offset: 0x13D91C8 VA: 0x13DD1C8
	public string get_storeSpecificId() { }

	[CompilerGenerated]
	// RVA: 0x13DD1D0 Offset: 0x13D91D0 VA: 0x13DD1D0
	private void set_storeSpecificId(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DD1D8 Offset: 0x13D91D8 VA: 0x13DD1D8
	public ProductType get_type() { }

	[CompilerGenerated]
	// RVA: 0x13DD1E0 Offset: 0x13D91E0 VA: 0x13DD1E0
	private void set_type(ProductType value) { }

	[CompilerGenerated]
	// RVA: 0x13DD1E8 Offset: 0x13D91E8 VA: 0x13DD1E8
	public bool get_enabled() { }

	[CompilerGenerated]
	// RVA: 0x13DD1F0 Offset: 0x13D91F0 VA: 0x13DD1F0
	private void set_enabled(bool value) { }

	// RVA: 0x13DD1FC Offset: 0x13D91FC VA: 0x13DD1FC Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13DD298 Offset: 0x13D9298 VA: 0x13DD298 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13DD2B8 Offset: 0x13D92B8 VA: 0x13DD2B8
	public IEnumerable<PayoutDefinition> get_payouts() { }

	// RVA: 0x13DC2B0 Offset: 0x13D82B0 VA: 0x13DC2B0
	internal void SetPayouts(IEnumerable<PayoutDefinition> newPayouts) { }
}


// Namespace: UnityEngine.Purchasing
public class ProductMetadata // TypeDefIndex: 7295
{
	// Fields
	[CompilerGenerated]
	private string <localizedPriceString>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <localizedTitle>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <localizedDescription>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <isoCurrencyCode>k__BackingField; // 0x28
	[CompilerGenerated]
	private Decimal <localizedPrice>k__BackingField; // 0x30

	// Properties
	public string localizedPriceString { get; set; }
	public string localizedTitle { get; set; }
	public string localizedDescription { get; set; }
	public string isoCurrencyCode { get; set; }
	public Decimal localizedPrice { get; set; }

	// Methods

	// RVA: 0x13DD2C0 Offset: 0x13D92C0 VA: 0x13DD2C0
	public void .ctor(string priceString, string title, string description, string currencyCode, Decimal localizedPrice) { }

	// RVA: 0x13DD314 Offset: 0x13D9314 VA: 0x13DD314
	public void .ctor(ProductMetadata productMetadata) { }

	// RVA: 0x13DD358 Offset: 0x13D9358 VA: 0x13DD358
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x13DD360 Offset: 0x13D9360 VA: 0x13DD360
	public string get_localizedPriceString() { }

	[CompilerGenerated]
	// RVA: 0x13DD368 Offset: 0x13D9368 VA: 0x13DD368
	internal void set_localizedPriceString(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DD370 Offset: 0x13D9370 VA: 0x13DD370
	public string get_localizedTitle() { }

	[CompilerGenerated]
	// RVA: 0x13DD378 Offset: 0x13D9378 VA: 0x13DD378
	internal void set_localizedTitle(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DD380 Offset: 0x13D9380 VA: 0x13DD380
	public string get_localizedDescription() { }

	[CompilerGenerated]
	// RVA: 0x13DD388 Offset: 0x13D9388 VA: 0x13DD388
	internal void set_localizedDescription(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DD390 Offset: 0x13D9390 VA: 0x13DD390
	public string get_isoCurrencyCode() { }

	[CompilerGenerated]
	// RVA: 0x13DD398 Offset: 0x13D9398 VA: 0x13DD398
	internal void set_isoCurrencyCode(string value) { }

	[CompilerGenerated]
	// RVA: 0x13DD3A0 Offset: 0x13D93A0 VA: 0x13DD3A0
	public Decimal get_localizedPrice() { }

	[CompilerGenerated]
	// RVA: 0x13DD3AC Offset: 0x13D93AC VA: 0x13DD3AC
	internal void set_localizedPrice(Decimal value) { }
}


// Namespace: UnityEngine.Purchasing
public enum ProductType // TypeDefIndex: 7296
{
	// Fields
	public int value__; // 0x0
	public const ProductType Consumable = 0;
	public const ProductType NonConsumable = 1;
	public const ProductType Subscription = 2;
}


// Namespace: UnityEngine.Purchasing
public class PurchaseEventArgs // TypeDefIndex: 7297
{
	// Fields
	[CompilerGenerated]
	private Product <purchasedProduct>k__BackingField; // 0x10

	// Properties
	public Product purchasedProduct { get; set; }

	// Methods

	// RVA: 0x13DD3B4 Offset: 0x13D93B4 VA: 0x13DD3B4
	internal void .ctor(Product purchasedProduct) { }

	[CompilerGenerated]
	// RVA: 0x13DD3DC Offset: 0x13D93DC VA: 0x13DD3DC
	public Product get_purchasedProduct() { }

	[CompilerGenerated]
	// RVA: 0x13DD3E4 Offset: 0x13D93E4 VA: 0x13DD3E4
	private void set_purchasedProduct(Product value) { }
}


// Namespace: UnityEngine.Purchasing
public enum PurchaseFailureReason // TypeDefIndex: 7298
{
	// Fields
	public int value__; // 0x0
	public const PurchaseFailureReason PurchasingUnavailable = 0;
	public const PurchaseFailureReason ExistingPurchasePending = 1;
	public const PurchaseFailureReason ProductUnavailable = 2;
	public const PurchaseFailureReason SignatureInvalid = 3;
	public const PurchaseFailureReason UserCancelled = 4;
	public const PurchaseFailureReason PaymentDeclined = 5;
	public const PurchaseFailureReason DuplicateTransaction = 6;
	public const PurchaseFailureReason Unknown = 7;
}


// Namespace: UnityEngine.Purchasing
public enum PurchaseProcessingResult // TypeDefIndex: 7299
{
	// Fields
	public int value__; // 0x0
	public const PurchaseProcessingResult Complete = 0;
	public const PurchaseProcessingResult Pending = 1;
}


// Namespace: UnityEngine.Purchasing
internal class PurchasingFactory : IPurchasingBinder, IExtensionProvider // TypeDefIndex: 7300
{
	// Fields
	private readonly Dictionary<Type, IStoreConfiguration> m_ConfigMap; // 0x10
	private readonly Dictionary<Type, IStoreExtension> m_ExtensionMap; // 0x18
	private IStore m_Store; // 0x20
	private ICatalogProvider m_CatalogProvider; // 0x28
	[CompilerGenerated]
	private string <storeName>k__BackingField; // 0x30

	// Properties
	public string storeName { get; set; }
	public IStore service { get; set; }

	// Methods

	// RVA: 0x13DBFD4 Offset: 0x13D7FD4 VA: 0x13DBFD4
	public void .ctor(IPurchasingModule first, IPurchasingModule[] remainingModules) { }

	[CompilerGenerated]
	// RVA: 0x13DD3EC Offset: 0x13D93EC VA: 0x13DD3EC
	public string get_storeName() { }

	[CompilerGenerated]
	// RVA: 0x13DD3F4 Offset: 0x13D93F4 VA: 0x13DD3F4
	private void set_storeName(string value) { }

	// RVA: 0x13DD3FC Offset: 0x13D93FC VA: 0x13DD3FC
	public IStore get_service() { }

	// RVA: 0x13DD458 Offset: 0x13D9458 VA: 0x13DD458
	public void set_service(IStore value) { }

	// RVA: 0x13DD460 Offset: 0x13D9460 VA: 0x13DD460 Slot: 4
	public void RegisterStore(string name, IStore s) { }

	// RVA: -1 Offset: -1 Slot: 5
	public void RegisterExtension<T>(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA4850 Offset: 0xBA0850 VA: 0xBA4850
	|-PurchasingFactory.RegisterExtension<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void RegisterConfiguration<T>(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA4718 Offset: 0xBA0718 VA: 0xBA4718
	|-PurchasingFactory.RegisterConfiguration<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public T GetExtension<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA44E8 Offset: 0xBA04E8 VA: 0xBA44E8
	|-PurchasingFactory.GetExtension<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13DD478 Offset: 0x13D9478 VA: 0x13DD478
	internal ICatalogProvider GetCatalogProvider() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class PurchasingManager.<>c // TypeDefIndex: 7301
{
	// Fields
	public static readonly PurchasingManager.<>c <>9; // 0x0
	public static Func<ProductDefinition, Product> <>9__45_0; // 0x8

	// Methods

	// RVA: 0x13DF600 Offset: 0x13DB600 VA: 0x13DF600
	private static void .cctor() { }

	// RVA: 0x13DF65C Offset: 0x13DB65C VA: 0x13DF65C
	public void .ctor() { }

	// RVA: 0x13DF664 Offset: 0x13DB664 VA: 0x13DF664
	internal Product <Initialize>b__45_0(ProductDefinition x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PurchasingManager.<>c__DisplayClass27_0 // TypeDefIndex: 7302
{
	// Fields
	public Product product; // 0x10

	// Methods

	// RVA: 0x13DE298 Offset: 0x13DA298 VA: 0x13DE298
	public void .ctor() { }

	// RVA: 0x13DF6F4 Offset: 0x13DB6F4 VA: 0x13DF6F4
	internal bool <OnAllPurchasesRetrieved>b__0(Product firstPurchasedProduct) { }
}


// Namespace: UnityEngine.Purchasing
internal class PurchasingManager : IStoreCallback, IStoreController // TypeDefIndex: 7303
{
	// Fields
	private readonly IStore m_Store; // 0x10
	private IInternalStoreListener m_Listener; // 0x18
	private readonly ILogger m_Logger; // 0x20
	private readonly TransactionLog m_TransactionLog; // 0x28
	private readonly string m_StoreName; // 0x30
	private readonly bool m_logUnavailableProducts; // 0x38
	private readonly IUnityServicesInitializationChecker m_UnityServicesInitializationChecker; // 0x40
	private Action m_AdditionalProductsCallback; // 0x48
	private Action<InitializationFailureReason> m_AdditionalProductsFailCallback; // 0x50
	private Action<InitializationFailureReason, string> m_AdditionalProductsDetailedFailCallback; // 0x58
	private readonly HashSet<string> purchasesProcessedInSession; // 0x60
	[CompilerGenerated]
	private bool <useTransactionLog>k__BackingField; // 0x68
	[CompilerGenerated]
	private ProductCollection <products>k__BackingField; // 0x70
	private bool initialized; // 0x78

	// Properties
	public bool useTransactionLog { get; set; }
	public ProductCollection products { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13DD480 Offset: 0x13D9480 VA: 0x13DD480 Slot: 13
	public bool get_useTransactionLog() { }

	[CompilerGenerated]
	// RVA: 0x13DD488 Offset: 0x13D9488 VA: 0x13DD488 Slot: 14
	public void set_useTransactionLog(bool value) { }

	// RVA: 0x13DD494 Offset: 0x13D9494 VA: 0x13DD494
	internal void .ctor(TransactionLog tDb, ILogger logger, IStore store, string storeName, IUnityServicesInitializationChecker unityServicesInitializationChecker, bool logUnavailableProducts) { }

	// RVA: 0x13DD564 Offset: 0x13D9564 VA: 0x13DD564 Slot: 11
	public void InitiatePurchase(Product product) { }

	// RVA: 0x13DD81C Offset: 0x13D981C VA: 0x13DD81C Slot: 12
	public void InitiatePurchase(string productId) { }

	// RVA: 0x13DD5C4 Offset: 0x13D95C4 VA: 0x13DD5C4 Slot: 15
	public void InitiatePurchase(Product product, string developerPayload) { }

	// RVA: 0x13DD87C Offset: 0x13D987C VA: 0x13DD87C Slot: 16
	public void InitiatePurchase(string purchasableId, string developerPayload) { }

	// RVA: 0x13DDA20 Offset: 0x13D9A20 VA: 0x13DDA20 Slot: 17
	public void ConfirmPendingPurchase(Product product) { }

	[CompilerGenerated]
	// RVA: 0x13DDDEC Offset: 0x13D9DEC VA: 0x13DDDEC Slot: 10
	public ProductCollection get_products() { }

	[CompilerGenerated]
	// RVA: 0x13DDDF4 Offset: 0x13D9DF4 VA: 0x13DDDF4
	private void set_products(ProductCollection value) { }

	// RVA: 0x13DDDFC Offset: 0x13D9DFC VA: 0x13DDDFC Slot: 7
	public void OnPurchaseSucceeded(string id, string receipt, string transactionId) { }

	// RVA: 0x13DDF10 Offset: 0x13D9F10 VA: 0x13DDF10
	private void UpdateProductReceiptAndTransactionID(Product product, string receipt, string transactionId) { }

	// RVA: 0x13DE130 Offset: 0x13DA130 VA: 0x13DE130 Slot: 8
	public void OnAllPurchasesRetrieved(List<Product> purchasedProducts) { }

	// RVA: 0x13DE33C Offset: 0x13DA33C VA: 0x13DE33C
	internal static void OnEntitlementRevoked(Product revokedProduct) { }

	// RVA: 0x13DE2A0 Offset: 0x13DA2A0 VA: 0x13DE2A0
	private void HandlePurchaseRetrieved(Product product, Product purchasedProduct) { }

	// RVA: 0x13DE358 Offset: 0x13DA358 VA: 0x13DE358
	private bool WasPurchaseAlreadyProcessed(string transactionId) { }

	// RVA: 0x13DE320 Offset: 0x13DA320 VA: 0x13DE320
	private static void ClearProductReceipt(Product product) { }

	// RVA: 0x13DE3B0 Offset: 0x13DA3B0 VA: 0x13DE3B0 Slot: 5
	public void OnSetupFailed(InitializationFailureReason reason, string message) { }

	// RVA: 0x13DE4C4 Offset: 0x13DA4C4 VA: 0x13DE4C4 Slot: 9
	public void OnPurchaseFailed(PurchaseFailureDescription description) { }

	// RVA: 0x13DE8AC Offset: 0x13DA8AC VA: 0x13DE8AC Slot: 6
	public void OnProductsRetrieved(List<ProductDescription> products) { }

	// RVA: 0x13DE11C Offset: 0x13DA11C VA: 0x13DE11C
	private string CreateUnifiedReceipt(string rawReceipt, string transactionId) { }

	// RVA: 0x13DED84 Offset: 0x13DAD84 VA: 0x13DED84
	private void ProcessPurchaseOnStart() { }

	// RVA: 0x13DDF4C Offset: 0x13D9F4C VA: 0x13DDF4C
	private void ProcessPurchaseIfNew(Product product) { }

	// RVA: 0x13DEF90 Offset: 0x13DAF90 VA: 0x13DEF90
	private bool HasRecordedTransaction(string transactionId) { }

	// RVA: 0x13DEBE0 Offset: 0x13DABE0 VA: 0x13DEBE0
	private void CheckForInitialization(int productCount) { }

	// RVA: 0x13DF018 Offset: 0x13DB018 VA: 0x13DF018
	private bool HasAvailableProductsToPurchase() { }

	// RVA: 0x13DF340 Offset: 0x13DB340 VA: 0x13DF340
	public void Initialize(IInternalStoreListener listener, HashSet<ProductDefinition> products) { }
}


// Namespace: UnityEngine.Purchasing
internal class StoreListenerProxy : IInternalStoreListener // TypeDefIndex: 7304
{
	// Fields
	private readonly IAnalyticsClient m_Analytics; // 0x10
	private readonly IStoreListener m_ForwardTo; // 0x18
	private readonly IExtensionProvider m_Extensions; // 0x20

	// Methods

	// RVA: 0x13DF72C Offset: 0x13DB72C VA: 0x13DF72C
	public void .ctor(IStoreListener forwardTo, IAnalyticsClient analytics, IExtensionProvider extensions) { }

	// RVA: 0x13DF768 Offset: 0x13DB768 VA: 0x13DF768 Slot: 7
	public void OnInitialized(IStoreController controller) { }

	// RVA: 0x13DF81C Offset: 0x13DB81C VA: 0x13DF81C Slot: 4
	public void OnInitializeFailed(InitializationFailureReason error, string message) { }

	// RVA: 0x13DF8D4 Offset: 0x13DB8D4 VA: 0x13DF8D4 Slot: 5
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e) { }

	// RVA: 0x13DF980 Offset: 0x13DB980 VA: 0x13DF980 Slot: 6
	public void OnPurchaseFailed(Product i, PurchaseFailureDescription p) { }

	// RVA: 0x13DFB58 Offset: 0x13DBB58 VA: 0x13DFB58 Slot: 8
	public void SendTransactionEvent(Product product) { }
}


// Namespace: UnityEngine.Purchasing
internal class TransactionLog // TypeDefIndex: 7305
{
	// Fields
	private readonly ILogger logger; // 0x10
	private readonly string persistentDataPath; // 0x18

	// Methods

	// RVA: 0x13DFC00 Offset: 0x13DBC00 VA: 0x13DFC00
	public void .ctor(ILogger logger, string persistentDataPath) { }

	// RVA: 0x13DEFBC Offset: 0x13DAFBC VA: 0x13DEFBC
	public bool HasRecordOf(string transactionID) { }

	// RVA: 0x13DDCAC Offset: 0x13D9CAC VA: 0x13DDCAC
	public void Record(string transactionID) { }

	// RVA: 0x13DFCC8 Offset: 0x13DBCC8 VA: 0x13DFCC8
	private string GetRecordPath(string transactionID) { }

	// RVA: 0x13DFD44 Offset: 0x13DBD44 VA: 0x13DFD44
	internal static string ComputeHash(string transactionID) { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class UnifiedReceipt // TypeDefIndex: 7306
{
	// Fields
	public string Payload; // 0x10
	public string Store; // 0x18
	public string TransactionID; // 0x20

	// Methods

	// RVA: 0x13DFEC8 Offset: 0x13DBEC8 VA: 0x13DFEC8
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
internal static class UnifiedReceiptExtensions // TypeDefIndex: 7307
{
	// Methods

	[Extension]
	// RVA: 0x13DA6F8 Offset: 0x13D66F8 VA: 0x13DA6F8
	public static AnalyticsTransactionReceipt ToReceiptAndSignature(UnifiedReceipt receipt) { }

	[Extension]
	// RVA: 0x13DFED0 Offset: 0x13DBED0 VA: 0x13DFED0
	private static Nullable<TransactionServer> ToTransactionServer(UnifiedReceipt receipt) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UnityPurchasing.<>c__DisplayClass5_0 // TypeDefIndex: 7308
{
	// Fields
	public PurchasingManager manager; // 0x10
	public StoreListenerProxy proxy; // 0x18

	// Methods

	// RVA: 0x13E07CC Offset: 0x13DC7CC VA: 0x13E07CC
	public void .ctor() { }

	// RVA: 0x13E0924 Offset: 0x13DC924 VA: 0x13E0924
	internal void <Initialize>b__0(HashSet<ProductDefinition> response) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UnityPurchasing.<>c__DisplayClass6_0 // TypeDefIndex: 7309
{
	// Fields
	public HashSet<ProductDefinition> localProductSet; // 0x10
	public Action<HashSet<ProductDefinition>> callback; // 0x18

	// Methods

	// RVA: 0x13E091C Offset: 0x13DC91C VA: 0x13E091C
	public void .ctor() { }

	// RVA: 0x13E0948 Offset: 0x13DC948 VA: 0x13E0948
	internal void <FetchAndMergeProducts>b__0(HashSet<ProductDefinition> cloudProducts) { }
}


// Namespace: UnityEngine.Purchasing
public abstract class UnityPurchasing // TypeDefIndex: 7310
{
	// Methods

	[Obsolete("Use Initialize(IDetailedStoreListener, ConfigurationBuilder)", False)]
	// RVA: 0x13E0028 Offset: 0x13DC028 VA: 0x13E0028
	public static void Initialize(IStoreListener listener, ConfigurationBuilder builder) { }

	// RVA: 0x13E0624 Offset: 0x13DC624 VA: 0x13E0624
	public static void Initialize(IDetailedStoreListener listener, ConfigurationBuilder builder) { }

	// RVA: 0x13E0250 Offset: 0x13DC250 VA: 0x13E0250
	private static IAnalyticsAdapter GenerateUnityAnalytics(ILogger logger) { }

	// RVA: 0x13E01D0 Offset: 0x13DC1D0 VA: 0x13E01D0
	private static IAnalyticsAdapter GenerateLegacyUnityAnalytics() { }

	// RVA: 0x13E03C0 Offset: 0x13DC3C0 VA: 0x13E03C0
	internal static void Initialize(IStoreListener listener, ConfigurationBuilder builder, ILogger logger, string persistentDatapath, IAnalyticsAdapter ugsAnalytics, IAnalyticsAdapter legacyAnalytics, ICatalogProvider catalog, IUnityServicesInitializationChecker unityServicesInitializationChecker) { }

	// RVA: 0x13E07D4 Offset: 0x13DC7D4 VA: 0x13E07D4
	internal static void FetchAndMergeProducts(bool useCatalog, HashSet<ProductDefinition> localProductSet, ICatalogProvider catalog, Action<HashSet<ProductDefinition>> callback) { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
internal static class LoggerExtensions // TypeDefIndex: 7311
{
	// Methods

	[Extension]
	// RVA: 0x13DB2E8 Offset: 0x13D72E8 VA: 0x13DB2E8
	public static void LogIAPWarning(ILogger logger, string message) { }

	[Extension]
	// RVA: 0x13DDBE8 Offset: 0x13D9BE8 VA: 0x13DDBE8
	public static void LogIAPError(ILogger logger, string message) { }
}


// Namespace: UnityEngine.Purchasing
internal static class ProductPurchaseUpdater // TypeDefIndex: 7312
{
	// Methods

	// RVA: 0x13E0B5C Offset: 0x13DCB5C VA: 0x13E0B5C
	internal static void UpdateProductReceiptAndTransactionID(Product product, string receipt, string transactionId, string storeName) { }
}


// Namespace: UnityEngine.Purchasing
internal static class UnifiedReceiptFormatter // TypeDefIndex: 7313
{
	// Methods

	// RVA: 0x13DEF14 Offset: 0x13DAF14 VA: 0x13DEF14
	internal static string FormatUnifiedReceipt(string platformReceipt, string transactionId, string storeName) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal interface ITelemetryDiagnostics // TypeDefIndex: 7314
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SendDiagnostic(string diagnosticName, Exception e);
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal interface ITelemetryDiagnosticsInstanceWrapper // TypeDefIndex: 7315
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetDiagnosticsInstance(IDiagnostics diagnosticsInstance);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendDiagnostic(string diagnosticName, string diagnosticException);
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal struct TelemetryDiagnosticParams // TypeDefIndex: 7316
{
	// Fields
	internal string name; // 0x0
	internal string exception; // 0x8

	// Methods

	// RVA: 0x13E0B98 Offset: 0x13DCB98 VA: 0x13E0B98
	internal void .ctor(string diagnosticName, string diagnosticException) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class TelemetryDiagnostics : ITelemetryDiagnostics // TypeDefIndex: 7317
{
	// Fields
	private readonly ITelemetryDiagnosticsInstanceWrapper m_TelemetryDiagnosticsInstanceWrapper; // 0x10

	// Methods

	// RVA: 0x13E0BA0 Offset: 0x13DCBA0 VA: 0x13E0BA0
	public void .ctor(ITelemetryDiagnosticsInstanceWrapper telemetryDiagnosticsInstanceWrapper) { }

	// RVA: 0x13E0BC8 Offset: 0x13DCBC8 VA: 0x13E0BC8 Slot: 4
	public void SendDiagnostic(string diagnosticName, Exception e) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class TelemetryDiagnosticsInstanceWrapper.<>c__DisplayClass7_0 // TypeDefIndex: 7318
{
	// Fields
	public TelemetryDiagnosticsInstanceWrapper <>4__this; // 0x10
	public TelemetryDiagnosticParams diagnosticParams; // 0x18

	// Methods

	// RVA: 0x13E10C4 Offset: 0x13DD0C4 VA: 0x13E10C4
	public void .ctor() { }

	// RVA: 0x13E1268 Offset: 0x13DD268 VA: 0x13E1268
	internal void <SendDiagnosticOnMainThread>b__0() { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class TelemetryDiagnosticsInstanceWrapper : ITelemetryDiagnosticsInstanceWrapper // TypeDefIndex: 7319
{
	// Fields
	private IDiagnostics m_Instance; // 0x10
	private ILogger m_Logger; // 0x18
	private IUtil m_Util; // 0x20
	private readonly TelemetryQueue<TelemetryDiagnosticParams> m_Queue; // 0x28

	// Methods

	// RVA: 0x13E0DBC Offset: 0x13DCDBC VA: 0x13E0DBC
	public void .ctor(ILogger logger, IUtil util) { }

	// RVA: 0x13E0EA0 Offset: 0x13DCEA0 VA: 0x13E0EA0 Slot: 4
	public void SetDiagnosticsInstance(IDiagnostics diagnosticsInstance) { }

	// RVA: 0x13E0EF8 Offset: 0x13DCEF8 VA: 0x13E0EF8 Slot: 5
	public void SendDiagnostic(string diagnosticName, string diagnosticException) { }

	// RVA: 0x13E0F94 Offset: 0x13DCF94 VA: 0x13E0F94
	private void SendDiagnosticOnMainThread(TelemetryDiagnosticParams diagnosticParams) { }

	// RVA: 0x13E10CC Offset: 0x13DD0CC VA: 0x13E10CC
	private void SendDiagnosticAndCatchExceptions(TelemetryDiagnosticParams diagnosticParams) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class IapTelemetryException : Exception // TypeDefIndex: 7320
{
	// Methods

	// RVA: 0x13E1288 Offset: 0x13DD288 VA: 0x13E1288
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal interface ITelemetryMetricEvent // TypeDefIndex: 7321
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void StartMetric();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void StopAndSendMetric();
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal interface ITelemetryMetricsInstanceWrapper // TypeDefIndex: 7322
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetMetricsInstance(IMetrics metricsInstance);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendMetric(TelemetryMetricTypes telemetryMetricTypes, string metricName, double metricTimeSeconds);
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal interface ITelemetryMetricsService // TypeDefIndex: 7323
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void ExecuteTimedAction(Action timedAction, TelemetryMetricDefinition metricDefinition);
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal struct TelemetryMetricDefinition // TypeDefIndex: 7324
{
	// Fields
	[CompilerGenerated]
	private readonly TelemetryMetricTypes <MetricType>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly string <MetricName>k__BackingField; // 0x8

	// Properties
	public TelemetryMetricTypes MetricType { get; }
	public string MetricName { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13E12F0 Offset: 0x13DD2F0 VA: 0x13E12F0
	public TelemetryMetricTypes get_MetricType() { }

	[CompilerGenerated]
	// RVA: 0x13E12F8 Offset: 0x13DD2F8 VA: 0x13E12F8
	public string get_MetricName() { }

	// RVA: 0x13E1300 Offset: 0x13DD300 VA: 0x13E1300
	public void .ctor(string metricName, TelemetryMetricTypes metricType = 2) { }

	// RVA: 0x13E130C Offset: 0x13DD30C VA: 0x13E130C
	public static TelemetryMetricDefinition op_Implicit(string name) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal static class TelemetryMetricDefinitions // TypeDefIndex: 7325
{
	// Fields
	internal static readonly TelemetryMetricDefinition confirmSubscriptionPriceChangeName; // 0x0
	internal static readonly TelemetryMetricDefinition continuePromotionalPurchasesName; // 0x10
	internal static readonly TelemetryMetricDefinition dequeueQueryProductsTimeName; // 0x20
	internal static readonly TelemetryMetricDefinition dequeueQueryPurchasesTimeName; // 0x30
	internal static readonly TelemetryMetricDefinition fetchStorePromotionOrderName; // 0x40
	internal static readonly TelemetryMetricDefinition fetchStorePromotionVisibilityName; // 0x50
	internal static readonly TelemetryMetricDefinition initPurchaseName; // 0x60
	internal static readonly TelemetryMetricDefinition packageInitTimeName; // 0x70
	internal static readonly TelemetryMetricDefinition presentCodeRedemptionSheetName; // 0x80
	internal static readonly TelemetryMetricDefinition refreshAppReceiptName; // 0x90
	internal static readonly TelemetryMetricDefinition restoreTransactionName; // 0xA0
	internal static readonly TelemetryMetricDefinition retrieveProductsName; // 0xB0
	internal static readonly TelemetryMetricDefinition setStorePromotionOrderName; // 0xC0
	internal static readonly TelemetryMetricDefinition setStorePromotionVisibilityName; // 0xD0
	internal static readonly TelemetryMetricDefinition upgradeDowngradeSubscriptionName; // 0xE0

	// Methods

	// RVA: 0x13E1318 Offset: 0x13DD318 VA: 0x13E1318
	private static void .cctor() { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class TelemetryMetricEvent : ITelemetryMetricEvent // TypeDefIndex: 7326
{
	// Fields
	private readonly ITelemetryMetricsInstanceWrapper m_TelemetryMetricsInstanceWrapper; // 0x10
	private readonly TelemetryMetricTypes m_MetricType; // 0x18
	private readonly string m_MetricName; // 0x20
	private Stopwatch m_Stopwatch; // 0x28

	// Methods

	// RVA: 0x13E1590 Offset: 0x13DD590 VA: 0x13E1590
	internal void .ctor(ITelemetryMetricsInstanceWrapper telemetryMetricsInstanceWrapper, TelemetryMetricTypes metricType, string metricName) { }

	// RVA: 0x13E161C Offset: 0x13DD61C VA: 0x13E161C Slot: 4
	public void StartMetric() { }

	// RVA: 0x13E16A0 Offset: 0x13DD6A0 VA: 0x13E16A0 Slot: 5
	public void StopAndSendMetric() { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal struct TelemetryMetricParams // TypeDefIndex: 7327
{
	// Fields
	internal TelemetryMetricTypes type; // 0x0
	internal string name; // 0x8
	internal double timeSeconds; // 0x10

	// Methods

	// RVA: 0x13E180C Offset: 0x13DD80C VA: 0x13E180C
	internal void .ctor(TelemetryMetricTypes metricType, string metricName, double metricTimeSeconds) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class TelemetryMetricsInstanceWrapper.<>c__DisplayClass7_0 // TypeDefIndex: 7328
{
	// Fields
	public TelemetryMetricsInstanceWrapper <>4__this; // 0x10
	public TelemetryMetricParams metricParams; // 0x18

	// Methods

	// RVA: 0x13E1B4C Offset: 0x13DDB4C VA: 0x13E1B4C
	public void .ctor() { }

	// RVA: 0x13E1E24 Offset: 0x13DDE24 VA: 0x13E1E24
	internal void <SendMetricOnMainThread>b__0() { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class TelemetryMetricsInstanceWrapper : ITelemetryMetricsInstanceWrapper // TypeDefIndex: 7329
{
	// Fields
	private IMetrics m_Instance; // 0x10
	private ILogger m_Logger; // 0x18
	private IUtil m_Util; // 0x20
	private readonly TelemetryQueue<TelemetryMetricParams> m_Queue; // 0x28

	// Methods

	// RVA: 0x13E181C Offset: 0x13DD81C VA: 0x13E181C
	public void .ctor(ILogger logger, IUtil util) { }

	// RVA: 0x13E1900 Offset: 0x13DD900 VA: 0x13E1900 Slot: 4
	public void SetMetricsInstance(IMetrics metricsInstance) { }

	// RVA: 0x13E1968 Offset: 0x13DD968 VA: 0x13E1968 Slot: 5
	public void SendMetric(TelemetryMetricTypes metricType, string metricName, double metricTimeSeconds) { }

	// RVA: 0x13E1A14 Offset: 0x13DDA14 VA: 0x13E1A14
	private void SendMetricOnMainThread(TelemetryMetricParams metricParams) { }

	// RVA: 0x13E1B54 Offset: 0x13DDB54 VA: 0x13E1B54
	private void SendMetricByTypeAndCatchExceptions(TelemetryMetricParams metricParams) { }

	// RVA: 0x13E1C7C Offset: 0x13DDC7C VA: 0x13E1C7C
	private void SendMetricByType(TelemetryMetricParams metricParams) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class TelemetryMetricsService : ITelemetryMetricsService // TypeDefIndex: 7330
{
	// Fields
	private readonly ITelemetryMetricsInstanceWrapper m_TelemetryMetricsInstanceWrapper; // 0x10

	// Methods

	// RVA: 0x13E1E70 Offset: 0x13DDE70 VA: 0x13E1E70
	public void .ctor(ITelemetryMetricsInstanceWrapper telemetryMetricsInstanceWrapper) { }

	// RVA: 0x13E1E98 Offset: 0x13DDE98 VA: 0x13E1E98 Slot: 4
	public void ExecuteTimedAction(Action timedAction, TelemetryMetricDefinition metricDefinition) { }

	// RVA: 0x13E208C Offset: 0x13DE08C VA: 0x13E208C Slot: 5
	public ITelemetryMetricEvent CreateAndStartMetricEvent(TelemetryMetricDefinition metricDefinition) { }
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal enum TelemetryMetricTypes // TypeDefIndex: 7331
{
	// Fields
	public int value__; // 0x0
	public const TelemetryMetricTypes Gauge = 0;
	public const TelemetryMetricTypes Sum = 1;
	public const TelemetryMetricTypes Histogram = 2;
}


// Namespace: UnityEngine.Purchasing.Telemetry
internal class TelemetryQueue<TTelemetryEventParams> // TypeDefIndex: 7332
{
	// Fields
	private readonly Action<TTelemetryEventParams> m_SendTelemetryEvent; // 0x0
	private ConcurrentQueue<TTelemetryEventParams> m_Queue; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Action<TTelemetryEventParams> sendTelemetryEvent) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC6215C Offset: 0xC5E15C VA: 0xC6215C
	|-TelemetryQueue<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void QueueEvent(TTelemetryEventParams telemetryEvent) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC62184 Offset: 0xC5E184 VA: 0xC62184
	|-TelemetryQueue<__Il2CppFullySharedGenericType>.QueueEvent
	*/

	// RVA: -1 Offset: -1
	internal void SendQueuedEvents() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC622FC Offset: 0xC5E2FC VA: 0xC622FC
	|-TelemetryQueue<__Il2CppFullySharedGenericType>.SendQueuedEvents
	*/
}


// Namespace: UnityEngine.Purchasing.Extension
public abstract class AbstractPurchasingModule : IPurchasingModule // TypeDefIndex: 7333
{
	// Fields
	protected IPurchasingBinder m_Binder; // 0x10

	// Methods

	// RVA: 0x13E2280 Offset: 0x13DE280 VA: 0x13E2280 Slot: 4
	public void Configure(IPurchasingBinder binder) { }

	// RVA: 0x13E2290 Offset: 0x13DE290 VA: 0x13E2290
	protected void RegisterStore(string name, IStore store) { }

	// RVA: -1 Offset: -1
	protected void BindExtension<T>(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BBF8 Offset: 0xB67BF8 VA: 0xB6BBF8
	|-AbstractPurchasingModule.BindExtension<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected void BindConfiguration<T>(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6BABC Offset: 0xB67ABC VA: 0xB6BABC
	|-AbstractPurchasingModule.BindConfiguration<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Configure();

	// RVA: 0x13E2348 Offset: 0x13DE348 VA: 0x13E2348
	protected void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Extension
public abstract class AbstractStore : IStore // TypeDefIndex: 7334
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Initialize(IStoreCallback callback);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Purchase(ProductDefinition product, string developerPayload);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void FinishTransaction(ProductDefinition product, string transactionId);

	// RVA: 0x13E2350 Offset: 0x13DE350 VA: 0x13E2350
	protected void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Extension
public interface ICatalogProvider // TypeDefIndex: 7335
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void FetchProducts(Action<HashSet<ProductDefinition>> callback);
}


// Namespace: UnityEngine.Purchasing.Extension
public interface IPurchasingBinder // TypeDefIndex: 7336
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RegisterStore(string name, IStore store);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RegisterExtension<T>(T instance);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void RegisterConfiguration<T>(T instance);
}


// Namespace: UnityEngine.Purchasing.Extension
public interface IPurchasingModule // TypeDefIndex: 7337
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Configure(IPurchasingBinder binder);
}


// Namespace: UnityEngine.Purchasing.Extension
public interface IStore // TypeDefIndex: 7338
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(IStoreCallback callback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Purchase(ProductDefinition product, string developerPayload);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void FinishTransaction(ProductDefinition product, string transactionId);
}


// Namespace: UnityEngine.Purchasing.Extension
public interface IStoreCallback // TypeDefIndex: 7339
{
	// Properties
	public abstract ProductCollection products { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ProductCollection get_products();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnSetupFailed(InitializationFailureReason reason, string message);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnProductsRetrieved(List<ProductDescription> products);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnPurchaseSucceeded(string storeSpecificId, string receipt, string transactionIdentifier);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void OnAllPurchasesRetrieved(List<Product> purchasedProducts);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void OnPurchaseFailed(PurchaseFailureDescription desc);
}


// Namespace: UnityEngine.Purchasing.Extension
public interface IStoreConfiguration // TypeDefIndex: 7340
{}


// Namespace: UnityEngine.Purchasing.Extension
public class ProductDescription // TypeDefIndex: 7341
{
	// Fields
	[CompilerGenerated]
	private string <storeSpecificId>k__BackingField; // 0x10
	public ProductType type; // 0x18
	[CompilerGenerated]
	private ProductMetadata <metadata>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <receipt>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <transactionId>k__BackingField; // 0x30

	// Properties
	public string storeSpecificId { get; set; }
	public ProductMetadata metadata { get; set; }
	public string receipt { get; set; }
	public string transactionId { get; set; }

	// Methods

	// RVA: 0x13E2358 Offset: 0x13DE358 VA: 0x13E2358
	public void .ctor(string id, ProductMetadata metadata, string receipt, string transactionId) { }

	// RVA: 0x13E239C Offset: 0x13DE39C VA: 0x13E239C
	public void .ctor(string id, ProductMetadata metadata, string receipt, string transactionId, ProductType type) { }

	// RVA: 0x13E23F0 Offset: 0x13DE3F0 VA: 0x13E23F0
	public void .ctor(string id, ProductMetadata metadata) { }

	[CompilerGenerated]
	// RVA: 0x13E2424 Offset: 0x13DE424 VA: 0x13E2424
	public string get_storeSpecificId() { }

	[CompilerGenerated]
	// RVA: 0x13E242C Offset: 0x13DE42C VA: 0x13E242C
	private void set_storeSpecificId(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E2434 Offset: 0x13DE434 VA: 0x13E2434
	public ProductMetadata get_metadata() { }

	[CompilerGenerated]
	// RVA: 0x13E243C Offset: 0x13DE43C VA: 0x13E243C
	private void set_metadata(ProductMetadata value) { }

	[CompilerGenerated]
	// RVA: 0x13E2444 Offset: 0x13DE444 VA: 0x13E2444
	public string get_receipt() { }

	[CompilerGenerated]
	// RVA: 0x13E244C Offset: 0x13DE44C VA: 0x13E244C
	private void set_receipt(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E2454 Offset: 0x13DE454 VA: 0x13E2454
	public string get_transactionId() { }

	[CompilerGenerated]
	// RVA: 0x13E245C Offset: 0x13DE45C VA: 0x13E245C
	public void set_transactionId(string value) { }
}


// Namespace: UnityEngine.Purchasing.Extension
public class PurchaseFailureDescription // TypeDefIndex: 7342
{
	// Fields
	[CompilerGenerated]
	private string <productId>k__BackingField; // 0x10
	[CompilerGenerated]
	private PurchaseFailureReason <reason>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <message>k__BackingField; // 0x20

	// Properties
	public string productId { get; set; }
	public PurchaseFailureReason reason { get; set; }
	public string message { get; set; }

	// Methods

	// RVA: 0x13DD9E0 Offset: 0x13D99E0 VA: 0x13DD9E0
	public void .ctor(string productId, PurchaseFailureReason reason, string message) { }

	[CompilerGenerated]
	// RVA: 0x13E2464 Offset: 0x13DE464 VA: 0x13E2464
	public string get_productId() { }

	[CompilerGenerated]
	// RVA: 0x13E246C Offset: 0x13DE46C VA: 0x13E246C
	private void set_productId(string value) { }

	[CompilerGenerated]
	// RVA: 0x13E2474 Offset: 0x13DE474 VA: 0x13E2474
	public PurchaseFailureReason get_reason() { }

	[CompilerGenerated]
	// RVA: 0x13E247C Offset: 0x13DE47C VA: 0x13E247C
	private void set_reason(PurchaseFailureReason value) { }

	[CompilerGenerated]
	// RVA: 0x13E2484 Offset: 0x13DE484 VA: 0x13E2484
	public string get_message() { }

	[CompilerGenerated]
	// RVA: 0x13E248C Offset: 0x13DE48C VA: 0x13E248C
	private void set_message(string value) { }
}
