// Namespace: 
internal class <Module> // TypeDefIndex: 7638
{}


// Namespace: UnityEngine.Purchasing
public abstract class BaseIAPButton : MonoBehaviour // TypeDefIndex: 7639
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract bool ShouldConsumePurchase();

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void OnTransactionsRestored(bool success, string error);

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void OnPurchaseComplete(Product purchasedProduct);

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract void OnInitCompleted();

	// RVA: -1 Offset: -1 Slot: 8
	protected abstract void AddButtonToCodelessListener();

	// RVA: -1 Offset: -1 Slot: 9
	protected abstract void RemoveButtonToCodelessListener();

	// RVA: -1 Offset: -1 Slot: 10
	protected abstract Button GetPurchaseButton();

	// RVA: 0x13D50DC Offset: 0x13D10DC VA: 0x13D50DC
	private void Start() { }

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract string GetProductId();

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract bool IsAPurchaseButton();

	// RVA: -1 Offset: -1 Slot: 13
	protected abstract bool IsARestoreButton();

	// RVA: 0x13D56CC Offset: 0x13D16CC VA: 0x13D56CC
	private void OnEnable() { }

	// RVA: 0x13D5758 Offset: 0x13D1758 VA: 0x13D5758
	private void OnDisable() { }

	// RVA: 0x13D578C Offset: 0x13D178C VA: 0x13D578C
	private void PurchaseProduct() { }

	// RVA: 0x13D58E8 Offset: 0x13D18E8 VA: 0x13D58E8
	protected PurchaseProcessingResult ProcessPurchaseInternal(PurchaseEventArgs args) { }

	// RVA: 0x13D5928 Offset: 0x13D1928 VA: 0x13D5928
	private void Restore() { }

	// RVA: 0x13D5D60 Offset: 0x13D1D60 VA: 0x13D5D60
	protected void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public enum CodelessButtonType // TypeDefIndex: 7640
{
	// Fields
	public int value__; // 0x0
	public const CodelessButtonType Purchase = 0;
	public const CodelessButtonType Restore = 1;
}


// Namespace: 
[Serializable]
public class CodelessIAPButton.OnProductFetchedEvent : UnityEvent<Product> // TypeDefIndex: 7641
{
	// Methods

	// RVA: 0x13D61FC Offset: 0x13D21FC VA: 0x13D61FC
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class CodelessIAPButton.OnPurchaseCompletedEvent : UnityEvent<Product> // TypeDefIndex: 7642
{
	// Methods

	// RVA: 0x13D6244 Offset: 0x13D2244 VA: 0x13D6244
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class CodelessIAPButton.OnPurchaseFailedEvent : UnityEvent<Product, PurchaseFailureDescription> // TypeDefIndex: 7643
{
	// Methods

	// RVA: 0x13D628C Offset: 0x13D228C VA: 0x13D628C
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class CodelessIAPButton.OnTransactionsRestoredEvent : UnityEvent<bool, string> // TypeDefIndex: 7644
{
	// Methods

	// RVA: 0x13D62D4 Offset: 0x13D22D4 VA: 0x13D62D4
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class CodelessIAPButton : BaseIAPButton // TypeDefIndex: 7645
{
	// Fields
	public string productId; // 0x20
	[Tooltip("The type of this button, can be either a purchase or a restore button.")]
	public CodelessButtonType buttonType; // 0x28
	[Tooltip("Consume the product immediately after a successful purchase.")]
	public bool consumePurchase; // 0x2C
	[Tooltip("Event fired after a restore transactions.")]
	public CodelessIAPButton.OnTransactionsRestoredEvent onTransactionsRestored; // 0x30
	[Tooltip("Event fired after a successful purchase of this product.")]
	public CodelessIAPButton.OnPurchaseCompletedEvent onPurchaseComplete; // 0x38
	[Tooltip("Event fired after a failed purchase of this product.")]
	public CodelessIAPButton.OnPurchaseFailedEvent onPurchaseFailed; // 0x40
	[Tooltip("Event fired after a successful fetching the product information from the store.")]
	public CodelessIAPButton.OnProductFetchedEvent onProductFetched; // 0x48
	[Tooltip("Button that triggers purchase.")]
	public Button button; // 0x50

	// Methods

	// RVA: 0x13D5D68 Offset: 0x13D1D68 VA: 0x13D5D68 Slot: 11
	internal override string GetProductId() { }

	// RVA: 0x13D5D70 Offset: 0x13D1D70 VA: 0x13D5D70 Slot: 12
	internal override bool IsAPurchaseButton() { }

	// RVA: 0x13D5D80 Offset: 0x13D1D80 VA: 0x13D5D80 Slot: 13
	protected override bool IsARestoreButton() { }

	// RVA: 0x13D5D90 Offset: 0x13D1D90 VA: 0x13D5D90 Slot: 4
	protected override bool ShouldConsumePurchase() { }

	// RVA: 0x13D5D98 Offset: 0x13D1D98 VA: 0x13D5D98 Slot: 5
	protected override void OnTransactionsRestored(bool success, string error) { }

	// RVA: 0x13D5E08 Offset: 0x13D1E08 VA: 0x13D5E08 Slot: 6
	protected override void OnPurchaseComplete(Product purchasedProduct) { }

	// RVA: 0x13D5E68 Offset: 0x13D1E68 VA: 0x13D5E68
	public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription) { }

	// RVA: 0x13D5EDC Offset: 0x13D1EDC VA: 0x13D5EDC Slot: 10
	protected override Button GetPurchaseButton() { }

	// RVA: 0x13D5EE4 Offset: 0x13D1EE4 VA: 0x13D5EE4 Slot: 8
	protected override void AddButtonToCodelessListener() { }

	// RVA: 0x13D5F5C Offset: 0x13D1F5C VA: 0x13D5F5C Slot: 9
	protected override void RemoveButtonToCodelessListener() { }

	// RVA: 0x13D5FD4 Offset: 0x13D1FD4 VA: 0x13D5FD4 Slot: 7
	internal override void OnInitCompleted() { }

	// RVA: 0x13D61E8 Offset: 0x13D21E8 VA: 0x13D61E8
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args) { }

	// RVA: 0x13D61EC Offset: 0x13D21EC VA: 0x13D61EC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CodelessIAPStoreListener.<>c__DisplayClass31_0 // TypeDefIndex: 7646
{
	// Fields
	public string productID; // 0x10
	public Func<IAPButton, bool> <>9__0; // 0x18
	public Func<CodelessIAPButton, bool> <>9__1; // 0x20

	// Methods

	// RVA: 0x13D7A98 Offset: 0x13D3A98 VA: 0x13D7A98
	public void .ctor() { }

	// RVA: 0x13D9638 Offset: 0x13D5638 VA: 0x13D9638
	internal bool <SendPurchaseFailedEventsToAllButtons>b__0(IAPButton button) { }

	// RVA: 0x13D965C Offset: 0x13D565C VA: 0x13D965C
	internal bool <SendPurchaseFailedEventsToAllButtons>b__1(CodelessIAPButton button) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CodelessIAPStoreListener.<>c__DisplayClass36_0 // TypeDefIndex: 7647
{
	// Fields
	public PurchaseEventArgs e; // 0x10
	public Func<IAPButton, bool> <>9__0; // 0x18
	public Func<CodelessIAPButton, bool> <>9__1; // 0x20

	// Methods

	// RVA: 0x13D89E4 Offset: 0x13D49E4 VA: 0x13D89E4
	public void .ctor() { }

	// RVA: 0x13D9680 Offset: 0x13D5680 VA: 0x13D9680
	internal bool <ProcessPurchase>b__0(IAPButton button) { }

	// RVA: 0x13D96B8 Offset: 0x13D56B8 VA: 0x13D96B8
	internal bool <ProcessPurchase>b__1(CodelessIAPButton button) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CodelessIAPStoreListener.<>c__DisplayClass37_0 // TypeDefIndex: 7648
{
	// Fields
	public Product product; // 0x10
	public Func<IAPButton, bool> <>9__1; // 0x18

	// Methods

	// RVA: 0x13D9074 Offset: 0x13D5074 VA: 0x13D9074
	public void .ctor() { }

	// RVA: 0x13D96F0 Offset: 0x13D56F0 VA: 0x13D96F0
	internal bool <OnPurchaseFailed>b__1(IAPButton button) { }

	// RVA: 0x13D9720 Offset: 0x13D5720 VA: 0x13D9720
	internal bool <OnPurchaseFailed>b__0(CodelessIAPButton button) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CodelessIAPStoreListener.<>c__DisplayClass38_0 // TypeDefIndex: 7649
{
	// Fields
	public Product product; // 0x10
	public Func<CodelessIAPButton, bool> <>9__0; // 0x18

	// Methods

	// RVA: 0x13D95C8 Offset: 0x13D55C8 VA: 0x13D95C8
	public void .ctor() { }

	// RVA: 0x13D9750 Offset: 0x13D5750 VA: 0x13D9750
	internal bool <OnPurchaseFailed>b__0(CodelessIAPButton button) { }
}


// Namespace: 
[CompilerGenerated]
private struct CodelessIAPStoreListener.<CreateCodelessIAPStoreListenerInstance>d__17 : IAsyncStateMachine // TypeDefIndex: 7650
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	private TaskAwaiter <>u__1; // 0x28

	// Methods

	// RVA: 0x13D9780 Offset: 0x13D5780 VA: 0x13D9780 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13D9938 Offset: 0x13D5938 VA: 0x13D9938 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: UnityEngine.Purchasing
public class CodelessIAPStoreListener : IDetailedStoreListener, IStoreListener // TypeDefIndex: 7651
{
	// Fields
	private static CodelessIAPStoreListener instance; // 0x0
	private readonly List<IAPButton> activeButtons; // 0x10
	private readonly List<CodelessIAPButton> activeCodelessButtons; // 0x18
	private readonly List<IAPListener> activeListeners; // 0x20
	private static bool unityPurchasingInitialized; // 0x8
	protected IStoreController controller; // 0x28
	protected IExtensionProvider extensions; // 0x30
	private ConfigurationBuilder m_Builder; // 0x38
	protected ProductCatalog catalog; // 0x40
	public static bool initializationComplete; // 0x9

	// Properties
	public static CodelessIAPStoreListener Instance { get; }

	// Methods

	[RuntimeInitializeOnLoadMethod]
	// RVA: 0x13D631C Offset: 0x13D231C VA: 0x13D631C
	private static void InitializeCodelessPurchasingOnLoad() { }

	// RVA: 0x13D6410 Offset: 0x13D2410 VA: 0x13D6410
	private static void InitializePurchasing() { }

	// RVA: -1 Offset: -1
	public T GetStoreExtensions<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB79F14 Offset: 0xB75F14 VA: 0xB79F14
	|-CodelessIAPStoreListener.GetStoreExtensions<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D7018 Offset: 0x13D3018 VA: 0x13D7018
	private void .ctor() { }

	// RVA: 0x13D5364 Offset: 0x13D1364 VA: 0x13D5364
	public static CodelessIAPStoreListener get_Instance() { }

	[AsyncStateMachine(typeof(CodelessIAPStoreListener.<CreateCodelessIAPStoreListenerInstance>d__17))]
	// RVA: 0x13D638C Offset: 0x13D238C VA: 0x13D638C
	private static void CreateCodelessIAPStoreListenerInstance() { }

	// RVA: 0x13D7134 Offset: 0x13D3134 VA: 0x13D7134
	private static Task AutoInitializeUnityGamingServicesIfEnabled() { }

	// RVA: 0x13D71F8 Offset: 0x13D31F8 VA: 0x13D71F8
	private static bool ShouldAutoInitUgs() { }

	// RVA: 0x13D53C0 Offset: 0x13D13C0 VA: 0x13D53C0
	public bool HasProductInCatalog(string productID) { }

	// RVA: 0x13D6048 Offset: 0x13D2048 VA: 0x13D6048
	public Product GetProduct(string productID) { }

	[Obsolete("CodelessIAPStoreListener.AddButton(IAPButton button) is deprecated, please use CodelessIAPStoreListener.AddButton(CodelessIAPButton button) instead.", False)]
	// RVA: 0x13D7244 Offset: 0x13D3244 VA: 0x13D7244
	public void AddButton(IAPButton button) { }

	// RVA: 0x13D5F04 Offset: 0x13D1F04 VA: 0x13D5F04
	public void AddButton(CodelessIAPButton button) { }

	[Obsolete("CodelessIAPStoreListener.RemoveButton(IAPButton button) is deprecated, please use CodelessIAPStoreListener.RemoveButton(CodelessIAPButton button) instead.", False)]
	// RVA: 0x13D729C Offset: 0x13D329C VA: 0x13D729C
	public void RemoveButton(IAPButton button) { }

	// RVA: 0x13D5F7C Offset: 0x13D1F7C VA: 0x13D5F7C
	public void RemoveButton(CodelessIAPButton button) { }

	// RVA: 0x13D72F4 Offset: 0x13D32F4 VA: 0x13D72F4
	public void AddListener(IAPListener listener) { }

	// RVA: 0x13D734C Offset: 0x13D334C VA: 0x13D734C
	public void RemoveListener(IAPListener listener) { }

	// RVA: 0x13D57E8 Offset: 0x13D17E8 VA: 0x13D57E8
	public void InitiatePurchase(string productID) { }

	// RVA: 0x13D73A4 Offset: 0x13D33A4 VA: 0x13D73A4
	private void SendPurchaseFailedEventsToAllButtons(string productID) { }

	// RVA: 0x13D7B0C Offset: 0x13D3B0C VA: 0x13D7B0C Slot: 8
	public void OnInitialized(IStoreController controller, IExtensionProvider extensions) { }

	// RVA: 0x13D7D68 Offset: 0x13D3D68 VA: 0x13D7D68
	private void HandleOnInitForAllButtons() { }

	// RVA: 0x13D800C Offset: 0x13D400C VA: 0x13D800C Slot: 5
	public void OnInitializeFailed(InitializationFailureReason error, string message) { }

	// RVA: 0x13D8128 Offset: 0x13D4128 VA: 0x13D8128 Slot: 6
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e) { }

	// RVA: 0x13D8A58 Offset: 0x13D4A58 VA: 0x13D8A58 Slot: 7
	public void OnPurchaseFailed(Product product, PurchaseFailureReason reason) { }

	// RVA: 0x13D90EC Offset: 0x13D50EC VA: 0x13D90EC Slot: 4
	public void OnPurchaseFailed(Product product, PurchaseFailureDescription description) { }
}


// Namespace: 
public enum IAPButton.ButtonType // TypeDefIndex: 7652
{
	// Fields
	public int value__; // 0x0
	public const IAPButton.ButtonType Purchase = 0;
	public const IAPButton.ButtonType Restore = 1;
}


// Namespace: 
[Serializable]
public class IAPButton.OnPurchaseCompletedEvent : UnityEvent<Product> // TypeDefIndex: 7653
{
	// Methods

	// RVA: 0x13D9C90 Offset: 0x13D5C90 VA: 0x13D9C90
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class IAPButton.OnPurchaseFailedEvent : UnityEvent<Product, PurchaseFailureReason> // TypeDefIndex: 7654
{
	// Methods

	// RVA: 0x13D9CD8 Offset: 0x13D5CD8 VA: 0x13D9CD8
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class IAPButton.OnTransactionsRestoredEvent : UnityEvent<bool, string> // TypeDefIndex: 7655
{
	// Methods

	// RVA: 0x13D9D20 Offset: 0x13D5D20 VA: 0x13D9D20
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
[RequireComponent(typeof(Button))]
[Obsolete("IAPButton is deprecated, please use CodelessIAPButton instead.", False)]
public class IAPButton : BaseIAPButton // TypeDefIndex: 7656
{
	// Fields
	public string productId; // 0x20
	[Tooltip("The type of this button, can be either a purchase or a restore button.")]
	public IAPButton.ButtonType buttonType; // 0x28
	[Tooltip("Consume the product immediately after a successful purchase.")]
	public bool consumePurchase; // 0x2C
	[Tooltip("Event fired after a restore transactions.")]
	public IAPButton.OnTransactionsRestoredEvent onTransactionsRestored; // 0x30
	[Tooltip("Event fired after a successful purchase of this product.")]
	public IAPButton.OnPurchaseCompletedEvent onPurchaseComplete; // 0x38
	[Tooltip("Event fired after a failed purchase of this product.")]
	public IAPButton.OnPurchaseFailedEvent onPurchaseFailed; // 0x40
	[Tooltip("[Optional] Displays the localized title from the app store.")]
	public Text titleText; // 0x48
	[Tooltip("[Optional] Displays the localized description from the app store.")]
	public Text descriptionText; // 0x50
	[Tooltip("[Optional] Displays the localized price from the app store.")]
	public Text priceText; // 0x58

	// Methods

	// RVA: 0x13D9944 Offset: 0x13D5944 VA: 0x13D9944 Slot: 11
	internal override string GetProductId() { }

	// RVA: 0x13D994C Offset: 0x13D594C VA: 0x13D994C Slot: 12
	internal override bool IsAPurchaseButton() { }

	// RVA: 0x13D995C Offset: 0x13D595C VA: 0x13D995C Slot: 13
	protected override bool IsARestoreButton() { }

	// RVA: 0x13D996C Offset: 0x13D596C VA: 0x13D996C Slot: 4
	protected override bool ShouldConsumePurchase() { }

	// RVA: 0x13D9974 Offset: 0x13D5974 VA: 0x13D9974 Slot: 5
	protected override void OnTransactionsRestored(bool success, string error) { }

	// RVA: 0x13D99E4 Offset: 0x13D59E4 VA: 0x13D99E4 Slot: 6
	protected override void OnPurchaseComplete(Product purchasedProduct) { }

	// RVA: 0x13D7AA0 Offset: 0x13D3AA0 VA: 0x13D7AA0
	public void OnPurchaseFailed(Product product, PurchaseFailureReason reason) { }

	// RVA: 0x13D9A44 Offset: 0x13D5A44 VA: 0x13D9A44 Slot: 10
	protected override Button GetPurchaseButton() { }

	// RVA: 0x13D9AA0 Offset: 0x13D5AA0 VA: 0x13D9AA0 Slot: 8
	protected override void AddButtonToCodelessListener() { }

	// RVA: 0x13D9AC0 Offset: 0x13D5AC0 VA: 0x13D9AC0 Slot: 9
	protected override void RemoveButtonToCodelessListener() { }

	// RVA: 0x13D9AE0 Offset: 0x13D5AE0 VA: 0x13D9AE0 Slot: 7
	internal override void OnInitCompleted() { }

	// RVA: 0x13D9AE4 Offset: 0x13D5AE4 VA: 0x13D9AE4
	private void UpdateAllTexts() { }

	// RVA: 0x13D89EC Offset: 0x13D49EC VA: 0x13D89EC
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e) { }

	// RVA: 0x13D9C38 Offset: 0x13D5C38 VA: 0x13D9C38
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public static class IAPConfigurationHelper // TypeDefIndex: 7657
{
	// Methods

	// RVA: 0x13D6544 Offset: 0x13D2544 VA: 0x13D6544
	public static void PopulateConfigurationBuilder(ref ConfigurationBuilder builder, ProductCatalog catalog) { }
}


// Namespace: 
[Serializable]
public class IAPListener.OnProductsFetchedEvent : UnityEvent<ProductCollection> // TypeDefIndex: 7658
{
	// Methods

	// RVA: 0x13D9E20 Offset: 0x13D5E20 VA: 0x13D9E20
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class IAPListener.OnPurchaseCompletedEvent : UnityEvent<Product> // TypeDefIndex: 7659
{
	// Methods

	// RVA: 0x13D9E68 Offset: 0x13D5E68 VA: 0x13D9E68
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class IAPListener.OnPurchaseFailedEvent : UnityEvent<Product, PurchaseFailureReason> // TypeDefIndex: 7660
{
	// Methods

	// RVA: 0x13D9EB0 Offset: 0x13D5EB0 VA: 0x13D9EB0
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class IAPListener.OnPurchaseDetailedFailedEvent : UnityEvent<Product, PurchaseFailureDescription> // TypeDefIndex: 7661
{
	// Methods

	// RVA: 0x13D9EF8 Offset: 0x13D5EF8 VA: 0x13D9EF8
	public void .ctor() { }
}


// Namespace: UnityEngine.Purchasing
public class IAPListener : MonoBehaviour // TypeDefIndex: 7662
{
	// Fields
	[Tooltip("Consume successful purchases immediately.")]
	public bool consumePurchase; // 0x20
	[Tooltip("Preserve this GameObject when a new scene is loaded.")]
	public bool dontDestroyOnLoad; // 0x21
	[Tooltip("Event fired after a successful fetching the products from the store.")]
	public IAPListener.OnProductsFetchedEvent onProductsFetched; // 0x28
	[Tooltip("Event fired after a successful purchase of this product.")]
	public IAPListener.OnPurchaseCompletedEvent onPurchaseComplete; // 0x30
	[Tooltip("Event fired after a failed purchase of this product.")]
	public IAPListener.OnPurchaseFailedEvent onPurchaseFailed; // 0x38
	[Tooltip("Event fired after a failed purchase of this product.")]
	public IAPListener.OnPurchaseDetailedFailedEvent onPurchaseDetailedFailedEvent; // 0x40

	// Methods

	// RVA: 0x13D9D68 Offset: 0x13D5D68 VA: 0x13D9D68
	private void OnEnable() { }

	// RVA: 0x13D9DF0 Offset: 0x13D5DF0 VA: 0x13D9DF0
	private void OnDisable() { }

	// RVA: 0x13D89F0 Offset: 0x13D49F0 VA: 0x13D89F0
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e) { }

	// RVA: 0x13D907C Offset: 0x13D507C VA: 0x13D907C
	public void OnPurchaseFailed(Product product, PurchaseFailureReason reason) { }

	// RVA: 0x13D95D0 Offset: 0x13D55D0 VA: 0x13D95D0
	public void OnPurchaseFailed(Product product, PurchaseFailureDescription description) { }

	// RVA: 0x13D9E10 Offset: 0x13D5E10 VA: 0x13D9E10
	public void .ctor() { }
}
