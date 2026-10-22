// Namespace: 
internal class <Module> // TypeDefIndex: 7826
{}


// Namespace: Unity.Services.Core.Configuration
internal class CloudProjectId : ICloudProjectId, IServiceComponent // TypeDefIndex: 7827
{
	// Methods

	// RVA: 0x13422DC Offset: 0x133E2DC VA: 0x13422DC Slot: 4
	public string GetCloudProjectId() { }

	// RVA: 0x134232C Offset: 0x133E32C VA: 0x134232C
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Configuration
[Extension]
internal static class ConfigurationCollectionHelper // TypeDefIndex: 7828
{
	// Methods

	[Extension]
	// RVA: 0x1342334 Offset: 0x133E334 VA: 0x1342334
	public static void FillWith(IDictionary<string, ConfigurationEntry> self, SerializableProjectConfiguration config) { }

	[Extension]
	// RVA: 0x1342554 Offset: 0x133E554 VA: 0x1342554
	public static void FillWith(IDictionary<string, ConfigurationEntry> self, InitializationOptions options) { }

	[Extension]
	// RVA: 0x13423C4 Offset: 0x133E3C4 VA: 0x13423C4
	private static void SetOrCreateEntry(IDictionary<string, ConfigurationEntry> self, string key, ConfigurationEntry entry) { }
}


// Namespace: Unity.Services.Core.Configuration
[Serializable]
internal class ConfigurationEntry // TypeDefIndex: 7829
{
	// Fields
	[JsonRequired]
	[SerializeField]
	private string m_Value; // 0x10
	[JsonRequired]
	[SerializeField]
	private bool m_IsReadOnly; // 0x18

	// Properties
	[JsonIgnore]
	public string Value { get; }
	[JsonIgnore]
	public bool IsReadOnly { get; }

	// Methods

	// RVA: 0x13429B4 Offset: 0x133E9B4 VA: 0x13429B4
	public string get_Value() { }

	// RVA: 0x13429BC Offset: 0x133E9BC VA: 0x13429BC
	public bool get_IsReadOnly() { }

	// RVA: 0x13429C4 Offset: 0x133E9C4 VA: 0x13429C4
	public void .ctor() { }

	// RVA: 0x13429CC Offset: 0x133E9CC VA: 0x13429CC
	public void .ctor(string value, bool isReadOnly = False) { }

	// RVA: 0x134299C Offset: 0x133E99C VA: 0x134299C
	public bool TrySetValue(string value) { }

	// RVA: 0x1342984 Offset: 0x133E984 VA: 0x1342984
	public static string op_Implicit(ConfigurationEntry entry) { }

	// RVA: 0x1342924 Offset: 0x133E924 VA: 0x1342924
	public static ConfigurationEntry op_Implicit(string value) { }
}


// Namespace: Unity.Services.Core.Configuration
internal static class ConfigurationUtils // TypeDefIndex: 7830
{
	// Fields
	[CompilerGenerated]
	private static IConfigurationLoader <ConfigurationLoader>k__BackingField; // 0x0

	// Properties
	public static IConfigurationLoader ConfigurationLoader { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13429FC Offset: 0x133E9FC VA: 0x13429FC
	public static IConfigurationLoader get_ConfigurationLoader() { }

	// RVA: 0x1342A54 Offset: 0x133EA54 VA: 0x1342A54
	private static void .cctor() { }
}


// Namespace: Unity.Services.Core.Configuration
internal class ExternalUserId : IExternalUserId, IServiceComponent // TypeDefIndex: 7831
{
	// Properties
	public string UserId { get; }

	// Methods

	// RVA: 0x1342B24 Offset: 0x133EB24 VA: 0x1342B24 Slot: 4
	public string get_UserId() { }

	// RVA: 0x1342B88 Offset: 0x133EB88 VA: 0x1342B88 Slot: 5
	public void add_UserIdChanged(Action<string> value) { }

	// RVA: 0x1342BF4 Offset: 0x133EBF4 VA: 0x1342BF4 Slot: 6
	public void remove_UserIdChanged(Action<string> value) { }

	// RVA: 0x1342C60 Offset: 0x133EC60 VA: 0x1342C60
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Configuration
internal interface IConfigurationLoader // TypeDefIndex: 7832
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Task<SerializableProjectConfiguration> GetConfigAsync();
}


// Namespace: Unity.Services.Core.Configuration
internal class ProjectConfiguration : IProjectConfiguration, IServiceComponent // TypeDefIndex: 7833
{
	// Fields
	private readonly IReadOnlyDictionary<string, ConfigurationEntry> m_ConfigValues; // 0x10
	[CompilerGenerated]
	private readonly IJsonSerializer <Serializer>k__BackingField; // 0x18

	// Methods

	// RVA: 0x1342C68 Offset: 0x133EC68 VA: 0x1342C68
	public void .ctor(IReadOnlyDictionary<string, ConfigurationEntry> configValues, IJsonSerializer serializer) { }

	// RVA: 0x1342C94 Offset: 0x133EC94 VA: 0x1342C94 Slot: 4
	public string GetString(string key, string defaultValue) { }
}


// Namespace: Unity.Services.Core.Configuration
[Serializable]
internal struct SerializableProjectConfiguration // TypeDefIndex: 7834
{
	// Fields
	[JsonRequired]
	[SerializeField]
	internal string[] Keys; // 0x0
	[JsonRequired]
	[SerializeField]
	internal ConfigurationEntry[] Values; // 0x8

	// Properties
	public static SerializableProjectConfiguration Empty { get; }

	// Methods

	// RVA: 0x1342D6C Offset: 0x133ED6C VA: 0x1342D6C
	public static SerializableProjectConfiguration get_Empty() { }
}


// Namespace: 
[CompilerGenerated]
private struct StreamingAssetsConfigurationLoader.<GetConfigAsync>d__2 : IAsyncStateMachine // TypeDefIndex: 7835
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<SerializableProjectConfiguration> <>t__builder; // 0x8
	public StreamingAssetsConfigurationLoader <>4__this; // 0x20
	private TaskAwaiter<string> <>u__1; // 0x28

	// Methods

	// RVA: 0x1342F44 Offset: 0x133EF44 VA: 0x1342F44 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x13432D8 Offset: 0x133F2D8 VA: 0x13432D8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}


// Namespace: Unity.Services.Core.Configuration
internal class StreamingAssetsConfigurationLoader : IConfigurationLoader // TypeDefIndex: 7836
{
	// Fields
	private readonly IJsonSerializer m_Serializer; // 0x10

	// Methods

	// RVA: 0x1342AFC Offset: 0x133EAFC VA: 0x1342AFC
	public void .ctor(IJsonSerializer serializer) { }

	[AsyncStateMachine(typeof(StreamingAssetsConfigurationLoader.<GetConfigAsync>d__2))]
	// RVA: 0x1342E60 Offset: 0x133EE60 VA: 0x1342E60 Slot: 4
	public Task<SerializableProjectConfiguration> GetConfigAsync() { }
}


// Namespace: Unity.Services.Core.Configuration
internal static class StreamingAssetsUtils // TypeDefIndex: 7837
{
	// Methods

	// RVA: 0x1343240 Offset: 0x133F240 VA: 0x1343240
	public static Task<string> GetFileTextFromStreamingAssetsAsync(string path) { }
}
