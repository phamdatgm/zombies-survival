// Namespace: 
internal class <Module> // TypeDefIndex: 7775
{}


// Namespace: 
[CompilerGenerated]
private struct CorePackageInitializer.<GenerateProjectConfigurationAsync>d__53 : IAsyncStateMachine // TypeDefIndex: 7776
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<ProjectConfiguration> <>t__builder; // 0x8
	public InitializationOptions options; // 0x20
	public CorePackageInitializer <>4__this; // 0x28
	private TaskAwaiter<SerializableProjectConfiguration> <>u__1; // 0x30

	// Methods

	// RVA: 0x134D758 Offset: 0x1349758 VA: 0x134D758 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134DA70 Offset: 0x1349A70 VA: 0x134DA70 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct CorePackageInitializer.<GetSerializedConfigOrEmptyAsync>d__54 : IAsyncStateMachine // TypeDefIndex: 7777
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<SerializableProjectConfiguration> <>t__builder; // 0x8
	private TaskAwaiter<SerializableProjectConfiguration> <>u__1; // 0x20

	// Methods

	// RVA: 0x134DAEC Offset: 0x1349AEC VA: 0x134DAEC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134DF10 Offset: 0x1349F10 VA: 0x134DF10 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct CorePackageInitializer.<InitializeComponents>d__47 : IAsyncStateMachine // TypeDefIndex: 7778
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CorePackageInitializer <>4__this; // 0x20
	private TaskAwaiter <>u__1; // 0x28

	// Methods

	// RVA: 0x134DF8C Offset: 0x1349F8C VA: 0x134DF8C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134E364 Offset: 0x134A364 VA: 0x134E364 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: 
[CompilerGenerated]
private struct CorePackageInitializer.<InitializeProjectConfigAsync>d__52 : IAsyncStateMachine // TypeDefIndex: 7779
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public CorePackageInitializer <>4__this; // 0x20
	public InitializationOptions options; // 0x28
	private TaskAwaiter<ProjectConfiguration> <>u__1; // 0x30

	// Methods

	// RVA: 0x134E3CC Offset: 0x134A3CC VA: 0x134E3CC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x134E63C Offset: 0x134A63C VA: 0x134E63C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Unity.Services.Core.Registration
internal class CorePackageInitializer : IInitializablePackageV2, IInitializablePackage, IDiagnosticsComponentProvider // TypeDefIndex: 7780
{
	// Fields
	[CompilerGenerated]
	private ActionScheduler <ActionScheduler>k__BackingField; // 0x10
	[CompilerGenerated]
	private InstallationId <InstallationId>k__BackingField; // 0x18
	[CompilerGenerated]
	private ProjectConfiguration <ProjectConfig>k__BackingField; // 0x20
	[CompilerGenerated]
	private Environments <Environments>k__BackingField; // 0x28
	[CompilerGenerated]
	private ExternalUserId <ExternalUserId>k__BackingField; // 0x30
	[CompilerGenerated]
	private ICloudProjectId <CloudProjectId>k__BackingField; // 0x38
	[CompilerGenerated]
	private IDiagnosticsFactory <DiagnosticsFactory>k__BackingField; // 0x40
	[CompilerGenerated]
	private IMetricsFactory <MetricsFactory>k__BackingField; // 0x48
	[CompilerGenerated]
	private UnityThreadUtilsInternal <UnityThreadUtils>k__BackingField; // 0x50
	private CoreRegistry m_Registry; // 0x58
	private readonly IJsonSerializer m_Serializer; // 0x60
	private InitializationOptions m_CurrentInitializationOptions; // 0x68

	// Properties
	internal ActionScheduler ActionScheduler { get; set; }
	internal InstallationId InstallationId { get; set; }
	internal ProjectConfiguration ProjectConfig { get; set; }
	internal Environments Environments { get; set; }
	internal ExternalUserId ExternalUserId { get; set; }
	internal ICloudProjectId CloudProjectId { get; set; }
	internal IDiagnosticsFactory DiagnosticsFactory { get; set; }
	internal IMetricsFactory MetricsFactory { get; set; }
	internal UnityThreadUtilsInternal UnityThreadUtils { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x134C948 Offset: 0x1348948 VA: 0x134C948
	internal ActionScheduler get_ActionScheduler() { }

	[CompilerGenerated]
	// RVA: 0x134C950 Offset: 0x1348950 VA: 0x134C950
	private void set_ActionScheduler(ActionScheduler value) { }

	[CompilerGenerated]
	// RVA: 0x134C958 Offset: 0x1348958 VA: 0x134C958
	internal InstallationId get_InstallationId() { }

	[CompilerGenerated]
	// RVA: 0x134C960 Offset: 0x1348960 VA: 0x134C960
	private void set_InstallationId(InstallationId value) { }

	[CompilerGenerated]
	// RVA: 0x134C968 Offset: 0x1348968 VA: 0x134C968
	internal ProjectConfiguration get_ProjectConfig() { }

	[CompilerGenerated]
	// RVA: 0x134C970 Offset: 0x1348970 VA: 0x134C970
	private void set_ProjectConfig(ProjectConfiguration value) { }

	[CompilerGenerated]
	// RVA: 0x134C978 Offset: 0x1348978 VA: 0x134C978
	internal Environments get_Environments() { }

	[CompilerGenerated]
	// RVA: 0x134C980 Offset: 0x1348980 VA: 0x134C980
	private void set_Environments(Environments value) { }

	[CompilerGenerated]
	// RVA: 0x134C988 Offset: 0x1348988 VA: 0x134C988
	internal ExternalUserId get_ExternalUserId() { }

	[CompilerGenerated]
	// RVA: 0x134C990 Offset: 0x1348990 VA: 0x134C990
	private void set_ExternalUserId(ExternalUserId value) { }

	[CompilerGenerated]
	// RVA: 0x134C998 Offset: 0x1348998 VA: 0x134C998
	internal ICloudProjectId get_CloudProjectId() { }

	[CompilerGenerated]
	// RVA: 0x134C9A0 Offset: 0x13489A0 VA: 0x134C9A0
	private void set_CloudProjectId(ICloudProjectId value) { }

	[CompilerGenerated]
	// RVA: 0x134C9A8 Offset: 0x13489A8 VA: 0x134C9A8
	internal IDiagnosticsFactory get_DiagnosticsFactory() { }

	[CompilerGenerated]
	// RVA: 0x134C9B0 Offset: 0x13489B0 VA: 0x134C9B0
	private void set_DiagnosticsFactory(IDiagnosticsFactory value) { }

	[CompilerGenerated]
	// RVA: 0x134C9B8 Offset: 0x13489B8 VA: 0x134C9B8
	internal IMetricsFactory get_MetricsFactory() { }

	[CompilerGenerated]
	// RVA: 0x134C9C0 Offset: 0x13489C0 VA: 0x134C9C0
	private void set_MetricsFactory(IMetricsFactory value) { }

	[CompilerGenerated]
	// RVA: 0x134C9C8 Offset: 0x13489C8 VA: 0x134C9C8
	internal UnityThreadUtilsInternal get_UnityThreadUtils() { }

	[CompilerGenerated]
	// RVA: 0x134C9D0 Offset: 0x13489D0 VA: 0x134C9D0
	private void set_UnityThreadUtils(UnityThreadUtilsInternal value) { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x134C9D8 Offset: 0x13489D8 VA: 0x134C9D8
	private static void InitializeOnLoad() { }

	// RVA: 0x134CAB8 Offset: 0x1348AB8 VA: 0x134CAB8 Slot: 6
	public void Register(CorePackageRegistry registry) { }

	// RVA: 0x134CA90 Offset: 0x1348A90 VA: 0x134CA90
	public void .ctor(IJsonSerializer serializer) { }

	// RVA: 0x134CCE4 Offset: 0x1348CE4 VA: 0x134CCE4 Slot: 5
	public Task Initialize(CoreRegistry registry) { }

	// RVA: 0x134CDAC Offset: 0x1348DAC VA: 0x134CDAC Slot: 4
	public Task InitializeInstanceAsync(CoreRegistry registry) { }

	[AsyncStateMachine(typeof(CorePackageInitializer.<InitializeComponents>d__47))]
	// RVA: 0x134CCEC Offset: 0x1348CEC VA: 0x134CCEC
	private Task InitializeComponents() { }

	// RVA: 0x134CDB4 Offset: 0x1348DB4 VA: 0x134CDB4
	private bool HaveInitOptionsChanged() { }

	// RVA: 0x134CE28 Offset: 0x1348E28 VA: 0x134CE28
	private void FreeOptionsDependantComponents() { }

	// RVA: 0x134CE34 Offset: 0x1348E34 VA: 0x134CE34
	internal void InitializeInstallationId() { }

	// RVA: 0x134CEA8 Offset: 0x1348EA8 VA: 0x134CEA8
	internal void InitializeActionScheduler() { }

	[AsyncStateMachine(typeof(CorePackageInitializer.<InitializeProjectConfigAsync>d__52))]
	// RVA: 0x134CF1C Offset: 0x1348F1C VA: 0x134CF1C
	internal Task InitializeProjectConfigAsync(InitializationOptions options) { }

	[AsyncStateMachine(typeof(CorePackageInitializer.<GenerateProjectConfigurationAsync>d__53))]
	// RVA: 0x134CFF0 Offset: 0x1348FF0 VA: 0x134CFF0
	internal Task<ProjectConfiguration> GenerateProjectConfigurationAsync(InitializationOptions options) { }

	[AsyncStateMachine(typeof(CorePackageInitializer.<GetSerializedConfigOrEmptyAsync>d__54))]
	// RVA: 0x134D0DC Offset: 0x13490DC VA: 0x134D0DC
	internal static Task<SerializableProjectConfiguration> GetSerializedConfigOrEmptyAsync() { }

	// RVA: 0x134D1B0 Offset: 0x13491B0 VA: 0x134D1B0
	internal void InitializeExternalUserId(IProjectConfiguration projectConfiguration) { }

	// RVA: 0x134D30C Offset: 0x134930C VA: 0x134D30C
	internal void InitializeEnvironments(IProjectConfiguration projectConfiguration) { }

	// RVA: 0x134D434 Offset: 0x1349434 VA: 0x134D434
	internal void InitializeMetrics() { }

	// RVA: 0x134D494 Offset: 0x1349494 VA: 0x134D494
	internal void InitializeDiagnostics() { }

	// RVA: 0x134D4F4 Offset: 0x13494F4 VA: 0x134D4F4
	internal void InitializeCloudProjectId(ICloudProjectId cloudProjectId) { }

	// RVA: 0x134D55C Offset: 0x134955C VA: 0x134D55C
	internal void InitializeUnityThreadUtils() { }

	[CompilerGenerated]
	// RVA: 0x134D5BC Offset: 0x13495BC VA: 0x134D5BC
	private void <InitializeComponents>g__RegisterProvidedComponents|47_0() { }

	[CompilerGenerated]
	// RVA: 0x134D750 Offset: 0x1349750 VA: 0x134D750
	internal static bool <InitializeComponents>g__SendFailedInitDiagnostic|47_1(Exception reason) { }
}
