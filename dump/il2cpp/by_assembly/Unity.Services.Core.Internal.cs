// Namespace: 
internal class <Module> // TypeDefIndex: 7489
{}


// Namespace: Unity.Services.Authentication.Internal
public interface IPlayerId : IServiceComponent // TypeDefIndex: 7490
{
	// Properties
	public abstract string PlayerId { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_PlayerId();
}


// Namespace: Unity.Services.Core.Threading.Internal
public interface IUnityThreadUtils : IServiceComponent // TypeDefIndex: 7491
{}


// Namespace: Unity.Services.Core.Telemetry.Internal
public interface IDiagnostics // TypeDefIndex: 7492
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SendDiagnostic(string name, string message, IDictionary<string, string> tags);
}


// Namespace: Unity.Services.Core.Telemetry.Internal
internal interface IDiagnosticsComponentProvider // TypeDefIndex: 7493
{}


// Namespace: Unity.Services.Core.Telemetry.Internal
public interface IDiagnosticsFactory : IServiceComponent // TypeDefIndex: 7494
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IDiagnostics Create(string packageName);
}


// Namespace: Unity.Services.Core.Telemetry.Internal
public interface IMetrics // TypeDefIndex: 7495
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SendGaugeMetric(string name, double value = 0, IDictionary<string, string> tags);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SendHistogramMetric(string name, double time, IDictionary<string, string> tags);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SendSumMetric(string name, double value = 1, IDictionary<string, string> tags);
}


// Namespace: Unity.Services.Core.Telemetry.Internal
public interface IMetricsFactory : IServiceComponent // TypeDefIndex: 7496
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IMetrics Create(string packageName);
}


// Namespace: Unity.Services.Core.Scheduler.Internal
public interface IActionScheduler : IServiceComponent // TypeDefIndex: 7497
{}


// Namespace: Unity.Services.Core.Environments.Internal
public interface IEnvironments : IServiceComponent // TypeDefIndex: 7498
{
	// Properties
	public abstract string Current { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Current();
}


// Namespace: Unity.Services.Core.Device.Internal
public interface IInstallationId : IServiceComponent // TypeDefIndex: 7499
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GetOrCreateIdentifier();
}


// Namespace: Unity.Services.Core.Configuration.Internal
public interface ICloudProjectId : IServiceComponent // TypeDefIndex: 7500
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GetCloudProjectId();
}


// Namespace: Unity.Services.Core.Configuration.Internal
public interface IExternalUserId : IServiceComponent // TypeDefIndex: 7501
{
	// Properties
	public abstract string UserId { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_UserId();

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void add_UserIdChanged(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void remove_UserIdChanged(Action<string> value);
}


// Namespace: Unity.Services.Core.Configuration.Internal
public interface IProjectConfiguration : IServiceComponent // TypeDefIndex: 7502
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string GetString(string key, string defaultValue);
}


// Namespace: Unity.Services.Core.Analytics.Internal
public interface IAnalyticsStandardEventComponent : IServiceComponent // TypeDefIndex: 7503
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Record(string eventName, IDictionary<string, object> eventParameters, int eventVersion, string packageName);
}


// Namespace: Unity.Services.Core.Analytics.Internal
public interface IAnalyticsUserId : IServiceComponent // TypeDefIndex: 7504
{}


// Namespace: Unity.Services.Core.Internal
internal abstract class AsyncOperationBase : CustomYieldInstruction // TypeDefIndex: 7505
{
	// Properties
	public override bool keepWaiting { get; }
	public abstract bool IsCompleted { get; }

	// Methods

	// RVA: 0x1345B64 Offset: 0x1341B64 VA: 0x1345B64 Slot: 7
	public override bool get_keepWaiting() { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract bool get_IsCompleted();
}


// Namespace: Unity.Services.Core.Internal
internal class TaskAsyncOperation : AsyncOperationBase // TypeDefIndex: 7506
{
	// Fields
	internal static TaskScheduler Scheduler; // 0x0
	private Task m_Task; // 0x10

	// Properties
	public override bool IsCompleted { get; }

	// Methods

	// RVA: 0x1345B84 Offset: 0x1341B84 VA: 0x1345B84 Slot: 9
	public override bool get_IsCompleted() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1345BA0 Offset: 0x1341BA0 VA: 0x1345BA0
	internal static void SetScheduler() { }
}


// Namespace: Unity.Services.Core.Internal
internal static class CoreLogger // TypeDefIndex: 7507
{
	// Methods

	// RVA: 0x1345C14 Offset: 0x1341C14 VA: 0x1345C14
	public static void LogWarning(object message) { }

	// RVA: 0x1345D34 Offset: 0x1341D34 VA: 0x1345D34
	public static void LogError(object message) { }

	// RVA: 0x1345E54 Offset: 0x1341E54 VA: 0x1345E54
	public static void LogException(Exception exception) { }
}


// Namespace: Unity.Services.Core.Internal
public class CircularDependencyException : ServicesInitializationException // TypeDefIndex: 7508
{
	// Methods

	// RVA: 0x1345F78 Offset: 0x1341F78 VA: 0x1345F78
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Internal
internal class ComponentRegistry : IComponentRegistry // TypeDefIndex: 7509
{
	// Fields
	[CompilerGenerated]
	private readonly Dictionary<int, IServiceComponent> <ComponentTypeHashToInstance>k__BackingField; // 0x10

	// Properties
	internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1345F80 Offset: 0x1341F80 VA: 0x1345F80
	internal Dictionary<int, IServiceComponent> get_ComponentTypeHashToInstance() { }

	// RVA: 0x1345F88 Offset: 0x1341F88 VA: 0x1345F88
	public void .ctor() { }

	// RVA: -1 Offset: -1 Slot: 4
	public void RegisterServiceComponent<TComponent>(TComponent component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BE90 Offset: 0xB77E90 VA: 0xB7BE90
	|-ComponentRegistry.RegisterServiceComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public TComponent GetServiceComponent<TComponent>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BC70 Offset: 0xB77C70 VA: 0xB7BC70
	|-ComponentRegistry.GetServiceComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1346008 Offset: 0x1342008 VA: 0x1346008
	private bool IsComponentTypeRegistered(int componentTypeHash) { }

	// RVA: 0x13460D4 Offset: 0x13420D4 VA: 0x13460D4 Slot: 6
	public void ResetProvidedComponents(IDictionary<int, IServiceComponent> componentTypeHashToInstance) { }
}


// Namespace: Unity.Services.Core.Internal
internal interface IComponentRegistry // TypeDefIndex: 7510
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RegisterServiceComponent<TComponent>(TComponent component);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract TComponent GetServiceComponent<TComponent>();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ResetProvidedComponents(IDictionary<int, IServiceComponent> componentTypeHashToInstance);
}


// Namespace: Unity.Services.Core.Internal
internal class LockedComponentRegistry : IComponentRegistry // TypeDefIndex: 7511
{
	// Fields
	[CompilerGenerated]
	private readonly IComponentRegistry <Registry>k__BackingField; // 0x10

	// Properties
	internal IComponentRegistry Registry { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134615C Offset: 0x134215C VA: 0x134615C
	internal IComponentRegistry get_Registry() { }

	// RVA: 0x1346164 Offset: 0x1342164 VA: 0x1346164
	public void .ctor(IComponentRegistry registryToLock) { }

	// RVA: -1 Offset: -1 Slot: 4
	public void RegisterServiceComponent<TComponent>(TComponent component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9CCA8 Offset: 0xB98CA8 VA: 0xB9CCA8
	|-LockedComponentRegistry.RegisterServiceComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public TComponent GetServiceComponent<TComponent>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9CB84 Offset: 0xB98B84 VA: 0xB9CB84
	|-LockedComponentRegistry.GetServiceComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x134618C Offset: 0x134218C VA: 0x134618C Slot: 6
	public void ResetProvidedComponents(IDictionary<int, IServiceComponent> componentTypeHashToInstance) { }
}


// Namespace: Unity.Services.Core.Internal
public sealed class CorePackageRegistry // TypeDefIndex: 7512
{
	// Fields
	[CompilerGenerated]
	private static CorePackageRegistry <Instance>k__BackingField; // 0x0
	[CompilerGenerated]
	private IPackageRegistry <Registry>k__BackingField; // 0x10

	// Properties
	public static CorePackageRegistry Instance { get; set; }
	internal IPackageRegistry Registry { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13461D8 Offset: 0x13421D8 VA: 0x13461D8
	public static CorePackageRegistry get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x1346220 Offset: 0x1342220 VA: 0x1346220
	internal static void set_Instance(CorePackageRegistry value) { }

	[CompilerGenerated]
	// RVA: 0x134626C Offset: 0x134226C VA: 0x134626C
	internal IPackageRegistry get_Registry() { }

	[CompilerGenerated]
	// RVA: 0x1346274 Offset: 0x1342274 VA: 0x1346274
	internal void set_Registry(IPackageRegistry value) { }

	// RVA: 0x134627C Offset: 0x134227C VA: 0x134627C
	internal void .ctor() { }

	// RVA: -1 Offset: -1
	public CoreRegistration Register<TPackage>(TPackage package) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7CA28 Offset: 0xB78A28 VA: 0xB7CA28
	|-CorePackageRegistry.Register<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1346488 Offset: 0x1342488 VA: 0x1346488
	internal void Lock() { }
}


// Namespace: Unity.Services.Core.Internal
public struct CoreRegistration // TypeDefIndex: 7513
{
	// Fields
	private readonly IPackageRegistry m_Registry; // 0x0
	private readonly int m_PackageHash; // 0x8

	// Methods

	// RVA: 0x134653C Offset: 0x134253C VA: 0x134653C
	internal void .ctor(IPackageRegistry registry, int packageHash) { }

	// RVA: -1 Offset: -1
	public CoreRegistration DependsOn<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7CB68 Offset: 0xB78B68 VA: 0xB7CB68
	|-CoreRegistration.DependsOn<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public CoreRegistration OptionallyDependsOn<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7CC28 Offset: 0xB78C28 VA: 0xB7CC28
	|-CoreRegistration.OptionallyDependsOn<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public CoreRegistration ProvidesComponent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7CCE8 Offset: 0xB78CE8 VA: 0xB7CCE8
	|-CoreRegistration.ProvidesComponent<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: Unity.Services.Core.Internal
public sealed class CoreRegistry // TypeDefIndex: 7514
{
	// Fields
	[CompilerGenerated]
	private static CoreRegistry <Instance>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly string <InstanceId>k__BackingField; // 0x10
	[CompilerGenerated]
	private ServicesType <Type>k__BackingField; // 0x18
	[CompilerGenerated]
	private InitializationOptions <Options>k__BackingField; // 0x20
	[CompilerGenerated]
	private IPackageRegistry <PackageRegistry>k__BackingField; // 0x28
	[CompilerGenerated]
	private IComponentRegistry <ComponentRegistry>k__BackingField; // 0x30
	[CompilerGenerated]
	private IServiceRegistry <ServiceRegistry>k__BackingField; // 0x38

	// Properties
	public static CoreRegistry Instance { get; set; }
	internal ServicesType Type { get; set; }
	internal InitializationOptions Options { get; set; }
	internal IPackageRegistry PackageRegistry { get; set; }
	internal IComponentRegistry ComponentRegistry { get; set; }
	private IServiceRegistry ServiceRegistry { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1346548 Offset: 0x1342548 VA: 0x1346548
	public static CoreRegistry get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x1346590 Offset: 0x1342590 VA: 0x1346590
	internal static void set_Instance(CoreRegistry value) { }

	[CompilerGenerated]
	// RVA: 0x13465DC Offset: 0x13425DC VA: 0x13465DC
	internal ServicesType get_Type() { }

	[CompilerGenerated]
	// RVA: 0x13465E4 Offset: 0x13425E4 VA: 0x13465E4
	private void set_Type(ServicesType value) { }

	[CompilerGenerated]
	// RVA: 0x13465EC Offset: 0x13425EC VA: 0x13465EC
	internal InitializationOptions get_Options() { }

	[CompilerGenerated]
	// RVA: 0x13465F4 Offset: 0x13425F4 VA: 0x13465F4
	internal void set_Options(InitializationOptions value) { }

	[CompilerGenerated]
	// RVA: 0x13465FC Offset: 0x13425FC VA: 0x13465FC
	internal IPackageRegistry get_PackageRegistry() { }

	[CompilerGenerated]
	// RVA: 0x1346604 Offset: 0x1342604 VA: 0x1346604
	private void set_PackageRegistry(IPackageRegistry value) { }

	[CompilerGenerated]
	// RVA: 0x134660C Offset: 0x134260C VA: 0x134660C
	internal IComponentRegistry get_ComponentRegistry() { }

	[CompilerGenerated]
	// RVA: 0x1346614 Offset: 0x1342614 VA: 0x1346614
	private void set_ComponentRegistry(IComponentRegistry value) { }

	[CompilerGenerated]
	// RVA: 0x134661C Offset: 0x134261C VA: 0x134661C
	private void set_ServiceRegistry(IServiceRegistry value) { }

	// RVA: 0x1346624 Offset: 0x1342624 VA: 0x1346624
	internal void .ctor(IPackageRegistry packageRegistry, ServicesType type = 0, string instanceId) { }

	// RVA: -1 Offset: -1
	public CoreRegistration RegisterPackage<TPackage>(TPackage package) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7CECC Offset: 0xB78ECC VA: 0xB7CECC
	|-CoreRegistry.RegisterPackage<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void RegisterServiceComponent<TComponent>(TComponent component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D00C Offset: 0xB7900C VA: 0xB7D00C
	|-CoreRegistry.RegisterServiceComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public TComponent GetServiceComponent<TComponent>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7CDA8 Offset: 0xB78DA8 VA: 0xB7CDA8
	|-CoreRegistry.GetServiceComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1346754 Offset: 0x1342754 VA: 0x1346754
	internal void LockComponentRegistration() { }
}


// Namespace: 
private struct CoreRegistryInitializer.<>c__DisplayClass3_0.<<InitializeRegistryAsync>g__InitializePackageAsync|2>d : IAsyncStateMachine // TypeDefIndex: 7515
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CoreRegistryInitializer.<>c__DisplayClass3_0 <>4__this; // 0x20
	public IInitializablePackage package; // 0x28
	private TaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x1346BC8 Offset: 0x1342BC8 VA: 0x1346BC8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1346FD8 Offset: 0x1342FD8 VA: 0x1346FD8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
private struct CoreRegistryInitializer.<>c__DisplayClass3_0.<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d : IAsyncStateMachine // TypeDefIndex: 7516
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CoreRegistryInitializer.<>c__DisplayClass3_0 <>4__this; // 0x20
	public IInitializablePackage package; // 0x28
	private TaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x1347040 Offset: 0x1343040 VA: 0x1347040 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1347418 Offset: 0x1343418 VA: 0x1347418 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class CoreRegistryInitializer.<>c__DisplayClass3_0 // TypeDefIndex: 7517
{
	// Fields
	public Stopwatch stopwatch; // 0x10
	public List<PackageInitializationInfo> packagesInitInfos; // 0x18
	public List<Exception> failureReasons; // 0x20
	public CoreRegistryInitializer <>4__this; // 0x28
	public DependencyTree dependencyTree; // 0x30

	// Methods

	// RVA: 0x13468F0 Offset: 0x13428F0 VA: 0x13468F0
	public void .ctor() { }

	[AsyncStateMachine(typeof(CoreRegistryInitializer.<>c__DisplayClass3_0.<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d))]
	// RVA: 0x13468F8 Offset: 0x13428F8 VA: 0x13468F8
	internal Task <InitializeRegistryAsync>g__TryInitializePackageAsync|0(IInitializablePackage package) { }

	// RVA: 0x13469CC Offset: 0x13429CC VA: 0x13469CC
	internal IInitializablePackage <InitializeRegistryAsync>g__GetPackageAt|1(int index) { }

	[AsyncStateMachine(typeof(CoreRegistryInitializer.<>c__DisplayClass3_0.<<InitializeRegistryAsync>g__InitializePackageAsync|2>d))]
	// RVA: 0x1346A7C Offset: 0x1342A7C VA: 0x1346A7C
	internal Task <InitializeRegistryAsync>g__InitializePackageAsync|2(IInitializablePackage package) { }

	// RVA: 0x1346B50 Offset: 0x1342B50 VA: 0x1346B50
	internal void <InitializeRegistryAsync>g__Fail|3() { }
}


// Namespace: 
[CompilerGenerated]
private struct CoreRegistryInitializer.<InitializeRegistryAsync>d__3 : IAsyncStateMachine // TypeDefIndex: 7518
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<List<PackageInitializationInfo>> <>t__builder; // 0x8
	public CoreRegistryInitializer <>4__this; // 0x20
	private CoreRegistryInitializer.<>c__DisplayClass3_0 <>8__1; // 0x28
	private int <i>5__2; // 0x30
	private TaskAwaiter <>u__1; // 0x38

	// Methods

	// RVA: 0x1347480 Offset: 0x1343480 VA: 0x1347480 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1347A9C Offset: 0x1343A9C VA: 0x1347A9C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Unity.Services.Core.Internal
internal class CoreRegistryInitializer // TypeDefIndex: 7519
{
	// Fields
	private readonly CoreRegistry m_Registry; // 0x10
	private readonly List<int> m_SortedPackageTypeHashes; // 0x18

	// Methods

	// RVA: 0x13467E0 Offset: 0x13427E0 VA: 0x13467E0
	public void .ctor(CoreRegistry registry, List<int> sortedPackageTypeHashes) { }

	[AsyncStateMachine(typeof(CoreRegistryInitializer.<InitializeRegistryAsync>d__3))]
	// RVA: 0x134680C Offset: 0x134280C VA: 0x134680C
	public Task<List<PackageInitializationInfo>> InitializeRegistryAsync() { }
}


// Namespace: Unity.Services.Core.Internal
internal class DependencyTree // TypeDefIndex: 7520
{
	// Fields
	public readonly Dictionary<int, IInitializablePackage> PackageTypeHashToInstance; // 0x10
	public readonly Dictionary<int, int> ComponentTypeHashToPackageTypeHash; // 0x18
	public readonly Dictionary<int, List<int>> PackageTypeHashToComponentTypeHashDependencies; // 0x20
	public readonly Dictionary<int, IServiceComponent> ComponentTypeHashToInstance; // 0x28

	// Methods

	// RVA: 0x1346310 Offset: 0x1342310 VA: 0x1346310
	internal void .ctor() { }

	// RVA: 0x1347B18 Offset: 0x1343B18 VA: 0x1347B18
	internal void .ctor(Dictionary<int, IInitializablePackage> packageToInstance, Dictionary<int, int> componentToPackage, Dictionary<int, List<int>> packageToComponentDependencies, Dictionary<int, IServiceComponent> componentToInstance) { }
}


// Namespace: Unity.Services.Core.Internal
internal class DependencyTreeSortFailedException : Exception // TypeDefIndex: 7521
{
	// Methods

	// RVA: 0x1347B58 Offset: 0x1343B58 VA: 0x1347B58
	public void .ctor(DependencyTree tree, ICollection<int> target, Exception inner) { }

	// RVA: 0x1347BEC Offset: 0x1343BEC VA: 0x1347BEC
	private static string CreateExceptionMessage(DependencyTree tree, ICollection<int> target, Exception inner) { }
}


// Namespace: Unity.Services.Core.Internal
[Extension]
internal static class DependencyTreeExtensions // TypeDefIndex: 7522
{
	// Methods

	[Extension]
	// RVA: 0x1347CCC Offset: 0x1343CCC VA: 0x1347CCC
	internal static string ToJson(DependencyTree tree, ICollection<int> order) { }

	[Extension]
	// RVA: 0x1348F44 Offset: 0x1344F44 VA: 0x1348F44
	internal static bool IsOptional(DependencyTree tree, int componentTypeHash) { }

	[Extension]
	// RVA: 0x1348FC8 Offset: 0x1344FC8 VA: 0x1348FC8
	internal static bool IsProvided(DependencyTree tree, int componentTypeHash) { }

	// RVA: 0x134849C Offset: 0x134449C VA: 0x134849C
	private static JObject GetPackageJObject(DependencyTree tree, int packageHash) { }

	// RVA: 0x1348BD8 Offset: 0x1344BD8 VA: 0x1348BD8
	private static JObject GetComponentJObject(DependencyTree tree, int componentHash) { }

	// RVA: 0x1349038 Offset: 0x1345038 VA: 0x1349038
	private static string GetComponentIdentifier(IServiceComponent component) { }
}


// Namespace: 
private enum DependencyTreeInitializeOrderSorter.ExplorationMark // TypeDefIndex: 7523
{
	// Fields
	public int value__; // 0x0
	public const DependencyTreeInitializeOrderSorter.ExplorationMark None = 0;
	public const DependencyTreeInitializeOrderSorter.ExplorationMark Viewed = 1;
	public const DependencyTreeInitializeOrderSorter.ExplorationMark Sorted = 2;
}


// Namespace: Unity.Services.Core.Internal
internal struct DependencyTreeInitializeOrderSorter // TypeDefIndex: 7524
{
	// Fields
	public readonly DependencyTree Tree; // 0x0
	public readonly ICollection<int> Target; // 0x8
	private Dictionary<int, DependencyTreeInitializeOrderSorter.ExplorationMark> m_PackageTypeHashExplorationHistory; // 0x10

	// Methods

	// RVA: 0x13490F0 Offset: 0x13450F0 VA: 0x13490F0
	public void .ctor(DependencyTree tree, ICollection<int> target) { }

	// RVA: 0x13490FC Offset: 0x13450FC VA: 0x13490FC
	public void SortRegisteredPackagesIntoTarget() { }

	// RVA: 0x13495C0 Offset: 0x13455C0 VA: 0x13495C0
	private void RemoveUnprovidedOptionalDependenciesFromTree() { }

	// RVA: 0x1349A90 Offset: 0x1345A90 VA: 0x1349A90
	private void RemoveUnprovidedOptionalDependencies(IList<int> dependencyTypeHashes) { }

	// RVA: 0x13497A4 Offset: 0x13457A4 VA: 0x13497A4
	private void SortTreeThrough(int packageTypeHash) { }

	// RVA: 0x1349DA4 Offset: 0x1345DA4 VA: 0x1349DA4
	private void SortTreeThrough(IEnumerable<int> dependencyTypeHashes) { }

	// RVA: 0x1349C44 Offset: 0x1345C44 VA: 0x1349C44
	private void MarkPackage(int packageTypeHash, DependencyTreeInitializeOrderSorter.ExplorationMark mark) { }

	// RVA: 0x134974C Offset: 0x134574C VA: 0x134974C
	private IReadOnlyCollection<int> GetPackageTypeHashes() { }

	// RVA: 0x134A08C Offset: 0x134608C VA: 0x134A08C
	private int GetPackageTypeHashFor(int componentTypeHash) { }

	// RVA: 0x1349CB4 Offset: 0x1345CB4 VA: 0x1349CB4
	private IEnumerable<int> GetDependencyTypeHashesFor(int packageTypeHash) { }
}


// Namespace: Unity.Services.Core.Internal
internal class HashException : Exception // TypeDefIndex: 7525
{
	// Fields
	[CompilerGenerated]
	private readonly int <Hash>k__BackingField; // 0x8C

	// Properties
	public int Hash { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134A184 Offset: 0x1346184 VA: 0x134A184
	public int get_Hash() { }

	// RVA: 0x134A18C Offset: 0x134618C VA: 0x134A18C
	public void .ctor(int hash, string message) { }

	// RVA: 0x134A1F8 Offset: 0x13461F8 VA: 0x134A1F8
	public void .ctor(int hash, string message, Exception inner) { }
}


// Namespace: Unity.Services.Core.Internal
internal class DependencyTreePackageHashException : HashException // TypeDefIndex: 7526
{
	// Methods

	// RVA: 0x134A180 Offset: 0x1346180 VA: 0x134A180
	public void .ctor(int hash, string message) { }

	// RVA: 0x134A088 Offset: 0x1346088 VA: 0x134A088
	public void .ctor(int hash, string message, Exception inner) { }
}


// Namespace: Unity.Services.Core.Internal
internal class DependencyTreeComponentHashException : HashException // TypeDefIndex: 7527
{
	// Methods

	// RVA: 0x134A17C Offset: 0x134617C VA: 0x134A17C
	public void .ctor(int hash, string message) { }
}


// Namespace: Unity.Services.Core.Internal
public interface IInitializablePackage // TypeDefIndex: 7528
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Task Initialize(CoreRegistry registry);
}


// Namespace: Unity.Services.Core.Internal
public interface IInitializablePackageV2 : IInitializablePackage // TypeDefIndex: 7529
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Task InitializeInstanceAsync(CoreRegistry registry);
}


// Namespace: Unity.Services.Core.Internal
public interface IServiceComponent // TypeDefIndex: 7530
{}


// Namespace: Unity.Services.Core.Internal
internal class MissingComponent : IServiceComponent // TypeDefIndex: 7531
{
	// Fields
	[CompilerGenerated]
	private readonly Type <IntendedType>k__BackingField; // 0x10

	// Properties
	public Type IntendedType { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134A27C Offset: 0x134627C VA: 0x134A27C
	public Type get_IntendedType() { }

	// RVA: 0x134A284 Offset: 0x1346284 VA: 0x134A284
	internal void .ctor(Type intendedType) { }
}


// Namespace: Unity.Services.Core.Internal
internal class PackageInitializationInfo // TypeDefIndex: 7532
{
	// Fields
	public Type PackageType; // 0x10
	public double InitializationTimeInSeconds; // 0x18

	// Methods

	// RVA: 0x1347410 Offset: 0x1343410 VA: 0x1347410
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Internal
internal interface IPackageRegistry // TypeDefIndex: 7533
{
	// Properties
	public abstract DependencyTree Tree { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract DependencyTree get_Tree();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract CoreRegistration RegisterPackage<TPackage>(TPackage package);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void RegisterDependency<TComponent>(int packageTypeHash);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void RegisterOptionalDependency<TComponent>(int packageTypeHash);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void RegisterProvision<TComponent>(int packageTypeHash);
}


// Namespace: Unity.Services.Core.Internal
internal class LockedPackageRegistry : IPackageRegistry // TypeDefIndex: 7534
{
	// Fields
	[CompilerGenerated]
	private readonly IPackageRegistry <Registry>k__BackingField; // 0x10

	// Properties
	internal IPackageRegistry Registry { get; }
	public DependencyTree Tree { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134A2AC Offset: 0x13462AC VA: 0x134A2AC
	internal IPackageRegistry get_Registry() { }

	// RVA: 0x1346514 Offset: 0x1342514 VA: 0x1346514
	public void .ctor(IPackageRegistry registryToLock) { }

	// RVA: 0x134A2B4 Offset: 0x13462B4 VA: 0x134A2B4 Slot: 4
	public DependencyTree get_Tree() { }

	// RVA: -1 Offset: -1 Slot: 5
	public CoreRegistration RegisterPackage<TPackage>(TPackage package) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9CD80 Offset: 0xB98D80 VA: 0xB9CD80
	|-LockedPackageRegistry.RegisterPackage<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void RegisterDependency<TComponent>(int packageTypeHash) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9CCF0 Offset: 0xB98CF0 VA: 0xB9CCF0
	|-LockedPackageRegistry.RegisterDependency<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public void RegisterOptionalDependency<TComponent>(int packageTypeHash) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9CD38 Offset: 0xB98D38 VA: 0xB9CD38
	|-LockedPackageRegistry.RegisterOptionalDependency<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void RegisterProvision<TComponent>(int packageTypeHash) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9CDC8 Offset: 0xB98DC8 VA: 0xB9CDC8
	|-LockedPackageRegistry.RegisterProvision<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: Unity.Services.Core.Internal
internal class PackageRegistry : IPackageRegistry // TypeDefIndex: 7535
{
	// Fields
	[CompilerGenerated]
	private DependencyTree <Tree>k__BackingField; // 0x10

	// Properties
	public DependencyTree Tree { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134A354 Offset: 0x1346354 VA: 0x134A354 Slot: 4
	public DependencyTree get_Tree() { }

	[CompilerGenerated]
	// RVA: 0x134A35C Offset: 0x134635C VA: 0x134A35C Slot: 9
	public void set_Tree(DependencyTree value) { }

	// RVA: 0x1346460 Offset: 0x1342460 VA: 0x1346460
	public void .ctor(DependencyTree tree) { }

	// RVA: -1 Offset: -1 Slot: 5
	public CoreRegistration RegisterPackage<TPackage>(TPackage package) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA3200 Offset: 0xB9F200 VA: 0xBA3200
	|-PackageRegistry.RegisterPackage<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void RegisterDependency<TComponent>(int packageTypeHash) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA2FD4 Offset: 0xB9EFD4 VA: 0xBA2FD4
	|-PackageRegistry.RegisterDependency<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public void RegisterOptionalDependency<TComponent>(int packageTypeHash) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA30EC Offset: 0xB9F0EC VA: 0xBA30EC
	|-PackageRegistry.RegisterOptionalDependency<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void RegisterProvision<TComponent>(int packageTypeHash) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA33E8 Offset: 0xB9F3E8 VA: 0xBA33E8
	|-PackageRegistry.RegisterProvision<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x134A364 Offset: 0x1346364 VA: 0x134A364
	private void AddComponentDependencyToPackage(int componentTypeHash, int packageTypeHash) { }
}


// Namespace: Unity.Services.Core.Internal
internal interface IServiceRegistry // TypeDefIndex: 7536
{}


// Namespace: Unity.Services.Core.Internal
internal class ServiceRegistry : IServiceRegistry // TypeDefIndex: 7537
{
	// Fields
	[CompilerGenerated]
	private readonly Dictionary<int, object> <ServiceTypeHashToInstance>k__BackingField; // 0x10

	// Methods

	// RVA: 0x13466D4 Offset: 0x13426D4 VA: 0x13466D4
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Internal
internal enum ServicesType // TypeDefIndex: 7538
{
	// Fields
	public int value__; // 0x0
	public const ServicesType Default = 0;
	public const ServicesType Instance = 1;
}


// Namespace: Unity.Services.Core.Internal
internal class CoreDiagnostics // TypeDefIndex: 7539
{
	// Fields
	[CompilerGenerated]
	private static CoreDiagnostics <Instance>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly IDictionary<string, string> <CoreTags>k__BackingField; // 0x10
	[CompilerGenerated]
	private IDiagnosticsComponentProvider <DiagnosticsComponentProvider>k__BackingField; // 0x18

	// Properties
	public static CoreDiagnostics Instance { get; set; }
	internal IDiagnosticsComponentProvider DiagnosticsComponentProvider { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134A440 Offset: 0x1346440 VA: 0x134A440
	public static CoreDiagnostics get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x134A488 Offset: 0x1346488 VA: 0x134A488
	internal static void set_Instance(CoreDiagnostics value) { }

	[CompilerGenerated]
	// RVA: 0x134A4D4 Offset: 0x13464D4 VA: 0x134A4D4
	internal void set_DiagnosticsComponentProvider(IDiagnosticsComponentProvider value) { }

	// RVA: 0x134A4DC Offset: 0x13464DC VA: 0x134A4DC
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Internal
internal class CoreMetrics // TypeDefIndex: 7540
{
	// Fields
	[CompilerGenerated]
	private static CoreMetrics <Instance>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly IDictionary<Type, IMetrics> <AllPackageMetrics>k__BackingField; // 0x10

	// Properties
	public static CoreMetrics Instance { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134A558 Offset: 0x1346558 VA: 0x134A558
	public static CoreMetrics get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x134A5A0 Offset: 0x13465A0 VA: 0x134A5A0
	internal static void set_Instance(CoreMetrics value) { }

	// RVA: 0x134A5EC Offset: 0x13465EC VA: 0x134A5EC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private struct UnityServicesInitializer.<EnableServicesInitializationAsync>d__1 : IAsyncStateMachine // TypeDefIndex: 7541
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	private TaskAwaiter <>u__1; // 0x28

	// Methods

	// RVA: 0x134AB84 Offset: 0x1346B84 VA: 0x134AB84 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134AE64 Offset: 0x1346E64 VA: 0x134AE64 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Unity.Services.Core.Internal
internal static class UnityServicesInitializer // TypeDefIndex: 7542
{
	// Methods

	[RuntimeInitializeOnLoadMethod(2)]
	// RVA: 0x134A668 Offset: 0x1346668 VA: 0x134A668
	private static void CreateStaticInstance() { }

	[RuntimeInitializeOnLoadMethod(0)]
	[AsyncStateMachine(typeof(UnityServicesInitializer.<EnableServicesInitializationAsync>d__1))]
	// RVA: 0x134A9AC Offset: 0x13469AC VA: 0x134A9AC
	private static void EnableServicesInitializationAsync() { }

	// RVA: 0x134AA30 Offset: 0x1346A30 VA: 0x134AA30
	internal static IUnityServices CreateInstance(string servicesId) { }
}


// Namespace: 
private struct UnityServicesInternal.<>c__DisplayClass33_0.<<InitializeServicesAsync>g__InitializePackagesAsync|1>d : IAsyncStateMachine // TypeDefIndex: 7543
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public UnityServicesInternal.<>c__DisplayClass33_0 <>4__this; // 0x20
	private TaskAwaiter<List<PackageInitializationInfo>> <>u__1; // 0x28

	// Methods

	// RVA: 0x134B44C Offset: 0x134744C VA: 0x134B44C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134B6AC Offset: 0x13476AC VA: 0x134B6AC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class UnityServicesInternal.<>c__DisplayClass33_0 // TypeDefIndex: 7544
{
	// Fields
	public DependencyTree dependencyTree; // 0x10
	public List<int> sortedPackageTypeHashes; // 0x18
	public UnityServicesInternal <>4__this; // 0x20
	public Stopwatch initStopwatch; // 0x28

	// Methods

	// RVA: 0x134B25C Offset: 0x134725C VA: 0x134B25C
	public void .ctor() { }

	// RVA: 0x134B264 Offset: 0x1347264 VA: 0x134B264
	internal void <InitializeServicesAsync>g__SortPackages|0() { }

	[AsyncStateMachine(typeof(UnityServicesInternal.<>c__DisplayClass33_0.<<InitializeServicesAsync>g__InitializePackagesAsync|1>d))]
	// RVA: 0x134B288 Offset: 0x1347288 VA: 0x134B288
	internal Task <InitializeServicesAsync>g__InitializePackagesAsync|1() { }

	// RVA: 0x134B348 Offset: 0x1347348 VA: 0x134B348
	internal void <InitializeServicesAsync>g__FailServicesInitialization|2(Exception reason) { }

	// RVA: 0x134B3C4 Offset: 0x13473C4 VA: 0x134B3C4
	internal void <InitializeServicesAsync>g__SucceedServicesInitialization|3() { }
}


// Namespace: 
[CompilerGenerated]
private struct UnityServicesInternal.<EnableInitializationAsync>d__36 : IAsyncStateMachine // TypeDefIndex: 7545
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public UnityServicesInternal <>4__this; // 0x20
	private TaskAwaiter <>u__1; // 0x28

	// Methods

	// RVA: 0x134B714 Offset: 0x1347714 VA: 0x134B714 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134B938 Offset: 0x1347938 VA: 0x134B938 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct UnityServicesInternal.<InitializeAsync>d__27 : IAsyncStateMachine // TypeDefIndex: 7546
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public InitializationOptions options; // 0x20
	public UnityServicesInternal <>4__this; // 0x28
	private TaskAwaiter<object> <>u__1; // 0x30
	private TaskAwaiter <>u__2; // 0x38

	// Methods

	// RVA: 0x134B9A0 Offset: 0x13479A0 VA: 0x134B9A0 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134BDFC Offset: 0x1347DFC VA: 0x134BDFC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct UnityServicesInternal.<InitializeServicesAsync>d__33 : IAsyncStateMachine // TypeDefIndex: 7547
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public UnityServicesInternal <>4__this; // 0x20
	private UnityServicesInternal.<>c__DisplayClass33_0 <>8__1; // 0x28
	private TaskAwaiter <>u__1; // 0x30

	// Methods

	// RVA: 0x134BE64 Offset: 0x1347E64 VA: 0x134BE64 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134C368 Offset: 0x1348368 VA: 0x134C368 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Unity.Services.Core.Internal
internal class UnityServicesInternal : IUnityServices // TypeDefIndex: 7548
{
	// Fields
	[CompilerGenerated]
	private Action Initialized; // 0x10
	[CompilerGenerated]
	private Action<Exception> InitializeFailed; // 0x18
	[CompilerGenerated]
	private ServicesInitializationState <State>k__BackingField; // 0x20
	internal bool CanInitialize; // 0x24
	private TaskCompletionSource<object> m_Initialization; // 0x28
	[CompilerGenerated]
	private readonly CoreRegistry <Registry>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly CoreMetrics <Metrics>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly CoreDiagnostics <Diagnostics>k__BackingField; // 0x40

	// Properties
	public ServicesInitializationState State { get; set; }
	internal CoreRegistry Registry { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134AE70 Offset: 0x1346E70 VA: 0x134AE70 Slot: 4
	public ServicesInitializationState get_State() { }

	[CompilerGenerated]
	// RVA: 0x134AE78 Offset: 0x1346E78 VA: 0x134AE78
	private void set_State(ServicesInitializationState value) { }

	[CompilerGenerated]
	// RVA: 0x134AE80 Offset: 0x1346E80 VA: 0x134AE80
	internal CoreRegistry get_Registry() { }

	// RVA: 0x134A970 Offset: 0x1346970 VA: 0x134A970
	public void .ctor(CoreRegistry registry, CoreMetrics coreMetrics, CoreDiagnostics coreDiagnostics) { }

	[AsyncStateMachine(typeof(UnityServicesInternal.<InitializeAsync>d__27))]
	// RVA: 0x134AE88 Offset: 0x1346E88 VA: 0x134AE88 Slot: 5
	public Task InitializeAsync(InitializationOptions options) { }

	// RVA: 0x134AF58 Offset: 0x1346F58 VA: 0x134AF58
	private void TriggerInitializeSuccess() { }

	// RVA: 0x134B030 Offset: 0x1347030 VA: 0x134B030
	private void TriggerInitializeFailed(Exception initException) { }

	// RVA: 0x134B108 Offset: 0x1347108 VA: 0x134B108
	private bool HasRequestedInitialization() { }

	[AsyncStateMachine(typeof(UnityServicesInternal.<InitializeServicesAsync>d__33))]
	// RVA: 0x134B118 Offset: 0x1347118 VA: 0x134B118
	private Task InitializeServicesAsync() { }

	// RVA: 0x134AB78 Offset: 0x1346B78 VA: 0x134AB78
	internal void EnableInitialization() { }

	[AsyncStateMachine(typeof(UnityServicesInternal.<EnableInitializationAsync>d__36))]
	// RVA: 0x134ADA4 Offset: 0x1346DA4 VA: 0x134ADA4
	internal Task EnableInitializationAsync() { }

	[CompilerGenerated]
	// RVA: 0x134B1DC Offset: 0x13471DC VA: 0x134B1DC
	private bool <InitializeAsync>g__HasInitializationFailed|27_0() { }
}


// Namespace: Unity.Services.Core.Internal
[Extension]
internal static class DictionaryExtensions // TypeDefIndex: 7549
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static TDictionary MergeAllowOverride<TDictionary, TKey, TValue>(TDictionary self, IDictionary<TKey, TValue> dictionary) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7E618 Offset: 0xB7A618 VA: 0xB7E618
	|-DictionaryExtensions.MergeAllowOverride<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static bool ValueEquals<TKey, TValue>(IDictionary<TKey, TValue> x, IDictionary<TKey, TValue> y) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7EB04 Offset: 0xB7AB04 VA: 0xB7EB04
	|-DictionaryExtensions.ValueEquals<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static bool ValueEquals<TKey, TValue, TComparer>(IDictionary<TKey, TValue> x, IDictionary<TKey, TValue> y, TComparer valueComparer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7EB54 Offset: 0xB7AB54 VA: 0xB7EB54
	|-DictionaryExtensions.ValueEquals<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class UnityWebRequestUtils.<>c__DisplayClass2_0 // TypeDefIndex: 7550
{
	// Fields
	public TaskCompletionSource<string> completionSource; // 0x10

	// Methods

	// RVA: 0x134C528 Offset: 0x1348528 VA: 0x134C528
	public void .ctor() { }

	// RVA: 0x134C530 Offset: 0x1348530 VA: 0x134C530
	internal void <GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0(AsyncOperation rawOperation) { }
}


// Namespace: Unity.Services.Core.Internal
[Extension]
internal static class UnityWebRequestUtils // TypeDefIndex: 7551
{
	// Methods

	[Extension]
	// RVA: 0x134C3D0 Offset: 0x13483D0 VA: 0x134C3D0
	public static bool HasSucceeded(UnityWebRequest self) { }

	// RVA: 0x134C3F4 Offset: 0x13483F4 VA: 0x134C3F4
	public static Task<string> GetTextAsync(string uri) { }
}


// Namespace: Unity.Services.Core.Internal.Serialization
internal interface IJsonSerializer // TypeDefIndex: 7552
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T DeserializeObject<T>(string value);
}


// Namespace: Unity.Services.Core.Internal.Serialization
internal class NewtonsoftSerializer : IJsonSerializer // TypeDefIndex: 7553
{
	// Fields
	private readonly JsonSerializer m_Serializer; // 0x10

	// Methods

	// RVA: 0x134C8E8 Offset: 0x13488E8 VA: 0x134C8E8
	public void .ctor(JsonSerializerSettings settings) { }

	// RVA: 0x134C920 Offset: 0x1348920 VA: 0x134C920
	internal void .ctor(JsonSerializer serializer) { }

	// RVA: -1 Offset: -1 Slot: 4
	public T DeserializeObject<T>(string value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA145C Offset: 0xB9D45C VA: 0xBA145C
	|-NewtonsoftSerializer.DeserializeObject<__Il2CppFullySharedGenericType>
	*/
}
