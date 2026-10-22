// Namespace: 
internal class <Module> // TypeDefIndex: 7868
{}


// Namespace: Unity.Services.Core.Device
internal class InstallationId : IInstallationId, IServiceComponent // TypeDefIndex: 7869
{
	// Fields
	internal string Identifier; // 0x10
	internal IUserIdentifierProvider UnityAdsIdentifierProvider; // 0x18
	internal IUserIdentifierProvider UnityAnalyticsIdentifierProvider; // 0x20

	// Methods

	// RVA: 0x1344864 Offset: 0x1340864 VA: 0x1344864
	public void .ctor() { }

	// RVA: 0x134490C Offset: 0x134090C VA: 0x134490C Slot: 4
	public string GetOrCreateIdentifier() { }

	// RVA: 0x1344938 Offset: 0x1340938 VA: 0x1344938
	public void CreateIdentifier() { }

	// RVA: 0x1344BB0 Offset: 0x1340BB0 VA: 0x1344BB0
	private static string ReadIdentifierFromFile() { }

	// RVA: 0x1344C20 Offset: 0x1340C20 VA: 0x1344C20
	private static void WriteIdentifierToFile(string identifier) { }

	// RVA: 0x1344BF4 Offset: 0x1340BF4 VA: 0x1344BF4
	private static string GenerateGuid() { }
}


// Namespace: Unity.Services.Core.Device
internal static class AndroidUtils // TypeDefIndex: 7870
{
	// Methods

	// RVA: 0x1344C74 Offset: 0x1340C74 VA: 0x1344C74
	public static AndroidJavaObject GetUnityActivity() { }

	// RVA: 0x1344E58 Offset: 0x1340E58 VA: 0x1344E58
	public static AndroidJavaObject GetSharedPreferences(AndroidJavaObject context, string name, int mode = 0) { }

	// RVA: 0x1344F94 Offset: 0x1340F94 VA: 0x1344F94
	public static AndroidJavaObject GetSharedPreferences(string name, int mode = 0) { }

	// RVA: 0x1345110 Offset: 0x1341110 VA: 0x1345110
	public static string SharedPreferencesGetString(string name, string key, string defValue = "") { }

	// RVA: 0x1345298 Offset: 0x1341298 VA: 0x1345298
	public static string SharedPreferencesGetString(AndroidJavaObject preferences, string key, string defValue = "") { }

	// RVA: 0x13454D0 Offset: 0x13414D0 VA: 0x13454D0
	public static void SharedPreferencesPutString(string name, string key, string value) { }

	// RVA: 0x1345648 Offset: 0x1341648 VA: 0x1345648
	public static void SharedPreferencesPutString(AndroidJavaObject preferences, string key, string value) { }
}


// Namespace: Unity.Services.Core.Device
internal interface IUserIdentifierProvider // TypeDefIndex: 7871
{
	// Properties
	public abstract string UserId { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_UserId();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void set_UserId(string value);
}


// Namespace: Unity.Services.Core.Device
internal class UnityAdsIdentifier : IUserIdentifierProvider // TypeDefIndex: 7872
{
	// Properties
	public string UserId { get; set; }
	private static string IdentifierForInstallAndroid { get; set; }

	// Methods

	// RVA: 0x1345880 Offset: 0x1341880 VA: 0x1345880 Slot: 4
	public string get_UserId() { }

	// RVA: 0x13458FC Offset: 0x13418FC VA: 0x13458FC Slot: 5
	public void set_UserId(string value) { }

	// RVA: 0x1345884 Offset: 0x1341884 VA: 0x1345884
	private static string get_IdentifierForInstallAndroid() { }

	// RVA: 0x1345904 Offset: 0x1341904 VA: 0x1345904
	private static void set_IdentifierForInstallAndroid(string value) { }

	// RVA: 0x13448FC Offset: 0x13408FC VA: 0x13448FC
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Device
internal class UnityAnalyticsIdentifier : IUserIdentifierProvider // TypeDefIndex: 7873
{
	// Properties
	public string UserId { get; set; }

	// Methods

	// RVA: 0x134596C Offset: 0x134196C VA: 0x134596C Slot: 4
	public string get_UserId() { }

	// RVA: 0x13459B0 Offset: 0x13419B0 VA: 0x13459B0 Slot: 5
	public void set_UserId(string value) { }

	// RVA: 0x1344904 Offset: 0x1340904 VA: 0x1344904
	public void .ctor() { }
}
