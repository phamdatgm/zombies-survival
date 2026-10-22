// Namespace: 
internal class <Module> // TypeDefIndex: 7799
{}


// Namespace: UnityEngine
public static class JsonUtility // TypeDefIndex: 7800
{
	// Methods

	// RVA: 0x13C9E6C Offset: 0x13C5E6C VA: 0x13C9E6C
	private static string ToJsonInternal(object obj, bool prettyPrint) { }

	// RVA: 0x13C9EB0 Offset: 0x13C5EB0 VA: 0x13C9EB0
	private static object FromJsonInternal(string json, object objectToOverwrite, Type type) { }

	// RVA: 0x13C9F04 Offset: 0x13C5F04 VA: 0x13C9F04
	public static string ToJson(object obj) { }

	// RVA: 0x13C9F0C Offset: 0x13C5F0C VA: 0x13C9F0C
	public static string ToJson(object obj, bool prettyPrint) { }

	// RVA: -1 Offset: -1
	public static T FromJson<T>(string json) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8E628 Offset: 0xB8A628 VA: 0xB8E628
	|-JsonUtility.FromJson<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13CA07C Offset: 0x13C607C VA: 0x13CA07C
	public static object FromJson(string json, Type type) { }
}
