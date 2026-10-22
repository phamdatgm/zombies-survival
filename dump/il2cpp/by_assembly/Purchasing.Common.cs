// Namespace: 
internal class <Module> // TypeDefIndex: 7811
{}


// Namespace: UnityEngine.Purchasing
public interface INativeStore // TypeDefIndex: 7812
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RetrieveProducts(string json);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Purchase(string productJSON, string developerPayload);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void FinishTransaction(string productJSON, string transactionID);
}


// Namespace: UnityEngine.Purchasing
internal sealed class UnityPurchasingCallback : MulticastDelegate // TypeDefIndex: 7813
{
	// Methods

	// RVA: 0xF48554 Offset: 0xF44554 VA: 0xF48554
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xF485F4 Offset: 0xF445F4 VA: 0xF485F4 Slot: 12
	public virtual void Invoke(string subject, string payload, string receipt, string transactionId, string originalTransactionId, bool isRestored) { }
}


// Namespace: UnityEngine.Purchasing
public class MiniJson // TypeDefIndex: 7814
{
	// Methods

	// RVA: 0xF4860C Offset: 0xF4460C VA: 0xF4860C
	public static string JsonEncode(object json) { }

	// RVA: 0xF48614 Offset: 0xF44614 VA: 0xF48614
	public static object JsonDecode(string json) { }
}


// Namespace: 
private enum Json.Parser.TOKEN // TypeDefIndex: 7815
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
private sealed class Json.Parser : IDisposable // TypeDefIndex: 7816
{
	// Fields
	private StringReader json; // 0x10

	// Properties
	private char PeekChar { get; }
	private char NextChar { get; }
	private string NextWord { get; }
	private Json.Parser.TOKEN NextToken { get; }

	// Methods

	// RVA: 0xF48848 Offset: 0xF44848 VA: 0xF48848
	public static bool IsWordBreak(char c) { }

	// RVA: 0xF488E4 Offset: 0xF448E4 VA: 0xF488E4
	private void .ctor(string jsonString) { }

	// RVA: 0xF4862C Offset: 0xF4462C VA: 0xF4862C
	public static object Parse(string jsonString) { }

	// RVA: 0xF48974 Offset: 0xF44974 VA: 0xF48974 Slot: 4
	public void Dispose() { }

	// RVA: 0xF4899C Offset: 0xF4499C VA: 0xF4899C
	private Dictionary<string, object> ParseObject() { }

	// RVA: 0xF48F04 Offset: 0xF44F04 VA: 0xF48F04
	private List<object> ParseArray() { }

	// RVA: 0xF48958 Offset: 0xF44958 VA: 0xF48958
	private object ParseValue() { }

	// RVA: 0xF48FE8 Offset: 0xF44FE8 VA: 0xF48FE8
	private object ParseByToken(Json.Parser.TOKEN token) { }

	// RVA: 0xF48C84 Offset: 0xF44C84 VA: 0xF48C84
	private string ParseString() { }

	// RVA: 0xF490D8 Offset: 0xF450D8 VA: 0xF490D8
	private object ParseNumber() { }

	// RVA: 0xF49358 Offset: 0xF45358 VA: 0xF49358
	private void EatWhitespace() { }

	// RVA: 0xF493FC Offset: 0xF453FC VA: 0xF493FC
	private char get_PeekChar() { }

	// RVA: 0xF4922C Offset: 0xF4522C VA: 0xF4922C
	private char get_NextChar() { }

	// RVA: 0xF492A4 Offset: 0xF452A4 VA: 0xF492A4
	private string get_NextWord() { }

	// RVA: 0xF48AC0 Offset: 0xF44AC0 VA: 0xF48AC0
	private Json.Parser.TOKEN get_NextToken() { }
}


// Namespace: 
private sealed class Json.Serializer // TypeDefIndex: 7817
{
	// Fields
	private readonly StringBuilder builder; // 0x10

	// Methods

	// RVA: 0xF49474 Offset: 0xF45474 VA: 0xF49474
	private void .ctor() { }

	// RVA: 0xF487D4 Offset: 0xF447D4 VA: 0xF487D4
	public static string Serialize(object obj) { }

	// RVA: 0xF494D8 Offset: 0xF454D8 VA: 0xF494D8
	private void SerializeValue(object value) { }

	// RVA: 0xF49CC4 Offset: 0xF45CC4 VA: 0xF49CC4
	private void SerializeObject(IDictionary obj) { }

	// RVA: 0xF49964 Offset: 0xF45964 VA: 0xF49964
	private void SerializeArray(IList anArray) { }

	// RVA: 0xF496A8 Offset: 0xF456A8 VA: 0xF496A8
	private void SerializeString(string str) { }

	// RVA: 0xF4A150 Offset: 0xF46150 VA: 0xF4A150
	private void SerializeOther(object value) { }
}


// Namespace: UnityEngine.Purchasing.MiniJSON
public static class Json // TypeDefIndex: 7818
{
	// Methods

	// RVA: 0xF48620 Offset: 0xF44620 VA: 0xF48620
	public static object Deserialize(string json) { }

	// RVA: 0xF48610 Offset: 0xF44610 VA: 0xF48610
	public static string Serialize(object obj) { }
}


// Namespace: UnityEngine.Purchasing.MiniJSON
[Extension]
public static class MiniJsonExtensions // TypeDefIndex: 7819
{
	// Methods

	[Extension]
	// RVA: 0xF4A428 Offset: 0xF46428 VA: 0xF4A428
	public static string GetString(Dictionary<string, object> dic, string key, string defaultValue = "") { }

	[Extension]
	// RVA: 0xF4A4D8 Offset: 0xF464D8 VA: 0xF4A4D8
	public static string toJson(Dictionary<string, object> obj) { }

	[Extension]
	// RVA: 0xF4A4DC Offset: 0xF464DC VA: 0xF4A4DC
	public static string toJson(Dictionary<string, string> obj) { }

	[Extension]
	// RVA: 0xF4A4E0 Offset: 0xF464E0 VA: 0xF4A4E0
	public static List<object> ArrayListFromJson(string json) { }

	[Extension]
	// RVA: 0xF4A564 Offset: 0xF46564 VA: 0xF4A564
	public static Dictionary<string, object> HashtableFromJson(string json) { }
}
