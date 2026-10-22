// Namespace: 
internal class <Module> // TypeDefIndex: 7019
{}


// Namespace: LitJson
public enum JsonType // TypeDefIndex: 7020
{
	// Fields
	public int value__; // 0x0
	public const JsonType None = 0;
	public const JsonType Object = 1;
	public const JsonType Array = 2;
	public const JsonType String = 3;
	public const JsonType Int = 4;
	public const JsonType Long = 5;
	public const JsonType Double = 6;
	public const JsonType Boolean = 7;
}


// Namespace: LitJson
public interface IJsonWrapper : IList, ICollection, IEnumerable, IOrderedDictionary, IDictionary // TypeDefIndex: 7021
{
	// Properties
	public abstract bool IsArray { get; }
	public abstract bool IsBoolean { get; }
	public abstract bool IsDouble { get; }
	public abstract bool IsInt { get; }
	public abstract bool IsLong { get; }
	public abstract bool IsObject { get; }
	public abstract bool IsString { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsArray();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_IsBoolean();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_IsDouble();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool get_IsInt();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_IsLong();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool get_IsObject();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool get_IsString();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool GetBoolean();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract double GetDouble();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract int GetInt();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract long GetLong();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract string GetString();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void SetBoolean(bool val);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void SetDouble(double val);

	// RVA: -1 Offset: -1 Slot: 14
	public abstract void SetInt(int val);

	// RVA: -1 Offset: -1 Slot: 15
	public abstract void SetJsonType(JsonType type);

	// RVA: -1 Offset: -1 Slot: 16
	public abstract void SetLong(long val);

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void SetString(string val);

	// RVA: -1 Offset: -1 Slot: 18
	public abstract string ToJson();

	// RVA: -1 Offset: -1 Slot: 19
	public abstract void ToJson(JsonWriter writer);
}


// Namespace: LitJson
[DefaultMember("Item")]
public class JsonData : IJsonWrapper, IList, ICollection, IEnumerable, IOrderedDictionary, IDictionary, IEquatable<JsonData> // TypeDefIndex: 7022
{
	// Fields
	private IList<JsonData> inst_array; // 0x10
	private bool inst_boolean; // 0x18
	private double inst_double; // 0x20
	private int inst_int; // 0x28
	private long inst_long; // 0x30
	private IDictionary<string, JsonData> inst_object; // 0x38
	private string inst_string; // 0x40
	private string json; // 0x48
	private JsonType type; // 0x50
	private IList<KeyValuePair<string, JsonData>> object_list; // 0x58

	// Properties
	public int Count { get; }
	public bool IsArray { get; }
	public bool IsBoolean { get; }
	public bool IsDouble { get; }
	public bool IsInt { get; }
	public bool IsLong { get; }
	public bool IsObject { get; }
	public bool IsString { get; }
	private int System.Collections.ICollection.Count { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private bool System.Collections.IDictionary.IsReadOnly { get; }
	private ICollection System.Collections.IDictionary.Keys { get; }
	private ICollection System.Collections.IDictionary.Values { get; }
	private bool LitJson.IJsonWrapper.IsArray { get; }
	private bool LitJson.IJsonWrapper.IsBoolean { get; }
	private bool LitJson.IJsonWrapper.IsDouble { get; }
	private bool LitJson.IJsonWrapper.IsInt { get; }
	private bool LitJson.IJsonWrapper.IsLong { get; }
	private bool LitJson.IJsonWrapper.IsObject { get; }
	private bool LitJson.IJsonWrapper.IsString { get; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private bool System.Collections.IList.IsReadOnly { get; }
	private object System.Collections.IDictionary.Item { get; set; }
	private object System.Collections.IList.Item { get; set; }
	public string Item { set; }
	public int Item { set; }

	// Methods

	// RVA: 0xCCD1B0 Offset: 0xCC91B0 VA: 0xCCD1B0
	public int get_Count() { }

	// RVA: 0xCCD330 Offset: 0xCC9330 VA: 0xCCD330
	public bool get_IsArray() { }

	// RVA: 0xCCD340 Offset: 0xCC9340 VA: 0xCCD340
	public bool get_IsBoolean() { }

	// RVA: 0xCCD350 Offset: 0xCC9350 VA: 0xCCD350
	public bool get_IsDouble() { }

	// RVA: 0xCCD360 Offset: 0xCC9360 VA: 0xCCD360
	public bool get_IsInt() { }

	// RVA: 0xCCD370 Offset: 0xCC9370 VA: 0xCCD370
	public bool get_IsLong() { }

	// RVA: 0xCCD380 Offset: 0xCC9380 VA: 0xCCD380
	public bool get_IsObject() { }

	// RVA: 0xCCD390 Offset: 0xCC9390 VA: 0xCCD390
	public bool get_IsString() { }

	// RVA: 0xCCD3A0 Offset: 0xCC93A0 VA: 0xCCD3A0 Slot: 36
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0xCCD3A4 Offset: 0xCC93A4 VA: 0xCCD3A4 Slot: 38
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0xCCD450 Offset: 0xCC9450 VA: 0xCCD450 Slot: 37
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0xCCD4FC Offset: 0xCC94FC VA: 0xCCD4FC Slot: 48
	private bool System.Collections.IDictionary.get_IsReadOnly() { }

	// RVA: 0xCCD724 Offset: 0xCC9724 VA: 0xCCD724 Slot: 43
	private ICollection System.Collections.IDictionary.get_Keys() { }

	// RVA: 0xCCDB2C Offset: 0xCC9B2C VA: 0xCCDB2C Slot: 44
	private ICollection System.Collections.IDictionary.get_Values() { }

	// RVA: 0xCCDF34 Offset: 0xCC9F34 VA: 0xCCDF34 Slot: 4
	private bool LitJson.IJsonWrapper.get_IsArray() { }

	// RVA: 0xCCDF44 Offset: 0xCC9F44 VA: 0xCCDF44 Slot: 5
	private bool LitJson.IJsonWrapper.get_IsBoolean() { }

	// RVA: 0xCCDF54 Offset: 0xCC9F54 VA: 0xCCDF54 Slot: 6
	private bool LitJson.IJsonWrapper.get_IsDouble() { }

	// RVA: 0xCCDF64 Offset: 0xCC9F64 VA: 0xCCDF64 Slot: 7
	private bool LitJson.IJsonWrapper.get_IsInt() { }

	// RVA: 0xCCDF74 Offset: 0xCC9F74 VA: 0xCCDF74 Slot: 8
	private bool LitJson.IJsonWrapper.get_IsLong() { }

	// RVA: 0xCCDF84 Offset: 0xCC9F84 VA: 0xCCDF84 Slot: 9
	private bool LitJson.IJsonWrapper.get_IsObject() { }

	// RVA: 0xCCDF94 Offset: 0xCC9F94 VA: 0xCCDF94 Slot: 10
	private bool LitJson.IJsonWrapper.get_IsString() { }

	// RVA: 0xCCDFA4 Offset: 0xCC9FA4 VA: 0xCCDFA4 Slot: 30
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0xCCE188 Offset: 0xCCA188 VA: 0xCCE188 Slot: 29
	private bool System.Collections.IList.get_IsReadOnly() { }

	// RVA: 0xCCE234 Offset: 0xCCA234 VA: 0xCCE234 Slot: 41
	private object System.Collections.IDictionary.get_Item(object key) { }

	// RVA: 0xCCE2E4 Offset: 0xCCA2E4 VA: 0xCCE2E4 Slot: 42
	private void System.Collections.IDictionary.set_Item(object key, object value) { }

	// RVA: 0xCCE7F8 Offset: 0xCCA7F8 VA: 0xCCE7F8 Slot: 24
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0xCCE8A8 Offset: 0xCCA8A8 VA: 0xCCE8A8 Slot: 25
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0xCCE448 Offset: 0xCCA448 VA: 0xCCE448
	public void set_Item(string prop_name, JsonData value) { }

	// RVA: 0xCCE8E0 Offset: 0xCCA8E0 VA: 0xCCE8E0
	public void set_Item(int index, JsonData value) { }

	// RVA: 0xCCEBAC Offset: 0xCCABAC VA: 0xCCEBAC
	public void .ctor(object obj) { }

	// RVA: 0xCCEDCC Offset: 0xCCADCC VA: 0xCCEDCC Slot: 35
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0xCCEE8C Offset: 0xCCAE8C VA: 0xCCEE8C Slot: 46
	private void System.Collections.IDictionary.Add(object key, object value) { }

	// RVA: 0xCCF04C Offset: 0xCCB04C VA: 0xCCF04C Slot: 47
	private void System.Collections.IDictionary.Clear() { }

	// RVA: 0xCCF178 Offset: 0xCCB178 VA: 0xCCF178 Slot: 45
	private bool System.Collections.IDictionary.Contains(object key) { }

	// RVA: 0xCCF22C Offset: 0xCCB22C VA: 0xCCF22C Slot: 49
	private IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }

	// RVA: 0xCCF2C0 Offset: 0xCCB2C0 VA: 0xCCF2C0 Slot: 50
	private void System.Collections.IDictionary.Remove(object key) { }

	// RVA: 0xCCF578 Offset: 0xCCB578 VA: 0xCCF578 Slot: 39
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0xCCF620 Offset: 0xCCB620 VA: 0xCCF620 Slot: 11
	private bool LitJson.IJsonWrapper.GetBoolean() { }

	// RVA: 0xCCF684 Offset: 0xCCB684 VA: 0xCCF684 Slot: 12
	private double LitJson.IJsonWrapper.GetDouble() { }

	// RVA: 0xCCF6E8 Offset: 0xCCB6E8 VA: 0xCCF6E8 Slot: 13
	private int LitJson.IJsonWrapper.GetInt() { }

	// RVA: 0xCCF74C Offset: 0xCCB74C VA: 0xCCF74C Slot: 14
	private long LitJson.IJsonWrapper.GetLong() { }

	// RVA: 0xCCF7B0 Offset: 0xCCB7B0 VA: 0xCCF7B0 Slot: 15
	private string LitJson.IJsonWrapper.GetString() { }

	// RVA: 0xCCF814 Offset: 0xCCB814 VA: 0xCCF814 Slot: 16
	private void LitJson.IJsonWrapper.SetBoolean(bool val) { }

	// RVA: 0xCCF82C Offset: 0xCCB82C VA: 0xCCF82C Slot: 17
	private void LitJson.IJsonWrapper.SetDouble(double val) { }

	// RVA: 0xCCF840 Offset: 0xCCB840 VA: 0xCCF840 Slot: 18
	private void LitJson.IJsonWrapper.SetInt(int val) { }

	// RVA: 0xCCF854 Offset: 0xCCB854 VA: 0xCCF854 Slot: 20
	private void LitJson.IJsonWrapper.SetLong(long val) { }

	// RVA: 0xCCF868 Offset: 0xCCB868 VA: 0xCCF868 Slot: 21
	private void LitJson.IJsonWrapper.SetString(string val) { }

	// RVA: 0xCCF878 Offset: 0xCCB878 VA: 0xCCF878 Slot: 22
	private string LitJson.IJsonWrapper.ToJson() { }

	// RVA: 0xCCF930 Offset: 0xCCB930 VA: 0xCCF930 Slot: 23
	private void LitJson.IJsonWrapper.ToJson(JsonWriter writer) { }

	// RVA: 0xCCF964 Offset: 0xCCB964 VA: 0xCCF964 Slot: 26
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0xCCFA2C Offset: 0xCCBA2C VA: 0xCCFA2C Slot: 28
	private void System.Collections.IList.Clear() { }

	// RVA: 0xCCFAE0 Offset: 0xCCBAE0 VA: 0xCCFAE0 Slot: 27
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0xCCFB94 Offset: 0xCCBB94 VA: 0xCCFB94 Slot: 31
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0xCCFC48 Offset: 0xCCBC48 VA: 0xCCFC48 Slot: 32
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0xCCFD14 Offset: 0xCCBD14 VA: 0xCCFD14 Slot: 33
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0xCCFDD0 Offset: 0xCCBDD0 VA: 0xCCFDD0 Slot: 34
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0xCCFE8C Offset: 0xCCBE8C VA: 0xCCFE8C Slot: 40
	private IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary.GetEnumerator() { }

	// RVA: 0xCCD25C Offset: 0xCC925C VA: 0xCCD25C
	private ICollection EnsureCollection() { }

	// RVA: 0xCCD5A8 Offset: 0xCC95A8 VA: 0xCCD5A8
	private IDictionary EnsureDictionary() { }

	// RVA: 0xCCE050 Offset: 0xCCA050 VA: 0xCCE050
	private IList EnsureList() { }

	// RVA: 0xCCE3BC Offset: 0xCCA3BC VA: 0xCCE3BC
	private JsonData ToJsonData(object obj) { }

	// RVA: 0xCCFF98 Offset: 0xCCBF98 VA: 0xCCFF98
	private static void WriteJson(IJsonWrapper obj, JsonWriter writer) { }

	// RVA: 0xCCF968 Offset: 0xCCB968 VA: 0xCCF968
	public int Add(object value) { }

	// RVA: 0xCD1464 Offset: 0xCCD464 VA: 0xCD1464 Slot: 51
	public bool Equals(JsonData x) { }

	// RVA: 0xCD1614 Offset: 0xCCD614 VA: 0xCD1614 Slot: 19
	public void SetJsonType(JsonType type) { }

	// RVA: 0xCCF87C Offset: 0xCCB87C VA: 0xCCF87C
	public string ToJson() { }

	// RVA: 0xCCF934 Offset: 0xCCB934 VA: 0xCCF934
	public void ToJson(JsonWriter writer) { }

	// RVA: 0xCD17F0 Offset: 0xCCD7F0 VA: 0xCD17F0 Slot: 3
	public override string ToString() { }
}


// Namespace: LitJson
internal class OrderedDictionaryEnumerator : IDictionaryEnumerator, IEnumerator // TypeDefIndex: 7023
{
	// Fields
	private IEnumerator<KeyValuePair<string, JsonData>> list_enumerator; // 0x10

	// Properties
	public object Current { get; }
	public DictionaryEntry Entry { get; }
	public object Key { get; }
	public object Value { get; }

	// Methods

	// RVA: 0xCD190C Offset: 0xCCD90C VA: 0xCD190C Slot: 8
	public object get_Current() { }

	// RVA: 0xCD1970 Offset: 0xCCD970 VA: 0xCD1970 Slot: 6
	public DictionaryEntry get_Entry() { }

	// RVA: 0xCD1A8C Offset: 0xCCDA8C VA: 0xCD1A8C Slot: 4
	public object get_Key() { }

	// RVA: 0xCD1B64 Offset: 0xCCDB64 VA: 0xCD1B64 Slot: 5
	public object get_Value() { }

	// RVA: 0xCCFF70 Offset: 0xCCBF70 VA: 0xCCFF70
	public void .ctor(IEnumerator<KeyValuePair<string, JsonData>> enumerator) { }

	// RVA: 0xCD1C3C Offset: 0xCCDC3C VA: 0xCD1C3C Slot: 7
	public bool MoveNext() { }

	// RVA: 0xCD1CDC Offset: 0xCCDCDC VA: 0xCD1CDC Slot: 9
	public void Reset() { }
}


// Namespace: LitJson
public class JsonException : ApplicationException // TypeDefIndex: 7024
{
	// Methods

	// RVA: 0xCD1D80 Offset: 0xCCDD80 VA: 0xCD1D80
	internal void .ctor(ParserToken token, Exception inner_exception) { }

	// RVA: 0xCD1E24 Offset: 0xCCDE24 VA: 0xCD1E24
	internal void .ctor(int c) { }

	// RVA: 0xCD1EC0 Offset: 0xCCDEC0 VA: 0xCD1EC0
	public void .ctor(string message) { }
}


// Namespace: LitJson
internal struct PropertyMetadata // TypeDefIndex: 7025
{
	// Fields
	public MemberInfo Info; // 0x0
	public bool IsField; // 0x8
	public Type Type; // 0x10
}


// Namespace: LitJson
internal struct ArrayMetadata // TypeDefIndex: 7026
{
	// Fields
	private Type element_type; // 0x0
	private bool is_array; // 0x8
	private bool is_list; // 0x9

	// Properties
	public Type ElementType { get; set; }
	public bool IsArray { get; set; }
	public bool IsList { get; set; }

	// Methods

	// RVA: 0xCD1EC8 Offset: 0xCCDEC8 VA: 0xCD1EC8
	public Type get_ElementType() { }

	// RVA: 0xCD1F4C Offset: 0xCCDF4C VA: 0xCD1F4C
	public void set_ElementType(Type value) { }

	// RVA: 0xCD1F54 Offset: 0xCCDF54 VA: 0xCD1F54
	public bool get_IsArray() { }

	// RVA: 0xCD1F5C Offset: 0xCCDF5C VA: 0xCD1F5C
	public void set_IsArray(bool value) { }

	// RVA: 0xCD1F68 Offset: 0xCCDF68 VA: 0xCD1F68
	public bool get_IsList() { }

	// RVA: 0xCD1F70 Offset: 0xCCDF70 VA: 0xCD1F70
	public void set_IsList(bool value) { }
}


// Namespace: LitJson
internal struct ObjectMetadata // TypeDefIndex: 7027
{
	// Fields
	private Type element_type; // 0x0
	private bool is_dictionary; // 0x8
	private IDictionary<string, PropertyMetadata> properties; // 0x10

	// Properties
	public Type ElementType { get; set; }
	public bool IsDictionary { get; set; }
	public IDictionary<string, PropertyMetadata> Properties { get; set; }

	// Methods

	// RVA: 0xCD1F7C Offset: 0xCCDF7C VA: 0xCD1F7C
	public Type get_ElementType() { }

	// RVA: 0xCD2000 Offset: 0xCCE000 VA: 0xCD2000
	public void set_ElementType(Type value) { }

	// RVA: 0xCD2008 Offset: 0xCCE008 VA: 0xCD2008
	public bool get_IsDictionary() { }

	// RVA: 0xCD2010 Offset: 0xCCE010 VA: 0xCD2010
	public void set_IsDictionary(bool value) { }

	// RVA: 0xCD201C Offset: 0xCCE01C VA: 0xCD201C
	public IDictionary<string, PropertyMetadata> get_Properties() { }

	// RVA: 0xCD2024 Offset: 0xCCE024 VA: 0xCD2024
	public void set_Properties(IDictionary<string, PropertyMetadata> value) { }
}


// Namespace: LitJson
internal sealed class ExporterFunc : MulticastDelegate // TypeDefIndex: 7028
{
	// Methods

	// RVA: 0xCD202C Offset: 0xCCE02C VA: 0xCD202C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCD2130 Offset: 0xCCE130 VA: 0xCD2130 Slot: 12
	public virtual void Invoke(object obj, JsonWriter writer) { }
}


// Namespace: LitJson
internal sealed class ImporterFunc : MulticastDelegate // TypeDefIndex: 7029
{
	// Methods

	// RVA: 0xCD2144 Offset: 0xCCE144 VA: 0xCD2144
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCD2244 Offset: 0xCCE244 VA: 0xCD2244 Slot: 12
	public virtual object Invoke(object input) { }
}


// Namespace: LitJson
public sealed class WrapperFactory : MulticastDelegate // TypeDefIndex: 7030
{
	// Methods

	// RVA: 0xCD2258 Offset: 0xCCE258 VA: 0xCD2258
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCD22E0 Offset: 0xCCE2E0 VA: 0xCD22E0 Slot: 12
	public virtual IJsonWrapper Invoke() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class JsonMapper.<>c // TypeDefIndex: 7031
{
	// Fields
	public static readonly JsonMapper.<>c <>9; // 0x0
	public static WrapperFactory <>9__23_0; // 0x8
	public static ExporterFunc <>9__24_0; // 0x10
	public static ExporterFunc <>9__24_1; // 0x18
	public static ExporterFunc <>9__24_2; // 0x20
	public static ExporterFunc <>9__24_3; // 0x28
	public static ExporterFunc <>9__24_4; // 0x30
	public static ExporterFunc <>9__24_5; // 0x38
	public static ExporterFunc <>9__24_6; // 0x40
	public static ExporterFunc <>9__24_7; // 0x48
	public static ExporterFunc <>9__24_8; // 0x50
	public static ExporterFunc <>9__24_9; // 0x58
	public static ImporterFunc <>9__25_0; // 0x60
	public static ImporterFunc <>9__25_1; // 0x68
	public static ImporterFunc <>9__25_2; // 0x70
	public static ImporterFunc <>9__25_3; // 0x78
	public static ImporterFunc <>9__25_4; // 0x80
	public static ImporterFunc <>9__25_5; // 0x88
	public static ImporterFunc <>9__25_6; // 0x90
	public static ImporterFunc <>9__25_7; // 0x98
	public static ImporterFunc <>9__25_8; // 0xA0
	public static ImporterFunc <>9__25_9; // 0xA8
	public static ImporterFunc <>9__25_10; // 0xB0
	public static ImporterFunc <>9__25_11; // 0xB8
	public static ImporterFunc <>9__25_12; // 0xC0
	public static ImporterFunc <>9__25_13; // 0xC8

	// Methods

	// RVA: 0xCD9224 Offset: 0xCD5224 VA: 0xCD9224
	private static void .cctor() { }

	// RVA: 0xCD9280 Offset: 0xCD5280 VA: 0xCD9280
	public void .ctor() { }

	// RVA: 0xCD9288 Offset: 0xCD5288 VA: 0xCD9288
	internal IJsonWrapper <ReadSkip>b__23_0() { }

	// RVA: 0xCD92E4 Offset: 0xCD52E4 VA: 0xCD92E4
	internal void <RegisterBaseExporters>b__24_0(object obj, JsonWriter writer) { }

	// RVA: 0xCD9398 Offset: 0xCD5398 VA: 0xCD9398
	internal void <RegisterBaseExporters>b__24_1(object obj, JsonWriter writer) { }

	// RVA: 0xCD944C Offset: 0xCD544C VA: 0xCD944C
	internal void <RegisterBaseExporters>b__24_2(object obj, JsonWriter writer) { }

	// RVA: 0xCD9538 Offset: 0xCD5538 VA: 0xCD9538
	internal void <RegisterBaseExporters>b__24_3(object obj, JsonWriter writer) { }

	// RVA: 0xCD9690 Offset: 0xCD5690 VA: 0xCD9690
	internal void <RegisterBaseExporters>b__24_4(object obj, JsonWriter writer) { }

	// RVA: 0xCD9744 Offset: 0xCD5744 VA: 0xCD9744
	internal void <RegisterBaseExporters>b__24_5(object obj, JsonWriter writer) { }

	// RVA: 0xCD97F8 Offset: 0xCD57F8 VA: 0xCD97F8
	internal void <RegisterBaseExporters>b__24_6(object obj, JsonWriter writer) { }

	// RVA: 0xCD98AC Offset: 0xCD58AC VA: 0xCD98AC
	internal void <RegisterBaseExporters>b__24_7(object obj, JsonWriter writer) { }

	// RVA: 0xCD9960 Offset: 0xCD5960 VA: 0xCD9960
	internal void <RegisterBaseExporters>b__24_8(object obj, JsonWriter writer) { }

	// RVA: 0xCD99DC Offset: 0xCD59DC VA: 0xCD99DC
	internal void <RegisterBaseExporters>b__24_9(object obj, JsonWriter writer) { }

	// RVA: 0xCD9AE8 Offset: 0xCD5AE8 VA: 0xCD9AE8
	internal object <RegisterBaseImporters>b__25_0(object input) { }

	// RVA: 0xCD9BB8 Offset: 0xCD5BB8 VA: 0xCD9BB8
	internal object <RegisterBaseImporters>b__25_1(object input) { }

	// RVA: 0xCD9C88 Offset: 0xCD5C88 VA: 0xCD9C88
	internal object <RegisterBaseImporters>b__25_2(object input) { }

	// RVA: 0xCD9D58 Offset: 0xCD5D58 VA: 0xCD9D58
	internal object <RegisterBaseImporters>b__25_3(object input) { }

	// RVA: 0xCD9E28 Offset: 0xCD5E28 VA: 0xCD9E28
	internal object <RegisterBaseImporters>b__25_4(object input) { }

	// RVA: 0xCD9EF8 Offset: 0xCD5EF8 VA: 0xCD9EF8
	internal object <RegisterBaseImporters>b__25_5(object input) { }

	// RVA: 0xCD9FC8 Offset: 0xCD5FC8 VA: 0xCD9FC8
	internal object <RegisterBaseImporters>b__25_6(object input) { }

	// RVA: 0xCDA098 Offset: 0xCD6098 VA: 0xCDA098
	internal object <RegisterBaseImporters>b__25_7(object input) { }

	// RVA: 0xCDA164 Offset: 0xCD6164 VA: 0xCDA164
	internal object <RegisterBaseImporters>b__25_8(object input) { }

	// RVA: 0xCDA230 Offset: 0xCD6230 VA: 0xCDA230
	internal object <RegisterBaseImporters>b__25_9(object input) { }

	// RVA: 0xCDA328 Offset: 0xCD6328 VA: 0xCDA328
	internal object <RegisterBaseImporters>b__25_10(object input) { }

	// RVA: 0xCDA3F8 Offset: 0xCD63F8 VA: 0xCDA3F8
	internal object <RegisterBaseImporters>b__25_11(object input) { }

	// RVA: 0xCDA4BC Offset: 0xCD64BC VA: 0xCDA4BC
	internal object <RegisterBaseImporters>b__25_12(object input) { }

	// RVA: 0xCDA5B8 Offset: 0xCD65B8 VA: 0xCDA5B8
	internal object <RegisterBaseImporters>b__25_13(object input) { }
}


// Namespace: LitJson
public class JsonMapper // TypeDefIndex: 7032
{
	// Fields
	private static readonly int max_nesting_depth; // 0x0
	private static readonly IFormatProvider datetime_format; // 0x8
	private static readonly IDictionary<Type, ExporterFunc> base_exporters_table; // 0x10
	private static readonly IDictionary<Type, ExporterFunc> custom_exporters_table; // 0x18
	private static readonly IDictionary<Type, IDictionary<Type, ImporterFunc>> base_importers_table; // 0x20
	private static readonly IDictionary<Type, IDictionary<Type, ImporterFunc>> custom_importers_table; // 0x28
	private static readonly IDictionary<Type, ArrayMetadata> array_metadata; // 0x30
	private static readonly object array_metadata_lock; // 0x38
	private static readonly IDictionary<Type, IDictionary<Type, MethodInfo>> conv_ops; // 0x40
	private static readonly object conv_ops_lock; // 0x48
	private static readonly IDictionary<Type, ObjectMetadata> object_metadata; // 0x50
	private static readonly object object_metadata_lock; // 0x58
	private static readonly IDictionary<Type, IList<PropertyMetadata>> type_properties; // 0x60
	private static readonly object type_properties_lock; // 0x68
	private static readonly JsonWriter static_writer; // 0x70
	private static readonly object static_writer_lock; // 0x78

	// Methods

	// RVA: 0xCD22F4 Offset: 0xCCE2F4 VA: 0xCD22F4
	private static void .cctor() { }

	// RVA: 0xCD41BC Offset: 0xCD01BC VA: 0xCD41BC
	private static void AddArrayMetadata(Type type) { }

	// RVA: 0xCD4608 Offset: 0xCD0608 VA: 0xCD4608
	private static void AddObjectMetadata(Type type) { }

	// RVA: 0xCD4CA8 Offset: 0xCD0CA8 VA: 0xCD4CA8
	private static void AddTypeProperties(Type type) { }

	// RVA: 0xCD51D0 Offset: 0xCD11D0 VA: 0xCD51D0
	private static MethodInfo GetConvOp(Type t1, Type t2) { }

	// RVA: 0xCD59F4 Offset: 0xCD19F4 VA: 0xCD59F4
	private static object ReadValue(Type inst_type, JsonReader reader) { }

	// RVA: 0xCD6EBC Offset: 0xCD2EBC VA: 0xCD6EBC
	private static IJsonWrapper ReadValue(WrapperFactory factory, JsonReader reader) { }

	// RVA: 0xCD6DC4 Offset: 0xCD2DC4 VA: 0xCD6DC4
	private static void ReadSkip(JsonReader reader) { }

	// RVA: 0xCD2708 Offset: 0xCCE708 VA: 0xCD2708
	private static void RegisterBaseExporters() { }

	// RVA: 0xCD33FC Offset: 0xCCF3FC VA: 0xCD33FC
	private static void RegisterBaseImporters() { }

	// RVA: 0xCD75BC Offset: 0xCD35BC VA: 0xCD75BC
	private static void RegisterImporter(IDictionary<Type, IDictionary<Type, ImporterFunc>> table, Type json_type, Type value_type, ImporterFunc importer) { }

	// RVA: 0xCD77FC Offset: 0xCD37FC VA: 0xCD77FC
	private static void WriteValue(object obj, JsonWriter writer, bool writer_is_private, int depth) { }

	// RVA: 0xCD8FF0 Offset: 0xCD4FF0 VA: 0xCD8FF0
	public static string ToJson(object obj) { }

	// RVA: -1 Offset: -1
	public static T ToObject<T>(string json) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8DD94 Offset: 0xB89D94 VA: 0xB8DD94
	|-JsonMapper.ToObject<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xCD7558 Offset: 0xCD3558 VA: 0xCD7558
	public static IJsonWrapper ToWrapper(WrapperFactory factory, JsonReader reader) { }
}


// Namespace: LitJson
public class JsonMockWrapper : IJsonWrapper, IList, ICollection, IEnumerable, IOrderedDictionary, IDictionary // TypeDefIndex: 7033
{
	// Properties
	public bool IsArray { get; }
	public bool IsBoolean { get; }
	public bool IsDouble { get; }
	public bool IsInt { get; }
	public bool IsLong { get; }
	public bool IsObject { get; }
	public bool IsString { get; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private bool System.Collections.IList.IsReadOnly { get; }
	private object System.Collections.IList.Item { get; set; }
	private int System.Collections.ICollection.Count { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private bool System.Collections.IDictionary.IsReadOnly { get; }
	private ICollection System.Collections.IDictionary.Keys { get; }
	private ICollection System.Collections.IDictionary.Values { get; }
	private object System.Collections.IDictionary.Item { get; set; }

	// Methods

	// RVA: 0xCDA6A0 Offset: 0xCD66A0 VA: 0xCDA6A0 Slot: 4
	public bool get_IsArray() { }

	// RVA: 0xCDA6A8 Offset: 0xCD66A8 VA: 0xCDA6A8 Slot: 5
	public bool get_IsBoolean() { }

	// RVA: 0xCDA6B0 Offset: 0xCD66B0 VA: 0xCDA6B0 Slot: 6
	public bool get_IsDouble() { }

	// RVA: 0xCDA6B8 Offset: 0xCD66B8 VA: 0xCDA6B8 Slot: 7
	public bool get_IsInt() { }

	// RVA: 0xCDA6C0 Offset: 0xCD66C0 VA: 0xCDA6C0 Slot: 8
	public bool get_IsLong() { }

	// RVA: 0xCDA6C8 Offset: 0xCD66C8 VA: 0xCDA6C8 Slot: 9
	public bool get_IsObject() { }

	// RVA: 0xCDA6D0 Offset: 0xCD66D0 VA: 0xCDA6D0 Slot: 10
	public bool get_IsString() { }

	// RVA: 0xCDA6D8 Offset: 0xCD66D8 VA: 0xCDA6D8 Slot: 11
	public bool GetBoolean() { }

	// RVA: 0xCDA6E0 Offset: 0xCD66E0 VA: 0xCDA6E0 Slot: 12
	public double GetDouble() { }

	// RVA: 0xCDA6E8 Offset: 0xCD66E8 VA: 0xCDA6E8 Slot: 13
	public int GetInt() { }

	// RVA: 0xCDA6F0 Offset: 0xCD66F0 VA: 0xCDA6F0 Slot: 14
	public long GetLong() { }

	// RVA: 0xCDA6F8 Offset: 0xCD66F8 VA: 0xCDA6F8 Slot: 15
	public string GetString() { }

	// RVA: 0xCDA738 Offset: 0xCD6738 VA: 0xCDA738 Slot: 16
	public void SetBoolean(bool val) { }

	// RVA: 0xCDA73C Offset: 0xCD673C VA: 0xCDA73C Slot: 17
	public void SetDouble(double val) { }

	// RVA: 0xCDA740 Offset: 0xCD6740 VA: 0xCDA740 Slot: 18
	public void SetInt(int val) { }

	// RVA: 0xCDA744 Offset: 0xCD6744 VA: 0xCDA744 Slot: 19
	public void SetJsonType(JsonType type) { }

	// RVA: 0xCDA748 Offset: 0xCD6748 VA: 0xCDA748 Slot: 20
	public void SetLong(long val) { }

	// RVA: 0xCDA74C Offset: 0xCD674C VA: 0xCDA74C Slot: 21
	public void SetString(string val) { }

	// RVA: 0xCDA750 Offset: 0xCD6750 VA: 0xCDA750 Slot: 22
	public string ToJson() { }

	// RVA: 0xCDA790 Offset: 0xCD6790 VA: 0xCDA790 Slot: 23
	public void ToJson(JsonWriter writer) { }

	// RVA: 0xCDA794 Offset: 0xCD6794 VA: 0xCDA794 Slot: 30
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0xCDA79C Offset: 0xCD679C VA: 0xCDA79C Slot: 29
	private bool System.Collections.IList.get_IsReadOnly() { }

	// RVA: 0xCDA7A4 Offset: 0xCD67A4 VA: 0xCDA7A4 Slot: 24
	private object System.Collections.IList.get_Item(int index) { }

	// RVA: 0xCDA7AC Offset: 0xCD67AC VA: 0xCDA7AC Slot: 25
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0xCDA7B0 Offset: 0xCD67B0 VA: 0xCDA7B0 Slot: 26
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0xCDA7B8 Offset: 0xCD67B8 VA: 0xCDA7B8 Slot: 28
	private void System.Collections.IList.Clear() { }

	// RVA: 0xCDA7BC Offset: 0xCD67BC VA: 0xCDA7BC Slot: 27
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0xCDA7C4 Offset: 0xCD67C4 VA: 0xCDA7C4 Slot: 31
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0xCDA7CC Offset: 0xCD67CC VA: 0xCDA7CC Slot: 32
	private void System.Collections.IList.Insert(int i, object v) { }

	// RVA: 0xCDA7D0 Offset: 0xCD67D0 VA: 0xCDA7D0 Slot: 33
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0xCDA7D4 Offset: 0xCD67D4 VA: 0xCDA7D4 Slot: 34
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0xCDA7D8 Offset: 0xCD67D8 VA: 0xCDA7D8 Slot: 36
	private int System.Collections.ICollection.get_Count() { }

	// RVA: 0xCDA7E0 Offset: 0xCD67E0 VA: 0xCDA7E0 Slot: 38
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0xCDA7E8 Offset: 0xCD67E8 VA: 0xCDA7E8 Slot: 37
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0xCDA7F0 Offset: 0xCD67F0 VA: 0xCDA7F0 Slot: 35
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0xCDA7F4 Offset: 0xCD67F4 VA: 0xCDA7F4 Slot: 39
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0xCDA7FC Offset: 0xCD67FC VA: 0xCDA7FC Slot: 48
	private bool System.Collections.IDictionary.get_IsReadOnly() { }

	// RVA: 0xCDA804 Offset: 0xCD6804 VA: 0xCDA804 Slot: 43
	private ICollection System.Collections.IDictionary.get_Keys() { }

	// RVA: 0xCDA80C Offset: 0xCD680C VA: 0xCDA80C Slot: 44
	private ICollection System.Collections.IDictionary.get_Values() { }

	// RVA: 0xCDA814 Offset: 0xCD6814 VA: 0xCDA814 Slot: 41
	private object System.Collections.IDictionary.get_Item(object key) { }

	// RVA: 0xCDA81C Offset: 0xCD681C VA: 0xCDA81C Slot: 42
	private void System.Collections.IDictionary.set_Item(object key, object value) { }

	// RVA: 0xCDA820 Offset: 0xCD6820 VA: 0xCDA820 Slot: 46
	private void System.Collections.IDictionary.Add(object k, object v) { }

	// RVA: 0xCDA824 Offset: 0xCD6824 VA: 0xCDA824 Slot: 47
	private void System.Collections.IDictionary.Clear() { }

	// RVA: 0xCDA828 Offset: 0xCD6828 VA: 0xCDA828 Slot: 45
	private bool System.Collections.IDictionary.Contains(object key) { }

	// RVA: 0xCDA830 Offset: 0xCD6830 VA: 0xCDA830 Slot: 50
	private void System.Collections.IDictionary.Remove(object key) { }

	// RVA: 0xCDA834 Offset: 0xCD6834 VA: 0xCDA834 Slot: 49
	private IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }

	// RVA: 0xCDA83C Offset: 0xCD683C VA: 0xCDA83C Slot: 40
	private IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary.GetEnumerator() { }

	// RVA: 0xCD92DC Offset: 0xCD52DC VA: 0xCD92DC
	public void .ctor() { }
}


// Namespace: LitJson
public enum JsonToken // TypeDefIndex: 7034
{
	// Fields
	public int value__; // 0x0
	public const JsonToken None = 0;
	public const JsonToken ObjectStart = 1;
	public const JsonToken PropertyName = 2;
	public const JsonToken ObjectEnd = 3;
	public const JsonToken ArrayStart = 4;
	public const JsonToken ArrayEnd = 5;
	public const JsonToken Int = 6;
	public const JsonToken Long = 7;
	public const JsonToken Double = 8;
	public const JsonToken String = 9;
	public const JsonToken Boolean = 10;
	public const JsonToken Null = 11;
}


// Namespace: LitJson
public class JsonReader // TypeDefIndex: 7035
{
	// Fields
	private static readonly IDictionary<int, IDictionary<int, int[]>> parse_table; // 0x0
	private Stack<int> automaton_stack; // 0x10
	private int current_input; // 0x18
	private int current_symbol; // 0x1C
	private bool end_of_json; // 0x20
	private bool end_of_input; // 0x21
	private Lexer lexer; // 0x28
	private bool parser_in_string; // 0x30
	private bool parser_return; // 0x31
	private bool read_started; // 0x32
	private TextReader reader; // 0x38
	private bool reader_is_owned; // 0x40
	private bool skip_non_members; // 0x41
	private object token_value; // 0x48
	private JsonToken token; // 0x50

	// Properties
	public bool SkipNonMembers { get; }
	public JsonToken Token { get; }
	public object Value { get; }

	// Methods

	// RVA: 0xCD6DBC Offset: 0xCD2DBC VA: 0xCD6DBC
	public bool get_SkipNonMembers() { }

	// RVA: 0xCD6DAC Offset: 0xCD2DAC VA: 0xCD6DAC
	public JsonToken get_Token() { }

	// RVA: 0xCD6DB4 Offset: 0xCD2DB4 VA: 0xCD6DB4
	public object get_Value() { }

	// RVA: 0xCDA844 Offset: 0xCD6844 VA: 0xCDA844
	private static void .cctor() { }

	// RVA: 0xCDAFF4 Offset: 0xCD6FF4 VA: 0xCDAFF4
	public void .ctor(string json_text) { }

	// RVA: 0xCDB064 Offset: 0xCD7064 VA: 0xCDB064
	private void .ctor(TextReader reader, bool owned) { }

	// RVA: 0xCDA890 Offset: 0xCD6890 VA: 0xCDA890
	private static IDictionary<int, IDictionary<int, int[]>> PopulateParseTable() { }

	// RVA: 0xCDB398 Offset: 0xCD7398 VA: 0xCDB398
	private static void TableAddCol(IDictionary<int, IDictionary<int, int[]>> parse_table, ParserToken row, int col, int[] symbols) { }

	// RVA: 0xCDB2A8 Offset: 0xCD72A8 VA: 0xCDB2A8
	private static void TableAddRow(IDictionary<int, IDictionary<int, int[]>> parse_table, ParserToken rule) { }

	// RVA: 0xCDB4CC Offset: 0xCD74CC VA: 0xCDB4CC
	private void ProcessNumber(string number) { }

	// RVA: 0xCDB714 Offset: 0xCD7714 VA: 0xCDB714
	private void ProcessSymbol() { }

	// RVA: 0xCDB8B0 Offset: 0xCD78B0 VA: 0xCDB8B0
	private bool ReadToken() { }

	// RVA: 0xCDBACC Offset: 0xCD7ACC VA: 0xCDBACC
	public void Close() { }

	// RVA: 0xCD6934 Offset: 0xCD2934 VA: 0xCD6934
	public bool Read() { }
}


// Namespace: LitJson
internal enum Condition // TypeDefIndex: 7036
{
	// Fields
	public int value__; // 0x0
	public const Condition InArray = 0;
	public const Condition InObject = 1;
	public const Condition NotAProperty = 2;
	public const Condition Property = 3;
	public const Condition Value = 4;
}


// Namespace: LitJson
internal class WriterContext // TypeDefIndex: 7037
{
	// Fields
	public int Count; // 0x10
	public bool InArray; // 0x14
	public bool InObject; // 0x15
	public bool ExpectingValue; // 0x16
	public int Padding; // 0x18

	// Methods

	// RVA: 0xCDBB90 Offset: 0xCD7B90 VA: 0xCDBB90
	public void .ctor() { }
}


// Namespace: LitJson
public class JsonWriter // TypeDefIndex: 7038
{
	// Fields
	private static readonly NumberFormatInfo number_format; // 0x0
	private WriterContext context; // 0x10
	private Stack<WriterContext> ctx_stack; // 0x18
	private bool has_reached_end; // 0x20
	private char[] hex_seq; // 0x28
	private int indentation; // 0x30
	private int indent_value; // 0x34
	private StringBuilder inst_string_builder; // 0x38
	private bool pretty_print; // 0x40
	private bool validate; // 0x41
	private bool lower_case_properties; // 0x42
	private TextWriter writer; // 0x48

	// Properties
	public TextWriter TextWriter { get; }
	public bool Validate { get; set; }

	// Methods

	// RVA: 0xCD8F14 Offset: 0xCD4F14 VA: 0xCD8F14
	public TextWriter get_TextWriter() { }

	// RVA: 0xCD17E8 Offset: 0xCCD7E8 VA: 0xCD17E8
	public bool get_Validate() { }

	// RVA: 0xCD17DC Offset: 0xCCD7DC VA: 0xCD17DC
	public void set_Validate(bool value) { }

	// RVA: 0xCDBB98 Offset: 0xCD7B98 VA: 0xCDBB98
	private static void .cctor() { }

	// RVA: 0xCD2668 Offset: 0xCCE668 VA: 0xCD2668
	public void .ctor() { }

	// RVA: 0xCD1764 Offset: 0xCCD764 VA: 0xCD1764
	public void .ctor(TextWriter writer) { }

	// RVA: 0xCDBCF8 Offset: 0xCD7CF8 VA: 0xCDBCF8
	private void DoValidation(Condition cond) { }

	// RVA: 0xCDBBE8 Offset: 0xCD7BE8 VA: 0xCDBBE8
	private void Init() { }

	// RVA: 0xCDBE80 Offset: 0xCD7E80 VA: 0xCDBE80
	private static void IntToHex(int n, char[] hex) { }

	// RVA: 0xCDBEF8 Offset: 0xCD7EF8 VA: 0xCDBEF8
	private void Indent() { }

	// RVA: 0xCDBF10 Offset: 0xCD7F10 VA: 0xCDBF10
	private void Put(string str) { }

	// RVA: 0xCDBF98 Offset: 0xCD7F98 VA: 0xCDBF98
	private void PutNewline() { }

	// RVA: 0xCDBFA0 Offset: 0xCD7FA0 VA: 0xCDBFA0
	private void PutNewline(bool add_comma) { }

	// RVA: 0xCDC030 Offset: 0xCD8030 VA: 0xCDC030
	private void PutString(string str) { }

	// RVA: 0xCDC324 Offset: 0xCD8324 VA: 0xCDC324
	private void Unindent() { }

	// RVA: 0xCDC33C Offset: 0xCD833C VA: 0xCDC33C Slot: 3
	public override string ToString() { }

	// RVA: 0xCD9148 Offset: 0xCD5148 VA: 0xCD9148
	public void Reset() { }

	// RVA: 0xCD0C04 Offset: 0xCCCC04 VA: 0xCD0C04
	public void Write(bool boolean) { }

	// RVA: 0xCD95B4 Offset: 0xCD55B4 VA: 0xCD95B4
	public void Write(Decimal number) { }

	// RVA: 0xCD0C9C Offset: 0xCCCC9C VA: 0xCD0C9C
	public void Write(double number) { }

	// RVA: 0xCD0DD8 Offset: 0xCCCDD8 VA: 0xCD0DD8
	public void Write(int number) { }

	// RVA: 0xCD0EAC Offset: 0xCCCEAC VA: 0xCD0EAC
	public void Write(long number) { }

	// RVA: 0xCD0B78 Offset: 0xCCCB78 VA: 0xCD0B78
	public void Write(string str) { }

	// RVA: 0xCD8F1C Offset: 0xCD4F1C VA: 0xCD8F1C
	public void Write(ulong number) { }

	// RVA: 0xCD1064 Offset: 0xCCD064 VA: 0xCD1064
	public void WriteArrayEnd() { }

	// RVA: 0xCD0F80 Offset: 0xCCCF80 VA: 0xCD0F80
	public void WriteArrayStart() { }

	// RVA: 0xCD1368 Offset: 0xCCD368 VA: 0xCD1368
	public void WriteObjectEnd() { }

	// RVA: 0xCD1160 Offset: 0xCCD160 VA: 0xCD1160
	public void WriteObjectStart() { }

	// RVA: 0xCD1244 Offset: 0xCCD244 VA: 0xCD1244
	public void WritePropertyName(string property_name) { }
}


// Namespace: LitJson
internal class FsmContext // TypeDefIndex: 7039
{
	// Fields
	public bool Return; // 0x10
	public int NextState; // 0x14
	public Lexer L; // 0x18
	public int StateStack; // 0x20

	// Methods

	// RVA: 0xCDC3A4 Offset: 0xCD83A4 VA: 0xCDC3A4
	public void .ctor() { }
}


// Namespace: 
private sealed class Lexer.StateHandler : MulticastDelegate // TypeDefIndex: 7040
{
	// Methods

	// RVA: 0xCDCBD8 Offset: 0xCD8BD8 VA: 0xCDCBD8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0xCDE0B8 Offset: 0xCDA0B8 VA: 0xCDE0B8 Slot: 12
	public virtual bool Invoke(FsmContext ctx) { }
}


// Namespace: LitJson
internal class Lexer // TypeDefIndex: 7041
{
	// Fields
	private static readonly int[] fsm_return_table; // 0x0
	private static readonly Lexer.StateHandler[] fsm_handler_table; // 0x8
	private bool allow_comments; // 0x10
	private bool allow_single_quoted_strings; // 0x11
	private bool end_of_input; // 0x12
	private FsmContext fsm_context; // 0x18
	private int input_buffer; // 0x20
	private int input_char; // 0x24
	private TextReader reader; // 0x28
	private int state; // 0x30
	private StringBuilder string_buffer; // 0x38
	private string string_value; // 0x40
	private int token; // 0x48
	private int unichar; // 0x4C

	// Properties
	public bool EndOfInput { get; }
	public int Token { get; }
	public string StringValue { get; }

	// Methods

	// RVA: 0xCDBAC4 Offset: 0xCD7AC4 VA: 0xCDBAC4
	public bool get_EndOfInput() { }

	// RVA: 0xCDBB88 Offset: 0xCD7B88 VA: 0xCDBB88
	public int get_Token() { }

	// RVA: 0xCDB8A8 Offset: 0xCD78A8 VA: 0xCDB8A8
	public string get_StringValue() { }

	// RVA: 0xCDC3AC Offset: 0xCD83AC VA: 0xCDC3AC
	private static void .cctor() { }

	// RVA: 0xCDB1E0 Offset: 0xCD71E0 VA: 0xCDB1E0
	public void .ctor(TextReader reader) { }

	// RVA: 0xCDCB54 Offset: 0xCD8B54 VA: 0xCDCB54
	private static int HexValue(int digit) { }

	// RVA: 0xCDC3F4 Offset: 0xCD83F4 VA: 0xCDC3F4
	private static void PopulateFsmTables(out Lexer.StateHandler[] fsm_handler_table, out int[] fsm_return_table) { }

	// RVA: 0xCDCCD8 Offset: 0xCD8CD8 VA: 0xCDCCD8
	private static char ProcessEscChar(int esc_char) { }

	// RVA: 0xCDCDC8 Offset: 0xCD8DC8 VA: 0xCDCDC8
	private static bool State1(FsmContext ctx) { }

	// RVA: 0xCDCFD0 Offset: 0xCD8FD0 VA: 0xCDCFD0
	private static bool State2(FsmContext ctx) { }

	// RVA: 0xCDD078 Offset: 0xCD9078 VA: 0xCDD078
	private static bool State3(FsmContext ctx) { }

	// RVA: 0xCDD1D0 Offset: 0xCD91D0 VA: 0xCDD1D0
	private static bool State4(FsmContext ctx) { }

	// RVA: 0xCDD2C8 Offset: 0xCD92C8 VA: 0xCDD2C8
	private static bool State5(FsmContext ctx) { }

	// RVA: 0xCDD344 Offset: 0xCD9344 VA: 0xCDD344
	private static bool State6(FsmContext ctx) { }

	// RVA: 0xCDD440 Offset: 0xCD9440 VA: 0xCDD440
	private static bool State7(FsmContext ctx) { }

	// RVA: 0xCDD4D4 Offset: 0xCD94D4 VA: 0xCDD4D4
	private static bool State8(FsmContext ctx) { }

	// RVA: 0xCDD5C4 Offset: 0xCD95C4 VA: 0xCDD5C4
	private static bool State9(FsmContext ctx) { }

	// RVA: 0xCDD62C Offset: 0xCD962C VA: 0xCDD62C
	private static bool State10(FsmContext ctx) { }

	// RVA: 0xCDD694 Offset: 0xCD9694 VA: 0xCDD694
	private static bool State11(FsmContext ctx) { }

	// RVA: 0xCDD700 Offset: 0xCD9700 VA: 0xCDD700
	private static bool State12(FsmContext ctx) { }

	// RVA: 0xCDD768 Offset: 0xCD9768 VA: 0xCDD768
	private static bool State13(FsmContext ctx) { }

	// RVA: 0xCDD7D0 Offset: 0xCD97D0 VA: 0xCDD7D0
	private static bool State14(FsmContext ctx) { }

	// RVA: 0xCDD838 Offset: 0xCD9838 VA: 0xCDD838
	private static bool State15(FsmContext ctx) { }

	// RVA: 0xCDD8A4 Offset: 0xCD98A4 VA: 0xCDD8A4
	private static bool State16(FsmContext ctx) { }

	// RVA: 0xCDD90C Offset: 0xCD990C VA: 0xCDD90C
	private static bool State17(FsmContext ctx) { }

	// RVA: 0xCDD974 Offset: 0xCD9974 VA: 0xCDD974
	private static bool State18(FsmContext ctx) { }

	// RVA: 0xCDD9E0 Offset: 0xCD99E0 VA: 0xCDD9E0
	private static bool State19(FsmContext ctx) { }

	// RVA: 0xCDDA88 Offset: 0xCD9A88 VA: 0xCDDA88
	private static bool State20(FsmContext ctx) { }

	// RVA: 0xCDDAF4 Offset: 0xCD9AF4 VA: 0xCDDAF4
	private static bool State21(FsmContext ctx) { }

	// RVA: 0xCDDC2C Offset: 0xCD9C2C VA: 0xCDDC2C
	private static bool State22(FsmContext ctx) { }

	// RVA: 0xCDDDA0 Offset: 0xCD9DA0 VA: 0xCDDDA0
	private static bool State23(FsmContext ctx) { }

	// RVA: 0xCDDE48 Offset: 0xCD9E48 VA: 0xCDDE48
	private static bool State24(FsmContext ctx) { }

	// RVA: 0xCDDEBC Offset: 0xCD9EBC VA: 0xCDDEBC
	private static bool State25(FsmContext ctx) { }

	// RVA: 0xCDDF38 Offset: 0xCD9F38 VA: 0xCDDF38
	private static bool State26(FsmContext ctx) { }

	// RVA: 0xCDDFA0 Offset: 0xCD9FA0 VA: 0xCDDFA0
	private static bool State27(FsmContext ctx) { }

	// RVA: 0xCDE008 Offset: 0xCDA008 VA: 0xCDE008
	private static bool State28(FsmContext ctx) { }

	// RVA: 0xCDCFA0 Offset: 0xCD8FA0 VA: 0xCDCFA0
	private bool GetChar() { }

	// RVA: 0xCDE080 Offset: 0xCDA080 VA: 0xCDE080
	private int NextChar() { }

	// RVA: 0xCDB904 Offset: 0xCD7904 VA: 0xCDB904
	public bool NextToken() { }

	// RVA: 0xCDD1C4 Offset: 0xCD91C4 VA: 0xCDD1C4
	private void UngetChar() { }
}


// Namespace: LitJson
internal enum ParserToken // TypeDefIndex: 7042
{
	// Fields
	public int value__; // 0x0
	public const ParserToken None = 65536;
	public const ParserToken Number = 65537;
	public const ParserToken True = 65538;
	public const ParserToken False = 65539;
	public const ParserToken Null = 65540;
	public const ParserToken CharSeq = 65541;
	public const ParserToken Char = 65542;
	public const ParserToken Text = 65543;
	public const ParserToken Object = 65544;
	public const ParserToken ObjectPrime = 65545;
	public const ParserToken Pair = 65546;
	public const ParserToken PairRest = 65547;
	public const ParserToken Array = 65548;
	public const ParserToken ArrayPrime = 65549;
	public const ParserToken Value = 65550;
	public const ParserToken ValueRest = 65551;
	public const ParserToken String = 65552;
	public const ParserToken End = 65553;
	public const ParserToken Epsilon = 65554;
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 // TypeDefIndex: 7043
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=112 // TypeDefIndex: 7044
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 7045
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A /*Metadata offset 0x38FF40*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD /*Metadata offset 0x38FF50*/; // 0xC
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0 /*Metadata offset 0x38FF60*/; // 0x18
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF /*Metadata offset 0x38FF70*/; // 0x24
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85 /*Metadata offset 0x38FF80*/; // 0x30
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=112 C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82 /*Metadata offset 0x38FF90*/; // 0x3C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206 /*Metadata offset 0x390008*/; // 0xAC
}
