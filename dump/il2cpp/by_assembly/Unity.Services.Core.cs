// Namespace: 
internal class <Module> // TypeDefIndex: 7838
{}


// Namespace: Unity.Services.Core
internal class ExternalUserIdProperty // TypeDefIndex: 7839
{
	// Fields
	[CompilerGenerated]
	private Action<string> UserIdChanged; // 0x10
	private string m_UserId; // 0x18

	// Properties
	public string UserId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1343354 Offset: 0x133F354 VA: 0x1343354
	public void add_UserIdChanged(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x1343404 Offset: 0x133F404 VA: 0x1343404
	public void remove_UserIdChanged(Action<string> value) { }

	// RVA: 0x13434B4 Offset: 0x133F4B4 VA: 0x13434B4
	public string get_UserId() { }

	// RVA: 0x13434BC Offset: 0x133F4BC VA: 0x13434BC
	public void set_UserId(string value) { }

	// RVA: 0x13434DC Offset: 0x133F4DC VA: 0x13434DC
	public void .ctor() { }
}


// Namespace: Unity.Services.Core
public class InitializationOptions // TypeDefIndex: 7840
{
	// Fields
	[CompilerGenerated]
	private readonly IDictionary<string, object> <Values>k__BackingField; // 0x10

	// Properties
	internal IDictionary<string, object> Values { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13434E4 Offset: 0x133F4E4 VA: 0x13434E4
	internal IDictionary<string, object> get_Values() { }

	// RVA: 0x13434EC Offset: 0x133F4EC VA: 0x13434EC
	public void .ctor() { }

	// RVA: 0x134356C Offset: 0x133F56C VA: 0x134356C
	internal void .ctor(IDictionary<string, object> values) { }

	// RVA: 0x1343594 Offset: 0x133F594 VA: 0x1343594
	internal void .ctor(InitializationOptions source) { }

	// RVA: 0x1343620 Offset: 0x133F620 VA: 0x1343620
	public InitializationOptions SetOption(string key, string value) { }
}


// Namespace: Unity.Services.Core
public class ServicesInitializationException : Exception // TypeDefIndex: 7841
{
	// Methods

	// RVA: 0x13436E4 Offset: 0x133F6E4 VA: 0x13436E4
	public void .ctor() { }

	// RVA: 0x134373C Offset: 0x133F73C VA: 0x134373C
	public void .ctor(string message) { }

	// RVA: 0x13437A4 Offset: 0x133F7A4 VA: 0x13437A4
	public void .ctor(string message, Exception innerException) { }
}


// Namespace: Unity.Services.Core
public enum ServicesInitializationState // TypeDefIndex: 7842
{
	// Fields
	public int value__; // 0x0
	public const ServicesInitializationState Uninitialized = 0;
	public const ServicesInitializationState Initializing = 1;
	public const ServicesInitializationState Initialized = 2;
}


// Namespace: Unity.Services.Core
internal class UnityProjectNotLinkedException : ServicesInitializationException // TypeDefIndex: 7843
{
	// Methods

	// RVA: 0x1343814 Offset: 0x133F814 VA: 0x1343814
	public void .ctor(string message) { }
}


// Namespace: Unity.Services.Core
public interface IUnityServices // TypeDefIndex: 7844
{
	// Properties
	public abstract ServicesInitializationState State { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ServicesInitializationState get_State();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Task InitializeAsync(InitializationOptions options);
}


// Namespace: 
[CompilerGenerated]
private struct UnityServices.<InitializeAsync>d__26 : IAsyncStateMachine // TypeDefIndex: 7845
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public InitializationOptions options; // 0x20
	private TaskAwaiter<object> <>u__1; // 0x28
	private TaskAwaiter <>u__2; // 0x30

	// Methods

	// RVA: 0x1343FDC Offset: 0x133FFDC VA: 0x1343FDC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13445F8 Offset: 0x13405F8 VA: 0x13445F8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Unity.Services.Core
public static class UnityServices // TypeDefIndex: 7846
{
	// Fields
	[CompilerGenerated]
	private static IUnityServices <Instance>k__BackingField; // 0x0
	[CompilerGenerated]
	private static TaskCompletionSource<object> <InstantiationCompletion>k__BackingField; // 0x8
	internal static ExternalUserIdProperty ExternalUserIdProperty; // 0x10
	[CompilerGenerated]
	private static readonly Dictionary<string, IUnityServices> <s_Services>k__BackingField; // 0x18

	// Properties
	public static IUnityServices Instance { get; set; }
	internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
	private static Dictionary<string, IUnityServices> s_Services { get; }
	public static ServicesInitializationState State { get; }
	public static string ExternalUserId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1343818 Offset: 0x133F818 VA: 0x1343818
	public static IUnityServices get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x1343870 Offset: 0x133F870 VA: 0x1343870
	public static void set_Instance(IUnityServices value) { }

	[CompilerGenerated]
	// RVA: 0x13438CC Offset: 0x133F8CC VA: 0x13438CC
	internal static TaskCompletionSource<object> get_InstantiationCompletion() { }

	[CompilerGenerated]
	// RVA: 0x1343924 Offset: 0x133F924 VA: 0x1343924
	internal static void set_InstantiationCompletion(TaskCompletionSource<object> value) { }

	[CompilerGenerated]
	// RVA: 0x1343980 Offset: 0x133F980 VA: 0x1343980
	private static Dictionary<string, IUnityServices> get_s_Services() { }

	// RVA: 0x13439D8 Offset: 0x133F9D8 VA: 0x13439D8
	public static ServicesInitializationState get_State() { }

	// RVA: 0x1343C4C Offset: 0x133FC4C VA: 0x1343C4C
	public static string get_ExternalUserId() { }

	// RVA: 0x1343CB0 Offset: 0x133FCB0 VA: 0x1343CB0
	public static void set_ExternalUserId(string value) { }

	// RVA: 0x1343D3C Offset: 0x133FD3C VA: 0x1343D3C
	public static Task InitializeAsync() { }

	[AsyncStateMachine(typeof(UnityServices.<InitializeAsync>d__26))]
	// RVA: 0x1343DB0 Offset: 0x133FDB0 VA: 0x1343DB0
	public static Task InitializeAsync(InitializationOptions options) { }

	// RVA: 0x1343E74 Offset: 0x133FE74 VA: 0x1343E74
	internal static void ClearServices() { }

	// RVA: 0x1343F1C Offset: 0x133FF1C VA: 0x1343F1C
	private static void .cctor() { }
}


// Namespace: 
internal sealed class UnityServicesBuilder.CreationDelegate : MulticastDelegate // TypeDefIndex: 7847
{
	// Methods

	// RVA: 0x13446AC Offset: 0x13406AC VA: 0x13446AC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1344748 Offset: 0x1340748 VA: 0x1344748 Slot: 12
	public virtual IUnityServices Invoke(string servicesId) { }
}


// Namespace: Unity.Services.Core
internal static class UnityServicesBuilder // TypeDefIndex: 7848
{
	// Fields
	[CompilerGenerated]
	private static UnityServicesBuilder.CreationDelegate <InstanceCreationDelegate>k__BackingField; // 0x0

	// Properties
	internal static UnityServicesBuilder.CreationDelegate InstanceCreationDelegate { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1344660 Offset: 0x1340660 VA: 0x1344660
	internal static void set_InstanceCreationDelegate(UnityServicesBuilder.CreationDelegate value) { }
}


// Namespace: Unity.Services.Core
internal static class UnityThreadUtils // TypeDefIndex: 7849
{
	// Fields
	private static int s_UnityThreadId; // 0x0
	[CompilerGenerated]
	private static TaskScheduler <UnityThreadScheduler>k__BackingField; // 0x8

	// Properties
	private static TaskScheduler UnityThreadScheduler { set; }
	public static bool IsRunningOnUnityThread { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134475C Offset: 0x134075C VA: 0x134475C
	private static void set_UnityThreadScheduler(TaskScheduler value) { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x13447A8 Offset: 0x13407A8 VA: 0x13447A8
	private static void CaptureUnityThreadInfo() { }

	// RVA: 0x1343BEC Offset: 0x133FBEC VA: 0x1343BEC
	public static bool get_IsRunningOnUnityThread() { }
}
