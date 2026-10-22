// Namespace: 
internal class <Module> // TypeDefIndex: 7046
{}


// Namespace: 
[CompilerGenerated]
private struct Ua2CoreInitializeCallback.<Initialize>d__1 : IAsyncStateMachine // TypeDefIndex: 7047
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CoreRegistry registry; // 0x20
	private TaskAwaiter <>u__1; // 0x28

	// Methods

	// RVA: 0x1334818 Offset: 0x1330818 VA: 0x1334818 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1335314 Offset: 0x1331314 VA: 0x1335314 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
internal class Ua2CoreInitializeCallback : IInitializablePackage // TypeDefIndex: 7048
{
	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1334564 Offset: 0x1330564 VA: 0x1334564
	private static void Register() { }

	[AsyncStateMachine(typeof(Ua2CoreInitializeCallback.<Initialize>d__1))]
	// RVA: 0x1334758 Offset: 0x1330758 VA: 0x1334758 Slot: 4
	public Task Initialize(CoreRegistry registry) { }

	// RVA: 0x1334750 Offset: 0x1330750 VA: 0x1334750
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics
public static class AnalyticsService // TypeDefIndex: 7049
{
	// Fields
	private static AnalyticsServiceInstance m_Instance; // 0x0
	private static IDispatcherDebug m_DispatcherDebug; // 0x8
	private static IBufferDebug m_BufferDebug; // 0x10
	private static Action<string, string, DateTime, byte[]> m_EventRecordedCallback; // 0x18
	private static Action<HashSet<string>> m_EventsClearingCallback; // 0x20
	private static Action<byte[]> m_FlushStartedCallback; // 0x28
	private static Action<int, bool, bool, bool, bool, byte[]> m_FlushCompletedCallback; // 0x30

	// Properties
	public static IAnalyticsService Instance { get; }

	// Methods

	// RVA: 0x1334A3C Offset: 0x1330A3C VA: 0x1334A3C
	internal static void Initialize(CoreRegistry registry) { }

	// RVA: 0x133682C Offset: 0x133282C VA: 0x133682C
	internal static void TearDown() { }

	// RVA: 0x1336A88 Offset: 0x1332A88 VA: 0x1336A88
	public static IAnalyticsService get_Instance() { }
}


// Namespace: Unity.Services.Analytics
internal interface IAnalyticsServiceSystemCalls // TypeDefIndex: 7050
{
	// Properties
	public abstract DateTime UtcNow { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract DateTime get_UtcNow();
}


// Namespace: Unity.Services.Analytics
internal class AnalyticsServiceSystemCalls : IAnalyticsServiceSystemCalls // TypeDefIndex: 7051
{
	// Properties
	public DateTime UtcNow { get; }

	// Methods

	// RVA: 0x1336B1C Offset: 0x1332B1C VA: 0x1336B1C Slot: 4
	public DateTime get_UtcNow() { }

	// RVA: 0x13364DC Offset: 0x13324DC VA: 0x13364DC
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics
internal interface IUnstructuredEventRecorder // TypeDefIndex: 7052
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void CustomData(string eventName, IDictionary<string, object> eventParams, Nullable<int> eventVersion, bool isStandardEvent, string callingMethodIdentifier);
}


// Namespace: Unity.Services.Analytics
internal class AnalyticsServiceInstance : IAnalyticsService, IUnstructuredEventRecorder // TypeDefIndex: 7053
{
	// Fields
	private const string k_ForgetCallingId = "com.unity.services.analytics.Events.RequestDataDeletion";
	private const string k_StartUpCallingId = "com.unity.services.analytics.Events.Startup";
	private const string k_PlayerChangedCallingId = "com.unity.services.analytics.Events.PlayerChanged";
	internal const string k_InvokedByUserCallingId = "com.unity.services.analytics.Events.UserInvoked";
	private readonly TimeSpan k_BackgroundSessionRefreshPeriod; // 0x10
	private readonly TransactionCurrencyConverter converter; // 0x18
	private readonly IIdentityManager m_UserIdentity; // 0x20
	private readonly ISessionManager m_Session; // 0x28
	private readonly IDataGenerator m_DataGenerator; // 0x30
	private readonly ICoreStatsHelper m_CoreStatsHelper; // 0x38
	private readonly IDispatcher m_DataDispatcher; // 0x40
	private readonly IAnalyticsForgetter m_AnalyticsForgetter; // 0x48
	private readonly IAnalyticsServiceSystemCalls m_SystemCalls; // 0x50
	private readonly IAnalyticsContainer m_Container; // 0x58
	internal IBuffer m_DataBuffer; // 0x60
	private int m_BufferLengthAtLastGameRunning; // 0x68
	private DateTime m_ApplicationPauseTime; // 0x70
	private bool m_IsActive; // 0x78
	private bool m_StartUpEventsRecorded; // 0x79

	// Properties
	internal int AutoflushPeriodMultiplier { get; }

	// Methods

	// RVA: 0x13364E4 Offset: 0x13324E4 VA: 0x13364E4
	internal void .ctor(IDataGenerator dataGenerator, IBuffer realBuffer, ICoreStatsHelper coreStatsHelper, IDispatcher dispatcher, IAnalyticsForgetter forgetter, IIdentityManager userIdentity, string environment, IAnalyticsServiceSystemCalls systemCalls, IAnalyticsContainer container, ISessionManager session) { }

	// RVA: 0x1336720 Offset: 0x1332720 VA: 0x1336720
	internal void ResumeDataDeletionIfNecessary() { }

	// RVA: 0x1338950 Offset: 0x1334950 VA: 0x1338950
	internal void DeactivateWithDataDeletionRequest() { }

	// RVA: 0x1338FA8 Offset: 0x1334FA8 VA: 0x1338FA8
	private void DataDeletionCompleted() { }

	// RVA: 0x1338E08 Offset: 0x1334E08 VA: 0x1338E08
	private void Deactivate() { }

	// RVA: 0x1339060 Offset: 0x1335060 VA: 0x1339060
	private void RecordStartupEvents(string callingId) { }

	// RVA: 0x13392E8 Offset: 0x13352E8 VA: 0x13392E8
	private void PlayerChanged() { }

	// RVA: 0x1339440 Offset: 0x1335440 VA: 0x1339440
	internal void ApplicationPaused(bool paused) { }

	// RVA: 0x13395D4 Offset: 0x13355D4 VA: 0x13395D4
	internal int get_AutoflushPeriodMultiplier() { }

	// RVA: 0x1339690 Offset: 0x1335690 VA: 0x1339690 Slot: 6
	public void Flush() { }

	// RVA: 0x13397D0 Offset: 0x13357D0 VA: 0x13397D0
	internal void ApplicationQuit() { }

	// RVA: 0x1339920 Offset: 0x1335920 VA: 0x1339920
	internal void RecordGameRunningIfNecessary() { }

	// RVA: 0x1339B80 Offset: 0x1335B80 VA: 0x1339B80 Slot: 4
	public long ConvertCurrencyToMinorUnits(string currencyCode, double value) { }

	// RVA: 0x1339D2C Offset: 0x1335D2C VA: 0x1339D2C Slot: 5
	public void CustomData(string eventName, IDictionary<string, object> eventParams, Nullable<int> eventVersion, bool isStandardEvent, string callingMethodIdentifier) { }
}


// Namespace: Unity.Services.Analytics
internal class TransactionCurrencyConverter // TypeDefIndex: 7054
{
	// Fields
	private readonly Dictionary<string, int> m_Iso4217CurrencyMinorUnits; // 0x10

	// Methods

	// RVA: 0x1339B98 Offset: 0x1335B98 VA: 0x1339B98
	public long Convert(string currencyCode, double value) { }

	// RVA: 0x1336B6C Offset: 0x1332B6C VA: 0x1336B6C
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics
public enum TransactionServer // TypeDefIndex: 7055
{
	// Fields
	public int value__; // 0x0
	public const TransactionServer APPLE = 0;
	public const TransactionServer AMAZON = 1;
	public const TransactionServer GOOGLE = 2;
	public const TransactionServer VALVE = 3;
}


// Namespace: Unity.Services.Analytics
public enum TransactionType // TypeDefIndex: 7056
{
	// Fields
	public int value__; // 0x0
	public const TransactionType INVALID = 0;
	public const TransactionType SALE = 1;
	public const TransactionType PURCHASE = 2;
	public const TransactionType TRADE = 3;
}


// Namespace: Unity.Services.Analytics
public interface IAnalyticsService // TypeDefIndex: 7057
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract long ConvertCurrencyToMinorUnits(string currencyCode, double value);
}


// Namespace: Unity.Services.Analytics
internal interface IAnalyticsContainer // TypeDefIndex: 7058
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Enable();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Disable();
}


// Namespace: Unity.Services.Analytics
internal class AnalyticsContainer : MonoBehaviour, IAnalyticsContainer, IContainerDebug // TypeDefIndex: 7059
{
	// Fields
	private const float k_AutoFlushPeriod = 60;
	private const float k_GameRunningPeriod = 60;
	private static bool s_Created; // 0x0
	private static GameObject s_Container; // 0x8
	private static AnalyticsContainer m_Instance; // 0x10
	private float m_AutoFlushTime; // 0x20
	private float m_GameRunningTime; // 0x24
	private AnalyticsServiceInstance m_Service; // 0x28

	// Properties
	private float AutoFlushPeriod { get; }
	internal static IContainerDebug ContainerDebug { get; }
	public float TimeUntilNextHeartbeat { get; }

	// Methods

	// RVA: 0x133A318 Offset: 0x1336318 VA: 0x133A318
	private float get_AutoFlushPeriod() { }

	// RVA: 0x133A344 Offset: 0x1336344 VA: 0x133A344
	internal static IContainerDebug get_ContainerDebug() { }

	// RVA: 0x133A38C Offset: 0x133638C VA: 0x133A38C Slot: 6
	public float get_TimeUntilNextHeartbeat() { }

	// RVA: 0x133606C Offset: 0x133206C VA: 0x133606C
	internal static AnalyticsContainer CreateContainer() { }

	// RVA: 0x1336710 Offset: 0x1332710 VA: 0x1336710 Slot: 7
	public void Initialize(AnalyticsServiceInstance service) { }

	// RVA: 0x133A3A8 Offset: 0x13363A8 VA: 0x133A3A8 Slot: 4
	public void Enable() { }

	// RVA: 0x133A3B4 Offset: 0x13363B4 VA: 0x133A3B4 Slot: 5
	public void Disable() { }

	// RVA: 0x133A3D4 Offset: 0x13363D4 VA: 0x133A3D4
	private void Update() { }

	// RVA: 0x133A458 Offset: 0x1336458 VA: 0x133A458
	private void OnApplicationPause(bool paused) { }

	// RVA: 0x133A474 Offset: 0x1336474 VA: 0x133A474
	private void CleanUp() { }

	// RVA: 0x133A564 Offset: 0x1336564 VA: 0x133A564
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics
internal interface ICoreStatsHelper // TypeDefIndex: 7060
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetCoreStatsConsent(bool userProvidedConsent);
}


// Namespace: Unity.Services.Analytics
internal class CoreStatsHelper : ICoreStatsHelper // TypeDefIndex: 7061
{
	// Methods

	// RVA: 0x133A56C Offset: 0x133656C VA: 0x133A56C Slot: 4
	public void SetCoreStatsConsent(bool userProvidedConsent) { }

	// RVA: 0x133537C Offset: 0x133137C VA: 0x133537C
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics
public static class SdkVersion // TypeDefIndex: 7062
{
	// Fields
	public static readonly string SDK_VERSION; // 0x0

	// Methods

	// RVA: 0x133A578 Offset: 0x1336578 VA: 0x133A578
	private static void .cctor() { }
}


// Namespace: Unity.Services.Analytics.Data
internal interface ICommonData // TypeDefIndex: 7063
{
	// Properties
	public abstract string Version { get; }
	public abstract string GameBundleId { get; }
	public abstract string ProjectId { get; }
	public abstract string Platform { get; }
	public abstract string BuildGUID { get; }
	public abstract string Idfv { get; }
	public abstract string GameStoreId { get; }
	public abstract bool HasVolume { get; }
	public abstract float Volume { get; }
	public abstract double BatteryLevel { get; }
	public abstract string AnalyticsRegionLanguageCode { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Version();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_GameBundleId();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_ProjectId();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string get_Platform();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract string get_BuildGUID();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string get_Idfv();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract string get_GameStoreId();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool get_HasVolume();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract float get_Volume();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract double get_BatteryLevel();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract string get_AnalyticsRegionLanguageCode();
}


// Namespace: Unity.Services.Analytics.Data
internal interface IDeviceData // TypeDefIndex: 7064
{
	// Properties
	public abstract string CpuType { get; }
	public abstract string GpuType { get; }
	public abstract int CpuCores { get; }
	public abstract int RamTotal { get; }
	public abstract int ScreenWidth { get; }
	public abstract int ScreenHeight { get; }
	public abstract float ScreenDpi { get; }
	public abstract string OperatingSystem { get; }
	public abstract string DeviceModel { get; }
	public abstract bool IsDebugDevice { get; }
	public abstract bool IsTiny { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_CpuType();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_GpuType();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_CpuCores();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract int get_RamTotal();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract int get_ScreenWidth();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract int get_ScreenHeight();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract float get_ScreenDpi();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract string get_OperatingSystem();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract string get_DeviceModel();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract bool get_IsDebugDevice();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract bool get_IsTiny();
}


// Namespace: Unity.Services.Analytics.Data
internal class DeviceDataWrapper : IDeviceData // TypeDefIndex: 7065
{
	// Properties
	public string CpuType { get; }
	public string GpuType { get; }
	public int CpuCores { get; }
	public int RamTotal { get; }
	public int ScreenWidth { get; }
	public int ScreenHeight { get; }
	public float ScreenDpi { get; }
	public string OperatingSystem { get; }
	public string DeviceModel { get; }
	public bool IsDebugDevice { get; }
	public bool IsTiny { get; }

	// Methods

	// RVA: 0x133A5D8 Offset: 0x13365D8 VA: 0x133A5D8 Slot: 4
	public string get_CpuType() { }

	// RVA: 0x133A5E0 Offset: 0x13365E0 VA: 0x133A5E0 Slot: 5
	public string get_GpuType() { }

	// RVA: 0x133A5E8 Offset: 0x13365E8 VA: 0x133A5E8 Slot: 6
	public int get_CpuCores() { }

	// RVA: 0x133A5F0 Offset: 0x13365F0 VA: 0x133A5F0 Slot: 7
	public int get_RamTotal() { }

	// RVA: 0x133A5F8 Offset: 0x13365F8 VA: 0x133A5F8 Slot: 8
	public int get_ScreenWidth() { }

	// RVA: 0x133A600 Offset: 0x1336600 VA: 0x133A600 Slot: 9
	public int get_ScreenHeight() { }

	// RVA: 0x133A608 Offset: 0x1336608 VA: 0x133A608 Slot: 10
	public float get_ScreenDpi() { }

	// RVA: 0x133A610 Offset: 0x1336610 VA: 0x133A610 Slot: 11
	public string get_OperatingSystem() { }

	// RVA: 0x133A618 Offset: 0x1336618 VA: 0x133A618 Slot: 12
	public string get_DeviceModel() { }

	// RVA: 0x133A620 Offset: 0x1336620 VA: 0x133A620 Slot: 13
	public bool get_IsDebugDevice() { }

	// RVA: 0x133A628 Offset: 0x1336628 VA: 0x133A628 Slot: 14
	public bool get_IsTiny() { }

	// RVA: 0x13363AC Offset: 0x13323AC VA: 0x13363AC
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics.Data
internal class CommonDataWrapper : ICommonData // TypeDefIndex: 7066
{
	// Fields
	[CompilerGenerated]
	private readonly string <Version>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly string <GameBundleId>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly string <ProjectId>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly string <Platform>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly string <BuildGUID>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly string <Idfv>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly string <GameStoreId>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly bool <HasVolume>k__BackingField; // 0x48

	// Properties
	public string Version { get; }
	public string GameBundleId { get; }
	public string ProjectId { get; }
	public string Platform { get; }
	public string BuildGUID { get; }
	public string Idfv { get; }
	public string GameStoreId { get; }
	public bool HasVolume { get; }
	public float Volume { get; }
	public double BatteryLevel { get; }
	public string AnalyticsRegionLanguageCode { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x133A630 Offset: 0x1336630 VA: 0x133A630 Slot: 4
	public string get_Version() { }

	[CompilerGenerated]
	// RVA: 0x133A638 Offset: 0x1336638 VA: 0x133A638 Slot: 5
	public string get_GameBundleId() { }

	[CompilerGenerated]
	// RVA: 0x133A640 Offset: 0x1336640 VA: 0x133A640 Slot: 6
	public string get_ProjectId() { }

	[CompilerGenerated]
	// RVA: 0x133A648 Offset: 0x1336648 VA: 0x133A648 Slot: 7
	public string get_Platform() { }

	[CompilerGenerated]
	// RVA: 0x133A650 Offset: 0x1336650 VA: 0x133A650 Slot: 8
	public string get_BuildGUID() { }

	[CompilerGenerated]
	// RVA: 0x133A658 Offset: 0x1336658 VA: 0x133A658 Slot: 9
	public string get_Idfv() { }

	[CompilerGenerated]
	// RVA: 0x133A660 Offset: 0x1336660 VA: 0x133A660 Slot: 10
	public string get_GameStoreId() { }

	[CompilerGenerated]
	// RVA: 0x133A668 Offset: 0x1336668 VA: 0x133A668 Slot: 11
	public bool get_HasVolume() { }

	// RVA: 0x133A670 Offset: 0x1336670 VA: 0x133A670 Slot: 12
	public float get_Volume() { }

	// RVA: 0x133A930 Offset: 0x1336930 VA: 0x133A930 Slot: 13
	public double get_BatteryLevel() { }

	// RVA: 0x133A948 Offset: 0x1336948 VA: 0x133A948 Slot: 14
	public string get_AnalyticsRegionLanguageCode() { }

	// RVA: 0x1336300 Offset: 0x1332300 VA: 0x1336300
	public void .ctor(string cloudProjectId) { }

	// RVA: 0x133A994 Offset: 0x1336994 VA: 0x133A994
	private static string GetPlatform() { }
}


// Namespace: Unity.Services.Analytics.Data
internal interface IDataGenerator // TypeDefIndex: 7067
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void GameRunning(string callingMethodIdentifier);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SdkStartup(string callingMethodIdentifier);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void NewPlayer(string callingMethodIdentifier);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void GameStarted(string callingMethodIdentifier);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void GameEnded(string callingMethodIdentifier, DataGenerator.SessionEndState quitState);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void ClientDevice(string callingMethodIdentifier);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void PushCommonParams(string callingMethodIdentifier);
}


// Namespace: 
internal enum DataGenerator.SessionEndState // TypeDefIndex: 7068
{
	// Fields
	public int value__; // 0x0
	public const DataGenerator.SessionEndState PAUSED = 0;
	public const DataGenerator.SessionEndState KILLEDINBACKGROUND = 1;
	public const DataGenerator.SessionEndState KILLEDINFOREGROUND = 2;
	public const DataGenerator.SessionEndState QUIT = 3;
}


// Namespace: Unity.Services.Analytics.Data
internal class DataGenerator : IDataGenerator // TypeDefIndex: 7069
{
	// Fields
	private readonly IBuffer m_Buffer; // 0x10
	private readonly ICommonData m_CommonData; // 0x18
	private readonly IDeviceData m_DeviceData; // 0x20

	// Methods

	// RVA: 0x13363B4 Offset: 0x13323B4 VA: 0x13363B4
	public void .ctor(IBuffer buffer, ICommonData staticData, IDeviceData deviceData) { }

	// RVA: 0x133AB30 Offset: 0x1336B30 VA: 0x133AB30 Slot: 5
	public void SdkStartup(string callingMethodIdentifier) { }

	// RVA: 0x133B9B0 Offset: 0x13379B0 VA: 0x133B9B0 Slot: 4
	public void GameRunning(string callingMethodIdentifier) { }

	// RVA: 0x133BAEC Offset: 0x1337AEC VA: 0x133BAEC Slot: 6
	public void NewPlayer(string callingMethodIdentifier) { }

	// RVA: 0x133BD28 Offset: 0x1337D28 VA: 0x133BD28 Slot: 7
	public void GameStarted(string callingMethodIdentifier) { }

	// RVA: 0x133C3A0 Offset: 0x13383A0 VA: 0x133C3A0 Slot: 8
	public void GameEnded(string callingMethodIdentifier, DataGenerator.SessionEndState quitState) { }

	// RVA: 0x133C5AC Offset: 0x13385AC VA: 0x133C5AC Slot: 9
	public void ClientDevice(string callingMethodIdentifier) { }

	// RVA: 0x133ADC4 Offset: 0x1336DC4 VA: 0x133ADC4 Slot: 10
	public void PushCommonParams(string callingMethodIdentifier) { }
}


// Namespace: Unity.Services.Analytics.Platform
internal static class DeviceVolumeProvider // TypeDefIndex: 7070
{
	// Properties
	internal static bool VolumeAvailable { get; }

	// Methods

	// RVA: 0x133AB28 Offset: 0x1336B28 VA: 0x133AB28
	internal static bool get_VolumeAvailable() { }

	// RVA: 0x133A674 Offset: 0x1336674 VA: 0x133A674
	internal static float GetDeviceVolume() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal class AnalyticsUserIdServiceComponent : IAnalyticsUserId, IServiceComponent // TypeDefIndex: 7071
{
	// Fields
	private readonly IAnalyticsService m_AnalyticsService; // 0x10

	// Methods

	// RVA: 0x1336804 Offset: 0x1332804 VA: 0x1336804
	public void .ctor(IAnalyticsService analyticsService) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IIdentityManager // TypeDefIndex: 7072
{
	// Properties
	public abstract string UserId { get; }
	public abstract string InstallId { get; }
	public abstract string PlayerId { get; }
	public abstract bool IsNewPlayer { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_UserId();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_InstallId();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_PlayerId();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool get_IsNewPlayer();

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract void add_OnPlayerChanged(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 5
	public abstract void remove_OnPlayerChanged(Action value);
}


// Namespace: Unity.Services.Analytics.Internal
internal class IdentityManager : IIdentityManager // TypeDefIndex: 7073
{
	// Fields
	private readonly IPlayerId m_PlayerId; // 0x10
	private readonly IExternalUserId m_ExternalIdProvider; // 0x18
	private readonly IPersistence m_Persistence; // 0x20
	private bool m_Initialized; // 0x28
	[CompilerGenerated]
	private string <UserId>k__BackingField; // 0x30
	[CompilerGenerated]
	private string <InstallId>k__BackingField; // 0x38
	[CompilerGenerated]
	private string <ExternalId>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <IsNewPlayer>k__BackingField; // 0x48
	[CompilerGenerated]
	private Action OnPlayerChanged; // 0x50

	// Properties
	public string UserId { get; set; }
	public string InstallId { get; set; }
	public string PlayerId { get; }
	public string ExternalId { get; set; }
	public bool IsNewPlayer { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x133CD8C Offset: 0x1338D8C VA: 0x133CD8C Slot: 4
	public string get_UserId() { }

	[CompilerGenerated]
	// RVA: 0x133CD94 Offset: 0x1338D94 VA: 0x133CD94
	private void set_UserId(string value) { }

	[CompilerGenerated]
	// RVA: 0x133CD9C Offset: 0x1338D9C VA: 0x133CD9C Slot: 5
	public string get_InstallId() { }

	[CompilerGenerated]
	// RVA: 0x133CDA4 Offset: 0x1338DA4 VA: 0x133CDA4
	private void set_InstallId(string value) { }

	// RVA: 0x133CDAC Offset: 0x1338DAC VA: 0x133CDAC Slot: 6
	public string get_PlayerId() { }

	[CompilerGenerated]
	// RVA: 0x133CE58 Offset: 0x1338E58 VA: 0x133CE58 Slot: 10
	public string get_ExternalId() { }

	[CompilerGenerated]
	// RVA: 0x133CE60 Offset: 0x1338E60 VA: 0x133CE60
	private void set_ExternalId(string value) { }

	[CompilerGenerated]
	// RVA: 0x133CE68 Offset: 0x1338E68 VA: 0x133CE68 Slot: 7
	public bool get_IsNewPlayer() { }

	[CompilerGenerated]
	// RVA: 0x133CE70 Offset: 0x1338E70 VA: 0x133CE70
	private void set_IsNewPlayer(bool value) { }

	[CompilerGenerated]
	// RVA: 0x133CE7C Offset: 0x1338E7C VA: 0x133CE7C Slot: 8
	public void add_OnPlayerChanged(Action value) { }

	[CompilerGenerated]
	// RVA: 0x133CF18 Offset: 0x1338F18 VA: 0x133CF18 Slot: 9
	public void remove_OnPlayerChanged(Action value) { }

	// RVA: 0x133538C Offset: 0x133138C VA: 0x133538C
	public void .ctor(IInstallationId installId, IPlayerId playerId, IExternalUserId externalId, IPersistence persistence) { }

	// RVA: 0x133CFB4 Offset: 0x1338FB4 VA: 0x133CFB4
	private void ExternalUserIdChanged(string newName) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal static class Locale // TypeDefIndex: 7074
{
	// Methods

	// RVA: 0x133D160 Offset: 0x1339160 VA: 0x133D160
	internal static string CurrentLanguageCode() { }

	// RVA: 0x133A94C Offset: 0x133694C VA: 0x133A94C
	internal static string AnalyticsRegionLanguageCode() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IAnalyticsForgetter // TypeDefIndex: 7075
{
	// Properties
	public abstract bool DeletionInProgress { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_DeletionInProgress();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void AttemptToForget(string userId, string installationId, string playerId, string timestamp, string callingMethod, Action successfulUploadCallback);
}


// Namespace: 
private enum AnalyticsForgetter.DataDeletionStatus // TypeDefIndex: 7076
{
	// Fields
	public int value__; // 0x0
	public const AnalyticsForgetter.DataDeletionStatus DataAllowed = 0;
	public const AnalyticsForgetter.DataDeletionStatus DeletionInProgress = 1;
	public const AnalyticsForgetter.DataDeletionStatus SuccessfullyDeleted = 2;
}


// Namespace: Unity.Services.Analytics.Internal
internal class AnalyticsForgetter : IAnalyticsForgetter // TypeDefIndex: 7077
{
	// Fields
	private readonly string m_CollectUrl; // 0x10
	private readonly IPersistence m_Persistence; // 0x18
	private readonly IWebRequestHelper m_WebRequestHelper; // 0x20
	private Action m_Callback; // 0x28
	private AnalyticsForgetter.DataDeletionStatus m_DeletionStatus; // 0x30
	private IWebRequest m_Request; // 0x38

	// Properties
	public bool DeletionInProgress { get; }

	// Methods

	// RVA: 0x133D310 Offset: 0x1339310 VA: 0x133D310 Slot: 4
	public bool get_DeletionInProgress() { }

	// RVA: 0x13363F0 Offset: 0x13323F0 VA: 0x13363F0
	internal void .ctor(string collectUrl, IPersistence persistence, IWebRequestHelper webRequestHelper) { }

	// RVA: 0x133D320 Offset: 0x1339320 VA: 0x133D320
	private void SetForgettingStatus(AnalyticsForgetter.DataDeletionStatus state) { }

	// RVA: 0x133D3E8 Offset: 0x13393E8 VA: 0x133D3E8 Slot: 5
	public void AttemptToForget(string userId, string installationId, string playerId, string timestamp, string callingMethod, Action successfulUploadCallback) { }

	// RVA: 0x133D96C Offset: 0x133996C VA: 0x133D96C
	private void UploadComplete(long code) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IBuffer // TypeDefIndex: 7078
{
	// Properties
	public abstract int Length { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void PushStandardEventStart(string name, int version);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void PushCustomEventStart(string name);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void PushEndEvent();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void PushDouble(string name, double value);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void PushString(string name, string value);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void PushInt64(string name, long value);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void PushBool(string name, bool value);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void PushObject(string name, object value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void FlushToDisk();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void ClearDiskCache();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract int get_Length();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract byte[] Serialize();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void ClearBuffer();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void ClearBuffer(long upTo);
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IBufferSystemCalls // TypeDefIndex: 7079
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GenerateGuid();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract DateTime Now();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract TimeSpan GetTimeZoneUtcOffset(DateTime dateTime);
}


// Namespace: Unity.Services.Analytics.Internal
internal class BufferSystemCalls : IBufferSystemCalls // TypeDefIndex: 7080
{
	// Methods

	// RVA: 0x133DAC4 Offset: 0x1339AC4 VA: 0x133DAC4 Slot: 4
	public string GenerateGuid() { }

	// RVA: 0x133DAF0 Offset: 0x1339AF0 VA: 0x133DAF0 Slot: 5
	public DateTime Now() { }

	// RVA: 0x133DB40 Offset: 0x1339B40 VA: 0x133DB40 Slot: 6
	public TimeSpan GetTimeZoneUtcOffset(DateTime dateTime) { }

	// RVA: 0x13355E8 Offset: 0x13315E8 VA: 0x13355E8
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal struct EventSummary // TypeDefIndex: 7081
{
	// Fields
	internal int StartIndex; // 0x0
	internal int EndIndex; // 0x4
	internal string Id; // 0x8
}


// Namespace: Unity.Services.Analytics.Internal
internal class BufferX : IBuffer, IBufferDebug // TypeDefIndex: 7082
{
	// Fields
	private readonly byte[] k_WorkingBuffer; // 0x10
	private readonly char[] k_WorkingCharacterBuffer; // 0x18
	private readonly byte[] k_PayloadHeader; // 0x20
	private readonly byte[] k_HeaderEventName; // 0x28
	private readonly byte[] k_HeaderUserName; // 0x30
	private readonly byte[] k_HeaderSessionID; // 0x38
	private readonly byte[] k_HeaderEventUUID; // 0x40
	private readonly byte[] k_HeaderTimestamp; // 0x48
	private readonly byte[] k_HeaderEventVersion; // 0x50
	private readonly byte[] k_HeaderInstallationID; // 0x58
	private readonly byte[] k_HeaderPlayerID; // 0x60
	private readonly byte[] k_HeaderOpenEventParams; // 0x68
	private readonly byte[] k_CloseEvent; // 0x70
	private readonly byte k_Quote; // 0x78
	private readonly byte[] k_QuoteColon; // 0x80
	private readonly byte[] k_QuoteComma; // 0x88
	private readonly byte[] k_Comma; // 0x90
	private readonly byte[] k_OpenBrace; // 0x98
	private readonly byte[] k_CloseBraceComma; // 0xA0
	private readonly byte[] k_OpenBracket; // 0xA8
	private readonly byte[] k_CloseBracketComma; // 0xB0
	private readonly byte k_Colon; // 0xB8
	private readonly byte k_Dash; // 0xB9
	private readonly byte k_Space; // 0xBA
	private readonly byte k_Point; // 0xBB
	private readonly byte k_Positive; // 0xBC
	private readonly byte k_Negative; // 0xBD
	private readonly byte[] k_True; // 0xC0
	private readonly byte[] k_False; // 0xC8
	private readonly byte[] k_Int2CharacterByte; // 0xD0
	private readonly long[] k_Order; // 0xD8
	private readonly IBufferSystemCalls m_SystemCalls; // 0xE0
	private readonly IDiskCache m_DiskCache; // 0xE8
	private readonly IIdentityManager m_UserIdentity; // 0xF0
	private readonly ISessionManager m_Session; // 0xF8
	private readonly List<EventSummary> m_EventSummaries; // 0x100
	private string m_CurrentEventId; // 0x108
	private string m_CurrentEventName; // 0x110
	private DateTime m_CurrentEventTimestamp; // 0x118
	private MemoryStream m_SpareBuffer; // 0x120
	private MemoryStream m_Buffer; // 0x128
	[CompilerGenerated]
	private Action<string, string, DateTime, byte[]> EventRecorded; // 0x130
	[CompilerGenerated]
	private Action<HashSet<string>> EventsClearing; // 0x138
	[CompilerGenerated]
	private Action<HashSet<string>> EventsCleared; // 0x140

	// Properties
	public int Length { get; }

	// Methods

	// RVA: 0x133DBA8 Offset: 0x1339BA8 VA: 0x133DBA8 Slot: 14
	public int get_Length() { }

	[CompilerGenerated]
	// RVA: 0x133DBCC Offset: 0x1339BCC VA: 0x133DBCC Slot: 18
	public void add_EventRecorded(Action<string, string, DateTime, byte[]> value) { }

	[CompilerGenerated]
	// RVA: 0x133DC80 Offset: 0x1339C80 VA: 0x133DC80 Slot: 19
	public void remove_EventRecorded(Action<string, string, DateTime, byte[]> value) { }

	[CompilerGenerated]
	// RVA: 0x133DD34 Offset: 0x1339D34 VA: 0x133DD34 Slot: 20
	public void add_EventsClearing(Action<HashSet<string>> value) { }

	[CompilerGenerated]
	// RVA: 0x133DDE8 Offset: 0x1339DE8 VA: 0x133DDE8 Slot: 21
	public void remove_EventsClearing(Action<HashSet<string>> value) { }

	// RVA: 0x1335850 Offset: 0x1331850 VA: 0x1335850
	public void .ctor(IBufferSystemCalls eventIdGenerator, IDiskCache diskCache, IIdentityManager userIdentity, ISessionManager session) { }

	// RVA: 0x133DF6C Offset: 0x1339F6C VA: 0x133DF6C
	private void WriteString(in string value) { }

	// RVA: 0x133DFF4 Offset: 0x1339FF4 VA: 0x133DFF4
	private void WriteLong(in long value) { }

	// RVA: 0x133E244 Offset: 0x133A244 VA: 0x133E244
	private void WriteByte(in byte value) { }

	// RVA: 0x133E26C Offset: 0x133A26C VA: 0x133E26C
	private void WriteBytes(in byte[] bytes) { }

	// RVA: 0x133E2A0 Offset: 0x133A2A0 VA: 0x133E2A0
	private void WriteName(string name) { }

	// RVA: 0x133E300 Offset: 0x133A300 VA: 0x133E300
	private void WriteDateTime(DateTime dateTime) { }

	// RVA: 0x133E04C Offset: 0x133A04C VA: 0x133E04C
	private int SerializeLong(in long number, in byte[] buffer, in int startIndex, in int minimumLength) { }

	// RVA: 0x133E7C8 Offset: 0x133A7C8 VA: 0x133E7C8 Slot: 4
	public void PushStandardEventStart(string name, int version) { }

	// RVA: 0x133EC88 Offset: 0x133AC88 VA: 0x133EC88 Slot: 5
	public void PushCustomEventStart(string name) { }

	// RVA: 0x133E9F0 Offset: 0x133A9F0 VA: 0x133E9F0
	private void PushCommonEventStart(string name) { }

	// RVA: 0x133ECA4 Offset: 0x133ACA4 VA: 0x133ECA4
	private void StripTrailingCommaIfNecessary() { }

	// RVA: 0x133ED50 Offset: 0x133AD50 VA: 0x133ED50 Slot: 6
	public void PushEndEvent() { }

	// RVA: 0x133F01C Offset: 0x133B01C VA: 0x133F01C
	public void PushObjectStart(string name) { }

	// RVA: 0x133F038 Offset: 0x133B038 VA: 0x133F038
	public void PushObjectEnd() { }

	// RVA: 0x133F054 Offset: 0x133B054 VA: 0x133F054
	public void PushArrayStart(string name) { }

	// RVA: 0x133F070 Offset: 0x133B070 VA: 0x133F070
	public void PushArrayEnd() { }

	// RVA: 0x133F08C Offset: 0x133B08C VA: 0x133F08C Slot: 7
	public void PushDouble(string name, double value) { }

	// RVA: 0x133F134 Offset: 0x133B134 VA: 0x133F134 Slot: 22
	public void PushFloat(string name, float value) { }

	// RVA: 0x133F1DC Offset: 0x133B1DC VA: 0x133F1DC Slot: 8
	public void PushString(string name, string value) { }

	// RVA: 0x133F560 Offset: 0x133B560 VA: 0x133F560
	private int ProcessCharacterOntoWorkingBuffer(int index, char character) { }

	// RVA: 0x133F750 Offset: 0x133B750 VA: 0x133F750 Slot: 9
	public void PushInt64(string name, long value) { }

	// RVA: 0x133F784 Offset: 0x133B784 VA: 0x133F784 Slot: 23
	public void PushInt(string name, int value) { }

	// RVA: 0x133F78C Offset: 0x133B78C VA: 0x133F78C Slot: 10
	public void PushBool(string name, bool value) { }

	// RVA: 0x133F7CC Offset: 0x133B7CC VA: 0x133F7CC
	public void PushTimestamp(string name, DateTime value) { }

	// RVA: 0x133F820 Offset: 0x133B820 VA: 0x133F820 Slot: 11
	public void PushObject(string name, object value) { }

	// RVA: 0x13401CC Offset: 0x133C1CC VA: 0x13401CC Slot: 15
	public byte[] Serialize() { }

	// RVA: 0x133DE9C Offset: 0x1339E9C VA: 0x133DE9C Slot: 16
	public void ClearBuffer() { }

	// RVA: 0x1340578 Offset: 0x133C578 VA: 0x1340578 Slot: 17
	public void ClearBuffer(long upTo) { }

	// RVA: 0x13408D4 Offset: 0x133C8D4 VA: 0x13408D4 Slot: 12
	public void FlushToDisk() { }

	// RVA: 0x1340988 Offset: 0x133C988 VA: 0x1340988 Slot: 13
	public void ClearDiskCache() { }

	// RVA: 0x1338D5C Offset: 0x1334D5C VA: 0x1338D5C
	internal static string SerializeDateTime(DateTime dateTime) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IDiskCache // TypeDefIndex: 7083
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Clear();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Write(List<EventSummary> eventSummaries, Stream payload);
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IFileSystemCalls // TypeDefIndex: 7084
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool CanAccessFileSystem();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool FileExists(string path);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void DeleteFile(string path);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract Stream OpenFileForWriting(string path);
}


// Namespace: Unity.Services.Analytics.Internal
internal class FileSystemCalls : IFileSystemCalls // TypeDefIndex: 7085
{
	// Fields
	private readonly bool m_CanAccessFileSystem; // 0x10

	// Methods

	// RVA: 0x13355F0 Offset: 0x13315F0 VA: 0x13355F0
	internal void .ctor() { }

	// RVA: 0x1340A28 Offset: 0x133CA28 VA: 0x1340A28 Slot: 4
	public bool CanAccessFileSystem() { }

	// RVA: 0x1340A30 Offset: 0x133CA30 VA: 0x1340A30 Slot: 5
	public bool FileExists(string path) { }

	// RVA: 0x1340A3C Offset: 0x133CA3C VA: 0x1340A3C Slot: 6
	public void DeleteFile(string path) { }

	// RVA: 0x1340A48 Offset: 0x133CA48 VA: 0x1340A48 Slot: 7
	public Stream OpenFileForWriting(string path) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal class DiskCache : IDiskCache // TypeDefIndex: 7086
{
	// Fields
	private readonly string k_CacheFilePath; // 0x10
	private readonly IFileSystemCalls k_SystemCalls; // 0x18
	private readonly long k_CacheFileMaximumSize; // 0x20

	// Methods

	// RVA: 0x1335744 Offset: 0x1331744 VA: 0x1335744
	internal void .ctor(IFileSystemCalls systemCalls) { }

	// RVA: 0x1340AA8 Offset: 0x133CAA8 VA: 0x1340AA8 Slot: 5
	public void Write(List<EventSummary> eventSummaries, Stream payload) { }

	// RVA: 0x13410CC Offset: 0x133D0CC VA: 0x13410CC Slot: 4
	public void Clear() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IDispatcher // TypeDefIndex: 7087
{
	// Properties
	public abstract int ConsecutiveFailedUploadCount { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int get_ConsecutiveFailedUploadCount();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetBuffer(IBuffer buffer);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Flush();
}


// Namespace: Unity.Services.Analytics.Internal
internal class Dispatcher : IDispatcher, IDispatcherDebug // TypeDefIndex: 7088
{
	// Fields
	private readonly IWebRequestHelper m_WebRequestHelper; // 0x10
	private readonly string m_CollectUrl; // 0x18
	private IBuffer m_DataBuffer; // 0x20
	private IWebRequest m_FlushRequest; // 0x28
	private byte[] m_LastFlushPayload; // 0x30
	private int m_FlushBufferIndex; // 0x38
	[CompilerGenerated]
	private int <ConsecutiveFailedUploadCount>k__BackingField; // 0x3C
	[CompilerGenerated]
	private bool <FlushInProgress>k__BackingField; // 0x40
	[CompilerGenerated]
	private Action<byte[]> FlushStarted; // 0x48
	[CompilerGenerated]
	private Action<int, bool, bool, bool, bool, byte[]> FlushFinished; // 0x50

	// Properties
	public int ConsecutiveFailedUploadCount { get; set; }
	public bool FlushInProgress { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1341264 Offset: 0x133D264 VA: 0x1341264 Slot: 4
	public int get_ConsecutiveFailedUploadCount() { }

	[CompilerGenerated]
	// RVA: 0x134126C Offset: 0x133D26C VA: 0x134126C
	private void set_ConsecutiveFailedUploadCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x1341274 Offset: 0x133D274 VA: 0x1341274 Slot: 11
	public bool get_FlushInProgress() { }

	[CompilerGenerated]
	// RVA: 0x134127C Offset: 0x133D27C VA: 0x134127C
	private void set_FlushInProgress(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1341288 Offset: 0x133D288 VA: 0x1341288 Slot: 7
	public void add_FlushStarted(Action<byte[]> value) { }

	[CompilerGenerated]
	// RVA: 0x1341338 Offset: 0x133D338 VA: 0x1341338 Slot: 8
	public void remove_FlushStarted(Action<byte[]> value) { }

	[CompilerGenerated]
	// RVA: 0x13413E8 Offset: 0x133D3E8 VA: 0x13413E8 Slot: 9
	public void add_FlushFinished(Action<int, bool, bool, bool, bool, byte[]> value) { }

	[CompilerGenerated]
	// RVA: 0x1341498 Offset: 0x133D498 VA: 0x1341498 Slot: 10
	public void remove_FlushFinished(Action<int, bool, bool, bool, bool, byte[]> value) { }

	// RVA: 0x13362D4 Offset: 0x13322D4 VA: 0x13362D4
	public void .ctor(IWebRequestHelper webRequestHelper, string collectUrl) { }

	// RVA: 0x1341548 Offset: 0x133D548 VA: 0x1341548 Slot: 5
	public void SetBuffer(IBuffer buffer) { }

	// RVA: 0x1341550 Offset: 0x133D550 VA: 0x1341550 Slot: 6
	public void Flush() { }

	// RVA: 0x13415D4 Offset: 0x133D5D4 VA: 0x13415D4
	private void FlushBufferToService() { }

	// RVA: 0x13419DC Offset: 0x133D9DC VA: 0x13419DC
	private void UploadCompleted(long responseCode) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IBufferDebug // TypeDefIndex: 7089
{
	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void add_EventRecorded(Action<string, string, DateTime, byte[]> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void remove_EventRecorded(Action<string, string, DateTime, byte[]> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void add_EventsClearing(Action<HashSet<string>> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void remove_EventsClearing(Action<HashSet<string>> value);
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IDispatcherDebug // TypeDefIndex: 7090
{
	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void add_FlushStarted(Action<byte[]> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void remove_FlushStarted(Action<byte[]> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void add_FlushFinished(Action<int, bool, bool, bool, bool, byte[]> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void remove_FlushFinished(Action<int, bool, bool, bool, bool, byte[]> value);
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IContainerDebug // TypeDefIndex: 7091
{}


// Namespace: Unity.Services.Analytics.Internal
internal interface IPersistence // TypeDefIndex: 7092
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SaveValue(string key, int value);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SaveValue(string key, string value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int LoadInt(string key);
}


// Namespace: Unity.Services.Analytics.Internal
internal class PlayerPrefsPersistence : IPersistence // TypeDefIndex: 7093
{
	// Methods

	// RVA: 0x1341D64 Offset: 0x133DD64 VA: 0x1341D64 Slot: 4
	public void SaveValue(string key, int value) { }

	// RVA: 0x1341D84 Offset: 0x133DD84 VA: 0x1341D84 Slot: 5
	public void SaveValue(string key, string value) { }

	// RVA: 0x1341DA4 Offset: 0x133DDA4 VA: 0x1341DA4 Slot: 6
	public int LoadInt(string key) { }

	// RVA: 0x1335384 Offset: 0x1331384 VA: 0x1335384
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IWebRequest : IDisposable // TypeDefIndex: 7094
{
	// Properties
	public abstract bool IsNetworkError { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UnityWebRequestAsyncOperation SendWebRequest();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetRequestHeader(string key, string value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_IsNetworkError();
}


// Namespace: Unity.Services.Analytics.Internal
internal interface IWebRequestHelper // TypeDefIndex: 7095
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IWebRequest CreateWebRequest(string url, string method, byte[] postBytes);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendWebRequest(IWebRequest request, Action<long> onCompleted);
}


// Namespace: Unity.Services.Analytics.Internal
internal class AnalyticsWebRequest : UnityWebRequest, IWebRequest, IDisposable // TypeDefIndex: 7096
{
	// Properties
	public bool IsNetworkError { get; }

	// Methods

	// RVA: 0x1341DD8 Offset: 0x133DDD8 VA: 0x1341DD8
	internal void .ctor(string url, string method) { }

	// RVA: 0x1341DE0 Offset: 0x133DDE0 VA: 0x1341DE0 Slot: 7
	public bool get_IsNetworkError() { }

	// RVA: 0x1341DFC Offset: 0x133DDFC VA: 0x1341DFC Slot: 5
	private UnityWebRequestAsyncOperation Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest() { }

	// RVA: 0x1341E04 Offset: 0x133DE04 VA: 0x1341E04 Slot: 6
	private void Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader(string key, string value) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class WebRequestHelper.<>c__DisplayClass2_0 // TypeDefIndex: 7097
{
	// Fields
	public Action<long> onCompleted; // 0x10
	public UnityWebRequestAsyncOperation requestOp; // 0x18

	// Methods

	// RVA: 0x1342054 Offset: 0x133E054 VA: 0x1342054
	public void .ctor() { }

	// RVA: 0x134205C Offset: 0x133E05C VA: 0x134205C
	internal void <SendWebRequest>b__0(AsyncOperation <p0>) { }
}


// Namespace: Unity.Services.Analytics.Internal
internal class WebRequestHelper : IWebRequestHelper // TypeDefIndex: 7098
{
	// Fields
	private readonly string k_ClientIdHeaderValue; // 0x10

	// Methods

	// RVA: 0x1341E0C Offset: 0x133DE0C VA: 0x1341E0C Slot: 4
	public IWebRequest CreateWebRequest(string url, string method, byte[] postBytes) { }

	// RVA: 0x1341F1C Offset: 0x133DF1C VA: 0x1341F1C Slot: 5
	public void SendWebRequest(IWebRequest request, Action<long> onCompleted) { }

	// RVA: 0x133624C Offset: 0x133224C VA: 0x133624C
	public void .ctor() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal interface ISessionManager // TypeDefIndex: 7099
{
	// Properties
	public abstract string SessionId { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_SessionId();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void StartNewSession();
}


// Namespace: Unity.Services.Analytics.Internal
internal class SessionManager : ISessionManager // TypeDefIndex: 7100
{
	// Fields
	[CompilerGenerated]
	private string <SessionId>k__BackingField; // 0x10

	// Properties
	public string SessionId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13420B0 Offset: 0x133E0B0 VA: 0x13420B0 Slot: 4
	public string get_SessionId() { }

	[CompilerGenerated]
	// RVA: 0x13420B8 Offset: 0x133E0B8 VA: 0x13420B8
	private void set_SessionId(string value) { }

	// RVA: 0x13355AC Offset: 0x13315AC VA: 0x13355AC
	public void .ctor() { }

	// RVA: 0x13420C0 Offset: 0x133E0C0 VA: 0x13420C0 Slot: 5
	public void StartNewSession() { }
}


// Namespace: Unity.Services.Analytics.Internal
internal class StandardEventServiceComponent : IAnalyticsStandardEventComponent, IServiceComponent // TypeDefIndex: 7101
{
	// Fields
	private readonly IProjectConfiguration m_Configuration; // 0x10
	private readonly IUnstructuredEventRecorder m_AnalyticsService; // 0x18

	// Methods

	// RVA: 0x13367D8 Offset: 0x13327D8 VA: 0x13367D8
	public void .ctor(IProjectConfiguration configuration, IUnstructuredEventRecorder analyticsService) { }

	// RVA: 0x13420F4 Offset: 0x133E0F4 VA: 0x13420F4 Slot: 4
	public void Record(string eventName, IDictionary<string, object> eventParameters, int eventVersion, string packageName) { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 // TypeDefIndex: 7102
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 // TypeDefIndex: 7103
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 7104
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 5DFD08902631E8C424E3803A27CCA0D46EB96FA95BCFD9A825E96E89A8A74659 /*Metadata offset 0x3900F8*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 84D89877F0D4041EFB6BF91A16F0248F2FD573E6AF05C19F96BEDB9F882F7882 /*Metadata offset 0x390198*/; // 0x98
}
