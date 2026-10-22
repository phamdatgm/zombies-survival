// Namespace: 
internal class <Module> // TypeDefIndex: 6617
{}


// Namespace: Stores.Util
internal class JsonProductDescriptionsDeserializer // TypeDefIndex: 6618
{
	// Methods

	// RVA: 0x13EB734 Offset: 0x13E7734 VA: 0x13EB734
	public List<ProductDescription> DeserializeProductDescriptions(string json) { }

	// RVA: 0x13EBC3C Offset: 0x13E7C3C VA: 0x13EBC3C Slot: 4
	internal virtual ProductMetadata DeserializeMetadata(Dictionary<string, object> data) { }

	// RVA: 0x13EBEB4 Offset: 0x13E7EB4 VA: 0x13EBEB4
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class AmazonAppStoreStoreExtensions : IAmazonExtensions, IStoreExtension, IAmazonConfiguration, IStoreConfiguration // TypeDefIndex: 6619
{
	// Fields
	private readonly AndroidJavaObject android; // 0x10

	// Methods

	// RVA: 0x13EBEBC Offset: 0x13E7EBC VA: 0x13EBEBC
	public void .ctor(AndroidJavaObject a) { }
}


// Namespace: UnityEngine.Purchasing
public class FakeAmazonExtensions : IAmazonExtensions, IStoreExtension, IAmazonConfiguration, IStoreConfiguration // TypeDefIndex: 6620
{
	// Methods

	// RVA: 0x13EBEE4 Offset: 0x13E7EE4 VA: 0x13EBEE4
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public interface IAmazonConfiguration : IStoreConfiguration // TypeDefIndex: 6621
{}


// Namespace: UnityEngine.Purchasing
public interface IAmazonExtensions : IStoreExtension // TypeDefIndex: 6622
{}


// Namespace: UnityEngine.Purchasing
internal class AndroidJavaStore : INativeStore // TypeDefIndex: 6623
{
	// Fields
	private readonly AndroidJavaObject m_Store; // 0x10

	// Methods

	// RVA: 0x13EBEEC Offset: 0x13E7EEC VA: 0x13EBEEC
	public void .ctor(AndroidJavaObject store) { }

	// RVA: 0x13EBF14 Offset: 0x13E7F14 VA: 0x13EBF14 Slot: 4
	public void RetrieveProducts(string json) { }

	// RVA: 0x13EBFD8 Offset: 0x13E7FD8 VA: 0x13EBFD8 Slot: 7
	public virtual void Purchase(string productJSON, string developerPayload) { }

	// RVA: 0x13EC0C8 Offset: 0x13E80C8 VA: 0x13EC0C8 Slot: 8
	public virtual void FinishTransaction(string productJSON, string transactionID) { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
internal static class ListExtension // TypeDefIndex: 6624
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	internal static AndroidJavaObject ToJava<T>(List<T> values) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9C76C Offset: 0xB9876C VA: 0xB9C76C
	|-ListExtension.ToJava<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static AndroidJavaObject ToJavaArray<T>(List<T> values) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9C7A4 Offset: 0xB987A4 VA: 0xB9C7A4
	|-ListExtension.ToJavaArray<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: UnityEngine.Purchasing
internal class UnityActivity // TypeDefIndex: 6625
{
	// Fields
	private static AndroidJavaClass s_UnityPlayerClass; // 0x0

	// Methods

	// RVA: 0x13EC1B8 Offset: 0x13E81B8 VA: 0x13EC1B8
	private static AndroidJavaClass GetUnityPlayerClass() { }

	// RVA: 0x13EC25C Offset: 0x13E825C VA: 0x13EC25C
	internal static AndroidJavaObject GetCurrentActivity() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class GoogleCachedQueryProductDetailsService.<>c // TypeDefIndex: 6626
{
	// Fields
	public static readonly GoogleCachedQueryProductDetailsService.<>c <>9; // 0x0
	public static Func<ProductDefinition, string> <>9__5_0; // 0x8

	// Methods

	// RVA: 0x13ECC48 Offset: 0x13E8C48 VA: 0x13ECC48
	private static void .cctor() { }

	// RVA: 0x13ECCA4 Offset: 0x13E8CA4 VA: 0x13ECCA4
	public void .ctor() { }

	// RVA: 0x13ECCAC Offset: 0x13E8CAC VA: 0x13ECCAC
	internal string <GetCachedQueriedProductDetails>b__5_0(ProductDefinition product) { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleCachedQueryProductDetailsService : IGoogleCachedQueryProductDetailsService // TypeDefIndex: 6627
{
	// Fields
	private readonly Dictionary<string, AndroidJavaObject> m_CachedQueriedProductDetails; // 0x10

	// Methods

	// RVA: 0x13EC2CC Offset: 0x13E82CC VA: 0x13EC2CC Slot: 1
	protected override void Finalize() { }

	// RVA: 0x13EC4E8 Offset: 0x13E84E8 VA: 0x13EC4E8 Slot: 4
	public IEnumerable<AndroidJavaObject> GetCachedQueriedProducts() { }

	// RVA: 0x13EC538 Offset: 0x13E8538 VA: 0x13EC538
	private AndroidJavaObject GetCachedQueriedProductDetails(string productId) { }

	// RVA: 0x13EC5A4 Offset: 0x13E85A4 VA: 0x13EC5A4
	private IEnumerable<AndroidJavaObject> GetCachedQueriedProductDetails(IEnumerable<string> productIds) { }

	// RVA: 0x13EC648 Offset: 0x13E8648 VA: 0x13EC648 Slot: 5
	public IEnumerable<AndroidJavaObject> GetCachedQueriedProductDetails(IEnumerable<ProductDefinition> products) { }

	// RVA: 0x13EC774 Offset: 0x13E8774 VA: 0x13EC774
	private bool Contains(string productId) { }

	// RVA: 0x13EC7CC Offset: 0x13E87CC VA: 0x13EC7CC Slot: 6
	public bool Contains(ProductDefinition products) { }

	// RVA: 0x13EC7E4 Offset: 0x13E87E4 VA: 0x13EC7E4 Slot: 7
	public void AddCachedQueriedProductDetails(IEnumerable<AndroidJavaObject> queriedProducts) { }

	// RVA: 0x13ECBCC Offset: 0x13E8BCC VA: 0x13ECBCC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleFinishTransactionService.<>c__DisplayClass4_0 // TypeDefIndex: 6628
{
	// Fields
	public string purchaseToken; // 0x10

	// Methods

	// RVA: 0x13ED0F4 Offset: 0x13E90F4 VA: 0x13ED0F4
	public void .ctor() { }

	// RVA: 0x13ED0FC Offset: 0x13E90FC VA: 0x13ED0FC
	internal bool <FindPurchase>b__0(IGooglePurchase purchase) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleFinishTransactionService.<>c__DisplayClass5_0 // TypeDefIndex: 6629
{
	// Fields
	public Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished; // 0x10
	public IGooglePurchase purchase; // 0x18

	// Methods

	// RVA: 0x13ED0EC Offset: 0x13E90EC VA: 0x13ED0EC
	public void .ctor() { }

	// RVA: 0x13ED1AC Offset: 0x13E91AC VA: 0x13ED1AC
	internal void <FinishTransactionForPurchase>b__0(IGoogleBillingResult result) { }

	// RVA: 0x13ED1D4 Offset: 0x13E91D4 VA: 0x13ED1D4
	internal void <FinishTransactionForPurchase>b__1(IGoogleBillingResult result) { }
}


// Namespace: 
[CompilerGenerated]
private struct GoogleFinishTransactionService.<FindPurchase>d__4 : IAsyncStateMachine // TypeDefIndex: 6630
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<IGooglePurchase> <>t__builder; // 0x8
	public string purchaseToken; // 0x20
	public GoogleFinishTransactionService <>4__this; // 0x28
	private GoogleFinishTransactionService.<>c__DisplayClass4_0 <>8__1; // 0x30
	private TaskAwaiter<List<IGooglePurchase>> <>u__1; // 0x38

	// Methods

	// RVA: 0x13ED1FC Offset: 0x13E91FC VA: 0x13ED1FC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13ED5A4 Offset: 0x13E95A4 VA: 0x13ED5A4 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct GoogleFinishTransactionService.<FinishTransaction>d__3 : IAsyncStateMachine // TypeDefIndex: 6631
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public GoogleFinishTransactionService <>4__this; // 0x28
	public string purchaseToken; // 0x30
	public ProductDefinition product; // 0x38
	public Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished; // 0x40
	private TaskAwaiter<IGooglePurchase> <>u__1; // 0x48

	// Methods

	// RVA: 0x13ED620 Offset: 0x13E9620 VA: 0x13ED620 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13ED90C Offset: 0x13E990C VA: 0x13ED90C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleFinishTransactionService : IGoogleFinishTransactionService // TypeDefIndex: 6632
{
	// Fields
	private readonly IGoogleBillingClient m_BillingClient; // 0x10
	private readonly IGoogleQueryPurchasesService m_GoogleQueryPurchasesService; // 0x18

	// Methods

	// RVA: 0x13ECCC4 Offset: 0x13E8CC4 VA: 0x13ECCC4
	internal void .ctor(IGoogleBillingClient billingClient, IGoogleQueryPurchasesService googleQueryPurchasesService) { }

	[AsyncStateMachine(typeof(GoogleFinishTransactionService.<FinishTransaction>d__3))]
	// RVA: 0x13ECCF0 Offset: 0x13E8CF0 VA: 0x13ECCF0 Slot: 4
	public void FinishTransaction(ProductDefinition product, string purchaseToken, Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished) { }

	[AsyncStateMachine(typeof(GoogleFinishTransactionService.<FindPurchase>d__4))]
	// RVA: 0x13ECDA0 Offset: 0x13E8DA0 VA: 0x13ECDA0
	private Task<IGooglePurchase> FindPurchase(string purchaseToken) { }

	// RVA: 0x13ECE88 Offset: 0x13E8E88 VA: 0x13ECE88
	private void FinishTransactionForPurchase(IGooglePurchase purchase, ProductDefinition product, string purchaseToken, Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished) { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleLastKnownProductService : IGoogleLastKnownProductService // TypeDefIndex: 6633
{
	// Fields
	[CompilerGenerated]
	private string <LastKnownOldProductId>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <LastKnownProductId>k__BackingField; // 0x18
	[CompilerGenerated]
	private Nullable<GooglePlayReplacementMode> <LastKnownReplacementMode>k__BackingField; // 0x20

	// Properties
	public string LastKnownOldProductId { get; set; }
	public string LastKnownProductId { get; set; }
	public Nullable<GooglePlayReplacementMode> LastKnownReplacementMode { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13ED918 Offset: 0x13E9918 VA: 0x13ED918 Slot: 4
	public string get_LastKnownOldProductId() { }

	[CompilerGenerated]
	// RVA: 0x13ED920 Offset: 0x13E9920 VA: 0x13ED920 Slot: 5
	public void set_LastKnownOldProductId(string value) { }

	[CompilerGenerated]
	// RVA: 0x13ED928 Offset: 0x13E9928 VA: 0x13ED928 Slot: 6
	public string get_LastKnownProductId() { }

	[CompilerGenerated]
	// RVA: 0x13ED930 Offset: 0x13E9930 VA: 0x13ED930 Slot: 7
	public void set_LastKnownProductId(string value) { }

	[CompilerGenerated]
	// RVA: 0x13ED938 Offset: 0x13E9938 VA: 0x13ED938 Slot: 8
	public Nullable<GooglePlayReplacementMode> get_LastKnownReplacementMode() { }

	[CompilerGenerated]
	// RVA: 0x13ED940 Offset: 0x13E9940 VA: 0x13ED940 Slot: 9
	public void set_LastKnownReplacementMode(Nullable<GooglePlayReplacementMode> value) { }

	// RVA: 0x13ED948 Offset: 0x13E9948 VA: 0x13ED948
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayStoreService.<>c__DisplayClass21_0 // TypeDefIndex: 6634
{
	// Fields
	public GooglePlayStoreService <>4__this; // 0x10
	public Action ActionToRetry; // 0x18

	// Methods

	// RVA: 0x13EE044 Offset: 0x13EA044 VA: 0x13EE044
	public void .ctor() { }

	// RVA: 0x13EEFFC Offset: 0x13EAFFC VA: 0x13EEFFC
	internal void <RetryConnection>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private struct GooglePlayStoreService.<FetchPurchases>d__33 : IAsyncStateMachine // TypeDefIndex: 6635
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public GooglePlayStoreService <>4__this; // 0x28
	public Action<List<IGooglePurchase>> onQueryPurchaseSucceed; // 0x30
	private TaskAwaiter <>u__1; // 0x38

	// Methods

	// RVA: 0x13EF01C Offset: 0x13EB01C VA: 0x13EF01C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13EF2C8 Offset: 0x13EB2C8 VA: 0x13EF2C8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct GooglePlayStoreService.<TryFetchPurchases>d__34 : IAsyncStateMachine // TypeDefIndex: 6636
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public Action<List<IGooglePurchase>> onQueryPurchaseSucceed; // 0x20
	public GooglePlayStoreService <>4__this; // 0x28
	private TaskAwaiter<List<IGooglePurchase>> <>u__1; // 0x30

	// Methods

	// RVA: 0x13EF2D4 Offset: 0x13EB2D4 VA: 0x13EF2D4 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13EF684 Offset: 0x13EB684 VA: 0x13EF684 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayStoreService : IGooglePlayStoreService // TypeDefIndex: 6637
{
	// Fields
	private int m_CurrentConnectionAttempts; // 0x10
	private int m_MaxConnectionAttempts; // 0x14
	private readonly IGoogleBillingClient m_BillingClient; // 0x18
	private readonly IBillingClientStateListener m_BillingClientStateListener; // 0x20
	private readonly IQueryProductDetailsService m_QueryProductDetailsService; // 0x28
	private readonly ConcurrentQueue<ProductDescriptionQuery> m_ProductsToQuery; // 0x30
	private readonly ConcurrentQueue<Action<List<IGooglePurchase>>> m_OnPurchaseSucceededQueue; // 0x38
	private readonly IGooglePurchaseService m_GooglePurchaseService; // 0x40
	private readonly IGoogleFinishTransactionService m_GoogleFinishTransactionService; // 0x48
	private readonly IGoogleQueryPurchasesService m_GoogleQueryPurchasesService; // 0x50
	private readonly IGoogleLastKnownProductService m_GoogleLastKnownProductService; // 0x58
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x60
	private readonly ILogger m_Logger; // 0x68
	private readonly IRetryPolicy m_RetryPolicy; // 0x70
	private readonly IUtil m_Util; // 0x78

	// Methods

	// RVA: 0x13ED9BC Offset: 0x13E99BC VA: 0x13ED9BC
	internal void .ctor(IGoogleBillingClient billingClient, IQueryProductDetailsService queryProductDetailsService, IGooglePurchaseService purchaseService, IGoogleFinishTransactionService finishTransactionService, IGoogleQueryPurchasesService queryPurchasesService, IBillingClientStateListener billingClientStateListener, IGoogleLastKnownProductService lastKnownProductService, ITelemetryDiagnostics telemetryDiagnostics, ILogger logger, IRetryPolicy retryPolicy, IUtil util) { }

	// RVA: 0x13EDAEC Offset: 0x13E9AEC VA: 0x13EDAEC
	internal void InitConnectionWithGooglePlay() { }

	// RVA: 0x13EDC98 Offset: 0x13E9C98 VA: 0x13EDC98
	private void StartConnection() { }

	// RVA: 0x13EDD4C Offset: 0x13E9D4C VA: 0x13EDD4C Slot: 9
	public void ResumeConnection() { }

	// RVA: 0x13EDE08 Offset: 0x13E9E08 VA: 0x13EDE08
	private void AttemptReconnection() { }

	// RVA: 0x13EDF0C Offset: 0x13E9F0C VA: 0x13EDF0C
	private bool AreConnectionAttemptsExhausted() { }

	// RVA: 0x13EDF1C Offset: 0x13E9F1C VA: 0x13EDF1C
	private void RetryConnection(Action ActionToRetry) { }

	// RVA: 0x13EE04C Offset: 0x13EA04C VA: 0x13EE04C
	private void RetryConnectionAttempt(Action ActionToRetry) { }

	// RVA: 0x13EE12C Offset: 0x13EA12C VA: 0x13EE12C
	private void OnConnected() { }

	// RVA: 0x13EE15C Offset: 0x13EA15C VA: 0x13EE15C Slot: 10
	protected virtual void DequeueQueryProducts(GoogleBillingResponseCode googleBillingResponseCode) { }

	// RVA: 0x13EE6D0 Offset: 0x13EA6D0 VA: 0x13EE6D0 Slot: 11
	protected virtual void DequeueFetchPurchases() { }

	// RVA: 0x13EE870 Offset: 0x13EA870 VA: 0x13EE870
	private void OnDisconnected(GoogleBillingResponseCode googleBillingResponseCode) { }

	// RVA: 0x13EE890 Offset: 0x13EA890 VA: 0x13EE890 Slot: 12
	public virtual void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived, Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed) { }

	// RVA: 0x13EE9F0 Offset: 0x13EA9F0 VA: 0x13EE9F0
	private void HandleRetrieveProductsNotConnected(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived, Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed) { }

	// RVA: 0x13EEB58 Offset: 0x13EAB58 VA: 0x13EEB58 Slot: 5
	public void Purchase(ProductDefinition product) { }

	// RVA: 0x13EEB70 Offset: 0x13EAB70 VA: 0x13EEB70 Slot: 13
	public virtual void Purchase(ProductDefinition product, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredReplacementMode) { }

	// RVA: 0x13EEDA8 Offset: 0x13EADA8 VA: 0x13EEDA8 Slot: 6
	public void FinishTransaction(ProductDefinition product, string purchaseToken, Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished) { }

	[AsyncStateMachine(typeof(GooglePlayStoreService.<FetchPurchases>d__33))]
	// RVA: 0x13EE7D8 Offset: 0x13EA7D8 VA: 0x13EE7D8 Slot: 7
	public void FetchPurchases(Action<List<IGooglePurchase>> onQueryPurchaseSucceed) { }

	[AsyncStateMachine(typeof(GooglePlayStoreService.<TryFetchPurchases>d__34))]
	// RVA: 0x13EEE68 Offset: 0x13EAE68 VA: 0x13EEE68
	private Task TryFetchPurchases(Action<List<IGooglePurchase>> onQueryPurchaseSucceed) { }

	// RVA: 0x13EEF3C Offset: 0x13EAF3C VA: 0x13EEF3C Slot: 8
	public IGooglePurchase GetPurchase(string purchaseToken, string skuType) { }

	[CompilerGenerated]
	// RVA: 0x13EEFF8 Offset: 0x13EAFF8 VA: 0x13EEFF8
	private void <AttemptReconnection>b__19_0(Action retryAction) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePurchaseService.<>c__DisplayClass4_0 // TypeDefIndex: 6638
{
	// Fields
	public GooglePurchaseService <>4__this; // 0x10
	public ProductDefinition product; // 0x18
	public Product oldProduct; // 0x20
	public Nullable<GooglePlayReplacementMode> desiredProrationMode; // 0x28

	// Methods

	// RVA: 0x13EF864 Offset: 0x13EB864 VA: 0x13EF864
	public void .ctor() { }

	// RVA: 0x13F0144 Offset: 0x13EC144 VA: 0x13F0144
	internal void <Purchase>b__0(List<AndroidJavaObject> productDetailsList, IGoogleBillingResult _) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePurchaseService : IGooglePurchaseService // TypeDefIndex: 6639
{
	// Fields
	private readonly IGoogleBillingClient m_BillingClient; // 0x10
	private readonly IGooglePurchaseCallback m_GooglePurchaseCallback; // 0x18
	private readonly IQueryProductDetailsService m_QueryProductDetailsService; // 0x20

	// Methods

	// RVA: 0x13EF6EC Offset: 0x13EB6EC VA: 0x13EF6EC
	internal void .ctor(IGoogleBillingClient billingClient, IGooglePurchaseCallback googlePurchaseCallback, IQueryProductDetailsService queryProductDetailsService) { }

	// RVA: 0x13EF728 Offset: 0x13EB728 VA: 0x13EF728 Slot: 4
	public void Purchase(ProductDefinition product, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredProrationMode) { }

	// RVA: 0x13EF86C Offset: 0x13EB86C VA: 0x13EF86C
	private void OnQueryProductDetailsResponse(List<AndroidJavaObject> productDetailsList, ProductDefinition productToBuy, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredProrationMode) { }

	// RVA: 0x13EF914 Offset: 0x13EB914 VA: 0x13EF914
	private bool ValidateQueryProductDetailsResponseParams(List<AndroidJavaObject> skus, ProductDefinition productToBuy, Product oldProduct) { }

	// RVA: 0x13EFA8C Offset: 0x13EBA8C VA: 0x13EFA8C
	private bool ValidateSkus(List<AndroidJavaObject> skus) { }

	// RVA: 0x13EFD6C Offset: 0x13EBD6C VA: 0x13EFD6C
	private static void VerifyAndWarnIfMoreThanOneSku(List<AndroidJavaObject> skus) { }

	// RVA: 0x13EFAE4 Offset: 0x13EBAE4 VA: 0x13EFAE4
	private void PurchaseFailedSkuNotFound(ProductDefinition productToBuy) { }

	// RVA: 0x13EFBE0 Offset: 0x13EBBE0 VA: 0x13EFBE0
	private bool ValidateOldProduct(Product oldProduct) { }

	// RVA: 0x13EFC38 Offset: 0x13EBC38 VA: 0x13EFC38
	private void PurchaseFailedInvalidOldProduct(ProductDefinition productToBuy, Product oldProduct) { }

	// RVA: 0x13EF974 Offset: 0x13EB974 VA: 0x13EF974
	private void LaunchGoogleBillingFlow(AndroidJavaObject productToPurchase, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredProrationMode) { }

	// RVA: 0x13EFECC Offset: 0x13EBECC VA: 0x13EFECC
	private void HandleBillingFlowResult(IGoogleBillingResult billingResult, AndroidJavaObject sku) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class GoogleQueryPurchasesService.<>c // TypeDefIndex: 6640
{
	// Fields
	public static readonly GoogleQueryPurchasesService.<>c <>9; // 0x0
	public static Func<IEnumerable<IGooglePurchase>, IEnumerable<IGooglePurchase>> <>9__3_0; // 0x8

	// Methods

	// RVA: 0x13F067C Offset: 0x13EC67C VA: 0x13F067C
	private static void .cctor() { }

	// RVA: 0x13F06D8 Offset: 0x13EC6D8 VA: 0x13F06D8
	public void .ctor() { }

	// RVA: 0x13F06E0 Offset: 0x13EC6E0 VA: 0x13F06E0
	internal IEnumerable<IGooglePurchase> <QueryPurchases>b__3_0(IEnumerable<IGooglePurchase> result) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleQueryPurchasesService.<>c__DisplayClass4_0 // TypeDefIndex: 6641
{
	// Fields
	public GoogleQueryPurchasesService <>4__this; // 0x10
	public TaskCompletionSource<IEnumerable<IGooglePurchase>> taskCompletion; // 0x18

	// Methods

	// RVA: 0x13F0408 Offset: 0x13EC408 VA: 0x13F0408
	public void .ctor() { }

	// RVA: 0x13F06E8 Offset: 0x13EC6E8 VA: 0x13F06E8
	internal void <QueryPurchasesWithSkuType>b__0(IGoogleBillingResult billingResult, IEnumerable<AndroidJavaObject> purchases) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleQueryPurchasesService.<>c__DisplayClass5_0 // TypeDefIndex: 6642
{
	// Fields
	public string purchaseToken; // 0x10
	public GoogleQueryPurchasesService <>4__this; // 0x18
	public TaskCompletionSource<IGooglePurchase> taskCompletion; // 0x20
	public Func<AndroidJavaObject, bool> <>9__1; // 0x28

	// Methods

	// RVA: 0x13F05CC Offset: 0x13EC5CC VA: 0x13F05CC
	public void .ctor() { }

	// RVA: 0x13F0840 Offset: 0x13EC840 VA: 0x13F0840
	internal void <GetPurchaseByToken>b__0(IGoogleBillingResult billingResult, IEnumerable<AndroidJavaObject> purchases) { }

	// RVA: 0x13F09C8 Offset: 0x13EC9C8 VA: 0x13F09C8
	internal bool <GetPurchaseByToken>b__1(AndroidJavaObject purchase) { }
}


// Namespace: 
[CompilerGenerated]
private struct GoogleQueryPurchasesService.<QueryPurchases>d__3 : IAsyncStateMachine // TypeDefIndex: 6643
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<List<IGooglePurchase>> <>t__builder; // 0x8
	public GoogleQueryPurchasesService <>4__this; // 0x20
	private TaskAwaiter<IEnumerable<IGooglePurchase>[]> <>u__1; // 0x28

	// Methods

	// RVA: 0x13F0AC0 Offset: 0x13ECAC0 VA: 0x13F0AC0 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13F0F14 Offset: 0x13ECF14 VA: 0x13F0F14 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleQueryPurchasesService : IGoogleQueryPurchasesService // TypeDefIndex: 6644
{
	// Fields
	private readonly IGoogleBillingClient m_BillingClient; // 0x10
	private readonly IGooglePurchaseBuilder m_PurchaseBuilder; // 0x18

	// Methods

	// RVA: 0x13F0168 Offset: 0x13EC168 VA: 0x13F0168
	internal void .ctor(IGoogleBillingClient billingClient, IGooglePurchaseBuilder purchaseBuilder) { }

	[AsyncStateMachine(typeof(GoogleQueryPurchasesService.<QueryPurchases>d__3))]
	// RVA: 0x13F0194 Offset: 0x13EC194 VA: 0x13F0194 Slot: 4
	public Task<List<IGooglePurchase>> QueryPurchases() { }

	// RVA: 0x13F0278 Offset: 0x13EC278 VA: 0x13F0278
	private Task<IEnumerable<IGooglePurchase>> QueryPurchasesWithSkuType(string skuType) { }

	// RVA: 0x13F0410 Offset: 0x13EC410 VA: 0x13F0410 Slot: 5
	public IGooglePurchase GetPurchaseByToken(string purchaseToken, string skuType) { }

	// RVA: 0x13F05D4 Offset: 0x13EC5D4 VA: 0x13F05D4
	private static bool IsResultOk(IGoogleBillingResult result) { }
}


// Namespace: UnityEngine.Purchasing
internal interface IGoogleCachedQueryProductDetailsService // TypeDefIndex: 6645
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IEnumerable<AndroidJavaObject> GetCachedQueriedProducts();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IEnumerable<AndroidJavaObject> GetCachedQueriedProductDetails(IEnumerable<ProductDefinition> products);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool Contains(ProductDefinition products);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void AddCachedQueriedProductDetails(IEnumerable<AndroidJavaObject> queriedProducts);
}


// Namespace: UnityEngine.Purchasing
internal class BillingClientStateListener : AndroidJavaProxy, IBillingClientStateListener // TypeDefIndex: 6646
{
	// Fields
	private const string k_AndroidBillingClientStateListenerClassName = "com.android.billingclient.api.BillingClientStateListener";
	private Action m_OnConnected; // 0x20
	private Action<GoogleBillingResponseCode> m_Disconnect; // 0x28

	// Methods

	// RVA: 0x13F0F90 Offset: 0x13ECF90 VA: 0x13F0F90
	internal void .ctor() { }

	// RVA: 0x13F1000 Offset: 0x13ED000 VA: 0x13F1000 Slot: 10
	public void RegisterOnConnected(Action onConnected) { }

	// RVA: 0x13F1008 Offset: 0x13ED008 VA: 0x13F1008 Slot: 11
	public void RegisterOnDisconnected(Action<GoogleBillingResponseCode> onDisconnected) { }

	[Preserve]
	// RVA: 0x13F1010 Offset: 0x13ED010 VA: 0x13F1010
	public void onBillingSetupFinished(AndroidJavaObject billingResult) { }

	[Preserve]
	// RVA: 0x13F1190 Offset: 0x13ED190 VA: 0x13F1190
	public void onBillingServiceDisconnected() { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleAcknowledgePurchaseListener : AndroidJavaProxy // TypeDefIndex: 6647
{
	// Fields
	private const string k_AndroidAcknowledgePurchaseResponseListenerClassName = "com.android.billingclient.api.AcknowledgePurchaseResponseListener";
	private readonly Action<IGoogleBillingResult> m_OnAcknowledgePurchaseResponse; // 0x20

	// Methods

	// RVA: 0x13F11C4 Offset: 0x13ED1C4 VA: 0x13F11C4
	internal void .ctor(Action<IGoogleBillingResult> onAcknowledgePurchaseResponseAction) { }

	[Preserve]
	// RVA: 0x13F1248 Offset: 0x13ED248 VA: 0x13F1248
	private void onAcknowledgePurchaseResponse(AndroidJavaObject billingResult) { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleConsumeResponseListener : AndroidJavaProxy // TypeDefIndex: 6648
{
	// Fields
	private const string k_AndroidConsumeResponseListenerClassName = "com.android.billingclient.api.ConsumeResponseListener";
	private readonly Action<IGoogleBillingResult> m_OnConsumeResponse; // 0x20

	// Methods

	// RVA: 0x13F12D8 Offset: 0x13ED2D8 VA: 0x13F12D8
	internal void .ctor(Action<IGoogleBillingResult> onConsumeResponseAction) { }

	[Preserve]
	// RVA: 0x13F135C Offset: 0x13ED35C VA: 0x13F135C
	private void onConsumeResponse(AndroidJavaObject billingResult, string purchaseToken) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePurchasesResponseListener : AndroidJavaProxy // TypeDefIndex: 6649
{
	// Fields
	private const string k_AndroidPurchasesResponseListenerClassName = "com.android.billingclient.api.PurchasesResponseListener";
	private readonly Action<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> m_OnQueryPurchasesResponse; // 0x20

	// Methods

	// RVA: 0x13F13EC Offset: 0x13ED3EC VA: 0x13F13EC
	internal void .ctor(Action<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> onQueryPurchasesResponse) { }

	[Preserve]
	// RVA: 0x13F1470 Offset: 0x13ED470 VA: 0x13F1470
	public void onQueryPurchasesResponse(AndroidJavaObject billingResult, AndroidJavaObject purchases) { }
}


// Namespace: 
[CompilerGenerated]
private struct GooglePurchaseUpdatedListener.<HandleUserCancelledPurchaseFailure>d__14 : IAsyncStateMachine // TypeDefIndex: 6650
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public GooglePurchaseUpdatedListener <>4__this; // 0x28
	public IGoogleBillingResult billingResult; // 0x30
	private TaskAwaiter<List<IGooglePurchase>> <>u__1; // 0x38

	// Methods

	// RVA: 0x13F3C88 Offset: 0x13EFC88 VA: 0x13F3C88 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13F3EE0 Offset: 0x13EFEE0 VA: 0x13F3EE0 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePurchaseUpdatedListener : AndroidJavaProxy, IGooglePurchaseUpdatedListener // TypeDefIndex: 6651
{
	// Fields
	private const string k_AndroidPurchaseListenerClassName = "com.android.billingclient.api.PurchasesUpdatedListener";
	private readonly IGoogleLastKnownProductService m_LastKnownProductService; // 0x20
	private readonly IGooglePurchaseCallback m_GooglePurchaseCallback; // 0x28
	private readonly IGooglePurchaseBuilder m_PurchaseBuilder; // 0x30
	private readonly IGoogleCachedQueryProductDetailsService m_GoogleCachedQueryProductDetailsService; // 0x38
	private readonly IGooglePurchaseStateEnumProvider m_GooglePurchaseStateEnumProvider; // 0x40
	private IGoogleQueryPurchasesService m_GoogleQueryPurchasesService; // 0x48

	// Methods

	// RVA: 0x13F1684 Offset: 0x13ED684 VA: 0x13F1684
	internal void .ctor(IGoogleLastKnownProductService googleLastKnownProductService, IGooglePurchaseCallback googlePurchaseCallback, IGooglePurchaseBuilder purchaseBuilder, IGoogleCachedQueryProductDetailsService googleCachedQueryProductDetailsService, IGooglePurchaseStateEnumProvider googlePurchaseStateEnumProvider, IGoogleQueryPurchasesService googleQueryPurchasesService) { }

	// RVA: 0x13F1734 Offset: 0x13ED734 VA: 0x13F1734
	public void SetGoogleQueryPurchaseService(IGoogleQueryPurchasesService googleFetchPurchases) { }

	[Preserve]
	// RVA: 0x13F173C Offset: 0x13ED73C VA: 0x13F173C
	public void onPurchasesUpdated(AndroidJavaObject billingResult, AndroidJavaObject javaPurchasesList) { }

	// RVA: 0x13F19C4 Offset: 0x13ED9C4 VA: 0x13F19C4
	internal void OnPurchasesUpdated(IGoogleBillingResult result, List<IGooglePurchase> purchases) { }

	// RVA: 0x13F1C20 Offset: 0x13EDC20 VA: 0x13F1C20
	private void HandleResultOkCases(IGoogleBillingResult result, List<IGooglePurchase> purchases) { }

	// RVA: 0x13F1E54 Offset: 0x13EDE54 VA: 0x13F1E54
	private void HandleErrorCases(IGoogleBillingResult billingResult, List<IGooglePurchase> purchases) { }

	// RVA: 0x13F1F1C Offset: 0x13EDF1C VA: 0x13F1F1C
	private void HandleErrorGoogleBillingResult(IGoogleBillingResult billingResult) { }

	[AsyncStateMachine(typeof(GooglePurchaseUpdatedListener.<HandleUserCancelledPurchaseFailure>d__14))]
	// RVA: 0x13F2988 Offset: 0x13EE988 VA: 0x13F2988
	private void HandleUserCancelledPurchaseFailure(IGoogleBillingResult billingResult) { }

	// RVA: 0x13F2A20 Offset: 0x13EEA20 VA: 0x13F2A20
	private void HandleUserCancelledPurchaseFailure(IGoogleBillingResult billingResult, List<IGooglePurchase> googlePurchases) { }

	// RVA: 0x13F1CE8 Offset: 0x13EDCE8 VA: 0x13F1CE8
	private void ApplyOnPurchases(List<IGooglePurchase> purchases, Action<IGooglePurchase> action) { }

	// RVA: 0x13F260C Offset: 0x13EE60C VA: 0x13F260C
	private void ApplyOnPurchases(IEnumerable<IGooglePurchase> purchases, IGoogleBillingResult billingResult, Action<IGooglePurchase, string> action) { }

	// RVA: 0x13F2B70 Offset: 0x13EEB70 VA: 0x13F2B70
	private void OnPurchaseOk(IGooglePurchase googlePurchase) { }

	// RVA: 0x13F31C4 Offset: 0x13EF1C4 VA: 0x13F31C4
	private void HandlePurchasedProduct(IGooglePurchase googlePurchase) { }

	// RVA: 0x13F345C Offset: 0x13EF45C VA: 0x13F345C
	private bool IsDeferredSubscriptionChange(IGooglePurchase googlePurchase) { }

	// RVA: 0x13F35A4 Offset: 0x13EF5A4 VA: 0x13F35A4
	private bool IsLastProrationModeDeferred() { }

	// RVA: 0x13F2FE4 Offset: 0x13EEFE4 VA: 0x13F2FE4
	private void OnPurchaseCancelled(IGoogleBillingResult billingResult) { }

	// RVA: 0x13F36D8 Offset: 0x13EF6D8 VA: 0x13F36D8
	private void OnPurchaseCancelled(IGooglePurchase googlePurchase) { }

	// RVA: 0x13F3850 Offset: 0x13EF850 VA: 0x13F3850
	private void OnPurchaseAlreadyOwned(IGooglePurchase googlePurchase) { }

	// RVA: 0x13F39C8 Offset: 0x13EF9C8 VA: 0x13F39C8
	private void OnPurchaseFailed(IGooglePurchase googlePurchase, string debugMessage) { }

	[CompilerGenerated]
	// RVA: 0x13F3B58 Offset: 0x13EFB58 VA: 0x13F3B58
	private bool <HandleUserCancelledPurchaseFailure>b__15_0(IGooglePurchase purchase) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ProductDetailsResponseListener.<>c__DisplayClass5_0 // TypeDefIndex: 6652
{
	// Fields
	public AndroidJavaObject productDetails; // 0x10
	public ProductDetailsResponseListener <>4__this; // 0x18
	public AndroidJavaObject billingResult; // 0x20

	// Methods

	// RVA: 0x13F40B4 Offset: 0x13F00B4 VA: 0x13F40B4
	public void .ctor() { }

	// RVA: 0x13F40BC Offset: 0x13F00BC VA: 0x13F40BC
	internal void <onProductDetailsResponse>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class ProductDetailsResponseListener : AndroidJavaProxy // TypeDefIndex: 6653
{
	// Fields
	private const string k_AndroidProductDetailsResponseListenerClassName = "com.android.billingclient.api.ProductDetailsResponseListener";
	private readonly Action<IGoogleBillingResult, List<AndroidJavaObject>> m_OnProductDetailsResponse; // 0x20
	private readonly IUtil m_Util; // 0x28
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x30

	// Methods

	// RVA: 0x13F3EEC Offset: 0x13EFEEC VA: 0x13F3EEC
	internal void .ctor(Action<IGoogleBillingResult, List<AndroidJavaObject>> onProductDetailsResponseAction, IUtil util, ITelemetryDiagnostics telemetryDiagnostics) { }

	[Preserve]
	// RVA: 0x13F3F84 Offset: 0x13EFF84 VA: 0x13F3F84
	public void onProductDetailsResponse(AndroidJavaObject billingResult, AndroidJavaObject productDetails) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedGooglePlayStoreService.<>c__DisplayClass3_0 // TypeDefIndex: 6654
{
	// Fields
	public MetricizedGooglePlayStoreService <>4__this; // 0x10
	public GoogleBillingResponseCode googleBillingResponseCode; // 0x18

	// Methods

	// RVA: 0x13F4594 Offset: 0x13F0594 VA: 0x13F4594
	public void .ctor() { }

	// RVA: 0x13F49C0 Offset: 0x13F09C0 VA: 0x13F49C0
	internal void <DequeueQueryProducts>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedGooglePlayStoreService.<>c__DisplayClass5_0 // TypeDefIndex: 6655
{
	// Fields
	public MetricizedGooglePlayStoreService <>4__this; // 0x10
	public ReadOnlyCollection<ProductDefinition> products; // 0x18
	public Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived; // 0x20
	public Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed; // 0x28

	// Methods

	// RVA: 0x13F4834 Offset: 0x13F0834 VA: 0x13F4834
	public void .ctor() { }

	// RVA: 0x13F49E0 Offset: 0x13F09E0 VA: 0x13F49E0
	internal void <RetrieveProducts>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedGooglePlayStoreService.<>c__DisplayClass6_0 // TypeDefIndex: 6656
{
	// Fields
	public MetricizedGooglePlayStoreService <>4__this; // 0x10
	public ProductDefinition product; // 0x18
	public Product oldProduct; // 0x20
	public Nullable<GooglePlayReplacementMode> desiredReplacementMode; // 0x28

	// Methods

	// RVA: 0x13F49AC Offset: 0x13F09AC VA: 0x13F49AC
	public void .ctor() { }

	// RVA: 0x13F4A04 Offset: 0x13F0A04 VA: 0x13F4A04
	internal void <Purchase>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class MetricizedGooglePlayStoreService : GooglePlayStoreService // TypeDefIndex: 6657
{
	// Fields
	private readonly ITelemetryMetricsService m_TelemetryMetricsService; // 0x80
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x88

	// Methods

	// RVA: 0x13F43F4 Offset: 0x13F03F4 VA: 0x13F43F4
	internal void .ctor(IGoogleBillingClient billingClient, IQueryProductDetailsService queryProductDetailsService, IGooglePurchaseService purchaseService, IGoogleFinishTransactionService finishTransactionService, IGoogleQueryPurchasesService queryPurchasesService, IBillingClientStateListener billingClientStateListener, IGoogleLastKnownProductService lastKnownProductService, ITelemetryDiagnostics telemetryDiagnostics, ITelemetryMetricsService telemetryMetricsService, ILogger logger, IRetryPolicy retryPolicy, IUtil util) { }

	// RVA: 0x13F4434 Offset: 0x13F0434 VA: 0x13F4434 Slot: 10
	protected override void DequeueQueryProducts(GoogleBillingResponseCode googleBillingResponseCode) { }

	// RVA: 0x13F459C Offset: 0x13F059C VA: 0x13F459C Slot: 11
	protected override void DequeueFetchPurchases() { }

	// RVA: 0x13F46C4 Offset: 0x13F06C4 VA: 0x13F46C4 Slot: 12
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived, Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed) { }

	// RVA: 0x13F483C Offset: 0x13F083C VA: 0x13F483C Slot: 13
	public override void Purchase(ProductDefinition product, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredReplacementMode) { }

	[DebuggerHidden]
	[CompilerGenerated]
	// RVA: 0x13F49B4 Offset: 0x13F09B4 VA: 0x13F49B4
	private void <>n__0(GoogleBillingResponseCode googleBillingResponseCode) { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x13F49B8 Offset: 0x13F09B8 VA: 0x13F49B8
	private void <>n__1(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived, Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed) { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x13F49BC Offset: 0x13F09BC VA: 0x13F49BC
	private void <>n__2(ProductDefinition product, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredReplacementMode) { }
}


// Namespace: UnityEngine.Purchasing
internal enum GoogleBillingConnectionState // TypeDefIndex: 6658
{
	// Fields
	public int value__; // 0x0
	public const GoogleBillingConnectionState Disconnected = 0;
	public const GoogleBillingConnectionState Connecting = 1;
	public const GoogleBillingConnectionState Connected = 2;
	public const GoogleBillingConnectionState Closed = 3;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ProductDetailsQueryResponse.<>c // TypeDefIndex: 6659
{
	// Fields
	public static readonly ProductDetailsQueryResponse.<>c <>9; // 0x0
	public static Func<AndroidJavaObject, AndroidJavaObject> <>9__2_0; // 0x8
	public static Func<ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>>, bool> <>9__3_0; // 0x10
	public static Func<ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>>, IEnumerable<AndroidJavaObject>> <>9__3_1; // 0x18
	public static Func<ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>>, IGoogleBillingResult> <>9__4_0; // 0x20
	public static Func<ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>>, IGoogleBillingResult> <>9__5_0; // 0x28
	public static Func<IGoogleBillingResult, bool> <>9__5_1; // 0x30

	// Methods

	// RVA: 0x13F57EC Offset: 0x13F17EC VA: 0x13F57EC
	private static void .cctor() { }

	// RVA: 0x13F5848 Offset: 0x13F1848 VA: 0x13F5848
	public void .ctor() { }

	// RVA: 0x13F5850 Offset: 0x13F1850 VA: 0x13F5850
	internal AndroidJavaObject <AddResponse>b__2_0(AndroidJavaObject product) { }

	// RVA: 0x13F5868 Offset: 0x13F1868 VA: 0x13F5868
	internal bool <ProductDetails>b__3_0(ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> response) { }

	// RVA: 0x13F5910 Offset: 0x13F1910 VA: 0x13F5910
	internal IEnumerable<AndroidJavaObject> <ProductDetails>b__3_1(ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> response) { }

	// RVA: 0x13F5918 Offset: 0x13F1918 VA: 0x13F5918
	internal IGoogleBillingResult <IsRecoverable>b__4_0(ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> response) { }

	// RVA: 0x13F5920 Offset: 0x13F1920 VA: 0x13F5920
	internal IGoogleBillingResult <GetGoogleBillingResult>b__5_0(ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> response) { }

	// RVA: 0x13F5928 Offset: 0x13F1928 VA: 0x13F5928
	internal bool <GetGoogleBillingResult>b__5_1(IGoogleBillingResult response) { }
}


// Namespace: UnityEngine.Purchasing
internal class ProductDetailsQueryResponse : IProductDetailsQueryResponse // TypeDefIndex: 6660
{
	// Fields
	private readonly ConcurrentBag<ValueTuple<IGoogleBillingResult, IEnumerable<AndroidJavaObject>>> m_Responses; // 0x10

	// Methods

	// RVA: 0x13F4A28 Offset: 0x13F0A28 VA: 0x13F4A28 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x13F4FC8 Offset: 0x13F0FC8 VA: 0x13F4FC8 Slot: 4
	public void AddResponse(IGoogleBillingResult billingResult, IEnumerable<AndroidJavaObject> productDetails) { }

	// RVA: 0x13F515C Offset: 0x13F115C VA: 0x13F515C Slot: 5
	public List<AndroidJavaObject> ProductDetails() { }

	// RVA: 0x13F532C Offset: 0x13F132C VA: 0x13F532C Slot: 6
	public bool IsRecoverable() { }

	// RVA: 0x13F54A0 Offset: 0x13F14A0 VA: 0x13F54A0 Slot: 7
	public IGoogleBillingResult GetGoogleBillingResult() { }

	// RVA: 0x13F5660 Offset: 0x13F1660 VA: 0x13F5660
	private static bool IsRecoverable(IGoogleBillingResult billingResult) { }

	// RVA: 0x13F5770 Offset: 0x13F1770 VA: 0x13F5770
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class ProductDetailsResponseConsolidator : IProductDetailsResponseConsolidator // TypeDefIndex: 6661
{
	// Fields
	private int m_NumberReceivedCallbacks; // 0x10
	private readonly Action<IProductDetailsQueryResponse> m_OnProductDetailsResponseConsolidated; // 0x18
	private readonly IProductDetailsQueryResponse m_Responses; // 0x20
	private readonly IUtil m_Util; // 0x28
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x30

	// Methods

	// RVA: 0x13F59D0 Offset: 0x13F19D0 VA: 0x13F59D0
	internal void .ctor(IUtil util, ITelemetryDiagnostics telemetryDiagnostics, Action<IProductDetailsQueryResponse> onProductDetailsResponseConsolidated) { }

	// RVA: 0x13F5A54 Offset: 0x13F1A54 VA: 0x13F5A54 Slot: 4
	public void Consolidate(IGoogleBillingResult billingResult, IEnumerable<AndroidJavaObject> productDetails) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class QueryProductDetailsService.<>c // TypeDefIndex: 6662
{
	// Fields
	public static readonly QueryProductDetailsService.<>c <>9; // 0x0
	public static Func<bool, bool> <>9__14_0; // 0x8
	public static Func<ProductDefinition, bool> <>9__16_0; // 0x10
	public static Func<ProductDefinition, string> <>9__16_1; // 0x18
	public static Func<ProductDefinition, bool> <>9__17_0; // 0x20
	public static Func<ProductDefinition, string> <>9__17_1; // 0x28

	// Methods

	// RVA: 0x13F6CD8 Offset: 0x13F2CD8 VA: 0x13F6CD8
	private static void .cctor() { }

	// RVA: 0x13F6D34 Offset: 0x13F2D34 VA: 0x13F6D34
	public void .ctor() { }

	// RVA: 0x13F6D3C Offset: 0x13F2D3C VA: 0x13F6D3C
	internal bool <AreAllProductDetailsCached>b__14_0(bool isCached) { }

	// RVA: 0x13F6D44 Offset: 0x13F2D44 VA: 0x13F6D44
	internal bool <QueryInAppsAsync>b__16_0(ProductDefinition product) { }

	// RVA: 0x13F6D64 Offset: 0x13F2D64 VA: 0x13F6D64
	internal string <QueryInAppsAsync>b__16_1(ProductDefinition product) { }

	// RVA: 0x13F6D7C Offset: 0x13F2D7C VA: 0x13F6D7C
	internal bool <QuerySubsAsync>b__17_0(ProductDefinition product) { }

	// RVA: 0x13F6D9C Offset: 0x13F2D9C VA: 0x13F6D9C
	internal string <QuerySubsAsync>b__17_1(ProductDefinition product) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class QueryProductDetailsService.<>c__DisplayClass10_0 // TypeDefIndex: 6663
{
	// Fields
	public QueryProductDetailsService <>4__this; // 0x10
	public ReadOnlyCollection<ProductDefinition> products; // 0x18
	public Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse; // 0x20
	public int retryCount; // 0x28

	// Methods

	// RVA: 0x13F5FD0 Offset: 0x13F1FD0 VA: 0x13F5FD0
	public void .ctor() { }

	// RVA: 0x13F6DB4 Offset: 0x13F2DB4 VA: 0x13F6DB4
	internal void <QueryAsyncProduct>b__0(Action retryAction) { }

	// RVA: 0x13F6DD8 Offset: 0x13F2DD8 VA: 0x13F6DD8
	internal void <QueryAsyncProduct>g__OnActionRetry|1() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class QueryProductDetailsService.<>c__DisplayClass12_0 // TypeDefIndex: 6664
{
	// Fields
	public QueryProductDetailsService <>4__this; // 0x10
	public IReadOnlyCollection<ProductDefinition> products; // 0x18
	public Action retryQuery; // 0x20
	public Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse; // 0x28

	// Methods

	// RVA: 0x13F6258 Offset: 0x13F2258 VA: 0x13F6258
	public void .ctor() { }

	// RVA: 0x13F6E94 Offset: 0x13F2E94 VA: 0x13F6E94
	internal void <TryQueryAsyncProductWithRetries>b__0(IProductDetailsQueryResponse productDetailsQueryResponse) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class QueryProductDetailsService.<>c__DisplayClass9_0 // TypeDefIndex: 6665
{
	// Fields
	public Action<List<ProductDescription>, IGoogleBillingResult> onProductDetailsResponse; // 0x10
	public QueryProductDetailsService <>4__this; // 0x18

	// Methods

	// RVA: 0x13F5FC8 Offset: 0x13F1FC8 VA: 0x13F5FC8
	public void .ctor() { }

	// RVA: 0x13F70B0 Offset: 0x13F30B0 VA: 0x13F70B0
	internal void <QueryAsyncProduct>b__0(List<AndroidJavaObject> productDetails, IGoogleBillingResult responseCode) { }
}


// Namespace: UnityEngine.Purchasing
internal class QueryProductDetailsService : IQueryProductDetailsService // TypeDefIndex: 6666
{
	// Fields
	private readonly IGoogleBillingClient m_BillingClient; // 0x10
	private readonly IGoogleCachedQueryProductDetailsService m_GoogleCachedQueryProductDetailsService; // 0x18
	private readonly IProductDetailsConverter m_ProductDetailsConverter; // 0x20
	private readonly IRetryPolicy m_RetryPolicy; // 0x28
	private readonly IGoogleProductCallback m_GoogleProductCallback; // 0x30
	private readonly IUtil m_Util; // 0x38
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x40

	// Methods

	// RVA: 0x13F5C54 Offset: 0x13F1C54 VA: 0x13F5C54
	internal void .ctor(IGoogleBillingClient billingClient, IGoogleCachedQueryProductDetailsService googleCachedQueryProductDetailsService, IProductDetailsConverter productDetailsConverter, IRetryPolicy retryPolicy, IGoogleProductCallback googleProductCallback, IUtil util, ITelemetryDiagnostics telemetryDiagnostics) { }

	// RVA: 0x13F5CB8 Offset: 0x13F1CB8 VA: 0x13F5CB8 Slot: 4
	public void QueryAsyncProduct(ProductDefinition product, Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse) { }

	// RVA: 0x13F5F08 Offset: 0x13F1F08 VA: 0x13F5F08 Slot: 5
	public void QueryAsyncProduct(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductDetailsResponse) { }

	// RVA: 0x13F5D90 Offset: 0x13F1D90 VA: 0x13F5D90 Slot: 6
	public void QueryAsyncProduct(ReadOnlyCollection<ProductDefinition> products, Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse) { }

	// RVA: 0x13F5FD8 Offset: 0x13F1FD8 VA: 0x13F5FD8
	private void QueryAsyncProductWithRetries(IReadOnlyCollection<ProductDefinition> products, Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse, Action retryQuery) { }

	// RVA: 0x13F6144 Offset: 0x13F2144 VA: 0x13F6144
	private void TryQueryAsyncProductWithRetries(IReadOnlyCollection<ProductDefinition> products, Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse, Action retryQuery) { }

	// RVA: 0x13F6658 Offset: 0x13F2658 VA: 0x13F6658
	private bool ShouldRetryQuery(IEnumerable<ProductDefinition> requestedProducts, IProductDetailsQueryResponse queryResponse) { }

	// RVA: 0x13F672C Offset: 0x13F272C VA: 0x13F672C
	private bool AreAllProductDetailsCached(IEnumerable<ProductDefinition> products) { }

	// RVA: 0x13F68F4 Offset: 0x13F28F4 VA: 0x13F68F4
	private IEnumerable<AndroidJavaObject> GetCachedProductDetails(IEnumerable<ProductDefinition> products) { }

	// RVA: 0x13F6260 Offset: 0x13F2260 VA: 0x13F6260
	private void QueryInAppsAsync(IEnumerable<ProductDefinition> products, IProductDetailsResponseConsolidator consolidator) { }

	// RVA: 0x13F645C Offset: 0x13F245C VA: 0x13F645C
	private void QuerySubsAsync(IEnumerable<ProductDefinition> products, IProductDetailsResponseConsolidator consolidator) { }

	// RVA: 0x13F6A80 Offset: 0x13F2A80 VA: 0x13F6A80
	private void QueryProductDetails(List<string> productList, string type, IProductDetailsResponseConsolidator consolidator) { }
}


// Namespace: UnityEngine.Purchasing
public class FakeGooglePlayStoreConfiguration : IGooglePlayConfiguration, IStoreConfiguration // TypeDefIndex: 6667
{
	// Methods

	// RVA: 0x13F718C Offset: 0x13F318C VA: 0x13F718C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class FakeGooglePlayStoreExtensions : IGooglePlayStoreExtensions, IStoreExtension // TypeDefIndex: 6668
{
	// Methods

	// RVA: 0x13F7194 Offset: 0x13F3194 VA: 0x13F7194 Slot: 4
	public void RestoreTransactions(Action<bool, string> callback) { }

	// RVA: 0x13F7198 Offset: 0x13F3198 VA: 0x13F7198 Slot: 5
	public bool IsPurchasedProductDeferred(Product product) { }

	// RVA: 0x13F71A0 Offset: 0x13F31A0 VA: 0x13F71A0
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
public static class GetGoogleProductMetadataExtension // TypeDefIndex: 6669
{
	// Methods

	[Extension]
	// RVA: 0x13F71A8 Offset: 0x13F31A8 VA: 0x13F71A8
	public static GoogleProductMetadata GetGoogleProductMetadata(ProductMetadata productMetadata) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayConfiguration : IGooglePlayConfiguration, IStoreConfiguration, IGooglePlayConfigurationInternal // TypeDefIndex: 6670
{
	// Fields
	private Action m_InitializationConnectionLister; // 0x10
	private readonly IGooglePlayStoreService m_GooglePlayStoreService; // 0x18
	private Action<Product> m_DeferredPurchaseAction; // 0x20
	private Action<Product> m_DeferredProrationUpgradeDowngradeSubscriptionAction; // 0x28
	private Action<int> m_QueryProductDetailsFailedListener; // 0x30
	private bool m_FetchPurchasesAtInitialize; // 0x38
	private bool m_FetchPurchasesExcludeDeferred; // 0x39

	// Methods

	// RVA: 0x13F7220 Offset: 0x13F3220 VA: 0x13F7220
	public void .ctor(IGooglePlayStoreService googlePlayStoreService) { }

	// RVA: 0x13F7250 Offset: 0x13F3250 VA: 0x13F7250 Slot: 4
	public void NotifyInitializationConnectionFailed() { }

	// RVA: 0x13F726C Offset: 0x13F326C VA: 0x13F726C Slot: 9
	public void NotifyQueryProductDetailsFailed(int retryCount) { }

	// RVA: 0x13F7298 Offset: 0x13F3298 VA: 0x13F7298 Slot: 6
	public void NotifyDeferredProrationUpgradeDowngradeSubscription(IStoreCallback storeCallback, string productId) { }

	// RVA: 0x13F7468 Offset: 0x13F3468 VA: 0x13F7468 Slot: 7
	public bool IsFetchPurchasesAtInitializeSkipped() { }

	// RVA: 0x13F7478 Offset: 0x13F3478 VA: 0x13F7478 Slot: 8
	public bool DoesRetrievePurchasesExcludeDeferred() { }

	// RVA: 0x13F7480 Offset: 0x13F3480 VA: 0x13F7480 Slot: 5
	public void NotifyDeferredPurchase(IStoreCallback storeCallback, IGooglePurchase purchase, string receipt, string transactionId) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayProductCallback : IGoogleProductCallback // TypeDefIndex: 6671
{
	// Fields
	private IGooglePlayConfigurationInternal m_GooglePlayConfigurationInternal; // 0x10

	// Methods

	// RVA: 0x13F75C0 Offset: 0x13F35C0 VA: 0x13F75C0 Slot: 4
	public void SetStoreConfiguration(IGooglePlayConfigurationInternal configuration) { }

	// RVA: 0x13F75C8 Offset: 0x13F35C8 VA: 0x13F75C8 Slot: 5
	public void NotifyQueryProductDetailsFailed(int retryCount) { }

	// RVA: 0x13F767C Offset: 0x13F367C VA: 0x13F767C
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayPurchaseCallback.<>c__DisplayClass8_0 // TypeDefIndex: 6672
{
	// Fields
	public GooglePlayPurchaseCallback <>4__this; // 0x10
	public IGooglePurchase purchase; // 0x18
	public string receipt; // 0x20
	public string purchaseToken; // 0x28

	// Methods

	// RVA: 0x13F7A1C Offset: 0x13F3A1C VA: 0x13F7A1C
	public void .ctor() { }

	// RVA: 0x13F7B54 Offset: 0x13F3B54 VA: 0x13F7B54
	internal void <NotifyDeferredPurchase>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayPurchaseCallback.<>c__DisplayClass9_0 // TypeDefIndex: 6673
{
	// Fields
	public GooglePlayPurchaseCallback <>4__this; // 0x10
	public string sku; // 0x18

	// Methods

	// RVA: 0x13F7B4C Offset: 0x13F3B4C VA: 0x13F7B4C
	public void .ctor() { }

	// RVA: 0x13F7C34 Offset: 0x13F3C34 VA: 0x13F7C34
	internal void <NotifyDeferredProrationUpgradeDowngradeSubscription>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayPurchaseCallback : IGooglePurchaseCallback // TypeDefIndex: 6674
{
	// Fields
	private IStoreCallback m_StoreCallback; // 0x10
	private IGooglePlayConfigurationInternal m_GooglePlayConfigurationInternal; // 0x18
	private readonly IUtil m_Util; // 0x20

	// Methods

	// RVA: 0x13F7684 Offset: 0x13F3684 VA: 0x13F7684
	public void .ctor(IUtil util) { }

	// RVA: 0x13F76AC Offset: 0x13F36AC VA: 0x13F76AC Slot: 4
	public void SetStoreCallback(IStoreCallback storeCallback) { }

	// RVA: 0x13F76B4 Offset: 0x13F36B4 VA: 0x13F76B4 Slot: 5
	public void SetStoreConfiguration(IGooglePlayConfigurationInternal configuration) { }

	// RVA: 0x13F76BC Offset: 0x13F36BC VA: 0x13F76BC Slot: 6
	public void OnPurchaseSuccessful(IGooglePurchase purchase, string receipt, string purchaseToken) { }

	// RVA: 0x13F782C Offset: 0x13F382C VA: 0x13F782C Slot: 7
	public void OnPurchaseFailed(PurchaseFailureDescription purchaseFailureDescription) { }

	// RVA: 0x13F78E0 Offset: 0x13F38E0 VA: 0x13F78E0 Slot: 8
	public void NotifyDeferredPurchase(IGooglePurchase purchase, string receipt, string purchaseToken) { }

	// RVA: 0x13F7A24 Offset: 0x13F3A24 VA: 0x13F7A24 Slot: 9
	public void NotifyDeferredProrationUpgradeDowngradeSubscription(string sku) { }
}


// Namespace: UnityEngine.Purchasing
public enum GooglePlayReplacementMode // TypeDefIndex: 6675
{
	// Fields
	public int value__; // 0x0
	public const GooglePlayReplacementMode UnknownReplacementMode = 0;
	public const GooglePlayReplacementMode WithTimeProration = 1;
	public const GooglePlayReplacementMode ChargeProratedPrice = 2;
	public const GooglePlayReplacementMode WithoutProration = 3;
	public const GooglePlayReplacementMode ChargeFullPrice = 5;
	public const GooglePlayReplacementMode Deferred = 4;
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayStore : AbstractStore // TypeDefIndex: 6676
{
	// Fields
	private readonly IGooglePlayStoreRetrieveProductsService m_RetrieveProductsService; // 0x10
	private readonly IGooglePlayStorePurchaseService m_StorePurchaseService; // 0x18
	private readonly IGoogleFetchPurchases m_FetchPurchases; // 0x20
	private readonly IGooglePlayStoreFinishTransactionService m_FinishTransactionService; // 0x28
	private readonly IGooglePurchaseCallback m_GooglePurchaseCallback; // 0x30
	private readonly IGooglePlayStoreExtensionsInternal m_GooglePlayStoreExtensions; // 0x38
	private readonly IGooglePlayConfigurationInternal m_GooglePlayConfigurationInternal; // 0x40
	private readonly IUtil m_Util; // 0x48

	// Methods

	// RVA: 0x13F7CFC Offset: 0x13F3CFC VA: 0x13F7CFC
	public void .ctor(IGooglePlayStoreRetrieveProductsService retrieveProductsService, IGooglePlayStorePurchaseService storePurchaseService, IGoogleFetchPurchases fetchPurchases, IGooglePlayStoreFinishTransactionService transactionService, IGooglePurchaseCallback googlePurchaseCallback, IGooglePlayConfigurationInternal googlePlayConfigurationInternal, IGooglePlayStoreExtensionsInternal googlePlayStoreExtensions, IUtil util) { }

	// RVA: 0x13F7D64 Offset: 0x13F3D64 VA: 0x13F7D64 Slot: 8
	public override void Initialize(IStoreCallback callback) { }

	// RVA: 0x13F8050 Offset: 0x13F4050 VA: 0x13F8050 Slot: 9
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products) { }

	// RVA: 0x13F81D0 Offset: 0x13F41D0 VA: 0x13F81D0
	private bool HasInitiallyRetrievedProducts() { }

	// RVA: 0x13F810C Offset: 0x13F410C VA: 0x13F810C
	private bool ShouldFetchPurchasesNext() { }

	// RVA: 0x13F8274 Offset: 0x13F4274 VA: 0x13F8274 Slot: 10
	public override void Purchase(ProductDefinition product, string dummy) { }

	// RVA: 0x13F831C Offset: 0x13F431C VA: 0x13F831C Slot: 11
	public override void FinishTransaction(ProductDefinition product, string transactionId) { }

	// RVA: 0x13F83D8 Offset: 0x13F43D8 VA: 0x13F83D8
	public void OnPause(bool isPaused) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayStoreExtensions.<>c__DisplayClass13_0 // TypeDefIndex: 6677
{
	// Fields
	public Action<bool, string> callback; // 0x10

	// Methods

	// RVA: 0x13F8698 Offset: 0x13F4698 VA: 0x13F8698
	public void .ctor() { }

	// RVA: 0x13F8B70 Offset: 0x13F4B70 VA: 0x13F8B70
	internal void <RestoreTransactions>b__0(List<IGooglePurchase> _) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayStoreExtensions : IGooglePlayStoreExtensions, IStoreExtension, IGooglePlayStoreExtensionsInternal // TypeDefIndex: 6678
{
	// Fields
	private readonly IGooglePlayStoreService m_GooglePlayStoreService; // 0x10
	private readonly IGooglePurchaseStateEnumProvider m_GooglePurchaseStateEnumProvider; // 0x18
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x20
	private readonly ILogger m_Logger; // 0x28
	private IStoreCallback m_StoreCallback; // 0x30

	// Methods

	// RVA: 0x13F8508 Offset: 0x13F4508 VA: 0x13F8508
	internal void .ctor(IGooglePlayStoreService googlePlayStoreService, IGooglePurchaseStateEnumProvider googlePurchaseStateEnumProvider, ILogger logger, ITelemetryDiagnostics telemetryDiagnostics) { }

	// RVA: 0x13F8548 Offset: 0x13F4548 VA: 0x13F8548 Slot: 7
	public virtual void RestoreTransactions(Action<bool, string> callback) { }

	// RVA: 0x13F86A0 Offset: 0x13F46A0 VA: 0x13F86A0 Slot: 6
	public void SetStoreCallback(IStoreCallback storeCallback) { }

	// RVA: 0x13F86A8 Offset: 0x13F46A8 VA: 0x13F86A8 Slot: 5
	public bool IsPurchasedProductDeferred(Product product) { }

	// RVA: 0x13F8860 Offset: 0x13F4860 VA: 0x13F8860
	private bool TryIsPurchasedProductDeferred(Product product) { }

	// RVA: 0x13F8884 Offset: 0x13F4884 VA: 0x13F8884 Slot: 8
	public GooglePurchaseState GetPurchaseState(Product product) { }

	// RVA: 0x13F8A8C Offset: 0x13F4A8C VA: 0x13F8A8C
	private IGooglePurchase GooglePurchaseFromProduct(Product product) { }
}


// Namespace: UnityEngine.Purchasing
public interface IGooglePlayConfiguration : IStoreConfiguration // TypeDefIndex: 6679
{}


// Namespace: UnityEngine.Purchasing
internal interface IGooglePlayConfigurationInternal // TypeDefIndex: 6680
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void NotifyInitializationConnectionFailed();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void NotifyDeferredPurchase(IStoreCallback storeCallback, IGooglePurchase purchase, string receipt, string transactionId);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void NotifyDeferredProrationUpgradeDowngradeSubscription(IStoreCallback storeCallback, string productId);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool IsFetchPurchasesAtInitializeSkipped();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool DoesRetrievePurchasesExcludeDeferred();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void NotifyQueryProductDetailsFailed(int retryCount);
}


// Namespace: UnityEngine.Purchasing
public interface IGooglePlayStoreExtensions : IStoreExtension // TypeDefIndex: 6681
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RestoreTransactions(Action<bool, string> callback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool IsPurchasedProductDeferred(Product product);
}


// Namespace: UnityEngine.Purchasing
internal interface IGooglePlayStoreExtensionsInternal // TypeDefIndex: 6682
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetStoreCallback(IStoreCallback storeCallback);
}


// Namespace: UnityEngine.Purchasing
internal interface IGoogleFetchPurchases // TypeDefIndex: 6683
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetStoreCallback(IStoreCallback storeCallback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void FetchPurchases();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void FetchPurchases(Action<List<Product>> onQueryPurchaseSucceed);
}


// Namespace: UnityEngine.Purchasing
internal interface IGooglePlayStoreFinishTransactionService // TypeDefIndex: 6684
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetStoreCallback(IStoreCallback storeCallback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void FinishTransaction(ProductDefinition product, string purchaseToken);
}


// Namespace: UnityEngine.Purchasing
internal interface IGooglePlayStorePurchaseService // TypeDefIndex: 6685
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Purchase(ProductDefinition product);
}


// Namespace: UnityEngine.Purchasing
internal interface IGooglePlayStoreRetrieveProductsService // TypeDefIndex: 6686
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetStoreCallback(IStoreCallback storeCallback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, bool wantPurchases);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ResumeConnection();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool HasInitiallyRetrievedProducts();
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedGooglePlayStoreExtensions.<>c__DisplayClass4_0 // TypeDefIndex: 6687
{
	// Fields
	public MetricizedGooglePlayStoreExtensions <>4__this; // 0x10
	public Action<bool, string> callback; // 0x18

	// Methods

	// RVA: 0x13F8D50 Offset: 0x13F4D50 VA: 0x13F8D50
	public void .ctor() { }

	// RVA: 0x13F8D5C Offset: 0x13F4D5C VA: 0x13F8D5C
	internal void <RestoreTransactions>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class MetricizedGooglePlayStoreExtensions : GooglePlayStoreExtensions // TypeDefIndex: 6688
{
	// Fields
	private readonly ITelemetryMetricsService m_TelemetryMetricsService; // 0x38

	// Methods

	// RVA: 0x13F8BA4 Offset: 0x13F4BA4 VA: 0x13F8BA4
	internal void .ctor(IGooglePlayStoreService googlePlayStoreService, IGooglePurchaseStateEnumProvider googlePurchaseStateEnumProvider, ILogger logger, ITelemetryDiagnostics telemetryDiagnostics, ITelemetryMetricsService telemetryMetricsService) { }

	// RVA: 0x13F8BF4 Offset: 0x13F4BF4 VA: 0x13F8BF4 Slot: 7
	public override void RestoreTransactions(Action<bool, string> callback) { }

	[DebuggerHidden]
	[CompilerGenerated]
	// RVA: 0x13F8D58 Offset: 0x13F4D58 VA: 0x13F8D58
	private void <>n__2(Action<bool, string> callback) { }
}


// Namespace: UnityEngine.Purchasing
public class GoogleProductMetadata : ProductMetadata // TypeDefIndex: 6689
{
	// Fields
	[CompilerGenerated]
	private string <originalJson>k__BackingField; // 0x40
	[CompilerGenerated]
	private string <subscriptionPeriod>k__BackingField; // 0x48
	[CompilerGenerated]
	private string <freeTrialPeriod>k__BackingField; // 0x50
	[CompilerGenerated]
	private string <introductoryPrice>k__BackingField; // 0x58
	[CompilerGenerated]
	private string <introductoryPricePeriod>k__BackingField; // 0x60
	[CompilerGenerated]
	private int <introductoryPriceCycles>k__BackingField; // 0x68

	// Properties
	public string originalJson { get; set; }
	internal string subscriptionPeriod { set; }
	internal string freeTrialPeriod { set; }
	internal string introductoryPrice { set; }
	internal string introductoryPricePeriod { set; }
	internal int introductoryPriceCycles { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13F8D7C Offset: 0x13F4D7C VA: 0x13F8D7C
	public string get_originalJson() { }

	[CompilerGenerated]
	// RVA: 0x13F8D84 Offset: 0x13F4D84 VA: 0x13F8D84
	internal void set_originalJson(string value) { }

	[CompilerGenerated]
	// RVA: 0x13F8D8C Offset: 0x13F4D8C VA: 0x13F8D8C
	internal void set_subscriptionPeriod(string value) { }

	[CompilerGenerated]
	// RVA: 0x13F8D94 Offset: 0x13F4D94 VA: 0x13F8D94
	internal void set_freeTrialPeriod(string value) { }

	[CompilerGenerated]
	// RVA: 0x13F8D9C Offset: 0x13F4D9C VA: 0x13F8D9C
	internal void set_introductoryPrice(string value) { }

	[CompilerGenerated]
	// RVA: 0x13F8DA4 Offset: 0x13F4DA4 VA: 0x13F8DA4
	internal void set_introductoryPricePeriod(string value) { }

	[CompilerGenerated]
	// RVA: 0x13F8DAC Offset: 0x13F4DAC VA: 0x13F8DAC
	internal void set_introductoryPriceCycles(int value) { }

	// RVA: 0x13F8DB4 Offset: 0x13F4DB4 VA: 0x13F8DB4
	internal void .ctor(string priceString, string title, string description, string currencyCode, Decimal localizedPrice) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class GoogleFetchPurchases.<>c // TypeDefIndex: 6690
{
	// Fields
	public static readonly GoogleFetchPurchases.<>c <>9; // 0x0
	public static Func<IGooglePurchase, bool> <>9__11_0; // 0x8
	public static Func<IGooglePurchase, bool> <>9__12_0; // 0x10

	// Methods

	// RVA: 0x13F9C70 Offset: 0x13F5C70 VA: 0x13F9C70
	private static void .cctor() { }

	// RVA: 0x13F9CCC Offset: 0x13F5CCC VA: 0x13F9CCC
	public void .ctor() { }

	// RVA: 0x13F9CD4 Offset: 0x13F5CD4 VA: 0x13F9CD4
	internal bool <PurchaseIsPurchased>b__11_0(IGooglePurchase purchase) { }

	// RVA: 0x13F9D74 Offset: 0x13F5D74 VA: 0x13F9D74
	internal bool <PurchaseIsPending>b__12_0(IGooglePurchase purchase) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleFetchPurchases.<>c__DisplayClass10_0 // TypeDefIndex: 6691
{
	// Fields
	public GoogleFetchPurchases <>4__this; // 0x10
	public List<IGooglePurchase> deferredPurchases; // 0x18

	// Methods

	// RVA: 0x13F9684 Offset: 0x13F5684 VA: 0x13F9684
	public void .ctor() { }

	// RVA: 0x13F9E14 Offset: 0x13F5E14 VA: 0x13F9E14
	internal void <OnFetchedPurchase>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleFetchPurchases.<>c__DisplayClass6_0 // TypeDefIndex: 6692
{
	// Fields
	public Action<List<Product>> onQueryPurchaseSucceed; // 0x10
	public GoogleFetchPurchases <>4__this; // 0x18

	// Methods

	// RVA: 0x13F9010 Offset: 0x13F5010 VA: 0x13F9010
	public void .ctor() { }

	// RVA: 0x13F9E34 Offset: 0x13F5E34 VA: 0x13F9E34
	internal void <FetchPurchases>b__0(List<IGooglePurchase> googlePurchases) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleFetchPurchases.<>c__DisplayClass8_0 // TypeDefIndex: 6693
{
	// Fields
	public GoogleFetchPurchases <>4__this; // 0x10
	public IGooglePurchase purchase; // 0x18

	// Methods

	// RVA: 0x13F92C4 Offset: 0x13F52C4 VA: 0x13F92C4
	public void .ctor() { }

	// RVA: 0x13F9E6C Offset: 0x13F5E6C VA: 0x13F9E6C
	internal Product <BuildProductsFromPurchase>b__0(string sku) { }

	// RVA: 0x13F9E94 Offset: 0x13F5E94 VA: 0x13F9E94
	internal Product <BuildProductsFromPurchase>b__1(Product product) { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleFetchPurchases : IGoogleFetchPurchases // TypeDefIndex: 6694
{
	// Fields
	private readonly IGooglePlayStoreService m_GooglePlayStoreService; // 0x10
	private IStoreCallback m_StoreCallback; // 0x18
	private IUtil m_Util; // 0x20

	// Methods

	// RVA: 0x13F8DBC Offset: 0x13F4DBC VA: 0x13F8DBC
	internal void .ctor(IGooglePlayStoreService googlePlayStoreService, IUtil util) { }

	// RVA: 0x13F8DEC Offset: 0x13F4DEC VA: 0x13F8DEC Slot: 4
	public void SetStoreCallback(IStoreCallback storeCallback) { }

	// RVA: 0x13F8DF4 Offset: 0x13F4DF4 VA: 0x13F8DF4 Slot: 5
	public void FetchPurchases() { }

	// RVA: 0x13F8EE8 Offset: 0x13F4EE8 VA: 0x13F8EE8 Slot: 6
	public void FetchPurchases(Action<List<Product>> onQueryPurchaseSucceed) { }

	// RVA: 0x13F9018 Offset: 0x13F5018 VA: 0x13F9018
	private List<Product> FillProductsWithPurchases(IEnumerable<IGooglePurchase> purchases) { }

	// RVA: 0x13F90D8 Offset: 0x13F50D8 VA: 0x13F90D8
	private IEnumerable<Product> BuildProductsFromPurchase(IGooglePurchase purchase) { }

	// RVA: 0x13F92CC Offset: 0x13F52CC VA: 0x13F92CC
	private static Product CompleteProductInfoWithPurchase(Product product, IGooglePurchase purchase) { }

	// RVA: 0x13F9430 Offset: 0x13F5430 VA: 0x13F9430
	private void OnFetchedPurchase(List<IGooglePurchase> purchases) { }

	// RVA: 0x13F968C Offset: 0x13F568C VA: 0x13F968C
	private static Func<IGooglePurchase, bool> PurchaseIsPurchased() { }

	// RVA: 0x13F9754 Offset: 0x13F5754 VA: 0x13F9754
	private static Func<IGooglePurchase, bool> PurchaseIsPending() { }

	// RVA: 0x13F981C Offset: 0x13F581C VA: 0x13F981C
	private void UpdateDeferredProductsByPurchases(List<IGooglePurchase> deferredPurchases) { }

	// RVA: 0x13F9974 Offset: 0x13F5974 VA: 0x13F9974
	private void UpdateDeferredProductsByPurchase(IGooglePurchase deferredPurchase) { }

	// RVA: 0x13F9B40 Offset: 0x13F5B40 VA: 0x13F9B40
	private void UpdateDeferredProduct(IGooglePurchase deferredPurchase, string sku) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayStoreFinishTransactionService.<>c__DisplayClass7_0 // TypeDefIndex: 6695
{
	// Fields
	public GooglePlayStoreFinishTransactionService <>4__this; // 0x10
	public ProductDefinition product; // 0x18

	// Methods

	// RVA: 0x13FA064 Offset: 0x13F6064 VA: 0x13FA064
	public void .ctor() { }

	// RVA: 0x13FA8B0 Offset: 0x13F68B0 VA: 0x13FA8B0
	internal void <FinishTransaction>b__0(IGoogleBillingResult billingResult, IGooglePurchase googlePurchase) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayStoreFinishTransactionService : IGooglePlayStoreFinishTransactionService // TypeDefIndex: 6696
{
	// Fields
	private readonly HashSet<string> m_ProcessedPurchaseToken; // 0x10
	private readonly IGooglePlayStoreService m_GooglePlayStoreService; // 0x18
	private IStoreCallback m_StoreCallback; // 0x20
	private int m_RetryCount; // 0x28

	// Methods

	// RVA: 0x13F9EA4 Offset: 0x13F5EA4 VA: 0x13F9EA4
	internal void .ctor(IGooglePlayStoreService googlePlayStoreService) { }

	// RVA: 0x13F9F28 Offset: 0x13F5F28 VA: 0x13F9F28 Slot: 4
	public void SetStoreCallback(IStoreCallback storeCallback) { }

	// RVA: 0x13F9F30 Offset: 0x13F5F30 VA: 0x13F9F30 Slot: 5
	public void FinishTransaction(ProductDefinition product, string purchaseToken) { }

	// RVA: 0x13FA06C Offset: 0x13F606C VA: 0x13FA06C
	private void HandleFinishTransaction(ProductDefinition product, IGoogleBillingResult billingResult, IGooglePurchase purchase) { }

	// RVA: 0x13FA518 Offset: 0x13F6518 VA: 0x13FA518
	private void CallPurchaseSucceededUpdateReceipt(IGooglePurchase googlePurchase) { }

	// RVA: 0x13FA740 Offset: 0x13F6740 VA: 0x13FA740
	private static bool IsResponseCodeInRecoverableState(IGoogleBillingResult billingResult) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayStorePurchaseService : IGooglePlayStorePurchaseService // TypeDefIndex: 6697
{
	// Fields
	private readonly IGooglePlayStoreService m_GooglePlayStoreService; // 0x10

	// Methods

	// RVA: 0x13FA8D8 Offset: 0x13F68D8 VA: 0x13FA8D8
	internal void .ctor(IGooglePlayStoreService googlePlayStoreService) { }

	// RVA: 0x13FA900 Offset: 0x13F6900 VA: 0x13FA900 Slot: 4
	public void Purchase(ProductDefinition product) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayStoreRetrieveProductsService.<>c__DisplayClass10_0 // TypeDefIndex: 6698
{
	// Fields
	public GooglePlayStoreRetrieveProductsService <>4__this; // 0x10
	public List<ProductDescription> retrievedProducts; // 0x18

	// Methods

	// RVA: 0x13FAE0C Offset: 0x13F6E0C VA: 0x13FAE0C
	public void .ctor() { }

	// RVA: 0x13FB850 Offset: 0x13F7850 VA: 0x13FB850
	internal void <OnProductsRetrievedWithPurchaseFetch>b__0(List<Product> purchaseProducts) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePlayStoreRetrieveProductsService.<>c__DisplayClass14_0 // TypeDefIndex: 6699
{
	// Fields
	public Product purchaseProduct; // 0x10

	// Methods

	// RVA: 0x13FB794 Offset: 0x13F7794 VA: 0x13FB794
	public void .ctor() { }

	// RVA: 0x13FB928 Offset: 0x13F7928 VA: 0x13FB928
	internal bool <MakePurchasesIntoProducts>b__0(ProductDescription product) { }
}


// Namespace: UnityEngine.Purchasing
internal class GooglePlayStoreRetrieveProductsService : IGooglePlayStoreRetrieveProductsService // TypeDefIndex: 6700
{
	// Fields
	private readonly IGooglePlayStoreService m_GooglePlayStoreService; // 0x10
	private readonly IGoogleFetchPurchases m_GoogleFetchPurchases; // 0x18
	private IStoreCallback m_StoreCallback; // 0x20
	private readonly IGooglePlayConfigurationInternal m_GooglePlayConfigurationInternal; // 0x28
	private readonly IGooglePlayStoreExtensions m_GooglePlayStoreExtensions; // 0x30
	private bool m_HasInitiallyRetrievedProducts; // 0x38
	private bool m_RetrieveProductsFailed; // 0x39

	// Methods

	// RVA: 0x13FA9AC Offset: 0x13F69AC VA: 0x13FA9AC
	internal void .ctor(IGooglePlayStoreService googlePlayStoreService, IGoogleFetchPurchases googleFetchPurchases, IGooglePlayConfigurationInternal googlePlayConfigurationInternal, IGooglePlayStoreExtensions googlePlayStoreExtensions) { }

	// RVA: 0x13FA9F0 Offset: 0x13F69F0 VA: 0x13FA9F0 Slot: 4
	public void SetStoreCallback(IStoreCallback storeCallback) { }

	// RVA: 0x13FA9F8 Offset: 0x13F69F8 VA: 0x13FA9F8 Slot: 5
	public void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, bool wantPurchases = True) { }

	// RVA: 0x13FABD8 Offset: 0x13F6BD8 VA: 0x13FABD8
	private void OnProductsRetrievedWithPurchaseFetch(List<ProductDescription> retrievedProducts, IGoogleBillingResult billingResult) { }

	// RVA: 0x13FAFCC Offset: 0x13F6FCC VA: 0x13FAFCC
	private void OnProductsRetrieved(List<ProductDescription> retrievedProducts, IGoogleBillingResult billingResult) { }

	// RVA: 0x13FAE14 Offset: 0x13F6E14 VA: 0x13FAE14
	private void OnRetrieveProductsFailed(GoogleRetrieveProductsFailureReason reason, GoogleBillingResponseCode responseCode) { }

	// RVA: 0x13FB19C Offset: 0x13F719C VA: 0x13FB19C Slot: 6
	public void ResumeConnection() { }

	// RVA: 0x13FB240 Offset: 0x13F7240 VA: 0x13FB240
	private List<ProductDescription> MakePurchasesIntoProducts(List<ProductDescription> retrievedProducts, IEnumerable<Product> purchaseProducts) { }

	// RVA: 0x13FB79C Offset: 0x13F779C VA: 0x13FB79C
	private bool IsPurchasedProductDeferred(Product product) { }

	// RVA: 0x13FB848 Offset: 0x13F7848 VA: 0x13FB848 Slot: 7
	public bool HasInitiallyRetrievedProducts() { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
public static class StoreCallbackExtensionMethods // TypeDefIndex: 6701
{
	// Methods

	[Extension]
	// RVA: 0x13F72D8 Offset: 0x13F32D8 VA: 0x13F72D8
	public static Product FindProductById(IStoreCallback storeCallback, string sku) { }
}


// Namespace: UnityEngine.Purchasing
public interface IAndroidStoreSelection : IStoreConfiguration // TypeDefIndex: 6702
{}


// Namespace: UnityEngine.Purchasing
internal interface IUnityCallback // TypeDefIndex: 6703
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnSetupFailed(string json);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnProductsRetrieved(string json);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnPurchaseSucceeded(string id, string receipt, string transactionID);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnPurchaseFailed(string json);
}


// Namespace: UnityEngine.Purchasing
internal class JavaBridge : AndroidJavaProxy, IUnityCallback // TypeDefIndex: 6704
{
	// Fields
	private readonly IUnityCallback forwardTo; // 0x20

	// Methods

	// RVA: 0x13FB958 Offset: 0x13F7958 VA: 0x13FB958
	public void .ctor(IUnityCallback forwardTo) { }

	// RVA: 0x13FB9DC Offset: 0x13F79DC VA: 0x13FB9DC
	public void .ctor(IUnityCallback forwardTo, string javaInterface) { }

	// RVA: 0x13FBA50 Offset: 0x13F7A50 VA: 0x13FBA50 Slot: 10
	public void OnSetupFailed(string json) { }

	// RVA: 0x13FBAF8 Offset: 0x13F7AF8 VA: 0x13FBAF8 Slot: 11
	public void OnProductsRetrieved(string json) { }

	// RVA: 0x13FBBA4 Offset: 0x13F7BA4 VA: 0x13FBBA4 Slot: 12
	public void OnPurchaseSucceeded(string id, string receipt, string transactionID) { }

	// RVA: 0x13FBC68 Offset: 0x13F7C68 VA: 0x13FBC68 Slot: 13
	public void OnPurchaseFailed(string json) { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
internal static class SerializationExtensions // TypeDefIndex: 6705
{
	// Methods

	[Extension]
	// RVA: 0x13EBB74 Offset: 0x13E7B74 VA: 0x13EBB74
	public static string TryGetString(Dictionary<string, object> dic, string key) { }
}


// Namespace: UnityEngine.Purchasing
internal class JSONSerializer // TypeDefIndex: 6706
{
	// Methods

	// RVA: 0x13FBD14 Offset: 0x13F7D14 VA: 0x13FBD14
	public static string SerializeProductDef(ProductDefinition product) { }

	// RVA: 0x13FC5CC Offset: 0x13F85CC VA: 0x13FC5CC
	public static string SerializeProductDefs(IEnumerable<ProductDefinition> products) { }

	// RVA: 0x13FC908 Offset: 0x13F8908 VA: 0x13FC908
	public static string SerializeProductDescs(IEnumerable<ProductDescription> products) { }

	// RVA: 0x13FCE48 Offset: 0x13F8E48 VA: 0x13FCE48
	public static PurchaseFailureDescription DeserializeFailureReason(string json) { }

	// RVA: 0x13FD1D8 Offset: 0x13F91D8 VA: 0x13FD1D8
	private static string BuildPurchaseFailureDescriptionMessage(Dictionary<string, object> dic) { }

	// RVA: 0x13FBD28 Offset: 0x13F7D28 VA: 0x13FBD28
	private static Dictionary<string, object> EncodeProductDef(ProductDefinition product) { }

	// RVA: 0x13FCC44 Offset: 0x13F8C44 VA: 0x13FCC44
	private static Dictionary<string, object> EncodeProductDesc(ProductDescription product) { }

	// RVA: 0x13FD2A0 Offset: 0x13F92A0 VA: 0x13FD2A0
	private static Dictionary<string, object> EncodeProductMeta(ProductMetadata product) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingStoreCallback.<>c__DisplayClass10_0 // TypeDefIndex: 6707
{
	// Fields
	public ScriptingStoreCallback <>4__this; // 0x10
	public PurchaseFailureDescription desc; // 0x18

	// Methods

	// RVA: 0x13FDB18 Offset: 0x13F9B18 VA: 0x13FDB18
	public void .ctor() { }

	// RVA: 0x13FDB20 Offset: 0x13F9B20 VA: 0x13FDB20
	internal void <OnPurchaseFailed>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingStoreCallback.<>c__DisplayClass6_0 // TypeDefIndex: 6708
{
	// Fields
	public ScriptingStoreCallback <>4__this; // 0x10
	public InitializationFailureReason reason; // 0x18
	public string message; // 0x20

	// Methods

	// RVA: 0x13FD644 Offset: 0x13F9644 VA: 0x13FD644
	public void .ctor() { }

	// RVA: 0x13FDBD4 Offset: 0x13F9BD4 VA: 0x13FDBD4
	internal void <OnSetupFailed>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingStoreCallback.<>c__DisplayClass7_0 // TypeDefIndex: 6709
{
	// Fields
	public ScriptingStoreCallback <>4__this; // 0x10
	public List<ProductDescription> products; // 0x18

	// Methods

	// RVA: 0x13FD774 Offset: 0x13F9774 VA: 0x13FD774
	public void .ctor() { }

	// RVA: 0x13FDC90 Offset: 0x13F9C90 VA: 0x13FDC90
	internal void <OnProductsRetrieved>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingStoreCallback.<>c__DisplayClass8_0 // TypeDefIndex: 6710
{
	// Fields
	public ScriptingStoreCallback <>4__this; // 0x10
	public string id; // 0x18
	public string receipt; // 0x20
	public string transactionID; // 0x28

	// Methods

	// RVA: 0x13FD8B8 Offset: 0x13F98B8 VA: 0x13FD8B8
	public void .ctor() { }

	// RVA: 0x13FDD44 Offset: 0x13F9D44 VA: 0x13FDD44
	internal void <OnPurchaseSucceeded>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingStoreCallback.<>c__DisplayClass9_0 // TypeDefIndex: 6711
{
	// Fields
	public ScriptingStoreCallback <>4__this; // 0x10
	public List<Product> purchasedProducts; // 0x18

	// Methods

	// RVA: 0x13FD9E8 Offset: 0x13F99E8 VA: 0x13FD9E8
	public void .ctor() { }

	// RVA: 0x13FDE0C Offset: 0x13F9E0C VA: 0x13FDE0C
	internal void <OnAllPurchasesRetrieved>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class ScriptingStoreCallback : IStoreCallback // TypeDefIndex: 6712
{
	// Fields
	private readonly IStoreCallback m_ForwardTo; // 0x10
	private readonly IUtil m_Util; // 0x18

	// Properties
	public ProductCollection products { get; }

	// Methods

	// RVA: 0x13F8024 Offset: 0x13F4024 VA: 0x13F8024
	public void .ctor(IStoreCallback forwardTo, IUtil util) { }

	// RVA: 0x13FD470 Offset: 0x13F9470 VA: 0x13FD470 Slot: 4
	public ProductCollection get_products() { }

	// RVA: 0x13FD510 Offset: 0x13F9510 VA: 0x13FD510 Slot: 5
	public void OnSetupFailed(InitializationFailureReason reason, string message) { }

	// RVA: 0x13FD64C Offset: 0x13F964C VA: 0x13FD64C Slot: 6
	public void OnProductsRetrieved(List<ProductDescription> products) { }

	// RVA: 0x13FD77C Offset: 0x13F977C VA: 0x13FD77C Slot: 7
	public void OnPurchaseSucceeded(string id, string receipt, string transactionID) { }

	// RVA: 0x13FD8C0 Offset: 0x13F98C0 VA: 0x13FD8C0 Slot: 8
	public void OnAllPurchasesRetrieved(List<Product> purchasedProducts) { }

	// RVA: 0x13FD9F0 Offset: 0x13F99F0 VA: 0x13FD9F0 Slot: 9
	public void OnPurchaseFailed(PurchaseFailureDescription desc) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingUnityCallback.<>c__DisplayClass3_0 // TypeDefIndex: 6713
{
	// Fields
	public ScriptingUnityCallback <>4__this; // 0x10
	public string json; // 0x18

	// Methods

	// RVA: 0x13FE014 Offset: 0x13FA014 VA: 0x13FE014
	public void .ctor() { }

	// RVA: 0x13FE3C0 Offset: 0x13FA3C0 VA: 0x13FE3C0
	internal void <OnSetupFailed>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingUnityCallback.<>c__DisplayClass4_0 // TypeDefIndex: 6714
{
	// Fields
	public ScriptingUnityCallback <>4__this; // 0x10
	public string json; // 0x18

	// Methods

	// RVA: 0x13FE144 Offset: 0x13FA144 VA: 0x13FE144
	public void .ctor() { }

	// RVA: 0x13FE470 Offset: 0x13FA470 VA: 0x13FE470
	internal void <OnProductsRetrieved>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingUnityCallback.<>c__DisplayClass5_0 // TypeDefIndex: 6715
{
	// Fields
	public ScriptingUnityCallback <>4__this; // 0x10
	public string id; // 0x18
	public string receipt; // 0x20
	public string transactionID; // 0x28

	// Methods

	// RVA: 0x13FE288 Offset: 0x13FA288 VA: 0x13FE288
	public void .ctor() { }

	// RVA: 0x13FE524 Offset: 0x13FA524 VA: 0x13FE524
	internal void <OnPurchaseSucceeded>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ScriptingUnityCallback.<>c__DisplayClass6_0 // TypeDefIndex: 6716
{
	// Fields
	public ScriptingUnityCallback <>4__this; // 0x10
	public string json; // 0x18

	// Methods

	// RVA: 0x13FE3B8 Offset: 0x13FA3B8 VA: 0x13FE3B8
	public void .ctor() { }

	// RVA: 0x13FE5EC Offset: 0x13FA5EC VA: 0x13FE5EC
	internal void <OnPurchaseFailed>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class ScriptingUnityCallback : IUnityCallback // TypeDefIndex: 6717
{
	// Fields
	private readonly IUnityCallback forwardTo; // 0x10
	private readonly IUtil util; // 0x18

	// Methods

	// RVA: 0x13FDEC0 Offset: 0x13F9EC0 VA: 0x13FDEC0
	public void .ctor(IUnityCallback forwardTo, IUtil util) { }

	// RVA: 0x13FDEEC Offset: 0x13F9EEC VA: 0x13FDEEC Slot: 4
	public void OnSetupFailed(string json) { }

	// RVA: 0x13FE01C Offset: 0x13FA01C VA: 0x13FE01C Slot: 5
	public void OnProductsRetrieved(string json) { }

	// RVA: 0x13FE14C Offset: 0x13FA14C VA: 0x13FE14C Slot: 6
	public void OnPurchaseSucceeded(string id, string receipt, string transactionID) { }

	// RVA: 0x13FE290 Offset: 0x13FA290 VA: 0x13FE290 Slot: 7
	public void OnPurchaseFailed(string json) { }
}


// Namespace: UnityEngine.Purchasing
[Obsolete("UDP support will be removed in the next major update of In-App Purchasing. Right now, the UDP SDK will still function normally in tandem with IAP.")]
public class FakeUDPExtension : IUDPExtensions, IStoreExtension // TypeDefIndex: 6718
{
	// Methods

	// RVA: 0x13FE6A0 Offset: 0x13FA6A0 VA: 0x13FE6A0
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal interface INativeUDPStore : INativeStore // TypeDefIndex: 6719
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(Action<bool, string> callback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Purchase(string productId, Action<bool, string> callback, string developerPayload);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, Action<bool, string> callback);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void FinishTransaction(ProductDefinition productDefinition, string transactionID);
}


// Namespace: UnityEngine.Purchasing
[Obsolete("UDP support will be removed in the next major update of In-App Purchasing. Right now, the UDP SDK will still function normally in tandem with IAP.")]
public interface IUDPExtensions : IStoreExtension // TypeDefIndex: 6720
{}


// Namespace: UnityEngine.Purchasing
[Obsolete("UDP support will be removed in the next major update of In-App Purchasing. Right now, the UDP SDK will still function normally in tandem with IAP.")]
public class UDP // TypeDefIndex: 6721
{
	// Properties
	public static string Name { get; }

	// Methods

	// RVA: 0x13FE6A8 Offset: 0x13FA6A8 VA: 0x13FE6A8
	public static string get_Name() { }
}


// Namespace: UnityEngine.Purchasing
internal class UDPBindings : INativeUDPStore, INativeStore // TypeDefIndex: 6722
{
	// Fields
	private readonly object m_Bridge; // 0x10
	private Action<bool, string> m_RetrieveProductsCallbackCache; // 0x18

	// Methods

	// RVA: 0x13FE7D4 Offset: 0x13FA7D4 VA: 0x13FE7D4
	public void .ctor() { }

	// RVA: 0x13FE990 Offset: 0x13FA990 VA: 0x13FE990 Slot: 4
	public void Initialize(Action<bool, string> callback) { }

	// RVA: 0x13FEAF8 Offset: 0x13FAAF8 VA: 0x13FEAF8 Slot: 5
	public void Purchase(string productId, Action<bool, string> callback, string developerPayload) { }

	// RVA: 0x13FECC0 Offset: 0x13FACC0 VA: 0x13FECC0 Slot: 6
	public void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, Action<bool, string> callback) { }

	// RVA: 0x13FF218 Offset: 0x13FB218 VA: 0x13FF218 Slot: 7
	public void FinishTransaction(ProductDefinition productDefinition, string transactionID) { }

	// RVA: 0x13FF380 Offset: 0x13FB380 VA: 0x13FF380
	private void OnInventoryQueried(bool success, object payload) { }

	// RVA: 0x14002F4 Offset: 0x13FC2F4 VA: 0x14002F4 Slot: 8
	public void RetrieveProducts(string json) { }

	// RVA: 0x140032C Offset: 0x13FC32C VA: 0x140032C Slot: 9
	public void Purchase(string productJSON, string developerPayload) { }

	// RVA: 0x1400364 Offset: 0x13FC364 VA: 0x1400364 Slot: 10
	public void FinishTransaction(string productJSON, string transactionID) { }

	// RVA: 0x14000F4 Offset: 0x13FC0F4 VA: 0x14000F4
	internal static Dictionary<string, string> StringPropertyToDictionary(object info) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UDPImpl.<>c__DisplayClass10_0 // TypeDefIndex: 6723
{
	// Fields
	public UDPImpl <>4__this; // 0x10
	public ReadOnlyCollection<ProductDefinition> products; // 0x18

	// Methods

	// RVA: 0x1400584 Offset: 0x13FC584 VA: 0x1400584
	public void .ctor() { }

	// RVA: 0x1400AA8 Offset: 0x13FCAA8 VA: 0x1400AA8
	internal void <RetrieveProducts>g__retrieveCallback|0(bool success, string json) { }

	// RVA: 0x1400B60 Offset: 0x13FCB60 VA: 0x1400B60
	internal void <RetrieveProducts>b__1(bool success, string message) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UDPImpl.<>c__DisplayClass11_0 // TypeDefIndex: 6724
{
	// Fields
	public ProductDefinition product; // 0x10
	public UDPImpl <>4__this; // 0x18

	// Methods

	// RVA: 0x14006C8 Offset: 0x13FC6C8 VA: 0x14006C8
	public void .ctor() { }

	// RVA: 0x1400ED0 Offset: 0x13FCED0 VA: 0x1400ED0
	internal void <Purchase>b__0(bool success, string message) { }
}


// Namespace: UnityEngine.Purchasing
internal class UDPImpl : JSONStore, IUDPExtensions, IStoreExtension // TypeDefIndex: 6725
{
	// Fields
	private INativeUDPStore m_Bindings; // 0x48
	private object m_UserInfo; // 0x50
	private string m_LastInitError; // 0x58
	private bool m_Initialized; // 0x60
	private Action<Product> m_DeferredCallback; // 0x68

	// Methods

	// RVA: 0x140039C Offset: 0x13FC39C VA: 0x140039C
	public void SetNativeStore(INativeUDPStore nativeUdpStore) { }

	// RVA: 0x14003A4 Offset: 0x13FC3A4 VA: 0x14003A4 Slot: 8
	public override void Initialize(IStoreCallback callback) { }

	// RVA: 0x14003AC Offset: 0x13FC3AC VA: 0x14003AC Slot: 9
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products) { }

	// RVA: 0x140058C Offset: 0x13FC58C VA: 0x140058C Slot: 10
	public override void Purchase(ProductDefinition product, string developerPayload) { }

	// RVA: 0x14006D0 Offset: 0x13FC6D0 VA: 0x14006D0
	private void OnPurchaseDeferred(string productId) { }

	// RVA: 0x14007DC Offset: 0x13FC7DC VA: 0x14007DC Slot: 11
	public override void FinishTransaction(ProductDefinition product, string transactionId) { }

	// RVA: 0x14008B8 Offset: 0x13FC8B8 VA: 0x14008B8
	private static void DictionaryToStringProperty(Dictionary<string, object> dic, object info) { }

	// RVA: 0x1400A38 Offset: 0x13FCA38 VA: 0x1400A38
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UDPReflectionUtils.<>c__DisplayClass6_0 // TypeDefIndex: 6726
{
	// Fields
	public Assembly assembly; // 0x10

	// Methods

	// RVA: 0x1401DD8 Offset: 0x13FDDD8 VA: 0x1401DD8
	public void .ctor() { }

	// RVA: 0x1402084 Offset: 0x13FE084 VA: 0x1402084
	internal bool <GetTypeByName>b__0(string x) { }
}


// Namespace: UnityEngine.Purchasing
internal class UDPReflectionUtils // TypeDefIndex: 6727
{
	// Fields
	private static readonly Dictionary<Assembly, Type[]> s_assemblyTypeCache; // 0x0
	private static readonly Dictionary<string, Type> s_typeCache; // 0x8
	private static readonly string[] k_whiteListedAssemblies; // 0x10

	// Methods

	// RVA: 0x140159C Offset: 0x13FD59C VA: 0x140159C
	internal static Type GetTypeByName(string typeName) { }

	// RVA: 0x1401DB8 Offset: 0x13FDDB8 VA: 0x1401DB8
	private static IEnumerable<Assembly> GetAllAssemblies() { }

	// RVA: 0x1401DE0 Offset: 0x13FDDE0 VA: 0x1401DE0
	private static IEnumerable<Type> GetTypes(Assembly assembly) { }

	// RVA: 0x1401EE0 Offset: 0x13FDEE0 VA: 0x1401EE0
	private static void .cctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class InventoryInterface // TypeDefIndex: 6728
{
	// Fields
	private static Type s_typeCache; // 0x0

	// Methods

	// RVA: 0x13FFD70 Offset: 0x13FBD70 VA: 0x13FFD70
	internal static Type GetClassType() { }

	// RVA: 0x13FFE48 Offset: 0x13FBE48 VA: 0x13FFE48
	internal static MethodInfo GetProductListMethod() { }

	// RVA: 0x14000A8 Offset: 0x13FC0A8 VA: 0x14000A8
	internal static MethodInfo GetPurchaseInfoMethod() { }

	// RVA: 0x140005C Offset: 0x13FC05C VA: 0x140005C
	internal static MethodInfo HasPurchaseMethod() { }
}


// Namespace: UnityEngine.Purchasing
internal class ProductInfoInterface // TypeDefIndex: 6729
{
	// Fields
	private static Type s_typeCache; // 0x0

	// Methods

	// RVA: 0x14020B8 Offset: 0x13FE0B8 VA: 0x14020B8
	private static Type GetClassType() { }

	// RVA: 0x13FFF78 Offset: 0x13FBF78 VA: 0x13FFF78
	public static PropertyInfo GetCurrencyProp() { }

	// RVA: 0x13FFF2C Offset: 0x13FBF2C VA: 0x13FFF2C
	public static PropertyInfo GetDescriptionProp() { }

	// RVA: 0x13FFE94 Offset: 0x13FBE94 VA: 0x13FFE94
	public static PropertyInfo GetPriceProp() { }

	// RVA: 0x13FFFC4 Offset: 0x13FBFC4 VA: 0x13FFFC4
	public static PropertyInfo GetPriceAmountMicrosProp() { }

	// RVA: 0x1400010 Offset: 0x13FC010 VA: 0x1400010
	public static PropertyInfo GetProductIdProp() { }

	// RVA: 0x13FFEE0 Offset: 0x13FBEE0 VA: 0x13FFEE0
	public static PropertyInfo GetTitleProp() { }
}


// Namespace: UnityEngine.Purchasing
internal class StoreServiceInterface // TypeDefIndex: 6730
{
	// Fields
	private static Type s_typeCache; // 0x0

	// Methods

	// RVA: 0x1402190 Offset: 0x13FE190 VA: 0x1402190
	internal static Type GetClassType() { }

	// RVA: 0x1402268 Offset: 0x13FE268 VA: 0x1402268
	private static PropertyInfo GetNameProp() { }

	// RVA: 0x13FE768 Offset: 0x13FA768 VA: 0x13FE768
	internal static string GetName() { }
}


// Namespace: UnityEngine.Purchasing
internal class UdpIapBridgeInterface // TypeDefIndex: 6731
{
	// Fields
	private static Type s_typeCache; // 0x0

	// Methods

	// RVA: 0x13FE8B8 Offset: 0x13FA8B8 VA: 0x13FE8B8
	internal static Type GetClassType() { }

	// RVA: 0x13FEAAC Offset: 0x13FAAAC VA: 0x13FEAAC
	internal static MethodInfo GetInitMethod() { }

	// RVA: 0x13FEC74 Offset: 0x13FAC74 VA: 0x13FEC74
	internal static MethodInfo GetPurchaseMethod() { }

	// RVA: 0x13FF1CC Offset: 0x13FB1CC VA: 0x13FF1CC
	internal static MethodInfo GetRetrieveProductsMethod() { }

	// RVA: 0x13FF334 Offset: 0x13FB334 VA: 0x13FF334
	internal static MethodInfo GetFinishTransactionMethod() { }
}


// Namespace: UnityEngine.Purchasing
internal class UserInfoInterface // TypeDefIndex: 6732
{
	// Fields
	private static Type s_typeCache; // 0x0

	// Methods

	// RVA: 0x1400DF8 Offset: 0x13FCDF8 VA: 0x1400DF8
	internal static Type GetClassType() { }
}


// Namespace: UnityEngine.Purchasing
internal class AppleJsonProductDescriptionsDeserializer : JsonProductDescriptionsDeserializer // TypeDefIndex: 6733
{
	// Methods

	// RVA: 0x14022B8 Offset: 0x13FE2B8 VA: 0x14022B8 Slot: 4
	internal override ProductMetadata DeserializeMetadata(Dictionary<string, object> data) { }

	// RVA: 0x14023C8 Offset: 0x13FE3C8 VA: 0x14023C8
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class AppleProductMetadata : ProductMetadata // TypeDefIndex: 6734
{
	// Fields
	[CompilerGenerated]
	private readonly bool <isFamilyShareable>k__BackingField; // 0x40

	// Methods

	// RVA: 0x1402350 Offset: 0x13FE350 VA: 0x1402350
	internal void .ctor(ProductMetadata baseProductMetadata, string isFamilyShareable) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class AppleStoreImpl.<>c // TypeDefIndex: 6735
{
	// Fields
	public static readonly AppleStoreImpl.<>c <>9; // 0x0
	public static Comparison<AppleInAppPurchaseReceipt> <>9__39_1; // 0x8
	public static Func<KeyValuePair<string, object>, string> <>9__62_0; // 0x10
	public static Func<KeyValuePair<string, object>, string> <>9__62_1; // 0x18

	// Methods

	// RVA: 0x1405E28 Offset: 0x1401E28 VA: 0x1405E28
	private static void .cctor() { }

	// RVA: 0x1405E84 Offset: 0x1401E84 VA: 0x1405E84
	public void .ctor() { }

	// RVA: 0x1405E8C Offset: 0x1401E8C VA: 0x1405E8C
	internal int <FindMostRecentReceipt>b__39_1(AppleInAppPurchaseReceipt b, AppleInAppPurchaseReceipt a) { }

	// RVA: 0x1405F10 Offset: 0x1401F10 VA: 0x1405F10
	internal string <OnFetchStorePromotionVisibilitySucceeded>b__62_0(KeyValuePair<string, object> k) { }

	// RVA: 0x1405F68 Offset: 0x1401F68 VA: 0x1405F68
	internal string <OnFetchStorePromotionVisibilitySucceeded>b__62_1(KeyValuePair<string, object> k) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class AppleStoreImpl.<>c__DisplayClass39_0 // TypeDefIndex: 6736
{
	// Fields
	public string productId; // 0x10

	// Methods

	// RVA: 0x1403D98 Offset: 0x13FFD98 VA: 0x1403D98
	public void .ctor() { }

	// RVA: 0x1405FD8 Offset: 0x1401FD8 VA: 0x1405FD8
	internal bool <FindMostRecentReceipt>b__0(AppleInAppPurchaseReceipt r) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class AppleStoreImpl.<>c__DisplayClass64_0 // TypeDefIndex: 6737
{
	// Fields
	public string subject; // 0x10
	public string payload; // 0x18
	public string receipt; // 0x20
	public string transactionId; // 0x28
	public string originalTransactionId; // 0x30
	public bool isRestored; // 0x38

	// Methods

	// RVA: 0x1404C78 Offset: 0x1400C78 VA: 0x1404C78
	public void .ctor() { }

	// RVA: 0x1405FFC Offset: 0x1401FFC VA: 0x1405FFC
	internal void <MessageCallback>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class AppleStoreImpl : JSONStore, IAppleExtensions, IStoreExtension, IAppleConfiguration, IStoreConfiguration // TypeDefIndex: 6738
{
	// Fields
	private Action<Product> m_DeferredCallback; // 0x48
	private Action<List<Product>> m_RevokedCallback; // 0x50
	private Action<string> m_RefreshReceiptError; // 0x58
	private Action<string> m_RefreshReceiptSuccess; // 0x60
	private Action<bool> m_ObsoleteRestoreCallback; // 0x68
	private Action<bool, string> m_RestoreCallback; // 0x70
	private Action m_FetchStorePromotionOrderError; // 0x78
	private Action<List<Product>> m_FetchStorePromotionOrderSuccess; // 0x80
	private Action<Product> m_PromotionalPurchaseCallback; // 0x88
	private Action m_FetchStorePromotionVisibilityError; // 0x90
	private Action<string, AppleStorePromotionVisibility> m_FetchStorePromotionVisibilitySuccess; // 0x98
	private INativeAppleStore m_Native; // 0xA0
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0xA8
	private static IUtil s_Util; // 0x0
	private static AppleStoreImpl s_Instance; // 0x8
	private string m_CachedAppReceipt; // 0xB0
	private Nullable<double> m_CachedAppReceiptModificationDate; // 0xB8
	private string m_ProductsJson; // 0xC8

	// Properties
	public string appReceipt { get; }
	private Nullable<double> appReceiptModificationDate { get; }

	// Methods

	// RVA: 0x140255C Offset: 0x13FE55C VA: 0x140255C
	protected void .ctor(IUtil util, ITelemetryDiagnostics telemetryDiagnostics) { }

	// RVA: 0x1402604 Offset: 0x13FE604 VA: 0x1402604
	public void SetNativeStore(INativeAppleStore apple) { }

	// RVA: 0x14026FC Offset: 0x13FE6FC VA: 0x14026FC Slot: 20
	public string get_appReceipt() { }

	// RVA: 0x14028F0 Offset: 0x13FE8F0 VA: 0x14028F0
	private Nullable<double> get_appReceiptModificationDate() { }

	// RVA: 0x14029D4 Offset: 0x13FE9D4 VA: 0x14029D4 Slot: 17
	public override void OnProductsRetrieved(string json) { }

	// RVA: 0x1402DA8 Offset: 0x13FEDA8 VA: 0x1402DA8
	private bool HasInAppPurchaseReceipts(AppleReceipt appleReceipt) { }

	// RVA: 0x1402DCC Offset: 0x13FEDCC VA: 0x1402DCC
	private List<ProductDescription> EnrichProductDescriptions(List<ProductDescription> productDescriptions, AppleReceipt appleReceipt) { }

	// RVA: 0x14032AC Offset: 0x13FF2AC VA: 0x14032AC
	private static AppleInAppPurchaseReceipt FindMostRecentReceipt(AppleReceipt appleReceipt, string productId) { }

	// RVA: 0x1403DA0 Offset: 0x13FFDA0 VA: 0x1403DA0
	private static AppleInAppPurchaseReceipt FirstNonCancelledReceipt(AppleInAppPurchaseReceipt[] foundReceipts) { }

	// RVA: 0x1403E60 Offset: 0x13FFE60 VA: 0x1403E60 Slot: 21
	public virtual void RestoreTransactions(Action<bool, string> callback) { }

	// RVA: 0x1403F14 Offset: 0x13FFF14 VA: 0x1403F14
	public void OnPurchaseDeferred(string productId) { }

	// RVA: 0x1403FFC Offset: 0x13FFFFC VA: 0x1403FFC
	public void OnPromotionalPurchaseAttempted(string productId) { }

	// RVA: 0x14040E4 Offset: 0x14000E4 VA: 0x14040E4
	public void OnTransactionsRestoredSuccess() { }

	// RVA: 0x1404148 Offset: 0x1400148 VA: 0x1404148
	public void OnTransactionsRestoredFail(string error) { }

	// RVA: 0x14041A8 Offset: 0x14001A8 VA: 0x14041A8
	public void OnAppReceiptRetrieved(string receipt) { }

	// RVA: 0x14041C4 Offset: 0x14001C4 VA: 0x14041C4
	public void OnAppReceiptRefreshedFailed(string error) { }

	// RVA: 0x14041E0 Offset: 0x14001E0 VA: 0x14041E0
	private void OnEntitlementsRevoked(string productIds) { }

	// RVA: 0x14044BC Offset: 0x14004BC VA: 0x14044BC
	private void RevokeEntitlement(AppleReceipt appleReceipt, string productId, List<Product> revokedProducts, Product product) { }

	// RVA: 0x1404578 Offset: 0x1400578 VA: 0x1404578
	private bool RestoreActiveEntitlement(AppleReceipt appleReceipt, string productId) { }

	// RVA: 0x140467C Offset: 0x140067C VA: 0x140467C
	public void OnFetchStorePromotionOrderSucceeded(string productIds) { }

	// RVA: 0x140495C Offset: 0x140095C VA: 0x140495C
	public void OnFetchStorePromotionOrderFailed() { }

	// RVA: 0x1404978 Offset: 0x1400978 VA: 0x1404978
	public void OnFetchStorePromotionVisibilitySucceeded(string result) { }

	// RVA: 0x1404C5C Offset: 0x1400C5C VA: 0x1404C5C
	public void OnFetchStorePromotionVisibilityFailed() { }

	[MonoPInvokeCallback(typeof(UnityPurchasingCallback))]
	// RVA: 0x14023D0 Offset: 0x13FE3D0 VA: 0x14023D0
	private static void MessageCallback(string subject, string payload, string receipt, string transactionId, string originalTransactionId, bool isRestored) { }

	// RVA: 0x1404C80 Offset: 0x1400C80 VA: 0x1404C80
	private void ProcessMessage(string subject, string payload, string receipt, string transactionId, string originalTransactionId, bool isRestored) { }

	// RVA: 0x1405424 Offset: 0x1401424 VA: 0x1405424
	public void OnPurchaseSucceeded(string id, string receipt, string transactionId, string originalTransactionId, bool isRestored) { }

	// RVA: 0x1402BDC Offset: 0x13FEBDC VA: 0x1402BDC
	private AppleReceipt GetAppleReceiptFromBase64String(string receipt) { }

	// RVA: 0x1405514 Offset: 0x1401514 VA: 0x1405514
	private static bool IsValidPurchaseState(AppleInAppPurchaseReceipt mostRecentReceipt, string productId) { }

	// RVA: 0x1405674 Offset: 0x1401674 VA: 0x1405674
	private bool IsRestored(string productId, AppleInAppPurchaseReceipt productReceipt, string transactionId, string originalTransactionId) { }

	// RVA: 0x140595C Offset: 0x140195C VA: 0x140595C
	private static bool IsSubscriptionRestored(AppleInAppPurchaseReceipt productReceipt, Product previousProduct) { }

	// RVA: 0x140593C Offset: 0x140193C VA: 0x140593C
	private static bool IsNonSubscriptionRestored(string transactionId, string originalTransactionId) { }

	// RVA: 0x1403CC0 Offset: 0x13FFCC0 VA: 0x1403CC0
	private void UpdateAppleProductFields(string id, string originalTransactionId, bool isRestored) { }
}


// Namespace: UnityEngine.Purchasing
internal class FakeAppleConfiguration : IAppleConfiguration, IStoreConfiguration // TypeDefIndex: 6739
{
	// Methods

	// RVA: 0x1406068 Offset: 0x1402068 VA: 0x1406068
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class FakeAppleExtensions : IAppleExtensions, IStoreExtension // TypeDefIndex: 6740
{
	// Methods

	// RVA: 0x1406070 Offset: 0x1402070 VA: 0x1406070 Slot: 4
	public void RestoreTransactions(Action<bool, string> callback) { }

	// RVA: 0x14060A0 Offset: 0x14020A0 VA: 0x14060A0
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public interface IAppleConfiguration : IStoreConfiguration // TypeDefIndex: 6741
{}


// Namespace: UnityEngine.Purchasing
public interface IAppleExtensions : IStoreExtension // TypeDefIndex: 6742
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RestoreTransactions(Action<bool, string> callback);
}


// Namespace: UnityEngine.Purchasing
public enum AppleStorePromotionVisibility // TypeDefIndex: 6743
{
	// Fields
	public int value__; // 0x0
	public const AppleStorePromotionVisibility Default = 0;
	public const AppleStorePromotionVisibility Hide = 1;
	public const AppleStorePromotionVisibility Show = 2;
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedAppleStoreImpl.<>c__DisplayClass10_0 // TypeDefIndex: 6744
{
	// Fields
	public MetricizedAppleStoreImpl <>4__this; // 0x10
	public ReadOnlyCollection<ProductDefinition> products; // 0x18

	// Methods

	// RVA: 0x140638C Offset: 0x140238C VA: 0x140638C
	public void .ctor() { }

	// RVA: 0x1406690 Offset: 0x1402690 VA: 0x1406690
	internal void <RetrieveProducts>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedAppleStoreImpl.<>c__DisplayClass11_0 // TypeDefIndex: 6745
{
	// Fields
	public MetricizedAppleStoreImpl <>4__this; // 0x10
	public ProductDefinition product; // 0x18
	public string developerPayload; // 0x20

	// Methods

	// RVA: 0x14064F8 Offset: 0x14024F8 VA: 0x14064F8
	public void .ctor() { }

	// RVA: 0x14066B0 Offset: 0x14026B0 VA: 0x14066B0
	internal void <Purchase>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedAppleStoreImpl.<>c__DisplayClass6_0 // TypeDefIndex: 6746
{
	// Fields
	public MetricizedAppleStoreImpl <>4__this; // 0x10
	public Action<bool, string> callback; // 0x18

	// Methods

	// RVA: 0x1406228 Offset: 0x1402228 VA: 0x1406228
	public void .ctor() { }

	// RVA: 0x14066D0 Offset: 0x14026D0 VA: 0x14066D0
	internal void <RestoreTransactions>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class MetricizedAppleStoreImpl : AppleStoreImpl // TypeDefIndex: 6747
{
	// Fields
	private readonly ITelemetryMetricsService m_TelemetryMetricsService; // 0xD0

	// Methods

	// RVA: 0x14060A8 Offset: 0x14020A8 VA: 0x14060A8
	public void .ctor(IUtil util, ITelemetryDiagnostics telemetryDiagnostics, ITelemetryMetricsService telemetryMetricsService) { }

	// RVA: 0x14060CC Offset: 0x14020CC VA: 0x14060CC Slot: 21
	public override void RestoreTransactions(Action<bool, string> callback) { }

	// RVA: 0x1406230 Offset: 0x1402230 VA: 0x1406230 Slot: 9
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products) { }

	// RVA: 0x1406394 Offset: 0x1402394 VA: 0x1406394 Slot: 10
	public override void Purchase(ProductDefinition product, string developerPayload) { }

	[DebuggerHidden]
	[CompilerGenerated]
	// RVA: 0x1406500 Offset: 0x1402500 VA: 0x1406500
	private void <>n__4(Action<bool, string> callback) { }

	[DebuggerHidden]
	[CompilerGenerated]
	// RVA: 0x1406504 Offset: 0x1402504 VA: 0x1406504
	private void <>n__6(ReadOnlyCollection<ProductDefinition> products) { }

	[DebuggerHidden]
	[CompilerGenerated]
	// RVA: 0x14065BC Offset: 0x14025BC VA: 0x14065BC
	private void <>n__7(ProductDefinition product, string developerPayload) { }
}


// Namespace: UnityEngine.Purchasing
public enum AppStore // TypeDefIndex: 6748
{
	// Fields
	public int value__; // 0x0
	public const AppStore NotSpecified = 0;
	public const AppStore GooglePlay = 1;
	public const AppStore AmazonAppStore = 2;
	[Obsolete("AppStore to be removed with UDP deprecation.")]
	public const AppStore UDP = 3;
	public const AppStore MacAppStore = 4;
	public const AppStore AppleAppStore = 5;
	public const AppStore WinRT = 6;
	public const AppStore fake = 7;
}


// Namespace: UnityEngine.Purchasing
internal interface INativeStoreProvider // TypeDefIndex: 6749
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract INativeStore GetAndroidStore(IUnityCallback callback, AppStore store, IPurchasingBinder binder, IUtil util);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract INativeAppleStore GetStorekit(IUnityCallback callback);
}


// Namespace: UnityEngine.Purchasing
internal interface IStoreInternal // TypeDefIndex: 6750
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetModule(StandardPurchasingModule module);
}


// Namespace: UnityEngine.Purchasing
internal class JSONStore : AbstractStore, IUnityCallback, IStoreInternal, ITransactionHistoryExtensions, IStoreExtension // TypeDefIndex: 6751
{
	// Fields
	protected IStoreCallback unity; // 0x10
	private INativeStore m_Store; // 0x18
	private StandardPurchasingModule m_Module; // 0x20
	protected ILogger m_Logger; // 0x28
	protected JsonProductDescriptionsDeserializer m_ProductDescriptionsDeserializer; // 0x30
	protected PurchaseFailureDescription m_LastPurchaseFailureDescription; // 0x38
	private StoreSpecificPurchaseErrorCode m_LastPurchaseErrorCode; // 0x40

	// Methods

	// RVA: 0x1400A3C Offset: 0x13FCA3C VA: 0x1400A3C
	public void .ctor() { }

	// RVA: 0x14066F0 Offset: 0x14026F0 VA: 0x14066F0
	public void SetNativeStore(INativeStore native) { }

	// RVA: 0x14066F8 Offset: 0x14026F8 VA: 0x14066F8 Slot: 16
	private void UnityEngine.Purchasing.IStoreInternal.SetModule(StandardPurchasingModule module) { }

	// RVA: 0x140679C Offset: 0x140279C VA: 0x140679C Slot: 8
	public override void Initialize(IStoreCallback callback) { }

	// RVA: 0x1406508 Offset: 0x1402508 VA: 0x1406508 Slot: 9
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products) { }

	// RVA: 0x14065C0 Offset: 0x14025C0 VA: 0x14065C0 Slot: 10
	public override void Purchase(ProductDefinition product, string developerPayload) { }

	// RVA: 0x1405868 Offset: 0x1401868 VA: 0x1405868 Slot: 11
	public override void FinishTransaction(ProductDefinition product, string transactionId) { }

	// RVA: 0x14052A8 Offset: 0x14012A8 VA: 0x14052A8 Slot: 12
	public void OnSetupFailed(string reason) { }

	// RVA: 0x1406814 Offset: 0x1402814 VA: 0x1406814 Slot: 17
	public virtual void OnProductsRetrieved(string json) { }

	// RVA: 0x14057A4 Offset: 0x14017A4 VA: 0x14057A4 Slot: 18
	public virtual void OnPurchaseSucceeded(string id, string receipt, string transactionID) { }

	// RVA: 0x14054E4 Offset: 0x14014E4 VA: 0x14054E4 Slot: 15
	public void OnPurchaseFailed(string json) { }

	// RVA: 0x14068D4 Offset: 0x14028D4 VA: 0x14068D4
	public void OnPurchaseFailed(PurchaseFailureDescription failure, string json) { }

	// RVA: 0x140699C Offset: 0x140299C VA: 0x140699C
	private StoreSpecificPurchaseErrorCode ParseStoreSpecificPurchaseErrorCode(string json) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedJsonStore.<>c__DisplayClass2_0 // TypeDefIndex: 6752
{
	// Fields
	public MetricizedJsonStore <>4__this; // 0x10
	public ReadOnlyCollection<ProductDefinition> products; // 0x18

	// Methods

	// RVA: 0x1406DA0 Offset: 0x1402DA0 VA: 0x1406DA0
	public void .ctor() { }

	// RVA: 0x1406F1C Offset: 0x1402F1C VA: 0x1406F1C
	internal void <RetrieveProducts>b__0() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MetricizedJsonStore.<>c__DisplayClass3_0 // TypeDefIndex: 6753
{
	// Fields
	public MetricizedJsonStore <>4__this; // 0x10
	public ProductDefinition product; // 0x18
	public string developerPayload; // 0x20

	// Methods

	// RVA: 0x1406F0C Offset: 0x1402F0C VA: 0x1406F0C
	public void .ctor() { }

	// RVA: 0x1406F3C Offset: 0x1402F3C VA: 0x1406F3C
	internal void <Purchase>b__0() { }
}


// Namespace: UnityEngine.Purchasing
internal class MetricizedJsonStore : JSONStore // TypeDefIndex: 6754
{
	// Fields
	private readonly ITelemetryMetricsService m_TelemetryMetricsService; // 0x48

	// Methods

	// RVA: 0x1406C20 Offset: 0x1402C20 VA: 0x1406C20
	public void .ctor(ITelemetryMetricsService telemetryMetricsService) { }

	// RVA: 0x1406C44 Offset: 0x1402C44 VA: 0x1406C44 Slot: 9
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products) { }

	// RVA: 0x1406DA8 Offset: 0x1402DA8 VA: 0x1406DA8 Slot: 10
	public override void Purchase(ProductDefinition product, string developerPayload) { }

	[DebuggerHidden]
	[CompilerGenerated]
	// RVA: 0x1406F14 Offset: 0x1402F14 VA: 0x1406F14
	private void <>n__0(ReadOnlyCollection<ProductDefinition> products) { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x1406F18 Offset: 0x1402F18 VA: 0x1406F18
	private void <>n__1(ProductDefinition product, string developerPayload) { }
}


// Namespace: UnityEngine.Purchasing
internal class NativeStoreProvider : INativeStoreProvider // TypeDefIndex: 6755
{
	// Methods

	// RVA: 0x1406F5C Offset: 0x1402F5C VA: 0x1406F5C Slot: 4
	public INativeStore GetAndroidStore(IUnityCallback callback, AppStore store, IPurchasingBinder binder, IUtil util) { }

	// RVA: 0x140708C Offset: 0x140308C VA: 0x140708C
	private INativeStore GetAndroidStoreHelper(IUnityCallback callback, AppStore store, IPurchasingBinder binder, IUtil util) { }

	// RVA: 0x1407670 Offset: 0x1403670 VA: 0x1407670 Slot: 5
	public INativeAppleStore GetStorekit(IUnityCallback callback) { }

	// RVA: 0x1407744 Offset: 0x1403744 VA: 0x1407744
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class DialogRequest // TypeDefIndex: 6756
{
	// Fields
	public string QueryText; // 0x10
	public string OkayButtonText; // 0x18
	public string CancelButtonText; // 0x20
	public List<string> Options; // 0x28
	public Action<bool, int> Callback; // 0x30

	// Methods

	// RVA: 0x140774C Offset: 0x140374C VA: 0x140774C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public enum FakeStoreUIMode // TypeDefIndex: 6757
{
	// Fields
	public int value__; // 0x0
	public const FakeStoreUIMode Default = 0;
	public const FakeStoreUIMode StandardUser = 1;
	public const FakeStoreUIMode DeveloperUser = 2;
}


// Namespace: 
protected enum FakeStore.DialogType // TypeDefIndex: 6758
{
	// Fields
	public int value__; // 0x0
	public const FakeStore.DialogType Purchase = 0;
	public const FakeStore.DialogType RetrieveProducts = 1;
}


// Namespace: 
[CompilerGenerated]
private sealed class FakeStore.<>c__DisplayClass13_0 // TypeDefIndex: 6759
{
	// Fields
	public FakeStore <>4__this; // 0x10
	public List<ProductDescription> products; // 0x18

	// Methods

	// RVA: 0x1408200 Offset: 0x1404200 VA: 0x1408200
	public void .ctor() { }

	// RVA: 0x14082D4 Offset: 0x14042D4 VA: 0x14082D4
	internal void <StoreRetrieveProducts>g__handleAllowInitializeOrRetrieveProducts|0(bool allow, InitializationFailureReason failureReason) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class FakeStore.<>c__DisplayClass15_0 // TypeDefIndex: 6760
{
	// Fields
	public FakeStore <>4__this; // 0x10
	public ProductDefinition product; // 0x18

	// Methods

	// RVA: 0x1408914 Offset: 0x1404914 VA: 0x1408914
	public void .ctor() { }

	// RVA: 0x140891C Offset: 0x140491C VA: 0x140891C
	internal void <FakePurchase>g__handleAllowPurchase|0(bool allow, PurchaseFailureReason failureReason) { }
}


// Namespace: UnityEngine.Purchasing
internal class FakeStore : JSONStore, IStoreExtension, INativeStore // TypeDefIndex: 6761
{
	// Fields
	private IStoreCallback m_Biller; // 0x48
	private readonly List<string> m_PurchasedProducts; // 0x50
	public bool purchaseCalled; // 0x58
	[CompilerGenerated]
	private string <unavailableProductId>k__BackingField; // 0x60
	public FakeStoreUIMode UIMode; // 0x68

	// Properties
	public string unavailableProductId { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1407754 Offset: 0x1403754 VA: 0x1407754 Slot: 22
	public string get_unavailableProductId() { }

	// RVA: 0x140775C Offset: 0x140375C VA: 0x140775C Slot: 8
	public override void Initialize(IStoreCallback biller) { }

	// RVA: 0x1407778 Offset: 0x1403778 VA: 0x1407778 Slot: 19
	public void RetrieveProducts(string json) { }

	// RVA: 0x1407890 Offset: 0x1403890 VA: 0x1407890
	public void StoreRetrieveProducts(ReadOnlyCollection<ProductDefinition> productDefinitions) { }

	// RVA: 0x1408418 Offset: 0x1404418 VA: 0x1408418 Slot: 20
	public void Purchase(string productJSON, string developerPayload) { }

	// RVA: 0x14086EC Offset: 0x14046EC VA: 0x14086EC
	private void FakePurchase(ProductDefinition product, string developerPayload) { }

	// RVA: 0x1408B0C Offset: 0x1404B0C VA: 0x1408B0C Slot: 21
	public void FinishTransaction(string productJSON, string transactionID) { }

	// RVA: 0x1408B10 Offset: 0x1404B10 VA: 0x1408B10 Slot: 11
	public override void FinishTransaction(ProductDefinition product, string transactionId) { }

	// RVA: -1 Offset: -1 Slot: 23
	protected virtual bool StartUI<T>(object model, FakeStore.DialogType dialogType, Action<bool, T> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8AB9C Offset: 0xB86B9C VA: 0xB8AB9C
	|-FakeStore.StartUI<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1408B14 Offset: 0x1404B14 VA: 0x1408B14
	public void .ctor() { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x1408B8C Offset: 0x1404B8C VA: 0x1408B8C
	private void <>n__0(string id, string receipt, string transactionID) { }
}


// Namespace: UnityEngine.Purchasing
internal class LifecycleNotifier : MonoBehaviour // TypeDefIndex: 6762
{
	// Fields
	public Action OnDestroyCallback; // 0x20

	// Methods

	// RVA: 0x1408B90 Offset: 0x1404B90 VA: 0x1408B90
	private void OnDestroy() { }

	// RVA: 0x1408BAC Offset: 0x1404BAC VA: 0x1408BAC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class UIFakeStore.<>c // TypeDefIndex: 6763
{
	// Fields
	public static readonly UIFakeStore.<>c <>9; // 0x0
	public static Func<ProductDefinition, string> <>9__20_0; // 0x8

	// Methods

	// RVA: 0x1409948 Offset: 0x1405948 VA: 0x1409948
	private static void .cctor() { }

	// RVA: 0x14099A4 Offset: 0x14059A4 VA: 0x14099A4
	public void .ctor() { }

	// RVA: 0x14099AC Offset: 0x14059AC VA: 0x14099AC
	internal string <CreateRetrieveProductsQuestion>b__20_0(ProductDefinition pid) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UIFakeStore.<>c__DisplayClass10_0<T> // TypeDefIndex: 6764
{
	// Fields
	public Action<bool, T> callback; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB91F4 Offset: 0xBB51F4 VA: 0xBB91F4
	|-UIFakeStore.<>c__DisplayClass10_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <StartUI>b__0(bool result, int codeValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB91FC Offset: 0xBB51FC VA: 0xBB91FC
	|-UIFakeStore.<>c__DisplayClass10_0<__Il2CppFullySharedGenericType>.<StartUI>b__0
	*/
}


// Namespace: UnityEngine.Purchasing
internal class UIFakeStore : FakeStore // TypeDefIndex: 6765
{
	// Fields
	private DialogRequest m_CurrentDialog; // 0x70
	private int m_LastSelectedDropdownIndex; // 0x78
	private GameObject m_UIFakeStoreWindowObject; // 0x80
	private GameObject m_EventSystem; // 0x88

	// Methods

	// RVA: 0x1408BB4 Offset: 0x1404BB4 VA: 0x1408BB4
	public void .ctor() { }

	// RVA: -1 Offset: -1 Slot: 23
	protected override bool StartUI<T>(object model, FakeStore.DialogType dialogType, Action<bool, T> callback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBADF50 Offset: 0xBA9F50 VA: 0xBADF50
	|-UIFakeStore.StartUI<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1408BB8 Offset: 0x1404BB8 VA: 0x1408BB8
	private bool StartUI(string queryText, string okayButtonText, string cancelButtonText, List<string> options, Action<bool, int> callback) { }

	// RVA: 0x1408C78 Offset: 0x1404C78 VA: 0x1408C78
	private void InstantiateDialog() { }

	// RVA: 0x1408D64 Offset: 0x1404D64 VA: 0x1408D64
	private UIFakeStoreWindow GetOrCreateFakeStoreWindow() { }

	// RVA: 0x1408F1C Offset: 0x1404F1C VA: 0x1408F1C
	private void AddLifeCycleNotifierAndSetDestroyCallback(GameObject gameObject) { }

	// RVA: 0x1408FD0 Offset: 0x1404FD0 VA: 0x1408FD0
	private void EnsureEventSystemCreated(Transform rootTransform) { }

	// RVA: 0x1409070 Offset: 0x1405070 VA: 0x1409070
	private void ConfigureDialogWindow(UIFakeStoreWindow dialogWindow) { }

	// RVA: 0x140934C Offset: 0x140534C VA: 0x140934C
	private void ConfigureDialogWindowCallbacks(UIFakeStoreWindow dialogWindow, bool assignCancelCallback, bool assignDropDownCallback) { }

	// RVA: 0x14090DC Offset: 0x14050DC VA: 0x14090DC
	private void CreateEventSystem(Transform rootTransform) { }

	// RVA: 0x14094B0 Offset: 0x14054B0 VA: 0x14094B0
	private string CreatePurchaseQuestion(ProductDefinition definition) { }

	// RVA: 0x140951C Offset: 0x140551C VA: 0x140951C
	private string CreateRetrieveProductsQuestion(ReadOnlyCollection<ProductDefinition> definitions) { }

	// RVA: 0x1409738 Offset: 0x1405738 VA: 0x1409738
	private void OkayButtonClicked() { }

	// RVA: 0x1409890 Offset: 0x1405890 VA: 0x1409890
	private void CancelButtonClicked() { }

	// RVA: 0x1409938 Offset: 0x1405938 VA: 0x1409938
	private void DropdownValueChanged(int selectedItem) { }

	// RVA: 0x14097FC Offset: 0x14057FC VA: 0x14097FC
	private void CloseDialog() { }

	// RVA: 0x1408C68 Offset: 0x1404C68 VA: 0x1408C68
	public bool IsShowingDialog() { }

	[CompilerGenerated]
	// RVA: 0x1409940 Offset: 0x1405940 VA: 0x1409940
	private void <AddLifeCycleNotifierAndSetDestroyCallback>b__14_0() { }
}


// Namespace: UnityEngine.Purchasing
internal class UIFakeStoreDropdown // TypeDefIndex: 6766
{
	// Fields
	private List<string> m_Options; // 0x10
	private Action<int, string> m_OnDropdown; // 0x18
	private Vector2 scrollPosition; // 0x20

	// Methods

	// RVA: 0x14099C4 Offset: 0x14059C4 VA: 0x14099C4
	public void DoPopup(int windowID) { }

	// RVA: 0x1409C74 Offset: 0x1405C74 VA: 0x1409C74
	private void OnOptionSelected(int optionIndex) { }

	// RVA: 0x1409D00 Offset: 0x1405D00 VA: 0x1409D00
	internal void SetOptions(List<string> options) { }

	// RVA: 0x1409D7C Offset: 0x1405D7C VA: 0x1409D7C
	internal void SetSelectionAction(Action<int, string> onDropdown) { }

	// RVA: 0x1409D84 Offset: 0x1405D84 VA: 0x1409D84
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class UIFakeStoreWindow : MonoBehaviour // TypeDefIndex: 6767
{
	// Fields
	private string m_QueryText; // 0x20
	private string m_OkText; // 0x28
	private string m_CancelText; // 0x30
	private string m_LastSelectedOptionText; // 0x38
	private Action m_OnOk; // 0x40
	private Action m_OnCancel; // 0x48
	private Action<int> m_OnDropdown; // 0x50
	private bool m_CancelEnabled; // 0x58
	private bool m_DropdownEnabled; // 0x59
	private bool m_DoDropdown; // 0x5A
	private readonly UIFakeStoreDropdown m_Dropdown; // 0x60
	private Vector2 scrollPosition; // 0x68
	private const float k_MenuScreenRatio = 0.6;

	// Methods

	// RVA: 0x1409D8C Offset: 0x1405D8C VA: 0x1409D8C
	private void OnGUI() { }

	// RVA: 0x1409F00 Offset: 0x1405F00 VA: 0x1409F00
	private Rect CreateCenteredWindowRect() { }

	// RVA: 0x1409F74 Offset: 0x1405F74 VA: 0x1409F74
	private void DoMainGUI(int windowID) { }

	// RVA: 0x140A290 Offset: 0x1406290 VA: 0x140A290
	private void DoDropDown() { }

	// RVA: 0x140A29C Offset: 0x140629C VA: 0x140A29C
	private void OnOkClicked() { }

	// RVA: 0x140A2B8 Offset: 0x14062B8 VA: 0x140A2B8
	private void OnCancelClicked() { }

	// RVA: 0x1409254 Offset: 0x1405254 VA: 0x1409254
	internal void ConfigureMainDialogText(string queryText, string okText, string cancelText) { }

	// RVA: 0x1409260 Offset: 0x1405260 VA: 0x1409260
	internal void ConfigureDropdownOptions(List<string> options) { }

	// RVA: 0x140A2D4 Offset: 0x14062D4 VA: 0x140A2D4
	private void OnDropdown(int index, string selectionText) { }

	// RVA: 0x140948C Offset: 0x140548C VA: 0x140948C
	internal void AssignCallbacks(Action onOk, Action onCancel, Action<int> onDropdown) { }

	// RVA: 0x140A314 Offset: 0x1406314 VA: 0x140A314
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class Price : ISerializationCallbackReceiver // TypeDefIndex: 6768
{
	// Fields
	public Decimal value; // 0x10
	[SerializeField]
	private int[] data; // 0x20
	[SerializeField]
	private double num; // 0x28

	// Methods

	// RVA: 0x140A374 Offset: 0x1406374 VA: 0x140A374 Slot: 4
	public void OnBeforeSerialize() { }

	// RVA: 0x140A3F0 Offset: 0x14063F0 VA: 0x140A3F0 Slot: 5
	public void OnAfterDeserialize() { }

	// RVA: 0x140A45C Offset: 0x140645C VA: 0x140A45C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class StoreID // TypeDefIndex: 6769
{
	// Fields
	public string store; // 0x10
	public string id; // 0x18
}


// Namespace: UnityEngine.Purchasing
public enum TranslationLocale // TypeDefIndex: 6770
{
	// Fields
	public int value__; // 0x0
	public const TranslationLocale zh_TW = 0;
	public const TranslationLocale cs_CZ = 1;
	public const TranslationLocale da_DK = 2;
	public const TranslationLocale nl_NL = 3;
	public const TranslationLocale en_US = 4;
	public const TranslationLocale fr_FR = 5;
	public const TranslationLocale fi_FI = 6;
	public const TranslationLocale de_DE = 7;
	public const TranslationLocale iw_IL = 8;
	public const TranslationLocale hi_IN = 9;
	public const TranslationLocale it_IT = 10;
	public const TranslationLocale ja_JP = 11;
	public const TranslationLocale ko_KR = 12;
	public const TranslationLocale no_NO = 13;
	public const TranslationLocale pl_PL = 14;
	public const TranslationLocale pt_PT = 15;
	public const TranslationLocale ru_RU = 16;
	public const TranslationLocale es_ES = 17;
	public const TranslationLocale sv_SE = 18;
	public const TranslationLocale zh_CN = 19;
	public const TranslationLocale en_AU = 20;
	public const TranslationLocale en_CA = 21;
	public const TranslationLocale en_GB = 22;
	public const TranslationLocale fr_CA = 23;
	public const TranslationLocale el_GR = 24;
	public const TranslationLocale id_ID = 25;
	public const TranslationLocale ms_MY = 26;
	public const TranslationLocale pt_BR = 27;
	public const TranslationLocale es_MX = 28;
	public const TranslationLocale th_TH = 29;
	public const TranslationLocale tr_TR = 30;
	public const TranslationLocale vi_VN = 31;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class LocalizedProductDescription.<>c // TypeDefIndex: 6771
{
	// Fields
	public static readonly LocalizedProductDescription.<>c <>9; // 0x0
	public static MatchEvaluator <>9__11_0; // 0x8

	// Methods

	// RVA: 0x140A5B4 Offset: 0x14065B4 VA: 0x140A5B4
	private static void .cctor() { }

	// RVA: 0x140A610 Offset: 0x1406610 VA: 0x140A610
	public void .ctor() { }

	// RVA: 0x140A618 Offset: 0x1406618 VA: 0x140A618
	internal string <DecodeNonLatinCharacters>b__11_0(Match m) { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class LocalizedProductDescription // TypeDefIndex: 6772
{
	// Fields
	public TranslationLocale googleLocale; // 0x10
	[SerializeField]
	private string title; // 0x18
	[SerializeField]
	private string description; // 0x20

	// Properties
	public string Title { get; }
	public string Description { get; }

	// Methods

	// RVA: 0x14082C4 Offset: 0x14042C4 VA: 0x14082C4
	public string get_Title() { }

	// RVA: 0x14082CC Offset: 0x14042CC VA: 0x14082CC
	public string get_Description() { }

	// RVA: 0x140A464 Offset: 0x1406464 VA: 0x140A464
	private static string DecodeNonLatinCharacters(string s) { }

	// RVA: 0x140A5A4 Offset: 0x14065A4 VA: 0x140A5A4
	public void .ctor() { }
}


// Namespace: 
public enum ProductCatalogPayout.ProductCatalogPayoutType // TypeDefIndex: 6773
{
	// Fields
	public int value__; // 0x0
	public const ProductCatalogPayout.ProductCatalogPayoutType Other = 0;
	public const ProductCatalogPayout.ProductCatalogPayoutType Currency = 1;
	public const ProductCatalogPayout.ProductCatalogPayoutType Item = 2;
	public const ProductCatalogPayout.ProductCatalogPayoutType Resource = 3;
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class ProductCatalogPayout // TypeDefIndex: 6774
{
	// Fields
	[SerializeField]
	private string t; // 0x10
	[SerializeField]
	private string st; // 0x18
	[SerializeField]
	private double q; // 0x20
	[SerializeField]
	private string d; // 0x28

	// Properties
	public string typeString { get; }
	public string subtype { get; }
	public double quantity { get; }
	public string data { get; }

	// Methods

	// RVA: 0x140A6D0 Offset: 0x14066D0 VA: 0x140A6D0
	public string get_typeString() { }

	// RVA: 0x140A6D8 Offset: 0x14066D8 VA: 0x140A6D8
	public string get_subtype() { }

	// RVA: 0x140A6E0 Offset: 0x14066E0 VA: 0x140A6E0
	public double get_quantity() { }

	// RVA: 0x140A6E8 Offset: 0x14066E8 VA: 0x140A6E8
	public string get_data() { }

	// RVA: 0x140A6F0 Offset: 0x14066F0 VA: 0x140A6F0
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class ProductCatalogItem // TypeDefIndex: 6775
{
	// Fields
	public string id; // 0x10
	public ProductType type; // 0x18
	[SerializeField]
	private List<StoreID> storeIDs; // 0x20
	public LocalizedProductDescription defaultDescription; // 0x28
	public Price googlePrice; // 0x30
	[SerializeField]
	private List<LocalizedProductDescription> descriptions; // 0x38
	public Price udpPrice; // 0x40
	[SerializeField]
	private List<ProductCatalogPayout> payouts; // 0x48

	// Properties
	public IList<ProductCatalogPayout> Payouts { get; }
	public ICollection<StoreID> allStoreIDs { get; }

	// Methods

	// RVA: 0x140A794 Offset: 0x1406794 VA: 0x140A794
	public IList<ProductCatalogPayout> get_Payouts() { }

	// RVA: 0x140A79C Offset: 0x140679C VA: 0x140A79C
	public ICollection<StoreID> get_allStoreIDs() { }

	// RVA: 0x140A7A4 Offset: 0x14067A4 VA: 0x140A7A4
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ProductCatalog.<>c // TypeDefIndex: 6776
{
	// Fields
	public static readonly ProductCatalog.<>c <>9; // 0x0
	public static Func<ProductCatalogItem, bool> <>9__9_0; // 0x8

	// Methods

	// RVA: 0x140ADC0 Offset: 0x1406DC0 VA: 0x140ADC0
	private static void .cctor() { }

	// RVA: 0x140AE1C Offset: 0x1406E1C VA: 0x140AE1C
	public void .ctor() { }

	// RVA: 0x140AE24 Offset: 0x1406E24 VA: 0x140AE24
	internal bool <get_allValidProducts>b__9_0(ProductCatalogItem x) { }
}


// Namespace: UnityEngine.Purchasing
[Serializable]
public class ProductCatalog // TypeDefIndex: 6777
{
	// Fields
	private static IProductCatalogImpl instance; // 0x0
	public bool enableCodelessAutoInitialization; // 0x10
	public bool enableUnityGamingServicesAutoInitialization; // 0x11
	[SerializeField]
	private List<ProductCatalogItem> products; // 0x18

	// Properties
	public ICollection<ProductCatalogItem> allProducts { get; }
	public ICollection<ProductCatalogItem> allValidProducts { get; }

	// Methods

	// RVA: 0x140A930 Offset: 0x1406930 VA: 0x140A930
	public ICollection<ProductCatalogItem> get_allProducts() { }

	// RVA: 0x140A938 Offset: 0x1406938 VA: 0x140A938
	public ICollection<ProductCatalogItem> get_allValidProducts() { }

	// RVA: 0x140AA50 Offset: 0x1406A50 VA: 0x140AA50
	internal static void Initialize() { }

	// RVA: 0x140AAF8 Offset: 0x1406AF8 VA: 0x140AAF8
	public static void Initialize(IProductCatalogImpl productCatalogImpl) { }

	// RVA: 0x140AB44 Offset: 0x1406B44 VA: 0x140AB44
	public bool IsEmpty() { }

	// RVA: 0x140ACC4 Offset: 0x1406CC4 VA: 0x140ACC4
	public static ProductCatalog Deserialize(string catalogJSON) { }

	// RVA: 0x140AD20 Offset: 0x1406D20 VA: 0x140AD20
	public static ProductCatalog FromTextAsset(TextAsset asset) { }

	// RVA: 0x1408208 Offset: 0x1404208 VA: 0x1408208
	public static ProductCatalog LoadDefaultCatalog() { }

	// RVA: 0x140AD3C Offset: 0x1406D3C VA: 0x140AD3C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public interface IProductCatalogImpl // TypeDefIndex: 6778
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ProductCatalog LoadDefaultCatalog();
}


// Namespace: UnityEngine.Purchasing
internal class ProductCatalogImpl : IProductCatalogImpl // TypeDefIndex: 6779
{
	// Methods

	// RVA: 0x140AE74 Offset: 0x1406E74 VA: 0x140AE74 Slot: 4
	public ProductCatalog LoadDefaultCatalog() { }

	// RVA: 0x140AAF0 Offset: 0x1406AF0 VA: 0x140AAF0
	public void .ctor() { }
}


// Namespace: 
internal class StandardPurchasingModule.StoreInstance // TypeDefIndex: 6780
{
	// Fields
	[CompilerGenerated]
	private readonly string <storeName>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly IStore <instance>k__BackingField; // 0x18

	// Properties
	internal string storeName { get; }
	internal IStore instance { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x140CF60 Offset: 0x1408F60 VA: 0x140CF60
	internal string get_storeName() { }

	[CompilerGenerated]
	// RVA: 0x140CF68 Offset: 0x1408F68 VA: 0x140CF68
	internal IStore get_instance() { }

	// RVA: 0x140BF50 Offset: 0x1407F50 VA: 0x140BF50
	internal void .ctor(string name, IStore instance) { }
}


// Namespace: 
private class StandardPurchasingModule.MicrosoftConfiguration : IMicrosoftConfiguration, IStoreConfiguration // TypeDefIndex: 6781
{
	// Fields
	private readonly StandardPurchasingModule module; // 0x10

	// Methods

	// RVA: 0x140BC6C Offset: 0x1407C6C VA: 0x140BC6C
	public void .ctor(StandardPurchasingModule module) { }
}


// Namespace: UnityEngine.Purchasing
public class StandardPurchasingModule : AbstractPurchasingModule, IAndroidStoreSelection, IStoreConfiguration // TypeDefIndex: 6782
{
	// Fields
	internal readonly string k_Version; // 0x18
	private readonly INativeStoreProvider m_NativeStoreProvider; // 0x20
	private readonly RuntimePlatform m_RuntimePlatform; // 0x28
	private static StandardPurchasingModule ModuleInstance; // 0x0
	[CompilerGenerated]
	private IUtil <util>k__BackingField; // 0x30
	[CompilerGenerated]
	private ILogger <logger>k__BackingField; // 0x38
	[CompilerGenerated]
	private StandardPurchasingModule.StoreInstance <storeInstance>k__BackingField; // 0x40
	[CompilerGenerated]
	private ITelemetryMetricsInstanceWrapper <telemetryMetricsInstanceWrapper>k__BackingField; // 0x48
	[CompilerGenerated]
	private ITelemetryDiagnosticsInstanceWrapper <telemetryDiagnosticsInstanceWrapper>k__BackingField; // 0x50
	private static readonly Dictionary<AppStore, string> AndroidStoreNameMap; // 0x8
	[CompilerGenerated]
	private AppStore <appStore>k__BackingField; // 0x58
	[CompilerGenerated]
	private FakeStoreUIMode <useFakeStoreUIMode>k__BackingField; // 0x5C
	[CompilerGenerated]
	private bool <useFakeStoreAlways>k__BackingField; // 0x60
	private WinRTStore windowsStore; // 0x68

	// Properties
	internal IUtil util { get; set; }
	internal ILogger logger { get; set; }
	internal StandardPurchasingModule.StoreInstance storeInstance { get; set; }
	internal ITelemetryMetricsInstanceWrapper telemetryMetricsInstanceWrapper { get; set; }
	internal ITelemetryDiagnosticsInstanceWrapper telemetryDiagnosticsInstanceWrapper { get; set; }
	public AppStore appStore { get; set; }
	public FakeStoreUIMode useFakeStoreUIMode { get; set; }
	public bool useFakeStoreAlways { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x140AF78 Offset: 0x1406F78 VA: 0x140AF78
	internal IUtil get_util() { }

	[CompilerGenerated]
	// RVA: 0x140AF80 Offset: 0x1406F80 VA: 0x140AF80
	private void set_util(IUtil value) { }

	[CompilerGenerated]
	// RVA: 0x140AF88 Offset: 0x1406F88 VA: 0x140AF88
	internal ILogger get_logger() { }

	[CompilerGenerated]
	// RVA: 0x140AF90 Offset: 0x1406F90 VA: 0x140AF90
	private void set_logger(ILogger value) { }

	[CompilerGenerated]
	// RVA: 0x140AF98 Offset: 0x1406F98 VA: 0x140AF98
	internal StandardPurchasingModule.StoreInstance get_storeInstance() { }

	[CompilerGenerated]
	// RVA: 0x140AFA0 Offset: 0x1406FA0 VA: 0x140AFA0
	private void set_storeInstance(StandardPurchasingModule.StoreInstance value) { }

	[CompilerGenerated]
	// RVA: 0x140AFA8 Offset: 0x1406FA8 VA: 0x140AFA8
	internal ITelemetryMetricsInstanceWrapper get_telemetryMetricsInstanceWrapper() { }

	[CompilerGenerated]
	// RVA: 0x140AFB0 Offset: 0x1406FB0 VA: 0x140AFB0
	internal void set_telemetryMetricsInstanceWrapper(ITelemetryMetricsInstanceWrapper value) { }

	[CompilerGenerated]
	// RVA: 0x140AFB8 Offset: 0x1406FB8 VA: 0x140AFB8
	internal ITelemetryDiagnosticsInstanceWrapper get_telemetryDiagnosticsInstanceWrapper() { }

	[CompilerGenerated]
	// RVA: 0x140AFC0 Offset: 0x1406FC0 VA: 0x140AFC0
	internal void set_telemetryDiagnosticsInstanceWrapper(ITelemetryDiagnosticsInstanceWrapper value) { }

	// RVA: 0x140AFC8 Offset: 0x1406FC8 VA: 0x140AFC8
	internal void .ctor(IUtil util, ILogger logger, INativeStoreProvider nativeStoreProvider, RuntimePlatform platform, AppStore android, ITelemetryDiagnosticsInstanceWrapper telemetryDiagnosticsInstanceWrapper, ITelemetryMetricsInstanceWrapper telemetryMetricsInstanceWrapper) { }

	[CompilerGenerated]
	// RVA: 0x140B070 Offset: 0x1407070 VA: 0x140B070 Slot: 6
	public AppStore get_appStore() { }

	[CompilerGenerated]
	// RVA: 0x140B078 Offset: 0x1407078 VA: 0x140B078
	private void set_appStore(AppStore value) { }

	[CompilerGenerated]
	// RVA: 0x140B080 Offset: 0x1407080 VA: 0x140B080
	public FakeStoreUIMode get_useFakeStoreUIMode() { }

	[CompilerGenerated]
	// RVA: 0x140B088 Offset: 0x1407088 VA: 0x140B088
	public void set_useFakeStoreUIMode(FakeStoreUIMode value) { }

	[CompilerGenerated]
	// RVA: 0x140B090 Offset: 0x1407090 VA: 0x140B090
	public bool get_useFakeStoreAlways() { }

	[CompilerGenerated]
	// RVA: 0x140B098 Offset: 0x1407098 VA: 0x140B098
	public void set_useFakeStoreAlways(bool value) { }

	// RVA: 0x140B0A4 Offset: 0x14070A4 VA: 0x140B0A4
	public static StandardPurchasingModule Instance() { }

	// RVA: 0x140B0F4 Offset: 0x14070F4 VA: 0x140B0F4
	public static StandardPurchasingModule Instance(AppStore androidStore) { }

	// RVA: 0x140B6F0 Offset: 0x14076F0 VA: 0x140B6F0 Slot: 5
	public override void Configure() { }

	// RVA: 0x140BC94 Offset: 0x1407C94 VA: 0x140BC94
	private StandardPurchasingModule.StoreInstance InstantiateStore() { }

	// RVA: 0x140C1D4 Offset: 0x14081D4 VA: 0x140C1D4
	private IStore InstantiateAndroid() { }

	// RVA: 0x140C3E8 Offset: 0x14083E8 VA: 0x140C3E8
	private IStore InstantiateGoogleStore() { }

	// RVA: 0x140CD00 Offset: 0x1408D00 VA: 0x140CD00
	private void BindGoogleExtension(GooglePlayStoreExtensions googlePlayStoreExtensions) { }

	// RVA: 0x140CB44 Offset: 0x1408B44 VA: 0x140CB44
	private static GooglePlayConfiguration BuildGooglePlayStoreConfiguration(IGooglePlayStoreService googlePlayStoreService, IGooglePurchaseCallback googlePurchaseCallback, IGoogleProductCallback googleProductCallback) { }

	// RVA: 0x140CCA8 Offset: 0x1408CA8 VA: 0x140CCA8
	private void BindGoogleConfiguration(GooglePlayConfiguration googlePlayConfiguration) { }

	// RVA: 0x140C7AC Offset: 0x14087AC VA: 0x140C7AC
	private IGooglePlayStoreService BuildAndInitGooglePlayStoreServiceAar(IGooglePurchaseCallback googlePurchaseCallback, IGoogleProductCallback googleProductCallback, IGooglePurchaseStateEnumProvider googlePurchaseStateEnumProvider) { }

	// RVA: 0x140C104 Offset: 0x1408104 VA: 0x140C104
	private IStore InstantiateUDP() { }

	// RVA: 0x140C788 Offset: 0x1408788 VA: 0x140C788
	private IStore InstantiateAndroidHelper(JSONStore store) { }

	// RVA: 0x140CD58 Offset: 0x1408D58 VA: 0x140CD58
	private INativeStore GetAndroidNativeStore(JSONStore store) { }

	// RVA: 0x140BF7C Offset: 0x1407F7C VA: 0x140BF7C
	private IStore InstantiateApple() { }

	// RVA: 0x140C294 Offset: 0x1408294 VA: 0x140C294
	private IStore instantiateWindowsStore() { }

	// RVA: 0x140BEB8 Offset: 0x1407EB8 VA: 0x140BEB8
	private IStore InstantiateFakeStore() { }

	// RVA: 0x140CE20 Offset: 0x1408E20 VA: 0x140CE20
	private static void .cctor() { }
}


// Namespace: UnityEngine.Purchasing
internal class StoreConfiguration // TypeDefIndex: 6783
{
	// Fields
	[CompilerGenerated]
	private AppStore <androidStore>k__BackingField; // 0x10

	// Properties
	public AppStore androidStore { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x140CF70 Offset: 0x1408F70 VA: 0x140CF70
	public AppStore get_androidStore() { }

	[CompilerGenerated]
	// RVA: 0x140CF78 Offset: 0x1408F78 VA: 0x140CF78
	private void set_androidStore(AppStore value) { }

	// RVA: 0x140CF80 Offset: 0x1408F80 VA: 0x140CF80
	public void .ctor(AppStore store) { }

	// RVA: 0x140B460 Offset: 0x1407460 VA: 0x140B460
	public static StoreConfiguration Deserialize(string json) { }
}


// Namespace: UnityEngine.Purchasing
public enum StoreSpecificPurchaseErrorCode // TypeDefIndex: 6784
{
	// Fields
	public int value__; // 0x0
	public const StoreSpecificPurchaseErrorCode SKErrorUnknown = 0;
	public const StoreSpecificPurchaseErrorCode SKErrorClientInvalid = 1;
	public const StoreSpecificPurchaseErrorCode SKErrorPaymentCancelled = 2;
	public const StoreSpecificPurchaseErrorCode SKErrorPaymentInvalid = 3;
	public const StoreSpecificPurchaseErrorCode SKErrorPaymentNotAllowed = 4;
	public const StoreSpecificPurchaseErrorCode SKErrorStoreProductNotAvailable = 5;
	public const StoreSpecificPurchaseErrorCode SKErrorCloudServicePermissionDenied = 6;
	public const StoreSpecificPurchaseErrorCode SKErrorCloudServiceNetworkConnectionFailed = 7;
	public const StoreSpecificPurchaseErrorCode SKErrorCloudServiceRevoked = 8;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_OK = 9;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_USER_CANCELED = 10;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_SERVICE_UNAVAILABLE = 11;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_BILLING_UNAVAILABLE = 12;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_ITEM_UNAVAILABLE = 13;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_DEVELOPER_ERROR = 14;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_ERROR = 15;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_ITEM_ALREADY_OWNED = 16;
	public const StoreSpecificPurchaseErrorCode BILLING_RESPONSE_RESULT_ITEM_NOT_OWNED = 17;
	public const StoreSpecificPurchaseErrorCode IABHELPER_ERROR_BASE = 18;
	public const StoreSpecificPurchaseErrorCode IABHELPER_REMOTE_EXCEPTION = 19;
	public const StoreSpecificPurchaseErrorCode IABHELPER_BAD_RESPONSE = 20;
	public const StoreSpecificPurchaseErrorCode IABHELPER_VERIFICATION_FAILED = 21;
	public const StoreSpecificPurchaseErrorCode IABHELPER_SEND_INTENT_FAILED = 22;
	public const StoreSpecificPurchaseErrorCode IABHELPER_USER_CANCELLED = 23;
	public const StoreSpecificPurchaseErrorCode IABHELPER_UNKNOWN_PURCHASE_RESPONSE = 24;
	public const StoreSpecificPurchaseErrorCode IABHELPER_MISSING_TOKEN = 25;
	public const StoreSpecificPurchaseErrorCode IABHELPER_UNKNOWN_ERROR = 26;
	public const StoreSpecificPurchaseErrorCode IABHELPER_SUBSCRIPTIONS_NOT_AVAILABLE = 27;
	public const StoreSpecificPurchaseErrorCode IABHELPER_INVALID_CONSUMPTION = 28;
	public const StoreSpecificPurchaseErrorCode Amazon_ALREADY_PURCHASED = 29;
	public const StoreSpecificPurchaseErrorCode Amazon_FAILED = 30;
	public const StoreSpecificPurchaseErrorCode Amazon_INVALID_SKU = 31;
	public const StoreSpecificPurchaseErrorCode Amazon_NOT_SUPPORTED = 32;
	public const StoreSpecificPurchaseErrorCode Unknown = 33;
}


// Namespace: UnityEngine.Purchasing
public class TimeSpanUnits // TypeDefIndex: 6785
{
	// Fields
	public double days; // 0x10
	public int months; // 0x18
	public int years; // 0x1C

	// Methods

	// RVA: 0x140CFA8 Offset: 0x1408FA8 VA: 0x140CFA8
	public void .ctor(double d, int m, int y) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class SubscriptionManager.<>c // TypeDefIndex: 6786
{
	// Fields
	public static readonly SubscriptionManager.<>c <>9; // 0x0
	public static Comparison<AppleInAppPurchaseReceipt> <>9__11_0; // 0x8
	public static Func<object, string> <>9__12_0; // 0x10

	// Methods

	// RVA: 0x140E508 Offset: 0x140A508 VA: 0x140E508
	private static void .cctor() { }

	// RVA: 0x140E564 Offset: 0x140A564 VA: 0x140E564
	public void .ctor() { }

	// RVA: 0x140E56C Offset: 0x140A56C VA: 0x140E56C
	internal int <findMostRecentReceipt>b__11_0(AppleInAppPurchaseReceipt b, AppleInAppPurchaseReceipt a) { }

	// RVA: 0x140E5F0 Offset: 0x140A5F0 VA: 0x140E5F0
	internal string <getGooglePlayStoreSubInfo>b__12_0(object obj) { }
}


// Namespace: UnityEngine.Purchasing
public class SubscriptionManager // TypeDefIndex: 6787
{
	// Fields
	private readonly string receipt; // 0x10
	private readonly string productId; // 0x18
	private readonly string intro_json; // 0x20

	// Methods

	// RVA: 0x1405B04 Offset: 0x1401B04 VA: 0x1405B04
	public void .ctor(Product product, string intro_json) { }

	// RVA: 0x1405B4C Offset: 0x1401B4C VA: 0x1405B4C
	public SubscriptionInfo getSubscriptionInfo() { }

	// RVA: 0x140DAD0 Offset: 0x1409AD0 VA: 0x140DAD0
	private SubscriptionInfo getAmazonAppStoreSubInfo(string productId) { }

	// RVA: 0x140D688 Offset: 0x1409688 VA: 0x140D688
	private SubscriptionInfo getAppleAppStoreSubInfo(string payload, string productId) { }

	// RVA: 0x140DBCC Offset: 0x1409BCC VA: 0x140DBCC
	private AppleInAppPurchaseReceipt findMostRecentReceipt(List<AppleInAppPurchaseReceipt> receipts) { }

	// RVA: 0x140CFE4 Offset: 0x1408FE4 VA: 0x140CFE4
	private SubscriptionInfo getGooglePlayStoreSubInfo(string payload) { }
}


// Namespace: UnityEngine.Purchasing
public class SubscriptionInfo // TypeDefIndex: 6788
{
	// Fields
	private readonly Result is_subscribed; // 0x10
	private readonly Result is_expired; // 0x14
	private readonly Result is_cancelled; // 0x18
	private readonly Result is_free_trial; // 0x1C
	private readonly Result is_auto_renewing; // 0x20
	private readonly Result is_introductory_price_period; // 0x24
	private readonly string productId; // 0x28
	private readonly DateTime purchaseDate; // 0x30
	private readonly DateTime subscriptionExpireDate; // 0x38
	private readonly DateTime subscriptionCancelDate; // 0x40
	private readonly TimeSpan remainedTime; // 0x48
	private readonly string introductory_price; // 0x50
	private readonly TimeSpan introductory_price_period; // 0x58
	private readonly long introductory_price_cycles; // 0x60
	private readonly TimeSpan freeTrialPeriod; // 0x68
	private readonly TimeSpan subscriptionPeriod; // 0x70
	private readonly string free_trial_period_string; // 0x78
	private readonly string sku_details; // 0x80

	// Methods

	// RVA: 0x140346C Offset: 0x13FF46C VA: 0x140346C
	public void .ctor(AppleInAppPurchaseReceipt r, string intro_json) { }

	// RVA: 0x140DCF4 Offset: 0x1409CF4 VA: 0x140DCF4
	public void .ctor(string skuDetails, bool isAutoRenewing, DateTime purchaseDate, bool isFreeTrial, bool hasIntroductoryPriceTrial, bool purchaseHistorySupported, string updateMetadata) { }

	// RVA: 0x140DB28 Offset: 0x1409B28 VA: 0x140DB28
	public void .ctor(string productId) { }

	// RVA: 0x140EF10 Offset: 0x140AF10 VA: 0x140EF10
	public Result isExpired() { }

	// RVA: 0x140EF18 Offset: 0x140AF18 VA: 0x140EF18
	public Result isCancelled() { }

	// RVA: 0x140EF20 Offset: 0x140AF20 VA: 0x140EF20
	public DateTime getExpireDate() { }

	// RVA: 0x140EDCC Offset: 0x140ADCC VA: 0x140EDCC
	private DateTime nextBillingDate(DateTime billing_begin_date, TimeSpanUnits units) { }

	// RVA: 0x140EA84 Offset: 0x140AA84 VA: 0x140EA84
	private TimeSpan accumulateIntroductoryDuration(TimeSpanUnits units, long cycles) { }

	// RVA: 0x140E878 Offset: 0x140A878 VA: 0x140E878
	private TimeSpan computePeriodTimeSpan(TimeSpanUnits units) { }

	// RVA: 0x140EB38 Offset: 0x140AB38 VA: 0x140EB38
	private double computeExtraTime(string metadata, double new_sku_period_in_seconds) { }

	// RVA: 0x140E934 Offset: 0x140A934 VA: 0x140E934
	private TimeSpan parseTimeSpan(string period_string) { }

	// RVA: 0x140E64C Offset: 0x140A64C VA: 0x140E64C
	private TimeSpanUnits parsePeriodTimeSpanUnits(string time_span) { }
}


// Namespace: UnityEngine.Purchasing
public enum Result // TypeDefIndex: 6789
{
	// Fields
	public int value__; // 0x0
	public const Result True = 0;
	public const Result False = 1;
	public const Result Unsupported = 2;
}


// Namespace: UnityEngine.Purchasing
public enum SubscriptionPeriodUnit // TypeDefIndex: 6790
{
	// Fields
	public int value__; // 0x0
	public const SubscriptionPeriodUnit Day = 0;
	public const SubscriptionPeriodUnit Month = 1;
	public const SubscriptionPeriodUnit Week = 2;
	public const SubscriptionPeriodUnit Year = 3;
	public const SubscriptionPeriodUnit NotAvailable = 4;
}


// Namespace: UnityEngine.Purchasing
internal enum AppleStoreProductType // TypeDefIndex: 6791
{
	// Fields
	public int value__; // 0x0
	public const AppleStoreProductType NonConsumable = 0;
	public const AppleStoreProductType Consumable = 1;
	public const AppleStoreProductType NonRenewingSubscription = 2;
	public const AppleStoreProductType AutoRenewingSubscription = 3;
}


// Namespace: UnityEngine.Purchasing
public class ReceiptParserException : Exception // TypeDefIndex: 6792
{
	// Methods

	// RVA: 0x140EF28 Offset: 0x140AF28 VA: 0x140EF28
	public void .ctor() { }

	// RVA: 0x140EF80 Offset: 0x140AF80 VA: 0x140EF80
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing
public class InvalidProductTypeException : ReceiptParserException // TypeDefIndex: 6793
{
	// Methods

	// RVA: 0x140EFE8 Offset: 0x140AFE8 VA: 0x140EFE8
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class NullProductIdException : ReceiptParserException // TypeDefIndex: 6794
{
	// Methods

	// RVA: 0x140EFEC Offset: 0x140AFEC VA: 0x140EFEC
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class NullReceiptException : ReceiptParserException // TypeDefIndex: 6795
{
	// Methods

	// RVA: 0x140EFF0 Offset: 0x140AFF0 VA: 0x140EFF0
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class StoreSubscriptionInfoNotSupportedException : ReceiptParserException // TypeDefIndex: 6796
{
	// Methods

	// RVA: 0x140EFF4 Offset: 0x140AFF4 VA: 0x140EFF4
	public void .ctor(string message) { }
}


// Namespace: UnityEngine.Purchasing
internal class FakeTransactionHistoryExtensions : ITransactionHistoryExtensions, IStoreExtension // TypeDefIndex: 6797
{
	// Methods

	// RVA: 0x140EFF8 Offset: 0x140AFF8 VA: 0x140EFF8
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public interface ITransactionHistoryExtensions : IStoreExtension // TypeDefIndex: 6798
{}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class EnumerableExtensions.<>c__0<T> // TypeDefIndex: 6799
{
	// Fields
	public static readonly EnumerableExtensions.<>c__0<T> <>9; // 0x0
	public static Func<T, bool> <>9__0_0; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8750 Offset: 0xBB4750 VA: 0xBB8750
	|-EnumerableExtensions.<>c__0<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB880C Offset: 0xBB480C VA: 0xBB880C
	|-EnumerableExtensions.<>c__0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal bool <NonNull>b__0_0(T obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8814 Offset: 0xBB4814 VA: 0xBB8814
	|-EnumerableExtensions.<>c__0<__Il2CppFullySharedGenericType>.<NonNull>b__0_0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class EnumerableExtensions.<IgnoreExceptions>d__1<T, TException> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable // TypeDefIndex: 6800
{
	// Fields
	private int <>1__state; // 0x0
	private T <>2__current; // 0x0
	private int <>l__initialThreadId; // 0x0
	private IEnumerable<T> enumerable; // 0x0
	public IEnumerable<T> <>3__enumerable; // 0x0
	private Action<TException> onException; // 0x0
	public Action<TException> <>3__onException; // 0x0
	private IEnumerator<T> <enumerator>5__2; // 0x0
	private bool <hasNext>5__3; // 0x0

	// Properties
	private T System.Collections.Generic.IEnumerator<T>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: -1 Offset: -1
	public void .ctor(int <>1__state) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC0824 Offset: 0xBBC824 VA: 0xBC0824
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>..ctor
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 7
	private void System.IDisposable.Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC08BC Offset: 0xBBC8BC VA: 0xBC08BC
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.System.IDisposable.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 8
	private bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC0918 Offset: 0xBBC918 VA: 0xBC0918
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.MoveNext
	*/

	// RVA: -1 Offset: -1
	private void <>m__Finally1() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC0FB0 Offset: 0xBBCFB0 VA: 0xBC0FB0
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.<>m__Finally1
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 6
	private T System.Collections.Generic.IEnumerator<T>.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC10D0 Offset: 0xBBD0D0 VA: 0xBC10D0
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.System.Collections.Generic.IEnumerator<T>.get_Current
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 10
	private void System.Collections.IEnumerator.Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC1170 Offset: 0xBBD170 VA: 0xBC1170
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.System.Collections.IEnumerator.Reset
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 9
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC11A4 Offset: 0xBBD1A4 VA: 0xBC11A4
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.System.Collections.IEnumerator.get_Current
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 4
	private IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC1248 Offset: 0xBBD248 VA: 0xBC1248
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC13D0 Offset: 0xBBD3D0 VA: 0xBC13D0
	|-EnumerableExtensions.<IgnoreExceptions>d__1<__Il2CppFullySharedGenericType, object>.System.Collections.IEnumerable.GetEnumerator
	*/
}


// Namespace: UnityEngine.Purchasing
[Extension]
internal static class EnumerableExtensions // TypeDefIndex: 6801
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static IEnumerable<T> NonNull<T>(IEnumerable<T> enumerable) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB86DA4 Offset: 0xB82DA4 VA: 0xB86DA4
	|-EnumerableExtensions.NonNull<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static IEnumerable<T> IgnoreExceptions<T, TException>(IEnumerable<T> enumerable, Action<TException> onException) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB86CDC Offset: 0xB82CDC VA: 0xB86CDC
	|-EnumerableExtensions.IgnoreExceptions<__Il2CppFullySharedGenericType, object>
	*/
}


// Namespace: 
private struct ExponentialRetryPolicy.<>c__DisplayClass4_0.<<Invoke>g__Retry|0>d : IAsyncStateMachine // TypeDefIndex: 6802
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public ExponentialRetryPolicy.<>c__DisplayClass4_0 <>4__this; // 0x28
	private TaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x140F2D4 Offset: 0x140B2D4 VA: 0x140F2D4 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x140F468 Offset: 0x140B468 VA: 0x140F468 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
private struct ExponentialRetryPolicy.<>c__DisplayClass4_0.<<Invoke>g__WaitAndRetry|1>d : IAsyncStateMachine // TypeDefIndex: 6803
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public ExponentialRetryPolicy.<>c__DisplayClass4_0 <>4__this; // 0x20
	private TaskAwaiter <>u__1; // 0x28

	// Methods

	// RVA: 0x140F474 Offset: 0x140B474 VA: 0x140F474 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x140F710 Offset: 0x140B710 VA: 0x140F710 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ExponentialRetryPolicy.<>c__DisplayClass4_0 // TypeDefIndex: 6804
{
	// Fields
	public Action onRetryAction; // 0x10
	public int currentRetryDelay; // 0x18
	public ExponentialRetryPolicy <>4__this; // 0x20
	public Action<Action> actionToTry; // 0x28

	// Methods

	// RVA: 0x140F110 Offset: 0x140B110 VA: 0x140F110
	public void .ctor() { }

	[AsyncStateMachine(typeof(ExponentialRetryPolicy.<>c__DisplayClass4_0.<<Invoke>g__Retry|0>d))]
	// RVA: 0x140F184 Offset: 0x140B184 VA: 0x140F184
	internal void <Invoke>g__Retry|0() { }

	[AsyncStateMachine(typeof(ExponentialRetryPolicy.<>c__DisplayClass4_0.<<Invoke>g__WaitAndRetry|1>d))]
	// RVA: 0x140F214 Offset: 0x140B214 VA: 0x140F214
	internal Task <Invoke>g__WaitAndRetry|1() { }
}


// Namespace: UnityEngine.Purchasing
internal class ExponentialRetryPolicy : IRetryPolicy // TypeDefIndex: 6805
{
	// Fields
	private readonly int m_BaseRetryDelay; // 0x10
	private readonly int m_MaxRetryDelay; // 0x14
	private readonly int m_ExponentialFactor; // 0x18

	// Methods

	// RVA: 0x140F000 Offset: 0x140B000 VA: 0x140F000
	public void .ctor(int baseRetryDelay = 1000, int maxRetryDelay = 30000, int exponentialFactor = 2) { }

	// RVA: 0x140F03C Offset: 0x140B03C VA: 0x140F03C Slot: 4
	public void Invoke(Action<Action> actionToTry, Action onRetryAction) { }

	// RVA: 0x140F118 Offset: 0x140B118 VA: 0x140F118
	private int AdjustDelay(int delay) { }
}


// Namespace: 
private struct GoogleConnectionRetryPolicy.<>c__DisplayClass4_0.<<Invoke>g__WaitAndRetry|0>d : IAsyncStateMachine // TypeDefIndex: 6806
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public GoogleConnectionRetryPolicy.<>c__DisplayClass4_0 <>4__this; // 0x28
	private TaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x140F93C Offset: 0x140B93C VA: 0x140F93C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x140FBA8 Offset: 0x140BBA8 VA: 0x140FBA8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleConnectionRetryPolicy.<>c__DisplayClass4_0 // TypeDefIndex: 6807
{
	// Fields
	public int currentRetryDelay; // 0x10
	public GoogleConnectionRetryPolicy <>4__this; // 0x18
	public Action<Action> actionToTry; // 0x20
	public Action onRetryAction; // 0x28
	public int retryAttempts; // 0x30

	// Methods

	// RVA: 0x140F838 Offset: 0x140B838 VA: 0x140F838
	public void .ctor() { }

	[AsyncStateMachine(typeof(GoogleConnectionRetryPolicy.<>c__DisplayClass4_0.<<Invoke>g__WaitAndRetry|0>d))]
	// RVA: 0x140F840 Offset: 0x140B840 VA: 0x140F840
	internal void <Invoke>g__WaitAndRetry|0() { }
}


// Namespace: UnityEngine.Purchasing
internal class GoogleConnectionRetryPolicy : IRetryPolicy // TypeDefIndex: 6808
{
	// Fields
	private readonly int m_BaseRetryDelay; // 0x10
	private readonly int m_MaxRetryDelay; // 0x14
	private readonly int m_ExponentialFactor; // 0x18

	// Methods

	// RVA: 0x140F778 Offset: 0x140B778 VA: 0x140F778
	public void .ctor(int baseRetryDelay = 2000, int maxRetryDelay = 30000, int exponentialFactor = 2) { }

	// RVA: 0x140F7B4 Offset: 0x140B7B4 VA: 0x140F7B4 Slot: 4
	public void Invoke(Action<Action> actionToTry, Action onRetryAction) { }

	// RVA: 0x140F8D0 Offset: 0x140B8D0 VA: 0x140F8D0
	private int AdjustDelay(int delay) { }
}


// Namespace: UnityEngine.Purchasing
[Extension]
internal static class ProductDefinitionExtensions // TypeDefIndex: 6809
{
	// Methods

	[Extension]
	// RVA: 0x140FBB4 Offset: 0x140BBB4 VA: 0x140FBB4
	internal static List<ProductDefinition> DecodeJSON(List<object> productsList, string storeName) { }
}


// Namespace: UnityEngine.Purchasing
internal class FakeMicrosoftExtensions : IMicrosoftExtensions, IStoreExtension // TypeDefIndex: 6810
{
	// Methods

	// RVA: 0x1410398 Offset: 0x140C398 VA: 0x1410398 Slot: 4
	public void RestoreTransactions() { }

	// RVA: 0x141039C Offset: 0x140C39C VA: 0x141039C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public interface IMicrosoftConfiguration : IStoreConfiguration // TypeDefIndex: 6811
{}


// Namespace: UnityEngine.Purchasing
public interface IMicrosoftExtensions : IStoreExtension // TypeDefIndex: 6812
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RestoreTransactions();
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class WinRTStore.<>c // TypeDefIndex: 6813
{
	// Fields
	public static readonly WinRTStore.<>c <>9; // 0x0
	public static Func<ProductDefinition, bool> <>9__8_0; // 0x8
	public static Func<ProductDefinition, WinProductDescription> <>9__8_1; // 0x10

	// Methods

	// RVA: 0x1410A28 Offset: 0x140CA28 VA: 0x1410A28
	private static void .cctor() { }

	// RVA: 0x1410A84 Offset: 0x140CA84 VA: 0x1410A84
	public void .ctor() { }

	// RVA: 0x1410A8C Offset: 0x140CA8C VA: 0x1410A8C
	internal bool <RetrieveProducts>b__8_0(ProductDefinition def) { }

	// RVA: 0x1410AAC Offset: 0x140CAAC VA: 0x1410AAC
	internal WinProductDescription <RetrieveProducts>b__8_1(ProductDefinition def) { }
}


// Namespace: UnityEngine.Purchasing
internal class WinRTStore : AbstractStore, IWindowsIAPCallback, IMicrosoftExtensions, IStoreExtension // TypeDefIndex: 6814
{
	// Fields
	private IWindowsIAP win8; // 0x10
	private IStoreCallback callback; // 0x18
	private readonly IUtil util; // 0x20
	private readonly ILogger logger; // 0x28
	private bool m_CanReceivePurchases; // 0x30

	// Methods

	// RVA: 0x14103A4 Offset: 0x140C3A4 VA: 0x14103A4
	public void .ctor(IWindowsIAP win8, IUtil util, ILogger logger) { }

	// RVA: 0x14103E0 Offset: 0x140C3E0 VA: 0x14103E0 Slot: 8
	public override void Initialize(IStoreCallback biller) { }

	// RVA: 0x14103E8 Offset: 0x140C3E8 VA: 0x14103E8 Slot: 9
	public override void RetrieveProducts(ReadOnlyCollection<ProductDefinition> productDefs) { }

	// RVA: 0x1410750 Offset: 0x140C750 VA: 0x1410750 Slot: 11
	public override void FinishTransaction(ProductDefinition product, string transactionId) { }

	// RVA: 0x1410640 Offset: 0x140C640 VA: 0x1410640
	private void init(int delay) { }

	// RVA: 0x14107FC Offset: 0x140C7FC VA: 0x14107FC Slot: 10
	public override void Purchase(ProductDefinition product, string developerPayload) { }

	// RVA: 0x14108B0 Offset: 0x140C8B0 VA: 0x14108B0
	public void restoreTransactions(bool pausing) { }

	// RVA: 0x1410974 Offset: 0x140C974 VA: 0x1410974 Slot: 12
	public void RestoreTransactions() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UnityUtil.<DelayedCoroutine>d__48 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6815
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public int delay; // 0x20
	public UnityUtil <>4__this; // 0x28
	public IEnumerator coroutine; // 0x30

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x1411310 Offset: 0x140D310 VA: 0x1411310
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x1411A70 Offset: 0x140DA70 VA: 0x1411A70 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x1411A74 Offset: 0x140DA74 VA: 0x1411A74 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1411B24 Offset: 0x140DB24 VA: 0x1411B24 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x1411B2C Offset: 0x140DB2C VA: 0x1411B2C Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x1411B64 Offset: 0x140DB64 VA: 0x1411B64 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: UnityEngine.Purchasing.Extension
internal class UnityUtil : MonoBehaviour, IUtil // TypeDefIndex: 6816
{
	// Fields
	private static readonly List<Action> s_Callbacks; // 0x0
	private static bool s_CallbacksPending; // 0x8
	private static readonly List<RuntimePlatform> s_PcControlledPlatforms; // 0x10
	private readonly List<Action<bool>> pauseListeners; // 0x20

	// Properties
	public DateTime currentTime { get; }
	public string persistentDataPath { get; }
	public string deviceUniqueIdentifier { get; }
	public string unityVersion { get; }
	public string cloudProjectId { get; }
	public string userId { get; }
	public string gameVersion { get; }
	public ulong sessionId { get; }
	public RuntimePlatform platform { get; }
	public bool isEditor { get; }
	public string deviceModel { get; }
	public string deviceName { get; }
	public DeviceType deviceType { get; }
	public string operatingSystem { get; }
	public int screenWidth { get; }
	public int screenHeight { get; }
	public float screenDpi { get; }
	public string screenOrientation { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 9
	public T[] GetAnyComponentsOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF1D0 Offset: 0xBAB1D0 VA: 0xBAF1D0
	|-UnityUtil.GetAnyComponentsOfType<object>
	*/

	// RVA: 0x1410C1C Offset: 0x140CC1C VA: 0x1410C1C Slot: 10
	public DateTime get_currentTime() { }

	// RVA: 0x1410C6C Offset: 0x140CC6C VA: 0x1410C6C Slot: 11
	public string get_persistentDataPath() { }

	// RVA: 0x1410CBC Offset: 0x140CCBC VA: 0x1410CBC Slot: 12
	public string get_deviceUniqueIdentifier() { }

	// RVA: 0x1410CC4 Offset: 0x140CCC4 VA: 0x1410CC4 Slot: 13
	public string get_unityVersion() { }

	// RVA: 0x1410D14 Offset: 0x140CD14 VA: 0x1410D14 Slot: 14
	public string get_cloudProjectId() { }

	// RVA: 0x1410D64 Offset: 0x140CD64 VA: 0x1410D64 Slot: 15
	public string get_userId() { }

	// RVA: 0x1410DC8 Offset: 0x140CDC8 VA: 0x1410DC8 Slot: 16
	public string get_gameVersion() { }

	// RVA: 0x1410E18 Offset: 0x140CE18 VA: 0x1410E18 Slot: 17
	public ulong get_sessionId() { }

	// RVA: 0x1410E7C Offset: 0x140CE7C VA: 0x1410E7C Slot: 18
	public RuntimePlatform get_platform() { }

	// RVA: 0x1410ECC Offset: 0x140CECC VA: 0x1410ECC Slot: 19
	public bool get_isEditor() { }

	// RVA: 0x1410F1C Offset: 0x140CF1C VA: 0x1410F1C Slot: 20
	public string get_deviceModel() { }

	// RVA: 0x1410F24 Offset: 0x140CF24 VA: 0x1410F24 Slot: 21
	public string get_deviceName() { }

	// RVA: 0x1410F2C Offset: 0x140CF2C VA: 0x1410F2C Slot: 22
	public DeviceType get_deviceType() { }

	// RVA: 0x1410F34 Offset: 0x140CF34 VA: 0x1410F34 Slot: 23
	public string get_operatingSystem() { }

	// RVA: 0x1410F3C Offset: 0x140CF3C VA: 0x1410F3C Slot: 24
	public int get_screenWidth() { }

	// RVA: 0x1410F44 Offset: 0x140CF44 VA: 0x1410F44 Slot: 25
	public int get_screenHeight() { }

	// RVA: 0x1410F4C Offset: 0x140CF4C VA: 0x1410F4C Slot: 26
	public float get_screenDpi() { }

	// RVA: 0x1410F54 Offset: 0x140CF54 VA: 0x1410F54 Slot: 27
	public string get_screenOrientation() { }

	// RVA: 0x1410FBC Offset: 0x140CFBC VA: 0x1410FBC Slot: 4
	private object Uniject.IUtil.InitiateCoroutine(IEnumerator start) { }

	// RVA: 0x1410FC4 Offset: 0x140CFC4 VA: 0x1410FC4 Slot: 5
	private void Uniject.IUtil.InitiateCoroutine(IEnumerator start, int delay) { }

	// RVA: 0x141103C Offset: 0x140D03C VA: 0x141103C Slot: 6
	public void RunOnMainThread(Action runnable) { }

	// RVA: 0x141118C Offset: 0x140D18C VA: 0x141118C Slot: 28
	public object GetWaitForSeconds(int seconds) { }

	// RVA: 0x14111E8 Offset: 0x140D1E8 VA: 0x14111E8
	private void Start() { }

	// RVA: -1 Offset: -1
	public static T FindInstanceOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF0EC Offset: 0xBAB0EC VA: 0xBAF0EC
	|-UnityUtil.FindInstanceOfType<object>
	*/

	// RVA: -1 Offset: -1
	public static T LoadResourceInstanceOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF460 Offset: 0xBAB460 VA: 0xBAF460
	|-UnityUtil.LoadResourceInstanceOfType<object>
	*/

	// RVA: 0x1411254 Offset: 0x140D254 VA: 0x1411254
	public static bool PcPlatform() { }

	// RVA: 0x1410FC8 Offset: 0x140CFC8 VA: 0x1410FC8
	private IEnumerator DelayedCoroutine(IEnumerator coroutine, int delay) { }

	// RVA: 0x1411338 Offset: 0x140D338 VA: 0x1411338
	private void Update() { }

	// RVA: 0x1411614 Offset: 0x140D614 VA: 0x1411614 Slot: 7
	public void AddPauseListener(Action<bool> runnable) { }

	// RVA: 0x141166C Offset: 0x140D66C VA: 0x141166C
	public void OnApplicationPause(bool paused) { }

	// RVA: 0x14117F4 Offset: 0x140D7F4 VA: 0x14117F4 Slot: 8
	public bool IsClassOrSubclass(Type potentialBase, Type potentialDescendant) { }

	// RVA: 0x1411888 Offset: 0x140D888 VA: 0x1411888
	public void .ctor() { }

	// RVA: 0x1411904 Offset: 0x140D904 VA: 0x1411904
	private static void .cctor() { }
}


// Namespace: UnityEngine.Purchasing.Stores.Util
internal interface IRetryPolicy // TypeDefIndex: 6817
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Invoke(Action<Action> actionToTry, Action onRetryAction);
}


// Namespace: 
[CompilerGenerated]
private sealed class IapCoreInitializeCallback.<>c__DisplayClass2_0 // TypeDefIndex: 6818
{
	// Fields
	public CoreRegistry registry; // 0x10
	public ITelemetryMetricsInstanceWrapper metricsInstanceWrapper; // 0x18
	public ITelemetryDiagnosticsInstanceWrapper diagnosticsInstanceWrapper; // 0x20

	// Methods

	// RVA: 0x1411EEC Offset: 0x140DEEC VA: 0x1411EEC
	public void .ctor() { }

	// RVA: 0x1412358 Offset: 0x140E358 VA: 0x1412358
	internal void <Initialize>b__0() { }
}


// Namespace: UnityEngine.Purchasing.Registration
internal class IapCoreInitializeCallback : IInitializablePackage // TypeDefIndex: 6819
{
	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1411B6C Offset: 0x140DB6C VA: 0x1411B6C
	private static void Register() { }

	// RVA: 0x1411CB0 Offset: 0x140DCB0 VA: 0x1411CB0 Slot: 4
	public Task Initialize(CoreRegistry registry) { }

	// RVA: 0x1411EF4 Offset: 0x140DEF4 VA: 0x1411EF4
	private static void CacheInitializedEnvironment(CoreRegistry registry) { }

	// RVA: 0x1411F20 Offset: 0x140DF20 VA: 0x1411F20
	private static string GetCurrentEnvironment(CoreRegistry registry) { }

	// RVA: 0x141206C Offset: 0x140E06C VA: 0x141206C
	private static void InitializeTelemetryComponents(ITelemetryMetricsInstanceWrapper metricsInstanceWrapper, ITelemetryDiagnosticsInstanceWrapper diagnosticsInstanceWrapper) { }

	// RVA: 0x1411CA8 Offset: 0x140DCA8 VA: 0x1411CA8
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePurchaseBuilder.<>c__DisplayClass6_0 // TypeDefIndex: 6820
{
	// Fields
	public IEnumerable<AndroidJavaObject> productDetails; // 0x10

	// Methods

	// RVA: 0x14133FC Offset: 0x140F3FC VA: 0x14133FC
	public void .ctor() { }

	// RVA: 0x1413404 Offset: 0x140F404 VA: 0x1413404
	internal AndroidJavaObject <TryFindAllProductDetails>b__0(string sku) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class GooglePurchaseBuilder.<>c__DisplayClass6_1 // TypeDefIndex: 6821
{
	// Fields
	public string sku; // 0x10

	// Methods

	// RVA: 0x14134E4 Offset: 0x140F4E4 VA: 0x14134E4
	public void .ctor() { }

	// RVA: 0x14134EC Offset: 0x140F4EC VA: 0x14134EC
	internal bool <TryFindAllProductDetails>b__1(AndroidJavaObject productDetail) { }
}


// Namespace: UnityEngine.Purchasing.Utils
internal class GooglePurchaseBuilder : IGooglePurchaseBuilder // TypeDefIndex: 6822
{
	// Fields
	private readonly IGoogleCachedQueryProductDetailsService m_CachedQueryProductDetailsService; // 0x10
	private readonly ILogger m_Logger; // 0x18

	// Methods

	// RVA: 0x1412374 Offset: 0x140E374 VA: 0x1412374
	public void .ctor(IGoogleCachedQueryProductDetailsService cachedQueryProductDetailsService, ILogger logger) { }

	// RVA: 0x14123A0 Offset: 0x140E3A0 VA: 0x14123A0 Slot: 4
	public IEnumerable<IGooglePurchase> BuildPurchases(IEnumerable<AndroidJavaObject> purchases) { }

	// RVA: 0x14124D0 Offset: 0x140E4D0 VA: 0x14124D0
	private void LogWarningForException(Exception exception) { }

	// RVA: 0x1412508 Offset: 0x140E508 VA: 0x1412508 Slot: 5
	public IGooglePurchase BuildPurchase(AndroidJavaObject purchase) { }

	// RVA: 0x1412ABC Offset: 0x140EABC VA: 0x1412ABC
	private static IEnumerable<AndroidJavaObject> TryFindAllProductDetails(IEnumerable<string> skus, IEnumerable<AndroidJavaObject> productDetails) { }
}


// Namespace: UnityEngine.Purchasing.Utils
internal static class GoogleReceiptEncoder // TypeDefIndex: 6823
{
	// Methods

	// RVA: 0x14135E4 Offset: 0x140F5E4 VA: 0x14135E4
	internal static string EncodeReceipt(string purchaseOriginalJson, string purchaseSignature, List<string> productDetailsJson) { }
}


// Namespace: UnityEngine.Purchasing.Utils
internal class ProductDetailsConverter : IProductDetailsConverter // TypeDefIndex: 6824
{
	// Methods

	// RVA: 0x1413700 Offset: 0x140F700 VA: 0x1413700 Slot: 4
	public List<ProductDescription> ConvertOnQueryProductDetailsResponse(IEnumerable<AndroidJavaObject> productDetails) { }

	// RVA: 0x14137BC Offset: 0x140F7BC VA: 0x14137BC
	private static ProductDescription ToProductDescription(AndroidJavaObject productDetails) { }

	// RVA: 0x1413860 Offset: 0x140F860 VA: 0x1413860
	internal static ProductDescription BuildProductDescription(AndroidJavaObject productDetails) { }

	// RVA: 0x141529C Offset: 0x141129C VA: 0x141529C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IBillingClientStateListener // TypeDefIndex: 6825
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RegisterOnConnected(Action onConnected);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RegisterOnDisconnected(Action<GoogleBillingResponseCode> onDisconnected);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGoogleBillingClient // TypeDefIndex: 6826
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void StartConnection(IBillingClientStateListener billingClientStateListener);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract GoogleBillingConnectionState GetConnectionState();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void QueryPurchasesAsync(string skuType, Action<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> onQueryPurchasesResponse);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void QueryProductDetailsAsync(List<string> skus, string type, Action<IGoogleBillingResult, List<AndroidJavaObject>> onProductDetailsResponseAction);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract AndroidJavaObject LaunchBillingFlow(AndroidJavaObject productDetails, string oldPurchaseToken, Nullable<GooglePlayReplacementMode> replacementMode);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void ConsumeAsync(string purchaseToken, Action<IGoogleBillingResult> onConsume);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void AcknowledgePurchase(string purchaseToken, Action<IGoogleBillingResult> onAcknowledge);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGoogleFinishTransactionService // TypeDefIndex: 6827
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void FinishTransaction(ProductDefinition product, string purchaseToken, Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGoogleLastKnownProductService // TypeDefIndex: 6828
{
	// Properties
	public abstract string LastKnownOldProductId { get; set; }
	public abstract string LastKnownProductId { get; set; }
	public abstract Nullable<GooglePlayReplacementMode> LastKnownReplacementMode { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_LastKnownOldProductId();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void set_LastKnownOldProductId(string value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_LastKnownProductId();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void set_LastKnownProductId(string value);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Nullable<GooglePlayReplacementMode> get_LastKnownReplacementMode();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void set_LastKnownReplacementMode(Nullable<GooglePlayReplacementMode> value);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePlayStoreService // TypeDefIndex: 6829
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RetrieveProducts(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived, Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductFailed);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Purchase(ProductDefinition product);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void FinishTransaction(ProductDefinition product, string purchaseToken, Action<IGoogleBillingResult, IGooglePurchase> onTransactionFinished);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void FetchPurchases(Action<List<IGooglePurchase>> onQueryPurchaseSucceed);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract IGooglePurchase GetPurchase(string purchaseToken, string skuType);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void ResumeConnection();
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGoogleProductCallback // TypeDefIndex: 6830
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetStoreConfiguration(IGooglePlayConfigurationInternal configuration);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void NotifyQueryProductDetailsFailed(int retryCount);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePurchase // TypeDefIndex: 6831
{
	// Properties
	public abstract int purchaseState { get; }
	public abstract List<string> skus { get; }
	public abstract string receipt { get; }
	public abstract string purchaseToken { get; }
	public abstract string sku { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int get_purchaseState();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract List<string> get_skus();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_receipt();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string get_purchaseToken();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string get_sku();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool IsAcknowledged();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool IsPurchased();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool IsPending();
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePurchaseBuilder // TypeDefIndex: 6832
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IEnumerable<IGooglePurchase> BuildPurchases(IEnumerable<AndroidJavaObject> purchases);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IGooglePurchase BuildPurchase(AndroidJavaObject purchase);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePurchaseCallback // TypeDefIndex: 6833
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetStoreCallback(IStoreCallback storeCallback);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetStoreConfiguration(IGooglePlayConfigurationInternal configuration);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnPurchaseSuccessful(IGooglePurchase purchase, string receipt, string purchaseToken);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnPurchaseFailed(PurchaseFailureDescription purchaseFailureDescription);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void NotifyDeferredPurchase(IGooglePurchase purchase, string receipt, string purchaseToken);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void NotifyDeferredProrationUpgradeDowngradeSubscription(string sku);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePurchaseService // TypeDefIndex: 6834
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Purchase(ProductDefinition product, Product oldProduct, Nullable<GooglePlayReplacementMode> desiredReplacementMode);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePurchaseStateEnumProvider // TypeDefIndex: 6835
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int Purchased();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int Pending();
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGooglePurchaseUpdatedListener // TypeDefIndex: 6836
{}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IGoogleQueryPurchasesService // TypeDefIndex: 6837
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Task<List<IGooglePurchase>> QueryPurchases();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IGooglePurchase GetPurchaseByToken(string token, string skuType);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IProductDetailsConverter // TypeDefIndex: 6838
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract List<ProductDescription> ConvertOnQueryProductDetailsResponse(IEnumerable<AndroidJavaObject> productDetails);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IProductDetailsResponseConsolidator // TypeDefIndex: 6839
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Consolidate(IGoogleBillingResult billingResult, IEnumerable<AndroidJavaObject> productDetails);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IQueryProductDetailsService // TypeDefIndex: 6840
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void QueryAsyncProduct(ProductDefinition product, Action<List<AndroidJavaObject>, IGoogleBillingResult> onProductDetailsResponse);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void QueryAsyncProduct(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductDetailsResponse);
}


// Namespace: UnityEngine.Purchasing.Interfaces
internal interface IProductDetailsQueryResponse // TypeDefIndex: 6841
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void AddResponse(IGoogleBillingResult billingResult, IEnumerable<AndroidJavaObject> productDetails);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract List<AndroidJavaObject> ProductDetails();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool IsRecoverable();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract IGoogleBillingResult GetGoogleBillingResult();
}


// Namespace: 
[CompilerGenerated]
private sealed class AndroidJavaObjectExtensions.<>c__DisplayClass0_0<T> // TypeDefIndex: 6842
{
	// Fields
	public AndroidJavaObject androidJavaList; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB903C Offset: 0xBB503C VA: 0xBB903C
	|-AndroidJavaObjectExtensions.<>c__DisplayClass0_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal T <Enumerate>b__0(int i) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9044 Offset: 0xBB5044 VA: 0xBB9044
	|-AndroidJavaObjectExtensions.<>c__DisplayClass0_0<__Il2CppFullySharedGenericType>.<Enumerate>b__0
	*/
}


// Namespace: UnityEngine.Purchasing.Models
[Extension]
internal static class AndroidJavaObjectExtensions // TypeDefIndex: 6843
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	internal static IEnumerable<T> Enumerate<T>(AndroidJavaObject androidJavaList) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB74120 Offset: 0xB70120 VA: 0xB74120
	|-AndroidJavaObjectExtensions.Enumerate<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: 0x1415254 Offset: 0x1411254 VA: 0x1415254
	internal static IEnumerable<AndroidJavaObject> Enumerate(AndroidJavaObject androidJavaList) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal interface IGoogleBillingResult // TypeDefIndex: 6844
{
	// Properties
	public abstract GoogleBillingResponseCode responseCode { get; }
	public abstract string debugMessage { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract GoogleBillingResponseCode get_responseCode();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_debugMessage();
}


// Namespace: 
[CompilerGenerated]
private sealed class GoogleBillingClient.<>c__DisplayClass39_0 // TypeDefIndex: 6845
{
	// Fields
	public string type; // 0x10

	// Methods

	// RVA: 0x14166B8 Offset: 0x14126B8 VA: 0x14166B8
	public void .ctor() { }

	// RVA: 0x1418708 Offset: 0x1414708 VA: 0x1418708
	internal AndroidJavaObject <QueryProductDetailsParamsProductList>b__0(string product) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal class GoogleBillingClient : IGoogleBillingClient // TypeDefIndex: 6846
{
	// Fields
	private static AndroidJavaClass s_AndroidProductClassName; // 0x0
	private static AndroidJavaClass s_AndroidQueryProductDetailsParamsClassName; // 0x8
	private static AndroidJavaClass s_BillingFlowParamsClass; // 0x10
	private static AndroidJavaClass s_ProductDetailsParamsClass; // 0x18
	private static AndroidJavaClass s_SubscriptionUpdateParamsClass; // 0x20
	private static AndroidJavaClass s_ConsumeParamsClass; // 0x28
	private static AndroidJavaClass s_AcknowledgePurchaseParamsClass; // 0x30
	private static AndroidJavaClass s_BillingClientClass; // 0x38
	private readonly AndroidJavaObject m_BillingClient; // 0x10
	private string m_ObfuscatedAccountId; // 0x18
	private string m_ObfuscatedProfileId; // 0x20
	private readonly IUtil m_Util; // 0x28
	private readonly ITelemetryDiagnostics m_TelemetryDiagnostics; // 0x30

	// Methods

	// RVA: 0x14152A4 Offset: 0x14112A4 VA: 0x14152A4
	private static AndroidJavaClass GetProductParamsClass() { }

	// RVA: 0x1415348 Offset: 0x1411348 VA: 0x1415348
	private static AndroidJavaClass GetQueryProductDetailsParamsParamsClass() { }

	// RVA: 0x14153E4 Offset: 0x14113E4 VA: 0x14153E4
	private static AndroidJavaClass GetBillingFlowParamClass() { }

	// RVA: 0x1415480 Offset: 0x1411480 VA: 0x1415480
	private static AndroidJavaClass GetProductDetailsParamsClass() { }

	// RVA: 0x141551C Offset: 0x141151C VA: 0x141551C
	private static AndroidJavaClass GetSubscriptionUpdateParamClass() { }

	// RVA: 0x14155B8 Offset: 0x14115B8 VA: 0x14155B8
	private static AndroidJavaClass GetConsumeParamsClass() { }

	// RVA: 0x1415654 Offset: 0x1411654 VA: 0x1415654
	private static AndroidJavaClass GetAcknowledgePurchaseParamsClass() { }

	// RVA: 0x14156F0 Offset: 0x14116F0 VA: 0x14156F0
	private static AndroidJavaClass GetBillingClientClass() { }

	// RVA: 0x141578C Offset: 0x141178C VA: 0x141578C
	internal void .ctor(IGooglePurchaseUpdatedListener googlePurchaseUpdatedListener, IUtil util, ITelemetryDiagnostics telemetryDiagnostics) { }

	// RVA: 0x1415BA4 Offset: 0x1411BA4 VA: 0x1415BA4 Slot: 4
	public void StartConnection(IBillingClientStateListener billingClientStateListener) { }

	// RVA: 0x1415C68 Offset: 0x1411C68 VA: 0x1415C68 Slot: 5
	public GoogleBillingConnectionState GetConnectionState() { }

	// RVA: 0x1415D4C Offset: 0x1411D4C VA: 0x1415D4C Slot: 6
	public void QueryPurchasesAsync(string skuType, Action<IGoogleBillingResult, IEnumerable<AndroidJavaObject>> onQueryPurchasesResponse) { }

	// RVA: 0x1415E70 Offset: 0x1411E70 VA: 0x1415E70 Slot: 7
	public void QueryProductDetailsAsync(List<string> products, string type, Action<IGoogleBillingResult, List<AndroidJavaObject>> onProductDetailsResponseAction) { }

	// RVA: 0x1416104 Offset: 0x1412104 VA: 0x1416104
	private static AndroidJavaObject QueryProductDetailsParams(List<string> products, string type) { }

	// RVA: 0x14165A8 Offset: 0x14125A8 VA: 0x14165A8
	private static AndroidJavaObject QueryProductDetailsParamsProductList(List<string> products, string type) { }

	// RVA: 0x14166C0 Offset: 0x14126C0 VA: 0x14166C0
	private static AndroidJavaObject QueryProductDetailsParamsProduct(string type, string product) { }

	// RVA: 0x1416AC4 Offset: 0x1412AC4 VA: 0x1416AC4 Slot: 8
	public AndroidJavaObject LaunchBillingFlow(AndroidJavaObject productDetails, string oldPurchaseToken, Nullable<GooglePlayReplacementMode> replacementMode) { }

	// RVA: 0x141745C Offset: 0x141345C VA: 0x141745C
	private AndroidJavaObject MakeBillingFlowParams(AndroidJavaObject productDetailsParamsList, string oldPurchaseToken, Nullable<GooglePlayReplacementMode> replacementMode) { }

	// RVA: 0x141796C Offset: 0x141396C VA: 0x141796C
	private static AndroidJavaObject BuildSubscriptionUpdateParams(string oldPurchaseToken, GooglePlayReplacementMode replacementMode) { }

	// RVA: 0x141787C Offset: 0x141387C VA: 0x141787C
	private AndroidJavaObject SetObfuscatedProfileIdIfNeeded(AndroidJavaObject billingFlowParams) { }

	// RVA: 0x141778C Offset: 0x141378C VA: 0x141778C
	private AndroidJavaObject SetObfuscatedAccountIdIfNeeded(AndroidJavaObject billingFlowParams) { }

	// RVA: 0x1417C20 Offset: 0x1413C20 VA: 0x1417C20 Slot: 9
	public void ConsumeAsync(string purchaseToken, Action<IGoogleBillingResult> onConsume) { }

	// RVA: 0x1418194 Offset: 0x1414194 VA: 0x1418194 Slot: 10
	public void AcknowledgePurchase(string purchaseToken, Action<IGoogleBillingResult> onAcknowledge) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal class GoogleBillingResult : IGoogleBillingResult // TypeDefIndex: 6847
{
	// Fields
	[CompilerGenerated]
	private readonly GoogleBillingResponseCode <responseCode>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly string <debugMessage>k__BackingField; // 0x18

	// Properties
	public GoogleBillingResponseCode responseCode { get; }
	public string debugMessage { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1418710 Offset: 0x1414710 VA: 0x1418710 Slot: 4
	public GoogleBillingResponseCode get_responseCode() { }

	[CompilerGenerated]
	// RVA: 0x1418718 Offset: 0x1414718 VA: 0x1418718 Slot: 5
	public string get_debugMessage() { }

	// RVA: 0x1418720 Offset: 0x1414720 VA: 0x1418720
	internal void .ctor(AndroidJavaObject billingResult) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal static class GoogleBillingStrings // TypeDefIndex: 6848
{
	// Methods

	// RVA: 0x14188AC Offset: 0x14148AC VA: 0x14188AC
	internal static string getWarningMessageMoreThanOneSkuFound(string sku) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal static class GoogleProductTypeEnum // TypeDefIndex: 6849
{
	// Methods

	// RVA: 0x1418918 Offset: 0x1414918 VA: 0x1418918
	internal static string InApp() { }

	// RVA: 0x1418958 Offset: 0x1414958 VA: 0x1418958
	internal static string Sub() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class GooglePurchase.<>c // TypeDefIndex: 6850
{
	// Fields
	public static readonly GooglePurchase.<>c <>9; // 0x0
	public static Func<AndroidJavaObject, string> <>9__32_0; // 0x8

	// Methods

	// RVA: 0x1418F74 Offset: 0x1414F74 VA: 0x1418F74
	private static void .cctor() { }

	// RVA: 0x1418FD0 Offset: 0x1414FD0 VA: 0x1418FD0
	public void .ctor() { }

	// RVA: 0x1418FD8 Offset: 0x1414FD8 VA: 0x1418FD8
	internal string <.ctor>b__32_0(AndroidJavaObject productDetails) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal class GooglePurchase : IGooglePurchase // TypeDefIndex: 6851
{
	// Fields
	[CompilerGenerated]
	private readonly bool <isAcknowledged>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly int <purchaseState>k__BackingField; // 0x14
	[CompilerGenerated]
	private readonly List<string> <skus>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly string <orderId>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly string <receipt>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly string <signature>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly string <originalJson>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly string <purchaseToken>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly string <obfuscatedAccountId>k__BackingField; // 0x48
	[CompilerGenerated]
	private readonly string <obfuscatedProfileId>k__BackingField; // 0x50

	// Properties
	public bool isAcknowledged { get; }
	public int purchaseState { get; }
	public List<string> skus { get; }
	public string receipt { get; }
	public string signature { get; }
	public string originalJson { get; }
	public string purchaseToken { get; }
	public string sku { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1418998 Offset: 0x1414998 VA: 0x1418998
	public bool get_isAcknowledged() { }

	[CompilerGenerated]
	// RVA: 0x14189A0 Offset: 0x14149A0 VA: 0x14189A0 Slot: 4
	public int get_purchaseState() { }

	[CompilerGenerated]
	// RVA: 0x14189A8 Offset: 0x14149A8 VA: 0x14189A8 Slot: 5
	public List<string> get_skus() { }

	[CompilerGenerated]
	// RVA: 0x14189B0 Offset: 0x14149B0 VA: 0x14189B0 Slot: 6
	public string get_receipt() { }

	[CompilerGenerated]
	// RVA: 0x14189B8 Offset: 0x14149B8 VA: 0x14189B8 Slot: 12
	public string get_signature() { }

	[CompilerGenerated]
	// RVA: 0x14189C0 Offset: 0x14149C0 VA: 0x14189C0 Slot: 13
	public string get_originalJson() { }

	[CompilerGenerated]
	// RVA: 0x14189C8 Offset: 0x14149C8 VA: 0x14189C8 Slot: 7
	public string get_purchaseToken() { }

	// RVA: 0x14189D0 Offset: 0x14149D0 VA: 0x14189D0 Slot: 8
	public string get_sku() { }

	// RVA: 0x1412B8C Offset: 0x140EB8C VA: 0x1412B8C
	internal void .ctor(AndroidJavaObject purchase, IEnumerable<AndroidJavaObject> productDetailsEnum) { }

	// RVA: 0x1418A2C Offset: 0x1414A2C VA: 0x1418A2C Slot: 14
	public virtual bool IsAcknowledged() { }

	// RVA: 0x1418A34 Offset: 0x1414A34 VA: 0x1418A34 Slot: 15
	public virtual bool IsPurchased() { }

	// RVA: 0x1418CD0 Offset: 0x1414CD0 VA: 0x1418CD0 Slot: 16
	public virtual bool IsPending() { }
}


// Namespace: UnityEngine.Purchasing.Models
internal static class GooglePurchaseStateEnum // TypeDefIndex: 6852
{
	// Fields
	private static Nullable<int> s_Purchased; // 0x0
	private static Nullable<int> s_Pending; // 0x8

	// Methods

	// RVA: 0x1419008 Offset: 0x1415008 VA: 0x1419008
	private static AndroidJavaObject GetPurchaseStateJavaObject() { }

	// RVA: 0x1418A50 Offset: 0x1414A50 VA: 0x1418A50
	internal static int Purchased() { }

	// RVA: 0x1418CEC Offset: 0x1414CEC VA: 0x1418CEC
	internal static int Pending() { }
}


// Namespace: UnityEngine.Purchasing.Models
internal class GooglePurchaseStateEnumProvider : IGooglePurchaseStateEnumProvider // TypeDefIndex: 6853
{
	// Methods

	// RVA: 0x1419074 Offset: 0x1415074 VA: 0x1419074 Slot: 4
	public int Purchased() { }

	// RVA: 0x1419078 Offset: 0x1415078 VA: 0x1419078 Slot: 5
	public int Pending() { }

	// RVA: 0x141907C Offset: 0x141507C VA: 0x141907C
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing.Models
internal enum GoogleRetrieveProductsFailureReason // TypeDefIndex: 6854
{
	// Fields
	public int value__; // 0x0
	public const GoogleRetrieveProductsFailureReason BillingServiceDisconnected = 0;
	public const GoogleRetrieveProductsFailureReason BillingServiceUnavailable = 1;
}


// Namespace: UnityEngine.Purchasing.Models
internal class ProductDescriptionQuery // TypeDefIndex: 6855
{
	// Fields
	internal ReadOnlyCollection<ProductDefinition> products; // 0x10
	internal Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived; // 0x18
	internal Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed; // 0x20

	// Methods

	// RVA: 0x1419084 Offset: 0x1415084 VA: 0x1419084
	internal void .ctor(ReadOnlyCollection<ProductDefinition> products, Action<List<ProductDescription>, IGoogleBillingResult> onProductsReceived, Action<GoogleRetrieveProductsFailureReason, GoogleBillingResponseCode> onRetrieveProductsFailed) { }
}


// Namespace: UnityEngine.Purchasing.Models
internal enum GoogleBillingResponseCode // TypeDefIndex: 6856
{
	// Fields
	public int value__; // 0x0
	public const GoogleBillingResponseCode ServiceTimeout = -3;
	public const GoogleBillingResponseCode FeatureNotSupported = -2;
	public const GoogleBillingResponseCode ServiceDisconnected = -1;
	public const GoogleBillingResponseCode Ok = 0;
	public const GoogleBillingResponseCode UserCanceled = 1;
	public const GoogleBillingResponseCode ServiceUnavailable = 2;
	public const GoogleBillingResponseCode BillingUnavailable = 3;
	public const GoogleBillingResponseCode ItemUnavailable = 4;
	public const GoogleBillingResponseCode DeveloperError = 5;
	public const GoogleBillingResponseCode FatalError = 6;
	public const GoogleBillingResponseCode ItemAlreadyOwned = 7;
	public const GoogleBillingResponseCode ItemNotOwned = 8;
	public const GoogleBillingResponseCode NetworkError = 12;
}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 6857
{
	// Methods

	// RVA: 0x14190C0 Offset: 0x14150C0 VA: 0x14190C0
	internal static uint ComputeStringHash(string s) { }
}
