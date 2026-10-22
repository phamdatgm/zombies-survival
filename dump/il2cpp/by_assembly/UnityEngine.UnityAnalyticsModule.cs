// Namespace: 
internal class <Module> // TypeDefIndex: 7747
{}


// Namespace: 
public sealed class RemoteSettings.UpdatedEventHandler : MulticastDelegate // TypeDefIndex: 7748
{
	// Methods

	// RVA: 0x15D7398 Offset: 0x15D3398 VA: 0x15D7398
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15D7420 Offset: 0x15D3420 VA: 0x15D7420 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
public static class RemoteSettings // TypeDefIndex: 7749
{
	// Fields
	[CompilerGenerated]
	private static RemoteSettings.UpdatedEventHandler Updated; // 0x0
	[CompilerGenerated]
	private static Action BeforeFetchFromServer; // 0x8
	[CompilerGenerated]
	private static Action<bool, bool, int> Completed; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x15D7238 Offset: 0x15D3238 VA: 0x15D7238
	internal static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer) { }

	[RequiredByNativeCode]
	// RVA: 0x15D729C Offset: 0x15D329C VA: 0x15D729C
	internal static void RemoteSettingsBeforeFetchFromServer() { }

	[RequiredByNativeCode]
	// RVA: 0x15D7300 Offset: 0x15D3300 VA: 0x15D7300
	internal static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int response) { }
}


// Namespace: UnityEngine
public class RemoteConfigSettings // TypeDefIndex: 7750
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	[CompilerGenerated]
	private Action<bool> Updated; // 0x18

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x15D7434 Offset: 0x15D3434 VA: 0x15D7434
	internal static void RemoteConfigSettingsUpdated(RemoteConfigSettings rcs, bool wasLastUpdatedFromServer) { }
}


// Namespace: 
[RequiredByNativeCode]
internal enum RemoteConfigSettingsHelper.Tag // TypeDefIndex: 7751
{
	// Fields
	public int value__; // 0x0
	public const RemoteConfigSettingsHelper.Tag kUnknown = 0;
	public const RemoteConfigSettingsHelper.Tag kIntVal = 1;
	public const RemoteConfigSettingsHelper.Tag kInt64Val = 2;
	public const RemoteConfigSettingsHelper.Tag kUInt64Val = 3;
	public const RemoteConfigSettingsHelper.Tag kDoubleVal = 4;
	public const RemoteConfigSettingsHelper.Tag kBoolVal = 5;
	public const RemoteConfigSettingsHelper.Tag kStringVal = 6;
	public const RemoteConfigSettingsHelper.Tag kArrayVal = 7;
	public const RemoteConfigSettingsHelper.Tag kMixedArrayVal = 8;
	public const RemoteConfigSettingsHelper.Tag kMapVal = 9;
	public const RemoteConfigSettingsHelper.Tag kMaxTags = 10;
}


// Namespace: UnityEngine
internal static class RemoteConfigSettingsHelper // TypeDefIndex: 7752
{}


// Namespace: UnityEngine.Analytics
[RequiredByNativeCode]
public class ContinuousEvent // TypeDefIndex: 7753
{}


// Namespace: UnityEngine.Analytics
[RequiredByNativeCode]
public enum AnalyticsSessionState // TypeDefIndex: 7754
{
	// Fields
	public int value__; // 0x0
	public const AnalyticsSessionState kSessionStopped = 0;
	public const AnalyticsSessionState kSessionStarted = 1;
	public const AnalyticsSessionState kSessionPaused = 2;
	public const AnalyticsSessionState kSessionResumed = 3;
}


// Namespace: 
public sealed class AnalyticsSessionInfo.SessionStateChanged : MulticastDelegate // TypeDefIndex: 7755
{
	// Methods

	// RVA: 0x15D7574 Offset: 0x15D3574 VA: 0x15D7574
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15D7600 Offset: 0x15D3600 VA: 0x15D7600 Slot: 12
	public virtual void Invoke(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged) { }
}


// Namespace: 
public sealed class AnalyticsSessionInfo.IdentityTokenChanged : MulticastDelegate // TypeDefIndex: 7756
{
	// Methods

	// RVA: 0x15D7618 Offset: 0x15D3618 VA: 0x15D7618
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15D76B4 Offset: 0x15D36B4 VA: 0x15D76B4 Slot: 12
	public virtual void Invoke(string token) { }
}


// Namespace: UnityEngine.Analytics
[RequiredByNativeCode]
public static class AnalyticsSessionInfo // TypeDefIndex: 7757
{
	// Fields
	[CompilerGenerated]
	private static AnalyticsSessionInfo.SessionStateChanged sessionStateChanged; // 0x0
	[CompilerGenerated]
	private static AnalyticsSessionInfo.IdentityTokenChanged identityTokenChanged; // 0x8

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x15D746C Offset: 0x15D346C VA: 0x15D746C
	internal static void CallSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged) { }

	[RequiredByNativeCode]
	// RVA: 0x15D7508 Offset: 0x15D3508 VA: 0x15D7508
	internal static void CallIdentityTokenChanged(string token) { }
}


// Namespace: UnityEngine.Analytics
internal class CustomEventData : IDisposable // TypeDefIndex: 7758
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x15D76C8 Offset: 0x15D36C8 VA: 0x15D76C8
	public void .ctor(string name) { }

	// RVA: 0x15D7760 Offset: 0x15D3760 VA: 0x15D7760 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x15D77F4 Offset: 0x15D37F4 VA: 0x15D77F4
	private void Destroy() { }

	// RVA: 0x15D788C Offset: 0x15D388C VA: 0x15D788C Slot: 4
	public void Dispose() { }

	// RVA: 0x15D771C Offset: 0x15D371C VA: 0x15D771C
	internal static IntPtr Internal_Create(CustomEventData ced, string name) { }

	// RVA: 0x15D7850 Offset: 0x15D3850 VA: 0x15D7850
	internal static void Internal_Destroy(IntPtr ptr) { }

	// RVA: 0x15D78EC Offset: 0x15D38EC VA: 0x15D78EC
	public bool AddString(string key, string value) { }

	// RVA: 0x15D7940 Offset: 0x15D3940 VA: 0x15D7940
	public bool AddInt32(string key, int value) { }

	// RVA: 0x15D7994 Offset: 0x15D3994 VA: 0x15D7994
	public bool AddUInt32(string key, uint value) { }

	// RVA: 0x15D79E8 Offset: 0x15D39E8 VA: 0x15D79E8
	public bool AddInt64(string key, long value) { }

	// RVA: 0x15D7A3C Offset: 0x15D3A3C VA: 0x15D7A3C
	public bool AddUInt64(string key, ulong value) { }

	// RVA: 0x15D7A90 Offset: 0x15D3A90 VA: 0x15D7A90
	public bool AddBool(string key, bool value) { }

	// RVA: 0x15D7AE4 Offset: 0x15D3AE4 VA: 0x15D7AE4
	public bool AddDouble(string key, double value) { }

	// RVA: 0x15D7B38 Offset: 0x15D3B38 VA: 0x15D7B38
	public bool AddDictionary(IDictionary<string, object> eventData) { }
}


// Namespace: UnityEngine.Analytics
public static class Analytics // TypeDefIndex: 7759
{
	// Methods

	// RVA: 0x15D8C64 Offset: 0x15D4C64 VA: 0x15D8C64
	internal static bool IsInitialized() { }

	// RVA: 0x15D8C8C Offset: 0x15D4C8C VA: 0x15D8C8C
	private static AnalyticsResult Transaction(string productId, double amount, string currency, string receiptPurchaseData, string signature, bool usingIAPService) { }

	// RVA: 0x15D8D08 Offset: 0x15D4D08 VA: 0x15D8D08
	private static AnalyticsResult SendCustomEventName(string customEventName) { }

	// RVA: 0x15D8D44 Offset: 0x15D4D44 VA: 0x15D8D44
	private static AnalyticsResult SendCustomEvent(CustomEventData eventData) { }

	// RVA: 0x15D8D80 Offset: 0x15D4D80 VA: 0x15D8D80
	public static AnalyticsResult Transaction(string productId, Decimal amount, string currency, string receiptPurchaseData, string signature) { }

	// RVA: 0x15D8D88 Offset: 0x15D4D88 VA: 0x15D8D88
	public static AnalyticsResult Transaction(string productId, Decimal amount, string currency, string receiptPurchaseData, string signature, bool usingIAPService) { }

	// RVA: 0x15D8F70 Offset: 0x15D4F70 VA: 0x15D8F70
	public static AnalyticsResult CustomEvent(string customEventName) { }

	// RVA: 0x15D9038 Offset: 0x15D5038 VA: 0x15D9038
	public static AnalyticsResult CustomEvent(string customEventName, IDictionary<string, object> eventData) { }
}


// Namespace: UnityEngine.Analytics
public enum AnalyticsResult // TypeDefIndex: 7760
{
	// Fields
	public int value__; // 0x0
	public const AnalyticsResult Ok = 0;
	public const AnalyticsResult NotInitialized = 1;
	public const AnalyticsResult AnalyticsDisabled = 2;
	public const AnalyticsResult TooManyItems = 3;
	public const AnalyticsResult SizeLimitReached = 4;
	public const AnalyticsResult TooManyRequests = 5;
	public const AnalyticsResult InvalidData = 6;
	public const AnalyticsResult UnsupportedPlatform = 7;
}
