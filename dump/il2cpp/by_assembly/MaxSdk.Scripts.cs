// Namespace: 
internal class <Module> // TypeDefIndex: 7220
{}


// Namespace: 
public class MaxCmpService // TypeDefIndex: 7221
{
	// Fields
	private static readonly MaxCmpService _instance; // 0x0
	private static Action<MaxCmpError> _onCompletedAction; // 0x8
	private static readonly AndroidJavaClass MaxUnityPluginClass; // 0x10

	// Methods

	// RVA: 0xCDE0CC Offset: 0xCDA0CC VA: 0xCDE0CC
	private void .ctor() { }

	// RVA: 0xCDE0D4 Offset: 0xCDA0D4 VA: 0xCDE0D4
	internal static void NotifyCompletedIfNeeded(Dictionary<string, object> errorProps) { }

	// RVA: 0xCDE2D8 Offset: 0xCDA2D8 VA: 0xCDE2D8
	private static void .cctor() { }
}


// Namespace: 
public enum MaxCmpError.ErrorCode // TypeDefIndex: 7222
{
	// Fields
	public int value__; // 0x0
	public const MaxCmpError.ErrorCode Unspecified = -1;
	public const MaxCmpError.ErrorCode IntegrationError = 1;
	public const MaxCmpError.ErrorCode FormUnavailable = 2;
	public const MaxCmpError.ErrorCode FormNotRequired = 3;
}


// Namespace: 
public class MaxCmpError // TypeDefIndex: 7223
{
	// Fields
	[CompilerGenerated]
	private MaxCmpError.ErrorCode <Code>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <Message>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <CmpCode>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <CmpMessage>k__BackingField; // 0x28

	// Properties
	private MaxCmpError.ErrorCode Code { set; }
	private string Message { set; }
	private int CmpCode { set; }
	private string CmpMessage { set; }

	// Methods

	// RVA: 0xCDE18C Offset: 0xCDA18C VA: 0xCDE18C
	public static MaxCmpError Create(IDictionary<string, object> error) { }

	// RVA: 0xCDE4EC Offset: 0xCDA4EC VA: 0xCDE4EC
	private static MaxCmpError.ErrorCode GetCode(int code) { }

	// RVA: 0xCDE388 Offset: 0xCDA388 VA: 0xCDE388
	private void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xCDE5D8 Offset: 0xCDA5D8 VA: 0xCDE5D8
	private void set_Code(MaxCmpError.ErrorCode value) { }

	[CompilerGenerated]
	// RVA: 0xCDE5E0 Offset: 0xCDA5E0 VA: 0xCDE5E0
	private void set_Message(string value) { }

	[CompilerGenerated]
	// RVA: 0xCDE5E8 Offset: 0xCDA5E8 VA: 0xCDE5E8
	private void set_CmpCode(int value) { }

	[CompilerGenerated]
	// RVA: 0xCDE5F0 Offset: 0xCDA5F0 VA: 0xCDE5F0
	private void set_CmpMessage(string value) { }
}


// Namespace: 
internal class MaxSdkAndroid.BackgroundCallbackProxy : AndroidJavaProxy // TypeDefIndex: 7224
{
	// Methods

	// RVA: 0xCDE764 Offset: 0xCDA764 VA: 0xCDE764
	public void .ctor() { }

	// RVA: 0xCE03D4 Offset: 0xCDC3D4 VA: 0xCE03D4
	public void onEvent(string propsStr) { }
}


// Namespace: 
public class MaxSdkAndroid : MaxSdkBase // TypeDefIndex: 7225
{
	// Fields
	private static readonly AndroidJavaClass MaxUnityPluginClass; // 0x0
	private static readonly MaxSdkAndroid.BackgroundCallbackProxy BackgroundCallback; // 0x8

	// Methods

	// RVA: 0xCDE5F8 Offset: 0xCDA5F8 VA: 0xCDE5F8
	private static void .cctor() { }

	// RVA: 0xCDE820 Offset: 0xCDA820 VA: 0xCDE820
	public static void InitializeSdk(string[] adUnitIds) { }

	// RVA: 0xCDEA6C Offset: 0xCDAA6C VA: 0xCDEA6C
	public static bool IsInitialized() { }

	// RVA: 0xCDEB70 Offset: 0xCDAB70 VA: 0xCDEB70
	public static void ShowMediationDebugger() { }

	// RVA: 0xCDEC54 Offset: 0xCDAC54 VA: 0xCDEC54
	public static void SetHasUserConsent(bool hasUserConsent) { }

	// RVA: 0xCDED78 Offset: 0xCDAD78 VA: 0xCDED78
	public static void SetDoNotSell(bool doNotSell) { }

	// RVA: 0xCDEE9C Offset: 0xCDAE9C VA: 0xCDEE9C
	public static void CreateBanner(string adUnitIdentifier, MaxSdkBase.AdViewConfiguration configuration) { }

	// RVA: 0xCDF290 Offset: 0xCDB290 VA: 0xCDF290
	public static void ShowBanner(string adUnitIdentifier) { }

	// RVA: 0xCDF39C Offset: 0xCDB39C VA: 0xCDF39C
	public static void HideBanner(string adUnitIdentifier) { }

	// RVA: 0xCDF4A8 Offset: 0xCDB4A8 VA: 0xCDF4A8
	public static void SetBannerBackgroundColor(string adUnitIdentifier, Color color) { }

	// RVA: 0xCDF844 Offset: 0xCDB844 VA: 0xCDF844
	public static void LoadInterstitial(string adUnitIdentifier) { }

	// RVA: 0xCDF950 Offset: 0xCDB950 VA: 0xCDF950
	public static bool IsInterstitialReady(string adUnitIdentifier) { }

	// RVA: 0xCDFA7C Offset: 0xCDBA7C VA: 0xCDFA7C
	public static void ShowInterstitial(string adUnitIdentifier, string placement, string customData) { }

	// RVA: 0xCDFCF8 Offset: 0xCDBCF8 VA: 0xCDFCF8
	public static void LoadRewardedAd(string adUnitIdentifier) { }

	// RVA: 0xCDFE04 Offset: 0xCDBE04 VA: 0xCDFE04
	public static bool IsRewardedAdReady(string adUnitIdentifier) { }

	// RVA: 0xCDFF30 Offset: 0xCDBF30 VA: 0xCDFF30
	public static void ShowRewardedAd(string adUnitIdentifier, string placement, string customData) { }

	// RVA: 0xCE00E4 Offset: 0xCDC0E4 VA: 0xCE00E4
	public static void SetMuted(bool muted) { }

	// RVA: 0xCE0208 Offset: 0xCDC208 VA: 0xCE0208
	public static bool IsVerboseLoggingEnabled() { }

	[Obsolete("This API has been deprecated and will be removed in a future release. Please use CreateBanner(string adUnitIdentifier, AdViewConfiguration configuration) instead.")]
	// RVA: 0xCE030C Offset: 0xCDC30C VA: 0xCE030C
	public static void CreateBanner(string adUnitIdentifier, MaxSdkBase.BannerPosition bannerPosition) { }
}


// Namespace: 
public enum MaxSdkBase.ConsentFlowUserGeography // TypeDefIndex: 7226
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.ConsentFlowUserGeography Unknown = 0;
	public const MaxSdkBase.ConsentFlowUserGeography Gdpr = 1;
	public const MaxSdkBase.ConsentFlowUserGeography Other = 2;
}


// Namespace: 
public enum MaxSdkBase.InitializationStatus // TypeDefIndex: 7227
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.InitializationStatus NotInitialized = -4;
	public const MaxSdkBase.InitializationStatus DoesNotApply = -3;
	public const MaxSdkBase.InitializationStatus Initializing = -2;
	public const MaxSdkBase.InitializationStatus InitializedUnknown = -1;
	public const MaxSdkBase.InitializationStatus InitializedFailure = 0;
	public const MaxSdkBase.InitializationStatus InitializedSuccess = 1;
}


// Namespace: 
public enum MaxSdkBase.AdViewPosition // TypeDefIndex: 7228
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.AdViewPosition TopLeft = 0;
	public const MaxSdkBase.AdViewPosition TopCenter = 1;
	public const MaxSdkBase.AdViewPosition TopRight = 2;
	public const MaxSdkBase.AdViewPosition Centered = 3;
	public const MaxSdkBase.AdViewPosition CenterLeft = 4;
	public const MaxSdkBase.AdViewPosition CenterRight = 5;
	public const MaxSdkBase.AdViewPosition BottomLeft = 6;
	public const MaxSdkBase.AdViewPosition BottomCenter = 7;
	public const MaxSdkBase.AdViewPosition BottomRight = 8;
}


// Namespace: 
public class MaxSdkBase.AdViewConfiguration // TypeDefIndex: 7229
{
	// Fields
	[CompilerGenerated]
	private MaxSdkBase.AdViewPosition <Position>k__BackingField; // 0x10
	[CompilerGenerated]
	private float <XCoordinate>k__BackingField; // 0x14
	[CompilerGenerated]
	private float <YCoordinate>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsAdaptive>k__BackingField; // 0x1C
	[CompilerGenerated]
	private bool <UseCoordinates>k__BackingField; // 0x1D

	// Properties
	public MaxSdkBase.AdViewPosition Position { get; set; }
	public float XCoordinate { get; }
	public float YCoordinate { get; }
	public bool IsAdaptive { get; set; }
	internal bool UseCoordinates { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE1ABC Offset: 0xCDDABC VA: 0xCE1ABC
	public MaxSdkBase.AdViewPosition get_Position() { }

	[CompilerGenerated]
	// RVA: 0xCE1AC4 Offset: 0xCDDAC4 VA: 0xCE1AC4
	private void set_Position(MaxSdkBase.AdViewPosition value) { }

	[CompilerGenerated]
	// RVA: 0xCE1ACC Offset: 0xCDDACC VA: 0xCE1ACC
	public float get_XCoordinate() { }

	[CompilerGenerated]
	// RVA: 0xCE1AD4 Offset: 0xCDDAD4 VA: 0xCE1AD4
	public float get_YCoordinate() { }

	[CompilerGenerated]
	// RVA: 0xCE1ADC Offset: 0xCDDADC VA: 0xCE1ADC
	public bool get_IsAdaptive() { }

	[CompilerGenerated]
	// RVA: 0xCE1AE4 Offset: 0xCDDAE4 VA: 0xCE1AE4
	public void set_IsAdaptive(bool value) { }

	[CompilerGenerated]
	// RVA: 0xCE1AF0 Offset: 0xCDDAF0 VA: 0xCE1AF0
	internal bool get_UseCoordinates() { }

	[CompilerGenerated]
	// RVA: 0xCE1AF8 Offset: 0xCDDAF8 VA: 0xCE1AF8
	private void set_UseCoordinates(bool value) { }

	// RVA: 0xCE03A4 Offset: 0xCDC3A4 VA: 0xCE03A4
	public void .ctor(MaxSdkBase.AdViewPosition position) { }
}


// Namespace: 
public class MaxSdkBase.SdkConfiguration // TypeDefIndex: 7230
{
	// Fields
	[CompilerGenerated]
	private bool <IsSuccessfullyInitialized>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <CountryCode>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsTestModeEnabled>k__BackingField; // 0x20
	[CompilerGenerated]
	private MaxSdkBase.ConsentFlowUserGeography <ConsentFlowUserGeography>k__BackingField; // 0x24
	[CompilerGenerated]
	private MaxSdkBase.ConsentDialogState <ConsentDialogState>k__BackingField; // 0x28

	// Properties
	private bool IsSuccessfullyInitialized { set; }
	private string CountryCode { set; }
	private bool IsTestModeEnabled { set; }
	private MaxSdkBase.ConsentFlowUserGeography ConsentFlowUserGeography { set; }
	[Obsolete("This API has been deprecated and will be removed in a future release.")]
	private MaxSdkBase.ConsentDialogState ConsentDialogState { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE1B04 Offset: 0xCDDB04 VA: 0xCE1B04
	private void set_IsSuccessfullyInitialized(bool value) { }

	[CompilerGenerated]
	// RVA: 0xCE1B10 Offset: 0xCDDB10 VA: 0xCE1B10
	private void set_CountryCode(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1B18 Offset: 0xCDDB18 VA: 0xCE1B18
	private void set_IsTestModeEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0xCE1B24 Offset: 0xCDDB24 VA: 0xCE1B24
	private void set_ConsentFlowUserGeography(MaxSdkBase.ConsentFlowUserGeography value) { }

	[CompilerGenerated]
	// RVA: 0xCE1B2C Offset: 0xCDDB2C VA: 0xCE1B2C
	private void set_ConsentDialogState(MaxSdkBase.ConsentDialogState value) { }

	// RVA: 0xCE1B34 Offset: 0xCDDB34 VA: 0xCE1B34
	public static MaxSdkBase.SdkConfiguration Create(IDictionary<string, object> eventProps) { }

	// RVA: 0xCE1D84 Offset: 0xCDDD84 VA: 0xCE1D84
	public void .ctor() { }
}


// Namespace: 
public struct MaxSdkBase.Reward // TypeDefIndex: 7231
{
	// Fields
	public string Label; // 0x0
	public int Amount; // 0x8

	// Methods

	// RVA: 0xCE1EBC Offset: 0xCDDEBC VA: 0xCE1EBC Slot: 3
	public override string ToString() { }
}


// Namespace: 
public enum MaxSdkBase.ErrorCode // TypeDefIndex: 7232
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.ErrorCode Unspecified = -1;
	public const MaxSdkBase.ErrorCode NoFill = 204;
	public const MaxSdkBase.ErrorCode AdLoadFailed = -5001;
	public const MaxSdkBase.ErrorCode AdDisplayFailed = -4205;
	public const MaxSdkBase.ErrorCode NetworkError = -1000;
	public const MaxSdkBase.ErrorCode NetworkTimeout = -1001;
	public const MaxSdkBase.ErrorCode NoNetwork = -1009;
	public const MaxSdkBase.ErrorCode FullscreenAdAlreadyShowing = -23;
	public const MaxSdkBase.ErrorCode FullscreenAdNotReady = -24;
	public const MaxSdkBase.ErrorCode FullscreenAdAlreadyLoading = -26;
	public const MaxSdkBase.ErrorCode FullscreenAdLoadWhileShowing = -27;
	public const MaxSdkBase.ErrorCode DontKeepActivitiesEnabled = -5602;
	public const MaxSdkBase.ErrorCode InvalidAdUnitId = -5603;
}


// Namespace: 
public enum MaxSdkBase.MaxAdLoadState // TypeDefIndex: 7233
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.MaxAdLoadState AdLoadNotAttempted = 0;
	public const MaxSdkBase.MaxAdLoadState AdLoaded = 1;
	public const MaxSdkBase.MaxAdLoadState FailedToLoad = 2;
}


// Namespace: 
public class MaxSdkBase.AdInfo // TypeDefIndex: 7234
{
	// Fields
	[CompilerGenerated]
	private string <AdUnitIdentifier>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <AdFormat>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <NetworkName>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <NetworkPlacement>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <Placement>k__BackingField; // 0x30
	[CompilerGenerated]
	private string <CreativeIdentifier>k__BackingField; // 0x38
	[CompilerGenerated]
	private double <Revenue>k__BackingField; // 0x40
	[CompilerGenerated]
	private string <RevenuePrecision>k__BackingField; // 0x48
	[CompilerGenerated]
	private MaxSdkBase.WaterfallInfo <WaterfallInfo>k__BackingField; // 0x50
	[CompilerGenerated]
	private long <LatencyMillis>k__BackingField; // 0x58
	[CompilerGenerated]
	private string <DspName>k__BackingField; // 0x60

	// Properties
	public string AdUnitIdentifier { get; set; }
	public string AdFormat { get; set; }
	public string NetworkName { get; set; }
	public string NetworkPlacement { get; set; }
	public string Placement { get; set; }
	public string CreativeIdentifier { get; set; }
	public double Revenue { get; set; }
	public string RevenuePrecision { get; set; }
	private MaxSdkBase.WaterfallInfo WaterfallInfo { set; }
	public long LatencyMillis { get; set; }
	public string DspName { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE1F3C Offset: 0xCDDF3C VA: 0xCE1F3C
	public string get_AdUnitIdentifier() { }

	[CompilerGenerated]
	// RVA: 0xCE1F44 Offset: 0xCDDF44 VA: 0xCE1F44
	private void set_AdUnitIdentifier(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1F4C Offset: 0xCDDF4C VA: 0xCE1F4C
	public string get_AdFormat() { }

	[CompilerGenerated]
	// RVA: 0xCE1F54 Offset: 0xCDDF54 VA: 0xCE1F54
	private void set_AdFormat(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1F5C Offset: 0xCDDF5C VA: 0xCE1F5C
	public string get_NetworkName() { }

	[CompilerGenerated]
	// RVA: 0xCE1F64 Offset: 0xCDDF64 VA: 0xCE1F64
	private void set_NetworkName(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1F6C Offset: 0xCDDF6C VA: 0xCE1F6C
	public string get_NetworkPlacement() { }

	[CompilerGenerated]
	// RVA: 0xCE1F74 Offset: 0xCDDF74 VA: 0xCE1F74
	private void set_NetworkPlacement(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1F7C Offset: 0xCDDF7C VA: 0xCE1F7C
	public string get_Placement() { }

	[CompilerGenerated]
	// RVA: 0xCE1F84 Offset: 0xCDDF84 VA: 0xCE1F84
	private void set_Placement(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1F8C Offset: 0xCDDF8C VA: 0xCE1F8C
	public string get_CreativeIdentifier() { }

	[CompilerGenerated]
	// RVA: 0xCE1F94 Offset: 0xCDDF94 VA: 0xCE1F94
	private void set_CreativeIdentifier(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1F9C Offset: 0xCDDF9C VA: 0xCE1F9C
	public double get_Revenue() { }

	[CompilerGenerated]
	// RVA: 0xCE1FA4 Offset: 0xCDDFA4 VA: 0xCE1FA4
	private void set_Revenue(double value) { }

	[CompilerGenerated]
	// RVA: 0xCE1FAC Offset: 0xCDDFAC VA: 0xCE1FAC
	public string get_RevenuePrecision() { }

	[CompilerGenerated]
	// RVA: 0xCE1FB4 Offset: 0xCDDFB4 VA: 0xCE1FB4
	private void set_RevenuePrecision(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE1FBC Offset: 0xCDDFBC VA: 0xCE1FBC
	private void set_WaterfallInfo(MaxSdkBase.WaterfallInfo value) { }

	[CompilerGenerated]
	// RVA: 0xCE1FC4 Offset: 0xCDDFC4 VA: 0xCE1FC4
	public long get_LatencyMillis() { }

	[CompilerGenerated]
	// RVA: 0xCE1FCC Offset: 0xCDDFCC VA: 0xCE1FCC
	private void set_LatencyMillis(long value) { }

	[CompilerGenerated]
	// RVA: 0xCE1FD4 Offset: 0xCDDFD4 VA: 0xCE1FD4
	public string get_DspName() { }

	[CompilerGenerated]
	// RVA: 0xCE1FDC Offset: 0xCDDFDC VA: 0xCE1FDC
	private void set_DspName(string value) { }

	// RVA: 0xCE1FE4 Offset: 0xCDDFE4 VA: 0xCE1FE4
	public void .ctor(IDictionary<string, object> adInfoDictionary) { }

	// RVA: 0xCE29F4 Offset: 0xCDE9F4 VA: 0xCE29F4 Slot: 3
	public override string ToString() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class MaxSdkBase.WaterfallInfo.<>c // TypeDefIndex: 7235
{
	// Fields
	public static readonly MaxSdkBase.WaterfallInfo.<>c <>9; // 0x0
	public static Func<MaxSdkBase.NetworkResponseInfo, string> <>9__17_0; // 0x8

	// Methods

	// RVA: 0xCE32D0 Offset: 0xCDF2D0 VA: 0xCE32D0
	private static void .cctor() { }

	// RVA: 0xCE332C Offset: 0xCDF32C VA: 0xCE332C
	public void .ctor() { }

	// RVA: 0xCE3334 Offset: 0xCDF334 VA: 0xCE3334
	internal string <ToString>b__17_0(MaxSdkBase.NetworkResponseInfo networkResponseInfo) { }
}


// Namespace: 
public class MaxSdkBase.WaterfallInfo // TypeDefIndex: 7236
{
	// Fields
	[CompilerGenerated]
	private string <Name>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <TestName>k__BackingField; // 0x18
	[CompilerGenerated]
	private List<MaxSdkBase.NetworkResponseInfo> <NetworkResponses>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <LatencyMillis>k__BackingField; // 0x28

	// Properties
	public string Name { get; set; }
	public string TestName { get; set; }
	public List<MaxSdkBase.NetworkResponseInfo> NetworkResponses { get; set; }
	public long LatencyMillis { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE2CBC Offset: 0xCDECBC VA: 0xCE2CBC
	public string get_Name() { }

	[CompilerGenerated]
	// RVA: 0xCE2CC4 Offset: 0xCDECC4 VA: 0xCE2CC4
	private void set_Name(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE2CCC Offset: 0xCDECCC VA: 0xCE2CCC
	public string get_TestName() { }

	[CompilerGenerated]
	// RVA: 0xCE2CD4 Offset: 0xCDECD4 VA: 0xCE2CD4
	private void set_TestName(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE2CDC Offset: 0xCDECDC VA: 0xCE2CDC
	public List<MaxSdkBase.NetworkResponseInfo> get_NetworkResponses() { }

	[CompilerGenerated]
	// RVA: 0xCE2CE4 Offset: 0xCDECE4 VA: 0xCE2CE4
	private void set_NetworkResponses(List<MaxSdkBase.NetworkResponseInfo> value) { }

	[CompilerGenerated]
	// RVA: 0xCE2CEC Offset: 0xCDECEC VA: 0xCE2CEC
	public long get_LatencyMillis() { }

	[CompilerGenerated]
	// RVA: 0xCE2CF4 Offset: 0xCDECF4 VA: 0xCE2CF4
	private void set_LatencyMillis(long value) { }

	// RVA: 0xCE2504 Offset: 0xCDE504 VA: 0xCE2504
	public void .ctor(IDictionary<string, object> waterfallInfoDict) { }

	// RVA: 0xCE3040 Offset: 0xCDF040 VA: 0xCE3040 Slot: 3
	public override string ToString() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class MaxSdkBase.NetworkResponseInfo.<>c // TypeDefIndex: 7237
{
	// Fields
	public static readonly MaxSdkBase.NetworkResponseInfo.<>c <>9; // 0x0
	public static Func<KeyValuePair<string, object>, string> <>9__25_0; // 0x8

	// Methods

	// RVA: 0xCE3A28 Offset: 0xCDFA28 VA: 0xCE3A28
	private static void .cctor() { }

	// RVA: 0xCE3A84 Offset: 0xCDFA84 VA: 0xCE3A84
	public void .ctor() { }

	// RVA: 0xCE3A8C Offset: 0xCDFA8C VA: 0xCE3A8C
	internal string <ToString>b__25_0(KeyValuePair<string, object> keyValuePair) { }
}


// Namespace: 
public class MaxSdkBase.NetworkResponseInfo // TypeDefIndex: 7238
{
	// Fields
	[CompilerGenerated]
	private MaxSdkBase.MaxAdLoadState <AdLoadState>k__BackingField; // 0x10
	[CompilerGenerated]
	private MaxSdkBase.MediatedNetworkInfo <MediatedNetwork>k__BackingField; // 0x18
	[CompilerGenerated]
	private Dictionary<string, object> <Credentials>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <IsBidding>k__BackingField; // 0x28
	[CompilerGenerated]
	private long <LatencyMillis>k__BackingField; // 0x30
	[CompilerGenerated]
	private MaxSdkBase.ErrorInfo <Error>k__BackingField; // 0x38

	// Properties
	public MaxSdkBase.MaxAdLoadState AdLoadState { get; set; }
	public MaxSdkBase.MediatedNetworkInfo MediatedNetwork { get; set; }
	public Dictionary<string, object> Credentials { get; set; }
	private bool IsBidding { set; }
	public long LatencyMillis { get; set; }
	public MaxSdkBase.ErrorInfo Error { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE3358 Offset: 0xCDF358 VA: 0xCE3358
	public MaxSdkBase.MaxAdLoadState get_AdLoadState() { }

	[CompilerGenerated]
	// RVA: 0xCE3360 Offset: 0xCDF360 VA: 0xCE3360
	private void set_AdLoadState(MaxSdkBase.MaxAdLoadState value) { }

	[CompilerGenerated]
	// RVA: 0xCE3368 Offset: 0xCDF368 VA: 0xCE3368
	public MaxSdkBase.MediatedNetworkInfo get_MediatedNetwork() { }

	[CompilerGenerated]
	// RVA: 0xCE3370 Offset: 0xCDF370 VA: 0xCE3370
	private void set_MediatedNetwork(MaxSdkBase.MediatedNetworkInfo value) { }

	[CompilerGenerated]
	// RVA: 0xCE3378 Offset: 0xCDF378 VA: 0xCE3378
	public Dictionary<string, object> get_Credentials() { }

	[CompilerGenerated]
	// RVA: 0xCE3380 Offset: 0xCDF380 VA: 0xCE3380
	private void set_Credentials(Dictionary<string, object> value) { }

	[CompilerGenerated]
	// RVA: 0xCE3388 Offset: 0xCDF388 VA: 0xCE3388
	private void set_IsBidding(bool value) { }

	[CompilerGenerated]
	// RVA: 0xCE3394 Offset: 0xCDF394 VA: 0xCE3394
	public long get_LatencyMillis() { }

	[CompilerGenerated]
	// RVA: 0xCE339C Offset: 0xCDF39C VA: 0xCE339C
	private void set_LatencyMillis(long value) { }

	[CompilerGenerated]
	// RVA: 0xCE33A4 Offset: 0xCDF3A4 VA: 0xCE33A4
	public MaxSdkBase.ErrorInfo get_Error() { }

	[CompilerGenerated]
	// RVA: 0xCE33AC Offset: 0xCDF3AC VA: 0xCE33AC
	private void set_Error(MaxSdkBase.ErrorInfo value) { }

	// RVA: 0xCE2E08 Offset: 0xCDEE08 VA: 0xCE2E08
	public void .ctor(IDictionary<string, object> networkResponseInfoDict) { }

	// RVA: 0xCE3724 Offset: 0xCDF724 VA: 0xCE3724 Slot: 3
	public override string ToString() { }
}


// Namespace: 
public class MaxSdkBase.MediatedNetworkInfo // TypeDefIndex: 7239
{
	// Fields
	[CompilerGenerated]
	private string <Name>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <AdapterClassName>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <AdapterVersion>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <SdkVersion>k__BackingField; // 0x28
	[CompilerGenerated]
	private MaxSdkBase.InitializationStatus <InitializationStatus>k__BackingField; // 0x30

	// Properties
	public string Name { get; set; }
	public string AdapterClassName { get; set; }
	public string AdapterVersion { get; set; }
	public string SdkVersion { get; set; }
	public MaxSdkBase.InitializationStatus InitializationStatus { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE3AE0 Offset: 0xCDFAE0 VA: 0xCE3AE0
	public string get_Name() { }

	[CompilerGenerated]
	// RVA: 0xCE3AE8 Offset: 0xCDFAE8 VA: 0xCE3AE8
	private void set_Name(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3AF0 Offset: 0xCDFAF0 VA: 0xCE3AF0
	public string get_AdapterClassName() { }

	[CompilerGenerated]
	// RVA: 0xCE3AF8 Offset: 0xCDFAF8 VA: 0xCE3AF8
	private void set_AdapterClassName(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3B00 Offset: 0xCDFB00 VA: 0xCE3B00
	public string get_AdapterVersion() { }

	[CompilerGenerated]
	// RVA: 0xCE3B08 Offset: 0xCDFB08 VA: 0xCE3B08
	private void set_AdapterVersion(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3B10 Offset: 0xCDFB10 VA: 0xCE3B10
	public string get_SdkVersion() { }

	[CompilerGenerated]
	// RVA: 0xCE3B18 Offset: 0xCDFB18 VA: 0xCE3B18
	private void set_SdkVersion(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3B20 Offset: 0xCDFB20 VA: 0xCE3B20
	public MaxSdkBase.InitializationStatus get_InitializationStatus() { }

	[CompilerGenerated]
	// RVA: 0xCE3B28 Offset: 0xCDFB28 VA: 0xCE3B28
	private void set_InitializationStatus(MaxSdkBase.InitializationStatus value) { }

	// RVA: 0xCE33B4 Offset: 0xCDF3B4 VA: 0xCE33B4
	public void .ctor(IDictionary<string, object> mediatedNetworkDictionary) { }

	// RVA: 0xCE3C1C Offset: 0xCDFC1C VA: 0xCE3C1C Slot: 3
	public override string ToString() { }

	// RVA: 0xCE3B30 Offset: 0xCDFB30 VA: 0xCE3B30
	private static MaxSdkBase.InitializationStatus InitializationStatusFromCode(int code) { }
}


// Namespace: 
public class MaxSdkBase.ErrorInfo // TypeDefIndex: 7240
{
	// Fields
	[CompilerGenerated]
	private MaxSdkBase.ErrorCode <Code>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <Message>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <MediatedNetworkErrorCode>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <MediatedNetworkErrorMessage>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <AdLoadFailureInfo>k__BackingField; // 0x30
	[CompilerGenerated]
	private MaxSdkBase.WaterfallInfo <WaterfallInfo>k__BackingField; // 0x38
	[CompilerGenerated]
	private long <LatencyMillis>k__BackingField; // 0x40

	// Properties
	public MaxSdkBase.ErrorCode Code { get; set; }
	public string Message { get; set; }
	public int MediatedNetworkErrorCode { get; set; }
	public string MediatedNetworkErrorMessage { get; set; }
	public string AdLoadFailureInfo { get; set; }
	private MaxSdkBase.WaterfallInfo WaterfallInfo { set; }
	public long LatencyMillis { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE3DE8 Offset: 0xCDFDE8 VA: 0xCE3DE8
	public MaxSdkBase.ErrorCode get_Code() { }

	[CompilerGenerated]
	// RVA: 0xCE3DF0 Offset: 0xCDFDF0 VA: 0xCE3DF0
	private void set_Code(MaxSdkBase.ErrorCode value) { }

	[CompilerGenerated]
	// RVA: 0xCE3DF8 Offset: 0xCDFDF8 VA: 0xCE3DF8
	public string get_Message() { }

	[CompilerGenerated]
	// RVA: 0xCE3E00 Offset: 0xCDFE00 VA: 0xCE3E00
	private void set_Message(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3E08 Offset: 0xCDFE08 VA: 0xCE3E08
	public int get_MediatedNetworkErrorCode() { }

	[CompilerGenerated]
	// RVA: 0xCE3E10 Offset: 0xCDFE10 VA: 0xCE3E10
	private void set_MediatedNetworkErrorCode(int value) { }

	[CompilerGenerated]
	// RVA: 0xCE3E18 Offset: 0xCDFE18 VA: 0xCE3E18
	public string get_MediatedNetworkErrorMessage() { }

	[CompilerGenerated]
	// RVA: 0xCE3E20 Offset: 0xCDFE20 VA: 0xCE3E20
	private void set_MediatedNetworkErrorMessage(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3E28 Offset: 0xCDFE28 VA: 0xCE3E28
	public string get_AdLoadFailureInfo() { }

	[CompilerGenerated]
	// RVA: 0xCE3E30 Offset: 0xCDFE30 VA: 0xCE3E30
	private void set_AdLoadFailureInfo(string value) { }

	[CompilerGenerated]
	// RVA: 0xCE3E38 Offset: 0xCDFE38 VA: 0xCE3E38
	private void set_WaterfallInfo(MaxSdkBase.WaterfallInfo value) { }

	[CompilerGenerated]
	// RVA: 0xCE3E40 Offset: 0xCDFE40 VA: 0xCE3E40
	public long get_LatencyMillis() { }

	[CompilerGenerated]
	// RVA: 0xCE3E48 Offset: 0xCDFE48 VA: 0xCE3E48
	private void set_LatencyMillis(long value) { }

	// RVA: 0xCE350C Offset: 0xCDF50C VA: 0xCE350C
	public void .ctor(IDictionary<string, object> errorInfoDictionary) { }

	// RVA: 0xCE3E50 Offset: 0xCDFE50 VA: 0xCE3E50 Slot: 3
	public override string ToString() { }
}


// Namespace: 
[Obsolete("This API has been deprecated and will be removed in a future release. Please use AdViewPosition instead.")]
public enum MaxSdkBase.BannerPosition // TypeDefIndex: 7241
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.BannerPosition TopLeft = 0;
	public const MaxSdkBase.BannerPosition TopCenter = 1;
	public const MaxSdkBase.BannerPosition TopRight = 2;
	public const MaxSdkBase.BannerPosition Centered = 3;
	public const MaxSdkBase.BannerPosition CenterLeft = 4;
	public const MaxSdkBase.BannerPosition CenterRight = 5;
	public const MaxSdkBase.BannerPosition BottomLeft = 6;
	public const MaxSdkBase.BannerPosition BottomCenter = 7;
	public const MaxSdkBase.BannerPosition BottomRight = 8;
}


// Namespace: 
[Obsolete("This API has been deprecated and will be removed in a future release.")]
public enum MaxSdkBase.ConsentDialogState // TypeDefIndex: 7242
{
	// Fields
	public int value__; // 0x0
	public const MaxSdkBase.ConsentDialogState Unknown = 0;
	public const MaxSdkBase.ConsentDialogState Applies = 1;
	public const MaxSdkBase.ConsentDialogState DoesNotApply = 2;
}


// Namespace: 
public abstract class MaxSdkBase // TypeDefIndex: 7243
{
	// Fields
	[CompilerGenerated]
	private static Nullable<bool> <InvokeEventsOnUnityMainThread>k__BackingField; // 0x0
	[CompilerGenerated]
	private static bool <DisableAllLogs>k__BackingField; // 0x2

	// Properties
	public static Nullable<bool> InvokeEventsOnUnityMainThread { get; }
	internal static bool DisableAllLogs { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xCE058C Offset: 0xCDC58C VA: 0xCE058C
	public static Nullable<bool> get_InvokeEventsOnUnityMainThread() { }

	[CompilerGenerated]
	// RVA: 0xCE05D4 Offset: 0xCDC5D4 VA: 0xCE05D4
	internal static bool get_DisableAllLogs() { }

	// RVA: 0xCDF164 Offset: 0xCDB164 VA: 0xCDF164
	protected static void ValidateAdUnitIdentifier(string adUnitIdentifier, string debugPurpose) { }

	// RVA: 0xCDE7D4 Offset: 0xCDA7D4 VA: 0xCDE7D4
	protected static void InitializeEventExecutor() { }

	// RVA: 0xCDE984 Offset: 0xCDA984 VA: 0xCDE984
	protected static string GenerateMetaData() { }

	// RVA: 0xCE03DC Offset: 0xCDC3DC VA: 0xCE03DC
	protected static void HandleBackgroundCallback(string propsStr) { }
}


// Namespace: 
[Extension]
internal static class AdPositionExtenstion // TypeDefIndex: 7244
{
	// Methods

	[Extension]
	// RVA: 0xCDF1D4 Offset: 0xCDB1D4 VA: 0xCDF1D4
	public static string ToSnakeCaseString(MaxSdkBase.AdViewPosition position) { }
}


// Namespace: 
public static class MaxSdkCallbacks.Interstitial // TypeDefIndex: 7245
{
	// Fields
	internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent; // 0x0
	internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent; // 0x8
	internal static Action<string, MaxSdkBase.AdInfo> onAdDisplayedEvent; // 0x10
	internal static Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> onAdDisplayFailedEvent; // 0x18
	internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent; // 0x20
	internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent; // 0x28
	internal static Action<string, MaxSdkBase.AdInfo, MaxSdkBase.AdInfo> onExpiredAdReloadedEvent; // 0x30
	internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent; // 0x38
	internal static Action<string, MaxSdkBase.AdInfo> onAdHiddenEvent; // 0x40

	// Methods

	// RVA: 0xCE4668 Offset: 0xCE0668 VA: 0xCE4668
	public static void add_OnAdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4748 Offset: 0xCE0748 VA: 0xCE4748
	public static void remove_OnAdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4828 Offset: 0xCE0828 VA: 0xCE4828
	public static void add_OnAdLoadFailedEvent(Action<string, MaxSdkBase.ErrorInfo> value) { }

	// RVA: 0xCE4908 Offset: 0xCE0908 VA: 0xCE4908
	public static void remove_OnAdLoadFailedEvent(Action<string, MaxSdkBase.ErrorInfo> value) { }

	// RVA: 0xCE49E8 Offset: 0xCE09E8 VA: 0xCE49E8
	public static void add_OnAdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4AC8 Offset: 0xCE0AC8 VA: 0xCE4AC8
	public static void remove_OnAdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4BA8 Offset: 0xCE0BA8 VA: 0xCE4BA8
	public static void add_OnAdDisplayFailedEvent(Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4C88 Offset: 0xCE0C88 VA: 0xCE4C88
	public static void remove_OnAdDisplayFailedEvent(Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4D68 Offset: 0xCE0D68 VA: 0xCE4D68
	public static void add_OnAdHiddenEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE4E48 Offset: 0xCE0E48 VA: 0xCE4E48
	public static void remove_OnAdHiddenEvent(Action<string, MaxSdkBase.AdInfo> value) { }
}


// Namespace: 
public static class MaxSdkCallbacks.AppOpen // TypeDefIndex: 7246
{
	// Fields
	internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent; // 0x0
	internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent; // 0x8
	internal static Action<string, MaxSdkBase.AdInfo> onAdDisplayedEvent; // 0x10
	internal static Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> onAdDisplayFailedEvent; // 0x18
	internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent; // 0x20
	internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent; // 0x28
	internal static Action<string, MaxSdkBase.AdInfo, MaxSdkBase.AdInfo> onExpiredAdReloadedEvent; // 0x30
	internal static Action<string, MaxSdkBase.AdInfo> onAdHiddenEvent; // 0x38
}


// Namespace: 
public static class MaxSdkCallbacks.Rewarded // TypeDefIndex: 7247
{
	// Fields
	internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent; // 0x0
	internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent; // 0x8
	internal static Action<string, MaxSdkBase.AdInfo> onAdDisplayedEvent; // 0x10
	internal static Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> onAdDisplayFailedEvent; // 0x18
	internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent; // 0x20
	internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent; // 0x28
	internal static Action<string, MaxSdkBase.AdInfo, MaxSdkBase.AdInfo> onExpiredAdReloadedEvent; // 0x30
	internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent; // 0x38
	internal static Action<string, MaxSdkBase.Reward, MaxSdkBase.AdInfo> onAdReceivedRewardEvent; // 0x40
	internal static Action<string, MaxSdkBase.AdInfo> onAdHiddenEvent; // 0x48

	// Methods

	// RVA: 0xCE4F28 Offset: 0xCE0F28 VA: 0xCE4F28
	public static void add_OnAdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5008 Offset: 0xCE1008 VA: 0xCE5008
	public static void remove_OnAdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE50E8 Offset: 0xCE10E8 VA: 0xCE50E8
	public static void add_OnAdLoadFailedEvent(Action<string, MaxSdkBase.ErrorInfo> value) { }

	// RVA: 0xCE51C8 Offset: 0xCE11C8 VA: 0xCE51C8
	public static void remove_OnAdLoadFailedEvent(Action<string, MaxSdkBase.ErrorInfo> value) { }

	// RVA: 0xCE52A8 Offset: 0xCE12A8 VA: 0xCE52A8
	public static void add_OnAdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5388 Offset: 0xCE1388 VA: 0xCE5388
	public static void remove_OnAdDisplayedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5468 Offset: 0xCE1468 VA: 0xCE5468
	public static void add_OnAdDisplayFailedEvent(Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5548 Offset: 0xCE1548 VA: 0xCE5548
	public static void remove_OnAdDisplayFailedEvent(Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5628 Offset: 0xCE1628 VA: 0xCE5628
	public static void add_OnAdClickedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5708 Offset: 0xCE1708 VA: 0xCE5708
	public static void remove_OnAdClickedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE57E8 Offset: 0xCE17E8 VA: 0xCE57E8
	public static void add_OnAdReceivedRewardEvent(Action<string, MaxSdkBase.Reward, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE58C8 Offset: 0xCE18C8 VA: 0xCE58C8
	public static void remove_OnAdReceivedRewardEvent(Action<string, MaxSdkBase.Reward, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE59A8 Offset: 0xCE19A8 VA: 0xCE59A8
	public static void add_OnAdHiddenEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5A88 Offset: 0xCE1A88 VA: 0xCE5A88
	public static void remove_OnAdHiddenEvent(Action<string, MaxSdkBase.AdInfo> value) { }
}


// Namespace: 
public static class MaxSdkCallbacks.Banner // TypeDefIndex: 7248
{
	// Fields
	internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent; // 0x0
	internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent; // 0x8
	internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent; // 0x10
	internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent; // 0x18
	internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent; // 0x20
	internal static Action<string, MaxSdkBase.AdInfo> onAdExpandedEvent; // 0x28
	internal static Action<string, MaxSdkBase.AdInfo> onAdCollapsedEvent; // 0x30

	// Methods

	// RVA: 0xCE5B68 Offset: 0xCE1B68 VA: 0xCE5B68
	public static void add_OnAdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5C48 Offset: 0xCE1C48 VA: 0xCE5C48
	public static void remove_OnAdLoadedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5D28 Offset: 0xCE1D28 VA: 0xCE5D28
	public static void add_OnAdLoadFailedEvent(Action<string, MaxSdkBase.ErrorInfo> value) { }

	// RVA: 0xCE5E08 Offset: 0xCE1E08 VA: 0xCE5E08
	public static void remove_OnAdLoadFailedEvent(Action<string, MaxSdkBase.ErrorInfo> value) { }

	// RVA: 0xCE5EE8 Offset: 0xCE1EE8 VA: 0xCE5EE8
	public static void add_OnAdClickedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE5FC8 Offset: 0xCE1FC8 VA: 0xCE5FC8
	public static void remove_OnAdClickedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE60A8 Offset: 0xCE20A8 VA: 0xCE60A8
	public static void add_OnAdExpandedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE6188 Offset: 0xCE2188 VA: 0xCE6188
	public static void remove_OnAdExpandedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE6268 Offset: 0xCE2268 VA: 0xCE6268
	public static void add_OnAdCollapsedEvent(Action<string, MaxSdkBase.AdInfo> value) { }

	// RVA: 0xCE6348 Offset: 0xCE2348 VA: 0xCE6348
	public static void remove_OnAdCollapsedEvent(Action<string, MaxSdkBase.AdInfo> value) { }
}


// Namespace: 
public static class MaxSdkCallbacks.MRec // TypeDefIndex: 7249
{
	// Fields
	internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent; // 0x0
	internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent; // 0x8
	internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent; // 0x10
	internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent; // 0x18
	internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent; // 0x20
	internal static Action<string, MaxSdkBase.AdInfo> onAdExpandedEvent; // 0x28
	internal static Action<string, MaxSdkBase.AdInfo> onAdCollapsedEvent; // 0x30
}


// Namespace: 
[CompilerGenerated]
private sealed class MaxSdkCallbacks.<>c__DisplayClass15_0<T> // TypeDefIndex: 7250
{
	// Fields
	public Action<T> evt; // 0x0
	public T param; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9714 Offset: 0xBB5714 VA: 0xBB9714
	|-MaxSdkCallbacks.<>c__DisplayClass15_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <InvokeEvent>b__0() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB971C Offset: 0xBB571C VA: 0xBB971C
	|-MaxSdkCallbacks.<>c__DisplayClass15_0<__Il2CppFullySharedGenericType>.<InvokeEvent>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class MaxSdkCallbacks.<>c__DisplayClass16_0<T1, T2> // TypeDefIndex: 7251
{
	// Fields
	public Action<T1, T2> evt; // 0x0
	public T1 param1; // 0x0
	public T2 param2; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB98F4 Offset: 0xBB58F4 VA: 0xBB98F4
	|-MaxSdkCallbacks.<>c__DisplayClass16_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <InvokeEvent>b__0() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB98FC Offset: 0xBB58FC VA: 0xBB98FC
	|-MaxSdkCallbacks.<>c__DisplayClass16_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<InvokeEvent>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class MaxSdkCallbacks.<>c__DisplayClass17_0<T1, T2, T3> // TypeDefIndex: 7252
{
	// Fields
	public Action<T1, T2, T3> evt; // 0x0
	public T1 param1; // 0x0
	public T2 param2; // 0x0
	public T3 param3; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9B24 Offset: 0xBB5B24 VA: 0xBB9B24
	|-MaxSdkCallbacks.<>c__DisplayClass17_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void <InvokeEvent>b__0() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9B2C Offset: 0xBB5B2C VA: 0xBB9B2C
	|-MaxSdkCallbacks.<>c__DisplayClass17_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<InvokeEvent>b__0
	*/
}


// Namespace: 
public static class MaxSdkCallbacks // TypeDefIndex: 7253
{
	// Fields
	private static Action<MaxSdkBase.SdkConfiguration> onSdkInitializedEvent; // 0x0
	private static Action<bool> onApplicationStateChangedEvent; // 0x8

	// Methods

	// RVA: 0xCE4058 Offset: 0xCE0058 VA: 0xCE4058
	public static void add_OnSdkInitializedEvent(Action<MaxSdkBase.SdkConfiguration> value) { }

	// RVA: 0xCE4188 Offset: 0xCE0188 VA: 0xCE4188
	public static void remove_OnSdkInitializedEvent(Action<MaxSdkBase.SdkConfiguration> value) { }

	// RVA: 0xCE0838 Offset: 0xCDC838 VA: 0xCE0838
	public static void ForwardEvent(string eventPropsStr) { }

	// RVA: -1 Offset: -1
	private static void InvokeEvent<T>(Action<T> evt, T param, string eventName, bool keepInBackground) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9D388 Offset: 0xB99388 VA: 0xB9D388
	|-MaxSdkCallbacks.InvokeEvent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static void InvokeEvent<T1, T2>(Action<T1, T2> evt, T1 param1, T2 param2, string eventName, bool keepInBackground) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9D808 Offset: 0xB99808 VA: 0xB9D808
	|-MaxSdkCallbacks.InvokeEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static void InvokeEvent<T1, T2, T3>(Action<T1, T2, T3> evt, T1 param1, T2 param2, T3 param3, string eventName, bool keepInBackground) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9DED0 Offset: 0xB99ED0 VA: 0xB9DED0
	|-MaxSdkCallbacks.InvokeEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: 0xCE44A0 Offset: 0xCE04A0 VA: 0xCE44A0
	private static bool CanInvokeEvent(Delegate evt) { }

	// RVA: 0xCE4554 Offset: 0xCE0554 VA: 0xCE4554
	private static bool ShouldInvokeInBackground(bool keepInBackground) { }

	// RVA: 0xCE4138 Offset: 0xCE0138 VA: 0xCE4138
	private static void LogSubscribedToEvent(string eventName) { }

	// RVA: 0xCE4268 Offset: 0xCE0268 VA: 0xCE4268
	private static void LogUnsubscribedToEvent(string eventName) { }
}


// Namespace: 
public class MaxSdkLogger // TypeDefIndex: 7254
{
	// Methods

	// RVA: 0xCE6428 Offset: 0xCE2428 VA: 0xCE6428
	public static void UserDebug(string message) { }

	// RVA: 0xCE43AC Offset: 0xCE03AC VA: 0xCE43AC
	public static void D(string message) { }

	// RVA: 0xCDFC30 Offset: 0xCDBC30 VA: 0xCDFC30
	public static void UserWarning(string message) { }

	// RVA: 0xCE061C Offset: 0xCDC61C VA: 0xCE061C
	public static void UserError(string message) { }

	// RVA: 0xCE42B8 Offset: 0xCE02B8 VA: 0xCE42B8
	public static void E(string message) { }

	// RVA: 0xCE1A20 Offset: 0xCDDA20 VA: 0xCE1A20
	public static void LogException(Exception exception) { }
}


// Namespace: 
public static class MaxSdkUtils // TypeDefIndex: 7255
{
	// Fields
	private static readonly AndroidJavaClass MaxUnityPluginClass; // 0x0

	// Methods

	// RVA: 0xCE23F8 Offset: 0xCDE3F8 VA: 0xCE23F8
	public static Dictionary<string, object> GetDictionaryFromDictionary(IDictionary<string, object> dictionary, string key, Dictionary<string, object> defaultValue) { }

	// RVA: 0xCE2CFC Offset: 0xCDECFC VA: 0xCE2CFC
	public static List<object> GetListFromDictionary(IDictionary<string, object> dictionary, string key, List<object> defaultValue) { }

	// RVA: 0xCDE4FC Offset: 0xCDA4FC VA: 0xCDE4FC
	public static string GetStringFromDictionary(IDictionary<string, object> dictionary, string key, string defaultValue = "") { }

	// RVA: 0xCE1D8C Offset: 0xCDDD8C VA: 0xCE1D8C
	public static bool GetBoolFromDictionary(IDictionary<string, object> dictionary, string key, bool defaultValue = False) { }

	// RVA: 0xCDE390 Offset: 0xCDA390 VA: 0xCDE390
	public static int GetIntFromDictionary(IDictionary<string, object> dictionary, string key, int defaultValue = 0) { }

	// RVA: 0xCE2898 Offset: 0xCDE898 VA: 0xCE2898
	public static long GetLongFromDictionary(IDictionary<string, object> dictionary, string key, long defaultValue = 0) { }

	// RVA: 0xCE229C Offset: 0xCDE29C VA: 0xCE229C
	public static double GetDoubleFromDictionary(IDictionary<string, object> dictionary, string key, int defaultValue = 0) { }

	// RVA: 0xCE64F0 Offset: 0xCE24F0 VA: 0xCE64F0
	public static string InvariantCultureToString(object obj) { }

	// RVA: 0xCDF638 Offset: 0xCDB638 VA: 0xCDF638
	public static string ParseColor(Color color) { }

	// RVA: 0xCE6568 Offset: 0xCE2568 VA: 0xCE6568
	private static void .cctor() { }
}


// Namespace: 
private enum Json.Parser.TOKEN // TypeDefIndex: 7256
{
	// Fields
	public int value__; // 0x0
	public const Json.Parser.TOKEN NONE = 0;
	public const Json.Parser.TOKEN CURLY_OPEN = 1;
	public const Json.Parser.TOKEN CURLY_CLOSE = 2;
	public const Json.Parser.TOKEN SQUARED_OPEN = 3;
	public const Json.Parser.TOKEN SQUARED_CLOSE = 4;
	public const Json.Parser.TOKEN COLON = 5;
	public const Json.Parser.TOKEN COMMA = 6;
	public const Json.Parser.TOKEN STRING = 7;
	public const Json.Parser.TOKEN NUMBER = 8;
	public const Json.Parser.TOKEN TRUE = 9;
	public const Json.Parser.TOKEN FALSE = 10;
	public const Json.Parser.TOKEN NULL = 11;
}


// Namespace: 
private sealed class Json.Parser : IDisposable // TypeDefIndex: 7257
{
	// Fields
	private StringReader json; // 0x10

	// Properties
	private char PeekChar { get; }
	private char NextChar { get; }
	private string NextWord { get; }
	private Json.Parser.TOKEN NextToken { get; }

	// Methods

	// RVA: 0xCE6824 Offset: 0xCE2824 VA: 0xCE6824
	public static bool IsWordBreak(char c) { }

	// RVA: 0xCE68C0 Offset: 0xCE28C0 VA: 0xCE68C0
	private void .ctor(string jsonString) { }

	// RVA: 0xCE65F8 Offset: 0xCE25F8 VA: 0xCE65F8
	public static object Parse(string jsonString) { }

	// RVA: 0xCE6950 Offset: 0xCE2950 VA: 0xCE6950 Slot: 4
	public void Dispose() { }

	// RVA: 0xCE6978 Offset: 0xCE2978 VA: 0xCE6978
	private Dictionary<string, object> ParseObject() { }

	// RVA: 0xCE6EE0 Offset: 0xCE2EE0 VA: 0xCE6EE0
	private List<object> ParseArray() { }

	// RVA: 0xCE6934 Offset: 0xCE2934 VA: 0xCE6934
	private object ParseValue() { }

	// RVA: 0xCE6FC4 Offset: 0xCE2FC4 VA: 0xCE6FC4
	private object ParseByToken(Json.Parser.TOKEN token) { }

	// RVA: 0xCE6C60 Offset: 0xCE2C60 VA: 0xCE6C60
	private string ParseString() { }

	// RVA: 0xCE70B4 Offset: 0xCE30B4 VA: 0xCE70B4
	private object ParseNumber() { }

	// RVA: 0xCE72B0 Offset: 0xCE32B0 VA: 0xCE72B0
	private void EatWhitespace() { }

	// RVA: 0xCE7354 Offset: 0xCE3354 VA: 0xCE7354
	private char get_PeekChar() { }

	// RVA: 0xCE7184 Offset: 0xCE3184 VA: 0xCE7184
	private char get_NextChar() { }

	// RVA: 0xCE71FC Offset: 0xCE31FC VA: 0xCE71FC
	private string get_NextWord() { }

	// RVA: 0xCE6A9C Offset: 0xCE2A9C VA: 0xCE6A9C
	private Json.Parser.TOKEN get_NextToken() { }
}


// Namespace: 
private sealed class Json.Serializer // TypeDefIndex: 7258
{
	// Fields
	private StringBuilder builder; // 0x10
	private bool prettyPrint; // 0x18
	private int indentLevel; // 0x1C

	// Methods

	// RVA: 0xCE73CC Offset: 0xCE33CC VA: 0xCE73CC
	private void .ctor(bool prettyPrint) { }

	// RVA: 0xCE67A0 Offset: 0xCE27A0 VA: 0xCE67A0
	public static string Serialize(object obj, bool prettyPrint) { }

	// RVA: 0xCE7448 Offset: 0xCE3448 VA: 0xCE7448
	private void SerializeValue(object value) { }

	// RVA: 0xCE7D18 Offset: 0xCE3D18 VA: 0xCE7D18
	private void SerializeObject(IDictionary obj) { }

	// RVA: 0xCE78D4 Offset: 0xCE38D4 VA: 0xCE78D4
	private void SerializeArray(IList anArray) { }

	// RVA: 0xCE7618 Offset: 0xCE3618 VA: 0xCE7618
	private void SerializeString(string str) { }

	// RVA: 0xCE8288 Offset: 0xCE4288 VA: 0xCE8288
	private void SerializeOther(object value) { }
}


// Namespace: AppLovinMax.ThirdParty.MiniJson
public static class Json // TypeDefIndex: 7259
{
	// Methods

	// RVA: 0xCE19F4 Offset: 0xCDD9F4 VA: 0xCE19F4
	public static object Deserialize(string json) { }

	// RVA: 0xCE0830 Offset: 0xCDC830 VA: 0xCE0830
	public static string Serialize(object obj, bool prettyPrint = False) { }
}


// Namespace: 
private struct MaxEventExecutor.MaxAction // TypeDefIndex: 7260
{
	// Fields
	public readonly Action ActionToExecute; // 0x0
	public readonly string EventName; // 0x8

	// Methods

	// RVA: 0xCE8668 Offset: 0xCE4668 VA: 0xCE8668
	public void .ctor(Action actionToExecute, string nameOfEvent) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class MaxEventExecutor.<>c__DisplayClass6_0 // TypeDefIndex: 7261
{
	// Fields
	public UnityEvent unityEvent; // 0x10

	// Methods

	// RVA: 0xCE874C Offset: 0xCE474C VA: 0xCE874C
	public void .ctor() { }

	// RVA: 0xCE8D04 Offset: 0xCE4D04 VA: 0xCE8D04
	internal void <InvokeOnMainThread>b__0() { }
}


// Namespace: AppLovinMax.Internal
public class MaxEventExecutor : MonoBehaviour // TypeDefIndex: 7262
{
	// Fields
	private static MaxEventExecutor _instance; // 0x0
	private static readonly List<MaxEventExecutor.MaxAction> AdEventsQueue; // 0x8
	private static bool _adEventsQueueEmpty; // 0x10

	// Methods

	// RVA: 0xCE06E4 Offset: 0xCDC6E4 VA: 0xCE06E4
	public static void InitializeIfNeeded() { }

	// RVA: 0xCE850C Offset: 0xCE450C VA: 0xCE850C
	public static void ExecuteOnMainThread(Action action, string eventName) { }

	// RVA: 0xCE8670 Offset: 0xCE4670 VA: 0xCE8670
	public static void InvokeOnMainThread(UnityEvent unityEvent, string eventName) { }

	// RVA: 0xCE8754 Offset: 0xCE4754 VA: 0xCE8754
	public void Update() { }

	// RVA: 0xCE8C04 Offset: 0xCE4C04 VA: 0xCE8C04
	public void Disable() { }

	// RVA: 0xCE8C5C Offset: 0xCE4C5C VA: 0xCE8C5C
	public void .ctor() { }

	// RVA: 0xCE8C64 Offset: 0xCE4C64 VA: 0xCE8C64
	private static void .cctor() { }
}
