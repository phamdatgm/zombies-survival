// Namespace: 
internal class <Module> // TypeDefIndex: 4133
{}


// Namespace: System.Runtime.CompilerServices
[CompilerGenerated]
[Usage(27524, AllowMultiple = False, Inherited = False)]
internal sealed class NullableAttribute : Attribute // TypeDefIndex: 4134
{
	// Fields
	public readonly byte[] NullableFlags; // 0x10

	// Methods

	// RVA: 0xEC7C58 Offset: 0xEC3C58 VA: 0xEC7C58
	public void .ctor(byte ) { }

	// RVA: 0xEC7CD8 Offset: 0xEC3CD8 VA: 0xEC7CD8
	public void .ctor(byte[] ) { }
}


// Namespace: System.Runtime.CompilerServices
[CompilerGenerated]
[Usage(5196, AllowMultiple = False, Inherited = False)]
internal sealed class NullableContextAttribute : Attribute // TypeDefIndex: 4135
{
	// Fields
	public readonly byte Flag; // 0x10

	// Methods

	// RVA: 0xEC7D00 Offset: 0xEC3D00 VA: 0xEC7D00
	public void .ctor(byte ) { }
}


// Namespace: Newtonsoft.Json
public enum ConstructorHandling // TypeDefIndex: 4136
{
	// Fields
	public int value__; // 0x0
	public const ConstructorHandling Default = 0;
	public const ConstructorHandling AllowNonPublicDefaultConstructor = 1;
}


// Namespace: Newtonsoft.Json
public enum DateFormatHandling // TypeDefIndex: 4137
{
	// Fields
	public int value__; // 0x0
	public const DateFormatHandling IsoDateFormat = 0;
	public const DateFormatHandling MicrosoftDateFormat = 1;
}


// Namespace: Newtonsoft.Json
public enum DateParseHandling // TypeDefIndex: 4138
{
	// Fields
	public int value__; // 0x0
	public const DateParseHandling None = 0;
	public const DateParseHandling DateTime = 1;
	public const DateParseHandling DateTimeOffset = 2;
}


// Namespace: Newtonsoft.Json
public enum DateTimeZoneHandling // TypeDefIndex: 4139
{
	// Fields
	public int value__; // 0x0
	public const DateTimeZoneHandling Local = 0;
	public const DateTimeZoneHandling Utc = 1;
	public const DateTimeZoneHandling Unspecified = 2;
	public const DateTimeZoneHandling RoundtripKind = 3;
}


// Namespace: 
[Nullable(0)]
private class DefaultJsonNameTable.Entry // TypeDefIndex: 4140
{
	// Fields
	internal readonly string Value; // 0x10
	internal readonly int HashCode; // 0x18
	internal DefaultJsonNameTable.Entry Next; // 0x20

	// Methods

	// RVA: 0xEC82F4 Offset: 0xEC42F4 VA: 0xEC82F4
	internal void .ctor(string value, int hashCode, DefaultJsonNameTable.Entry next) { }
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
public class DefaultJsonNameTable : JsonNameTable // TypeDefIndex: 4141
{
	// Fields
	private static readonly int HashCodeRandomizer; // 0x0
	private int _count; // 0x10
	private DefaultJsonNameTable.Entry[] _entries; // 0x18
	private int _mask; // 0x20

	// Methods

	// RVA: 0xEC7D28 Offset: 0xEC3D28 VA: 0xEC7D28
	private static void .cctor() { }

	// RVA: 0xEC7D78 Offset: 0xEC3D78 VA: 0xEC7D78
	public void .ctor() { }

	// RVA: 0xEC7DE8 Offset: 0xEC3DE8 VA: 0xEC7DE8 Slot: 4
	public override string Get(char[] key, int start, int length) { }

	// RVA: 0xEC8038 Offset: 0xEC4038 VA: 0xEC8038
	public string Add(string key) { }

	// RVA: 0xEC81EC Offset: 0xEC41EC VA: 0xEC81EC
	private string AddEntry(string str, int hashCode) { }

	// RVA: 0xEC8334 Offset: 0xEC4334 VA: 0xEC8334
	private void Grow() { }

	// RVA: 0xEC7F7C Offset: 0xEC3F7C VA: 0xEC7F7C
	private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length) { }
}


// Namespace: Newtonsoft.Json
[Flags]
public enum DefaultValueHandling // TypeDefIndex: 4142
{
	// Fields
	public int value__; // 0x0
	public const DefaultValueHandling Include = 0;
	public const DefaultValueHandling Ignore = 1;
	public const DefaultValueHandling Populate = 2;
	public const DefaultValueHandling IgnoreAndPopulate = 3;
}


// Namespace: Newtonsoft.Json
public enum FloatFormatHandling // TypeDefIndex: 4143
{
	// Fields
	public int value__; // 0x0
	public const FloatFormatHandling String = 0;
	public const FloatFormatHandling Symbol = 1;
	public const FloatFormatHandling DefaultValue = 2;
}


// Namespace: Newtonsoft.Json
public enum FloatParseHandling // TypeDefIndex: 4144
{
	// Fields
	public int value__; // 0x0
	public const FloatParseHandling Double = 0;
	public const FloatParseHandling Decimal = 1;
}


// Namespace: Newtonsoft.Json
public enum Formatting // TypeDefIndex: 4145
{
	// Fields
	public int value__; // 0x0
	public const Formatting None = 0;
	public const Formatting Indented = 1;
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
public interface IArrayPool<T> // TypeDefIndex: 4146
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T[] Rent(int minimumLength);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Return(T[] array);
}


// Namespace: Newtonsoft.Json
public interface IJsonLineInfo // TypeDefIndex: 4147
{
	// Properties
	public abstract int LineNumber { get; }
	public abstract int LinePosition { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool HasLineInfo();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int get_LineNumber();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_LinePosition();
}


// Namespace: Newtonsoft.Json
[Usage(1028, AllowMultiple = False)]
public sealed class JsonArrayAttribute : JsonContainerAttribute // TypeDefIndex: 4148
{}


// Namespace: Newtonsoft.Json
[Usage(32, AllowMultiple = False)]
public sealed class JsonConstructorAttribute : Attribute // TypeDefIndex: 4149
{}


// Namespace: Newtonsoft.Json
[NullableContext(2)]
[Nullable(0)]
[Usage(1028, AllowMultiple = False)]
public abstract class JsonContainerAttribute : Attribute // TypeDefIndex: 4150
{
	// Fields
	[CompilerGenerated]
	private Type <ItemConverterType>k__BackingField; // 0x10
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private object[] <ItemConverterParameters>k__BackingField; // 0x18
	[CompilerGenerated]
	private NamingStrategy <NamingStrategyInstance>k__BackingField; // 0x20
	internal Nullable<bool> _isReference; // 0x28
	internal Nullable<bool> _itemIsReference; // 0x2A
	internal Nullable<ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x2C
	internal Nullable<TypeNameHandling> _itemTypeNameHandling; // 0x34
	private Type _namingStrategyType; // 0x40
	[Nullable(new[] { 2, 1 })]
	private object[] _namingStrategyParameters; // 0x48

	// Properties
	public Type ItemConverterType { get; }
	[Nullable(new[] { 2, 1 })]
	public object[] ItemConverterParameters { get; }
	public Type NamingStrategyType { get; }
	[Nullable(new[] { 2, 1 })]
	public object[] NamingStrategyParameters { get; }
	internal NamingStrategy NamingStrategyInstance { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEC8460 Offset: 0xEC4460 VA: 0xEC8460
	public Type get_ItemConverterType() { }

	[CompilerGenerated]
	// RVA: 0xEC8468 Offset: 0xEC4468 VA: 0xEC8468
	public object[] get_ItemConverterParameters() { }

	// RVA: 0xEC8470 Offset: 0xEC4470 VA: 0xEC8470
	public Type get_NamingStrategyType() { }

	// RVA: 0xEC8478 Offset: 0xEC4478 VA: 0xEC8478
	public object[] get_NamingStrategyParameters() { }

	[CompilerGenerated]
	// RVA: 0xEC8480 Offset: 0xEC4480 VA: 0xEC8480
	internal NamingStrategy get_NamingStrategyInstance() { }

	[CompilerGenerated]
	// RVA: 0xEC8488 Offset: 0xEC4488 VA: 0xEC8488
	internal void set_NamingStrategyInstance(NamingStrategy value) { }
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
public static class JsonConvert // TypeDefIndex: 4151
{
	// Fields
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private static Func<JsonSerializerSettings> <DefaultSettings>k__BackingField; // 0x0
	public static readonly string True; // 0x8
	public static readonly string False; // 0x10
	public static readonly string Null; // 0x18
	public static readonly string Undefined; // 0x20
	public static readonly string PositiveInfinity; // 0x28
	public static readonly string NegativeInfinity; // 0x30
	public static readonly string NaN; // 0x38

	// Properties
	[Nullable(new[] { 2, 1 })]
	public static Func<JsonSerializerSettings> DefaultSettings { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEC8490 Offset: 0xEC4490 VA: 0xEC8490
	public static Func<JsonSerializerSettings> get_DefaultSettings() { }

	// RVA: 0xEC84E8 Offset: 0xEC44E8 VA: 0xEC84E8
	public static string ToString(bool value) { }

	// RVA: 0xEC8554 Offset: 0xEC4554 VA: 0xEC8554
	public static string ToString(char value) { }

	// RVA: 0xEC8638 Offset: 0xEC4638 VA: 0xEC8638
	internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable) { }

	// RVA: 0xEC87EC Offset: 0xEC47EC VA: 0xEC87EC
	private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable) { }

	// RVA: 0xEC8910 Offset: 0xEC4910 VA: 0xEC8910
	internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable) { }

	// RVA: 0xEC8728 Offset: 0xEC4728 VA: 0xEC8728
	private static string EnsureDecimalPlace(double value, string text) { }

	// RVA: 0xEC89FC Offset: 0xEC49FC VA: 0xEC89FC
	private static string EnsureDecimalPlace(string text) { }

	// RVA: 0xEC8A70 Offset: 0xEC4A70 VA: 0xEC8A70
	public static string ToString(Decimal value) { }

	// RVA: 0xEC85E0 Offset: 0xEC45E0 VA: 0xEC85E0
	public static string ToString(string value) { }

	// RVA: 0xEC8B64 Offset: 0xEC4B64 VA: 0xEC8B64
	public static string ToString(string value, char delimiter) { }

	// RVA: 0xEC8BCC Offset: 0xEC4BCC VA: 0xEC8BCC
	public static string ToString(string value, char delimiter, StringEscapeHandling stringEscapeHandling) { }

	// RVA: 0xEC8CB0 Offset: 0xEC4CB0 VA: 0xEC8CB0
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
public abstract class JsonConverter // TypeDefIndex: 4152
{
	// Properties
	public virtual bool CanRead { get; }
	public virtual bool CanWrite { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool CanConvert(Type objectType);

	// RVA: 0xEC8DC4 Offset: 0xEC4DC4 VA: 0xEC8DC4 Slot: 7
	public virtual bool get_CanRead() { }

	// RVA: 0xEC8DCC Offset: 0xEC4DCC VA: 0xEC8DCC Slot: 8
	public virtual bool get_CanWrite() { }

	// RVA: 0xEC8DD4 Offset: 0xEC4DD4 VA: 0xEC8DD4
	protected void .ctor() { }
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[Usage(3484, AllowMultiple = False)]
[NullableContext(1)]
public sealed class JsonConverterAttribute : Attribute // TypeDefIndex: 4153
{
	// Fields
	private readonly Type _converterType; // 0x10
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private readonly object[] <ConverterParameters>k__BackingField; // 0x18

	// Properties
	public Type ConverterType { get; }
	[Nullable(new[] { 2, 1 })]
	public object[] ConverterParameters { get; }

	// Methods

	// RVA: 0xEC8DDC Offset: 0xEC4DDC VA: 0xEC8DDC
	public Type get_ConverterType() { }

	[CompilerGenerated]
	// RVA: 0xEC8DE4 Offset: 0xEC4DE4 VA: 0xEC8DE4
	public object[] get_ConverterParameters() { }
}


// Namespace: Newtonsoft.Json
[Nullable(new[] { 0, 1 })]
public class JsonConverterCollection : Collection<JsonConverter> // TypeDefIndex: 4154
{
	// Methods

	// RVA: 0xEC8DEC Offset: 0xEC4DEC VA: 0xEC8DEC
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json
[Usage(1028, AllowMultiple = False)]
public sealed class JsonDictionaryAttribute : JsonContainerAttribute // TypeDefIndex: 4155
{}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
[Serializable]
public class JsonException : Exception // TypeDefIndex: 4156
{
	// Methods

	// RVA: 0xEC8E34 Offset: 0xEC4E34 VA: 0xEC8E34
	public void .ctor() { }

	// RVA: 0xEC8E8C Offset: 0xEC4E8C VA: 0xEC8E8C
	public void .ctor(string message) { }

	// RVA: 0xEC8EF4 Offset: 0xEC4EF4 VA: 0xEC8EF4
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0xEC8F64 Offset: 0xEC4F64 VA: 0xEC8F64
	public void .ctor(SerializationInfo info, StreamingContext context) { }
}


// Namespace: Newtonsoft.Json
[Usage(384, AllowMultiple = False)]
public class JsonExtensionDataAttribute : Attribute // TypeDefIndex: 4157
{
	// Fields
	[CompilerGenerated]
	private bool <WriteData>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <ReadData>k__BackingField; // 0x11

	// Properties
	public bool WriteData { get; }
	public bool ReadData { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEC8FE4 Offset: 0xEC4FE4 VA: 0xEC8FE4
	public bool get_WriteData() { }

	[CompilerGenerated]
	// RVA: 0xEC8FEC Offset: 0xEC4FEC VA: 0xEC8FEC
	public bool get_ReadData() { }
}


// Namespace: Newtonsoft.Json
[Usage(384, AllowMultiple = False)]
public sealed class JsonIgnoreAttribute : Attribute // TypeDefIndex: 4158
{
	// Methods

	// RVA: 0xEC8FF4 Offset: 0xEC4FF4 VA: 0xEC8FF4
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json
public abstract class JsonNameTable // TypeDefIndex: 4159
{
	// Methods

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract string Get(char[] key, int start, int length);

	// RVA: 0xEC7DE0 Offset: 0xEC3DE0 VA: 0xEC7DE0
	protected void .ctor() { }
}


// Namespace: Newtonsoft.Json
[Usage(1036, AllowMultiple = False)]
public sealed class JsonObjectAttribute : JsonContainerAttribute // TypeDefIndex: 4160
{
	// Fields
	private MemberSerialization _memberSerialization; // 0x50
	internal Nullable<MissingMemberHandling> _missingMemberHandling; // 0x54
	internal Nullable<Required> _itemRequired; // 0x5C
	internal Nullable<NullValueHandling> _itemNullValueHandling; // 0x64

	// Properties
	public MemberSerialization MemberSerialization { get; }

	// Methods

	// RVA: 0xEC8FFC Offset: 0xEC4FFC VA: 0xEC8FFC
	public MemberSerialization get_MemberSerialization() { }
}


// Namespace: Newtonsoft.Json
internal enum JsonContainerType // TypeDefIndex: 4161
{
	// Fields
	public int value__; // 0x0
	public const JsonContainerType None = 0;
	public const JsonContainerType Object = 1;
	public const JsonContainerType Array = 2;
	public const JsonContainerType Constructor = 3;
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
internal struct JsonPosition // TypeDefIndex: 4162
{
	// Fields
	private static readonly char[] SpecialCharacters; // 0x0
	internal JsonContainerType Type; // 0x0
	internal int Position; // 0x4
	[Nullable(2)]
	internal string PropertyName; // 0x8
	internal bool HasIndex; // 0x10

	// Methods

	// RVA: 0xEC9004 Offset: 0xEC5004 VA: 0xEC9004
	public void .ctor(JsonContainerType type) { }

	// RVA: 0xEC9090 Offset: 0xEC5090 VA: 0xEC9090
	internal int CalculateLength() { }

	[NullableContext(2)]
	// RVA: 0xEC9124 Offset: 0xEC5124 VA: 0xEC9124
	internal void WriteTo(StringBuilder sb, ref StringWriter writer, ref char[] buffer) { }

	// RVA: 0xEC9080 Offset: 0xEC5080 VA: 0xEC9080
	internal static bool TypeHasIndex(JsonContainerType type) { }

	// RVA: 0xEC9330 Offset: 0xEC5330 VA: 0xEC9330
	internal static string BuildPath(List<JsonPosition> positions, Nullable<JsonPosition> currentPosition) { }

	// RVA: 0xEC96DC Offset: 0xEC56DC VA: 0xEC96DC
	internal static string FormatMessage(IJsonLineInfo lineInfo, string path, string message) { }

	// RVA: 0xEC9A08 Offset: 0xEC5A08 VA: 0xEC9A08
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json
[Usage(2432, AllowMultiple = False)]
[Nullable(0)]
[NullableContext(2)]
public sealed class JsonPropertyAttribute : Attribute // TypeDefIndex: 4163
{
	// Fields
	internal Nullable<NullValueHandling> _nullValueHandling; // 0x10
	internal Nullable<DefaultValueHandling> _defaultValueHandling; // 0x18
	internal Nullable<ReferenceLoopHandling> _referenceLoopHandling; // 0x20
	internal Nullable<ObjectCreationHandling> _objectCreationHandling; // 0x28
	internal Nullable<TypeNameHandling> _typeNameHandling; // 0x30
	internal Nullable<bool> _isReference; // 0x38
	internal Nullable<int> _order; // 0x3C
	internal Nullable<Required> _required; // 0x44
	internal Nullable<bool> _itemIsReference; // 0x4C
	internal Nullable<ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x50
	internal Nullable<TypeNameHandling> _itemTypeNameHandling; // 0x58
	[CompilerGenerated]
	private Type <ItemConverterType>k__BackingField; // 0x60
	[CompilerGenerated]
	[Nullable(new[] { 2, 1 })]
	private object[] <ItemConverterParameters>k__BackingField; // 0x68
	[CompilerGenerated]
	private Type <NamingStrategyType>k__BackingField; // 0x70
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private object[] <NamingStrategyParameters>k__BackingField; // 0x78
	[CompilerGenerated]
	private string <PropertyName>k__BackingField; // 0x80

	// Properties
	public Type ItemConverterType { get; }
	[Nullable(new[] { 2, 1 })]
	public object[] ItemConverterParameters { get; }
	public Type NamingStrategyType { get; }
	[Nullable(new[] { 2, 1 })]
	public object[] NamingStrategyParameters { get; }
	public string PropertyName { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEC9A9C Offset: 0xEC5A9C VA: 0xEC9A9C
	public Type get_ItemConverterType() { }

	[CompilerGenerated]
	// RVA: 0xEC9AA4 Offset: 0xEC5AA4 VA: 0xEC9AA4
	public object[] get_ItemConverterParameters() { }

	[CompilerGenerated]
	// RVA: 0xEC9AAC Offset: 0xEC5AAC VA: 0xEC9AAC
	public Type get_NamingStrategyType() { }

	[CompilerGenerated]
	// RVA: 0xEC9AB4 Offset: 0xEC5AB4 VA: 0xEC9AB4
	public object[] get_NamingStrategyParameters() { }

	[CompilerGenerated]
	// RVA: 0xEC9ABC Offset: 0xEC5ABC VA: 0xEC9ABC
	public string get_PropertyName() { }
}


// Namespace: 
[NullableContext(0)]
protected internal enum JsonReader.State // TypeDefIndex: 4164
{
	// Fields
	public int value__; // 0x0
	public const JsonReader.State Start = 0;
	public const JsonReader.State Complete = 1;
	public const JsonReader.State Property = 2;
	public const JsonReader.State ObjectStart = 3;
	public const JsonReader.State Object = 4;
	public const JsonReader.State ArrayStart = 5;
	public const JsonReader.State Array = 6;
	public const JsonReader.State Closed = 7;
	public const JsonReader.State PostValue = 8;
	public const JsonReader.State ConstructorStart = 9;
	public const JsonReader.State Constructor = 10;
	public const JsonReader.State Error = 11;
	public const JsonReader.State Finished = 12;
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[NullableContext(2)]
public abstract class JsonReader : IDisposable // TypeDefIndex: 4165
{
	// Fields
	private JsonToken _tokenType; // 0x10
	private object _value; // 0x18
	internal char _quoteChar; // 0x20
	internal JsonReader.State _currentState; // 0x24
	private JsonPosition _currentPosition; // 0x28
	private CultureInfo _culture; // 0x40
	private DateTimeZoneHandling _dateTimeZoneHandling; // 0x48
	private Nullable<int> _maxDepth; // 0x4C
	private bool _hasExceededMaxDepth; // 0x54
	internal DateParseHandling _dateParseHandling; // 0x58
	internal FloatParseHandling _floatParseHandling; // 0x5C
	private string _dateFormatString; // 0x60
	private List<JsonPosition> _stack; // 0x68
	[CompilerGenerated]
	private bool <CloseInput>k__BackingField; // 0x70
	[CompilerGenerated]
	private bool <SupportMultipleContent>k__BackingField; // 0x71

	// Properties
	protected JsonReader.State CurrentState { get; }
	public bool CloseInput { get; set; }
	public bool SupportMultipleContent { get; set; }
	public DateTimeZoneHandling DateTimeZoneHandling { get; set; }
	public DateParseHandling DateParseHandling { get; set; }
	public FloatParseHandling FloatParseHandling { get; set; }
	public string DateFormatString { get; set; }
	public Nullable<int> MaxDepth { get; set; }
	public virtual JsonToken TokenType { get; }
	public virtual object Value { get; }
	public virtual Type ValueType { get; }
	public virtual int Depth { get; }
	[Nullable(1)]
	public virtual string Path { get; }
	[Nullable(1)]
	public CultureInfo Culture { get; set; }

	// Methods

	// RVA: 0xEC9AC4 Offset: 0xEC5AC4 VA: 0xEC9AC4
	protected JsonReader.State get_CurrentState() { }

	[CompilerGenerated]
	// RVA: 0xEC9ACC Offset: 0xEC5ACC VA: 0xEC9ACC
	public bool get_CloseInput() { }

	[CompilerGenerated]
	// RVA: 0xEC9AD4 Offset: 0xEC5AD4 VA: 0xEC9AD4
	public void set_CloseInput(bool value) { }

	[CompilerGenerated]
	// RVA: 0xEC9AE0 Offset: 0xEC5AE0 VA: 0xEC9AE0
	public bool get_SupportMultipleContent() { }

	[CompilerGenerated]
	// RVA: 0xEC9AE8 Offset: 0xEC5AE8 VA: 0xEC9AE8
	public void set_SupportMultipleContent(bool value) { }

	// RVA: 0xEC9AF4 Offset: 0xEC5AF4 VA: 0xEC9AF4
	public DateTimeZoneHandling get_DateTimeZoneHandling() { }

	// RVA: 0xEC9AFC Offset: 0xEC5AFC VA: 0xEC9AFC
	public void set_DateTimeZoneHandling(DateTimeZoneHandling value) { }

	// RVA: 0xEC9B5C Offset: 0xEC5B5C VA: 0xEC9B5C
	public DateParseHandling get_DateParseHandling() { }

	// RVA: 0xEC9B64 Offset: 0xEC5B64 VA: 0xEC9B64
	public void set_DateParseHandling(DateParseHandling value) { }

	// RVA: 0xEC9BC4 Offset: 0xEC5BC4 VA: 0xEC9BC4
	public FloatParseHandling get_FloatParseHandling() { }

	// RVA: 0xEC9BCC Offset: 0xEC5BCC VA: 0xEC9BCC
	public void set_FloatParseHandling(FloatParseHandling value) { }

	// RVA: 0xEC9C2C Offset: 0xEC5C2C VA: 0xEC9C2C
	public string get_DateFormatString() { }

	// RVA: 0xEC9C34 Offset: 0xEC5C34 VA: 0xEC9C34
	public void set_DateFormatString(string value) { }

	// RVA: 0xEC9C3C Offset: 0xEC5C3C VA: 0xEC9C3C
	public Nullable<int> get_MaxDepth() { }

	// RVA: 0xEC9C44 Offset: 0xEC5C44 VA: 0xEC9C44
	public void set_MaxDepth(Nullable<int> value) { }

	// RVA: 0xEC9D5C Offset: 0xEC5D5C VA: 0xEC9D5C Slot: 5
	public virtual JsonToken get_TokenType() { }

	// RVA: 0xEC9D64 Offset: 0xEC5D64 VA: 0xEC9D64 Slot: 6
	public virtual object get_Value() { }

	// RVA: 0xEC9D6C Offset: 0xEC5D6C VA: 0xEC9D6C Slot: 7
	public virtual Type get_ValueType() { }

	// RVA: 0xEC9D80 Offset: 0xEC5D80 VA: 0xEC9D80 Slot: 8
	public virtual int get_Depth() { }

	[NullableContext(1)]
	// RVA: 0xEC9DFC Offset: 0xEC5DFC VA: 0xEC9DFC Slot: 9
	public virtual string get_Path() { }

	[NullableContext(1)]
	// RVA: 0xEC9F14 Offset: 0xEC5F14 VA: 0xEC9F14
	public CultureInfo get_Culture() { }

	[NullableContext(1)]
	// RVA: 0xEC9F7C Offset: 0xEC5F7C VA: 0xEC9F7C
	public void set_Culture(CultureInfo value) { }

	// RVA: 0xEC9F84 Offset: 0xEC5F84 VA: 0xEC9F84
	internal JsonPosition GetPosition(int depth) { }

	// RVA: 0xECA028 Offset: 0xEC6028 VA: 0xECA028
	protected void .ctor() { }

	// RVA: 0xECA0C0 Offset: 0xEC60C0 VA: 0xECA0C0
	private void Push(JsonContainerType value) { }

	// RVA: 0xECA398 Offset: 0xEC6398 VA: 0xECA398
	private JsonContainerType Pop() { }

	// RVA: 0xECA538 Offset: 0xEC6538 VA: 0xECA538
	private JsonContainerType Peek() { }

	// RVA: -1 Offset: -1 Slot: 10
	public abstract bool Read();

	// RVA: 0xECA540 Offset: 0xEC6540 VA: 0xECA540 Slot: 11
	public virtual Nullable<int> ReadAsInt32() { }

	// RVA: 0xECAB50 Offset: 0xEC6B50 VA: 0xECAB50
	internal Nullable<int> ReadInt32String(string s) { }

	// RVA: 0xECAD38 Offset: 0xEC6D38 VA: 0xECAD38 Slot: 12
	public virtual string ReadAsString() { }

	// RVA: 0xECAFD8 Offset: 0xEC6FD8 VA: 0xECAFD8 Slot: 13
	public virtual byte[] ReadAsBytes() { }

	[NullableContext(1)]
	// RVA: 0xECB5BC Offset: 0xEC75BC VA: 0xECB5BC
	internal byte[] ReadArrayIntoByteArray() { }

	[NullableContext(1)]
	// RVA: 0xECB708 Offset: 0xEC7708 VA: 0xECB708
	private bool ReadArrayElementIntoByteArrayReportDone(List<byte> buffer) { }

	// RVA: 0xECB8C8 Offset: 0xEC78C8 VA: 0xECB8C8 Slot: 14
	public virtual Nullable<double> ReadAsDouble() { }

	// RVA: 0xECBBC8 Offset: 0xEC7BC8 VA: 0xECBBC8
	internal Nullable<double> ReadDoubleString(string s) { }

	// RVA: 0xECBDA8 Offset: 0xEC7DA8 VA: 0xECBDA8 Slot: 15
	public virtual Nullable<bool> ReadAsBoolean() { }

	// RVA: 0xECC0EC Offset: 0xEC80EC VA: 0xECC0EC
	internal Nullable<bool> ReadBooleanString(string s) { }

	// RVA: 0xECC2D4 Offset: 0xEC82D4 VA: 0xECC2D4 Slot: 16
	public virtual Nullable<Decimal> ReadAsDecimal() { }

	// RVA: 0xECC6E0 Offset: 0xEC86E0 VA: 0xECC6E0
	internal Nullable<Decimal> ReadDecimalString(string s) { }

	// RVA: 0xECC974 Offset: 0xEC8974 VA: 0xECC974 Slot: 17
	public virtual Nullable<DateTime> ReadAsDateTime() { }

	// RVA: 0xECCC1C Offset: 0xEC8C1C VA: 0xECCC1C
	internal Nullable<DateTime> ReadDateTimeString(string s) { }

	// RVA: 0xECCED0 Offset: 0xEC8ED0 VA: 0xECCED0 Slot: 18
	public virtual Nullable<DateTimeOffset> ReadAsDateTimeOffset() { }

	// RVA: 0xECD17C Offset: 0xEC917C VA: 0xECD17C
	internal Nullable<DateTimeOffset> ReadDateTimeOffsetString(string s) { }

	// RVA: 0xECB578 Offset: 0xEC7578 VA: 0xECB578
	internal void ReaderReadAndAssert() { }

	[NullableContext(1)]
	// RVA: 0xECD3F0 Offset: 0xEC93F0 VA: 0xECD3F0
	internal JsonReaderException CreateUnexpectedEndException() { }

	// RVA: 0xECB3AC Offset: 0xEC73AC VA: 0xECB3AC
	internal void ReadIntoWrappedTypeObject() { }

	// RVA: 0xECD43C Offset: 0xEC943C VA: 0xECD43C
	public void Skip() { }

	// RVA: 0xECB6FC Offset: 0xEC76FC VA: 0xECB6FC
	protected void SetToken(JsonToken newToken) { }

	// RVA: 0xECD4D4 Offset: 0xEC94D4 VA: 0xECD4D4
	protected void SetToken(JsonToken newToken, object value) { }

	// RVA: 0xECA9FC Offset: 0xEC69FC VA: 0xECA9FC
	protected void SetToken(JsonToken newToken, object value, bool updateIndex) { }

	// RVA: 0xECD5D8 Offset: 0xEC95D8 VA: 0xECD5D8
	internal void SetPostValueState(bool updateIndex) { }

	// RVA: 0xECA378 Offset: 0xEC6378 VA: 0xECA378
	private void UpdateScopeWithFinishedValue() { }

	// RVA: 0xECD4DC Offset: 0xEC94DC VA: 0xECD4DC
	private void ValidateEnd(JsonToken endToken) { }

	// RVA: 0xECD6E4 Offset: 0xEC96E4 VA: 0xECD6E4
	protected void SetStateBasedOnCurrent() { }

	// RVA: 0xECD614 Offset: 0xEC9614 VA: 0xECD614
	private void SetFinished() { }

	// RVA: 0xECD63C Offset: 0xEC963C VA: 0xECD63C
	private JsonContainerType GetTypeForCloseToken(JsonToken token) { }

	// RVA: 0xECD7D0 Offset: 0xEC97D0 VA: 0xECD7D0 Slot: 4
	private void System.IDisposable.Dispose() { }

	// RVA: 0xECD840 Offset: 0xEC9840 VA: 0xECD840 Slot: 19
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0xECD864 Offset: 0xEC9864 VA: 0xECD864 Slot: 20
	public virtual void Close() { }

	// RVA: 0xECD878 Offset: 0xEC9878 VA: 0xECD878
	internal void ReadAndAssert() { }

	// RVA: 0xECD8D4 Offset: 0xEC98D4 VA: 0xECD8D4
	internal void ReadForTypeAndAssert(JsonContract contract, bool hasConverter) { }

	// RVA: 0xECD924 Offset: 0xEC9924 VA: 0xECD924
	internal bool ReadForType(JsonContract contract, bool hasConverter) { }

	// RVA: 0xECDBA4 Offset: 0xEC9BA4 VA: 0xECDBA4
	internal bool ReadAndMoveToContent() { }

	// RVA: 0xECDBD4 Offset: 0xEC9BD4 VA: 0xECDBD4
	internal bool MoveToContent() { }

	// RVA: 0xECA904 Offset: 0xEC6904 VA: 0xECA904
	private JsonToken GetContentToken() { }
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[NullableContext(1)]
[Serializable]
public class JsonReaderException : JsonException // TypeDefIndex: 4166
{
	// Fields
	[CompilerGenerated]
	private readonly int <LineNumber>k__BackingField; // 0x8C
	[CompilerGenerated]
	private readonly int <LinePosition>k__BackingField; // 0x90
	[CompilerGenerated]
	[Nullable(2)]
	private readonly string <Path>k__BackingField; // 0x98

	// Methods

	// RVA: 0xECDC2C Offset: 0xEC9C2C VA: 0xECDC2C
	public void .ctor() { }

	// RVA: 0xECDC30 Offset: 0xEC9C30 VA: 0xECDC30
	public void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xECDC34 Offset: 0xEC9C34 VA: 0xECDC34
	public void .ctor(string message, string path, int lineNumber, int linePosition, Exception innerException) { }

	// RVA: 0xECA390 Offset: 0xEC6390 VA: 0xECA390
	internal static JsonReaderException Create(JsonReader reader, string message) { }

	// RVA: 0xECA978 Offset: 0xEC6978 VA: 0xECA978
	internal static JsonReaderException Create(JsonReader reader, string message, Exception ex) { }

	// RVA: 0xECDC70 Offset: 0xEC9C70 VA: 0xECDC70
	internal static JsonReaderException Create(IJsonLineInfo lineInfo, string path, string message, Exception ex) { }
}


// Namespace: Newtonsoft.Json
[Usage(384, AllowMultiple = False)]
public sealed class JsonRequiredAttribute : Attribute // TypeDefIndex: 4167
{
	// Methods

	// RVA: 0xECDE68 Offset: 0xEC9E68 VA: 0xECDE68
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[NullableContext(1)]
[Serializable]
public class JsonSerializationException : JsonException // TypeDefIndex: 4168
{
	// Fields
	[CompilerGenerated]
	private readonly int <LineNumber>k__BackingField; // 0x8C
	[CompilerGenerated]
	private readonly int <LinePosition>k__BackingField; // 0x90
	[Nullable(2)]
	[CompilerGenerated]
	private readonly string <Path>k__BackingField; // 0x98

	// Methods

	// RVA: 0xECDE70 Offset: 0xEC9E70 VA: 0xECDE70
	public void .ctor() { }

	// RVA: 0xECDE74 Offset: 0xEC9E74 VA: 0xECDE74
	public void .ctor(string message) { }

	// RVA: 0xECDE78 Offset: 0xEC9E78 VA: 0xECDE78
	public void .ctor(string message, Exception innerException) { }

	// RVA: 0xECDE7C Offset: 0xEC9E7C VA: 0xECDE7C
	public void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xECDE80 Offset: 0xEC9E80 VA: 0xECDE80
	public void .ctor(string message, string path, int lineNumber, int linePosition, Exception innerException) { }

	// RVA: 0xECD8CC Offset: 0xEC98CC VA: 0xECD8CC
	internal static JsonSerializationException Create(JsonReader reader, string message) { }

	// RVA: 0xECDEBC Offset: 0xEC9EBC VA: 0xECDEBC
	internal static JsonSerializationException Create(JsonReader reader, string message, Exception ex) { }

	// RVA: 0xECDF40 Offset: 0xEC9F40 VA: 0xECDF40
	internal static JsonSerializationException Create(IJsonLineInfo lineInfo, string path, string message, Exception ex) { }
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[NullableContext(1)]
public class JsonSerializer // TypeDefIndex: 4169
{
	// Fields
	internal TypeNameHandling _typeNameHandling; // 0x10
	internal TypeNameAssemblyFormatHandling _typeNameAssemblyFormatHandling; // 0x14
	internal PreserveReferencesHandling _preserveReferencesHandling; // 0x18
	internal ReferenceLoopHandling _referenceLoopHandling; // 0x1C
	internal MissingMemberHandling _missingMemberHandling; // 0x20
	internal ObjectCreationHandling _objectCreationHandling; // 0x24
	internal NullValueHandling _nullValueHandling; // 0x28
	internal DefaultValueHandling _defaultValueHandling; // 0x2C
	internal ConstructorHandling _constructorHandling; // 0x30
	internal MetadataPropertyHandling _metadataPropertyHandling; // 0x34
	[Nullable(2)]
	internal JsonConverterCollection _converters; // 0x38
	internal IContractResolver _contractResolver; // 0x40
	[Nullable(2)]
	internal ITraceWriter _traceWriter; // 0x48
	[Nullable(2)]
	internal IEqualityComparer _equalityComparer; // 0x50
	internal ISerializationBinder _serializationBinder; // 0x58
	internal StreamingContext _context; // 0x60
	[Nullable(2)]
	private IReferenceResolver _referenceResolver; // 0x70
	private Nullable<Formatting> _formatting; // 0x78
	private Nullable<DateFormatHandling> _dateFormatHandling; // 0x80
	private Nullable<DateTimeZoneHandling> _dateTimeZoneHandling; // 0x88
	private Nullable<DateParseHandling> _dateParseHandling; // 0x90
	private Nullable<FloatFormatHandling> _floatFormatHandling; // 0x98
	private Nullable<FloatParseHandling> _floatParseHandling; // 0xA0
	private Nullable<StringEscapeHandling> _stringEscapeHandling; // 0xA8
	private CultureInfo _culture; // 0xB0
	private Nullable<int> _maxDepth; // 0xB8
	private bool _maxDepthSet; // 0xC0
	private Nullable<bool> _checkAdditionalContent; // 0xC1
	[Nullable(2)]
	private string _dateFormatString; // 0xC8
	private bool _dateFormatStringSet; // 0xD0
	[CompilerGenerated]
	[Nullable(new[] { 2, 1 })]
	private EventHandler<ErrorEventArgs> Error; // 0xD8

	// Properties
	[Nullable(2)]
	public virtual IReferenceResolver ReferenceResolver { set; }
	public virtual ISerializationBinder SerializationBinder { set; }
	[Nullable(2)]
	public virtual ITraceWriter TraceWriter { get; set; }
	[Nullable(2)]
	public virtual IEqualityComparer EqualityComparer { set; }
	public virtual TypeNameHandling TypeNameHandling { set; }
	public virtual TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling { set; }
	public virtual PreserveReferencesHandling PreserveReferencesHandling { set; }
	public virtual ReferenceLoopHandling ReferenceLoopHandling { set; }
	public virtual MissingMemberHandling MissingMemberHandling { set; }
	public virtual NullValueHandling NullValueHandling { get; set; }
	public virtual DefaultValueHandling DefaultValueHandling { set; }
	public virtual ObjectCreationHandling ObjectCreationHandling { set; }
	public virtual ConstructorHandling ConstructorHandling { set; }
	public virtual MetadataPropertyHandling MetadataPropertyHandling { get; set; }
	public virtual JsonConverterCollection Converters { get; }
	public virtual IContractResolver ContractResolver { get; set; }
	public virtual StreamingContext Context { get; set; }
	public virtual Nullable<int> MaxDepth { get; }
	public virtual bool CheckAdditionalContent { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xECE138 Offset: 0xECA138 VA: 0xECE138 Slot: 4
	public virtual void add_Error(EventHandler<ErrorEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0xECE1E8 Offset: 0xECA1E8 VA: 0xECE1E8 Slot: 5
	public virtual void remove_Error(EventHandler<ErrorEventArgs> value) { }

	[NullableContext(2)]
	// RVA: 0xECE298 Offset: 0xECA298 VA: 0xECE298 Slot: 6
	public virtual void set_ReferenceResolver(IReferenceResolver value) { }

	// RVA: 0xECE310 Offset: 0xECA310 VA: 0xECE310 Slot: 7
	public virtual void set_SerializationBinder(ISerializationBinder value) { }

	[NullableContext(2)]
	// RVA: 0xECE388 Offset: 0xECA388 VA: 0xECE388 Slot: 8
	public virtual ITraceWriter get_TraceWriter() { }

	[NullableContext(2)]
	// RVA: 0xECE390 Offset: 0xECA390 VA: 0xECE390 Slot: 9
	public virtual void set_TraceWriter(ITraceWriter value) { }

	[NullableContext(2)]
	// RVA: 0xECE398 Offset: 0xECA398 VA: 0xECE398 Slot: 10
	public virtual void set_EqualityComparer(IEqualityComparer value) { }

	// RVA: 0xECE3A0 Offset: 0xECA3A0 VA: 0xECE3A0 Slot: 11
	public virtual void set_TypeNameHandling(TypeNameHandling value) { }

	// RVA: 0xECE400 Offset: 0xECA400 VA: 0xECE400 Slot: 12
	public virtual void set_TypeNameAssemblyFormatHandling(TypeNameAssemblyFormatHandling value) { }

	// RVA: 0xECE460 Offset: 0xECA460 VA: 0xECE460 Slot: 13
	public virtual void set_PreserveReferencesHandling(PreserveReferencesHandling value) { }

	// RVA: 0xECE4C0 Offset: 0xECA4C0 VA: 0xECE4C0 Slot: 14
	public virtual void set_ReferenceLoopHandling(ReferenceLoopHandling value) { }

	// RVA: 0xECE520 Offset: 0xECA520 VA: 0xECE520 Slot: 15
	public virtual void set_MissingMemberHandling(MissingMemberHandling value) { }

	// RVA: 0xECE580 Offset: 0xECA580 VA: 0xECE580 Slot: 16
	public virtual NullValueHandling get_NullValueHandling() { }

	// RVA: 0xECE588 Offset: 0xECA588 VA: 0xECE588 Slot: 17
	public virtual void set_NullValueHandling(NullValueHandling value) { }

	// RVA: 0xECE5E8 Offset: 0xECA5E8 VA: 0xECE5E8 Slot: 18
	public virtual void set_DefaultValueHandling(DefaultValueHandling value) { }

	// RVA: 0xECE648 Offset: 0xECA648 VA: 0xECE648 Slot: 19
	public virtual void set_ObjectCreationHandling(ObjectCreationHandling value) { }

	// RVA: 0xECE6A8 Offset: 0xECA6A8 VA: 0xECE6A8 Slot: 20
	public virtual void set_ConstructorHandling(ConstructorHandling value) { }

	// RVA: 0xECE708 Offset: 0xECA708 VA: 0xECE708 Slot: 21
	public virtual MetadataPropertyHandling get_MetadataPropertyHandling() { }

	// RVA: 0xECE710 Offset: 0xECA710 VA: 0xECE710 Slot: 22
	public virtual void set_MetadataPropertyHandling(MetadataPropertyHandling value) { }

	// RVA: 0xECE770 Offset: 0xECA770 VA: 0xECE770 Slot: 23
	public virtual JsonConverterCollection get_Converters() { }

	// RVA: 0xECE7D0 Offset: 0xECA7D0 VA: 0xECE7D0 Slot: 24
	public virtual IContractResolver get_ContractResolver() { }

	// RVA: 0xECE7D8 Offset: 0xECA7D8 VA: 0xECE7D8 Slot: 25
	public virtual void set_ContractResolver(IContractResolver value) { }

	// RVA: 0xECE880 Offset: 0xECA880 VA: 0xECE880 Slot: 26
	public virtual StreamingContext get_Context() { }

	// RVA: 0xECE88C Offset: 0xECA88C VA: 0xECE88C Slot: 27
	public virtual void set_Context(StreamingContext value) { }

	// RVA: 0xECE894 Offset: 0xECA894 VA: 0xECE894 Slot: 28
	public virtual Nullable<int> get_MaxDepth() { }

	// RVA: 0xECE89C Offset: 0xECA89C VA: 0xECE89C Slot: 29
	public virtual bool get_CheckAdditionalContent() { }

	// RVA: 0xECE8F8 Offset: 0xECA8F8 VA: 0xECE8F8
	public void .ctor() { }

	// RVA: 0xECEA28 Offset: 0xECAA28 VA: 0xECEA28
	public static JsonSerializer Create() { }

	// RVA: 0xECEA78 Offset: 0xECAA78 VA: 0xECEA78
	public static JsonSerializer Create(JsonSerializerSettings settings) { }

	// RVA: 0xECF490 Offset: 0xECB490 VA: 0xECF490
	public static JsonSerializer CreateDefault() { }

	// RVA: 0xECEAAC Offset: 0xECAAAC VA: 0xECEAAC
	private static void ApplySerializerSettings(JsonSerializer serializer, JsonSerializerSettings settings) { }

	[DebuggerStepThrough]
	// RVA: 0xECF9BC Offset: 0xECB9BC VA: 0xECF9BC
	public void Populate(JsonReader reader, object target) { }

	// RVA: 0xECF9CC Offset: 0xECB9CC VA: 0xECF9CC Slot: 30
	internal virtual void PopulateInternal(JsonReader reader, object target) { }

	[NullableContext(2)]
	[DebuggerStepThrough]
	// RVA: -1 Offset: -1
	public T Deserialize<T>(JsonReader reader) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8DF48 Offset: 0xB89F48 VA: 0xB8DF48
	|-JsonSerializer.Deserialize<__Il2CppFullySharedGenericType>
	*/

	[DebuggerStepThrough]
	[NullableContext(2)]
	// RVA: 0xED0580 Offset: 0xECC580 VA: 0xED0580
	public object Deserialize(JsonReader reader, Type objectType) { }

	[NullableContext(2)]
	// RVA: 0xED0590 Offset: 0xECC590 VA: 0xED0590 Slot: 31
	internal virtual object DeserializeInternal(JsonReader reader, Type objectType) { }

	[NullableContext(2)]
	// RVA: 0xECFC44 Offset: 0xECBC44 VA: 0xECFC44
	internal void SetupReader(JsonReader reader, out CultureInfo previousCulture, out Nullable<DateTimeZoneHandling> previousDateTimeZoneHandling, out Nullable<DateParseHandling> previousDateParseHandling, out Nullable<FloatParseHandling> previousFloatParseHandling, out Nullable<int> previousMaxDepth, out string previousDateFormatString) { }

	[NullableContext(2)]
	// RVA: 0xED02C8 Offset: 0xECC2C8 VA: 0xED02C8
	private void ResetReader(JsonReader reader, CultureInfo previousCulture, Nullable<DateTimeZoneHandling> previousDateTimeZoneHandling, Nullable<DateParseHandling> previousDateParseHandling, Nullable<FloatParseHandling> previousFloatParseHandling, Nullable<int> previousMaxDepth, string previousDateFormatString) { }

	[NullableContext(2)]
	// RVA: 0xED0810 Offset: 0xECC810 VA: 0xED0810
	public void Serialize(JsonWriter jsonWriter, object value, Type objectType) { }

	// RVA: 0xED0820 Offset: 0xECC820 VA: 0xED0820
	public void Serialize(JsonWriter jsonWriter, object value) { }

	// RVA: 0xED0240 Offset: 0xECC240 VA: 0xED0240
	private TraceJsonReader CreateTraceJsonReader(JsonReader reader) { }

	[NullableContext(2)]
	// RVA: 0xED0834 Offset: 0xECC834 VA: 0xED0834 Slot: 32
	internal virtual void SerializeInternal(JsonWriter jsonWriter, object value, Type objectType) { }

	// RVA: 0xED147C Offset: 0xECD47C VA: 0xED147C
	internal IReferenceResolver GetReferenceResolver() { }

	// RVA: 0xED14E0 Offset: 0xECD4E0 VA: 0xED14E0
	internal JsonConverter GetMatchingConverter(Type type) { }

	// RVA: 0xED14E8 Offset: 0xECD4E8 VA: 0xED14E8
	internal static JsonConverter GetMatchingConverter(IList<JsonConverter> converters, Type objectType) { }

	// RVA: 0xED1644 Offset: 0xECD644 VA: 0xED1644
	internal void OnError(ErrorEventArgs e) { }
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[NullableContext(2)]
public class JsonSerializerSettings // TypeDefIndex: 4170
{
	// Fields
	internal static readonly StreamingContext DefaultContext; // 0x0
	[Nullable(1)]
	internal static readonly CultureInfo DefaultCulture; // 0x10
	internal Nullable<Formatting> _formatting; // 0x10
	internal Nullable<DateFormatHandling> _dateFormatHandling; // 0x18
	internal Nullable<DateTimeZoneHandling> _dateTimeZoneHandling; // 0x20
	internal Nullable<DateParseHandling> _dateParseHandling; // 0x28
	internal Nullable<FloatFormatHandling> _floatFormatHandling; // 0x30
	internal Nullable<FloatParseHandling> _floatParseHandling; // 0x38
	internal Nullable<StringEscapeHandling> _stringEscapeHandling; // 0x40
	internal CultureInfo _culture; // 0x48
	internal Nullable<bool> _checkAdditionalContent; // 0x50
	internal Nullable<int> _maxDepth; // 0x54
	internal bool _maxDepthSet; // 0x5C
	internal string _dateFormatString; // 0x60
	internal bool _dateFormatStringSet; // 0x68
	internal Nullable<TypeNameAssemblyFormatHandling> _typeNameAssemblyFormatHandling; // 0x6C
	internal Nullable<DefaultValueHandling> _defaultValueHandling; // 0x74
	internal Nullable<PreserveReferencesHandling> _preserveReferencesHandling; // 0x7C
	internal Nullable<NullValueHandling> _nullValueHandling; // 0x84
	internal Nullable<ObjectCreationHandling> _objectCreationHandling; // 0x8C
	internal Nullable<MissingMemberHandling> _missingMemberHandling; // 0x94
	internal Nullable<ReferenceLoopHandling> _referenceLoopHandling; // 0x9C
	internal Nullable<StreamingContext> _context; // 0xA8
	internal Nullable<ConstructorHandling> _constructorHandling; // 0xC0
	internal Nullable<TypeNameHandling> _typeNameHandling; // 0xC8
	internal Nullable<MetadataPropertyHandling> _metadataPropertyHandling; // 0xD0
	[CompilerGenerated]
	[Nullable(1)]
	private IList<JsonConverter> <Converters>k__BackingField; // 0xD8
	[CompilerGenerated]
	private IContractResolver <ContractResolver>k__BackingField; // 0xE0
	[CompilerGenerated]
	private IEqualityComparer <EqualityComparer>k__BackingField; // 0xE8
	[CompilerGenerated]
	private Func<IReferenceResolver> <ReferenceResolverProvider>k__BackingField; // 0xF0
	[CompilerGenerated]
	private ITraceWriter <TraceWriter>k__BackingField; // 0xF8
	[CompilerGenerated]
	private ISerializationBinder <SerializationBinder>k__BackingField; // 0x100
	[CompilerGenerated]
	[Nullable(new[] { 2, 1 })]
	private EventHandler<ErrorEventArgs> <Error>k__BackingField; // 0x108

	// Properties
	public ReferenceLoopHandling ReferenceLoopHandling { get; }
	public MissingMemberHandling MissingMemberHandling { get; }
	public ObjectCreationHandling ObjectCreationHandling { get; }
	public NullValueHandling NullValueHandling { get; }
	public DefaultValueHandling DefaultValueHandling { get; }
	[Nullable(1)]
	public IList<JsonConverter> Converters { get; }
	public PreserveReferencesHandling PreserveReferencesHandling { get; }
	public TypeNameHandling TypeNameHandling { get; }
	public MetadataPropertyHandling MetadataPropertyHandling { get; }
	public TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling { get; }
	public ConstructorHandling ConstructorHandling { get; }
	public IContractResolver ContractResolver { get; }
	public IEqualityComparer EqualityComparer { get; }
	public Func<IReferenceResolver> ReferenceResolverProvider { get; }
	public ITraceWriter TraceWriter { get; }
	public ISerializationBinder SerializationBinder { get; }
	[Nullable(new[] { 2, 1 })]
	public EventHandler<ErrorEventArgs> Error { get; }
	public StreamingContext Context { get; }

	// Methods

	// RVA: 0xECF6B0 Offset: 0xECB6B0 VA: 0xECF6B0
	public ReferenceLoopHandling get_ReferenceLoopHandling() { }

	// RVA: 0xECF70C Offset: 0xECB70C VA: 0xECF70C
	public MissingMemberHandling get_MissingMemberHandling() { }

	// RVA: 0xECF768 Offset: 0xECB768 VA: 0xECF768
	public ObjectCreationHandling get_ObjectCreationHandling() { }

	// RVA: 0xECF7C4 Offset: 0xECB7C4 VA: 0xECF7C4
	public NullValueHandling get_NullValueHandling() { }

	// RVA: 0xECF820 Offset: 0xECB820 VA: 0xECF820
	public DefaultValueHandling get_DefaultValueHandling() { }

	[NullableContext(1)]
	[CompilerGenerated]
	// RVA: 0xED166C Offset: 0xECD66C VA: 0xED166C
	public IList<JsonConverter> get_Converters() { }

	// RVA: 0xECF654 Offset: 0xECB654 VA: 0xECF654
	public PreserveReferencesHandling get_PreserveReferencesHandling() { }

	// RVA: 0xECF540 Offset: 0xECB540 VA: 0xECF540
	public TypeNameHandling get_TypeNameHandling() { }

	// RVA: 0xECF59C Offset: 0xECB59C VA: 0xECF59C
	public MetadataPropertyHandling get_MetadataPropertyHandling() { }

	// RVA: 0xECF5F8 Offset: 0xECB5F8 VA: 0xECF5F8
	public TypeNameAssemblyFormatHandling get_TypeNameAssemblyFormatHandling() { }

	// RVA: 0xECF87C Offset: 0xECB87C VA: 0xECF87C
	public ConstructorHandling get_ConstructorHandling() { }

	[CompilerGenerated]
	// RVA: 0xED1674 Offset: 0xECD674 VA: 0xED1674
	public IContractResolver get_ContractResolver() { }

	[CompilerGenerated]
	// RVA: 0xED167C Offset: 0xECD67C VA: 0xED167C
	public IEqualityComparer get_EqualityComparer() { }

	[CompilerGenerated]
	// RVA: 0xED1684 Offset: 0xECD684 VA: 0xED1684
	public Func<IReferenceResolver> get_ReferenceResolverProvider() { }

	[CompilerGenerated]
	// RVA: 0xED168C Offset: 0xECD68C VA: 0xED168C
	public ITraceWriter get_TraceWriter() { }

	[CompilerGenerated]
	// RVA: 0xED1694 Offset: 0xECD694 VA: 0xED1694
	public ISerializationBinder get_SerializationBinder() { }

	[CompilerGenerated]
	// RVA: 0xED169C Offset: 0xECD69C VA: 0xED169C
	public EventHandler<ErrorEventArgs> get_Error() { }

	// RVA: 0xECF8D8 Offset: 0xECB8D8 VA: 0xECF8D8
	public StreamingContext get_Context() { }

	// RVA: 0xED16A4 Offset: 0xECD6A4 VA: 0xED16A4
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json
[Nullable(0)]
[NullableContext(1)]
public class JsonTextReader : JsonReader, IJsonLineInfo // TypeDefIndex: 4171
{
	// Fields
	private readonly bool _safeAsync; // 0x72
	private readonly TextReader _reader; // 0x78
	[Nullable(2)]
	private char[] _chars; // 0x80
	private int _charsUsed; // 0x88
	private int _charPos; // 0x8C
	private int _lineStartPos; // 0x90
	private int _lineNumber; // 0x94
	private bool _isEndOfFile; // 0x98
	private StringBuffer _stringBuffer; // 0xA0
	private StringReference _stringReference; // 0xB0
	[Nullable(2)]
	private IArrayPool<char> _arrayPool; // 0xC0
	[Nullable(2)]
	[CompilerGenerated]
	private JsonNameTable <PropertyNameTable>k__BackingField; // 0xC8

	// Properties
	[Nullable(2)]
	public JsonNameTable PropertyNameTable { get; set; }
	public int LineNumber { get; }
	public int LinePosition { get; }

	// Methods

	// RVA: 0xED1724 Offset: 0xECD724 VA: 0xED1724
	public void .ctor(TextReader reader) { }

	[CompilerGenerated]
	[NullableContext(2)]
	// RVA: 0xED1830 Offset: 0xECD830 VA: 0xED1830
	public JsonNameTable get_PropertyNameTable() { }

	[NullableContext(2)]
	[CompilerGenerated]
	// RVA: 0xED1838 Offset: 0xECD838 VA: 0xED1838
	public void set_PropertyNameTable(JsonNameTable value) { }

	// RVA: 0xED1840 Offset: 0xECD840 VA: 0xED1840
	private void EnsureBufferNotEmpty() { }

	// RVA: 0xED1894 Offset: 0xECD894 VA: 0xED1894
	private void SetNewLine(bool hasNextChar) { }

	// RVA: 0xED18F4 Offset: 0xECD8F4 VA: 0xED18F4
	private void OnNewLine(int pos) { }

	// RVA: 0xED1904 Offset: 0xECD904 VA: 0xED1904
	private void ParseString(char quote, ReadType readType) { }

	// RVA: 0xED1E6C Offset: 0xECDE6C VA: 0xED1E6C
	private void ParseReadString(char quote, ReadType readType) { }

	// RVA: 0xED2264 Offset: 0xECE264 VA: 0xED2264
	private static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count) { }

	// RVA: 0xED194C Offset: 0xECD94C VA: 0xED194C
	private void ShiftBufferIfNeeded() { }

	// RVA: 0xED2278 Offset: 0xECE278 VA: 0xED2278
	private int ReadData(bool append) { }

	// RVA: 0xED2314 Offset: 0xECE314 VA: 0xED2314
	private void PrepareBufferForReadData(bool append, int charsRequired) { }

	// RVA: 0xED2284 Offset: 0xECE284 VA: 0xED2284
	private int ReadData(bool append, int charsRequired) { }

	// RVA: 0xED24AC Offset: 0xECE4AC VA: 0xED24AC
	private bool EnsureChars(int relativePosition, bool append) { }

	// RVA: 0xED24CC Offset: 0xECE4CC VA: 0xED24CC
	private bool ReadChars(int relativePosition, bool append) { }

	// RVA: 0xED253C Offset: 0xECE53C VA: 0xED253C Slot: 10
	public override bool Read() { }

	// RVA: 0xED33A4 Offset: 0xECF3A4 VA: 0xED33A4 Slot: 11
	public override Nullable<int> ReadAsInt32() { }

	// RVA: 0xED3800 Offset: 0xECF800 VA: 0xED3800 Slot: 17
	public override Nullable<DateTime> ReadAsDateTime() { }

	[NullableContext(2)]
	// RVA: 0xED3D48 Offset: 0xECFD48 VA: 0xED3D48 Slot: 12
	public override string ReadAsString() { }

	[NullableContext(2)]
	// RVA: 0xED3DAC Offset: 0xECFDAC VA: 0xED3DAC Slot: 13
	public override byte[] ReadAsBytes() { }

	[NullableContext(2)]
	// RVA: 0xED3890 Offset: 0xECF890 VA: 0xED3890
	private object ReadStringValue(ReadType readType) { }

	[NullableContext(2)]
	// RVA: 0xED4650 Offset: 0xED0650 VA: 0xED4650
	private object FinishReadQuotedStringValue(ReadType readType) { }

	// RVA: 0xED43D0 Offset: 0xED03D0 VA: 0xED43D0
	private JsonReaderException CreateUnexpectedCharacterException(char c) { }

	// RVA: 0xED4B1C Offset: 0xED0B1C VA: 0xED4B1C Slot: 15
	public override Nullable<bool> ReadAsBoolean() { }

	// RVA: 0xED4364 Offset: 0xED0364 VA: 0xED4364
	private void ProcessValueComma() { }

	[NullableContext(2)]
	// RVA: 0xED3434 Offset: 0xECF434 VA: 0xED3434
	private object ReadNumberValue(ReadType readType) { }

	[NullableContext(2)]
	// RVA: 0xED509C Offset: 0xED109C VA: 0xED509C
	private object FinishReadQuotedNumber(ReadType readType) { }

	// RVA: 0xED5224 Offset: 0xED1224 VA: 0xED5224 Slot: 18
	public override Nullable<DateTimeOffset> ReadAsDateTimeOffset() { }

	// RVA: 0xED52F0 Offset: 0xED12F0 VA: 0xED52F0 Slot: 16
	public override Nullable<Decimal> ReadAsDecimal() { }

	// RVA: 0xED53BC Offset: 0xED13BC VA: 0xED53BC Slot: 14
	public override Nullable<double> ReadAsDouble() { }

	// RVA: 0xED4294 Offset: 0xED0294 VA: 0xED4294
	private void HandleNull() { }

	// RVA: 0xED4504 Offset: 0xED0504 VA: 0xED4504
	private void ReadFinished() { }

	// RVA: 0xED4244 Offset: 0xED0244 VA: 0xED4244
	private bool ReadNullChar() { }

	// RVA: 0xED2768 Offset: 0xECE768 VA: 0xED2768
	private void EnsureBuffer() { }

	// RVA: 0xED1A00 Offset: 0xECDA00 VA: 0xED1A00
	private void ReadStringIntoBuffer(char quote) { }

	// RVA: 0xED55AC Offset: 0xED15AC VA: 0xED55AC
	private void FinishReadStringIntoBuffer(int charPos, int initialPosition, int lastWritePosition) { }

	// RVA: 0xED555C Offset: 0xED155C VA: 0xED555C
	private void WriteCharToBuffer(char writeChar, int lastWritePosition, int writeToPosition) { }

	// RVA: 0xED5644 Offset: 0xED1644 VA: 0xED5644
	private char ConvertUnicode(bool enoughChars) { }

	// RVA: 0xED551C Offset: 0xED151C VA: 0xED551C
	private char ParseUnicode() { }

	// RVA: 0xED5798 Offset: 0xED1798 VA: 0xED5798
	private void ReadNumberIntoBuffer() { }

	// RVA: 0xED581C Offset: 0xED181C VA: 0xED581C
	private bool ReadNumberCharIntoBuffer(char currentChar, int charPos) { }

	// RVA: 0xED5998 Offset: 0xED1998 VA: 0xED5998
	private void ClearRecentString() { }

	// RVA: 0xED2D5C Offset: 0xECED5C VA: 0xED2D5C
	private bool ParsePostValue(bool ignoreComments) { }

	// RVA: 0xED2BCC Offset: 0xECEBCC VA: 0xED2BCC
	private bool ParseObject() { }

	// RVA: 0xED59A4 Offset: 0xED19A4 VA: 0xED59A4
	private bool ParseProperty() { }

	// RVA: 0xED5BC8 Offset: 0xED1BC8 VA: 0xED5BC8
	private bool ValidIdentifierChar(char value) { }

	// RVA: 0xED5C44 Offset: 0xED1C44 VA: 0xED5C44
	private void ParseUnquotedProperty() { }

	// RVA: 0xED5D38 Offset: 0xED1D38 VA: 0xED5D38
	private bool ReadUnquotedPropertyReportIfDone(char currentChar, int initialPosition) { }

	// RVA: 0xED27AC Offset: 0xECE7AC VA: 0xED27AC
	private bool ParseValue() { }

	// RVA: 0xED44E8 Offset: 0xED04E8 VA: 0xED44E8
	private void ProcessLineFeed() { }

	// RVA: 0xED44A0 Offset: 0xED04A0 VA: 0xED44A0
	private void ProcessCarriageReturn(bool append) { }

	// RVA: 0xED3004 Offset: 0xECF004 VA: 0xED3004
	private void EatWhitespace() { }

	// RVA: 0xED6038 Offset: 0xED2038 VA: 0xED6038
	private void ParseConstructor() { }

	// RVA: 0xED4918 Offset: 0xED0918 VA: 0xED4918
	private void ParseNumber(ReadType readType) { }

	// RVA: 0xED6404 Offset: 0xED2404 VA: 0xED6404
	private void ParseReadNumber(ReadType readType, char firstChar, int initialPosition) { }

	// RVA: 0xED73D0 Offset: 0xED33D0 VA: 0xED73D0
	private JsonReaderException ThrowReaderError(string message, Exception ex) { }

	// RVA: 0xED744C Offset: 0xED344C VA: 0xED744C
	private static object BigIntegerParse(string number, CultureInfo culture) { }

	// RVA: 0xED3118 Offset: 0xECF118 VA: 0xED3118
	private void ParseComment(bool setToken) { }

	// RVA: 0xED74D4 Offset: 0xED34D4 VA: 0xED74D4
	private void EndComment(bool setToken, int initialPosition, int endPosition) { }

	// RVA: 0xED7534 Offset: 0xED3534 VA: 0xED7534
	private bool MatchValue(string value) { }

	// RVA: 0xED7590 Offset: 0xED3590 VA: 0xED7590
	private bool MatchValue(bool enoughChars, string value) { }

	// RVA: 0xED4980 Offset: 0xED0980 VA: 0xED4980
	private bool MatchValueWithTrailingSeparator(string value) { }

	// RVA: 0xED7670 Offset: 0xED3670 VA: 0xED7670
	private bool IsSeparator(char c) { }

	// RVA: 0xED5E88 Offset: 0xED1E88 VA: 0xED5E88
	private void ParseTrue() { }

	// RVA: 0xED5470 Offset: 0xED1470 VA: 0xED5470
	private void ParseNull() { }

	// RVA: 0xED6358 Offset: 0xED2358 VA: 0xED6358
	private void ParseUndefined() { }

	// RVA: 0xED5F60 Offset: 0xED1F60 VA: 0xED5F60
	private void ParseFalse() { }

	// RVA: 0xED489C Offset: 0xED089C VA: 0xED489C
	private object ParseNumberNegativeInfinity(ReadType readType) { }

	// RVA: 0xED77C8 Offset: 0xED37C8 VA: 0xED77C8
	private object ParseNumberNegativeInfinity(ReadType readType, bool matched) { }

	// RVA: 0xED4A24 Offset: 0xED0A24 VA: 0xED4A24
	private object ParseNumberPositiveInfinity(ReadType readType) { }

	// RVA: 0xED791C Offset: 0xED391C VA: 0xED791C
	private object ParseNumberPositiveInfinity(ReadType readType, bool matched) { }

	// RVA: 0xED4AA0 Offset: 0xED0AA0 VA: 0xED4AA0
	private object ParseNumberNaN(ReadType readType) { }

	// RVA: 0xED7A70 Offset: 0xED3A70 VA: 0xED7A70
	private object ParseNumberNaN(ReadType readType, bool matched) { }

	// RVA: 0xED7BC4 Offset: 0xED3BC4 VA: 0xED7BC4 Slot: 20
	public override void Close() { }

	// RVA: 0xED7C24 Offset: 0xED3C24 VA: 0xED7C24 Slot: 21
	public bool HasLineInfo() { }

	// RVA: 0xED7C2C Offset: 0xED3C2C VA: 0xED7C2C Slot: 22
	public int get_LineNumber() { }

	// RVA: 0xED7C74 Offset: 0xED3C74 VA: 0xED7C74 Slot: 23
	public int get_LinePosition() { }
}


// Namespace: Newtonsoft.Json
internal enum ReadType // TypeDefIndex: 4172
{
	// Fields
	public int value__; // 0x0
	public const ReadType Read = 0;
	public const ReadType ReadAsInt32 = 1;
	public const ReadType ReadAsInt64 = 2;
	public const ReadType ReadAsBytes = 3;
	public const ReadType ReadAsString = 4;
	public const ReadType ReadAsDecimal = 5;
	public const ReadType ReadAsDateTime = 6;
	public const ReadType ReadAsDateTimeOffset = 7;
	public const ReadType ReadAsDouble = 8;
	public const ReadType ReadAsBoolean = 9;
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
public class JsonTextWriter : JsonWriter // TypeDefIndex: 4173
{
	// Fields
	private readonly bool _safeAsync; // 0x60
	private readonly TextWriter _writer; // 0x68
	[Nullable(2)]
	private Base64Encoder _base64Encoder; // 0x70
	private char _indentChar; // 0x78
	private int _indentation; // 0x7C
	private char _quoteChar; // 0x80
	private bool _quoteName; // 0x82
	[Nullable(2)]
	private bool[] _charEscapeFlags; // 0x88
	[Nullable(2)]
	private char[] _writeBuffer; // 0x90
	[Nullable(2)]
	private IArrayPool<char> _arrayPool; // 0x98
	[Nullable(2)]
	private char[] _indentChars; // 0xA0

	// Properties
	private Base64Encoder Base64Encoder { get; }
	public char QuoteChar { get; }

	// Methods

	// RVA: 0xED7C80 Offset: 0xED3C80 VA: 0xED7C80
	private Base64Encoder get_Base64Encoder() { }

	// RVA: 0xED7CEC Offset: 0xED3CEC VA: 0xED7CEC
	public char get_QuoteChar() { }

	// RVA: 0xED7CF4 Offset: 0xED3CF4 VA: 0xED7CF4
	public void .ctor(TextWriter textWriter) { }

	// RVA: 0xED7EF4 Offset: 0xED3EF4 VA: 0xED7EF4 Slot: 6
	public override void Close() { }

	// RVA: 0xED7F28 Offset: 0xED3F28 VA: 0xED7F28
	private void CloseBufferAndWriter() { }

	// RVA: 0xED7F70 Offset: 0xED3F70 VA: 0xED7F70 Slot: 7
	public override void WriteStartObject() { }

	// RVA: 0xED7FE4 Offset: 0xED3FE4 VA: 0xED7FE4 Slot: 9
	public override void WriteStartArray() { }

	// RVA: 0xED8018 Offset: 0xED4018 VA: 0xED8018 Slot: 11
	public override void WriteStartConstructor(string name) { }

	// RVA: 0xED80BC Offset: 0xED40BC VA: 0xED80BC Slot: 17
	protected override void WriteEnd(JsonToken token) { }

	// RVA: 0xED81AC Offset: 0xED41AC VA: 0xED81AC Slot: 13
	public override void WritePropertyName(string name) { }

	// RVA: 0xED82E0 Offset: 0xED42E0 VA: 0xED82E0 Slot: 14
	public override void WritePropertyName(string name, bool escape) { }

	// RVA: 0xED839C Offset: 0xED439C VA: 0xED839C Slot: 5
	internal override void OnStringEscapeHandlingChanged() { }

	// RVA: 0xED7E88 Offset: 0xED3E88 VA: 0xED7E88
	private void UpdateCharEscapeFlags() { }

	// RVA: 0xED83A0 Offset: 0xED43A0 VA: 0xED83A0 Slot: 18
	protected override void WriteIndent() { }

	// RVA: 0xED8514 Offset: 0xED4514 VA: 0xED8514
	private int SetIndentChars() { }

	// RVA: 0xED85F8 Offset: 0xED45F8 VA: 0xED85F8 Slot: 19
	protected override void WriteValueDelimiter() { }

	// RVA: 0xED861C Offset: 0xED461C VA: 0xED861C Slot: 20
	protected override void WriteIndentSpace() { }

	// RVA: 0xED8640 Offset: 0xED4640 VA: 0xED8640
	private void WriteValueInternal(string value, JsonToken token) { }

	[NullableContext(2)]
	// RVA: 0xED8664 Offset: 0xED4664 VA: 0xED8664 Slot: 62
	public override void WriteValue(object value) { }

	// RVA: 0xED88CC Offset: 0xED48CC VA: 0xED88CC Slot: 21
	public override void WriteNull() { }

	// RVA: 0xED8960 Offset: 0xED4960 VA: 0xED8960 Slot: 22
	public override void WriteUndefined() { }

	[NullableContext(2)]
	// RVA: 0xED89F4 Offset: 0xED49F4 VA: 0xED89F4 Slot: 23
	public override void WriteRaw(string json) { }

	[NullableContext(2)]
	// RVA: 0xED8A1C Offset: 0xED4A1C VA: 0xED8A1C Slot: 25
	public override void WriteValue(string value) { }

	// RVA: 0xED820C Offset: 0xED420C VA: 0xED820C
	private void WriteEscapedString(string value, bool quote) { }

	// RVA: 0xED8AFC Offset: 0xED4AFC VA: 0xED8AFC Slot: 26
	public override void WriteValue(int value) { }

	// RVA: 0xED8B88 Offset: 0xED4B88 VA: 0xED8B88 Slot: 27
	public override void WriteValue(uint value) { }

	// RVA: 0xED8C14 Offset: 0xED4C14 VA: 0xED8C14 Slot: 28
	public override void WriteValue(long value) { }

	// RVA: 0xED8C58 Offset: 0xED4C58 VA: 0xED8C58 Slot: 29
	public override void WriteValue(ulong value) { }

	// RVA: 0xED8D0C Offset: 0xED4D0C VA: 0xED8D0C Slot: 30
	public override void WriteValue(float value) { }

	// RVA: 0xED8DC4 Offset: 0xED4DC4 VA: 0xED8DC4 Slot: 47
	public override void WriteValue(Nullable<float> value) { }

	// RVA: 0xED8F0C Offset: 0xED4F0C VA: 0xED8F0C Slot: 31
	public override void WriteValue(double value) { }

	// RVA: 0xED8FC4 Offset: 0xED4FC4 VA: 0xED8FC4 Slot: 48
	public override void WriteValue(Nullable<double> value) { }

	// RVA: 0xED910C Offset: 0xED510C VA: 0xED910C Slot: 32
	public override void WriteValue(bool value) { }

	// RVA: 0xED91A8 Offset: 0xED51A8 VA: 0xED91A8 Slot: 33
	public override void WriteValue(short value) { }

	// RVA: 0xED91EC Offset: 0xED51EC VA: 0xED91EC Slot: 34
	public override void WriteValue(ushort value) { }

	// RVA: 0xED9230 Offset: 0xED5230 VA: 0xED9230 Slot: 35
	public override void WriteValue(char value) { }

	// RVA: 0xED92CC Offset: 0xED52CC VA: 0xED92CC Slot: 36
	public override void WriteValue(byte value) { }

	// RVA: 0xED9310 Offset: 0xED5310 VA: 0xED9310 Slot: 37
	public override void WriteValue(sbyte value) { }

	// RVA: 0xED9354 Offset: 0xED5354 VA: 0xED9354 Slot: 38
	public override void WriteValue(Decimal value) { }

	// RVA: 0xED9400 Offset: 0xED5400 VA: 0xED9400 Slot: 39
	public override void WriteValue(DateTime value) { }

	// RVA: 0xED9588 Offset: 0xED5588 VA: 0xED9588
	private int WriteValueToBuffer(DateTime value) { }

	[NullableContext(2)]
	// RVA: 0xED96B4 Offset: 0xED56B4 VA: 0xED96B4 Slot: 60
	public override void WriteValue(byte[] value) { }

	// RVA: 0xED9774 Offset: 0xED5774 VA: 0xED9774 Slot: 40
	public override void WriteValue(DateTimeOffset value) { }

	// RVA: 0xED98D4 Offset: 0xED58D4 VA: 0xED98D4
	private int WriteValueToBuffer(DateTimeOffset value) { }

	// RVA: 0xED9A4C Offset: 0xED5A4C VA: 0xED9A4C Slot: 41
	public override void WriteValue(Guid value) { }

	// RVA: 0xED9B50 Offset: 0xED5B50 VA: 0xED9B50 Slot: 42
	public override void WriteValue(TimeSpan value) { }

	[NullableContext(2)]
	// RVA: 0xED9C6C Offset: 0xED5C6C VA: 0xED9C6C Slot: 61
	public override void WriteValue(Uri value) { }

	[NullableContext(2)]
	// RVA: 0xED9D3C Offset: 0xED5D3C VA: 0xED9D3C Slot: 63
	public override void WriteComment(string text) { }

	// RVA: 0xED8AD0 Offset: 0xED4AD0 VA: 0xED8AD0
	private void EnsureWriteBuffer() { }

	// RVA: 0xED8BCC Offset: 0xED4BCC VA: 0xED8BCC
	private void WriteIntegerValue(long value) { }

	// RVA: 0xED8CA0 Offset: 0xED4CA0 VA: 0xED8CA0
	private void WriteIntegerValue(ulong value, bool negative) { }

	// RVA: 0xED9DFC Offset: 0xED5DFC VA: 0xED9DFC
	private int WriteNumberToBuffer(ulong value, bool negative) { }

	// RVA: 0xED8B40 Offset: 0xED4B40 VA: 0xED8B40
	private void WriteIntegerValue(int value) { }

	// RVA: 0xED9F9C Offset: 0xED5F9C VA: 0xED9F9C
	private void WriteIntegerValue(uint value, bool negative) { }

	// RVA: 0xED9EDC Offset: 0xED5EDC VA: 0xED9EDC
	private int WriteNumberToBuffer(uint value, bool negative) { }
}


// Namespace: Newtonsoft.Json
public enum JsonToken // TypeDefIndex: 4174
{
	// Fields
	public int value__; // 0x0
	public const JsonToken None = 0;
	public const JsonToken StartObject = 1;
	public const JsonToken StartArray = 2;
	public const JsonToken StartConstructor = 3;
	public const JsonToken PropertyName = 4;
	public const JsonToken Comment = 5;
	public const JsonToken Raw = 6;
	public const JsonToken Integer = 7;
	public const JsonToken Float = 8;
	public const JsonToken String = 9;
	public const JsonToken Boolean = 10;
	public const JsonToken Null = 11;
	public const JsonToken Undefined = 12;
	public const JsonToken EndObject = 13;
	public const JsonToken EndArray = 14;
	public const JsonToken EndConstructor = 15;
	public const JsonToken Date = 16;
	public const JsonToken Bytes = 17;
}


// Namespace: 
[NullableContext(0)]
internal enum JsonWriter.State // TypeDefIndex: 4175
{
	// Fields
	public int value__; // 0x0
	public const JsonWriter.State Start = 0;
	public const JsonWriter.State Property = 1;
	public const JsonWriter.State ObjectStart = 2;
	public const JsonWriter.State Object = 3;
	public const JsonWriter.State ArrayStart = 4;
	public const JsonWriter.State Array = 5;
	public const JsonWriter.State ConstructorStart = 6;
	public const JsonWriter.State Constructor = 7;
	public const JsonWriter.State Closed = 8;
	public const JsonWriter.State Error = 9;
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
public abstract class JsonWriter : IDisposable // TypeDefIndex: 4176
{
	// Fields
	private static readonly JsonWriter.State[][] StateArray; // 0x0
	internal static readonly JsonWriter.State[][] StateArrayTemplate; // 0x8
	[Nullable(2)]
	private List<JsonPosition> _stack; // 0x10
	private JsonPosition _currentPosition; // 0x18
	private JsonWriter.State _currentState; // 0x30
	private Formatting _formatting; // 0x34
	[CompilerGenerated]
	private bool <CloseOutput>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <AutoCompleteOnClose>k__BackingField; // 0x39
	private DateFormatHandling _dateFormatHandling; // 0x3C
	private DateTimeZoneHandling _dateTimeZoneHandling; // 0x40
	private StringEscapeHandling _stringEscapeHandling; // 0x44
	private FloatFormatHandling _floatFormatHandling; // 0x48
	[Nullable(2)]
	private string _dateFormatString; // 0x50
	[Nullable(2)]
	private CultureInfo _culture; // 0x58

	// Properties
	public bool CloseOutput { get; set; }
	public bool AutoCompleteOnClose { get; set; }
	protected internal int Top { get; }
	public WriteState WriteState { get; }
	internal string ContainerPath { get; }
	public string Path { get; }
	public Formatting Formatting { get; set; }
	public DateFormatHandling DateFormatHandling { get; set; }
	public DateTimeZoneHandling DateTimeZoneHandling { get; set; }
	public StringEscapeHandling StringEscapeHandling { get; set; }
	public FloatFormatHandling FloatFormatHandling { get; set; }
	[Nullable(2)]
	public string DateFormatString { get; set; }
	public CultureInfo Culture { get; set; }

	// Methods

	// RVA: 0xEDA008 Offset: 0xED6008 VA: 0xEDA008
	internal static JsonWriter.State[][] BuildStateArray() { }

	// RVA: 0xEDA200 Offset: 0xED6200 VA: 0xEDA200
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0xEDA490 Offset: 0xED6490 VA: 0xEDA490
	public bool get_CloseOutput() { }

	[CompilerGenerated]
	// RVA: 0xEDA498 Offset: 0xED6498 VA: 0xEDA498
	public void set_CloseOutput(bool value) { }

	[CompilerGenerated]
	// RVA: 0xEDA4A4 Offset: 0xED64A4 VA: 0xEDA4A4
	public bool get_AutoCompleteOnClose() { }

	[CompilerGenerated]
	// RVA: 0xEDA4AC Offset: 0xED64AC VA: 0xEDA4AC
	public void set_AutoCompleteOnClose(bool value) { }

	// RVA: 0xED84C4 Offset: 0xED44C4 VA: 0xED84C4
	protected internal int get_Top() { }

	// RVA: 0xEDA4C0 Offset: 0xED64C0 VA: 0xEDA4C0
	public WriteState get_WriteState() { }

	// RVA: 0xEDA570 Offset: 0xED6570 VA: 0xEDA570
	internal string get_ContainerPath() { }

	// RVA: 0xEDA618 Offset: 0xED6618 VA: 0xEDA618
	public string get_Path() { }

	// RVA: 0xEDA730 Offset: 0xED6730 VA: 0xEDA730
	public Formatting get_Formatting() { }

	// RVA: 0xED122C Offset: 0xECD22C VA: 0xED122C
	public void set_Formatting(Formatting value) { }

	// RVA: 0xEDA738 Offset: 0xED6738 VA: 0xEDA738
	public DateFormatHandling get_DateFormatHandling() { }

	// RVA: 0xED128C Offset: 0xECD28C VA: 0xED128C
	public void set_DateFormatHandling(DateFormatHandling value) { }

	// RVA: 0xEDA740 Offset: 0xED6740 VA: 0xEDA740
	public DateTimeZoneHandling get_DateTimeZoneHandling() { }

	// RVA: 0xED12EC Offset: 0xECD2EC VA: 0xED12EC
	public void set_DateTimeZoneHandling(DateTimeZoneHandling value) { }

	// RVA: 0xEDA748 Offset: 0xED6748 VA: 0xEDA748
	public StringEscapeHandling get_StringEscapeHandling() { }

	// RVA: 0xED13AC Offset: 0xECD3AC VA: 0xED13AC
	public void set_StringEscapeHandling(StringEscapeHandling value) { }

	// RVA: 0xEDA750 Offset: 0xED6750 VA: 0xEDA750 Slot: 5
	internal virtual void OnStringEscapeHandlingChanged() { }

	// RVA: 0xEDA754 Offset: 0xED6754 VA: 0xEDA754
	public FloatFormatHandling get_FloatFormatHandling() { }

	// RVA: 0xED134C Offset: 0xECD34C VA: 0xED134C
	public void set_FloatFormatHandling(FloatFormatHandling value) { }

	[NullableContext(2)]
	// RVA: 0xEDA75C Offset: 0xED675C VA: 0xEDA75C
	public string get_DateFormatString() { }

	[NullableContext(2)]
	// RVA: 0xEDA764 Offset: 0xED6764 VA: 0xEDA764
	public void set_DateFormatString(string value) { }

	// RVA: 0xED1414 Offset: 0xECD414 VA: 0xED1414
	public CultureInfo get_Culture() { }

	// RVA: 0xEDA76C Offset: 0xED676C VA: 0xEDA76C
	public void set_Culture(CultureInfo value) { }

	// RVA: 0xED7E5C Offset: 0xED3E5C VA: 0xED7E5C
	protected void .ctor() { }

	// RVA: 0xEDA774 Offset: 0xED6774 VA: 0xEDA774
	internal void UpdateScopeWithFinishedValue() { }

	// RVA: 0xEDA78C Offset: 0xED678C VA: 0xEDA78C
	private void Push(JsonContainerType value) { }

	// RVA: 0xEDA8AC Offset: 0xED68AC VA: 0xEDA8AC
	private JsonContainerType Pop() { }

	// RVA: 0xEDA4B8 Offset: 0xED64B8 VA: 0xEDA4B8
	private JsonContainerType Peek() { }

	// RVA: 0xED7F18 Offset: 0xED3F18 VA: 0xED7F18 Slot: 6
	public virtual void Close() { }

	// RVA: 0xEDA9B4 Offset: 0xED69B4 VA: 0xEDA9B4 Slot: 7
	public virtual void WriteStartObject() { }

	// RVA: 0xEDA9C0 Offset: 0xED69C0 VA: 0xEDA9C0 Slot: 8
	public virtual void WriteEndObject() { }

	// RVA: 0xEDA9CC Offset: 0xED69CC VA: 0xEDA9CC Slot: 9
	public virtual void WriteStartArray() { }

	// RVA: 0xEDA9D8 Offset: 0xED69D8 VA: 0xEDA9D8 Slot: 10
	public virtual void WriteEndArray() { }

	// RVA: 0xEDA9E0 Offset: 0xED69E0 VA: 0xEDA9E0 Slot: 11
	public virtual void WriteStartConstructor(string name) { }

	// RVA: 0xEDA9EC Offset: 0xED69EC VA: 0xEDA9EC Slot: 12
	public virtual void WriteEndConstructor() { }

	// RVA: 0xEDA9F4 Offset: 0xED69F4 VA: 0xEDA9F4 Slot: 13
	public virtual void WritePropertyName(string name) { }

	// RVA: 0xEDAA04 Offset: 0xED6A04 VA: 0xEDAA04 Slot: 14
	public virtual void WritePropertyName(string name, bool escape) { }

	// RVA: 0xEDAA14 Offset: 0xED6A14 VA: 0xEDAA14 Slot: 15
	public virtual void WriteEnd() { }

	// RVA: 0xEDAAEC Offset: 0xED6AEC VA: 0xEDAAEC
	public void WriteToken(JsonReader reader) { }

	// RVA: 0xEDAAF4 Offset: 0xED6AF4 VA: 0xEDAAF4
	public void WriteToken(JsonReader reader, bool writeChildren) { }

	[NullableContext(2)]
	// RVA: 0xEDAB74 Offset: 0xED6B74 VA: 0xEDAB74
	public void WriteToken(JsonToken token, object value) { }

	// RVA: 0xEDB238 Offset: 0xED7238 VA: 0xEDB238 Slot: 16
	internal virtual void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) { }

	// RVA: 0xEDB568 Offset: 0xED7568 VA: 0xEDB568
	private bool IsWriteTokenIncomplete(JsonReader reader, bool writeChildren, int initialDepth) { }

	// RVA: 0xEDB438 Offset: 0xED7438 VA: 0xEDB438
	private int CalculateWriteTokenInitialDepth(JsonReader reader) { }

	// RVA: 0xEDB5D4 Offset: 0xED75D4 VA: 0xEDB5D4
	private int CalculateWriteTokenFinalDepth(JsonReader reader) { }

	// RVA: 0xEDB49C Offset: 0xED749C VA: 0xEDB49C
	private void WriteConstructorDate(JsonReader reader) { }

	// RVA: 0xEDAA1C Offset: 0xED6A1C VA: 0xEDAA1C
	private void WriteEnd(JsonContainerType type) { }

	// RVA: 0xEDA974 Offset: 0xED6974 VA: 0xEDA974
	private void AutoCompleteAll() { }

	// RVA: 0xEDB634 Offset: 0xED7634 VA: 0xEDB634
	private JsonToken GetCloseTokenForType(JsonContainerType type) { }

	// RVA: 0xEDB6D0 Offset: 0xED76D0 VA: 0xEDB6D0
	private void AutoCompleteClose(JsonContainerType type) { }

	// RVA: 0xEDB78C Offset: 0xED778C VA: 0xEDB78C
	private int CalculateLevelsToComplete(JsonContainerType type) { }

	// RVA: 0xEDB884 Offset: 0xED7884 VA: 0xEDB884
	private void UpdateCurrentState() { }

	// RVA: 0xEDB938 Offset: 0xED7938 VA: 0xEDB938 Slot: 17
	protected virtual void WriteEnd(JsonToken token) { }

	// RVA: 0xEDB93C Offset: 0xED793C VA: 0xEDB93C Slot: 18
	protected virtual void WriteIndent() { }

	// RVA: 0xEDB940 Offset: 0xED7940 VA: 0xEDB940 Slot: 19
	protected virtual void WriteValueDelimiter() { }

	// RVA: 0xEDB944 Offset: 0xED7944 VA: 0xEDB944 Slot: 20
	protected virtual void WriteIndentSpace() { }

	// RVA: 0xEDB948 Offset: 0xED7948 VA: 0xEDB948
	internal void AutoComplete(JsonToken tokenBeingWritten) { }

	// RVA: 0xEDBB50 Offset: 0xED7B50 VA: 0xEDBB50 Slot: 21
	public virtual void WriteNull() { }

	// RVA: 0xEDBB6C Offset: 0xED7B6C VA: 0xEDBB6C Slot: 22
	public virtual void WriteUndefined() { }

	[NullableContext(2)]
	// RVA: 0xEDBB88 Offset: 0xED7B88 VA: 0xEDBB88 Slot: 23
	public virtual void WriteRaw(string json) { }

	[NullableContext(2)]
	// RVA: 0xEDBB8C Offset: 0xED7B8C VA: 0xEDBB8C Slot: 24
	public virtual void WriteRawValue(string json) { }

	[NullableContext(2)]
	// RVA: 0xEDBBDC Offset: 0xED7BDC VA: 0xEDBBDC Slot: 25
	public virtual void WriteValue(string value) { }

	// RVA: 0xEDBBF8 Offset: 0xED7BF8 VA: 0xEDBBF8 Slot: 26
	public virtual void WriteValue(int value) { }

	// RVA: 0xEDBC14 Offset: 0xED7C14 VA: 0xEDBC14 Slot: 27
	public virtual void WriteValue(uint value) { }

	// RVA: 0xEDBC30 Offset: 0xED7C30 VA: 0xEDBC30 Slot: 28
	public virtual void WriteValue(long value) { }

	// RVA: 0xEDBC4C Offset: 0xED7C4C VA: 0xEDBC4C Slot: 29
	public virtual void WriteValue(ulong value) { }

	// RVA: 0xEDBC68 Offset: 0xED7C68 VA: 0xEDBC68 Slot: 30
	public virtual void WriteValue(float value) { }

	// RVA: 0xEDBC84 Offset: 0xED7C84 VA: 0xEDBC84 Slot: 31
	public virtual void WriteValue(double value) { }

	// RVA: 0xEDBCA0 Offset: 0xED7CA0 VA: 0xEDBCA0 Slot: 32
	public virtual void WriteValue(bool value) { }

	// RVA: 0xEDBCBC Offset: 0xED7CBC VA: 0xEDBCBC Slot: 33
	public virtual void WriteValue(short value) { }

	// RVA: 0xEDBCD8 Offset: 0xED7CD8 VA: 0xEDBCD8 Slot: 34
	public virtual void WriteValue(ushort value) { }

	// RVA: 0xEDBCF4 Offset: 0xED7CF4 VA: 0xEDBCF4 Slot: 35
	public virtual void WriteValue(char value) { }

	// RVA: 0xEDBD10 Offset: 0xED7D10 VA: 0xEDBD10 Slot: 36
	public virtual void WriteValue(byte value) { }

	// RVA: 0xEDBD2C Offset: 0xED7D2C VA: 0xEDBD2C Slot: 37
	public virtual void WriteValue(sbyte value) { }

	// RVA: 0xEDBD48 Offset: 0xED7D48 VA: 0xEDBD48 Slot: 38
	public virtual void WriteValue(Decimal value) { }

	// RVA: 0xEDBD64 Offset: 0xED7D64 VA: 0xEDBD64 Slot: 39
	public virtual void WriteValue(DateTime value) { }

	// RVA: 0xEDBD80 Offset: 0xED7D80 VA: 0xEDBD80 Slot: 40
	public virtual void WriteValue(DateTimeOffset value) { }

	// RVA: 0xEDBD9C Offset: 0xED7D9C VA: 0xEDBD9C Slot: 41
	public virtual void WriteValue(Guid value) { }

	// RVA: 0xEDBDB8 Offset: 0xED7DB8 VA: 0xEDBDB8 Slot: 42
	public virtual void WriteValue(TimeSpan value) { }

	// RVA: 0xEDBDD4 Offset: 0xED7DD4 VA: 0xEDBDD4 Slot: 43
	public virtual void WriteValue(Nullable<int> value) { }

	// RVA: 0xEDBEA4 Offset: 0xED7EA4 VA: 0xEDBEA4 Slot: 44
	public virtual void WriteValue(Nullable<uint> value) { }

	// RVA: 0xEDBF74 Offset: 0xED7F74 VA: 0xEDBF74 Slot: 45
	public virtual void WriteValue(Nullable<long> value) { }

	// RVA: 0xEDC044 Offset: 0xED8044 VA: 0xEDC044 Slot: 46
	public virtual void WriteValue(Nullable<ulong> value) { }

	// RVA: 0xEDC114 Offset: 0xED8114 VA: 0xEDC114 Slot: 47
	public virtual void WriteValue(Nullable<float> value) { }

	// RVA: 0xEDC1E4 Offset: 0xED81E4 VA: 0xEDC1E4 Slot: 48
	public virtual void WriteValue(Nullable<double> value) { }

	// RVA: 0xEDC2B4 Offset: 0xED82B4 VA: 0xEDC2B4 Slot: 49
	public virtual void WriteValue(Nullable<bool> value) { }

	// RVA: 0xEDC384 Offset: 0xED8384 VA: 0xEDC384 Slot: 50
	public virtual void WriteValue(Nullable<short> value) { }

	// RVA: 0xEDC454 Offset: 0xED8454 VA: 0xEDC454 Slot: 51
	public virtual void WriteValue(Nullable<ushort> value) { }

	// RVA: 0xEDC524 Offset: 0xED8524 VA: 0xEDC524 Slot: 52
	public virtual void WriteValue(Nullable<char> value) { }

	// RVA: 0xEDC5F4 Offset: 0xED85F4 VA: 0xEDC5F4 Slot: 53
	public virtual void WriteValue(Nullable<byte> value) { }

	// RVA: 0xEDC6C4 Offset: 0xED86C4 VA: 0xEDC6C4 Slot: 54
	public virtual void WriteValue(Nullable<sbyte> value) { }

	// RVA: 0xEDC794 Offset: 0xED8794 VA: 0xEDC794 Slot: 55
	public virtual void WriteValue(Nullable<Decimal> value) { }

	// RVA: 0xEDC88C Offset: 0xED888C VA: 0xEDC88C Slot: 56
	public virtual void WriteValue(Nullable<DateTime> value) { }

	// RVA: 0xEDC95C Offset: 0xED895C VA: 0xEDC95C Slot: 57
	public virtual void WriteValue(Nullable<DateTimeOffset> value) { }

	// RVA: 0xEDCA40 Offset: 0xED8A40 VA: 0xEDCA40 Slot: 58
	public virtual void WriteValue(Nullable<Guid> value) { }

	// RVA: 0xEDCB24 Offset: 0xED8B24 VA: 0xEDCB24 Slot: 59
	public virtual void WriteValue(Nullable<TimeSpan> value) { }

	[NullableContext(2)]
	// RVA: 0xEDCBF4 Offset: 0xED8BF4 VA: 0xEDCBF4 Slot: 60
	public virtual void WriteValue(byte[] value) { }

	[NullableContext(2)]
	// RVA: 0xEDCC24 Offset: 0xED8C24 VA: 0xEDCC24 Slot: 61
	public virtual void WriteValue(Uri value) { }

	[NullableContext(2)]
	// RVA: 0xED8798 Offset: 0xED4798 VA: 0xED8798 Slot: 62
	public virtual void WriteValue(object value) { }

	[NullableContext(2)]
	// RVA: 0xEDDF40 Offset: 0xED9F40 VA: 0xEDDF40 Slot: 63
	public virtual void WriteComment(string text) { }

	// RVA: 0xEDDF48 Offset: 0xED9F48 VA: 0xEDDF48 Slot: 4
	private void System.IDisposable.Dispose() { }

	// RVA: 0xEDDFB8 Offset: 0xED9FB8 VA: 0xEDDFB8 Slot: 64
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0xEDCD88 Offset: 0xED8D88 VA: 0xEDCD88
	internal static void WriteValue(JsonWriter writer, PrimitiveTypeCode typeCode, object value) { }

	// RVA: 0xEDDFD8 Offset: 0xED9FD8 VA: 0xEDDFD8
	private static void ResolveConvertibleValue(IConvertible convertible, out PrimitiveTypeCode typeCode, out object value) { }

	// RVA: 0xEDCCD0 Offset: 0xED8CD0 VA: 0xEDCCD0
	private static JsonWriterException CreateUnsupportedTypeException(JsonWriter writer, object value) { }

	// RVA: 0xEDE170 Offset: 0xEDA170 VA: 0xEDE170
	protected void SetWriteState(JsonToken token, object value) { }

	// RVA: 0xEDA9C8 Offset: 0xED69C8 VA: 0xEDA9C8
	internal void InternalWriteEnd(JsonContainerType container) { }

	// RVA: 0xED81FC Offset: 0xED41FC VA: 0xED81FC
	internal void InternalWritePropertyName(string name) { }

	// RVA: 0xED8A18 Offset: 0xED4A18 VA: 0xED8A18
	internal void InternalWriteRaw() { }

	// RVA: 0xED7FA4 Offset: 0xED3FA4 VA: 0xED7FA4
	internal void InternalWriteStart(JsonToken token, JsonContainerType container) { }

	// RVA: 0xED8780 Offset: 0xED4780 VA: 0xED8780
	internal void InternalWriteValue(JsonToken token) { }

	// RVA: 0xED9DF4 Offset: 0xED5DF4 VA: 0xED9DF4
	internal void InternalWriteComment() { }
}


// Namespace: Newtonsoft.Json
[NullableContext(1)]
[Nullable(0)]
[Serializable]
public class JsonWriterException : JsonException // TypeDefIndex: 4177
{
	// Fields
	[CompilerGenerated]
	[Nullable(2)]
	private readonly string <Path>k__BackingField; // 0x90

	// Methods

	// RVA: 0xEDE328 Offset: 0xEDA328 VA: 0xEDE328
	public void .ctor() { }

	// RVA: 0xEDE330 Offset: 0xEDA330 VA: 0xEDE330
	public void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xEDE338 Offset: 0xEDA338 VA: 0xEDE338
	public void .ctor(string message, string path, Exception innerException) { }

	// RVA: 0xEDE364 Offset: 0xEDA364 VA: 0xEDE364
	internal static JsonWriterException Create(JsonWriter writer, string message, Exception ex) { }

	// RVA: 0xEDE398 Offset: 0xEDA398 VA: 0xEDE398
	internal static JsonWriterException Create(string path, string message, Exception ex) { }
}


// Namespace: Newtonsoft.Json
public enum MemberSerialization // TypeDefIndex: 4178
{
	// Fields
	public int value__; // 0x0
	public const MemberSerialization OptOut = 0;
	public const MemberSerialization OptIn = 1;
	public const MemberSerialization Fields = 2;
}


// Namespace: Newtonsoft.Json
public enum MetadataPropertyHandling // TypeDefIndex: 4179
{
	// Fields
	public int value__; // 0x0
	public const MetadataPropertyHandling Default = 0;
	public const MetadataPropertyHandling ReadAhead = 1;
	public const MetadataPropertyHandling Ignore = 2;
}


// Namespace: Newtonsoft.Json
public enum MissingMemberHandling // TypeDefIndex: 4180
{
	// Fields
	public int value__; // 0x0
	public const MissingMemberHandling Ignore = 0;
	public const MissingMemberHandling Error = 1;
}


// Namespace: Newtonsoft.Json
public enum NullValueHandling // TypeDefIndex: 4181
{
	// Fields
	public int value__; // 0x0
	public const NullValueHandling Include = 0;
	public const NullValueHandling Ignore = 1;
}


// Namespace: Newtonsoft.Json
public enum ObjectCreationHandling // TypeDefIndex: 4182
{
	// Fields
	public int value__; // 0x0
	public const ObjectCreationHandling Auto = 0;
	public const ObjectCreationHandling Reuse = 1;
	public const ObjectCreationHandling Replace = 2;
}


// Namespace: Newtonsoft.Json
[Flags]
public enum PreserveReferencesHandling // TypeDefIndex: 4183
{
	// Fields
	public int value__; // 0x0
	public const PreserveReferencesHandling None = 0;
	public const PreserveReferencesHandling Objects = 1;
	public const PreserveReferencesHandling Arrays = 2;
	public const PreserveReferencesHandling All = 3;
}


// Namespace: Newtonsoft.Json
public enum ReferenceLoopHandling // TypeDefIndex: 4184
{
	// Fields
	public int value__; // 0x0
	public const ReferenceLoopHandling Error = 0;
	public const ReferenceLoopHandling Ignore = 1;
	public const ReferenceLoopHandling Serialize = 2;
}


// Namespace: Newtonsoft.Json
public enum Required // TypeDefIndex: 4185
{
	// Fields
	public int value__; // 0x0
	public const Required Default = 0;
	public const Required AllowNull = 1;
	public const Required Always = 2;
	public const Required DisallowNull = 3;
}


// Namespace: Newtonsoft.Json
public enum StringEscapeHandling // TypeDefIndex: 4186
{
	// Fields
	public int value__; // 0x0
	public const StringEscapeHandling Default = 0;
	public const StringEscapeHandling EscapeNonAscii = 1;
	public const StringEscapeHandling EscapeHtml = 2;
}


// Namespace: Newtonsoft.Json
public enum TypeNameAssemblyFormatHandling // TypeDefIndex: 4187
{
	// Fields
	public int value__; // 0x0
	public const TypeNameAssemblyFormatHandling Simple = 0;
	public const TypeNameAssemblyFormatHandling Full = 1;
}


// Namespace: Newtonsoft.Json
[Flags]
public enum TypeNameHandling // TypeDefIndex: 4188
{
	// Fields
	public int value__; // 0x0
	public const TypeNameHandling None = 0;
	public const TypeNameHandling Objects = 1;
	public const TypeNameHandling Arrays = 2;
	public const TypeNameHandling All = 3;
	public const TypeNameHandling Auto = 4;
}


// Namespace: Newtonsoft.Json
public enum WriteState // TypeDefIndex: 4189
{
	// Fields
	public int value__; // 0x0
	public const WriteState Error = 0;
	public const WriteState Closed = 1;
	public const WriteState Object = 2;
	public const WriteState Array = 3;
	public const WriteState Constructor = 4;
	public const WriteState Property = 5;
	public const WriteState Start = 6;
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal class Base64Encoder // TypeDefIndex: 4190
{
	// Fields
	private readonly char[] _charsLine; // 0x10
	private readonly TextWriter _writer; // 0x18
	[Nullable(2)]
	private byte[] _leftOverBytes; // 0x20
	private int _leftOverBytesCount; // 0x28

	// Methods

	// RVA: 0xEDE44C Offset: 0xEDA44C VA: 0xEDE44C
	public void .ctor(TextWriter writer) { }

	// RVA: 0xEDE524 Offset: 0xEDA524 VA: 0xEDE524
	private void ValidateEncode(byte[] buffer, int index, int count) { }

	// RVA: 0xEDE5E8 Offset: 0xEDA5E8 VA: 0xEDE5E8
	public void Encode(byte[] buffer, int index, int count) { }

	// RVA: 0xEDE848 Offset: 0xEDA848 VA: 0xEDE848
	private void StoreLeftOverBytes(byte[] buffer, int index, ref int count) { }

	// RVA: 0xEDE788 Offset: 0xEDA788 VA: 0xEDE788
	private bool FulfillFromLeftover(byte[] buffer, int index, ref int count) { }

	// RVA: 0xEDE96C Offset: 0xEDA96C VA: 0xEDE96C
	public void Flush() { }

	// RVA: 0xEDE824 Offset: 0xEDA824 VA: 0xEDE824
	private void WriteChars(char[] chars, int index, int count) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal class BidirectionalDictionary<TFirst, TSecond> // TypeDefIndex: 4191
{
	// Fields
	private readonly IDictionary<TFirst, TSecond> _firstToSecond; // 0x0
	private readonly IDictionary<TSecond, TFirst> _secondToFirst; // 0x0
	private readonly string _duplicateFirstErrorMessage; // 0x0
	private readonly string _duplicateSecondErrorMessage; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(IEqualityComparer<TFirst> firstEqualityComparer, IEqualityComparer<TSecond> secondEqualityComparer, string duplicateFirstErrorMessage, string duplicateSecondErrorMessage) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBDF650 Offset: 0xBDB650 VA: 0xBDF650
	|-BidirectionalDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void Set(TFirst first, TSecond second) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBDF728 Offset: 0xBDB728 VA: 0xBDF728
	|-BidirectionalDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Set
	*/

	// RVA: -1 Offset: -1
	public bool TryGetByFirst(TFirst first, out TSecond second) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBDFE9C Offset: 0xBDBE9C VA: 0xBDFE9C
	|-BidirectionalDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.TryGetByFirst
	*/

	// RVA: -1 Offset: -1
	public bool TryGetBySecond(TSecond second, out TFirst first) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBDFFE8 Offset: 0xBDBFE8 VA: 0xBDFFE8
	|-BidirectionalDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.TryGetBySecond
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal static class BoxedPrimitives // TypeDefIndex: 4192
{
	// Fields
	internal static readonly object BooleanTrue; // 0x0
	internal static readonly object BooleanFalse; // 0x8
	internal static readonly object Int32_M1; // 0x10
	internal static readonly object Int32_0; // 0x18
	internal static readonly object Int32_1; // 0x20
	internal static readonly object Int32_2; // 0x28
	internal static readonly object Int32_3; // 0x30
	internal static readonly object Int32_4; // 0x38
	internal static readonly object Int32_5; // 0x40
	internal static readonly object Int32_6; // 0x48
	internal static readonly object Int32_7; // 0x50
	internal static readonly object Int32_8; // 0x58
	internal static readonly object Int64_M1; // 0x60
	internal static readonly object Int64_0; // 0x68
	internal static readonly object Int64_1; // 0x70
	internal static readonly object Int64_2; // 0x78
	internal static readonly object Int64_3; // 0x80
	internal static readonly object Int64_4; // 0x88
	internal static readonly object Int64_5; // 0x90
	internal static readonly object Int64_6; // 0x98
	internal static readonly object Int64_7; // 0xA0
	internal static readonly object Int64_8; // 0xA8
	private static readonly object DecimalZero; // 0xB0
	internal static readonly object DoubleNaN; // 0xB8
	internal static readonly object DoublePositiveInfinity; // 0xC0
	internal static readonly object DoubleNegativeInfinity; // 0xC8
	internal static readonly object DoubleZero; // 0xD0

	// Methods

	// RVA: 0xEDEA24 Offset: 0xEDAA24 VA: 0xEDEA24
	internal static object Get(bool value) { }

	// RVA: 0xEDEA8C Offset: 0xEDAA8C VA: 0xEDEA8C
	internal static object Get(int value) { }

	// RVA: 0xEDEC9C Offset: 0xEDAC9C VA: 0xEDEC9C
	internal static object Get(long value) { }

	// RVA: 0xEDEEB8 Offset: 0xEDAEB8 VA: 0xEDEEB8
	internal static object Get(Decimal value) { }

	// RVA: 0xEDEFA0 Offset: 0xEDAFA0 VA: 0xEDEFA0
	internal static object Get(double value) { }

	// RVA: 0xEDF0A8 Offset: 0xEDB0A8 VA: 0xEDF0A8
	private static void .cctor() { }
}


// Namespace: 
[NullableContext(0)]
private static class CollectionUtils.EmptyArrayContainer<T> // TypeDefIndex: 4193
{
	// Fields
	[Nullable(1)]
	public static readonly T[] Empty; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A76C Offset: 0xC0676C VA: 0xC0A76C
	|-CollectionUtils.EmptyArrayContainer<__Il2CppFullySharedGenericType>..cctor
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[Extension]
[Nullable(0)]
[NullableContext(1)]
internal static class CollectionUtils // TypeDefIndex: 4194
{
	// Methods

	// RVA: -1 Offset: -1
	public static bool IsNullOrEmpty<T>(ICollection<T> collection) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B2B0 Offset: 0xB772B0 VA: 0xB7B2B0
	|-CollectionUtils.IsNullOrEmpty<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void AddRange<T>(IList<T> initial, IEnumerable<T> collection) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7A530 Offset: 0xB76530 VA: 0xB7A530
	|-CollectionUtils.AddRange<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xEDF4D0 Offset: 0xEDB4D0 VA: 0xEDF4D0
	public static bool IsDictionaryType(Type type) { }

	// RVA: 0xEDF6D8 Offset: 0xEDB6D8 VA: 0xEDF6D8
	public static ConstructorInfo ResolveEnumerableCollectionConstructor(Type collectionType, Type collectionItemType) { }

	// RVA: 0xEDF7E8 Offset: 0xEDB7E8 VA: 0xEDF7E8
	public static ConstructorInfo ResolveEnumerableCollectionConstructor(Type collectionType, Type collectionItemType, Type constructorArgumentType) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static int IndexOf<T>(IEnumerable<T> collection, Func<T, bool> predicate) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7AD80 Offset: 0xB76D80 VA: 0xB7AD80
	|-CollectionUtils.IndexOf<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static bool Contains<T>(List<T> list, T value, IEqualityComparer comparer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7A9F8 Offset: 0xB769F8 VA: 0xB7A9F8
	|-CollectionUtils.Contains<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static int IndexOfReference<T>(List<T> list, T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B170 Offset: 0xB77170 VA: 0xB7B170
	|-CollectionUtils.IndexOfReference<__Il2CppFullySharedGenericType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void FastReverse<T>(List<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7ABCC Offset: 0xB76BCC VA: 0xB7ABCC
	|-CollectionUtils.FastReverse<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xEDFB10 Offset: 0xEDBB10 VA: 0xEDFB10
	private static IList<int> GetDimensions(IList values, int dimensionsCount) { }

	// RVA: 0xEDFDC4 Offset: 0xEDBDC4 VA: 0xEDFDC4
	private static void CopyFromJaggedToMultidimensionalArray(IList values, Array multidimensionalArray, int[] indices) { }

	// RVA: 0xEE0080 Offset: 0xEDC080 VA: 0xEE0080
	private static object JaggedArrayGetValue(IList values, int[] indices) { }

	// RVA: 0xEE01BC Offset: 0xEDC1BC VA: 0xEE01BC
	public static Array ToMultidimensionalArray(IList values, Type type, int rank) { }

	// RVA: -1 Offset: -1
	public static T[] ArrayEmpty<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7A99C Offset: 0xB7699C VA: 0xB7A99C
	|-CollectionUtils.ArrayEmpty<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: Newtonsoft.Json.Utilities
internal interface IWrappedCollection : IList, ICollection, IEnumerable // TypeDefIndex: 4195
{
	// Properties
	[Nullable(1)]
	public abstract object UnderlyingCollection { get; }

	// Methods

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract object get_UnderlyingCollection();
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal class CollectionWrapper<T> : ICollection<T>, IEnumerable<T>, IEnumerable, IWrappedCollection, IList, ICollection // TypeDefIndex: 4196
{
	// Fields
	[Nullable(2)]
	private readonly IList _list; // 0x0
	[Nullable(new[] { 2, 1 })]
	private readonly ICollection<T> _genericCollection; // 0x0
	[Nullable(2)]
	private object _syncRoot; // 0x0

	// Properties
	public virtual int Count { get; }
	public virtual bool IsReadOnly { get; }
	private bool System.Collections.IList.IsFixedSize { get; }
	[Nullable(2)]
	private object System.Collections.IList.Item { get; set; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	public object UnderlyingCollection { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 29
	public virtual void Add(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE46FC Offset: 0xBE06FC VA: 0xBE46FC
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1 Slot: 30
	public virtual void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4908 Offset: 0xBE0908 VA: 0xBE4908
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.Clear
	*/

	// RVA: -1 Offset: -1 Slot: 31
	public virtual bool Contains(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4A18 Offset: 0xBE0A18 VA: 0xBE4A18
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.Contains
	*/

	// RVA: -1 Offset: -1 Slot: 32
	public virtual void CopyTo(T[] array, int arrayIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4C34 Offset: 0xBE0C34 VA: 0xBE4C34
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 33
	public virtual int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4D60 Offset: 0xBE0D60 VA: 0xBE4D60
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1 Slot: 34
	public virtual bool get_IsReadOnly() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4E74 Offset: 0xBE0E74 VA: 0xBE4E74
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.get_IsReadOnly
	*/

	// RVA: -1 Offset: -1 Slot: 35
	public virtual bool Remove(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4F84 Offset: 0xBE0F84 VA: 0xBE4F84
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1 Slot: 36
	public virtual IEnumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5260 Offset: 0xBE1260 VA: 0xBE5260
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 12
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5310 Offset: 0xBE1310 VA: 0xBE5310
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 16
	private int System.Collections.IList.Add(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE53B8 Offset: 0xBE13B8 VA: 0xBE53B8
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.Add
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 17
	private bool System.Collections.IList.Contains(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE54C0 Offset: 0xBE14C0 VA: 0xBE54C0
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.Contains
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 21
	private int System.Collections.IList.IndexOf(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE55C8 Offset: 0xBE15C8 VA: 0xBE55C8
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.IndexOf
	*/

	// RVA: -1 Offset: -1 Slot: 24
	private void System.Collections.IList.RemoveAt(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5780 Offset: 0xBE1780 VA: 0xBE5780
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.RemoveAt
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 22
	private void System.Collections.IList.Insert(int index, object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE587C Offset: 0xBE187C VA: 0xBE587C
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.Insert
	*/

	// RVA: -1 Offset: -1 Slot: 20
	private bool System.Collections.IList.get_IsFixedSize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5A30 Offset: 0xBE1A30 VA: 0xBE5A30
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.get_IsFixedSize
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 23
	private void System.Collections.IList.Remove(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5B40 Offset: 0xBE1B40 VA: 0xBE5B40
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.Remove
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 14
	private object System.Collections.IList.get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5C34 Offset: 0xBE1C34 VA: 0xBE5C34
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.get_Item
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 15
	private void System.Collections.IList.set_Item(int index, object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5D2C Offset: 0xBE1D2C VA: 0xBE5D2C
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.IList.set_Item
	*/

	// RVA: -1 Offset: -1 Slot: 25
	private void System.Collections.ICollection.CopyTo(Array array, int arrayIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5EE0 Offset: 0xBE1EE0 VA: 0xBE5EE0
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.ICollection.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 28
	private bool System.Collections.ICollection.get_IsSynchronized() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5F64 Offset: 0xBE1F64 VA: 0xBE5F64
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.ICollection.get_IsSynchronized
	*/

	// RVA: -1 Offset: -1 Slot: 27
	private object System.Collections.ICollection.get_SyncRoot() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5F6C Offset: 0xBE1F6C VA: 0xBE5F6C
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.System.Collections.ICollection.get_SyncRoot
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1
	private static void VerifyValueType(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE5FE0 Offset: 0xBE1FE0 VA: 0xBE5FE0
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.VerifyValueType
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1
	private static bool IsCompatibleObject(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE60E4 Offset: 0xBE20E4 VA: 0xBE60E4
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.IsCompatibleObject
	*/

	// RVA: -1 Offset: -1 Slot: 13
	public object get_UnderlyingCollection() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE622C Offset: 0xBE222C VA: 0xBE622C
	|-CollectionWrapper<__Il2CppFullySharedGenericType>.get_UnderlyingCollection
	*/
}


// Namespace: Newtonsoft.Json.Utilities
internal enum PrimitiveTypeCode // TypeDefIndex: 4197
{
	// Fields
	public int value__; // 0x0
	public const PrimitiveTypeCode Empty = 0;
	public const PrimitiveTypeCode Object = 1;
	public const PrimitiveTypeCode Char = 2;
	public const PrimitiveTypeCode CharNullable = 3;
	public const PrimitiveTypeCode Boolean = 4;
	public const PrimitiveTypeCode BooleanNullable = 5;
	public const PrimitiveTypeCode SByte = 6;
	public const PrimitiveTypeCode SByteNullable = 7;
	public const PrimitiveTypeCode Int16 = 8;
	public const PrimitiveTypeCode Int16Nullable = 9;
	public const PrimitiveTypeCode UInt16 = 10;
	public const PrimitiveTypeCode UInt16Nullable = 11;
	public const PrimitiveTypeCode Int32 = 12;
	public const PrimitiveTypeCode Int32Nullable = 13;
	public const PrimitiveTypeCode Byte = 14;
	public const PrimitiveTypeCode ByteNullable = 15;
	public const PrimitiveTypeCode UInt32 = 16;
	public const PrimitiveTypeCode UInt32Nullable = 17;
	public const PrimitiveTypeCode Int64 = 18;
	public const PrimitiveTypeCode Int64Nullable = 19;
	public const PrimitiveTypeCode UInt64 = 20;
	public const PrimitiveTypeCode UInt64Nullable = 21;
	public const PrimitiveTypeCode Single = 22;
	public const PrimitiveTypeCode SingleNullable = 23;
	public const PrimitiveTypeCode Double = 24;
	public const PrimitiveTypeCode DoubleNullable = 25;
	public const PrimitiveTypeCode DateTime = 26;
	public const PrimitiveTypeCode DateTimeNullable = 27;
	public const PrimitiveTypeCode DateTimeOffset = 28;
	public const PrimitiveTypeCode DateTimeOffsetNullable = 29;
	public const PrimitiveTypeCode Decimal = 30;
	public const PrimitiveTypeCode DecimalNullable = 31;
	public const PrimitiveTypeCode Guid = 32;
	public const PrimitiveTypeCode GuidNullable = 33;
	public const PrimitiveTypeCode TimeSpan = 34;
	public const PrimitiveTypeCode TimeSpanNullable = 35;
	public const PrimitiveTypeCode BigInteger = 36;
	public const PrimitiveTypeCode BigIntegerNullable = 37;
	public const PrimitiveTypeCode Uri = 38;
	public const PrimitiveTypeCode String = 39;
	public const PrimitiveTypeCode Bytes = 40;
	public const PrimitiveTypeCode DBNull = 41;
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class TypeInformation // TypeDefIndex: 4198
{
	// Fields
	[CompilerGenerated]
	private readonly Type <Type>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly PrimitiveTypeCode <TypeCode>k__BackingField; // 0x18

	// Properties
	public Type Type { get; }
	public PrimitiveTypeCode TypeCode { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEE0398 Offset: 0xEDC398 VA: 0xEE0398
	public Type get_Type() { }

	[CompilerGenerated]
	// RVA: 0xEE03A0 Offset: 0xEDC3A0 VA: 0xEE03A0
	public PrimitiveTypeCode get_TypeCode() { }

	// RVA: 0xEE03A8 Offset: 0xEDC3A8 VA: 0xEE03A8
	public void .ctor(Type type, PrimitiveTypeCode typeCode) { }
}


// Namespace: Newtonsoft.Json.Utilities
internal enum ParseResult // TypeDefIndex: 4199
{
	// Fields
	public int value__; // 0x0
	public const ParseResult None = 0;
	public const ParseResult Success = 1;
	public const ParseResult Overflow = 2;
	public const ParseResult Invalid = 3;
}


// Namespace: 
[NullableContext(0)]
internal enum ConvertUtils.ConvertResult // TypeDefIndex: 4200
{
	// Fields
	public int value__; // 0x0
	public const ConvertUtils.ConvertResult Success = 0;
	public const ConvertUtils.ConvertResult CannotConvertNull = 1;
	public const ConvertUtils.ConvertResult NotInstantiableType = 2;
	public const ConvertUtils.ConvertResult NoValidConversion = 3;
}


// Namespace: 
[CompilerGenerated]
private sealed class ConvertUtils.<>c__DisplayClass8_0 // TypeDefIndex: 4201
{
	// Fields
	[Nullable(new[] { 0, 2, 2 })]
	public MethodCall<object, object> call; // 0x10

	// Methods

	// RVA: 0xEE0C18 Offset: 0xEDCC18 VA: 0xEE0C18
	public void .ctor() { }

	[NullableContext(2)]
	// RVA: 0xEE4A64 Offset: 0xEE0A64 VA: 0xEE4A64
	internal object <CreateCastConverter>b__0(object o) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal static class ConvertUtils // TypeDefIndex: 4202
{
	// Fields
	private static readonly Dictionary<Type, PrimitiveTypeCode> TypeCodeMap; // 0x0
	private static readonly TypeInformation[] PrimitiveTypeCodes; // 0x8
	[Nullable(new[] { 1, 0, 1, 1, 2, 2, 2 })]
	private static readonly ThreadSafeStore<StructMultiKey<Type, Type>, Func<object, object>> CastConverters; // 0x10

	// Methods

	// RVA: 0xEE03D8 Offset: 0xEDC3D8 VA: 0xEE03D8
	public static PrimitiveTypeCode GetTypeCode(Type t) { }

	// RVA: 0xEE0440 Offset: 0xEDC440 VA: 0xEE0440
	public static PrimitiveTypeCode GetTypeCode(Type t, out bool isEnum) { }

	// RVA: 0xEE07D4 Offset: 0xEDC7D4 VA: 0xEE07D4
	public static TypeInformation GetTypeInformation(IConvertible convertable) { }

	// RVA: 0xEE08C0 Offset: 0xEDC8C0 VA: 0xEE08C0
	public static bool IsConvertible(Type t) { }

	// RVA: 0xEE0954 Offset: 0xEDC954 VA: 0xEE0954
	public static TimeSpan ParseTimeSpan(string input) { }

	[NullableContext(2)]
	// RVA: 0xEE09E4 Offset: 0xEDC9E4 VA: 0xEE09E4
	private static Func<object, object> CreateCastConverter(StructMultiKey<Type, Type> t) { }

	// RVA: 0xEE0C20 Offset: 0xEDCC20 VA: 0xEE0C20
	internal static BigInteger ToBigInteger(object value) { }

	// RVA: 0xEE1038 Offset: 0xEDD038 VA: 0xEE1038
	public static object FromBigInteger(BigInteger i, Type targetType) { }

	// RVA: 0xEE154C Offset: 0xEDD54C VA: 0xEE154C
	public static object Convert(object initialValue, CultureInfo culture, Type targetType) { }

	// RVA: 0xEE2288 Offset: 0xEDE288 VA: 0xEE2288
	private static bool TryConvert(object initialValue, CultureInfo culture, Type targetType, out object value) { }

	// RVA: 0xEE17A8 Offset: 0xEDD7A8 VA: 0xEE17A8
	private static ConvertUtils.ConvertResult TryConvertInternal(object initialValue, CultureInfo culture, Type targetType, out object value) { }

	// RVA: 0xEE2724 Offset: 0xEDE724 VA: 0xEE2724
	public static object ConvertOrCast(object initialValue, CultureInfo culture, Type targetType) { }

	// RVA: 0xEE24C4 Offset: 0xEDE4C4 VA: 0xEE24C4
	private static object EnsureTypeAssignable(object value, Type initialType, Type targetType) { }

	// RVA: 0xEE2420 Offset: 0xEDE420 VA: 0xEE2420
	public static bool VersionTryParse(string input, out Version result) { }

	// RVA: 0xEE2390 Offset: 0xEDE390 VA: 0xEE2390
	public static bool IsInteger(object value) { }

	// RVA: 0xEE28B8 Offset: 0xEDE8B8 VA: 0xEE28B8
	public static ParseResult Int32TryParse(char[] chars, int start, int length, out int value) { }

	// RVA: 0xEE2A34 Offset: 0xEDEA34 VA: 0xEE2A34
	public static ParseResult Int64TryParse(char[] chars, int start, int length, out long value) { }

	// RVA: 0xEE2BA4 Offset: 0xEDEBA4 VA: 0xEE2BA4
	public static ParseResult DecimalTryParse(char[] chars, int start, int length, out Decimal value) { }

	// RVA: 0xEE3710 Offset: 0xEDF710 VA: 0xEE3710
	public static bool TryConvertGuid(string s, out Guid g) { }

	// RVA: 0xEE376C Offset: 0xEDF76C VA: 0xEE376C
	public static bool TryHexTextToInt(char[] text, int start, int end, out int value) { }

	// RVA: 0xEE383C Offset: 0xEDF83C VA: 0xEE383C
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Utilities
internal enum ParserTimeZone // TypeDefIndex: 4203
{
	// Fields
	public int value__; // 0x0
	public const ParserTimeZone Unspecified = 0;
	public const ParserTimeZone Utc = 1;
	public const ParserTimeZone LocalWestOfUtc = 2;
	public const ParserTimeZone LocalEastOfUtc = 3;
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal struct DateTimeParser // TypeDefIndex: 4204
{
	// Fields
	public int Year; // 0x0
	public int Month; // 0x4
	public int Day; // 0x8
	public int Hour; // 0xC
	public int Minute; // 0x10
	public int Second; // 0x14
	public int Fraction; // 0x18
	public int ZoneHour; // 0x1C
	public int ZoneMinute; // 0x20
	public ParserTimeZone Zone; // 0x24
	private char[] _text; // 0x28
	private int _end; // 0x30
	private static readonly int[] Power10; // 0x0
	private static readonly int Lzyyyy; // 0x8
	private static readonly int Lzyyyy_; // 0xC
	private static readonly int Lzyyyy_MM; // 0x10
	private static readonly int Lzyyyy_MM_; // 0x14
	private static readonly int Lzyyyy_MM_dd; // 0x18
	private static readonly int Lzyyyy_MM_ddT; // 0x1C
	private static readonly int LzHH; // 0x20
	private static readonly int LzHH_; // 0x24
	private static readonly int LzHH_mm; // 0x28
	private static readonly int LzHH_mm_; // 0x2C
	private static readonly int LzHH_mm_ss; // 0x30
	private static readonly int Lz_; // 0x34
	private static readonly int Lz_zz; // 0x38

	// Methods

	// RVA: 0xEE4B24 Offset: 0xEE0B24 VA: 0xEE4B24
	private static void .cctor() { }

	// RVA: 0xEE4D98 Offset: 0xEE0D98 VA: 0xEE4D98
	public bool Parse(char[] text, int startIndex, int length) { }

	// RVA: 0xEE4E88 Offset: 0xEE0E88 VA: 0xEE4E88
	private bool ParseDate(int start) { }

	// RVA: 0xEE507C Offset: 0xEE107C VA: 0xEE507C
	private bool ParseTimeAndZoneAndWhitespace(int start) { }

	// RVA: 0xEE52A4 Offset: 0xEE12A4 VA: 0xEE52A4
	private bool ParseTime(ref int start) { }

	// RVA: 0xEE5580 Offset: 0xEE1580 VA: 0xEE5580
	private bool ParseZone(int start) { }

	// RVA: 0xEE5118 Offset: 0xEE1118 VA: 0xEE5118
	private bool Parse4Digit(int start, out int num) { }

	// RVA: 0xEE5208 Offset: 0xEE1208 VA: 0xEE5208
	private bool Parse2Digit(int start, out int num) { }

	// RVA: 0xEE5030 Offset: 0xEE1030 VA: 0xEE5030
	private bool ParseChar(int start, char ch) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[Extension]
[NullableContext(1)]
internal static class DateTimeUtils // TypeDefIndex: 4205
{
	// Fields
	internal static readonly long InitialJavaScriptDateTicks; // 0x0
	private static readonly int[] DaysToMonth365; // 0x8
	private static readonly int[] DaysToMonth366; // 0x10

	// Methods

	// RVA: 0xEE5788 Offset: 0xEE1788 VA: 0xEE5788
	private static void .cctor() { }

	[Extension]
	// RVA: 0xEE5874 Offset: 0xEE1874 VA: 0xEE5874
	public static TimeSpan GetUtcOffset(DateTime d) { }

	// RVA: 0xEE58DC Offset: 0xEE18DC VA: 0xEE58DC
	public static XmlDateTimeSerializationMode ToSerializationMode(DateTimeKind kind) { }

	// RVA: 0xEE5A54 Offset: 0xEE1A54 VA: 0xEE5A54
	internal static DateTime EnsureDateTime(DateTime value, DateTimeZoneHandling timeZone) { }

	// RVA: 0xEE5BA4 Offset: 0xEE1BA4 VA: 0xEE5BA4
	private static DateTime SwitchToLocalTime(DateTime value) { }

	// RVA: 0xEE5C7C Offset: 0xEE1C7C VA: 0xEE5C7C
	private static DateTime SwitchToUtcTime(DateTime value) { }

	// RVA: 0xEE5D54 Offset: 0xEE1D54 VA: 0xEE5D54
	private static long ToUniversalTicks(DateTime dateTime) { }

	// RVA: 0xEE5E14 Offset: 0xEE1E14 VA: 0xEE5E14
	private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset) { }

	// RVA: 0xEE5F70 Offset: 0xEE1F70 VA: 0xEE5F70
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset) { }

	// RVA: 0xEE6054 Offset: 0xEE2054 VA: 0xEE6054
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime) { }

	// RVA: 0xEE60AC Offset: 0xEE20AC VA: 0xEE60AC
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc) { }

	// RVA: 0xEE5FD8 Offset: 0xEE1FD8 VA: 0xEE5FD8
	private static long UniversalTicksToJavaScriptTicks(long universalTicks) { }

	// RVA: 0xEE6168 Offset: 0xEE2168 VA: 0xEE6168
	internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks) { }

	// RVA: 0xEE61F0 Offset: 0xEE21F0 VA: 0xEE61F0
	internal static bool TryParseDateTimeIso(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt) { }

	// RVA: 0xEE672C Offset: 0xEE272C VA: 0xEE672C
	internal static bool TryParseDateTimeOffsetIso(StringReference text, out DateTimeOffset dt) { }

	// RVA: 0xEE6634 Offset: 0xEE2634 VA: 0xEE6634
	private static DateTime CreateDateTime(DateTimeParser dateTimeParser) { }

	// RVA: 0xEE69BC Offset: 0xEE29BC VA: 0xEE69BC
	internal static bool TryParseDateTime(StringReference s, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt) { }

	// RVA: 0xEE700C Offset: 0xEE300C VA: 0xEE700C
	internal static bool TryParseDateTime(string s, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt) { }

	// RVA: 0xEE72D4 Offset: 0xEE32D4 VA: 0xEE72D4
	internal static bool TryParseDateTimeOffset(StringReference s, string dateFormatString, CultureInfo culture, out DateTimeOffset dt) { }

	// RVA: 0xEE76FC Offset: 0xEE36FC VA: 0xEE76FC
	internal static bool TryParseDateTimeOffset(string s, string dateFormatString, CultureInfo culture, out DateTimeOffset dt) { }

	// RVA: 0xEE79C0 Offset: 0xEE39C0 VA: 0xEE79C0
	private static bool TryParseMicrosoftDate(StringReference text, out long ticks, out TimeSpan offset, out DateTimeKind kind) { }

	// RVA: 0xEE6DA0 Offset: 0xEE2DA0 VA: 0xEE6DA0
	private static bool TryParseDateTimeMicrosoft(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt) { }

	// RVA: 0xEE6F28 Offset: 0xEE2F28 VA: 0xEE6F28
	private static bool TryParseDateTimeExact(string text, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt) { }

	// RVA: 0xEE74EC Offset: 0xEE34EC VA: 0xEE74EC
	private static bool TryParseDateTimeOffsetMicrosoft(StringReference text, out DateTimeOffset dt) { }

	// RVA: 0xEE7650 Offset: 0xEE3650 VA: 0xEE7650
	private static bool TryParseDateTimeOffsetExact(string text, string dateFormatString, CultureInfo culture, out DateTimeOffset dt) { }

	// RVA: 0xEE7BC4 Offset: 0xEE3BC4 VA: 0xEE7BC4
	private static bool TryReadOffset(StringReference offsetText, int startIndex, out TimeSpan offset) { }

	// RVA: 0xEE7D48 Offset: 0xEE3D48 VA: 0xEE7D48
	internal static void WriteDateTimeString(TextWriter writer, DateTime value, DateFormatHandling format, string formatString, CultureInfo culture) { }

	// RVA: 0xEE7EC0 Offset: 0xEE3EC0 VA: 0xEE7EC0
	internal static int WriteDateTimeString(char[] chars, int start, DateTime value, Nullable<TimeSpan> offset, DateTimeKind kind, DateFormatHandling format) { }

	// RVA: 0xEE8440 Offset: 0xEE4440 VA: 0xEE8440
	internal static int WriteDefaultIsoDate(char[] chars, int start, DateTime dt) { }

	// RVA: 0xEE8A9C Offset: 0xEE4A9C VA: 0xEE8A9C
	private static void CopyIntToCharArray(char[] chars, int start, int value, int digits) { }

	// RVA: 0xEE8288 Offset: 0xEE4288 VA: 0xEE8288
	internal static int WriteDateTimeOffset(char[] chars, int start, TimeSpan offset, DateFormatHandling format) { }

	// RVA: 0xEE8B04 Offset: 0xEE4B04 VA: 0xEE8B04
	internal static void WriteDateTimeOffsetString(TextWriter writer, DateTimeOffset value, DateFormatHandling format, string formatString, CultureInfo culture) { }

	// RVA: 0xEE886C Offset: 0xEE486C VA: 0xEE886C
	private static void GetDateValues(DateTime td, out int year, out int month, out int day) { }
}


// Namespace: Newtonsoft.Json.Utilities
internal interface IWrappedDictionary : IDictionary, ICollection, IEnumerable // TypeDefIndex: 4206
{
	// Properties
	[Nullable(1)]
	public abstract object UnderlyingDictionary { get; }

	// Methods

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract object get_UnderlyingDictionary();
}


// Namespace: 
[Nullable(0)]
private struct DictionaryWrapper.DictionaryEnumerator<TKey, TValue, TEnumeratorKey, TEnumeratorValue> : IDictionaryEnumerator, IEnumerator // TypeDefIndex: 4207
{
	// Fields
	[Nullable(new[] { 1, 0, 1, 1 })]
	private readonly IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _e; // 0x0

	// Properties
	public DictionaryEntry Entry { get; }
	public object Key { get; }
	[Nullable(2)]
	public object Value { get; }
	public object Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8030 Offset: 0xBF4030 VA: 0xBF8030
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public DictionaryEntry get_Entry() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8090 Offset: 0xBF4090 VA: 0xBF8090
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Entry
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public object get_Key() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8124 Offset: 0xBF4124 VA: 0xBF8124
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Key
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 5
	public object get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8158 Offset: 0xBF4158 VA: 0xBF8158
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Value
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public object get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8194 Offset: 0xBF4194 VA: 0xBF8194
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8514 Offset: 0xBF4514 VA: 0xBF8514
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public void Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF85B4 Offset: 0xBF45B4 VA: 0xBF85B4
	|-DictionaryWrapper.DictionaryEnumerator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Reset
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class DictionaryWrapper.<>c<TKey, TValue> // TypeDefIndex: 4208
{
	// Fields
	[Nullable(0)]
	public static readonly DictionaryWrapper.<>c<TKey, TValue> <>9; // 0x0
	[Nullable(0)]
	public static Func<DictionaryEntry, KeyValuePair<TKey, TValue>> <>9__29_0; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB82E0 Offset: 0xBB42E0 VA: 0xBB82E0
	|-DictionaryWrapper.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB839C Offset: 0xBB439C VA: 0xBB839C
	|-DictionaryWrapper.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal KeyValuePair<TKey, TValue> <GetEnumerator>b__29_0(DictionaryEntry de) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB83A4 Offset: 0xBB43A4 VA: 0xBB83A4
	|-DictionaryWrapper.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<GetEnumerator>b__29_0
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[DefaultMember("Item")]
[Nullable(0)]
[NullableContext(1)]
internal class DictionaryWrapper<TKey, TValue> : IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IWrappedDictionary, IDictionary, ICollection // TypeDefIndex: 4209
{
	// Fields
	[Nullable(2)]
	private readonly IDictionary _dictionary; // 0x0
	[Nullable(new[] { 2, 1, 1 })]
	private readonly IDictionary<TKey, TValue> _genericDictionary; // 0x0
	[Nullable(new[] { 2, 1, 1 })]
	private readonly IReadOnlyDictionary<TKey, TValue> _readOnlyDictionary; // 0x0
	[Nullable(2)]
	private object _syncRoot; // 0x0

	// Properties
	internal IDictionary<TKey, TValue> GenericDictionary { get; }
	public ICollection<TKey> Keys { get; }
	public ICollection<TValue> Values { get; }
	public TValue Item { get; set; }
	public int Count { get; }
	public bool IsReadOnly { get; }
	[Nullable(2)]
	private object System.Collections.IDictionary.Item { get; set; }
	private ICollection System.Collections.IDictionary.Keys { get; }
	private ICollection System.Collections.IDictionary.Values { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	public object UnderlyingDictionary { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal IDictionary<TKey, TValue> get_GenericDictionary() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF86C8 Offset: 0xBF46C8 VA: 0xBF86C8
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_GenericDictionary
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public void Add(TKey key, TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF86D0 Offset: 0xBF46D0 VA: 0xBF86D0
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public bool ContainsKey(TKey key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8998 Offset: 0xBF4998 VA: 0xBF8998
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.ContainsKey
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public ICollection<TKey> get_Keys() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8C4C Offset: 0xBF4C4C VA: 0xBF8C4C
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Keys
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public bool Remove(TKey key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8E20 Offset: 0xBF4E20 VA: 0xBF8E20
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1 Slot: 11
	public bool TryGetValue(TKey key, out TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF912C Offset: 0xBF512C VA: 0xBF912C
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.TryGetValue
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public ICollection<TValue> get_Values() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF94C8 Offset: 0xBF54C8 VA: 0xBF94C8
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Values
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public TValue get_Item(TKey key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF969C Offset: 0xBF569C VA: 0xBF969C
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Item
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void set_Item(TKey key, TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF99A8 Offset: 0xBF59A8 VA: 0xBF99A8
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.set_Item
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public void Add(KeyValuePair<TKey, TValue> item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF9C7C Offset: 0xBF5C7C VA: 0xBF9C7C
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1 Slot: 28
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF9EC4 Offset: 0xBF5EC4 VA: 0xBF9EC4
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Clear
	*/

	// RVA: -1 Offset: -1 Slot: 16
	public bool Contains(KeyValuePair<TKey, TValue> item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFA004 Offset: 0xBF6004 VA: 0xBFA004
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Contains
	*/

	// RVA: -1 Offset: -1 Slot: 17
	public void CopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFA284 Offset: 0xBF6284 VA: 0xBFA284
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 33
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFA8D4 Offset: 0xBF68D4 VA: 0xBFA8D4
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1 Slot: 29
	public bool get_IsReadOnly() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFAA40 Offset: 0xBF6A40 VA: 0xBFAA40
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_IsReadOnly
	*/

	// RVA: -1 Offset: -1 Slot: 18
	public bool Remove(KeyValuePair<TKey, TValue> item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFAB68 Offset: 0xBF6B68 VA: 0xBFAB68
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1 Slot: 19
	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFAF44 Offset: 0xBF6F44 VA: 0xBFAF44
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 20
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFB1F8 Offset: 0xBF71F8 VA: 0xBFB1F8
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 27
	private void System.Collections.IDictionary.Add(object key, object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFB208 Offset: 0xBF7208 VA: 0xBFB208
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.Add
	*/

	// RVA: -1 Offset: -1 Slot: 22
	private object System.Collections.IDictionary.get_Item(object key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFB484 Offset: 0xBF7484 VA: 0xBFB484
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.get_Item
	*/

	// RVA: -1 Offset: -1 Slot: 23
	private void System.Collections.IDictionary.set_Item(object key, object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFB740 Offset: 0xBF7740 VA: 0xBFB740
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.set_Item
	*/

	// RVA: -1 Offset: -1 Slot: 30
	private IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFB9BC Offset: 0xBF79BC VA: 0xBFB9BC
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 26
	private bool System.Collections.IDictionary.Contains(object key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFBB7C Offset: 0xBF7B7C VA: 0xBFBB7C
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.Contains
	*/

	// RVA: -1 Offset: -1 Slot: 24
	private ICollection System.Collections.IDictionary.get_Keys() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFBE28 Offset: 0xBF7E28 VA: 0xBFBE28
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.get_Keys
	*/

	// RVA: -1 Offset: -1 Slot: 31
	public void Remove(object key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFBFD0 Offset: 0xBF7FD0 VA: 0xBFBFD0
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1 Slot: 25
	private ICollection System.Collections.IDictionary.get_Values() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFC1E4 Offset: 0xBF81E4 VA: 0xBFC1E4
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IDictionary.get_Values
	*/

	// RVA: -1 Offset: -1 Slot: 32
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFC38C Offset: 0xBF838C VA: 0xBFC38C
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.ICollection.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 35
	private bool System.Collections.ICollection.get_IsSynchronized() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFC550 Offset: 0xBF8550 VA: 0xBFC550
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.ICollection.get_IsSynchronized
	*/

	// RVA: -1 Offset: -1 Slot: 34
	private object System.Collections.ICollection.get_SyncRoot() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFC600 Offset: 0xBF8600 VA: 0xBFC600
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.ICollection.get_SyncRoot
	*/

	// RVA: -1 Offset: -1 Slot: 21
	public object get_UnderlyingDictionary() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBFC674 Offset: 0xBF8674 VA: 0xBFC674
	|-DictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_UnderlyingDictionary
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class DynamicProxy<T> // TypeDefIndex: 4210
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public virtual IEnumerable<string> GetDynamicMemberNames(T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A658 Offset: 0xC06658 VA: 0xC0A658
	|-DynamicProxy<__Il2CppFullySharedGenericType>.GetDynamicMemberNames
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public virtual bool TryBinaryOperation(T instance, BinaryOperationBinder binder, object arg, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A6E4 Offset: 0xC066E4 VA: 0xC0A6E4
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryBinaryOperation
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public virtual bool TryConvert(T instance, ConvertBinder binder, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A6F0 Offset: 0xC066F0 VA: 0xC0A6F0
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryConvert
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public virtual bool TryCreateInstance(T instance, CreateInstanceBinder binder, object[] args, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A6FC Offset: 0xC066FC VA: 0xC0A6FC
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryCreateInstance
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public virtual bool TryDeleteIndex(T instance, DeleteIndexBinder binder, object[] indexes) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A708 Offset: 0xC06708 VA: 0xC0A708
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryDeleteIndex
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public virtual bool TryDeleteMember(T instance, DeleteMemberBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A710 Offset: 0xC06710 VA: 0xC0A710
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryDeleteMember
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public virtual bool TryGetIndex(T instance, GetIndexBinder binder, object[] indexes, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A718 Offset: 0xC06718 VA: 0xC0A718
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryGetIndex
	*/

	// RVA: -1 Offset: -1 Slot: 11
	public virtual bool TryGetMember(T instance, GetMemberBinder binder, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A724 Offset: 0xC06724 VA: 0xC0A724
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryGetMember
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual bool TryInvoke(T instance, InvokeBinder binder, object[] args, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A730 Offset: 0xC06730 VA: 0xC0A730
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryInvoke
	*/

	// RVA: -1 Offset: -1 Slot: 13
	public virtual bool TryInvokeMember(T instance, InvokeMemberBinder binder, object[] args, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A73C Offset: 0xC0673C VA: 0xC0A73C
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryInvokeMember
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public virtual bool TrySetIndex(T instance, SetIndexBinder binder, object[] indexes, object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A748 Offset: 0xC06748 VA: 0xC0A748
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TrySetIndex
	*/

	// RVA: -1 Offset: -1 Slot: 15
	public virtual bool TrySetMember(T instance, SetMemberBinder binder, object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A750 Offset: 0xC06750 VA: 0xC0A750
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TrySetMember
	*/

	// RVA: -1 Offset: -1 Slot: 16
	public virtual bool TryUnaryOperation(T instance, UnaryOperationBinder binder, out object result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A758 Offset: 0xC06758 VA: 0xC0A758
	|-DynamicProxy<__Il2CppFullySharedGenericType>.TryUnaryOperation
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A764 Offset: 0xC06764 VA: 0xC0A764
	|-DynamicProxy<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
[NullableContext(0)]
private sealed class DynamicProxyMetaObject.Fallback<T> : MulticastDelegate // TypeDefIndex: 4211
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC16F98 Offset: 0xC12F98 VA: 0xC16F98
	|-DynamicProxyMetaObject.Fallback<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 12
	public virtual DynamicMetaObject Invoke(DynamicMetaObject errorSuggestion) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC17098 Offset: 0xC13098 VA: 0xC17098
	|-DynamicProxyMetaObject.Fallback<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: 
[Nullable(0)]
private sealed class DynamicProxyMetaObject.GetBinderAdapter<T> : GetMemberBinder // TypeDefIndex: 4212
{
	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(InvokeMemberBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1E570 Offset: 0xC1A570 VA: 0xC1E570
	|-DynamicProxyMetaObject.GetBinderAdapter<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public override DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1E594 Offset: 0xC1A594 VA: 0xC1E594
	|-DynamicProxyMetaObject.GetBinderAdapter<__Il2CppFullySharedGenericType>.FallbackGetMember
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class DynamicProxyMetaObject.<>c<T> // TypeDefIndex: 4213
{
	// Fields
	[Nullable(0)]
	public static readonly DynamicProxyMetaObject.<>c<T> <>9; // 0x0
	[Nullable(0)]
	public static Func<DynamicMetaObject, Expression> <>9__18_0; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB7248 Offset: 0xBB3248 VA: 0xBB7248
	|-DynamicProxyMetaObject.<>c<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB7304 Offset: 0xBB3304 VA: 0xBB7304
	|-DynamicProxyMetaObject.<>c<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal Expression <GetArgs>b__18_0(DynamicMetaObject arg) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB730C Offset: 0xBB330C VA: 0xBB730C
	|-DynamicProxyMetaObject.<>c<__Il2CppFullySharedGenericType>.<GetArgs>b__18_0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass10_0<T> // TypeDefIndex: 4214
{
	// Fields
	[Nullable(0)]
	public BinaryOperationBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(0)]
	public DynamicMetaObject arg; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB91C0 Offset: 0xBB51C0 VA: 0xBB91C0
	|-DynamicProxyMetaObject.<>c__DisplayClass10_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindBinaryOperation>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB91C8 Offset: 0xBB51C8 VA: 0xBB91C8
	|-DynamicProxyMetaObject.<>c__DisplayClass10_0<__Il2CppFullySharedGenericType>.<BindBinaryOperation>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass11_0<T> // TypeDefIndex: 4215
{
	// Fields
	[Nullable(0)]
	public UnaryOperationBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9384 Offset: 0xBB5384 VA: 0xBB9384
	|-DynamicProxyMetaObject.<>c__DisplayClass11_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindUnaryOperation>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB938C Offset: 0xBB538C VA: 0xBB938C
	|-DynamicProxyMetaObject.<>c__DisplayClass11_0<__Il2CppFullySharedGenericType>.<BindUnaryOperation>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass12_0<T> // TypeDefIndex: 4216
{
	// Fields
	[Nullable(0)]
	public GetIndexBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(new[] { 0, 1 })]
	public DynamicMetaObject[] indexes; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB93B8 Offset: 0xBB53B8 VA: 0xBB93B8
	|-DynamicProxyMetaObject.<>c__DisplayClass12_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindGetIndex>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB93C0 Offset: 0xBB53C0 VA: 0xBB93C0
	|-DynamicProxyMetaObject.<>c__DisplayClass12_0<__Il2CppFullySharedGenericType>.<BindGetIndex>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass13_0<T> // TypeDefIndex: 4217
{
	// Fields
	[Nullable(0)]
	public SetIndexBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(new[] { 0, 1 })]
	public DynamicMetaObject[] indexes; // 0x0
	[Nullable(0)]
	public DynamicMetaObject value; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB93EC Offset: 0xBB53EC VA: 0xBB93EC
	|-DynamicProxyMetaObject.<>c__DisplayClass13_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindSetIndex>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB93F4 Offset: 0xBB53F4 VA: 0xBB93F4
	|-DynamicProxyMetaObject.<>c__DisplayClass13_0<__Il2CppFullySharedGenericType>.<BindSetIndex>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass14_0<T> // TypeDefIndex: 4218
{
	// Fields
	[Nullable(0)]
	public DeleteIndexBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(new[] { 0, 1 })]
	public DynamicMetaObject[] indexes; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9424 Offset: 0xBB5424 VA: 0xBB9424
	|-DynamicProxyMetaObject.<>c__DisplayClass14_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindDeleteIndex>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB942C Offset: 0xBB542C VA: 0xBB942C
	|-DynamicProxyMetaObject.<>c__DisplayClass14_0<__Il2CppFullySharedGenericType>.<BindDeleteIndex>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass3_0<T> // TypeDefIndex: 4219
{
	// Fields
	[Nullable(0)]
	public GetMemberBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA8B4 Offset: 0xBB68B4 VA: 0xBBA8B4
	|-DynamicProxyMetaObject.<>c__DisplayClass3_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindGetMember>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA8BC Offset: 0xBB68BC VA: 0xBBA8BC
	|-DynamicProxyMetaObject.<>c__DisplayClass3_0<__Il2CppFullySharedGenericType>.<BindGetMember>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass4_0<T> // TypeDefIndex: 4220
{
	// Fields
	[Nullable(0)]
	public SetMemberBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(0)]
	public DynamicMetaObject value; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA9D4 Offset: 0xBB69D4 VA: 0xBBA9D4
	|-DynamicProxyMetaObject.<>c__DisplayClass4_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindSetMember>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBA9DC Offset: 0xBB69DC VA: 0xBBA9DC
	|-DynamicProxyMetaObject.<>c__DisplayClass4_0<__Il2CppFullySharedGenericType>.<BindSetMember>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass5_0<T> // TypeDefIndex: 4221
{
	// Fields
	[Nullable(0)]
	public DeleteMemberBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAD34 Offset: 0xBB6D34 VA: 0xBBAD34
	|-DynamicProxyMetaObject.<>c__DisplayClass5_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindDeleteMember>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAD3C Offset: 0xBB6D3C VA: 0xBBAD3C
	|-DynamicProxyMetaObject.<>c__DisplayClass5_0<__Il2CppFullySharedGenericType>.<BindDeleteMember>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass6_0<T> // TypeDefIndex: 4222
{
	// Fields
	[Nullable(0)]
	public ConvertBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAF0C Offset: 0xBB6F0C VA: 0xBBAF0C
	|-DynamicProxyMetaObject.<>c__DisplayClass6_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindConvert>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAF14 Offset: 0xBB6F14 VA: 0xBBAF14
	|-DynamicProxyMetaObject.<>c__DisplayClass6_0<__Il2CppFullySharedGenericType>.<BindConvert>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass7_0<T> // TypeDefIndex: 4223
{
	// Fields
	[Nullable(0)]
	public InvokeMemberBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(new[] { 0, 1 })]
	public DynamicMetaObject[] args; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB418 Offset: 0xBB7418 VA: 0xBBB418
	|-DynamicProxyMetaObject.<>c__DisplayClass7_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindInvokeMember>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB420 Offset: 0xBB7420 VA: 0xBBB420
	|-DynamicProxyMetaObject.<>c__DisplayClass7_0<__Il2CppFullySharedGenericType>.<BindInvokeMember>b__0
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindInvokeMember>b__1(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB44C Offset: 0xBB744C VA: 0xBBB44C
	|-DynamicProxyMetaObject.<>c__DisplayClass7_0<__Il2CppFullySharedGenericType>.<BindInvokeMember>b__1
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass8_0<T> // TypeDefIndex: 4224
{
	// Fields
	[Nullable(0)]
	public CreateInstanceBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(new[] { 0, 1 })]
	public DynamicMetaObject[] args; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB6A0 Offset: 0xBB76A0 VA: 0xBBB6A0
	|-DynamicProxyMetaObject.<>c__DisplayClass8_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindCreateInstance>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB6A8 Offset: 0xBB76A8 VA: 0xBBB6A8
	|-DynamicProxyMetaObject.<>c__DisplayClass8_0<__Il2CppFullySharedGenericType>.<BindCreateInstance>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class DynamicProxyMetaObject.<>c__DisplayClass9_0<T> // TypeDefIndex: 4225
{
	// Fields
	[Nullable(0)]
	public InvokeBinder binder; // 0x0
	[Nullable(0)]
	public DynamicProxyMetaObject<T> <>4__this; // 0x0
	[Nullable(new[] { 0, 1 })]
	public DynamicMetaObject[] args; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB7A0 Offset: 0xBB77A0 VA: 0xBBB7A0
	|-DynamicProxyMetaObject.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal DynamicMetaObject <BindInvoke>b__0(DynamicMetaObject e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB7A8 Offset: 0xBB77A8 VA: 0xBBB7A8
	|-DynamicProxyMetaObject.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType>.<BindInvoke>b__0
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal sealed class DynamicProxyMetaObject<T> : DynamicMetaObject // TypeDefIndex: 4226
{
	// Fields
	private readonly DynamicProxy<T> _proxy; // 0x0

	// Properties
	private static Expression[] NoArgs { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(Expression expression, T value, DynamicProxy<T> proxy) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC07B30 Offset: 0xC03B30 VA: 0xC07B30
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	private bool IsOverridden(string method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC07C90 Offset: 0xC03C90 VA: 0xC07C90
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.IsOverridden
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public override DynamicMetaObject BindGetMember(GetMemberBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC07D60 Offset: 0xC03D60 VA: 0xC07D60
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindGetMember
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public override DynamicMetaObject BindSetMember(SetMemberBinder binder, DynamicMetaObject value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC07EA4 Offset: 0xC03EA4 VA: 0xC07EA4
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindSetMember
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public override DynamicMetaObject BindDeleteMember(DeleteMemberBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08060 Offset: 0xC04060 VA: 0xC08060
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindDeleteMember
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public override DynamicMetaObject BindConvert(ConvertBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC081A0 Offset: 0xC041A0 VA: 0xC081A0
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindConvert
	*/

	// RVA: -1 Offset: -1 Slot: 11
	public override DynamicMetaObject BindInvokeMember(InvokeMemberBinder binder, DynamicMetaObject[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC082E4 Offset: 0xC042E4 VA: 0xC082E4
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindInvokeMember
	*/

	// RVA: -1 Offset: -1 Slot: 13
	public override DynamicMetaObject BindCreateInstance(CreateInstanceBinder binder, DynamicMetaObject[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08528 Offset: 0xC04528 VA: 0xC08528
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindCreateInstance
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public override DynamicMetaObject BindInvoke(InvokeBinder binder, DynamicMetaObject[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08688 Offset: 0xC04688 VA: 0xC08688
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindInvoke
	*/

	// RVA: -1 Offset: -1 Slot: 15
	public override DynamicMetaObject BindBinaryOperation(BinaryOperationBinder binder, DynamicMetaObject arg) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC087E8 Offset: 0xC047E8 VA: 0xC087E8
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindBinaryOperation
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public override DynamicMetaObject BindUnaryOperation(UnaryOperationBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC089A8 Offset: 0xC049A8 VA: 0xC089A8
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindUnaryOperation
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public override DynamicMetaObject BindGetIndex(GetIndexBinder binder, DynamicMetaObject[] indexes) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08AEC Offset: 0xC04AEC VA: 0xC08AEC
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindGetIndex
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public override DynamicMetaObject BindSetIndex(SetIndexBinder binder, DynamicMetaObject[] indexes, DynamicMetaObject value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08C4C Offset: 0xC04C4C VA: 0xC08C4C
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindSetIndex
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public override DynamicMetaObject BindDeleteIndex(DeleteIndexBinder binder, DynamicMetaObject[] indexes) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08DAC Offset: 0xC04DAC VA: 0xC08DAC
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BindDeleteIndex
	*/

	// RVA: -1 Offset: -1
	private static Expression[] get_NoArgs() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08F08 Offset: 0xC04F08 VA: 0xC08F08
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.get_NoArgs
	*/

	// RVA: -1 Offset: -1
	private static IEnumerable<Expression> GetArgs(DynamicMetaObject[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC08F94 Offset: 0xC04F94 VA: 0xC08F94
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.GetArgs
	*/

	// RVA: -1 Offset: -1
	private static Expression[] GetArgArray(DynamicMetaObject[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC09148 Offset: 0xC05148 VA: 0xC09148
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.GetArgArray
	*/

	// RVA: -1 Offset: -1
	private static Expression[] GetArgArray(DynamicMetaObject[] args, DynamicMetaObject value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC092A4 Offset: 0xC052A4 VA: 0xC092A4
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.GetArgArray
	*/

	// RVA: -1 Offset: -1
	private static ConstantExpression Constant(DynamicMetaObjectBinder binder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC094A8 Offset: 0xC054A8 VA: 0xC094A8
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.Constant
	*/

	// RVA: -1 Offset: -1
	private DynamicMetaObject CallMethodWithResult(string methodName, DynamicMetaObjectBinder binder, IEnumerable<Expression> args, DynamicProxyMetaObject.Fallback<T> fallback, DynamicProxyMetaObject.Fallback<T> fallbackInvoke) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC09538 Offset: 0xC05538 VA: 0xC09538
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.CallMethodWithResult
	*/

	// RVA: -1 Offset: -1
	private DynamicMetaObject BuildCallMethodWithResult(string methodName, DynamicMetaObjectBinder binder, IEnumerable<Expression> args, DynamicMetaObject fallbackResult, DynamicProxyMetaObject.Fallback<T> fallbackInvoke) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC095B4 Offset: 0xC055B4 VA: 0xC095B4
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.BuildCallMethodWithResult
	*/

	// RVA: -1 Offset: -1
	private DynamicMetaObject CallMethodReturnLast(string methodName, DynamicMetaObjectBinder binder, IEnumerable<Expression> args, DynamicProxyMetaObject.Fallback<T> fallback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC09B94 Offset: 0xC05B94 VA: 0xC09B94
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.CallMethodReturnLast
	*/

	// RVA: -1 Offset: -1
	private DynamicMetaObject CallMethodNoResult(string methodName, DynamicMetaObjectBinder binder, Expression[] args, DynamicProxyMetaObject.Fallback<T> fallback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A158 Offset: 0xC06158 VA: 0xC0A158
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.CallMethodNoResult
	*/

	// RVA: -1 Offset: -1
	private BindingRestrictions GetRestrictions() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A498 Offset: 0xC06498 VA: 0xC0A498
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.GetRestrictions
	*/

	// RVA: -1 Offset: -1 Slot: 16
	public override IEnumerable<string> GetDynamicMemberNames() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0A560 Offset: 0xC06560 VA: 0xC0A560
	|-DynamicProxyMetaObject<__Il2CppFullySharedGenericType>.GetDynamicMemberNames
	*/
}


// Namespace: 
[Nullable(0)]
internal static class DynamicUtils.BinderWrapper // TypeDefIndex: 4227
{
	// Fields
	[Nullable(2)]
	private static object _getCSharpArgumentInfoArray; // 0x0
	[Nullable(2)]
	private static object _setCSharpArgumentInfoArray; // 0x8
	[Nullable(2)]
	private static MethodCall<object, object> _getMemberCall; // 0x10
	[Nullable(2)]
	private static MethodCall<object, object> _setMemberCall; // 0x18
	private static bool _init; // 0x20

	// Methods

	// RVA: 0xEE8DAC Offset: 0xEE4DAC VA: 0xEE8DAC
	private static void Init() { }

	// RVA: 0xEE8F80 Offset: 0xEE4F80 VA: 0xEE8F80
	private static object CreateSharpArgumentInfoArray(int[] values) { }

	// RVA: 0xEE9258 Offset: 0xEE5258 VA: 0xEE9258
	private static void CreateMemberCalls() { }

	// RVA: 0xEE972C Offset: 0xEE572C VA: 0xEE972C
	public static CallSiteBinder GetMember(string name, Type context) { }

	// RVA: 0xEE9910 Offset: 0xEE5910 VA: 0xEE9910
	public static CallSiteBinder SetMember(string name, Type context) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Extension]
[Nullable(0)]
internal static class DynamicUtils // TypeDefIndex: 4228
{
	// Methods

	[Extension]
	// RVA: 0xEE8CC4 Offset: 0xEE4CC4 VA: 0xEE8CC4
	public static IEnumerable<string> GetDynamicMemberNames(IDynamicMetaObjectProvider dynamicProvider) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class NoThrowGetBinderMember : GetMemberBinder // TypeDefIndex: 4229
{
	// Fields
	private readonly GetMemberBinder _innerBinder; // 0x28

	// Methods

	// RVA: 0xEE9AF4 Offset: 0xEE5AF4 VA: 0xEE9AF4
	public void .ctor(GetMemberBinder innerBinder) { }

	// RVA: 0xEE9B2C Offset: 0xEE5B2C VA: 0xEE9B2C Slot: 9
	public override DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class NoThrowSetBinderMember : SetMemberBinder // TypeDefIndex: 4230
{
	// Fields
	private readonly SetMemberBinder _innerBinder; // 0x28

	// Methods

	// RVA: 0xEE9C7C Offset: 0xEE5C7C VA: 0xEE9C7C
	public void .ctor(SetMemberBinder innerBinder) { }

	// RVA: 0xEE9CB4 Offset: 0xEE5CB4 VA: 0xEE9CB4 Slot: 9
	public override DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject errorSuggestion) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class NoThrowExpressionVisitor : ExpressionVisitor // TypeDefIndex: 4231
{
	// Fields
	internal static readonly object ErrorResult; // 0x0

	// Methods

	// RVA: 0xEE9DFC Offset: 0xEE5DFC VA: 0xEE9DFC Slot: 7
	protected override Expression VisitConditional(ConditionalExpression node) { }

	// RVA: 0xEE9C74 Offset: 0xEE5C74 VA: 0xEE9C74
	public void .ctor() { }

	// RVA: 0xEE9EE8 Offset: 0xEE5EE8 VA: 0xEE9EE8
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal class EnumInfo // TypeDefIndex: 4232
{
	// Fields
	public readonly bool IsFlags; // 0x10
	public readonly ulong[] Values; // 0x18
	public readonly string[] Names; // 0x20
	public readonly string[] ResolvedNames; // 0x28

	// Methods

	// RVA: 0xEE9F58 Offset: 0xEE5F58 VA: 0xEE9F58
	public void .ctor(bool isFlags, ulong[] values, string[] names, string[] resolvedNames) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class EnumUtils.<>c // TypeDefIndex: 4233
{
	// Fields
	[Nullable(0)]
	public static readonly EnumUtils.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<EnumMemberAttribute, string> <>9__3_0; // 0x8

	// Methods

	// RVA: 0xEEB738 Offset: 0xEE7738 VA: 0xEEB738
	private static void .cctor() { }

	// RVA: 0xEEB794 Offset: 0xEE7794 VA: 0xEEB794
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEEB79C Offset: 0xEE779C VA: 0xEEB79C
	internal string <InitializeValuesAndNames>b__3_0(EnumMemberAttribute a) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal static class EnumUtils // TypeDefIndex: 4234
{
	// Fields
	[Nullable(new[] { 1, 0, 1, 2, 1 })]
	private static readonly ThreadSafeStore<StructMultiKey<Type, NamingStrategy>, EnumInfo> ValuesAndNamesPerEnum; // 0x0
	private static CamelCaseNamingStrategy _camelCaseNamingStrategy; // 0x8

	// Methods

	// RVA: 0xEE9F9C Offset: 0xEE5F9C VA: 0xEE9F9C
	private static EnumInfo InitializeValuesAndNames(StructMultiKey<Type, NamingStrategy> key) { }

	// RVA: 0xEEA7C0 Offset: 0xEE67C0 VA: 0xEEA7C0
	public static bool TryToString(Type enumType, object value, NamingStrategy namingStrategy, out string name) { }

	// RVA: 0xEEA94C Offset: 0xEE694C VA: 0xEEA94C
	private static string InternalFlagsFormat(EnumInfo entry, ulong result) { }

	// RVA: 0xEEAAE4 Offset: 0xEE6AE4 VA: 0xEEAAE4
	public static EnumInfo GetEnumValuesAndNames(Type enumType) { }

	// RVA: 0xEEA494 Offset: 0xEE6494 VA: 0xEEA494
	private static ulong ToUInt64(object value) { }

	// RVA: 0xEEABB0 Offset: 0xEE6BB0 VA: 0xEEABB0
	public static object ParseEnum(Type enumType, NamingStrategy namingStrategy, string value, bool disallowNumber) { }

	// RVA: 0xEEB514 Offset: 0xEE7514 VA: 0xEEB514
	private static Nullable<int> MatchName(string value, string[] enumNames, string[] resolvedNames, int valueIndex, int valueSubstringLength, StringComparison comparison) { }

	// RVA: 0xEEB418 Offset: 0xEE7418 VA: 0xEEB418
	private static Nullable<int> FindIndexByName(string[] enumNames, string value, int valueIndex, int valueSubstringLength, StringComparison comparison) { }

	// RVA: 0xEEB620 Offset: 0xEE7620 VA: 0xEEB620
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(2)]
[Nullable(0)]
internal class FSharpFunction // TypeDefIndex: 4235
{
	// Fields
	private readonly object _instance; // 0x10
	[Nullable(new[] { 1, 2, 1 })]
	private readonly MethodCall<object, object> _invoker; // 0x18

	// Methods

	// RVA: 0xEEB7B4 Offset: 0xEE77B4 VA: 0xEEB7B4
	public void .ctor(object instance, MethodCall<object, object> invoker) { }

	[NullableContext(1)]
	// RVA: 0xEEB7E0 Offset: 0xEE77E0 VA: 0xEEB7E0
	public object Invoke(object[] args) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class FSharpUtils.<>c__55<TKey, TValue> // TypeDefIndex: 4236
{
	// Fields
	[Nullable(0)]
	public static readonly FSharpUtils.<>c__55<TKey, TValue> <>9; // 0x0
	[Nullable(0)]
	public static Func<KeyValuePair<TKey, TValue>, Tuple<TKey, TValue>> <>9__55_1; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8D38 Offset: 0xBB4D38 VA: 0xBB8D38
	|-FSharpUtils.<>c__55<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8DF4 Offset: 0xBB4DF4 VA: 0xBB8DF4
	|-FSharpUtils.<>c__55<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal Tuple<TKey, TValue> <BuildMapCreator>b__55_1(KeyValuePair<TKey, TValue> kv) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8DFC Offset: 0xBB4DFC VA: 0xBB8DFC
	|-FSharpUtils.<>c__55<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<BuildMapCreator>b__55_1
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class FSharpUtils.<>c__DisplayClass52_0 // TypeDefIndex: 4237
{
	// Fields
	[Nullable(new[] { 0, 2, 2 })]
	public MethodCall<object, object> call; // 0x10
	[Nullable(new[] { 0, 2, 1 })]
	public MethodCall<object, object> invoke; // 0x18

	// Methods

	// RVA: 0xEEC198 Offset: 0xEE8198 VA: 0xEEC198
	public void .ctor() { }

	// RVA: 0xEEC4B4 Offset: 0xEE84B4 VA: 0xEEC4B4
	internal object <CreateFSharpFuncCall>b__0(object target, object[] args) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class FSharpUtils.<>c__DisplayClass55_0<TKey, TValue> // TypeDefIndex: 4238
{
	// Fields
	[Nullable(new[] { 0, 1 })]
	public ObjectConstructor<object> ctorDelegate; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAAF4 Offset: 0xBB6AF4 VA: 0xBBAAF4
	|-FSharpUtils.<>c__DisplayClass55_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal object <BuildMapCreator>b__0(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAAFC Offset: 0xBB6AFC VA: 0xBBAAFC
	|-FSharpUtils.<>c__DisplayClass55_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<BuildMapCreator>b__0
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class FSharpUtils // TypeDefIndex: 4239
{
	// Fields
	private static readonly object Lock; // 0x0
	[Nullable(2)]
	private static FSharpUtils _instance; // 0x8
	private MethodInfo _ofSeq; // 0x10
	private Type _mapType; // 0x18
	[CompilerGenerated]
	private Assembly <FSharpCoreAssembly>k__BackingField; // 0x20
	[Nullable(new[] { 1, 2, 1 })]
	[CompilerGenerated]
	private MethodCall<object, object> <IsUnion>k__BackingField; // 0x28
	[Nullable(new[] { 1, 2, 1 })]
	[CompilerGenerated]
	private MethodCall<object, object> <GetUnionCases>k__BackingField; // 0x30
	[Nullable(new[] { 1, 2, 1 })]
	[CompilerGenerated]
	private MethodCall<object, object> <PreComputeUnionTagReader>k__BackingField; // 0x38
	[CompilerGenerated]
	[Nullable(new[] { 1, 2, 1 })]
	private MethodCall<object, object> <PreComputeUnionReader>k__BackingField; // 0x40
	[CompilerGenerated]
	[Nullable(new[] { 1, 2, 1 })]
	private MethodCall<object, object> <PreComputeUnionConstructor>k__BackingField; // 0x48
	[CompilerGenerated]
	private Func<object, object> <GetUnionCaseInfoDeclaringType>k__BackingField; // 0x50
	[CompilerGenerated]
	private Func<object, object> <GetUnionCaseInfoName>k__BackingField; // 0x58
	[CompilerGenerated]
	private Func<object, object> <GetUnionCaseInfoTag>k__BackingField; // 0x60
	[CompilerGenerated]
	[Nullable(new[] { 1, 1, 2 })]
	private MethodCall<object, object> <GetUnionCaseInfoFields>k__BackingField; // 0x68

	// Properties
	public static FSharpUtils Instance { get; }
	private Assembly FSharpCoreAssembly { set; }
	[Nullable(new[] { 1, 2, 1 })]
	public MethodCall<object, object> IsUnion { get; set; }
	[Nullable(new[] { 1, 2, 1 })]
	public MethodCall<object, object> GetUnionCases { get; set; }
	[Nullable(new[] { 1, 2, 1 })]
	public MethodCall<object, object> PreComputeUnionTagReader { get; set; }
	[Nullable(new[] { 1, 2, 1 })]
	public MethodCall<object, object> PreComputeUnionReader { get; set; }
	[Nullable(new[] { 1, 2, 1 })]
	public MethodCall<object, object> PreComputeUnionConstructor { get; set; }
	public Func<object, object> GetUnionCaseInfoDeclaringType { get; set; }
	public Func<object, object> GetUnionCaseInfoName { get; set; }
	public Func<object, object> GetUnionCaseInfoTag { get; set; }
	[Nullable(new[] { 1, 1, 2 })]
	public MethodCall<object, object> GetUnionCaseInfoFields { get; set; }

	// Methods

	// RVA: 0xEEB818 Offset: 0xEE7818 VA: 0xEEB818
	private void .ctor(Assembly fsharpCoreAssembly) { }

	// RVA: 0xEEBF40 Offset: 0xEE7F40 VA: 0xEEBF40
	public static FSharpUtils get_Instance() { }

	[CompilerGenerated]
	// RVA: 0xEEBF98 Offset: 0xEE7F98 VA: 0xEEBF98
	private void set_FSharpCoreAssembly(Assembly value) { }

	[CompilerGenerated]
	// RVA: 0xEEBFA0 Offset: 0xEE7FA0 VA: 0xEEBFA0
	public MethodCall<object, object> get_IsUnion() { }

	[CompilerGenerated]
	// RVA: 0xEEBFA8 Offset: 0xEE7FA8 VA: 0xEEBFA8
	private void set_IsUnion(MethodCall<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEBFB0 Offset: 0xEE7FB0 VA: 0xEEBFB0
	public MethodCall<object, object> get_GetUnionCases() { }

	[CompilerGenerated]
	// RVA: 0xEEBFB8 Offset: 0xEE7FB8 VA: 0xEEBFB8
	private void set_GetUnionCases(MethodCall<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEBFC0 Offset: 0xEE7FC0 VA: 0xEEBFC0
	public MethodCall<object, object> get_PreComputeUnionTagReader() { }

	[CompilerGenerated]
	// RVA: 0xEEBFC8 Offset: 0xEE7FC8 VA: 0xEEBFC8
	private void set_PreComputeUnionTagReader(MethodCall<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEBFD0 Offset: 0xEE7FD0 VA: 0xEEBFD0
	public MethodCall<object, object> get_PreComputeUnionReader() { }

	[CompilerGenerated]
	// RVA: 0xEEBFD8 Offset: 0xEE7FD8 VA: 0xEEBFD8
	private void set_PreComputeUnionReader(MethodCall<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEBFE0 Offset: 0xEE7FE0 VA: 0xEEBFE0
	public MethodCall<object, object> get_PreComputeUnionConstructor() { }

	[CompilerGenerated]
	// RVA: 0xEEBFE8 Offset: 0xEE7FE8 VA: 0xEEBFE8
	private void set_PreComputeUnionConstructor(MethodCall<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEBFF0 Offset: 0xEE7FF0 VA: 0xEEBFF0
	public Func<object, object> get_GetUnionCaseInfoDeclaringType() { }

	[CompilerGenerated]
	// RVA: 0xEEBFF8 Offset: 0xEE7FF8 VA: 0xEEBFF8
	private void set_GetUnionCaseInfoDeclaringType(Func<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEC000 Offset: 0xEE8000 VA: 0xEEC000
	public Func<object, object> get_GetUnionCaseInfoName() { }

	[CompilerGenerated]
	// RVA: 0xEEC008 Offset: 0xEE8008 VA: 0xEEC008
	private void set_GetUnionCaseInfoName(Func<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEC010 Offset: 0xEE8010 VA: 0xEEC010
	public Func<object, object> get_GetUnionCaseInfoTag() { }

	[CompilerGenerated]
	// RVA: 0xEEC018 Offset: 0xEE8018 VA: 0xEEC018
	private void set_GetUnionCaseInfoTag(Func<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEEC020 Offset: 0xEE8020 VA: 0xEEC020
	public MethodCall<object, object> get_GetUnionCaseInfoFields() { }

	[CompilerGenerated]
	// RVA: 0xEEC028 Offset: 0xEE8028 VA: 0xEEC028
	private void set_GetUnionCaseInfoFields(MethodCall<object, object> value) { }

	// RVA: 0xEEC030 Offset: 0xEE8030 VA: 0xEEC030
	public static void EnsureInitialized(Assembly fsharpCoreAssembly) { }

	// RVA: 0xEEBCE8 Offset: 0xEE7CE8 VA: 0xEEBCE8
	private static MethodInfo GetMethodWithNonPublicFallback(Type type, string methodName, BindingFlags bindingFlags) { }

	// RVA: 0xEEBD5C Offset: 0xEE7D5C VA: 0xEEBD5C
	private static MethodCall<object, object> CreateFSharpFuncCall(Type type, string methodName) { }

	// RVA: 0xEEC1A0 Offset: 0xEE81A0 VA: 0xEEC1A0
	public ObjectConstructor<object> CreateSeq(Type t) { }

	// RVA: 0xEEC29C Offset: 0xEE829C VA: 0xEEC29C
	public ObjectConstructor<object> CreateMap(Type keyType, Type valueType) { }

	[NullableContext(2)]
	// RVA: -1 Offset: -1
	public ObjectConstructor<object> BuildMapCreator<TKey, TValue>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8A940 Offset: 0xB86940 VA: 0xB8A940
	|-FSharpUtils.BuildMapCreator<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: 0xEEC444 Offset: 0xEE8444 VA: 0xEEC444
	private static void .cctor() { }
}


// Namespace: 
[Nullable(0)]
internal class ImmutableCollectionsUtils.ImmutableCollectionTypeInfo // TypeDefIndex: 4240
{
	// Fields
	[CompilerGenerated]
	private string <ContractTypeName>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <CreatedTypeName>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <BuilderTypeName>k__BackingField; // 0x20

	// Properties
	public string ContractTypeName { get; set; }
	public string CreatedTypeName { get; set; }
	public string BuilderTypeName { get; set; }

	// Methods

	// RVA: 0xEED41C Offset: 0xEE941C VA: 0xEED41C
	public void .ctor(string contractTypeName, string createdTypeName, string builderTypeName) { }

	[CompilerGenerated]
	// RVA: 0xEED458 Offset: 0xEE9458 VA: 0xEED458
	public string get_ContractTypeName() { }

	[CompilerGenerated]
	// RVA: 0xEED460 Offset: 0xEE9460 VA: 0xEED460
	public void set_ContractTypeName(string value) { }

	[CompilerGenerated]
	// RVA: 0xEED468 Offset: 0xEE9468 VA: 0xEED468
	public string get_CreatedTypeName() { }

	[CompilerGenerated]
	// RVA: 0xEED470 Offset: 0xEE9470 VA: 0xEED470
	public void set_CreatedTypeName(string value) { }

	[CompilerGenerated]
	// RVA: 0xEED478 Offset: 0xEE9478 VA: 0xEED478
	public string get_BuilderTypeName() { }

	[CompilerGenerated]
	// RVA: 0xEED480 Offset: 0xEE9480 VA: 0xEED480
	public void set_BuilderTypeName(string value) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ImmutableCollectionsUtils.<>c // TypeDefIndex: 4241
{
	// Fields
	[Nullable(0)]
	public static readonly ImmutableCollectionsUtils.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<MethodInfo, bool> <>9__24_1; // 0x8
	[Nullable(0)]
	public static Func<MethodInfo, bool> <>9__25_1; // 0x10

	// Methods

	// RVA: 0xEED488 Offset: 0xEE9488 VA: 0xEED488
	private static void .cctor() { }

	// RVA: 0xEED4E4 Offset: 0xEE94E4 VA: 0xEED4E4
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEED4EC Offset: 0xEE94EC VA: 0xEED4EC
	internal bool <TryBuildImmutableForArrayContract>b__24_1(MethodInfo m) { }

	[NullableContext(0)]
	// RVA: 0xEED580 Offset: 0xEE9580 VA: 0xEED580
	internal bool <TryBuildImmutableForDictionaryContract>b__25_1(MethodInfo m) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ImmutableCollectionsUtils.<>c__DisplayClass24_0 // TypeDefIndex: 4242
{
	// Fields
	[Nullable(0)]
	public string name; // 0x10

	// Methods

	// RVA: 0xEEC9CC Offset: 0xEE89CC VA: 0xEEC9CC
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEED6DC Offset: 0xEE96DC VA: 0xEED6DC
	internal bool <TryBuildImmutableForArrayContract>b__0(ImmutableCollectionsUtils.ImmutableCollectionTypeInfo d) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ImmutableCollectionsUtils.<>c__DisplayClass25_0 // TypeDefIndex: 4243
{
	// Fields
	[Nullable(0)]
	public string name; // 0x10

	// Methods

	// RVA: 0xEECEAC Offset: 0xEE8EAC VA: 0xEECEAC
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEED700 Offset: 0xEE9700 VA: 0xEED700
	internal bool <TryBuildImmutableForDictionaryContract>b__0(ImmutableCollectionsUtils.ImmutableCollectionTypeInfo d) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal static class ImmutableCollectionsUtils // TypeDefIndex: 4244
{
	// Fields
	private static readonly IList<ImmutableCollectionsUtils.ImmutableCollectionTypeInfo> ArrayContractImmutableCollectionDefinitions; // 0x0
	private static readonly IList<ImmutableCollectionsUtils.ImmutableCollectionTypeInfo> DictionaryContractImmutableCollectionDefinitions; // 0x8

	// Methods

	// RVA: 0xEEC550 Offset: 0xEE8550 VA: 0xEEC550
	internal static bool TryBuildImmutableForArrayContract(Type underlyingType, Type collectionItemType, out Type createdType, out ObjectConstructor<object> parameterizedCreator) { }

	// RVA: 0xEEC9F4 Offset: 0xEE89F4 VA: 0xEEC9F4
	internal static bool TryBuildImmutableForDictionaryContract(Type underlyingType, Type keyItemType, Type valueItemType, out Type createdType, out ObjectConstructor<object> parameterizedCreator) { }

	// RVA: 0xEECEB4 Offset: 0xEE8EB4 VA: 0xEECEB4
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(2)]
[Nullable(0)]
internal static class BufferUtils // TypeDefIndex: 4245
{
	// Methods

	[NullableContext(1)]
	// RVA: 0xEED724 Offset: 0xEE9724 VA: 0xEED724
	public static char[] RentBuffer(IArrayPool<char> bufferPool, int minSize) { }

	// RVA: 0xEED7EC Offset: 0xEE97EC VA: 0xEED7EC
	public static void ReturnBuffer(IArrayPool<char> bufferPool, char[] buffer) { }

	// RVA: 0xEED89C Offset: 0xEE989C VA: 0xEED89C
	public static char[] EnsureBufferSize(IArrayPool<char> bufferPool, int size, char[] buffer) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal static class JavaScriptUtils // TypeDefIndex: 4246
{
	// Fields
	internal static readonly bool[] SingleQuoteCharEscapeFlags; // 0x0
	internal static readonly bool[] DoubleQuoteCharEscapeFlags; // 0x8
	internal static readonly bool[] HtmlCharEscapeFlags; // 0x10

	// Methods

	// RVA: 0xEED9D8 Offset: 0xEE99D8 VA: 0xEED9D8
	private static void .cctor() { }

	// RVA: 0xEEE494 Offset: 0xEEA494 VA: 0xEEE494
	public static bool[] GetCharEscapeFlags(StringEscapeHandling stringEscapeHandling, char quoteChar) { }

	// RVA: 0xEEE52C Offset: 0xEEA52C VA: 0xEEE52C
	public static bool ShouldEscapeJavaScriptString(string s, bool[] charEscapeFlags) { }

	[NullableContext(2)]
	// RVA: 0xEEE5B4 Offset: 0xEEA5B4 VA: 0xEEE5B4
	public static void WriteEscapedJavaScriptString(TextWriter writer, string s, char delimiter, bool appendDelimiters, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling, IArrayPool<char> bufferPool, ref char[] writeBuffer) { }

	// RVA: 0xEEED0C Offset: 0xEEAD0C VA: 0xEEED0C
	public static string ToEscapedJavaScriptString(string value, char delimiter, bool appendDelimiters, StringEscapeHandling stringEscapeHandling) { }

	// RVA: 0xEEEB9C Offset: 0xEEAB9C VA: 0xEEEB9C
	private static int FirstCharToEscape(string s, bool[] charEscapeFlags, StringEscapeHandling stringEscapeHandling) { }

	// RVA: 0xEEEFF8 Offset: 0xEEAFF8 VA: 0xEEEFF8
	public static bool TryGetDateFromConstructorJson(JsonReader reader, out DateTime dateTime, out string errorMessage) { }

	// RVA: 0xEEF444 Offset: 0xEEB444 VA: 0xEEF444
	private static bool TryGetDateConstructorValue(JsonReader reader, out Nullable<long> integer, out string errorMessage) { }
}


// Namespace: Newtonsoft.Json.Utilities
internal static class JsonTokenUtils // TypeDefIndex: 4247
{
	// Methods

	// RVA: 0xEEF5F4 Offset: 0xEEB5F4 VA: 0xEEF5F4
	internal static bool IsEndToken(JsonToken token) { }

	// RVA: 0xEEF604 Offset: 0xEEB604 VA: 0xEEF604
	internal static bool IsStartToken(JsonToken token) { }

	// RVA: 0xEEF614 Offset: 0xEEB614 VA: 0xEEF614
	internal static bool IsPrimitiveToken(JsonToken token) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass3_0 // TypeDefIndex: 4248
{
	// Fields
	[Nullable(0)]
	public ConstructorInfo c; // 0x10
	[Nullable(0)]
	public MethodBase method; // 0x18

	// Methods

	// RVA: 0xEEF7E8 Offset: 0xEEB7E8 VA: 0xEEF7E8
	public void .ctor() { }

	// RVA: 0xEEF85C Offset: 0xEEB85C VA: 0xEEF85C
	internal object <CreateParameterizedConstructor>b__0(object[] a) { }

	// RVA: 0xEEF878 Offset: 0xEEB878 VA: 0xEEF878
	internal object <CreateParameterizedConstructor>b__1(object[] a) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass4_0<T> // TypeDefIndex: 4249
{
	// Fields
	[Nullable(0)]
	public ConstructorInfo c; // 0x0
	[Nullable(0)]
	public MethodBase method; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAA08 Offset: 0xBB6A08 VA: 0xBBAA08
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass4_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal object <CreateMethodCall>b__0(T o, object[] a) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAA10 Offset: 0xBB6A10 VA: 0xBBAA10
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass4_0<__Il2CppFullySharedGenericType>.<CreateMethodCall>b__0
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal object <CreateMethodCall>b__1(T o, object[] a) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAA30 Offset: 0xBB6A30 VA: 0xBBAA30
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass4_0<__Il2CppFullySharedGenericType>.<CreateMethodCall>b__1
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass5_0<T> // TypeDefIndex: 4250
{
	// Fields
	[Nullable(0)]
	public Type type; // 0x0
	[Nullable(0)]
	public ConstructorInfo constructorInfo; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAD68 Offset: 0xBB6D68 VA: 0xBBAD68
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass5_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal T <CreateDefaultConstructor>b__0() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAD70 Offset: 0xBB6D70 VA: 0xBBAD70
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass5_0<__Il2CppFullySharedGenericType>.<CreateDefaultConstructor>b__0
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal T <CreateDefaultConstructor>b__1() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBAE38 Offset: 0xBB6E38 VA: 0xBBAE38
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass5_0<__Il2CppFullySharedGenericType>.<CreateDefaultConstructor>b__1
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass6_0<T> // TypeDefIndex: 4251
{
	// Fields
	[Nullable(0)]
	public PropertyInfo propertyInfo; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB0A0 Offset: 0xBB70A0 VA: 0xBBB0A0
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass6_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal object <CreateGet>b__0(T o) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB0A8 Offset: 0xBB70A8 VA: 0xBBB0A8
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass6_0<__Il2CppFullySharedGenericType>.<CreateGet>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass7_0<T> // TypeDefIndex: 4252
{
	// Fields
	[Nullable(0)]
	public FieldInfo fieldInfo; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB478 Offset: 0xBB7478 VA: 0xBBB478
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass7_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal object <CreateGet>b__0(T o) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB480 Offset: 0xBB7480 VA: 0xBBB480
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass7_0<__Il2CppFullySharedGenericType>.<CreateGet>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass8_0<T> // TypeDefIndex: 4253
{
	// Fields
	[Nullable(0)]
	public FieldInfo fieldInfo; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB6D4 Offset: 0xBB76D4 VA: 0xBBB6D4
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass8_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal void <CreateSet>b__0(T o, object v) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB6DC Offset: 0xBB76DC VA: 0xBBB6DC
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass8_0<__Il2CppFullySharedGenericType>.<CreateSet>b__0
	*/
}


// Namespace: 
[CompilerGenerated]
private sealed class LateBoundReflectionDelegateFactory.<>c__DisplayClass9_0<T> // TypeDefIndex: 4254
{
	// Fields
	[Nullable(0)]
	public PropertyInfo propertyInfo; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB7D4 Offset: 0xBB77D4 VA: 0xBBB7D4
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal void <CreateSet>b__0(T o, object v) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBB7DC Offset: 0xBB77DC VA: 0xBBB7DC
	|-LateBoundReflectionDelegateFactory.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType>.<CreateSet>b__0
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal class LateBoundReflectionDelegateFactory : ReflectionDelegateFactory // TypeDefIndex: 4255
{
	// Fields
	private static readonly LateBoundReflectionDelegateFactory _instance; // 0x0

	// Properties
	internal static ReflectionDelegateFactory Instance { get; }

	// Methods

	// RVA: 0xEEF638 Offset: 0xEEB638 VA: 0xEEF638
	internal static ReflectionDelegateFactory get_Instance() { }

	// RVA: 0xEEF690 Offset: 0xEEB690 VA: 0xEEF690 Slot: 5
	public override ObjectConstructor<object> CreateParameterizedConstructor(MethodBase method) { }

	// RVA: -1 Offset: -1 Slot: 4
	public override MethodCall<T, object> CreateMethodCall<T>(MethodBase method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8EC70 Offset: 0xB8AC70 VA: 0xB8EC70
	|-LateBoundReflectionDelegateFactory.CreateMethodCall<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public override Func<T> CreateDefaultConstructor<T>(Type type) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8E904 Offset: 0xB8A904 VA: 0xB8E904
	|-LateBoundReflectionDelegateFactory.CreateDefaultConstructor<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public override Func<T, object> CreateGet<T>(PropertyInfo propertyInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8EBB0 Offset: 0xB8ABB0 VA: 0xB8EBB0
	|-LateBoundReflectionDelegateFactory.CreateGet<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public override Func<T, object> CreateGet<T>(FieldInfo fieldInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8EAF0 Offset: 0xB8AAF0 VA: 0xB8EAF0
	|-LateBoundReflectionDelegateFactory.CreateGet<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public override Action<T, object> CreateSet<T>(FieldInfo fieldInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8EDA0 Offset: 0xB8ADA0 VA: 0xB8EDA0
	|-LateBoundReflectionDelegateFactory.CreateSet<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public override Action<T, object> CreateSet<T>(PropertyInfo propertyInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8EE60 Offset: 0xB8AE60 VA: 0xB8EE60
	|-LateBoundReflectionDelegateFactory.CreateSet<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xEEF7F0 Offset: 0xEEB7F0 VA: 0xEEF7F0
	public void .ctor() { }

	// RVA: 0xEEF800 Offset: 0xEEB800 VA: 0xEEF800
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Utilities
internal static class MathUtils // TypeDefIndex: 4256
{
	// Methods

	// RVA: 0xEEF89C Offset: 0xEEB89C VA: 0xEEF89C
	public static int IntLength(ulong i) { }

	// RVA: 0xEEFA60 Offset: 0xEEBA60 VA: 0xEEFA60
	public static char IntToHex(int n) { }

	// RVA: 0xEEFA78 Offset: 0xEEBA78 VA: 0xEEFA78
	public static bool ApproxEquals(double d1, double d2) { }
}


// Namespace: Newtonsoft.Json.Utilities
internal sealed class MethodCall<T, TResult> : MulticastDelegate // TypeDefIndex: 4257
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC386FC Offset: 0xC346FC VA: 0xC386FC
	|-MethodCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 12
	public virtual TResult Invoke(T target, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC38800 Offset: 0xC34800 VA: 0xC38800
	|-MethodCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal static class MiscellaneousUtils // TypeDefIndex: 4258
{
	// Methods

	[NullableContext(2)]
	// RVA: 0xEEFB18 Offset: 0xEEBB18 VA: 0xEEFB18
	public static bool ValueEquals(object objA, object objB) { }

	// RVA: 0xEE595C Offset: 0xEE195C VA: 0xEE595C
	public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message) { }

	// RVA: 0xEEFE28 Offset: 0xEEBE28 VA: 0xEEFE28
	public static string ToString(object value) { }

	// RVA: 0xEEFED8 Offset: 0xEEBED8 VA: 0xEEFED8
	public static int ByteArrayCompare(byte[] a1, byte[] a2) { }

	// RVA: 0xEEFF88 Offset: 0xEEBF88 VA: 0xEEFF88
	public static string GetPrefix(string qualifiedName) { }

	// RVA: 0xEF0040 Offset: 0xEEC040 VA: 0xEF0040
	public static string GetLocalName(string qualifiedName) { }

	// RVA: 0xEEFFAC Offset: 0xEEBFAC VA: 0xEEFFAC
	public static void GetQualifiedNameParts(string qualifiedName, out string prefix, out string localName) { }

	// RVA: 0xEF0078 Offset: 0xEEC078 VA: 0xEF0078
	internal static RegexOptions GetRegexOptions(string optionsText) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal abstract class ReflectionDelegateFactory // TypeDefIndex: 4259
{
	// Methods

	// RVA: -1 Offset: -1
	public Func<T, object> CreateGet<T>(MemberInfo memberInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA682C Offset: 0xBA282C VA: 0xBA682C
	|-ReflectionDelegateFactory.CreateGet<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public Action<T, object> CreateSet<T>(MemberInfo memberInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6A04 Offset: 0xBA2A04 VA: 0xBA6A04
	|-ReflectionDelegateFactory.CreateSet<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public abstract MethodCall<T, object> CreateMethodCall<T>(MethodBase method);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract ObjectConstructor<object> CreateParameterizedConstructor(MethodBase method);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Func<T> CreateDefaultConstructor<T>(Type type);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract Func<T, object> CreateGet<T>(PropertyInfo propertyInfo);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract Func<T, object> CreateGet<T>(FieldInfo fieldInfo);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract Action<T, object> CreateSet<T>(FieldInfo fieldInfo);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract Action<T, object> CreateSet<T>(PropertyInfo propertyInfo);

	// RVA: 0xEEF7F8 Offset: 0xEEB7F8 VA: 0xEEF7F8
	protected void .ctor() { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(2)]
[Nullable(0)]
internal class ReflectionMember // TypeDefIndex: 4260
{
	// Fields
	[CompilerGenerated]
	private Type <MemberType>k__BackingField; // 0x10
	[Nullable(new[] { 2, 1, 2 })]
	[CompilerGenerated]
	private Func<object, object> <Getter>k__BackingField; // 0x18
	[Nullable(new[] { 2, 1, 2 })]
	[CompilerGenerated]
	private Action<object, object> <Setter>k__BackingField; // 0x20

	// Properties
	public Type MemberType { get; set; }
	[Nullable(new[] { 2, 1, 2 })]
	public Func<object, object> Getter { get; set; }
	[Nullable(new[] { 2, 1, 2 })]
	public Action<object, object> Setter { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEF0120 Offset: 0xEEC120 VA: 0xEF0120
	public Type get_MemberType() { }

	[CompilerGenerated]
	// RVA: 0xEF0128 Offset: 0xEEC128 VA: 0xEF0128
	public void set_MemberType(Type value) { }

	[CompilerGenerated]
	// RVA: 0xEF0130 Offset: 0xEEC130 VA: 0xEF0130
	public Func<object, object> get_Getter() { }

	[CompilerGenerated]
	// RVA: 0xEF0138 Offset: 0xEEC138 VA: 0xEF0138
	public void set_Getter(Func<object, object> value) { }

	[CompilerGenerated]
	// RVA: 0xEF0140 Offset: 0xEEC140 VA: 0xEF0140
	public Action<object, object> get_Setter() { }

	[CompilerGenerated]
	// RVA: 0xEF0148 Offset: 0xEEC148 VA: 0xEF0148
	public void set_Setter(Action<object, object> value) { }

	// RVA: 0xEF0150 Offset: 0xEEC150 VA: 0xEF0150
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionObject.<>c__DisplayClass11_0 // TypeDefIndex: 4261
{
	// Fields
	[Nullable(new[] { 0, 1 })]
	public Func<object> ctor; // 0x10

	// Methods

	// RVA: 0xEF0D70 Offset: 0xEECD70 VA: 0xEF0D70
	public void .ctor() { }

	// RVA: 0xEF1294 Offset: 0xEED294 VA: 0xEF1294
	internal object <Create>b__0(object[] args) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionObject.<>c__DisplayClass11_1 // TypeDefIndex: 4262
{
	// Fields
	[Nullable(new[] { 0, 1, 2 })]
	public MethodCall<object, object> call; // 0x10

	// Methods

	// RVA: 0xEF1064 Offset: 0xEED064 VA: 0xEF1064
	public void .ctor() { }

	// RVA: 0xEF12C4 Offset: 0xEED2C4 VA: 0xEF12C4
	internal object <Create>b__1(object target) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionObject.<>c__DisplayClass11_2 // TypeDefIndex: 4263
{
	// Fields
	[Nullable(new[] { 0, 1, 2 })]
	public MethodCall<object, object> call; // 0x10

	// Methods

	// RVA: 0xEF106C Offset: 0xEED06C VA: 0xEF106C
	public void .ctor() { }

	// RVA: 0xEF1388 Offset: 0xEED388 VA: 0xEF1388
	internal void <Create>b__2(object target, object arg) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
internal class ReflectionObject // TypeDefIndex: 4264
{
	// Fields
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private readonly ObjectConstructor<object> <Creator>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly IDictionary<string, ReflectionMember> <Members>k__BackingField; // 0x18

	// Properties
	[Nullable(new[] { 2, 1 })]
	public ObjectConstructor<object> Creator { get; }
	public IDictionary<string, ReflectionMember> Members { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEF0158 Offset: 0xEEC158 VA: 0xEF0158
	public ObjectConstructor<object> get_Creator() { }

	[CompilerGenerated]
	// RVA: 0xEF0160 Offset: 0xEEC160 VA: 0xEF0160
	public IDictionary<string, ReflectionMember> get_Members() { }

	// RVA: 0xEF0168 Offset: 0xEEC168 VA: 0xEF0168
	private void .ctor(ObjectConstructor<object> creator) { }

	// RVA: 0xEF01EC Offset: 0xEEC1EC VA: 0xEF01EC
	public object GetValue(object target, string member) { }

	// RVA: 0xEF02CC Offset: 0xEEC2CC VA: 0xEF02CC
	public void SetValue(object target, string member, object value) { }

	// RVA: 0xEF03A8 Offset: 0xEEC3A8 VA: 0xEF03A8
	public Type GetType(string member) { }

	// RVA: 0xEF045C Offset: 0xEEC45C VA: 0xEF045C
	public static ReflectionObject Create(Type t, string[] memberNames) { }

	// RVA: 0xEF0468 Offset: 0xEEC468 VA: 0xEF0468
	public static ReflectionObject Create(Type t, MethodBase creator, string[] memberNames) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ReflectionUtils.<>c // TypeDefIndex: 4265
{
	// Fields
	[Nullable(0)]
	public static readonly ReflectionUtils.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<ConstructorInfo, bool> <>9__11_0; // 0x8
	[Nullable(0)]
	public static Func<MemberInfo, string> <>9__31_0; // 0x10
	[Nullable(0)]
	public static Func<ParameterInfo, Type> <>9__39_0; // 0x18
	[Nullable(0)]
	public static Func<FieldInfo, bool> <>9__41_0; // 0x20

	// Methods

	// RVA: 0xEF53CC Offset: 0xEF13CC VA: 0xEF53CC
	private static void .cctor() { }

	// RVA: 0xEF5428 Offset: 0xEF1428 VA: 0xEF5428
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEF5430 Offset: 0xEF1430 VA: 0xEF5430
	internal bool <GetDefaultConstructor>b__11_0(ConstructorInfo c) { }

	[NullableContext(0)]
	// RVA: 0xEF549C Offset: 0xEF149C VA: 0xEF549C
	internal string <GetFieldsAndProperties>b__31_0(MemberInfo m) { }

	[NullableContext(0)]
	// RVA: 0xEF54C0 Offset: 0xEF14C0 VA: 0xEF54C0
	internal Type <GetMemberInfoFromType>b__39_0(ParameterInfo p) { }

	[NullableContext(0)]
	// RVA: 0xEF54E4 Offset: 0xEF14E4 VA: 0xEF54E4
	internal bool <GetChildPrivateFields>b__41_0(FieldInfo f) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionUtils.<>c__DisplayClass31_0 // TypeDefIndex: 4266
{
	// Fields
	[Nullable(0)]
	public MemberInfo memberInfo; // 0x10

	// Methods

	// RVA: 0xEF40CC Offset: 0xEF00CC VA: 0xEF40CC
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEF54FC Offset: 0xEF14FC VA: 0xEF54FC
	internal bool <GetFieldsAndProperties>b__1(MemberInfo m) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionUtils.<>c__DisplayClass44_0 // TypeDefIndex: 4267
{
	// Fields
	[Nullable(0)]
	public PropertyInfo subTypeProperty; // 0x10

	// Methods

	// RVA: 0xEF507C Offset: 0xEF107C VA: 0xEF507C
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEF5598 Offset: 0xEF1598 VA: 0xEF5598
	internal bool <GetChildPrivateProperties>b__0(PropertyInfo p) { }

	[NullableContext(0)]
	// RVA: 0xEF55EC Offset: 0xEF15EC VA: 0xEF55EC
	internal bool <GetChildPrivateProperties>b__1(PropertyInfo p) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionUtils.<>c__DisplayClass44_1 // TypeDefIndex: 4268
{
	// Fields
	[Nullable(0)]
	public Type subTypePropertyDeclaringType; // 0x10
	[Nullable(0)]
	public ReflectionUtils.<>c__DisplayClass44_0 CS$<>8__locals1; // 0x18

	// Methods

	// RVA: 0xEF5084 Offset: 0xEF1084 VA: 0xEF5084
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEF56D8 Offset: 0xEF16D8 VA: 0xEF56D8
	internal bool <GetChildPrivateProperties>b__2(PropertyInfo p) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectionUtils.<>c__DisplayClass45_0 // TypeDefIndex: 4269
{
	// Fields
	[Nullable(0)]
	public string method; // 0x10
	[Nullable(0)]
	public Type methodDeclaringType; // 0x18

	// Methods

	// RVA: 0xEF5184 Offset: 0xEF1184 VA: 0xEF5184
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEF57E4 Offset: 0xEF17E4 VA: 0xEF57E4
	internal bool <IsMethodOverridden>b__0(MethodInfo info) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Extension]
[NullableContext(1)]
[Nullable(0)]
internal static class ReflectionUtils // TypeDefIndex: 4270
{
	// Fields
	public static readonly Type[] EmptyTypes; // 0x0

	// Methods

	// RVA: 0xEF1450 Offset: 0xEED450 VA: 0xEF1450
	private static void .cctor() { }

	[Extension]
	// RVA: 0xEF14C8 Offset: 0xEED4C8 VA: 0xEF14C8
	public static bool IsVirtual(PropertyInfo propertyInfo) { }

	[Extension]
	// RVA: 0xEF15A8 Offset: 0xEED5A8 VA: 0xEF15A8
	public static MethodInfo GetBaseDefinition(PropertyInfo propertyInfo) { }

	// RVA: 0xEF166C Offset: 0xEED66C VA: 0xEF166C
	public static bool IsPublic(PropertyInfo property) { }

	[NullableContext(2)]
	// RVA: 0xEE28A8 Offset: 0xEDE8A8 VA: 0xEE28A8
	public static Type GetObjectType(object v) { }

	// RVA: 0xEF16FC Offset: 0xEED6FC VA: 0xEF16FC
	public static string GetTypeName(Type t, TypeNameAssemblyFormatHandling assemblyFormat, ISerializationBinder binder) { }

	// RVA: 0xEF17D4 Offset: 0xEED7D4 VA: 0xEF17D4
	private static string GetFullyQualifiedTypeName(Type t, ISerializationBinder binder) { }

	// RVA: 0xEF1904 Offset: 0xEED904 VA: 0xEF1904
	private static string RemoveAssemblyDetails(string fullyQualifiedTypeName) { }

	// RVA: 0xEF0C84 Offset: 0xEECC84 VA: 0xEF0C84
	public static bool HasDefaultConstructor(Type t, bool nonPublic) { }

	// RVA: 0xEF1BEC Offset: 0xEEDBEC VA: 0xEF1BEC
	public static ConstructorInfo GetDefaultConstructor(Type t) { }

	// RVA: 0xEF1AAC Offset: 0xEEDAAC VA: 0xEF1AAC
	public static ConstructorInfo GetDefaultConstructor(Type t, bool nonPublic) { }

	// RVA: 0xEE2428 Offset: 0xEDE428 VA: 0xEE2428
	public static bool IsNullable(Type t) { }

	// RVA: 0xEE06E8 Offset: 0xEDC6E8 VA: 0xEE06E8
	public static bool IsNullableType(Type t) { }

	// RVA: 0xEF1C44 Offset: 0xEEDC44 VA: 0xEF1C44
	public static Type EnsureNotNullableType(Type t) { }

	// RVA: 0xEF1CB8 Offset: 0xEEDCB8 VA: 0xEF1CB8
	public static Type EnsureNotByRefType(Type t) { }

	// RVA: 0xEF1D08 Offset: 0xEEDD08 VA: 0xEF1D08
	public static bool IsGenericDefinition(Type type, Type genericInterfaceDefinition) { }

	// RVA: 0xEDF664 Offset: 0xEDB664 VA: 0xEDF664
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition) { }

	// RVA: 0xEF1DB4 Offset: 0xEEDDB4 VA: 0xEF1DB4
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition, out Type implementingType) { }

	// RVA: 0xEF2018 Offset: 0xEEE018 VA: 0xEF2018
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition) { }

	// RVA: 0xEF208C Offset: 0xEEE08C VA: 0xEF208C
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition, out Type implementingType) { }

	// RVA: 0xEF21F4 Offset: 0xEEE1F4 VA: 0xEF21F4
	private static bool InheritsGenericDefinitionInternal(Type type, Type genericClassDefinition, out Type implementingType) { }

	// RVA: 0xEF2318 Offset: 0xEEE318 VA: 0xEF2318
	public static Type GetCollectionItemType(Type type) { }

	[NullableContext(2)]
	// RVA: 0xEF2538 Offset: 0xEEE538 VA: 0xEF2538
	public static void GetDictionaryKeyValueTypes(Type dictionaryType, out Type keyType, out Type valueType) { }

	// RVA: 0xEF1074 Offset: 0xEED074 VA: 0xEF1074
	public static Type GetMemberUnderlyingType(MemberInfo member) { }

	// RVA: 0xEF275C Offset: 0xEEE75C VA: 0xEF275C
	public static bool IsByRefLikeType(Type type) { }

	// RVA: 0xEF2D74 Offset: 0xEEED74 VA: 0xEF2D74
	public static bool IsIndexedProperty(PropertyInfo property) { }

	// RVA: 0xEF2DEC Offset: 0xEEEDEC VA: 0xEF2DEC
	public static object GetMemberValue(MemberInfo member, object target) { }

	// RVA: 0xEF30F8 Offset: 0xEEF0F8 VA: 0xEF30F8
	public static void SetMemberValue(MemberInfo member, object target, object value) { }

	// RVA: 0xEF0D94 Offset: 0xEECD94 VA: 0xEF0D94
	public static bool CanReadMemberValue(MemberInfo member, bool nonPublic) { }

	// RVA: 0xEF0EE0 Offset: 0xEECEE0 VA: 0xEF0EE0
	public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly) { }

	// RVA: 0xEF3308 Offset: 0xEEF308 VA: 0xEF3308
	public static List<MemberInfo> GetFieldsAndProperties(Type type, BindingFlags bindingAttr) { }

	// RVA: 0xEF40D4 Offset: 0xEF00D4 VA: 0xEF40D4
	private static bool IsOverridenGenericMember(MemberInfo memberInfo, BindingFlags bindingAttr) { }

	// RVA: -1 Offset: -1
	public static T GetAttribute<T>(object attributeProvider) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6B58 Offset: 0xBA2B58 VA: 0xBA6B58
	|-ReflectionUtils.GetAttribute<object>
	*/

	// RVA: -1 Offset: -1
	public static T GetAttribute<T>(object attributeProvider, bool inherit) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6BC0 Offset: 0xBA2BC0 VA: 0xBA6BC0
	|-ReflectionUtils.GetAttribute<object>
	*/

	// RVA: -1 Offset: -1
	public static T[] GetAttributes<T>(object attributeProvider, bool inherit) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6C50 Offset: 0xBA2C50 VA: 0xBA6C50
	|-ReflectionUtils.GetAttributes<object>
	*/

	// RVA: 0xEF2864 Offset: 0xEEE864 VA: 0xEF2864
	public static Attribute[] GetAttributes(object attributeProvider, Type attributeType, bool inherit) { }

	// RVA: 0xEF42AC Offset: 0xEF02AC VA: 0xEF42AC
	public static StructMultiKey<string, string> SplitFullyQualifiedTypeName(string fullyQualifiedTypeName) { }

	// RVA: 0xEF4418 Offset: 0xEF0418 VA: 0xEF4418
	private static Nullable<int> GetAssemblyDelimiterIndex(string fullyQualifiedTypeName) { }

	// RVA: 0xEF46A8 Offset: 0xEF06A8 VA: 0xEF46A8
	public static MemberInfo GetMemberInfoFromType(Type targetType, MemberInfo memberInfo) { }

	// RVA: 0xEF3CAC Offset: 0xEEFCAC VA: 0xEF3CAC
	public static IEnumerable<FieldInfo> GetFields(Type targetType, BindingFlags bindingAttr) { }

	// RVA: 0xEF4918 Offset: 0xEF0918 VA: 0xEF4918
	private static void GetChildPrivateFields(IList<MemberInfo> initialFields, Type type, BindingFlags bindingAttr) { }

	// RVA: 0xEF3DC4 Offset: 0xEEFDC4 VA: 0xEF3DC4
	public static IEnumerable<PropertyInfo> GetProperties(Type targetType, BindingFlags bindingAttr) { }

	[Extension]
	// RVA: 0xEF4B04 Offset: 0xEF0B04 VA: 0xEF4B04
	public static BindingFlags RemoveFlag(BindingFlags bindingAttr, BindingFlags flag) { }

	// RVA: 0xEF4B14 Offset: 0xEF0B14 VA: 0xEF4B14
	private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, Type type, BindingFlags bindingAttr) { }

	// RVA: 0xEF508C Offset: 0xEF108C VA: 0xEF508C
	public static bool IsMethodOverridden(Type currentType, Type methodDeclaringType, string method) { }

	// RVA: 0xEF518C Offset: 0xEF118C VA: 0xEF518C
	public static object GetDefaultValue(Type type) { }
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(2)]
[Nullable(0)]
internal struct StringBuffer // TypeDefIndex: 4271
{
	// Fields
	private char[] _buffer; // 0x0
	private int _position; // 0x8

	// Properties
	public int Position { get; set; }
	public bool IsEmpty { get; }
	public char[] InternalBuffer { get; }

	// Methods

	// RVA: 0xEF58F8 Offset: 0xEF18F8 VA: 0xEF58F8
	public int get_Position() { }

	// RVA: 0xEF5900 Offset: 0xEF1900 VA: 0xEF5900
	public void set_Position(int value) { }

	// RVA: 0xEF5908 Offset: 0xEF1908 VA: 0xEF5908
	public bool get_IsEmpty() { }

	// RVA: 0xEF5918 Offset: 0xEF1918 VA: 0xEF5918
	public void .ctor(IArrayPool<char> bufferPool, int initalSize) { }

	[NullableContext(1)]
	// RVA: 0xEF593C Offset: 0xEF193C VA: 0xEF593C
	private void .ctor(char[] buffer) { }

	// RVA: 0xEF5948 Offset: 0xEF1948 VA: 0xEF5948
	public void Append(IArrayPool<char> bufferPool, char value) { }

	[NullableContext(1)]
	// RVA: 0xEF5A20 Offset: 0xEF1A20 VA: 0xEF5A20
	public void Append(IArrayPool<char> bufferPool, char[] buffer, int startIndex, int count) { }

	// RVA: 0xEF5AA0 Offset: 0xEF1AA0 VA: 0xEF5AA0
	public void Clear(IArrayPool<char> bufferPool) { }

	// RVA: 0xEF59C0 Offset: 0xEF19C0 VA: 0xEF59C0
	private void EnsureSize(IArrayPool<char> bufferPool, int appendLength) { }

	[NullableContext(1)]
	// RVA: 0xEF5ACC Offset: 0xEF1ACC VA: 0xEF5ACC Slot: 3
	public override string ToString() { }

	[NullableContext(1)]
	// RVA: 0xEF5AE4 Offset: 0xEF1AE4 VA: 0xEF5AE4
	public string ToString(int start, int length) { }

	// RVA: 0xEF5B00 Offset: 0xEF1B00 VA: 0xEF5B00
	public char[] get_InternalBuffer() { }
}


// Namespace: Newtonsoft.Json.Utilities
[DefaultMember("Item")]
[Nullable(0)]
[NullableContext(1)]
internal struct StringReference // TypeDefIndex: 4272
{
	// Fields
	private readonly char[] _chars; // 0x0
	private readonly int _startIndex; // 0x8
	private readonly int _length; // 0xC

	// Properties
	public char Item { get; }
	public char[] Chars { get; }
	public int StartIndex { get; }
	public int Length { get; }

	// Methods

	// RVA: 0xEE6BEC Offset: 0xEE2BEC VA: 0xEE6BEC
	public char get_Item(int i) { }

	// RVA: 0xEF5B08 Offset: 0xEF1B08 VA: 0xEF5B08
	public char[] get_Chars() { }

	// RVA: 0xEF5B10 Offset: 0xEF1B10 VA: 0xEF5B10
	public int get_StartIndex() { }

	// RVA: 0xEF5B18 Offset: 0xEF1B18 VA: 0xEF5B18
	public int get_Length() { }

	// RVA: 0xEE72C8 Offset: 0xEE32C8 VA: 0xEE72C8
	public void .ctor(char[] chars, int startIndex, int length) { }

	// RVA: 0xEE6F14 Offset: 0xEE2F14 VA: 0xEE6F14 Slot: 3
	public override string ToString() { }
}


// Namespace: Newtonsoft.Json.Utilities
[Extension]
[Nullable(0)]
[NullableContext(1)]
internal static class StringReferenceExtensions // TypeDefIndex: 4273
{
	// Methods

	[Extension]
	// RVA: 0xEE7B34 Offset: 0xEE3B34 VA: 0xEE7B34
	public static int IndexOf(StringReference s, char c, int startIndex, int length) { }

	[Extension]
	// RVA: 0xEE6C1C Offset: 0xEE2C1C VA: 0xEE6C1C
	public static bool StartsWith(StringReference s, string text) { }

	[Extension]
	// RVA: 0xEE6CDC Offset: 0xEE2CDC VA: 0xEE6CDC
	public static bool EndsWith(StringReference s, string text) { }
}


// Namespace: 
[NullableContext(0)]
private enum StringUtils.SeparatedCaseState // TypeDefIndex: 4274
{
	// Fields
	public int value__; // 0x0
	public const StringUtils.SeparatedCaseState Start = 0;
	public const StringUtils.SeparatedCaseState Lower = 1;
	public const StringUtils.SeparatedCaseState Upper = 2;
	public const StringUtils.SeparatedCaseState NewWord = 3;
}


// Namespace: 
[CompilerGenerated]
private sealed class StringUtils.<>c__DisplayClass14_0<TSource> // TypeDefIndex: 4275
{
	// Fields
	[Nullable(new[] { 0, 0, 1 })]
	public Func<TSource, string> valueSelector; // 0x0
	[Nullable(0)]
	public string testValue; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9458 Offset: 0xBB5458 VA: 0xBB9458
	|-StringUtils.<>c__DisplayClass14_0<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal bool <ForgivingCaseSensitiveFind>b__0(TSource s) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9460 Offset: 0xBB5460 VA: 0xBB9460
	|-StringUtils.<>c__DisplayClass14_0<__Il2CppFullySharedGenericType>.<ForgivingCaseSensitiveFind>b__0
	*/

	[NullableContext(0)]
	// RVA: -1 Offset: -1
	internal bool <ForgivingCaseSensitiveFind>b__1(TSource s) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB9544 Offset: 0xBB5544 VA: 0xBB9544
	|-StringUtils.<>c__DisplayClass14_0<__Il2CppFullySharedGenericType>.<ForgivingCaseSensitiveFind>b__1
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[NullableContext(1)]
[Nullable(0)]
[Extension]
internal static class StringUtils // TypeDefIndex: 4276
{
	// Methods

	[NullableContext(2)]
	// RVA: 0xEE6F0C Offset: 0xEE2F0C VA: 0xEE6F0C
	public static bool IsNullOrEmpty(string value) { }

	[Extension]
	// RVA: 0xEE0F90 Offset: 0xEDCF90 VA: 0xEE0F90
	public static string FormatWith(string format, IFormatProvider provider, object arg0) { }

	[Extension]
	// RVA: 0xEE21AC Offset: 0xEDE1AC VA: 0xEE21AC
	public static string FormatWith(string format, IFormatProvider provider, object arg0, object arg1) { }

	[Extension]
	// RVA: 0xEF5B8C Offset: 0xEF1B8C VA: 0xEF5B8C
	public static string FormatWith(string format, IFormatProvider provider, object arg0, object arg1, object arg2) { }

	[NullableContext(2)]
	[Extension]
	// RVA: 0xEF5C94 Offset: 0xEF1C94 VA: 0xEF5C94
	public static string FormatWith(string format, IFormatProvider provider, object arg0, object arg1, object arg2, object arg3) { }

	[Extension]
	// RVA: 0xEF5B20 Offset: 0xEF1B20 VA: 0xEF5B20
	private static string FormatWith(string format, IFormatProvider provider, object[] args) { }

	// RVA: 0xEEEF30 Offset: 0xEEAF30 VA: 0xEEEF30
	public static StringWriter CreateStringWriter(int capacity) { }

	// RVA: 0xEEEC50 Offset: 0xEEAC50 VA: 0xEEEC50
	public static void ToCharAsUnicode(char c, char[] buffer) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static TSource ForgivingCaseSensitiveFind<TSource>(IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA9DF4 Offset: 0xBA5DF4 VA: 0xBA9DF4
	|-StringUtils.ForgivingCaseSensitiveFind<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xEF5DD0 Offset: 0xEF1DD0 VA: 0xEF5DD0
	public static string ToCamelCase(string s) { }

	// RVA: 0xEF5FB8 Offset: 0xEF1FB8 VA: 0xEF5FB8
	private static char ToLower(char c) { }

	// RVA: 0xEF6048 Offset: 0xEF2048 VA: 0xEF6048
	public static string ToSnakeCase(string s) { }

	// RVA: 0xEF6338 Offset: 0xEF2338 VA: 0xEF6338
	public static string ToKebabCase(string s) { }

	// RVA: 0xEF6050 Offset: 0xEF2050 VA: 0xEF6050
	private static string ToSeparatedCase(string s, char separator) { }

	// RVA: 0xEF6340 Offset: 0xEF2340 VA: 0xEF6340
	public static bool IsHighSurrogate(char c) { }

	// RVA: 0xEF6398 Offset: 0xEF2398 VA: 0xEF6398
	public static bool IsLowSurrogate(char c) { }

	// RVA: 0xEF0064 Offset: 0xEEC064 VA: 0xEF0064
	public static int IndexOf(string s, char c) { }

	[Extension]
	// RVA: 0xEF63F0 Offset: 0xEF23F0 VA: 0xEF63F0
	public static bool StartsWith(string source, char value) { }

	[Extension]
	// RVA: 0xEF6434 Offset: 0xEF2434 VA: 0xEF6434
	public static bool EndsWith(string source, char value) { }

	[Extension]
	// RVA: 0xEF44F4 Offset: 0xEF04F4 VA: 0xEF44F4
	public static string Trim(string s, int start, int length) { }
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal struct StructMultiKey<T1, T2> : IEquatable<StructMultiKey<T1, T2>> // TypeDefIndex: 4277
{
	// Fields
	public readonly T1 Value1; // 0x0
	public readonly T2 Value2; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(T1 v1, T2 v2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC5D6AC Offset: 0xC596AC VA: 0xC5D6AC
	|-StructMultiKey<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public override int GetHashCode() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC5D890 Offset: 0xC59890 VA: 0xC5D890
	|-StructMultiKey<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.GetHashCode
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 0
	public override bool Equals(object obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC5DC94 Offset: 0xC59C94 VA: 0xC5DC94
	|-StructMultiKey<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Equals
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public bool Equals(StructMultiKey<T1, T2> other) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC5DE54 Offset: 0xC59E54 VA: 0xC5DE54
	|-StructMultiKey<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Equals
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[Nullable(0)]
[NullableContext(1)]
internal class ThreadSafeStore<TKey, TValue> // TypeDefIndex: 4278
{
	// Fields
	private readonly ConcurrentDictionary<TKey, TValue> _concurrentStore; // 0x0
	private readonly Func<TKey, TValue> _creator; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Func<TKey, TValue> creator) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC6D6D8 Offset: 0xC696D8 VA: 0xC6D6D8
	|-ThreadSafeStore<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public TValue Get(TKey key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC6D77C Offset: 0xC6977C VA: 0xC6D77C
	|-ThreadSafeStore<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Get
	*/
}


// Namespace: Newtonsoft.Json.Utilities
[Extension]
[NullableContext(1)]
[Nullable(0)]
internal static class TypeExtensions // TypeDefIndex: 4279
{
	// Methods

	[Extension]
	// RVA: 0xEF0D78 Offset: 0xEECD78 VA: 0xEF0D78
	public static MemberTypes MemberType(MemberInfo memberInfo) { }

	[Extension]
	// RVA: 0xEF6474 Offset: 0xEF2474 VA: 0xEF6474
	public static bool ContainsGenericParameters(Type type) { }

	[Extension]
	// RVA: 0xEE26DC Offset: 0xEDE6DC VA: 0xEE26DC
	public static bool IsInterface(Type type) { }

	[Extension]
	// RVA: 0xEEC9AC Offset: 0xEE89AC VA: 0xEEC9AC
	public static bool IsGenericType(Type type) { }

	[Extension]
	// RVA: 0xEE26F0 Offset: 0xEDE6F0 VA: 0xEE26F0
	public static bool IsGenericTypeDefinition(Type type) { }

	[Extension]
	// RVA: 0xEF22F8 Offset: 0xEEE2F8 VA: 0xEF22F8
	public static Type BaseType(Type type) { }

	[Extension]
	// RVA: 0xEEC9D4 Offset: 0xEE89D4 VA: 0xEEC9D4
	public static Assembly Assembly(Type type) { }

	[Extension]
	// RVA: 0xEE06C8 Offset: 0xEDC6C8 VA: 0xEE06C8
	public static bool IsEnum(Type type) { }

	[Extension]
	// RVA: 0xEF21E0 Offset: 0xEEE1E0 VA: 0xEF21E0
	public static bool IsClass(Type type) { }

	[Extension]
	// RVA: 0xEF6494 Offset: 0xEF2494 VA: 0xEF6494
	public static bool IsSealed(Type type) { }

	[Extension]
	// RVA: 0xEE2710 Offset: 0xEDE710 VA: 0xEE2710
	public static bool IsAbstract(Type type) { }

	[Extension]
	// RVA: 0xEF64A8 Offset: 0xEF24A8 VA: 0xEF64A8
	public static bool IsVisible(Type type) { }

	[Extension]
	// RVA: 0xEF1A98 Offset: 0xEEDA98 VA: 0xEF1A98
	public static bool IsValueType(Type type) { }

	[Extension]
	// RVA: 0xEF64BC Offset: 0xEF24BC VA: 0xEF64BC
	public static bool AssignableToTypeName(Type type, string fullTypeName, bool searchInterfaces, out Type match) { }

	[Extension]
	// RVA: 0xEF6634 Offset: 0xEF2634 VA: 0xEF6634
	public static bool AssignableToTypeName(Type type, string fullTypeName, bool searchInterfaces) { }

	[Extension]
	// RVA: 0xEF6654 Offset: 0xEF2654 VA: 0xEF6654
	public static bool ImplementInterface(Type type, Type interfaceType) { }
}


// Namespace: Newtonsoft.Json.Utilities
internal static class ValidationUtils // TypeDefIndex: 4280
{
	// Methods

	[NullableContext(1)]
	// RVA: 0xEDE4D8 Offset: 0xEDA4D8 VA: 0xEDE4D8
	public static void ArgumentNotNull(object value, string parameterName) { }
}


// Namespace: Newtonsoft.Json.Serialization
internal static class CachedAttributeGetter<T> // TypeDefIndex: 4281
{
	// Fields
	[Nullable(new[] { 1, 1, 2 })]
	private static readonly ThreadSafeStore<object, T> TypeAttributeCache; // 0x0

	// Methods

	[NullableContext(1)]
	// RVA: -1 Offset: -1
	public static T GetAttribute(object type) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE12B4 Offset: 0xBDD2B4 VA: 0xBE12B4
	|-CachedAttributeGetter<object>.GetAttribute
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE1370 Offset: 0xBDD370 VA: 0xBE1370
	|-CachedAttributeGetter<object>..cctor
	*/
}


// Namespace: Newtonsoft.Json.Serialization
public class CamelCaseNamingStrategy : NamingStrategy // TypeDefIndex: 4282
{
	// Methods

	// RVA: 0xEF6A40 Offset: 0xEF2A40 VA: 0xEF6A40
	public void .ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) { }

	// RVA: 0xEF6A78 Offset: 0xEF2A78 VA: 0xEF6A78
	public void .ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames) { }

	// RVA: 0xEEB730 Offset: 0xEE7730 VA: 0xEEB730
	public void .ctor() { }

	[NullableContext(1)]
	// RVA: 0xEF6AC4 Offset: 0xEF2AC4 VA: 0xEF6AC4 Slot: 7
	protected override string ResolvePropertyName(string name) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<TEnumeratorKey, TEnumeratorValue> : IEnumerator<KeyValuePair<object, object>>, IEnumerator, IDisposable // TypeDefIndex: 4283
{
	// Fields
	private int <>1__state; // 0x0
	[Nullable(new[] { 0, 1, 1 })]
	private KeyValuePair<object, object> <>2__current; // 0x0
	public DefaultContractResolver.EnumerableDictionaryWrapper<TEnumeratorKey, TEnumeratorValue> <>4__this; // 0x0
	[Nullable(new[] { 0, 0, 1, 1 })]
	private IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> <>7__wrap1; // 0x0

	// Properties
	private KeyValuePair<object, object> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: -1 Offset: -1
	public void .ctor(int <>1__state) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBE8AC Offset: 0xBBA8AC VA: 0xBBE8AC
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void System.IDisposable.Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBE8D4 Offset: 0xBBA8D4 VA: 0xBBE8D4
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.IDisposable.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBE8F0 Offset: 0xBBA8F0 VA: 0xBBE8F0
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.MoveNext
	*/

	// RVA: -1 Offset: -1
	private void <>m__Finally1() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBED24 Offset: 0xBBAD24 VA: 0xBBED24
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<>m__Finally1
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 4
	private KeyValuePair<object, object> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBEDD4 Offset: 0xBBADD4 VA: 0xBBEDD4
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.get_Current
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBEDE0 Offset: 0xBBADE0 VA: 0xBBEDE0
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IEnumerator.Reset
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBBEE14 Offset: 0xBBAE14 VA: 0xBBEE14
	|-DefaultContractResolver.EnumerableDictionaryWrapper.<GetEnumerator>d__2<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IEnumerator.get_Current
	*/
}


// Namespace: 
[NullableContext(0)]
internal class DefaultContractResolver.EnumerableDictionaryWrapper<TEnumeratorKey, TEnumeratorValue> : IEnumerable<KeyValuePair<object, object>>, IEnumerable // TypeDefIndex: 4284
{
	// Fields
	[Nullable(new[] { 1, 0, 1, 1 })]
	private readonly IEnumerable<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _e; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(IEnumerable<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> e) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0B108 Offset: 0xC07108 VA: 0xC0B108
	|-DefaultContractResolver.EnumerableDictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public IEnumerator<KeyValuePair<object, object>> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0B174 Offset: 0xC07174 VA: 0xC0B174
	|-DefaultContractResolver.EnumerableDictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.GetEnumerator
	*/

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0B1E0 Offset: 0xC071E0 VA: 0xC0B1E0
	|-DefaultContractResolver.EnumerableDictionaryWrapper<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class DefaultContractResolver.<>c // TypeDefIndex: 4285
{
	// Fields
	[Nullable(0)]
	public static readonly DefaultContractResolver.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<MemberInfo, bool> <>9__40_0; // 0x8
	[Nullable(0)]
	public static Func<MemberInfo, bool> <>9__40_1; // 0x10
	[Nullable(0)]
	public static Func<Type, IEnumerable<MemberInfo>> <>9__44_0; // 0x18
	[Nullable(0)]
	public static Func<MemberInfo, bool> <>9__44_1; // 0x20
	[Nullable(0)]
	public static Func<ConstructorInfo, bool> <>9__47_0; // 0x28
	[Nullable(0)]
	public static Func<JsonProperty, int> <>9__75_0; // 0x30

	// Methods

	// RVA: 0xEFDDF8 Offset: 0xEF9DF8 VA: 0xEFDDF8
	private static void .cctor() { }

	// RVA: 0xEFDE54 Offset: 0xEF9E54 VA: 0xEFDE54
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xEFDE5C Offset: 0xEF9E5C VA: 0xEFDE5C
	internal bool <GetSerializableMembers>b__40_0(MemberInfo m) { }

	[NullableContext(0)]
	// RVA: 0xEFDF10 Offset: 0xEF9F10 VA: 0xEFDF10
	internal bool <GetSerializableMembers>b__40_1(MemberInfo m) { }

	[NullableContext(0)]
	// RVA: 0xEFDF80 Offset: 0xEF9F80 VA: 0xEFDF80
	internal IEnumerable<MemberInfo> <GetExtensionDataMemberForType>b__44_0(Type baseType) { }

	[NullableContext(0)]
	// RVA: 0xEFE060 Offset: 0xEFA060 VA: 0xEFE060
	internal bool <GetExtensionDataMemberForType>b__44_1(MemberInfo m) { }

	[NullableContext(0)]
	// RVA: 0xEFE43C Offset: 0xEFA43C VA: 0xEFE43C
	internal bool <GetAttributeConstructor>b__47_0(ConstructorInfo c) { }

	[NullableContext(0)]
	// RVA: 0xEFE4D4 Offset: 0xEFA4D4 VA: 0xEFE4D4
	internal int <CreateProperties>b__75_0(JsonProperty p) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass42_0 // TypeDefIndex: 4286
{
	// Fields
	[Nullable(0)]
	public NamingStrategy namingStrategy; // 0x10

	// Methods

	// RVA: 0xEFE58C Offset: 0xEFA58C VA: 0xEFE58C
	public void .ctor() { }

	// RVA: 0xEFE594 Offset: 0xEFA594 VA: 0xEFE594
	internal string <CreateObjectContract>b__0(string s) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass45_0 // TypeDefIndex: 4287
{
	// Fields
	[Nullable(new[] { 0, 1, 2 })]
	public Func<object, object> getExtensionDataDictionary; // 0x10
	[Nullable(0)]
	public MemberInfo member; // 0x18

	// Methods

	// RVA: 0xEFE5B4 Offset: 0xEFA5B4 VA: 0xEFE5B4
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass45_1 // TypeDefIndex: 4288
{
	// Fields
	[Nullable(new[] { 0, 1, 2 })]
	public Action<object, object> setExtensionDataDictionary; // 0x10
	[Nullable(new[] { 0, 1 })]
	public Func<object> createExtensionDataDictionary; // 0x18
	[Nullable(new[] { 0, 1, 2 })]
	public MethodCall<object, object> setExtensionDataDictionaryValue; // 0x20
	[Nullable(0)]
	public DefaultContractResolver.<>c__DisplayClass45_0 CS$<>8__locals1; // 0x28

	// Methods

	// RVA: 0xEFE5BC Offset: 0xEFA5BC VA: 0xEFE5BC
	public void .ctor() { }

	// RVA: 0xEFE5C4 Offset: 0xEFA5C4 VA: 0xEFE5C4
	internal void <SetExtensionDataDelegates>b__0(object o, string key, object value) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass45_2 // TypeDefIndex: 4289
{
	// Fields
	[Nullable(new[] { 0, 1 })]
	public ObjectConstructor<object> createEnumerableWrapper; // 0x10
	[Nullable(0)]
	public DefaultContractResolver.<>c__DisplayClass45_0 CS$<>8__locals2; // 0x18

	// Methods

	// RVA: 0xEFE7D0 Offset: 0xEFA7D0 VA: 0xEFE7D0
	public void .ctor() { }

	// RVA: 0xEFE7D8 Offset: 0xEFA7D8 VA: 0xEFE7D8
	internal IEnumerable<KeyValuePair<object, object>> <SetExtensionDataDelegates>b__1(object o) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass62_0 // TypeDefIndex: 4290
{
	// Fields
	[Nullable(0)]
	public NamingStrategy namingStrategy; // 0x10

	// Methods

	// RVA: 0xEFE8F4 Offset: 0xEFA8F4 VA: 0xEFE8F4
	public void .ctor() { }

	// RVA: 0xEFE8FC Offset: 0xEFA8FC VA: 0xEFE8FC
	internal string <CreateDictionaryContract>b__0(string s) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass67_0 // TypeDefIndex: 4291
{
	// Fields
	[Nullable(0)]
	public NamingStrategy namingStrategy; // 0x10

	// Methods

	// RVA: 0xEFE91C Offset: 0xEFA91C VA: 0xEFE91C
	public void .ctor() { }

	// RVA: 0xEFE924 Offset: 0xEFA924 VA: 0xEFE924
	internal string <CreateDynamicContract>b__0(string s) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass80_0 // TypeDefIndex: 4292
{
	// Fields
	[Nullable(new[] { 0, 1, 2 })]
	public MethodCall<object, object> shouldSerializeCall; // 0x10

	// Methods

	// RVA: 0xEFE944 Offset: 0xEFA944 VA: 0xEFE944
	public void .ctor() { }

	// RVA: 0xEFE94C Offset: 0xEFA94C VA: 0xEFE94C
	internal bool <CreateShouldSerializeTest>b__0(object o) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DefaultContractResolver.<>c__DisplayClass81_0 // TypeDefIndex: 4293
{
	// Fields
	[Nullable(new[] { 0, 1, 1 })]
	public Func<object, object> specifiedPropertyGet; // 0x10

	// Methods

	// RVA: 0xEFEA4C Offset: 0xEFAA4C VA: 0xEFEA4C
	public void .ctor() { }

	// RVA: 0xEFEA54 Offset: 0xEFAA54 VA: 0xEFEA54
	internal bool <SetIsSpecifiedActions>b__0(object o) { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(1)]
public class DefaultContractResolver : IContractResolver // TypeDefIndex: 4294
{
	// Fields
	private static readonly IContractResolver _instance; // 0x0
	private static readonly string[] BlacklistedTypeNames; // 0x8
	private static readonly JsonConverter[] BuiltInConverters; // 0x10
	private readonly DefaultJsonNameTable _nameTable; // 0x10
	private readonly ThreadSafeStore<Type, JsonContract> _contractCache; // 0x18
	[CompilerGenerated]
	private BindingFlags <DefaultMembersSearchFlags>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <SerializeCompilerGeneratedMembers>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <IgnoreSerializableInterface>k__BackingField; // 0x25
	[CompilerGenerated]
	private bool <IgnoreSerializableAttribute>k__BackingField; // 0x26
	[CompilerGenerated]
	private bool <IgnoreIsSpecifiedMembers>k__BackingField; // 0x27
	[CompilerGenerated]
	private bool <IgnoreShouldSerializeMembers>k__BackingField; // 0x28
	[Nullable(2)]
	[CompilerGenerated]
	private NamingStrategy <NamingStrategy>k__BackingField; // 0x30

	// Properties
	internal static IContractResolver Instance { get; }
	[Obsolete("DefaultMembersSearchFlags is obsolete. To modify the members serialized inherit from DefaultContractResolver and override the GetSerializableMembers method instead.")]
	public BindingFlags DefaultMembersSearchFlags { get; set; }
	public bool SerializeCompilerGeneratedMembers { get; }
	public bool IgnoreSerializableInterface { get; }
	public bool IgnoreSerializableAttribute { get; set; }
	public bool IgnoreIsSpecifiedMembers { get; }
	public bool IgnoreShouldSerializeMembers { get; }
	[Nullable(2)]
	public NamingStrategy NamingStrategy { get; }

	// Methods

	// RVA: 0xEF6ACC Offset: 0xEF2ACC VA: 0xEF6ACC
	internal static IContractResolver get_Instance() { }

	[CompilerGenerated]
	// RVA: 0xEF6B24 Offset: 0xEF2B24 VA: 0xEF6B24
	public BindingFlags get_DefaultMembersSearchFlags() { }

	[CompilerGenerated]
	// RVA: 0xEF6B2C Offset: 0xEF2B2C VA: 0xEF6B2C
	public void set_DefaultMembersSearchFlags(BindingFlags value) { }

	[CompilerGenerated]
	// RVA: 0xEF6B34 Offset: 0xEF2B34 VA: 0xEF6B34
	public bool get_SerializeCompilerGeneratedMembers() { }

	[CompilerGenerated]
	// RVA: 0xEF6B3C Offset: 0xEF2B3C VA: 0xEF6B3C
	public bool get_IgnoreSerializableInterface() { }

	[CompilerGenerated]
	// RVA: 0xEF6B44 Offset: 0xEF2B44 VA: 0xEF6B44
	public bool get_IgnoreSerializableAttribute() { }

	[CompilerGenerated]
	// RVA: 0xEF6B4C Offset: 0xEF2B4C VA: 0xEF6B4C
	public void set_IgnoreSerializableAttribute(bool value) { }

	[CompilerGenerated]
	// RVA: 0xEF6B58 Offset: 0xEF2B58 VA: 0xEF6B58
	public bool get_IgnoreIsSpecifiedMembers() { }

	[CompilerGenerated]
	// RVA: 0xEF6B60 Offset: 0xEF2B60 VA: 0xEF6B60
	public bool get_IgnoreShouldSerializeMembers() { }

	[CompilerGenerated]
	[NullableContext(2)]
	// RVA: 0xEF6B68 Offset: 0xEF2B68 VA: 0xEF6B68
	public NamingStrategy get_NamingStrategy() { }

	// RVA: 0xEF6B70 Offset: 0xEF2B70 VA: 0xEF6B70
	public void .ctor() { }

	// RVA: 0xEF6C6C Offset: 0xEF2C6C VA: 0xEF6C6C Slot: 5
	public virtual JsonContract ResolveContract(Type type) { }

	// RVA: 0xEF6CF8 Offset: 0xEF2CF8 VA: 0xEF6CF8
	private static bool FilterMembers(MemberInfo member) { }

	// RVA: 0xEF6E3C Offset: 0xEF2E3C VA: 0xEF6E3C Slot: 6
	protected virtual List<MemberInfo> GetSerializableMembers(Type objectType) { }

	// RVA: 0xEF7A40 Offset: 0xEF3A40 VA: 0xEF7A40
	private bool ShouldSerializeEntityMember(MemberInfo memberInfo) { }

	// RVA: 0xEF7B48 Offset: 0xEF3B48 VA: 0xEF7B48 Slot: 7
	protected virtual JsonObjectContract CreateObjectContract(Type objectType) { }

	// RVA: 0xEF94CC Offset: 0xEF54CC VA: 0xEF94CC
	private static void ThrowUnableToSerializeError(object o, StreamingContext context) { }

	// RVA: 0xEF8B38 Offset: 0xEF4B38 VA: 0xEF8B38
	private MemberInfo GetExtensionDataMemberForType(Type type) { }

	// RVA: 0xEF8D08 Offset: 0xEF4D08 VA: 0xEF8D08
	private static void SetExtensionDataDelegates(JsonObjectContract contract, MemberInfo member) { }

	// RVA: 0xEF8350 Offset: 0xEF4350 VA: 0xEF8350
	private ConstructorInfo GetAttributeConstructor(Type objectType) { }

	// RVA: 0xEF8884 Offset: 0xEF4884 VA: 0xEF8884
	private ConstructorInfo GetImmutableConstructor(Type objectType, JsonPropertyCollection memberProperties) { }

	// RVA: 0xEF883C Offset: 0xEF483C VA: 0xEF883C
	private ConstructorInfo GetParameterizedConstructor(Type objectType) { }

	// RVA: 0xEF9774 Offset: 0xEF5774 VA: 0xEF9774 Slot: 8
	protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties) { }

	// RVA: 0xEF96CC Offset: 0xEF56CC VA: 0xEF96CC
	private JsonProperty MatchProperty(JsonPropertyCollection properties, string name, Type type) { }

	// RVA: 0xEF98F0 Offset: 0xEF58F0 VA: 0xEF98F0 Slot: 9
	protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty matchingMemberProperty, ParameterInfo parameterInfo) { }

	// RVA: 0xEFA408 Offset: 0xEF6408 VA: 0xEFA408 Slot: 10
	protected virtual JsonConverter ResolveContractConverter(Type objectType) { }

	// RVA: 0xEFA460 Offset: 0xEF6460 VA: 0xEFA460
	private Func<object> GetDefaultCreator(Type createdType) { }

	// RVA: 0xEF8108 Offset: 0xEF4108 VA: 0xEF8108
	private void InitializeContract(JsonContract contract) { }

	// RVA: 0xEFA500 Offset: 0xEF6500 VA: 0xEFA500
	private void ResolveCallbackMethods(JsonContract contract, Type t) { }

	// RVA: 0xEFA640 Offset: 0xEF6640 VA: 0xEFA640
	private void GetCallbackMethodsForType(Type type, out List<SerializationCallback> onSerializing, out List<SerializationCallback> onSerialized, out List<SerializationCallback> onDeserializing, out List<SerializationCallback> onDeserialized, out List<SerializationErrorCallback> onError) { }

	// RVA: 0xEFB634 Offset: 0xEF7634 VA: 0xEFB634
	private static bool IsConcurrentOrObservableCollection(Type t) { }

	// RVA: 0xEFAF00 Offset: 0xEF6F00 VA: 0xEFAF00
	private static bool ShouldSkipDeserialized(Type t) { }

	// RVA: 0xEFAE2C Offset: 0xEF6E2C VA: 0xEFAE2C
	private static bool ShouldSkipSerializing(Type t) { }

	// RVA: 0xEF9560 Offset: 0xEF5560 VA: 0xEF9560
	private List<Type> GetClassHierarchyForType(Type type) { }

	// RVA: 0xEFB77C Offset: 0xEF777C VA: 0xEFB77C Slot: 11
	protected virtual JsonDictionaryContract CreateDictionaryContract(Type objectType) { }

	// RVA: 0xEFBCAC Offset: 0xEF7CAC VA: 0xEFBCAC Slot: 12
	protected virtual JsonArrayContract CreateArrayContract(Type objectType) { }

	// RVA: 0xEFBFE8 Offset: 0xEF7FE8 VA: 0xEFBFE8 Slot: 13
	protected virtual JsonPrimitiveContract CreatePrimitiveContract(Type objectType) { }

	// RVA: 0xEFC05C Offset: 0xEF805C VA: 0xEFC05C Slot: 14
	protected virtual JsonLinqContract CreateLinqContract(Type objectType) { }

	// RVA: 0xEFC0D0 Offset: 0xEF80D0 VA: 0xEFC0D0 Slot: 15
	protected virtual JsonISerializableContract CreateISerializableContract(Type objectType) { }

	// RVA: 0xEFC2F4 Offset: 0xEF82F4 VA: 0xEFC2F4 Slot: 16
	protected virtual JsonDynamicContract CreateDynamicContract(Type objectType) { }

	// RVA: 0xEFC500 Offset: 0xEF8500 VA: 0xEFC500 Slot: 17
	protected virtual JsonStringContract CreateStringContract(Type objectType) { }

	// RVA: 0xEFC574 Offset: 0xEF8574 VA: 0xEFC574 Slot: 18
	protected virtual JsonContract CreateContract(Type objectType) { }

	// RVA: 0xEFC978 Offset: 0xEF8978 VA: 0xEFC978
	internal static bool IsJsonPrimitiveType(Type t) { }

	// RVA: 0xEFCAF0 Offset: 0xEF8AF0 VA: 0xEFCAF0
	internal static bool IsIConvertible(Type t) { }

	// RVA: 0xEFC9D8 Offset: 0xEF89D8 VA: 0xEFC9D8
	internal static bool CanConvertToString(Type type) { }

	// RVA: 0xEFAFD4 Offset: 0xEF6FD4 VA: 0xEFAFD4
	private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, Type attributeType, MethodInfo currentCallback, ref Type prevAttributeType) { }

	// RVA: 0xEFCC68 Offset: 0xEF8C68 VA: 0xEFCC68
	internal static string GetClrTypeFullName(Type type) { }

	// RVA: 0xEFCD68 Offset: 0xEF8D68 VA: 0xEFCD68 Slot: 19
	protected virtual IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization) { }

	// RVA: 0xEFD19C Offset: 0xEF919C VA: 0xEFD19C Slot: 20
	internal virtual DefaultJsonNameTable GetNameTable() { }

	// RVA: 0xEFD1A4 Offset: 0xEF91A4 VA: 0xEFD1A4 Slot: 21
	protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member) { }

	// RVA: 0xEFD200 Offset: 0xEF9200 VA: 0xEFD200 Slot: 22
	protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization) { }

	// RVA: 0xEF9D54 Offset: 0xEF5D54 VA: 0xEF9D54
	private void SetPropertySettingsFromAttributes(JsonProperty property, object attributeProvider, string name, Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess) { }

	// RVA: 0xEFD3E8 Offset: 0xEF93E8 VA: 0xEFD3E8
	private Predicate<object> CreateShouldSerializeTest(MemberInfo member) { }

	// RVA: 0xEFD640 Offset: 0xEF9640 VA: 0xEFD640
	private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess) { }

	// RVA: 0xEFD924 Offset: 0xEF9924 VA: 0xEFD924 Slot: 23
	protected virtual string ResolvePropertyName(string propertyName) { }

	// RVA: 0xEFD944 Offset: 0xEF9944 VA: 0xEFD944 Slot: 24
	protected virtual string ResolveExtensionDataName(string extensionDataName) { }

	// RVA: 0xEFD960 Offset: 0xEF9960 VA: 0xEFD960 Slot: 25
	protected virtual string ResolveDictionaryKey(string dictionaryKey) { }

	// RVA: 0xEFD98C Offset: 0xEF998C VA: 0xEFD98C
	public string GetResolvedPropertyName(string propertyName) { }

	// RVA: 0xEFD99C Offset: 0xEF999C VA: 0xEFD99C
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
public class DefaultNamingStrategy : NamingStrategy // TypeDefIndex: 4295
{
	// Methods

	[NullableContext(1)]
	// RVA: 0xEFEAF0 Offset: 0xEFAAF0 VA: 0xEFEAF0 Slot: 7
	protected override string ResolvePropertyName(string name) { }

	// RVA: 0xEFEAF8 Offset: 0xEFAAF8 VA: 0xEFEAF8
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class DefaultReferenceResolver : IReferenceResolver // TypeDefIndex: 4296
{
	// Fields
	private int _referenceCount; // 0x10

	// Methods

	// RVA: 0xEFEB00 Offset: 0xEFAB00 VA: 0xEFEB00
	private BidirectionalDictionary<string, object> GetMappings(object context) { }

	// RVA: 0xEFED10 Offset: 0xEFAD10 VA: 0xEFED10 Slot: 4
	public object ResolveReference(object context, string reference) { }

	// RVA: 0xEFED84 Offset: 0xEFAD84 VA: 0xEFED84 Slot: 5
	public string GetReference(object context, object value) { }

	// RVA: 0xEFEE78 Offset: 0xEFAE78 VA: 0xEFEE78 Slot: 7
	public void AddReference(object context, string reference, object value) { }

	// RVA: 0xEFEEE4 Offset: 0xEFAEE4 VA: 0xEFEEE4 Slot: 6
	public bool IsReferenced(object context, object value) { }

	// RVA: 0xEFEF58 Offset: 0xEFAF58 VA: 0xEFEF58
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
public class DefaultSerializationBinder : SerializationBinder, ISerializationBinder // TypeDefIndex: 4297
{
	// Fields
	internal static readonly DefaultSerializationBinder Instance; // 0x0
	[Nullable(new[] { 1, 0, 2, 1, 1 })]
	private readonly ThreadSafeStore<StructMultiKey<string, string>, Type> _typeCache; // 0x10

	// Methods

	// RVA: 0xEFEF60 Offset: 0xEFAF60 VA: 0xEFEF60
	public void .ctor() { }

	// RVA: 0xEFF030 Offset: 0xEFB030 VA: 0xEFF030
	private Type GetTypeFromTypeNameKey(StructMultiKey<string, string> typeNameKey) { }

	// RVA: 0xEFF428 Offset: 0xEFB428 VA: 0xEFF428
	private Type GetGenericTypeFromTypeName(string typeName, Assembly assembly) { }

	// RVA: 0xEFF6A0 Offset: 0xEFB6A0 VA: 0xEFF6A0
	private Type GetTypeByName(StructMultiKey<string, string> typeNameKey) { }

	// RVA: 0xEFF718 Offset: 0xEFB718 VA: 0xEFF718 Slot: 5
	public override Type BindToType(string assemblyName, string typeName) { }

	[NullableContext(2)]
	// RVA: 0xEFF794 Offset: 0xEFB794 VA: 0xEFF794 Slot: 4
	public override void BindToName(Type serializedType, out string assemblyName, out string typeName) { }

	// RVA: 0xEFF7FC Offset: 0xEFB7FC VA: 0xEFF7FC
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
public class ErrorContext // TypeDefIndex: 4298
{
	// Fields
	[CompilerGenerated]
	private bool <Traced>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly Exception <Error>k__BackingField; // 0x18
	[CompilerGenerated]
	[Nullable(2)]
	private readonly object <OriginalObject>k__BackingField; // 0x20
	[Nullable(2)]
	[CompilerGenerated]
	private readonly object <Member>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly string <Path>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <Handled>k__BackingField; // 0x38

	// Properties
	internal bool Traced { get; set; }
	public Exception Error { get; }
	public bool Handled { get; }

	// Methods

	// RVA: 0xEFF854 Offset: 0xEFB854 VA: 0xEFF854
	internal void .ctor(object originalObject, object member, string path, Exception error) { }

	[CompilerGenerated]
	// RVA: 0xEFF894 Offset: 0xEFB894 VA: 0xEFF894
	internal bool get_Traced() { }

	[CompilerGenerated]
	// RVA: 0xEFF89C Offset: 0xEFB89C VA: 0xEFF89C
	internal void set_Traced(bool value) { }

	[CompilerGenerated]
	// RVA: 0xEFF8A8 Offset: 0xEFB8A8 VA: 0xEFF8A8
	public Exception get_Error() { }

	[CompilerGenerated]
	// RVA: 0xEFF8B0 Offset: 0xEFB8B0 VA: 0xEFF8B0
	public bool get_Handled() { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(1)]
public class ErrorEventArgs : EventArgs // TypeDefIndex: 4299
{
	// Fields
	[Nullable(2)]
	[CompilerGenerated]
	private readonly object <CurrentObject>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly ErrorContext <ErrorContext>k__BackingField; // 0x18

	// Methods

	// RVA: 0xEFF8B8 Offset: 0xEFB8B8 VA: 0xEFF8B8
	public void .ctor(object currentObject, ErrorContext errorContext) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
public interface IAttributeProvider // TypeDefIndex: 4300
{}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
public interface IContractResolver // TypeDefIndex: 4301
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract JsonContract ResolveContract(Type type);
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
public interface IReferenceResolver // TypeDefIndex: 4302
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract object ResolveReference(object context, string reference);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string GetReference(object context, object value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool IsReferenced(object context, object value);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void AddReference(object context, string reference, object value);
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
public interface ISerializationBinder // TypeDefIndex: 4303
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Type BindToType(string assemblyName, string typeName);

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void BindToName(Type serializedType, out string assemblyName, out string typeName);
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
public interface ITraceWriter // TypeDefIndex: 4304
{
	// Properties
	public abstract TraceLevel LevelFilter { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract TraceLevel get_LevelFilter();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Trace(TraceLevel level, string message, Exception ex);
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
public interface IValueProvider // TypeDefIndex: 4305
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetValue(object target, object value);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract object GetValue(object target);
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(2)]
public class JsonArrayContract : JsonContainerContract // TypeDefIndex: 4306
{
	// Fields
	[CompilerGenerated]
	private readonly Type <CollectionItemType>k__BackingField; // 0xC0
	[CompilerGenerated]
	private readonly bool <IsMultidimensionalArray>k__BackingField; // 0xC8
	private readonly Type _genericCollectionDefinitionType; // 0xD0
	private Type _genericWrapperType; // 0xD8
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _genericWrapperCreator; // 0xE0
	[Nullable(new[] { 2, 1 })]
	private Func<object> _genericTemporaryCollectionCreator; // 0xE8
	[CompilerGenerated]
	private readonly bool <IsArray>k__BackingField; // 0xF0
	[CompilerGenerated]
	private readonly bool <ShouldCreateWrapper>k__BackingField; // 0xF1
	[CompilerGenerated]
	private bool <CanDeserialize>k__BackingField; // 0xF2
	private readonly ConstructorInfo _parameterizedConstructor; // 0xF8
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _parameterizedCreator; // 0x100
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _overrideCreator; // 0x108
	[CompilerGenerated]
	private bool <HasParameterizedCreator>k__BackingField; // 0x110

	// Properties
	public Type CollectionItemType { get; }
	public bool IsMultidimensionalArray { get; }
	internal bool IsArray { get; }
	internal bool ShouldCreateWrapper { get; }
	internal bool CanDeserialize { get; set; }
	[Nullable(new[] { 2, 1 })]
	internal ObjectConstructor<object> ParameterizedCreator { get; }
	[Nullable(new[] { 2, 1 })]
	public ObjectConstructor<object> OverrideCreator { get; set; }
	public bool HasParameterizedCreator { get; set; }
	internal bool HasParameterizedCreatorInternal { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xEFF928 Offset: 0xEFB928 VA: 0xEFF928
	public Type get_CollectionItemType() { }

	[CompilerGenerated]
	// RVA: 0xEFF930 Offset: 0xEFB930 VA: 0xEFF930
	public bool get_IsMultidimensionalArray() { }

	[CompilerGenerated]
	// RVA: 0xEFF938 Offset: 0xEFB938 VA: 0xEFF938
	internal bool get_IsArray() { }

	[CompilerGenerated]
	// RVA: 0xEFF940 Offset: 0xEFB940 VA: 0xEFF940
	internal bool get_ShouldCreateWrapper() { }

	[CompilerGenerated]
	// RVA: 0xEFF948 Offset: 0xEFB948 VA: 0xEFF948
	internal bool get_CanDeserialize() { }

	[CompilerGenerated]
	// RVA: 0xEFF950 Offset: 0xEFB950 VA: 0xEFF950
	private void set_CanDeserialize(bool value) { }

	// RVA: 0xEFF95C Offset: 0xEFB95C VA: 0xEFF95C
	internal ObjectConstructor<object> get_ParameterizedCreator() { }

	// RVA: 0xEFFA1C Offset: 0xEFBA1C VA: 0xEFFA1C
	public ObjectConstructor<object> get_OverrideCreator() { }

	// RVA: 0xEFFA24 Offset: 0xEFBA24 VA: 0xEFFA24
	public void set_OverrideCreator(ObjectConstructor<object> value) { }

	[CompilerGenerated]
	// RVA: 0xEFFA34 Offset: 0xEFBA34 VA: 0xEFFA34
	public bool get_HasParameterizedCreator() { }

	[CompilerGenerated]
	// RVA: 0xEFFA3C Offset: 0xEFBA3C VA: 0xEFFA3C
	public void set_HasParameterizedCreator(bool value) { }

	// RVA: 0xEFFA48 Offset: 0xEFBA48 VA: 0xEFFA48
	internal bool get_HasParameterizedCreatorInternal() { }

	[NullableContext(1)]
	// RVA: 0xEFFAC8 Offset: 0xEFBAC8 VA: 0xEFFAC8
	public void .ctor(Type underlyingType) { }

	[NullableContext(1)]
	// RVA: 0xF00A88 Offset: 0xEFCA88 VA: 0xF00A88
	internal IWrappedCollection CreateWrapper(object list) { }

	[NullableContext(1)]
	// RVA: 0xF00E4C Offset: 0xEFCE4C VA: 0xF00E4C
	internal IList CreateTemporaryCollection() { }

	[NullableContext(1)]
	// RVA: 0xF0097C Offset: 0xEFC97C VA: 0xF0097C
	private void StoreFSharpListCreatorIfNecessary(Type underlyingType) { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(2)]
public class JsonContainerContract : JsonContract // TypeDefIndex: 4307
{
	// Fields
	private JsonContract _itemContract; // 0x90
	private JsonContract _finalItemContract; // 0x98
	[CompilerGenerated]
	private JsonConverter <ItemConverter>k__BackingField; // 0xA0
	[CompilerGenerated]
	private Nullable<bool> <ItemIsReference>k__BackingField; // 0xA8
	[CompilerGenerated]
	private Nullable<ReferenceLoopHandling> <ItemReferenceLoopHandling>k__BackingField; // 0xAC
	[CompilerGenerated]
	private Nullable<TypeNameHandling> <ItemTypeNameHandling>k__BackingField; // 0xB4

	// Properties
	internal JsonContract ItemContract { get; set; }
	internal JsonContract FinalItemContract { get; }
	public JsonConverter ItemConverter { get; set; }
	public Nullable<bool> ItemIsReference { get; set; }
	public Nullable<ReferenceLoopHandling> ItemReferenceLoopHandling { get; set; }
	public Nullable<TypeNameHandling> ItemTypeNameHandling { get; set; }

	// Methods

	// RVA: 0xF010B0 Offset: 0xEFD0B0 VA: 0xF010B0
	internal JsonContract get_ItemContract() { }

	// RVA: 0xF010B8 Offset: 0xEFD0B8 VA: 0xF010B8
	internal void set_ItemContract(JsonContract value) { }

	// RVA: 0xF010F4 Offset: 0xEFD0F4 VA: 0xF010F4
	internal JsonContract get_FinalItemContract() { }

	[CompilerGenerated]
	// RVA: 0xF010FC Offset: 0xEFD0FC VA: 0xF010FC
	public JsonConverter get_ItemConverter() { }

	[CompilerGenerated]
	// RVA: 0xF01104 Offset: 0xEFD104 VA: 0xF01104
	public void set_ItemConverter(JsonConverter value) { }

	[CompilerGenerated]
	// RVA: 0xF0110C Offset: 0xEFD10C VA: 0xF0110C
	public Nullable<bool> get_ItemIsReference() { }

	[CompilerGenerated]
	// RVA: 0xF01114 Offset: 0xEFD114 VA: 0xF01114
	public void set_ItemIsReference(Nullable<bool> value) { }

	[CompilerGenerated]
	// RVA: 0xF0111C Offset: 0xEFD11C VA: 0xF0111C
	public Nullable<ReferenceLoopHandling> get_ItemReferenceLoopHandling() { }

	[CompilerGenerated]
	// RVA: 0xF01124 Offset: 0xEFD124 VA: 0xF01124
	public void set_ItemReferenceLoopHandling(Nullable<ReferenceLoopHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF0112C Offset: 0xEFD12C VA: 0xF0112C
	public Nullable<TypeNameHandling> get_ItemTypeNameHandling() { }

	[CompilerGenerated]
	// RVA: 0xF01134 Offset: 0xEFD134 VA: 0xF01134
	public void set_ItemTypeNameHandling(Nullable<TypeNameHandling> value) { }

	[NullableContext(1)]
	// RVA: 0xF007C8 Offset: 0xEFC7C8 VA: 0xF007C8
	internal void .ctor(Type underlyingType) { }
}


// Namespace: Newtonsoft.Json.Serialization
internal enum JsonContractType // TypeDefIndex: 4308
{
	// Fields
	public int value__; // 0x0
	public const JsonContractType None = 0;
	public const JsonContractType Object = 1;
	public const JsonContractType Array = 2;
	public const JsonContractType Primitive = 3;
	public const JsonContractType String = 4;
	public const JsonContractType Dictionary = 5;
	public const JsonContractType Dynamic = 6;
	public const JsonContractType Serializable = 7;
	public const JsonContractType Linq = 8;
}


// Namespace: Newtonsoft.Json.Serialization
public sealed class SerializationCallback : MulticastDelegate // TypeDefIndex: 4309
{
	// Methods

	// RVA: 0xF0128C Offset: 0xEFD28C VA: 0xF0128C
	public void .ctor(object object, IntPtr method) { }

	[NullableContext(1)]
	// RVA: 0xF01390 Offset: 0xEFD390 VA: 0xF01390 Slot: 12
	public virtual void Invoke(object o, StreamingContext context) { }
}


// Namespace: Newtonsoft.Json.Serialization
public sealed class SerializationErrorCallback : MulticastDelegate // TypeDefIndex: 4310
{
	// Methods

	// RVA: 0xF013A4 Offset: 0xEFD3A4 VA: 0xF013A4
	public void .ctor(object object, IntPtr method) { }

	[NullableContext(1)]
	// RVA: 0xF014A8 Offset: 0xEFD4A8 VA: 0xF014A8 Slot: 12
	public virtual void Invoke(object o, StreamingContext context, ErrorContext errorContext) { }
}


// Namespace: Newtonsoft.Json.Serialization
public sealed class ExtensionDataSetter : MulticastDelegate // TypeDefIndex: 4311
{
	// Methods

	// RVA: 0xF014BC Offset: 0xEFD4BC VA: 0xF014BC
	public void .ctor(object object, IntPtr method) { }

	[NullableContext(1)]
	// RVA: 0xF015C0 Offset: 0xEFD5C0 VA: 0xF015C0 Slot: 12
	public virtual void Invoke(object o, string key, object value) { }
}


// Namespace: Newtonsoft.Json.Serialization
public sealed class ExtensionDataGetter : MulticastDelegate // TypeDefIndex: 4312
{
	// Methods

	// RVA: 0xF015D4 Offset: 0xEFD5D4 VA: 0xF015D4
	public void .ctor(object object, IntPtr method) { }

	[NullableContext(1)]
	// RVA: 0xF016D4 Offset: 0xEFD6D4 VA: 0xF016D4 Slot: 12
	public virtual IEnumerable<KeyValuePair<object, object>> Invoke(object o) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class JsonContract.<>c__DisplayClass57_0 // TypeDefIndex: 4313
{
	// Fields
	[Nullable(0)]
	public MethodInfo callbackMethodInfo; // 0x10

	// Methods

	// RVA: 0xF021E4 Offset: 0xEFE1E4 VA: 0xF021E4
	public void .ctor() { }

	// RVA: 0xF02298 Offset: 0xEFE298 VA: 0xF02298
	internal void <CreateSerializationCallback>b__0(object o, StreamingContext context) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class JsonContract.<>c__DisplayClass58_0 // TypeDefIndex: 4314
{
	// Fields
	[Nullable(0)]
	public MethodInfo callbackMethodInfo; // 0x10

	// Methods

	// RVA: 0xF02290 Offset: 0xEFE290 VA: 0xF02290
	public void .ctor() { }

	// RVA: 0xF0238C Offset: 0xEFE38C VA: 0xF0238C
	internal void <CreateSerializationErrorCallback>b__0(object o, StreamingContext context, ErrorContext econtext) { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(1)]
public abstract class JsonContract // TypeDefIndex: 4315
{
	// Fields
	internal bool IsNullable; // 0x10
	internal bool IsConvertable; // 0x11
	internal bool IsEnum; // 0x12
	internal Type NonNullableUnderlyingType; // 0x18
	internal ReadType InternalReadType; // 0x20
	internal JsonContractType ContractType; // 0x24
	internal bool IsReadOnlyOrFixedSize; // 0x28
	internal bool IsSealed; // 0x29
	internal bool IsInstantiable; // 0x2A
	[Nullable(new[] { 2, 1 })]
	private List<SerializationCallback> _onDeserializedCallbacks; // 0x30
	[Nullable(new[] { 2, 1 })]
	private List<SerializationCallback> _onDeserializingCallbacks; // 0x38
	[Nullable(new[] { 2, 1 })]
	private List<SerializationCallback> _onSerializedCallbacks; // 0x40
	[Nullable(new[] { 2, 1 })]
	private List<SerializationCallback> _onSerializingCallbacks; // 0x48
	[Nullable(new[] { 2, 1 })]
	private List<SerializationErrorCallback> _onErrorCallbacks; // 0x50
	private Type _createdType; // 0x58
	[CompilerGenerated]
	private readonly Type <UnderlyingType>k__BackingField; // 0x60
	[CompilerGenerated]
	private Nullable<bool> <IsReference>k__BackingField; // 0x68
	[CompilerGenerated]
	[Nullable(2)]
	private JsonConverter <Converter>k__BackingField; // 0x70
	[CompilerGenerated]
	[Nullable(2)]
	private JsonConverter <InternalConverter>k__BackingField; // 0x78
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private Func<object> <DefaultCreator>k__BackingField; // 0x80
	[CompilerGenerated]
	private bool <DefaultCreatorNonPublic>k__BackingField; // 0x88

	// Properties
	public Type UnderlyingType { get; }
	public Type CreatedType { get; set; }
	public Nullable<bool> IsReference { get; set; }
	[Nullable(2)]
	public JsonConverter Converter { get; set; }
	[Nullable(2)]
	public JsonConverter InternalConverter { get; set; }
	public IList<SerializationCallback> OnDeserializedCallbacks { get; }
	public IList<SerializationCallback> OnDeserializingCallbacks { get; }
	public IList<SerializationCallback> OnSerializedCallbacks { get; }
	public IList<SerializationCallback> OnSerializingCallbacks { get; }
	public IList<SerializationErrorCallback> OnErrorCallbacks { get; }
	[Nullable(new[] { 2, 1 })]
	public Func<object> DefaultCreator { get; set; }
	public bool DefaultCreatorNonPublic { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF016E8 Offset: 0xEFD6E8 VA: 0xF016E8
	public Type get_UnderlyingType() { }

	// RVA: 0xF016F0 Offset: 0xEFD6F0 VA: 0xF016F0
	public Type get_CreatedType() { }

	// RVA: 0xF008D4 Offset: 0xEFC8D4 VA: 0xF008D4
	public void set_CreatedType(Type value) { }

	[CompilerGenerated]
	// RVA: 0xF016F8 Offset: 0xEFD6F8 VA: 0xF016F8
	public Nullable<bool> get_IsReference() { }

	[CompilerGenerated]
	// RVA: 0xF01700 Offset: 0xEFD700 VA: 0xF01700
	public void set_IsReference(Nullable<bool> value) { }

	[NullableContext(2)]
	[CompilerGenerated]
	// RVA: 0xF01708 Offset: 0xEFD708 VA: 0xF01708
	public JsonConverter get_Converter() { }

	[CompilerGenerated]
	[NullableContext(2)]
	// RVA: 0xF01710 Offset: 0xEFD710 VA: 0xF01710
	public void set_Converter(JsonConverter value) { }

	[NullableContext(2)]
	[CompilerGenerated]
	// RVA: 0xF01718 Offset: 0xEFD718 VA: 0xF01718
	public JsonConverter get_InternalConverter() { }

	[NullableContext(2)]
	[CompilerGenerated]
	// RVA: 0xF01720 Offset: 0xEFD720 VA: 0xF01720
	internal void set_InternalConverter(JsonConverter value) { }

	// RVA: 0xF01728 Offset: 0xEFD728 VA: 0xF01728
	public IList<SerializationCallback> get_OnDeserializedCallbacks() { }

	// RVA: 0xF017A0 Offset: 0xEFD7A0 VA: 0xF017A0
	public IList<SerializationCallback> get_OnDeserializingCallbacks() { }

	// RVA: 0xF01818 Offset: 0xEFD818 VA: 0xF01818
	public IList<SerializationCallback> get_OnSerializedCallbacks() { }

	// RVA: 0xF01890 Offset: 0xEFD890 VA: 0xF01890
	public IList<SerializationCallback> get_OnSerializingCallbacks() { }

	// RVA: 0xF01908 Offset: 0xEFD908 VA: 0xF01908
	public IList<SerializationErrorCallback> get_OnErrorCallbacks() { }

	[CompilerGenerated]
	// RVA: 0xF01980 Offset: 0xEFD980 VA: 0xF01980
	public Func<object> get_DefaultCreator() { }

	[CompilerGenerated]
	// RVA: 0xF01988 Offset: 0xEFD988 VA: 0xF01988
	public void set_DefaultCreator(Func<object> value) { }

	[CompilerGenerated]
	// RVA: 0xF01990 Offset: 0xEFD990 VA: 0xF01990
	public bool get_DefaultCreatorNonPublic() { }

	[CompilerGenerated]
	// RVA: 0xF01998 Offset: 0xEFD998 VA: 0xF01998
	public void set_DefaultCreatorNonPublic(bool value) { }

	// RVA: 0xF0113C Offset: 0xEFD13C VA: 0xF0113C
	internal void .ctor(Type underlyingType) { }

	// RVA: 0xF019A4 Offset: 0xEFD9A4 VA: 0xF019A4
	internal void InvokeOnSerializing(object o, StreamingContext context) { }

	// RVA: 0xF01B28 Offset: 0xEFDB28 VA: 0xF01B28
	internal void InvokeOnSerialized(object o, StreamingContext context) { }

	// RVA: 0xF01CAC Offset: 0xEFDCAC VA: 0xF01CAC
	internal void InvokeOnDeserializing(object o, StreamingContext context) { }

	// RVA: 0xF01E30 Offset: 0xEFDE30 VA: 0xF01E30
	internal void InvokeOnDeserialized(object o, StreamingContext context) { }

	// RVA: 0xF01FB4 Offset: 0xEFDFB4 VA: 0xF01FB4
	internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext) { }

	// RVA: 0xF02140 Offset: 0xEFE140 VA: 0xF02140
	internal static SerializationCallback CreateSerializationCallback(MethodInfo callbackMethodInfo) { }

	// RVA: 0xF021EC Offset: 0xEFE1EC VA: 0xF021EC
	internal static SerializationErrorCallback CreateSerializationErrorCallback(MethodInfo callbackMethodInfo) { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(2)]
public class JsonDictionaryContract : JsonContainerContract // TypeDefIndex: 4316
{
	// Fields
	[Nullable(new[] { 2, 1, 1 })]
	[CompilerGenerated]
	private Func<string, string> <DictionaryKeyResolver>k__BackingField; // 0xC0
	[CompilerGenerated]
	private readonly Type <DictionaryKeyType>k__BackingField; // 0xC8
	[CompilerGenerated]
	private readonly Type <DictionaryValueType>k__BackingField; // 0xD0
	[CompilerGenerated]
	private JsonContract <KeyContract>k__BackingField; // 0xD8
	private readonly Type _genericCollectionDefinitionType; // 0xE0
	private Type _genericWrapperType; // 0xE8
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _genericWrapperCreator; // 0xF0
	[Nullable(new[] { 2, 1 })]
	private Func<object> _genericTemporaryDictionaryCreator; // 0xF8
	[CompilerGenerated]
	private readonly bool <ShouldCreateWrapper>k__BackingField; // 0x100
	private readonly ConstructorInfo _parameterizedConstructor; // 0x108
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _overrideCreator; // 0x110
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _parameterizedCreator; // 0x118
	[CompilerGenerated]
	private bool <HasParameterizedCreator>k__BackingField; // 0x120

	// Properties
	[Nullable(new[] { 2, 1, 1 })]
	public Func<string, string> DictionaryKeyResolver { get; set; }
	public Type DictionaryKeyType { get; }
	public Type DictionaryValueType { get; }
	internal JsonContract KeyContract { get; set; }
	internal bool ShouldCreateWrapper { get; }
	[Nullable(new[] { 2, 1 })]
	internal ObjectConstructor<object> ParameterizedCreator { get; }
	[Nullable(new[] { 2, 1 })]
	public ObjectConstructor<object> OverrideCreator { get; set; }
	public bool HasParameterizedCreator { get; set; }
	internal bool HasParameterizedCreatorInternal { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF024B4 Offset: 0xEFE4B4 VA: 0xF024B4
	public Func<string, string> get_DictionaryKeyResolver() { }

	[CompilerGenerated]
	// RVA: 0xF024BC Offset: 0xEFE4BC VA: 0xF024BC
	public void set_DictionaryKeyResolver(Func<string, string> value) { }

	[CompilerGenerated]
	// RVA: 0xF024C4 Offset: 0xEFE4C4 VA: 0xF024C4
	public Type get_DictionaryKeyType() { }

	[CompilerGenerated]
	// RVA: 0xF024CC Offset: 0xEFE4CC VA: 0xF024CC
	public Type get_DictionaryValueType() { }

	[CompilerGenerated]
	// RVA: 0xF024D4 Offset: 0xEFE4D4 VA: 0xF024D4
	internal JsonContract get_KeyContract() { }

	[CompilerGenerated]
	// RVA: 0xF024DC Offset: 0xEFE4DC VA: 0xF024DC
	internal void set_KeyContract(JsonContract value) { }

	[CompilerGenerated]
	// RVA: 0xF024E4 Offset: 0xEFE4E4 VA: 0xF024E4
	internal bool get_ShouldCreateWrapper() { }

	// RVA: 0xF024EC Offset: 0xEFE4EC VA: 0xF024EC
	internal ObjectConstructor<object> get_ParameterizedCreator() { }

	// RVA: 0xF025AC Offset: 0xEFE5AC VA: 0xF025AC
	public ObjectConstructor<object> get_OverrideCreator() { }

	// RVA: 0xF025B4 Offset: 0xEFE5B4 VA: 0xF025B4
	public void set_OverrideCreator(ObjectConstructor<object> value) { }

	[CompilerGenerated]
	// RVA: 0xF025BC Offset: 0xEFE5BC VA: 0xF025BC
	public bool get_HasParameterizedCreator() { }

	[CompilerGenerated]
	// RVA: 0xF025C4 Offset: 0xEFE5C4 VA: 0xF025C4
	public void set_HasParameterizedCreator(bool value) { }

	// RVA: 0xF025D0 Offset: 0xEFE5D0 VA: 0xF025D0
	internal bool get_HasParameterizedCreatorInternal() { }

	[NullableContext(1)]
	// RVA: 0xF02650 Offset: 0xEFE650 VA: 0xF02650
	public void .ctor(Type underlyingType) { }

	[NullableContext(1)]
	// RVA: 0xF03000 Offset: 0xEFF000 VA: 0xF03000
	internal IWrappedDictionary CreateWrapper(object dictionary) { }

	[NullableContext(1)]
	// RVA: 0xF03288 Offset: 0xEFF288 VA: 0xF03288
	internal IDictionary CreateTemporaryDictionary() { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(1)]
public class JsonDynamicContract : JsonContainerContract // TypeDefIndex: 4317
{
	// Fields
	[CompilerGenerated]
	private readonly JsonPropertyCollection <Properties>k__BackingField; // 0xC0
	[Nullable(new[] { 2, 1, 1 })]
	[CompilerGenerated]
	private Func<string, string> <PropertyNameResolver>k__BackingField; // 0xC8
	private readonly ThreadSafeStore<string, CallSite<Func<CallSite, object, object>>> _callSiteGetters; // 0xD0
	[Nullable(new[] { 1, 1, 1, 1, 1, 1, 2, 1 })]
	private readonly ThreadSafeStore<string, CallSite<Func<CallSite, object, object, object>>> _callSiteSetters; // 0xD8

	// Properties
	public JsonPropertyCollection Properties { get; }
	[Nullable(new[] { 2, 1, 1 })]
	public Func<string, string> PropertyNameResolver { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF03510 Offset: 0xEFF510 VA: 0xF03510
	public JsonPropertyCollection get_Properties() { }

	[CompilerGenerated]
	// RVA: 0xF03518 Offset: 0xEFF518 VA: 0xF03518
	public Func<string, string> get_PropertyNameResolver() { }

	[CompilerGenerated]
	// RVA: 0xF03520 Offset: 0xEFF520 VA: 0xF03520
	public void set_PropertyNameResolver(Func<string, string> value) { }

	// RVA: 0xF03528 Offset: 0xEFF528 VA: 0xF03528
	private static CallSite<Func<CallSite, object, object>> CreateCallSiteGetter(string name) { }

	// RVA: 0xF03654 Offset: 0xEFF654 VA: 0xF03654
	private static CallSite<Func<CallSite, object, object, object>> CreateCallSiteSetter(string name) { }

	// RVA: 0xF03780 Offset: 0xEFF780 VA: 0xF03780
	public void .ctor(Type underlyingType) { }

	// RVA: 0xF03A84 Offset: 0xEFFA84 VA: 0xF03A84
	internal bool TryGetMember(IDynamicMetaObjectProvider dynamicProvider, string name, out object value) { }

	// RVA: 0xF03B8C Offset: 0xEFFB8C VA: 0xF03B8C
	internal bool TrySetMember(IDynamicMetaObjectProvider dynamicProvider, string name, object value) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class JsonFormatterConverter : IFormatterConverter // TypeDefIndex: 4318
{
	// Fields
	private readonly JsonSerializerInternalReader _reader; // 0x10
	private readonly JsonISerializableContract _contract; // 0x18
	[Nullable(2)]
	private readonly JsonProperty _member; // 0x20

	// Methods

	// RVA: 0xF03C90 Offset: 0xEFFC90 VA: 0xF03C90
	public void .ctor(JsonSerializerInternalReader reader, JsonISerializableContract contract, JsonProperty member) { }

	// RVA: -1 Offset: -1
	private T GetTokenValue<T>(object value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8DB98 Offset: 0xB89B98 VA: 0xB8DB98
	|-JsonFormatterConverter.GetTokenValue<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xF03D34 Offset: 0xEFFD34 VA: 0xF03D34 Slot: 4
	public object Convert(object value, Type type) { }

	// RVA: 0xF03F70 Offset: 0xEFFF70 VA: 0xF03F70 Slot: 5
	public bool ToBoolean(object value) { }

	// RVA: 0xF03FD4 Offset: 0xEFFFD4 VA: 0xF03FD4 Slot: 6
	public int ToInt32(object value) { }

	// RVA: 0xF04038 Offset: 0xF00038 VA: 0xF04038 Slot: 7
	public long ToInt64(object value) { }

	// RVA: 0xF0409C Offset: 0xF0009C VA: 0xF0409C Slot: 8
	public float ToSingle(object value) { }

	// RVA: 0xF04100 Offset: 0xF00100 VA: 0xF04100 Slot: 9
	public string ToString(object value) { }
}


// Namespace: Newtonsoft.Json.Serialization
public class JsonISerializableContract : JsonContainerContract // TypeDefIndex: 4319
{
	// Fields
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private ObjectConstructor<object> <ISerializableCreator>k__BackingField; // 0xC0

	// Properties
	[Nullable(new[] { 2, 1 })]
	public ObjectConstructor<object> ISerializableCreator { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF04164 Offset: 0xF00164 VA: 0xF04164
	public ObjectConstructor<object> get_ISerializableCreator() { }

	[CompilerGenerated]
	// RVA: 0xF0416C Offset: 0xF0016C VA: 0xF0416C
	public void set_ISerializableCreator(ObjectConstructor<object> value) { }

	[NullableContext(1)]
	// RVA: 0xF04174 Offset: 0xF00174 VA: 0xF04174
	public void .ctor(Type underlyingType) { }
}


// Namespace: Newtonsoft.Json.Serialization
public class JsonLinqContract : JsonContract // TypeDefIndex: 4320
{
	// Methods

	[NullableContext(1)]
	// RVA: 0xF04190 Offset: 0xF00190 VA: 0xF04190
	public void .ctor(Type underlyingType) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(2)]
[Nullable(0)]
public class JsonObjectContract : JsonContainerContract // TypeDefIndex: 4321
{
	// Fields
	[CompilerGenerated]
	private MemberSerialization <MemberSerialization>k__BackingField; // 0xBC
	[CompilerGenerated]
	private Nullable<MissingMemberHandling> <MissingMemberHandling>k__BackingField; // 0xC0
	[CompilerGenerated]
	private Nullable<Required> <ItemRequired>k__BackingField; // 0xC8
	[CompilerGenerated]
	private Nullable<NullValueHandling> <ItemNullValueHandling>k__BackingField; // 0xD0
	[Nullable(1)]
	[CompilerGenerated]
	private readonly JsonPropertyCollection <Properties>k__BackingField; // 0xD8
	[CompilerGenerated]
	private ExtensionDataSetter <ExtensionDataSetter>k__BackingField; // 0xE0
	[CompilerGenerated]
	private ExtensionDataGetter <ExtensionDataGetter>k__BackingField; // 0xE8
	[Nullable(new[] { 2, 1, 1 })]
	[CompilerGenerated]
	private Func<string, string> <ExtensionDataNameResolver>k__BackingField; // 0xF0
	internal bool ExtensionDataIsJToken; // 0xF8
	private Nullable<bool> _hasRequiredOrDefaultValueProperties; // 0xF9
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _overrideCreator; // 0x100
	[Nullable(new[] { 2, 1 })]
	private ObjectConstructor<object> _parameterizedCreator; // 0x108
	private JsonPropertyCollection _creatorParameters; // 0x110
	private Type _extensionDataValueType; // 0x118

	// Properties
	public MemberSerialization MemberSerialization { get; set; }
	public Nullable<MissingMemberHandling> MissingMemberHandling { get; set; }
	public Nullable<Required> ItemRequired { get; set; }
	public Nullable<NullValueHandling> ItemNullValueHandling { get; set; }
	[Nullable(1)]
	public JsonPropertyCollection Properties { get; }
	[Nullable(1)]
	public JsonPropertyCollection CreatorParameters { get; }
	[Nullable(new[] { 2, 1 })]
	public ObjectConstructor<object> OverrideCreator { get; set; }
	[Nullable(new[] { 2, 1 })]
	internal ObjectConstructor<object> ParameterizedCreator { get; set; }
	public ExtensionDataSetter ExtensionDataSetter { get; set; }
	public ExtensionDataGetter ExtensionDataGetter { get; set; }
	public Type ExtensionDataValueType { set; }
	[Nullable(new[] { 2, 1, 1 })]
	public Func<string, string> ExtensionDataNameResolver { get; set; }
	internal bool HasRequiredOrDefaultValueProperties { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF041AC Offset: 0xF001AC VA: 0xF041AC
	public MemberSerialization get_MemberSerialization() { }

	[CompilerGenerated]
	// RVA: 0xF041B4 Offset: 0xF001B4 VA: 0xF041B4
	public void set_MemberSerialization(MemberSerialization value) { }

	[CompilerGenerated]
	// RVA: 0xF041BC Offset: 0xF001BC VA: 0xF041BC
	public Nullable<MissingMemberHandling> get_MissingMemberHandling() { }

	[CompilerGenerated]
	// RVA: 0xF041C4 Offset: 0xF001C4 VA: 0xF041C4
	public void set_MissingMemberHandling(Nullable<MissingMemberHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF041CC Offset: 0xF001CC VA: 0xF041CC
	public Nullable<Required> get_ItemRequired() { }

	[CompilerGenerated]
	// RVA: 0xF041D4 Offset: 0xF001D4 VA: 0xF041D4
	public void set_ItemRequired(Nullable<Required> value) { }

	[CompilerGenerated]
	// RVA: 0xF041DC Offset: 0xF001DC VA: 0xF041DC
	public Nullable<NullValueHandling> get_ItemNullValueHandling() { }

	[CompilerGenerated]
	// RVA: 0xF041E4 Offset: 0xF001E4 VA: 0xF041E4
	public void set_ItemNullValueHandling(Nullable<NullValueHandling> value) { }

	[NullableContext(1)]
	[CompilerGenerated]
	// RVA: 0xF041EC Offset: 0xF001EC VA: 0xF041EC
	public JsonPropertyCollection get_Properties() { }

	[NullableContext(1)]
	// RVA: 0xF041F4 Offset: 0xF001F4 VA: 0xF041F4
	public JsonPropertyCollection get_CreatorParameters() { }

	// RVA: 0xF0425C Offset: 0xF0025C VA: 0xF0425C
	public ObjectConstructor<object> get_OverrideCreator() { }

	// RVA: 0xF04264 Offset: 0xF00264 VA: 0xF04264
	public void set_OverrideCreator(ObjectConstructor<object> value) { }

	// RVA: 0xF0426C Offset: 0xF0026C VA: 0xF0426C
	internal ObjectConstructor<object> get_ParameterizedCreator() { }

	// RVA: 0xF04274 Offset: 0xF00274 VA: 0xF04274
	internal void set_ParameterizedCreator(ObjectConstructor<object> value) { }

	[CompilerGenerated]
	// RVA: 0xF0427C Offset: 0xF0027C VA: 0xF0427C
	public ExtensionDataSetter get_ExtensionDataSetter() { }

	[CompilerGenerated]
	// RVA: 0xF04284 Offset: 0xF00284 VA: 0xF04284
	public void set_ExtensionDataSetter(ExtensionDataSetter value) { }

	[CompilerGenerated]
	// RVA: 0xF0428C Offset: 0xF0028C VA: 0xF0428C
	public ExtensionDataGetter get_ExtensionDataGetter() { }

	[CompilerGenerated]
	// RVA: 0xF04294 Offset: 0xF00294 VA: 0xF04294
	public void set_ExtensionDataGetter(ExtensionDataGetter value) { }

	// RVA: 0xF0429C Offset: 0xF0029C VA: 0xF0429C
	public void set_ExtensionDataValueType(Type value) { }

	[CompilerGenerated]
	// RVA: 0xF04370 Offset: 0xF00370 VA: 0xF04370
	public Func<string, string> get_ExtensionDataNameResolver() { }

	[CompilerGenerated]
	// RVA: 0xF04378 Offset: 0xF00378 VA: 0xF04378
	public void set_ExtensionDataNameResolver(Func<string, string> value) { }

	// RVA: 0xF04380 Offset: 0xF00380 VA: 0xF04380
	internal bool get_HasRequiredOrDefaultValueProperties() { }

	[NullableContext(1)]
	// RVA: 0xF048DC Offset: 0xF008DC VA: 0xF048DC
	public void .ctor(Type underlyingType) { }

	[NullableContext(1)]
	// RVA: 0xF04958 Offset: 0xF00958 VA: 0xF04958
	internal object GetUninitializedObject() { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
public class JsonPrimitiveContract : JsonContract // TypeDefIndex: 4322
{
	// Fields
	[CompilerGenerated]
	private PrimitiveTypeCode <TypeCode>k__BackingField; // 0x8C
	private static readonly Dictionary<Type, ReadType> ReadTypeMap; // 0x0

	// Properties
	internal PrimitiveTypeCode TypeCode { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF04A5C Offset: 0xF00A5C VA: 0xF04A5C
	internal PrimitiveTypeCode get_TypeCode() { }

	[CompilerGenerated]
	// RVA: 0xF04A64 Offset: 0xF00A64 VA: 0xF04A64
	internal void set_TypeCode(PrimitiveTypeCode value) { }

	// RVA: 0xF04A6C Offset: 0xF00A6C VA: 0xF04A6C
	public void .ctor(Type underlyingType) { }

	// RVA: 0xF04B60 Offset: 0xF00B60 VA: 0xF04B60
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(2)]
public class JsonProperty // TypeDefIndex: 4323
{
	// Fields
	internal Nullable<Required> _required; // 0x10
	internal bool _hasExplicitDefaultValue; // 0x18
	private object _defaultValue; // 0x20
	private bool _hasGeneratedDefaultValue; // 0x28
	private string _propertyName; // 0x30
	internal bool _skipPropertyNameEscape; // 0x38
	private Type _propertyType; // 0x40
	[CompilerGenerated]
	private JsonContract <PropertyContract>k__BackingField; // 0x48
	[CompilerGenerated]
	private Type <DeclaringType>k__BackingField; // 0x50
	[CompilerGenerated]
	private Nullable<int> <Order>k__BackingField; // 0x58
	[CompilerGenerated]
	private string <UnderlyingName>k__BackingField; // 0x60
	[CompilerGenerated]
	private IValueProvider <ValueProvider>k__BackingField; // 0x68
	[CompilerGenerated]
	private IAttributeProvider <AttributeProvider>k__BackingField; // 0x70
	[CompilerGenerated]
	private JsonConverter <Converter>k__BackingField; // 0x78
	[CompilerGenerated]
	private bool <Ignored>k__BackingField; // 0x80
	[CompilerGenerated]
	private bool <Readable>k__BackingField; // 0x81
	[CompilerGenerated]
	private bool <Writable>k__BackingField; // 0x82
	[CompilerGenerated]
	private bool <HasMemberAttribute>k__BackingField; // 0x83
	[CompilerGenerated]
	private Nullable<bool> <IsReference>k__BackingField; // 0x84
	[CompilerGenerated]
	private Nullable<NullValueHandling> <NullValueHandling>k__BackingField; // 0x88
	[CompilerGenerated]
	private Nullable<DefaultValueHandling> <DefaultValueHandling>k__BackingField; // 0x90
	[CompilerGenerated]
	private Nullable<ReferenceLoopHandling> <ReferenceLoopHandling>k__BackingField; // 0x98
	[CompilerGenerated]
	private Nullable<ObjectCreationHandling> <ObjectCreationHandling>k__BackingField; // 0xA0
	[CompilerGenerated]
	private Nullable<TypeNameHandling> <TypeNameHandling>k__BackingField; // 0xA8
	[CompilerGenerated]
	[Nullable(new[] { 2, 1 })]
	private Predicate<object> <ShouldSerialize>k__BackingField; // 0xB0
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private Predicate<object> <ShouldDeserialize>k__BackingField; // 0xB8
	[Nullable(new[] { 2, 1 })]
	[CompilerGenerated]
	private Predicate<object> <GetIsSpecified>k__BackingField; // 0xC0
	[Nullable(new[] { 2, 1, 2 })]
	[CompilerGenerated]
	private Action<object, object> <SetIsSpecified>k__BackingField; // 0xC8
	[CompilerGenerated]
	private JsonConverter <ItemConverter>k__BackingField; // 0xD0
	[CompilerGenerated]
	private Nullable<bool> <ItemIsReference>k__BackingField; // 0xD8
	[CompilerGenerated]
	private Nullable<TypeNameHandling> <ItemTypeNameHandling>k__BackingField; // 0xDC
	[CompilerGenerated]
	private Nullable<ReferenceLoopHandling> <ItemReferenceLoopHandling>k__BackingField; // 0xE4

	// Properties
	internal JsonContract PropertyContract { get; set; }
	public string PropertyName { get; set; }
	public Type DeclaringType { get; set; }
	public Nullable<int> Order { get; set; }
	public string UnderlyingName { get; set; }
	public IValueProvider ValueProvider { get; set; }
	public IAttributeProvider AttributeProvider { set; }
	public Type PropertyType { get; set; }
	public JsonConverter Converter { get; set; }
	public bool Ignored { get; set; }
	public bool Readable { get; set; }
	public bool Writable { get; set; }
	public bool HasMemberAttribute { get; set; }
	public object DefaultValue { get; set; }
	public Required Required { get; }
	public Nullable<bool> IsReference { get; set; }
	public Nullable<NullValueHandling> NullValueHandling { get; set; }
	public Nullable<DefaultValueHandling> DefaultValueHandling { get; set; }
	public Nullable<ReferenceLoopHandling> ReferenceLoopHandling { get; set; }
	public Nullable<ObjectCreationHandling> ObjectCreationHandling { get; set; }
	public Nullable<TypeNameHandling> TypeNameHandling { get; set; }
	[Nullable(new[] { 2, 1 })]
	public Predicate<object> ShouldSerialize { get; set; }
	[Nullable(new[] { 2, 1 })]
	public Predicate<object> ShouldDeserialize { get; }
	[Nullable(new[] { 2, 1 })]
	public Predicate<object> GetIsSpecified { get; set; }
	[Nullable(new[] { 2, 1, 2 })]
	public Action<object, object> SetIsSpecified { get; set; }
	public JsonConverter ItemConverter { get; set; }
	public Nullable<bool> ItemIsReference { get; set; }
	public Nullable<TypeNameHandling> ItemTypeNameHandling { get; set; }
	public Nullable<ReferenceLoopHandling> ItemReferenceLoopHandling { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF04F14 Offset: 0xF00F14 VA: 0xF04F14
	internal JsonContract get_PropertyContract() { }

	[CompilerGenerated]
	// RVA: 0xF04F1C Offset: 0xF00F1C VA: 0xF04F1C
	internal void set_PropertyContract(JsonContract value) { }

	// RVA: 0xF04F24 Offset: 0xF00F24 VA: 0xF04F24
	public string get_PropertyName() { }

	// RVA: 0xF04F2C Offset: 0xF00F2C VA: 0xF04F2C
	public void set_PropertyName(string value) { }

	[CompilerGenerated]
	// RVA: 0xF04FB0 Offset: 0xF00FB0 VA: 0xF04FB0
	public Type get_DeclaringType() { }

	[CompilerGenerated]
	// RVA: 0xF04FB8 Offset: 0xF00FB8 VA: 0xF04FB8
	public void set_DeclaringType(Type value) { }

	[CompilerGenerated]
	// RVA: 0xF04FC0 Offset: 0xF00FC0 VA: 0xF04FC0
	public Nullable<int> get_Order() { }

	[CompilerGenerated]
	// RVA: 0xF04FC8 Offset: 0xF00FC8 VA: 0xF04FC8
	public void set_Order(Nullable<int> value) { }

	[CompilerGenerated]
	// RVA: 0xF04FD0 Offset: 0xF00FD0 VA: 0xF04FD0
	public string get_UnderlyingName() { }

	[CompilerGenerated]
	// RVA: 0xF04FD8 Offset: 0xF00FD8 VA: 0xF04FD8
	public void set_UnderlyingName(string value) { }

	[CompilerGenerated]
	// RVA: 0xF04FE0 Offset: 0xF00FE0 VA: 0xF04FE0
	public IValueProvider get_ValueProvider() { }

	[CompilerGenerated]
	// RVA: 0xF04FE8 Offset: 0xF00FE8 VA: 0xF04FE8
	public void set_ValueProvider(IValueProvider value) { }

	[CompilerGenerated]
	// RVA: 0xF04FF0 Offset: 0xF00FF0 VA: 0xF04FF0
	public void set_AttributeProvider(IAttributeProvider value) { }

	// RVA: 0xF04FF8 Offset: 0xF00FF8 VA: 0xF04FF8
	public Type get_PropertyType() { }

	// RVA: 0xF05000 Offset: 0xF01000 VA: 0xF05000
	public void set_PropertyType(Type value) { }

	[CompilerGenerated]
	// RVA: 0xF0507C Offset: 0xF0107C VA: 0xF0507C
	public JsonConverter get_Converter() { }

	[CompilerGenerated]
	// RVA: 0xF05084 Offset: 0xF01084 VA: 0xF05084
	public void set_Converter(JsonConverter value) { }

	[CompilerGenerated]
	// RVA: 0xF0508C Offset: 0xF0108C VA: 0xF0508C
	public bool get_Ignored() { }

	[CompilerGenerated]
	// RVA: 0xF05094 Offset: 0xF01094 VA: 0xF05094
	public void set_Ignored(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF050A0 Offset: 0xF010A0 VA: 0xF050A0
	public bool get_Readable() { }

	[CompilerGenerated]
	// RVA: 0xF050A8 Offset: 0xF010A8 VA: 0xF050A8
	public void set_Readable(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF050B4 Offset: 0xF010B4 VA: 0xF050B4
	public bool get_Writable() { }

	[CompilerGenerated]
	// RVA: 0xF050BC Offset: 0xF010BC VA: 0xF050BC
	public void set_Writable(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF050C8 Offset: 0xF010C8 VA: 0xF050C8
	public bool get_HasMemberAttribute() { }

	[CompilerGenerated]
	// RVA: 0xF050D0 Offset: 0xF010D0 VA: 0xF050D0
	public void set_HasMemberAttribute(bool value) { }

	// RVA: 0xF050DC Offset: 0xF010DC VA: 0xF050DC
	public object get_DefaultValue() { }

	// RVA: 0xF050F4 Offset: 0xF010F4 VA: 0xF050F4
	public void set_DefaultValue(object value) { }

	// RVA: 0xF05104 Offset: 0xF01104 VA: 0xF05104
	internal object GetResolvedDefaultValue() { }

	// RVA: 0xF04880 Offset: 0xF00880 VA: 0xF04880
	public Required get_Required() { }

	[CompilerGenerated]
	// RVA: 0xF051C8 Offset: 0xF011C8 VA: 0xF051C8
	public Nullable<bool> get_IsReference() { }

	[CompilerGenerated]
	// RVA: 0xF051D0 Offset: 0xF011D0 VA: 0xF051D0
	public void set_IsReference(Nullable<bool> value) { }

	[CompilerGenerated]
	// RVA: 0xF051D8 Offset: 0xF011D8 VA: 0xF051D8
	public Nullable<NullValueHandling> get_NullValueHandling() { }

	[CompilerGenerated]
	// RVA: 0xF051E0 Offset: 0xF011E0 VA: 0xF051E0
	public void set_NullValueHandling(Nullable<NullValueHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF051E8 Offset: 0xF011E8 VA: 0xF051E8
	public Nullable<DefaultValueHandling> get_DefaultValueHandling() { }

	[CompilerGenerated]
	// RVA: 0xF051F0 Offset: 0xF011F0 VA: 0xF051F0
	public void set_DefaultValueHandling(Nullable<DefaultValueHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF051F8 Offset: 0xF011F8 VA: 0xF051F8
	public Nullable<ReferenceLoopHandling> get_ReferenceLoopHandling() { }

	[CompilerGenerated]
	// RVA: 0xF05200 Offset: 0xF01200 VA: 0xF05200
	public void set_ReferenceLoopHandling(Nullable<ReferenceLoopHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF05208 Offset: 0xF01208 VA: 0xF05208
	public Nullable<ObjectCreationHandling> get_ObjectCreationHandling() { }

	[CompilerGenerated]
	// RVA: 0xF05210 Offset: 0xF01210 VA: 0xF05210
	public void set_ObjectCreationHandling(Nullable<ObjectCreationHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF05218 Offset: 0xF01218 VA: 0xF05218
	public Nullable<TypeNameHandling> get_TypeNameHandling() { }

	[CompilerGenerated]
	// RVA: 0xF05220 Offset: 0xF01220 VA: 0xF05220
	public void set_TypeNameHandling(Nullable<TypeNameHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF05228 Offset: 0xF01228 VA: 0xF05228
	public Predicate<object> get_ShouldSerialize() { }

	[CompilerGenerated]
	// RVA: 0xF05230 Offset: 0xF01230 VA: 0xF05230
	public void set_ShouldSerialize(Predicate<object> value) { }

	[CompilerGenerated]
	// RVA: 0xF05238 Offset: 0xF01238 VA: 0xF05238
	public Predicate<object> get_ShouldDeserialize() { }

	[CompilerGenerated]
	// RVA: 0xF05240 Offset: 0xF01240 VA: 0xF05240
	public Predicate<object> get_GetIsSpecified() { }

	[CompilerGenerated]
	// RVA: 0xF05248 Offset: 0xF01248 VA: 0xF05248
	public void set_GetIsSpecified(Predicate<object> value) { }

	[CompilerGenerated]
	// RVA: 0xF05250 Offset: 0xF01250 VA: 0xF05250
	public Action<object, object> get_SetIsSpecified() { }

	[CompilerGenerated]
	// RVA: 0xF05258 Offset: 0xF01258 VA: 0xF05258
	public void set_SetIsSpecified(Action<object, object> value) { }

	[NullableContext(1)]
	// RVA: 0xF05260 Offset: 0xF01260 VA: 0xF05260 Slot: 3
	public override string ToString() { }

	[CompilerGenerated]
	// RVA: 0xF052B4 Offset: 0xF012B4 VA: 0xF052B4
	public JsonConverter get_ItemConverter() { }

	[CompilerGenerated]
	// RVA: 0xF052BC Offset: 0xF012BC VA: 0xF052BC
	public void set_ItemConverter(JsonConverter value) { }

	[CompilerGenerated]
	// RVA: 0xF052C4 Offset: 0xF012C4 VA: 0xF052C4
	public Nullable<bool> get_ItemIsReference() { }

	[CompilerGenerated]
	// RVA: 0xF052CC Offset: 0xF012CC VA: 0xF052CC
	public void set_ItemIsReference(Nullable<bool> value) { }

	[CompilerGenerated]
	// RVA: 0xF052D4 Offset: 0xF012D4 VA: 0xF052D4
	public Nullable<TypeNameHandling> get_ItemTypeNameHandling() { }

	[CompilerGenerated]
	// RVA: 0xF052DC Offset: 0xF012DC VA: 0xF052DC
	public void set_ItemTypeNameHandling(Nullable<TypeNameHandling> value) { }

	[CompilerGenerated]
	// RVA: 0xF052E4 Offset: 0xF012E4 VA: 0xF052E4
	public Nullable<ReferenceLoopHandling> get_ItemReferenceLoopHandling() { }

	[CompilerGenerated]
	// RVA: 0xF052EC Offset: 0xF012EC VA: 0xF052EC
	public void set_ItemReferenceLoopHandling(Nullable<ReferenceLoopHandling> value) { }

	[NullableContext(1)]
	// RVA: 0xF052F4 Offset: 0xF012F4 VA: 0xF052F4
	internal void WritePropertyName(JsonWriter writer) { }

	// RVA: 0xF05344 Offset: 0xF01344 VA: 0xF05344
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(new[] { 0, 1, 1 })]
[NullableContext(1)]
public class JsonPropertyCollection : KeyedCollection<string, JsonProperty> // TypeDefIndex: 4324
{
	// Fields
	private readonly Type _type; // 0x30
	private readonly List<JsonProperty> _list; // 0x38

	// Methods

	// RVA: 0xF03924 Offset: 0xEFF924 VA: 0xF03924
	public void .ctor(Type type) { }

	// RVA: 0xF0534C Offset: 0xF0134C VA: 0xF0534C Slot: 39
	protected override string GetKeyForItem(JsonProperty item) { }

	// RVA: 0xF05364 Offset: 0xF01364 VA: 0xF05364
	public void AddProperty(JsonProperty property) { }

	// RVA: 0xF05620 Offset: 0xF01620 VA: 0xF05620
	public JsonProperty GetClosestMatchProperty(string propertyName) { }

	// RVA: 0xF05758 Offset: 0xF01758 VA: 0xF05758
	private bool TryGetProperty(string key, out JsonProperty item) { }

	// RVA: 0xF05660 Offset: 0xF01660 VA: 0xF05660
	public JsonProperty GetProperty(string propertyName, StringComparison comparisonType) { }
}


// Namespace: 
[NullableContext(0)]
private class JsonSerializerInternalBase.ReferenceEqualsEqualityComparer : IEqualityComparer<object> // TypeDefIndex: 4325
{
	// Methods

	[NullableContext(2)]
	// RVA: 0xF05EFC Offset: 0xF01EFC VA: 0xF05EFC Slot: 4
	private bool System.Collections.Generic.IEqualityComparer<System.Object>.Equals(object x, object y) { }

	[NullableContext(1)]
	// RVA: 0xF05F08 Offset: 0xF01F08 VA: 0xF05F08 Slot: 5
	private int System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(object obj) { }

	// RVA: 0xF058BC Offset: 0xF018BC VA: 0xF058BC
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal abstract class JsonSerializerInternalBase // TypeDefIndex: 4326
{
	// Fields
	[Nullable(2)]
	private ErrorContext _currentErrorContext; // 0x10
	[Nullable(new[] { 2, 1, 1 })]
	private BidirectionalDictionary<string, object> _mappings; // 0x18
	internal readonly JsonSerializer Serializer; // 0x20
	[Nullable(2)]
	internal readonly ITraceWriter TraceWriter; // 0x28
	[Nullable(2)]
	protected JsonSerializerProxy InternalSerializer; // 0x30

	// Properties
	internal BidirectionalDictionary<string, object> DefaultReferenceMappings { get; }

	// Methods

	// RVA: 0xF05834 Offset: 0xF01834 VA: 0xF05834
	protected void .ctor(JsonSerializer serializer) { }

	// RVA: 0xEFEC0C Offset: 0xEFAC0C VA: 0xEFEC0C
	internal BidirectionalDictionary<string, object> get_DefaultReferenceMappings() { }

	// RVA: 0xF058C4 Offset: 0xF018C4 VA: 0xF058C4
	protected NullValueHandling ResolvedNullValueHandling(JsonObjectContract containerContract, JsonProperty property) { }

	// RVA: 0xF059E8 Offset: 0xF019E8 VA: 0xF059E8
	private ErrorContext GetErrorContext(object currentObject, object member, string path, Exception error) { }

	// RVA: 0xF05AC8 Offset: 0xF01AC8 VA: 0xF05AC8
	protected void ClearErrorContext() { }

	[NullableContext(2)]
	// RVA: 0xF05B28 Offset: 0xF01B28 VA: 0xF05B28
	protected bool IsErrorHandled(object currentObject, JsonContract contract, object keyValue, IJsonLineInfo lineInfo, string path, Exception ex) { }
}


// Namespace: 
[NullableContext(0)]
internal enum JsonSerializerInternalReader.PropertyPresence // TypeDefIndex: 4327
{
	// Fields
	public int value__; // 0x0
	public const JsonSerializerInternalReader.PropertyPresence None = 0;
	public const JsonSerializerInternalReader.PropertyPresence Null = 1;
	public const JsonSerializerInternalReader.PropertyPresence Value = 2;
}


// Namespace: 
[NullableContext(2)]
[Nullable(0)]
internal class JsonSerializerInternalReader.CreatorPropertyContext // TypeDefIndex: 4328
{
	// Fields
	[Nullable(1)]
	public readonly string Name; // 0x10
	public JsonProperty Property; // 0x18
	public JsonProperty ConstructorProperty; // 0x20
	public Nullable<JsonSerializerInternalReader.PropertyPresence> Presence; // 0x28
	public object Value; // 0x30
	public bool Used; // 0x38

	// Methods

	[NullableContext(1)]
	// RVA: 0xF11AAC Offset: 0xF0DAAC VA: 0xF11AAC
	public void .ctor(string name) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class JsonSerializerInternalReader.<>c // TypeDefIndex: 4329
{
	// Fields
	[Nullable(0)]
	public static readonly JsonSerializerInternalReader.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<JsonProperty, string> <>9__38_0; // 0x8
	[Nullable(new[] { 0, 0, 1 })]
	public static Func<JsonProperty, string> <>9__38_2; // 0x10
	[Nullable(0)]
	public static Func<JsonProperty, JsonProperty> <>9__42_0; // 0x18
	[Nullable(0)]
	public static Func<JsonProperty, JsonSerializerInternalReader.PropertyPresence> <>9__42_1; // 0x20

	// Methods

	// RVA: 0xF1259C Offset: 0xF0E59C VA: 0xF1259C
	private static void .cctor() { }

	// RVA: 0xF125F8 Offset: 0xF0E5F8 VA: 0xF125F8
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xF12600 Offset: 0xF0E600 VA: 0xF12600
	internal string <CreateObjectUsingCreatorWithParameters>b__38_0(JsonProperty p) { }

	[NullableContext(0)]
	// RVA: 0xF12618 Offset: 0xF0E618 VA: 0xF12618
	internal string <CreateObjectUsingCreatorWithParameters>b__38_2(JsonProperty p) { }

	[NullableContext(0)]
	// RVA: 0xF12630 Offset: 0xF0E630 VA: 0xF12630
	internal JsonProperty <PopulateObject>b__42_0(JsonProperty m) { }

	[NullableContext(0)]
	// RVA: 0xF12638 Offset: 0xF0E638 VA: 0xF12638
	internal JsonSerializerInternalReader.PropertyPresence <PopulateObject>b__42_1(JsonProperty m) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class JsonSerializerInternalReader.<>c__DisplayClass38_0 // TypeDefIndex: 4330
{
	// Fields
	[Nullable(0)]
	public JsonProperty property; // 0x10

	// Methods

	// RVA: 0xF11AA4 Offset: 0xF0DAA4 VA: 0xF11AA4
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xF12640 Offset: 0xF0E640 VA: 0xF12640
	internal bool <CreateObjectUsingCreatorWithParameters>b__1(JsonSerializerInternalReader.CreatorPropertyContext p) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class JsonSerializerInternalReader : JsonSerializerInternalBase // TypeDefIndex: 4331
{
	// Methods

	// RVA: 0xF05F14 Offset: 0xF01F14 VA: 0xF05F14
	public void .ctor(JsonSerializer serializer) { }

	// RVA: 0xF05F18 Offset: 0xF01F18 VA: 0xF05F18
	public void Populate(JsonReader reader, object target) { }

	[NullableContext(2)]
	// RVA: 0xF07ED8 Offset: 0xF03ED8 VA: 0xF07ED8
	private JsonContract GetContractSafe(Type type) { }

	// RVA: 0xF07F64 Offset: 0xF03F64 VA: 0xF07F64
	private JsonContract GetContract(Type type) { }

	[NullableContext(2)]
	// RVA: 0xF08014 Offset: 0xF04014 VA: 0xF08014
	public object Deserialize(JsonReader reader, Type objectType, bool checkAdditionalContent) { }

	// RVA: 0xF08CD0 Offset: 0xF04CD0 VA: 0xF08CD0
	private JsonSerializerProxy GetInternalSerializer() { }

	[NullableContext(2)]
	// RVA: 0xF08D38 Offset: 0xF04D38 VA: 0xF08D38
	private JToken CreateJToken(JsonReader reader, JsonContract contract) { }

	// RVA: 0xF09154 Offset: 0xF05154 VA: 0xF09154
	private JToken CreateJObject(JsonReader reader) { }

	[NullableContext(2)]
	// RVA: 0xF087C4 Offset: 0xF047C4 VA: 0xF087C4
	private object CreateValueInternal(JsonReader reader, Type objectType, JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue) { }

	[NullableContext(2)]
	// RVA: 0xF0ACA8 Offset: 0xF06CA8 VA: 0xF0ACA8
	private static bool CoerceEmptyStringToNull(Type objectType, JsonContract contract, string s) { }

	// RVA: 0xF0ADDC Offset: 0xF06DDC VA: 0xF0ADDC
	internal string GetExpectedDescription(JsonContract contract) { }

	[NullableContext(2)]
	// RVA: 0xF08344 Offset: 0xF04344 VA: 0xF08344
	private JsonConverter GetConverter(JsonContract contract, JsonConverter memberConverter, JsonContainerContract containerContract, JsonProperty containerProperty) { }

	[NullableContext(2)]
	// RVA: 0xF095B8 Offset: 0xF055B8 VA: 0xF095B8
	private object CreateObject(JsonReader reader, Type objectType, JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue) { }

	[NullableContext(2)]
	// RVA: 0xF0AE94 Offset: 0xF06E94 VA: 0xF0AE94
	private bool ReadMetadataPropertiesToken(JTokenReader reader, ref Type objectType, ref JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue, out object newValue, out string id) { }

	[NullableContext(2)]
	// RVA: 0xF0B5BC Offset: 0xF075BC VA: 0xF0B5BC
	private bool ReadMetadataProperties(JsonReader reader, ref Type objectType, ref JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue, out object newValue, out string id) { }

	[NullableContext(2)]
	// RVA: 0xF0CE8C Offset: 0xF08E8C VA: 0xF0CE8C
	private void ResolveTypeName(JsonReader reader, ref Type objectType, ref JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, string qualifiedTypeName) { }

	// RVA: 0xF0D560 Offset: 0xF09560 VA: 0xF0D560
	private JsonArrayContract EnsureArrayContract(JsonReader reader, Type objectType, JsonContract contract) { }

	[NullableContext(2)]
	// RVA: 0xF0A0AC Offset: 0xF060AC VA: 0xF0A0AC
	private object CreateList(JsonReader reader, Type objectType, JsonContract contract, JsonProperty member, object existingValue, string id) { }

	[NullableContext(2)]
	// RVA: 0xF0BC34 Offset: 0xF07C34 VA: 0xF0BC34
	private bool HasNoDefinedType(JsonContract contract) { }

	[NullableContext(2)]
	// RVA: 0xF0A6E4 Offset: 0xF066E4 VA: 0xF0A6E4
	private object EnsureType(JsonReader reader, object value, CultureInfo culture, JsonContract contract, Type targetType) { }

	// RVA: 0xF0E0B4 Offset: 0xF0A0B4 VA: 0xF0E0B4
	private bool SetPropertyValue(JsonProperty property, JsonConverter propertyConverter, JsonContainerContract containerContract, JsonProperty containerProperty, JsonReader reader, object target) { }

	[NullableContext(2)]
	// RVA: 0xF0E58C Offset: 0xF0A58C VA: 0xF0E58C
	private bool CalculatePropertyDetails(JsonProperty property, ref JsonConverter propertyConverter, JsonContainerContract containerContract, JsonProperty containerProperty, JsonReader reader, object target, out bool useExistingValue, out object currentValue, out JsonContract propertyContract, out bool gottenCurrentValue, out bool ignoredValue) { }

	// RVA: 0xF0EC50 Offset: 0xF0AC50 VA: 0xF0EC50
	private void AddReference(JsonReader reader, string id, object value) { }

	// RVA: 0xF0EC44 Offset: 0xF0AC44 VA: 0xF0EC44
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag) { }

	[NullableContext(2)]
	// RVA: 0xF0EB2C Offset: 0xF0AB2C VA: 0xF0EB2C
	private bool ShouldSetPropertyValue(JsonProperty property, JsonObjectContract contract, object value) { }

	// RVA: 0xF0D6E0 Offset: 0xF096E0 VA: 0xF0D6E0
	private IList CreateNewList(JsonReader reader, JsonArrayContract contract, out bool createdFromNonDefaultCreator) { }

	// RVA: 0xF0BF68 Offset: 0xF07F68 VA: 0xF0BF68
	private IDictionary CreateNewDictionary(JsonReader reader, JsonDictionaryContract contract, out bool createdFromNonDefaultCreator) { }

	// RVA: 0xF0F014 Offset: 0xF0B014 VA: 0xF0F014
	private void OnDeserializing(JsonReader reader, JsonContract contract, object value) { }

	// RVA: 0xF0F240 Offset: 0xF0B240 VA: 0xF0F240
	private void OnDeserialized(JsonReader reader, JsonContract contract, object value) { }

	// RVA: 0xF069E4 Offset: 0xF029E4 VA: 0xF069E4
	private object PopulateDictionary(IDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, JsonProperty containerProperty, string id) { }

	// RVA: 0xF0D988 Offset: 0xF09988 VA: 0xF0D988
	private object PopulateMultidimensionalArray(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty containerProperty, string id) { }

	// RVA: 0xF0F46C Offset: 0xF0B46C VA: 0xF0F46C
	private void ThrowUnexpectedEndException(JsonReader reader, JsonContract contract, object currentObject, string message) { }

	// RVA: 0xF06438 Offset: 0xF02438 VA: 0xF06438
	private object PopulateList(IList list, JsonReader reader, JsonArrayContract contract, JsonProperty containerProperty, string id) { }

	// RVA: 0xF0C804 Offset: 0xF08804 VA: 0xF0C804
	private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, JsonProperty member, string id) { }

	// RVA: 0xF03E4C Offset: 0xEFFE4C VA: 0xF03E4C
	internal object CreateISerializableItem(JToken token, Type type, JsonISerializableContract contract, JsonProperty member) { }

	// RVA: 0xF0C1C0 Offset: 0xF081C0 VA: 0xF0C1C0
	private object CreateDynamic(JsonReader reader, JsonDynamicContract contract, JsonProperty member, string id) { }

	// RVA: 0xF0F5A0 Offset: 0xF0B5A0 VA: 0xF0F5A0
	private object CreateObjectUsingCreatorWithParameters(JsonReader reader, JsonObjectContract contract, JsonProperty containerProperty, ObjectConstructor<object> creator, string id) { }

	// RVA: 0xF083B0 Offset: 0xF043B0 VA: 0xF083B0
	private object DeserializeConvertable(JsonConverter converter, JsonReader reader, Type objectType, object existingValue) { }

	// RVA: 0xF1143C Offset: 0xF0D43C VA: 0xF1143C
	private List<JsonSerializerInternalReader.CreatorPropertyContext> ResolvePropertyAndCreatorValues(JsonObjectContract contract, JsonProperty containerProperty, JsonReader reader, Type objectType) { }

	// RVA: 0xF0BD30 Offset: 0xF07D30 VA: 0xF0BD30
	public object CreateNewObject(JsonReader reader, JsonObjectContract objectContract, JsonProperty containerMember, JsonProperty containerProperty, string id, out bool createdFromNonDefaultCreator) { }

	// RVA: 0xF073B4 Offset: 0xF033B4 VA: 0xF073B4
	private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, JsonProperty member, string id) { }

	// RVA: 0xF1222C Offset: 0xF0E22C VA: 0xF1222C
	private bool ShouldDeserialize(JsonReader reader, JsonProperty property, object target) { }

	// RVA: 0xF0949C Offset: 0xF0549C VA: 0xF0949C
	private bool CheckPropertyName(JsonReader reader, string memberName) { }

	// RVA: 0xF120B8 Offset: 0xF0E0B8 VA: 0xF120B8
	private void SetExtensionData(JsonObjectContract contract, JsonProperty member, JsonReader reader, string memberName, object o) { }

	// RVA: 0xF11FFC Offset: 0xF0DFFC VA: 0xF11FFC
	private object ReadExtensionDataValue(JsonObjectContract contract, JsonProperty member, JsonReader reader) { }

	// RVA: 0xF11AD4 Offset: 0xF0DAD4 VA: 0xF11AD4
	private void EndProcessProperty(object newObject, JsonReader reader, JsonObjectContract contract, int initialDepth, JsonProperty property, JsonSerializerInternalReader.PropertyPresence presence, bool setDefaultValue) { }

	// RVA: 0xF12490 Offset: 0xF0E490 VA: 0xF12490
	private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, JsonSerializerInternalReader.PropertyPresence> requiredProperties) { }

	// RVA: 0xF08C68 Offset: 0xF04C68 VA: 0xF08C68
	private void HandleError(JsonReader reader, bool readPastError, int initialDepth) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class JsonSerializerInternalWriter : JsonSerializerInternalBase // TypeDefIndex: 4332
{
	// Fields
	[Nullable(2)]
	private Type _rootType; // 0x38
	private int _rootLevel; // 0x40
	private readonly List<object> _serializeStack; // 0x48

	// Methods

	// RVA: 0xF12664 Offset: 0xF0E664 VA: 0xF12664
	public void .ctor(JsonSerializer serializer) { }

	[NullableContext(2)]
	// RVA: 0xF126E4 Offset: 0xF0E6E4 VA: 0xF126E4
	public void Serialize(JsonWriter jsonWriter, object value, Type objectType) { }

	// RVA: 0xF134A4 Offset: 0xF0F4A4 VA: 0xF134A4
	private JsonSerializerProxy GetInternalSerializer() { }

	[NullableContext(2)]
	// RVA: 0xF12944 Offset: 0xF0E944 VA: 0xF12944
	private JsonContract GetContractSafe(object value) { }

	// RVA: 0xF1350C Offset: 0xF0F50C VA: 0xF1350C
	private JsonContract GetContract(object value) { }

	// RVA: 0xF135D0 Offset: 0xF0F5D0 VA: 0xF135D0
	private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerProperty) { }

	[NullableContext(2)]
	// RVA: 0xF12DD0 Offset: 0xF0EDD0 VA: 0xF12DD0
	private void SerializeValue(JsonWriter writer, object value, JsonContract valueContract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerProperty) { }

	[NullableContext(2)]
	// RVA: 0xF165FC Offset: 0xF125FC VA: 0xF165FC
	private Nullable<bool> ResolveIsReference(JsonContract contract, JsonProperty property, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	[NullableContext(2)]
	// RVA: 0xF12954 Offset: 0xF0E954 VA: 0xF12954
	private bool ShouldWriteReference(object value, JsonProperty property, JsonContract valueContract, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	[NullableContext(2)]
	// RVA: 0xF16730 Offset: 0xF12730 VA: 0xF16730
	private bool ShouldWriteProperty(object memberValue, JsonObjectContract containerContract, JsonProperty property) { }

	[NullableContext(2)]
	// RVA: 0xF16818 Offset: 0xF12818 VA: 0xF16818
	private bool CheckForCircularReference(JsonWriter writer, object value, JsonProperty property, JsonContract contract, JsonContainerContract containerContract, JsonProperty containerProperty) { }

	// RVA: 0xF12B54 Offset: 0xF0EB54 VA: 0xF12B54
	private void WriteReference(JsonWriter writer, object value) { }

	// RVA: 0xF16DEC Offset: 0xF12DEC VA: 0xF16DEC
	private string GetReference(JsonWriter writer, object value) { }

	// RVA: 0xF16FD8 Offset: 0xF12FD8 VA: 0xF16FD8
	internal static bool TryConvertToString(object value, Type type, out string s) { }

	// RVA: 0xF15194 Offset: 0xF11194 VA: 0xF15194
	private void SerializeString(JsonWriter writer, object value, JsonStringContract contract) { }

	// RVA: 0xF170E0 Offset: 0xF130E0 VA: 0xF170E0
	private void OnSerializing(JsonWriter writer, JsonContract contract, object value) { }

	// RVA: 0xF172E4 Offset: 0xF132E4 VA: 0xF172E4
	private void OnSerialized(JsonWriter writer, JsonContract contract, object value) { }

	// RVA: 0xF141A4 Offset: 0xF101A4 VA: 0xF141A4
	private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF17660 Offset: 0xF13660 VA: 0xF17660
	private bool CalculatePropertyValues(JsonWriter writer, object value, JsonContainerContract contract, JsonProperty member, JsonProperty property, out JsonContract memberContract, out object memberValue) { }

	// RVA: 0xF174E8 Offset: 0xF134E8 VA: 0xF174E8
	private void WriteObjectStart(JsonWriter writer, object value, JsonContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF184B4 Offset: 0xF144B4 VA: 0xF184B4
	private bool HasCreatorParameter(JsonContainerContract contract, JsonProperty property) { }

	// RVA: 0xF18568 Offset: 0xF14568 VA: 0xF18568
	private void WriteReferenceIdProperty(JsonWriter writer, Type type, object value) { }

	// RVA: 0xF13A50 Offset: 0xF0FA50 VA: 0xF13A50
	private void WriteTypeProperty(JsonWriter writer, Type type) { }

	// RVA: 0xF1680C Offset: 0xF1280C VA: 0xF1680C
	private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag) { }

	// RVA: 0xF16724 Offset: 0xF12724 VA: 0xF16724
	private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag) { }

	// RVA: 0xF187B4 Offset: 0xF147B4 VA: 0xF187B4
	private bool HasFlag(TypeNameHandling value, TypeNameHandling flag) { }

	// RVA: 0xF13CD0 Offset: 0xF0FCD0 VA: 0xF13CD0
	private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF14940 Offset: 0xF10940 VA: 0xF14940
	private void SerializeList(JsonWriter writer, IEnumerable values, JsonArrayContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF14FE4 Offset: 0xF10FE4 VA: 0xF14FE4
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF18AE0 Offset: 0xF14AE0 VA: 0xF18AE0
	private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty member, int initialDepth, int[] indices) { }

	// RVA: 0xF187C0 Offset: 0xF147C0 VA: 0xF187C0
	private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerProperty) { }

	// RVA: 0xF161D4 Offset: 0xF121D4 VA: 0xF161D4
	private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF15A80 Offset: 0xF11A80 VA: 0xF15A80
	private void SerializeDynamic(JsonWriter writer, IDynamicMetaObjectProvider value, JsonDynamicContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	[NullableContext(2)]
	// RVA: 0xF18E4C Offset: 0xF14E4C VA: 0xF18E4C
	private bool ShouldWriteDynamicProperty(object memberValue) { }

	[NullableContext(2)]
	// RVA: 0xF13738 Offset: 0xF0F738 VA: 0xF13738
	private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerProperty) { }

	// RVA: 0xF15214 Offset: 0xF11214 VA: 0xF15214
	private void SerializeDictionary(JsonWriter writer, IDictionary values, JsonDictionaryContract contract, JsonProperty member, JsonContainerContract collectionContract, JsonProperty containerProperty) { }

	// RVA: 0xF17B00 Offset: 0xF13B00 VA: 0xF17B00
	private string GetPropertyName(JsonWriter writer, object name, JsonContract contract, out bool escape) { }

	// RVA: 0xF13430 Offset: 0xF0F430 VA: 0xF13430
	private void HandleError(JsonWriter writer, int initialDepth) { }

	// RVA: 0xF17FF4 Offset: 0xF13FF4 VA: 0xF17FF4
	private bool ShouldSerialize(JsonWriter writer, JsonProperty property, object target) { }

	// RVA: 0xF18254 Offset: 0xF14254 VA: 0xF18254
	private bool IsSpecified(JsonWriter writer, JsonProperty property, object target) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class JsonSerializerProxy : JsonSerializer // TypeDefIndex: 4333
{
	// Fields
	[Nullable(2)]
	private readonly JsonSerializerInternalReader _serializerReader; // 0xE0
	[Nullable(2)]
	private readonly JsonSerializerInternalWriter _serializerWriter; // 0xE8
	internal readonly JsonSerializer _serializer; // 0xF0

	// Properties
	[Nullable(2)]
	public override IReferenceResolver ReferenceResolver { set; }
	[Nullable(2)]
	public override ITraceWriter TraceWriter { get; set; }
	[Nullable(2)]
	public override IEqualityComparer EqualityComparer { set; }
	public override JsonConverterCollection Converters { get; }
	public override DefaultValueHandling DefaultValueHandling { set; }
	public override IContractResolver ContractResolver { get; set; }
	public override MissingMemberHandling MissingMemberHandling { set; }
	public override NullValueHandling NullValueHandling { get; set; }
	public override ObjectCreationHandling ObjectCreationHandling { set; }
	public override ReferenceLoopHandling ReferenceLoopHandling { set; }
	public override PreserveReferencesHandling PreserveReferencesHandling { set; }
	public override TypeNameHandling TypeNameHandling { set; }
	public override MetadataPropertyHandling MetadataPropertyHandling { get; set; }
	public override TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling { set; }
	public override ConstructorHandling ConstructorHandling { set; }
	public override ISerializationBinder SerializationBinder { set; }
	public override StreamingContext Context { get; set; }
	public override Nullable<int> MaxDepth { get; }
	public override bool CheckAdditionalContent { get; }

	// Methods

	// RVA: 0xF18F08 Offset: 0xF14F08 VA: 0xF18F08 Slot: 4
	public override void add_Error(EventHandler<ErrorEventArgs> value) { }

	// RVA: 0xF18F28 Offset: 0xF14F28 VA: 0xF18F28 Slot: 5
	public override void remove_Error(EventHandler<ErrorEventArgs> value) { }

	[NullableContext(2)]
	// RVA: 0xF18F48 Offset: 0xF14F48 VA: 0xF18F48 Slot: 6
	public override void set_ReferenceResolver(IReferenceResolver value) { }

	[NullableContext(2)]
	// RVA: 0xF18F68 Offset: 0xF14F68 VA: 0xF18F68 Slot: 8
	public override ITraceWriter get_TraceWriter() { }

	[NullableContext(2)]
	// RVA: 0xF18F88 Offset: 0xF14F88 VA: 0xF18F88 Slot: 9
	public override void set_TraceWriter(ITraceWriter value) { }

	[NullableContext(2)]
	// RVA: 0xF18FA8 Offset: 0xF14FA8 VA: 0xF18FA8 Slot: 10
	public override void set_EqualityComparer(IEqualityComparer value) { }

	// RVA: 0xF18FC8 Offset: 0xF14FC8 VA: 0xF18FC8 Slot: 23
	public override JsonConverterCollection get_Converters() { }

	// RVA: 0xF18FEC Offset: 0xF14FEC VA: 0xF18FEC Slot: 18
	public override void set_DefaultValueHandling(DefaultValueHandling value) { }

	// RVA: 0xF19010 Offset: 0xF15010 VA: 0xF19010 Slot: 24
	public override IContractResolver get_ContractResolver() { }

	// RVA: 0xF19034 Offset: 0xF15034 VA: 0xF19034 Slot: 25
	public override void set_ContractResolver(IContractResolver value) { }

	// RVA: 0xF19058 Offset: 0xF15058 VA: 0xF19058 Slot: 15
	public override void set_MissingMemberHandling(MissingMemberHandling value) { }

	// RVA: 0xF1907C Offset: 0xF1507C VA: 0xF1907C Slot: 16
	public override NullValueHandling get_NullValueHandling() { }

	// RVA: 0xF190A0 Offset: 0xF150A0 VA: 0xF190A0 Slot: 17
	public override void set_NullValueHandling(NullValueHandling value) { }

	// RVA: 0xF190C4 Offset: 0xF150C4 VA: 0xF190C4 Slot: 19
	public override void set_ObjectCreationHandling(ObjectCreationHandling value) { }

	// RVA: 0xF190E8 Offset: 0xF150E8 VA: 0xF190E8 Slot: 14
	public override void set_ReferenceLoopHandling(ReferenceLoopHandling value) { }

	// RVA: 0xF1910C Offset: 0xF1510C VA: 0xF1910C Slot: 13
	public override void set_PreserveReferencesHandling(PreserveReferencesHandling value) { }

	// RVA: 0xF19130 Offset: 0xF15130 VA: 0xF19130 Slot: 11
	public override void set_TypeNameHandling(TypeNameHandling value) { }

	// RVA: 0xF19150 Offset: 0xF15150 VA: 0xF19150 Slot: 21
	public override MetadataPropertyHandling get_MetadataPropertyHandling() { }

	// RVA: 0xF19174 Offset: 0xF15174 VA: 0xF19174 Slot: 22
	public override void set_MetadataPropertyHandling(MetadataPropertyHandling value) { }

	// RVA: 0xF19198 Offset: 0xF15198 VA: 0xF19198 Slot: 12
	public override void set_TypeNameAssemblyFormatHandling(TypeNameAssemblyFormatHandling value) { }

	// RVA: 0xF191B8 Offset: 0xF151B8 VA: 0xF191B8 Slot: 20
	public override void set_ConstructorHandling(ConstructorHandling value) { }

	// RVA: 0xF191DC Offset: 0xF151DC VA: 0xF191DC Slot: 7
	public override void set_SerializationBinder(ISerializationBinder value) { }

	// RVA: 0xF191FC Offset: 0xF151FC VA: 0xF191FC Slot: 26
	public override StreamingContext get_Context() { }

	// RVA: 0xF19220 Offset: 0xF15220 VA: 0xF19220 Slot: 27
	public override void set_Context(StreamingContext value) { }

	// RVA: 0xF19244 Offset: 0xF15244 VA: 0xF19244 Slot: 28
	public override Nullable<int> get_MaxDepth() { }

	// RVA: 0xF19268 Offset: 0xF15268 VA: 0xF19268 Slot: 29
	public override bool get_CheckAdditionalContent() { }

	// RVA: 0xF1928C Offset: 0xF1528C VA: 0xF1928C
	internal JsonSerializerInternalBase GetInternalSerializer() { }

	// RVA: 0xF192A8 Offset: 0xF152A8 VA: 0xF192A8
	public void .ctor(JsonSerializerInternalReader serializerReader) { }

	// RVA: 0xF19324 Offset: 0xF15324 VA: 0xF19324
	public void .ctor(JsonSerializerInternalWriter serializerWriter) { }

	[NullableContext(2)]
	// RVA: 0xF193A0 Offset: 0xF153A0 VA: 0xF193A0 Slot: 31
	internal override object DeserializeInternal(JsonReader reader, Type objectType) { }

	// RVA: 0xF193D8 Offset: 0xF153D8 VA: 0xF193D8 Slot: 30
	internal override void PopulateInternal(JsonReader reader, object target) { }

	[NullableContext(2)]
	// RVA: 0xF1940C Offset: 0xF1540C VA: 0xF1940C Slot: 32
	internal override void SerializeInternal(JsonWriter jsonWriter, object value, Type rootType) { }
}


// Namespace: Newtonsoft.Json.Serialization
public class JsonStringContract : JsonPrimitiveContract // TypeDefIndex: 4334
{
	// Methods

	[NullableContext(1)]
	// RVA: 0xF19440 Offset: 0xF15440 VA: 0xF19440
	public void .ctor(Type underlyingType) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class JsonTypeReflector.<>c // TypeDefIndex: 4335
{
	// Fields
	[Nullable(0)]
	public static readonly JsonTypeReflector.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<object, Type> <>9__22_1; // 0x8

	// Methods

	// RVA: 0xF1A750 Offset: 0xF16750 VA: 0xF1A750
	private static void .cctor() { }

	// RVA: 0xF1A7AC Offset: 0xF167AC VA: 0xF1A7AC
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xF1A7B4 Offset: 0xF167B4 VA: 0xF1A7B4
	internal Type <GetCreator>b__22_1(object param) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class JsonTypeReflector.<>c__DisplayClass22_0 // TypeDefIndex: 4336
{
	// Fields
	[Nullable(0)]
	public Type type; // 0x10
	[Nullable(new[] { 0, 1 })]
	public Func<object> defaultConstructor; // 0x18

	// Methods

	// RVA: 0xF1A094 Offset: 0xF16094 VA: 0xF1A094
	public void .ctor() { }

	// RVA: 0xF1A810 Offset: 0xF16810 VA: 0xF1A810
	internal object <GetCreator>b__0(object[] parameters) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal static class JsonTypeReflector // TypeDefIndex: 4337
{
	// Fields
	private static Nullable<bool> _fullyTrusted; // 0x0
	[Nullable(new[] { 1, 1, 1, 2, 1, 1 })]
	private static readonly ThreadSafeStore<Type, Func<object[], object>> CreatorCache; // 0x8
	[Nullable(new[] { 1, 1, 2 })]
	private static readonly ThreadSafeStore<Type, Type> AssociatedMetadataTypesCache; // 0x10
	[Nullable(2)]
	private static ReflectionObject _metadataTypeAttributeReflectionObject; // 0x18

	// Properties
	public static bool FullyTrusted { get; }
	public static ReflectionDelegateFactory ReflectionDelegateFactory { get; }

	// Methods

	// RVA: -1 Offset: -1
	public static T GetCachedAttribute<T>(object attributeProvider) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8E5D0 Offset: 0xB8A5D0 VA: 0xB8E5D0
	|-JsonTypeReflector.GetCachedAttribute<object>
	*/

	// RVA: 0xF194B4 Offset: 0xF154B4 VA: 0xF194B4
	public static bool CanTypeDescriptorConvertString(Type type, out TypeConverter typeConverter) { }

	// RVA: 0xF196A0 Offset: 0xF156A0 VA: 0xF196A0
	public static DataContractAttribute GetDataContractAttribute(Type type) { }

	// RVA: 0xF1976C Offset: 0xF1576C VA: 0xF1976C
	public static DataMemberAttribute GetDataMemberAttribute(MemberInfo memberInfo) { }

	// RVA: 0xF199F0 Offset: 0xF159F0 VA: 0xF199F0
	public static MemberSerialization GetObjectMemberSerialization(Type objectType, bool ignoreSerializableAttribute) { }

	// RVA: 0xF19B44 Offset: 0xF15B44 VA: 0xF19B44
	public static JsonConverter GetJsonConverter(object attributeProvider) { }

	// RVA: 0xF19C7C Offset: 0xF15C7C VA: 0xF19C7C
	public static JsonConverter CreateJsonConverterInstance(Type converterType, object[] args) { }

	// RVA: 0xF19D7C Offset: 0xF15D7C VA: 0xF19D7C
	public static NamingStrategy CreateNamingStrategyInstance(Type namingStrategyType, object[] args) { }

	// RVA: 0xF19E7C Offset: 0xF15E7C VA: 0xF19E7C
	public static NamingStrategy GetContainerNamingStrategy(JsonContainerAttribute containerAttribute) { }

	// RVA: 0xF19F34 Offset: 0xF15F34 VA: 0xF19F34
	private static Func<object[], object> GetCreator(Type type) { }

	// RVA: 0xF1A124 Offset: 0xF16124 VA: 0xF1A124
	private static Type GetAssociatedMetadataType(Type type) { }

	// RVA: 0xF1A1B8 Offset: 0xF161B8 VA: 0xF1A1B8
	private static Type GetAssociateMetadataTypeFromAttribute(Type type) { }

	// RVA: -1 Offset: -1
	private static T GetAttribute<T>(Type type) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8E430 Offset: 0xB8A430 VA: 0xB8E430
	|-JsonTypeReflector.GetAttribute<object>
	*/

	// RVA: -1 Offset: -1
	private static T GetAttribute<T>(MemberInfo memberInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8E068 Offset: 0xB8A068 VA: 0xB8E068
	|-JsonTypeReflector.GetAttribute<object>
	*/

	// RVA: 0xF1A3F0 Offset: 0xF163F0 VA: 0xF1A3F0
	public static bool IsNonSerializable(object provider) { }

	// RVA: 0xF19AC8 Offset: 0xF15AC8 VA: 0xF19AC8
	public static bool IsSerializable(object provider) { }

	// RVA: -1 Offset: -1
	public static T GetAttribute<T>(object provider) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8E2DC Offset: 0xB8A2DC VA: 0xB8E2DC
	|-JsonTypeReflector.GetAttribute<object>
	*/

	// RVA: 0xF1A46C Offset: 0xF1646C VA: 0xF1A46C
	public static bool get_FullyTrusted() { }

	// RVA: 0xF1A09C Offset: 0xF1609C VA: 0xF1A09C
	public static ReflectionDelegateFactory get_ReflectionDelegateFactory() { }

	// RVA: 0xF1A5D4 Offset: 0xF165D4 VA: 0xF1A5D4
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
public class KebabCaseNamingStrategy : NamingStrategy // TypeDefIndex: 4338
{
	// Methods

	// RVA: 0xF1AC4C Offset: 0xF16C4C VA: 0xF1AC4C
	public void .ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) { }

	// RVA: 0xF1AC8C Offset: 0xF16C8C VA: 0xF1AC8C
	public void .ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames) { }

	// RVA: 0xF1ACD8 Offset: 0xF16CD8 VA: 0xF1ACD8
	public void .ctor() { }

	[NullableContext(1)]
	// RVA: 0xF1ACE0 Offset: 0xF16CE0 VA: 0xF1ACE0 Slot: 7
	protected override string ResolvePropertyName(string name) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
public abstract class NamingStrategy // TypeDefIndex: 4339
{
	// Fields
	[CompilerGenerated]
	private bool <ProcessDictionaryKeys>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <ProcessExtensionDataNames>k__BackingField; // 0x11
	[CompilerGenerated]
	private bool <OverrideSpecifiedNames>k__BackingField; // 0x12

	// Properties
	public bool ProcessDictionaryKeys { get; set; }
	public bool ProcessExtensionDataNames { get; set; }
	public bool OverrideSpecifiedNames { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF1ACEC Offset: 0xF16CEC VA: 0xF1ACEC
	public bool get_ProcessDictionaryKeys() { }

	[CompilerGenerated]
	// RVA: 0xF1ACF4 Offset: 0xF16CF4 VA: 0xF1ACF4
	public void set_ProcessDictionaryKeys(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF1AD00 Offset: 0xF16D00 VA: 0xF1AD00
	public bool get_ProcessExtensionDataNames() { }

	[CompilerGenerated]
	// RVA: 0xF1AD08 Offset: 0xF16D08 VA: 0xF1AD08
	public void set_ProcessExtensionDataNames(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF1AD14 Offset: 0xF16D14 VA: 0xF1AD14
	public bool get_OverrideSpecifiedNames() { }

	[CompilerGenerated]
	// RVA: 0xF1AD1C Offset: 0xF16D1C VA: 0xF1AD1C
	public void set_OverrideSpecifiedNames(bool value) { }

	// RVA: 0xF1AD28 Offset: 0xF16D28 VA: 0xF1AD28 Slot: 4
	public virtual string GetPropertyName(string name, bool hasSpecifiedName) { }

	// RVA: 0xF1AD48 Offset: 0xF16D48 VA: 0xF1AD48 Slot: 5
	public virtual string GetExtensionDataName(string name) { }

	// RVA: 0xF1AD64 Offset: 0xF16D64 VA: 0xF1AD64 Slot: 6
	public virtual string GetDictionaryKey(string key) { }

	// RVA: -1 Offset: -1 Slot: 7
	protected abstract string ResolvePropertyName(string name);

	// RVA: 0xF1AD80 Offset: 0xF16D80 VA: 0xF1AD80 Slot: 2
	public override int GetHashCode() { }

	[NullableContext(2)]
	// RVA: 0xF1AE60 Offset: 0xF16E60 VA: 0xF1AE60 Slot: 0
	public override bool Equals(object obj) { }

	[NullableContext(2)]
	// RVA: 0xF1AEE0 Offset: 0xF16EE0 VA: 0xF1AEE0
	protected bool Equals(NamingStrategy other) { }

	// RVA: 0xF1AC84 Offset: 0xF16C84 VA: 0xF1AC84
	protected void .ctor() { }
}


// Namespace: Newtonsoft.Json.Serialization
public sealed class ObjectConstructor<T> : MulticastDelegate // TypeDefIndex: 4340
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3F790 Offset: 0xC3B790 VA: 0xC3F790
	|-ObjectConstructor<__Il2CppFullySharedGenericType>..ctor
	*/

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 12
	public virtual object Invoke(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3F890 Offset: 0xC3B890 VA: 0xC3F890
	|-ObjectConstructor<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: Newtonsoft.Json.Serialization
[Usage(64, Inherited = False)]
public sealed class OnErrorAttribute : Attribute // TypeDefIndex: 4341
{}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
public class ReflectionAttributeProvider : IAttributeProvider // TypeDefIndex: 4342
{
	// Fields
	private readonly object _attributeProvider; // 0x10

	// Methods

	// RVA: 0xF1AFDC Offset: 0xF16FDC VA: 0xF1AFDC
	public void .ctor(object attributeProvider) { }
}


// Namespace: Newtonsoft.Json.Serialization
[Nullable(0)]
[NullableContext(1)]
public class ReflectionValueProvider : IValueProvider // TypeDefIndex: 4343
{
	// Fields
	private readonly MemberInfo _memberInfo; // 0x10

	// Methods

	// RVA: 0xF1B048 Offset: 0xF17048 VA: 0xF1B048
	public void .ctor(MemberInfo memberInfo) { }

	// RVA: 0xF1B0B4 Offset: 0xF170B4 VA: 0xF1B0B4 Slot: 4
	public void SetValue(object target, object value) { }

	// RVA: 0xF1B250 Offset: 0xF17250 VA: 0xF1B250 Slot: 5
	public object GetValue(object target) { }
}


// Namespace: Newtonsoft.Json.Serialization
public class SnakeCaseNamingStrategy : NamingStrategy // TypeDefIndex: 4344
{
	// Methods

	// RVA: 0xF1B4E8 Offset: 0xF174E8 VA: 0xF1B4E8
	public void .ctor(bool processDictionaryKeys, bool overrideSpecifiedNames) { }

	// RVA: 0xF1B520 Offset: 0xF17520 VA: 0xF1B520
	public void .ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames) { }

	// RVA: 0xF1B56C Offset: 0xF1756C VA: 0xF1B56C
	public void .ctor() { }

	[NullableContext(1)]
	// RVA: 0xF1B574 Offset: 0xF17574 VA: 0xF1B574 Slot: 7
	protected override string ResolvePropertyName(string name) { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class TraceJsonReader : JsonReader, IJsonLineInfo // TypeDefIndex: 4345
{
	// Fields
	private readonly JsonReader _innerReader; // 0x78
	private readonly JsonTextWriter _textWriter; // 0x80
	private readonly StringWriter _sw; // 0x88

	// Properties
	public override int Depth { get; }
	public override string Path { get; }
	public override JsonToken TokenType { get; }
	[Nullable(2)]
	public override object Value { get; }
	[Nullable(2)]
	public override Type ValueType { get; }
	private int Newtonsoft.Json.IJsonLineInfo.LineNumber { get; }
	private int Newtonsoft.Json.IJsonLineInfo.LinePosition { get; }

	// Methods

	// RVA: 0xF1B580 Offset: 0xF17580 VA: 0xF1B580
	public void .ctor(JsonReader innerReader) { }

	// RVA: 0xF1B6C0 Offset: 0xF176C0 VA: 0xF1B6C0
	public string GetDeserializedJsonMessage() { }

	// RVA: 0xF1B6E0 Offset: 0xF176E0 VA: 0xF1B6E0 Slot: 10
	public override bool Read() { }

	// RVA: 0xF1B758 Offset: 0xF17758 VA: 0xF1B758 Slot: 11
	public override Nullable<int> ReadAsInt32() { }

	[NullableContext(2)]
	// RVA: 0xF1B798 Offset: 0xF17798 VA: 0xF1B798 Slot: 12
	public override string ReadAsString() { }

	[NullableContext(2)]
	// RVA: 0xF1B7D8 Offset: 0xF177D8 VA: 0xF1B7D8 Slot: 13
	public override byte[] ReadAsBytes() { }

	// RVA: 0xF1B81C Offset: 0xF1781C VA: 0xF1B81C Slot: 16
	public override Nullable<Decimal> ReadAsDecimal() { }

	// RVA: 0xF1B898 Offset: 0xF17898 VA: 0xF1B898 Slot: 14
	public override Nullable<double> ReadAsDouble() { }

	// RVA: 0xF1B8E4 Offset: 0xF178E4 VA: 0xF1B8E4 Slot: 15
	public override Nullable<bool> ReadAsBoolean() { }

	// RVA: 0xF1B928 Offset: 0xF17928 VA: 0xF1B928 Slot: 17
	public override Nullable<DateTime> ReadAsDateTime() { }

	// RVA: 0xF1B974 Offset: 0xF17974 VA: 0xF1B974 Slot: 18
	public override Nullable<DateTimeOffset> ReadAsDateTimeOffset() { }

	// RVA: 0xF1B720 Offset: 0xF17720 VA: 0xF1B720
	public void WriteCurrentToken() { }

	// RVA: 0xF1B9D0 Offset: 0xF179D0 VA: 0xF1B9D0 Slot: 8
	public override int get_Depth() { }

	// RVA: 0xF1B9F0 Offset: 0xF179F0 VA: 0xF1B9F0 Slot: 9
	public override string get_Path() { }

	// RVA: 0xF1BA10 Offset: 0xF17A10 VA: 0xF1BA10 Slot: 5
	public override JsonToken get_TokenType() { }

	[NullableContext(2)]
	// RVA: 0xF1BA30 Offset: 0xF17A30 VA: 0xF1BA30 Slot: 6
	public override object get_Value() { }

	[NullableContext(2)]
	// RVA: 0xF1BA50 Offset: 0xF17A50 VA: 0xF1BA50 Slot: 7
	public override Type get_ValueType() { }

	// RVA: 0xF1BA70 Offset: 0xF17A70 VA: 0xF1BA70 Slot: 20
	public override void Close() { }

	// RVA: 0xF1BA94 Offset: 0xF17A94 VA: 0xF1BA94 Slot: 21
	private bool Newtonsoft.Json.IJsonLineInfo.HasLineInfo() { }

	// RVA: 0xF1BB48 Offset: 0xF17B48 VA: 0xF1BB48 Slot: 22
	private int Newtonsoft.Json.IJsonLineInfo.get_LineNumber() { }

	// RVA: 0xF1BC00 Offset: 0xF17C00 VA: 0xF1BC00 Slot: 23
	private int Newtonsoft.Json.IJsonLineInfo.get_LinePosition() { }
}


// Namespace: Newtonsoft.Json.Serialization
[NullableContext(1)]
[Nullable(0)]
internal class TraceJsonWriter : JsonWriter // TypeDefIndex: 4346
{
	// Fields
	private readonly JsonWriter _innerWriter; // 0x60
	private readonly JsonTextWriter _textWriter; // 0x68
	private readonly StringWriter _sw; // 0x70

	// Methods

	// RVA: 0xF1BCB8 Offset: 0xF17CB8 VA: 0xF1BCB8
	public void .ctor(JsonWriter innerWriter) { }

	// RVA: 0xF1BE7C Offset: 0xF17E7C VA: 0xF1BE7C
	public string GetSerializedJsonMessage() { }

	// RVA: 0xF1BE9C Offset: 0xF17E9C VA: 0xF1BE9C Slot: 38
	public override void WriteValue(Decimal value) { }

	// RVA: 0xF1BF08 Offset: 0xF17F08 VA: 0xF1BF08 Slot: 55
	public override void WriteValue(Nullable<Decimal> value) { }

	// RVA: 0xF1C06C Offset: 0xF1806C VA: 0xF1C06C Slot: 32
	public override void WriteValue(bool value) { }

	// RVA: 0xF1C0D0 Offset: 0xF180D0 VA: 0xF1C0D0 Slot: 49
	public override void WriteValue(Nullable<bool> value) { }

	// RVA: 0xF1C1D4 Offset: 0xF181D4 VA: 0xF1C1D4 Slot: 36
	public override void WriteValue(byte value) { }

	// RVA: 0xF1C234 Offset: 0xF18234 VA: 0xF1C234 Slot: 53
	public override void WriteValue(Nullable<byte> value) { }

	// RVA: 0xF1C338 Offset: 0xF18338 VA: 0xF1C338 Slot: 35
	public override void WriteValue(char value) { }

	// RVA: 0xF1C398 Offset: 0xF18398 VA: 0xF1C398 Slot: 52
	public override void WriteValue(Nullable<char> value) { }

	[NullableContext(2)]
	// RVA: 0xF1C49C Offset: 0xF1849C VA: 0xF1C49C Slot: 60
	public override void WriteValue(byte[] value) { }

	// RVA: 0xF1C510 Offset: 0xF18510 VA: 0xF1C510 Slot: 39
	public override void WriteValue(DateTime value) { }

	// RVA: 0xF1C570 Offset: 0xF18570 VA: 0xF1C570 Slot: 56
	public override void WriteValue(Nullable<DateTime> value) { }

	// RVA: 0xF1C684 Offset: 0xF18684 VA: 0xF1C684 Slot: 40
	public override void WriteValue(DateTimeOffset value) { }

	// RVA: 0xF1C6F0 Offset: 0xF186F0 VA: 0xF1C6F0 Slot: 57
	public override void WriteValue(Nullable<DateTimeOffset> value) { }

	// RVA: 0xF1C82C Offset: 0xF1882C VA: 0xF1C82C Slot: 31
	public override void WriteValue(double value) { }

	// RVA: 0xF1C88C Offset: 0xF1888C VA: 0xF1C88C Slot: 48
	public override void WriteValue(Nullable<double> value) { }

	// RVA: 0xF1C9A0 Offset: 0xF189A0 VA: 0xF1C9A0 Slot: 22
	public override void WriteUndefined() { }

	// RVA: 0xF1C9EC Offset: 0xF189EC VA: 0xF1C9EC Slot: 21
	public override void WriteNull() { }

	// RVA: 0xF1CA38 Offset: 0xF18A38 VA: 0xF1CA38 Slot: 30
	public override void WriteValue(float value) { }

	// RVA: 0xF1CA98 Offset: 0xF18A98 VA: 0xF1CA98 Slot: 47
	public override void WriteValue(Nullable<float> value) { }

	// RVA: 0xF1CB98 Offset: 0xF18B98 VA: 0xF1CB98 Slot: 41
	public override void WriteValue(Guid value) { }

	// RVA: 0xF1CC04 Offset: 0xF18C04 VA: 0xF1CC04 Slot: 58
	public override void WriteValue(Nullable<Guid> value) { }

	// RVA: 0xF1CD40 Offset: 0xF18D40 VA: 0xF1CD40 Slot: 26
	public override void WriteValue(int value) { }

	// RVA: 0xF1CDA0 Offset: 0xF18DA0 VA: 0xF1CDA0 Slot: 43
	public override void WriteValue(Nullable<int> value) { }

	// RVA: 0xF1CEA0 Offset: 0xF18EA0 VA: 0xF1CEA0 Slot: 28
	public override void WriteValue(long value) { }

	// RVA: 0xF1CF00 Offset: 0xF18F00 VA: 0xF1CF00 Slot: 45
	public override void WriteValue(Nullable<long> value) { }

	[NullableContext(2)]
	// RVA: 0xF1D014 Offset: 0xF19014 VA: 0xF1D014 Slot: 62
	public override void WriteValue(object value) { }

	// RVA: 0xF1D0E0 Offset: 0xF190E0 VA: 0xF1D0E0 Slot: 37
	public override void WriteValue(sbyte value) { }

	// RVA: 0xF1D140 Offset: 0xF19140 VA: 0xF1D140 Slot: 54
	public override void WriteValue(Nullable<sbyte> value) { }

	// RVA: 0xF1D244 Offset: 0xF19244 VA: 0xF1D244 Slot: 33
	public override void WriteValue(short value) { }

	// RVA: 0xF1D2A4 Offset: 0xF192A4 VA: 0xF1D2A4 Slot: 50
	public override void WriteValue(Nullable<short> value) { }

	[NullableContext(2)]
	// RVA: 0xF1D3A8 Offset: 0xF193A8 VA: 0xF1D3A8 Slot: 25
	public override void WriteValue(string value) { }

	// RVA: 0xF1D408 Offset: 0xF19408 VA: 0xF1D408 Slot: 42
	public override void WriteValue(TimeSpan value) { }

	// RVA: 0xF1D468 Offset: 0xF19468 VA: 0xF1D468 Slot: 59
	public override void WriteValue(Nullable<TimeSpan> value) { }

	// RVA: 0xF1D57C Offset: 0xF1957C VA: 0xF1D57C Slot: 27
	public override void WriteValue(uint value) { }

	// RVA: 0xF1D5DC Offset: 0xF195DC VA: 0xF1D5DC Slot: 44
	public override void WriteValue(Nullable<uint> value) { }

	// RVA: 0xF1D6DC Offset: 0xF196DC VA: 0xF1D6DC Slot: 29
	public override void WriteValue(ulong value) { }

	// RVA: 0xF1D73C Offset: 0xF1973C VA: 0xF1D73C Slot: 46
	public override void WriteValue(Nullable<ulong> value) { }

	[NullableContext(2)]
	// RVA: 0xF1D850 Offset: 0xF19850 VA: 0xF1D850 Slot: 61
	public override void WriteValue(Uri value) { }

	// RVA: 0xF1D914 Offset: 0xF19914 VA: 0xF1D914 Slot: 34
	public override void WriteValue(ushort value) { }

	// RVA: 0xF1D974 Offset: 0xF19974 VA: 0xF1D974 Slot: 51
	public override void WriteValue(Nullable<ushort> value) { }

	[NullableContext(2)]
	// RVA: 0xF1DA78 Offset: 0xF19A78 VA: 0xF1DA78 Slot: 63
	public override void WriteComment(string text) { }

	// RVA: 0xF1DAD8 Offset: 0xF19AD8 VA: 0xF1DAD8 Slot: 9
	public override void WriteStartArray() { }

	// RVA: 0xF1DB1C Offset: 0xF19B1C VA: 0xF1DB1C Slot: 10
	public override void WriteEndArray() { }

	// RVA: 0xF1DB60 Offset: 0xF19B60 VA: 0xF1DB60 Slot: 11
	public override void WriteStartConstructor(string name) { }

	// RVA: 0xF1DBB8 Offset: 0xF19BB8 VA: 0xF1DBB8 Slot: 12
	public override void WriteEndConstructor() { }

	// RVA: 0xF1DBFC Offset: 0xF19BFC VA: 0xF1DBFC Slot: 13
	public override void WritePropertyName(string name) { }

	// RVA: 0xF1DC5C Offset: 0xF19C5C VA: 0xF1DC5C Slot: 14
	public override void WritePropertyName(string name, bool escape) { }

	// RVA: 0xF1DCC8 Offset: 0xF19CC8 VA: 0xF1DCC8 Slot: 7
	public override void WriteStartObject() { }

	// RVA: 0xF1DD0C Offset: 0xF19D0C VA: 0xF1DD0C Slot: 8
	public override void WriteEndObject() { }

	[NullableContext(2)]
	// RVA: 0xF1DD50 Offset: 0xF19D50 VA: 0xF1DD50 Slot: 24
	public override void WriteRawValue(string json) { }

	[NullableContext(2)]
	// RVA: 0xF1DDB0 Offset: 0xF19DB0 VA: 0xF1DDB0 Slot: 23
	public override void WriteRaw(string json) { }

	// RVA: 0xF1DE10 Offset: 0xF19E10 VA: 0xF1DE10 Slot: 6
	public override void Close() { }
}


// Namespace: Newtonsoft.Json.Linq
public enum CommentHandling // TypeDefIndex: 4347
{
	// Fields
	public int value__; // 0x0
	public const CommentHandling Ignore = 0;
	public const CommentHandling Load = 1;
}


// Namespace: Newtonsoft.Json.Linq
public enum DuplicatePropertyNameHandling // TypeDefIndex: 4348
{
	// Fields
	public int value__; // 0x0
	public const DuplicatePropertyNameHandling Replace = 0;
	public const DuplicatePropertyNameHandling Ignore = 1;
	public const DuplicatePropertyNameHandling Error = 2;
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[DefaultMember("Item")]
[Nullable(0)]
public class JArray : JContainer, IList<JToken>, ICollection<JToken>, IEnumerable<JToken>, IEnumerable // TypeDefIndex: 4349
{
	// Fields
	private readonly List<JToken> _values; // 0x50

	// Properties
	protected override IList<JToken> ChildrenTokens { get; }
	public override JTokenType Type { get; }
	public JToken Item { get; set; }
	public bool IsReadOnly { get; }

	// Methods

	// RVA: 0xF1DE54 Offset: 0xF19E54 VA: 0xF1DE54 Slot: 46
	protected override IList<JToken> get_ChildrenTokens() { }

	// RVA: 0xF1DE5C Offset: 0xF19E5C VA: 0xF1DE5C Slot: 12
	public override JTokenType get_Type() { }

	// RVA: 0xF1DE64 Offset: 0xF19E64 VA: 0xF1DE64
	public void .ctor() { }

	// RVA: 0xF1DF34 Offset: 0xF19F34 VA: 0xF1DF34
	internal void .ctor(JArray other, JsonCloneSettings settings) { }

	// RVA: 0xF1E328 Offset: 0xF1A328 VA: 0xF1E328
	public void .ctor(object content) { }

	// RVA: 0xF1E3BC Offset: 0xF1A3BC VA: 0xF1E3BC Slot: 11
	internal override JToken CloneToken(JsonCloneSettings settings) { }

	// RVA: 0xF1E424 Offset: 0xF1A424 VA: 0xF1E424
	public static JArray Load(JsonReader reader, JsonLoadSettings settings) { }

	// RVA: 0xF1E8C0 Offset: 0xF1A8C0 VA: 0xF1E8C0 Slot: 17
	public override void WriteTo(JsonWriter writer, JsonConverter[] converters) { }

	// RVA: 0xF1E9A0 Offset: 0xF1A9A0 VA: 0xF1E9A0 Slot: 19
	public JToken get_Item(int index) { }

	// RVA: 0xF1E9B0 Offset: 0xF1A9B0 VA: 0xF1E9B0 Slot: 20
	public void set_Item(int index, JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF1E9C0 Offset: 0xF1A9C0 VA: 0xF1E9C0 Slot: 49
	internal override int IndexOfItem(JToken item) { }

	// RVA: 0xF1EA24 Offset: 0xF1AA24 VA: 0xF1EA24 Slot: 21
	public int IndexOf(JToken item) { }

	// RVA: 0xF1EA34 Offset: 0xF1AA34 VA: 0xF1EA34 Slot: 22
	public void Insert(int index, JToken item) { }

	// RVA: 0xF1EA4C Offset: 0xF1AA4C VA: 0xF1EA4C Slot: 23
	public void RemoveAt(int index) { }

	// RVA: 0xF1EA5C Offset: 0xF1AA5C VA: 0xF1EA5C Slot: 4
	public IEnumerator<JToken> GetEnumerator() { }

	// RVA: 0xF1EAF4 Offset: 0xF1AAF4 VA: 0xF1EAF4 Slot: 26
	public void Add(JToken item) { }

	// RVA: 0xF1EB04 Offset: 0xF1AB04 VA: 0xF1EB04 Slot: 27
	public void Clear() { }

	// RVA: 0xF1EB14 Offset: 0xF1AB14 VA: 0xF1EB14 Slot: 28
	public bool Contains(JToken item) { }

	// RVA: 0xF1EB24 Offset: 0xF1AB24 VA: 0xF1EB24 Slot: 29
	public void CopyTo(JToken[] array, int arrayIndex) { }

	// RVA: 0xF1EB34 Offset: 0xF1AB34 VA: 0xF1EB34 Slot: 25
	public bool get_IsReadOnly() { }

	// RVA: 0xF1EB3C Offset: 0xF1AB3C VA: 0xF1EB3C Slot: 30
	public bool Remove(JToken item) { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[Nullable(0)]
[DefaultMember("Item")]
public class JConstructor : JContainer // TypeDefIndex: 4350
{
	// Fields
	[Nullable(2)]
	private string _name; // 0x50
	private readonly List<JToken> _values; // 0x58

	// Properties
	protected override IList<JToken> ChildrenTokens { get; }
	[Nullable(2)]
	public string Name { get; }
	public override JTokenType Type { get; }

	// Methods

	// RVA: 0xF1EB4C Offset: 0xF1AB4C VA: 0xF1EB4C Slot: 46
	protected override IList<JToken> get_ChildrenTokens() { }

	[NullableContext(2)]
	// RVA: 0xF1EB54 Offset: 0xF1AB54 VA: 0xF1EB54 Slot: 49
	internal override int IndexOfItem(JToken item) { }

	[NullableContext(2)]
	// RVA: 0xF1EBB8 Offset: 0xF1ABB8 VA: 0xF1EBB8
	public string get_Name() { }

	// RVA: 0xF1EBC0 Offset: 0xF1ABC0 VA: 0xF1EBC0 Slot: 12
	public override JTokenType get_Type() { }

	// RVA: 0xF1EBC8 Offset: 0xF1ABC8 VA: 0xF1EBC8
	internal void .ctor(JConstructor other, JsonCloneSettings settings) { }

	// RVA: 0xF1EC6C Offset: 0xF1AC6C VA: 0xF1EC6C
	public void .ctor(string name) { }

	// RVA: 0xF1ED8C Offset: 0xF1AD8C VA: 0xF1ED8C Slot: 11
	internal override JToken CloneToken(JsonCloneSettings settings) { }

	// RVA: 0xF1EDF4 Offset: 0xF1ADF4 VA: 0xF1EDF4 Slot: 17
	public override void WriteTo(JsonWriter writer, JsonConverter[] converters) { }

	// RVA: 0xF1EEE0 Offset: 0xF1AEE0 VA: 0xF1EEE0
	public static JConstructor Load(JsonReader reader, JsonLoadSettings settings) { }
}


// Namespace: Newtonsoft.Json.Linq
[Nullable(0)]
[NullableContext(1)]
public abstract class JContainer : JToken, IList<JToken>, ICollection<JToken>, IEnumerable<JToken>, IEnumerable, IBindingList, ICollection, IList // TypeDefIndex: 4351
{
	// Fields
	[Nullable(2)]
	internal ListChangedEventHandler _listChanged; // 0x30
	[Nullable(2)]
	internal NotifyCollectionChangedEventHandler _collectionChanged; // 0x38
	[Nullable(2)]
	private object _syncRoot; // 0x40
	private bool _busy; // 0x48

	// Properties
	protected abstract IList<JToken> ChildrenTokens { get; }
	public override bool HasValues { get; }
	[Nullable(2)]
	public override JToken First { get; }
	[Nullable(2)]
	public override JToken Last { get; }
	private JToken System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Item { get; set; }
	private bool System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.IsReadOnly { get; }
	private bool System.Collections.IList.IsFixedSize { get; }
	private bool System.Collections.IList.IsReadOnly { get; }
	[Nullable(2)]
	private object System.Collections.IList.Item { get; set; }
	public int Count { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	private object System.Collections.ICollection.SyncRoot { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 46
	protected abstract IList<JToken> get_ChildrenTokens();

	// RVA: 0xF1DEDC Offset: 0xF19EDC VA: 0xF1DEDC
	internal void .ctor() { }

	// RVA: 0xF1DFC4 Offset: 0xF19FC4 VA: 0xF1DFC4
	internal void .ctor(JContainer other, JsonCloneSettings settings) { }

	// RVA: 0xF1F500 Offset: 0xF1B500 VA: 0xF1F500
	internal void CheckReentrancy() { }

	// RVA: 0xF1F5A8 Offset: 0xF1B5A8 VA: 0xF1F5A8 Slot: 47
	protected virtual void OnListChanged(ListChangedEventArgs e) { }

	// RVA: 0xF1F630 Offset: 0xF1B630 VA: 0xF1F630 Slot: 48
	protected virtual void OnCollectionChanged(NotifyCollectionChangedEventArgs e) { }

	// RVA: 0xF1F6B8 Offset: 0xF1B6B8 VA: 0xF1F6B8 Slot: 13
	public override bool get_HasValues() { }

	[NullableContext(2)]
	// RVA: 0xF1F778 Offset: 0xF1B778 VA: 0xF1F778 Slot: 14
	public override JToken get_First() { }

	[NullableContext(2)]
	// RVA: 0xF1F8B4 Offset: 0xF1B8B4 VA: 0xF1F8B4 Slot: 15
	public override JToken get_Last() { }

	// RVA: 0xF1F9F0 Offset: 0xF1B9F0 VA: 0xF1F9F0 Slot: 16
	public override JEnumerable<JToken> Children() { }

	[NullableContext(2)]
	// RVA: 0xF1FA64 Offset: 0xF1BA64 VA: 0xF1FA64
	internal bool IsMultiContent(object content) { }

	// RVA: 0xF1FB48 Offset: 0xF1BB48 VA: 0xF1FB48
	internal JToken EnsureParentToken(JToken item, bool skipParentCheck, bool copyAnnotations) { }

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 49
	internal abstract int IndexOfItem(JToken item);

	[NullableContext(2)]
	// RVA: 0xF1FCB4 Offset: 0xF1BCB4 VA: 0xF1FCB4 Slot: 50
	internal virtual bool InsertItem(int index, JToken item, bool skipParentCheck, bool copyAnnotations) { }

	// RVA: 0xF200A8 Offset: 0xF1C0A8 VA: 0xF200A8 Slot: 51
	internal virtual void RemoveItemAt(int index) { }

	[NullableContext(2)]
	// RVA: 0xF204F8 Offset: 0xF1C4F8 VA: 0xF204F8 Slot: 52
	internal virtual bool RemoveItem(JToken item) { }

	// RVA: 0xF20544 Offset: 0xF1C544 VA: 0xF20544 Slot: 53
	internal virtual JToken GetItem(int index) { }

	[NullableContext(2)]
	// RVA: 0xF20600 Offset: 0xF1C600 VA: 0xF20600 Slot: 54
	internal virtual void SetItem(int index, JToken item) { }

	// RVA: 0xF20B5C Offset: 0xF1CB5C VA: 0xF20B5C Slot: 55
	internal virtual void ClearItems() { }

	// RVA: 0xF20F6C Offset: 0xF1CF6C VA: 0xF20F6C Slot: 56
	internal virtual void ReplaceItem(JToken existing, JToken replacement) { }

	[NullableContext(2)]
	// RVA: 0xF20FD0 Offset: 0xF1CFD0 VA: 0xF20FD0 Slot: 57
	internal virtual bool ContainsItem(JToken item) { }

	// RVA: 0xF20FF4 Offset: 0xF1CFF4 VA: 0xF20FF4 Slot: 58
	internal virtual void CopyItemsTo(Array array, int arrayIndex) { }

	// RVA: 0xF20AB0 Offset: 0xF1CAB0 VA: 0xF20AB0
	internal static bool IsTokenUnchanged(JToken currentValue, JToken newValue) { }

	// RVA: 0xF214D4 Offset: 0xF1D4D4 VA: 0xF214D4 Slot: 59
	internal virtual void ValidateToken(JToken o, JToken existing) { }

	[NullableContext(2)]
	// RVA: 0xF215F0 Offset: 0xF1D5F0 VA: 0xF215F0 Slot: 60
	public virtual void Add(object content) { }

	[NullableContext(2)]
	// RVA: 0xF216C0 Offset: 0xF1D6C0 VA: 0xF216C0
	internal bool TryAdd(object content) { }

	// RVA: 0xF21790 Offset: 0xF1D790 VA: 0xF21790
	internal void AddAndSkipParentCheck(JToken token) { }

	[NullableContext(2)]
	// RVA: 0xF1F164 Offset: 0xF1B164 VA: 0xF1F164
	internal bool TryAddInternal(int index, object content, bool skipParentCheck, bool copyAnnotations) { }

	// RVA: 0xF21860 Offset: 0xF1D860 VA: 0xF21860
	internal static JToken CreateFromContent(object content) { }

	// RVA: 0xF21944 Offset: 0xF1D944 VA: 0xF21944
	public void RemoveAll() { }

	// RVA: 0xF1E764 Offset: 0xF1A764 VA: 0xF1E764
	internal void ReadTokenFrom(JsonReader reader, JsonLoadSettings options) { }

	// RVA: 0xF21954 Offset: 0xF1D954 VA: 0xF21954
	internal void ReadContentFrom(JsonReader r, JsonLoadSettings settings) { }

	[NullableContext(2)]
	// RVA: 0xF21E80 Offset: 0xF1DE80 VA: 0xF21E80
	private static JProperty ReadProperty(JsonReader r, JsonLoadSettings settings, IJsonLineInfo lineInfo, JContainer parent) { }

	// RVA: 0xF222F0 Offset: 0xF1E2F0 VA: 0xF222F0 Slot: 21
	private int System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(JToken item) { }

	// RVA: 0xF22300 Offset: 0xF1E300 VA: 0xF22300 Slot: 22
	private void System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert(int index, JToken item) { }

	// RVA: 0xF22318 Offset: 0xF1E318 VA: 0xF22318 Slot: 23
	private void System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt(int index) { }

	// RVA: 0xF22328 Offset: 0xF1E328 VA: 0xF22328 Slot: 19
	private JToken System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item(int index) { }

	// RVA: 0xF22338 Offset: 0xF1E338 VA: 0xF22338 Slot: 20
	private void System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(int index, JToken value) { }

	// RVA: 0xF22348 Offset: 0xF1E348 VA: 0xF22348 Slot: 26
	private void System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(JToken item) { }

	// RVA: 0xF22358 Offset: 0xF1E358 VA: 0xF22358 Slot: 27
	private void System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear() { }

	// RVA: 0xF22368 Offset: 0xF1E368 VA: 0xF22368 Slot: 28
	private bool System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(JToken item) { }

	// RVA: 0xF22378 Offset: 0xF1E378 VA: 0xF22378 Slot: 29
	private void System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(JToken[] array, int arrayIndex) { }

	// RVA: 0xF22388 Offset: 0xF1E388 VA: 0xF22388 Slot: 25
	private bool System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly() { }

	// RVA: 0xF22390 Offset: 0xF1E390 VA: 0xF22390 Slot: 30
	private bool System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(JToken item) { }

	[NullableContext(2)]
	// RVA: 0xF223A0 Offset: 0xF1E3A0 VA: 0xF223A0
	private JToken EnsureValue(object value) { }

	[NullableContext(2)]
	// RVA: 0xF2245C Offset: 0xF1E45C VA: 0xF2245C Slot: 33
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0xF22494 Offset: 0xF1E494 VA: 0xF22494 Slot: 35
	private void System.Collections.IList.Clear() { }

	[NullableContext(2)]
	// RVA: 0xF224A4 Offset: 0xF1E4A4 VA: 0xF224A4 Slot: 34
	private bool System.Collections.IList.Contains(object value) { }

	[NullableContext(2)]
	// RVA: 0xF224CC Offset: 0xF1E4CC VA: 0xF224CC Slot: 38
	private int System.Collections.IList.IndexOf(object value) { }

	[NullableContext(2)]
	// RVA: 0xF224F4 Offset: 0xF1E4F4 VA: 0xF224F4 Slot: 39
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0xF22538 Offset: 0xF1E538 VA: 0xF22538 Slot: 37
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0xF22540 Offset: 0xF1E540 VA: 0xF22540 Slot: 36
	private bool System.Collections.IList.get_IsReadOnly() { }

	[NullableContext(2)]
	// RVA: 0xF22548 Offset: 0xF1E548 VA: 0xF22548 Slot: 40
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0xF22570 Offset: 0xF1E570 VA: 0xF22570 Slot: 41
	private void System.Collections.IList.RemoveAt(int index) { }

	[NullableContext(2)]
	// RVA: 0xF22580 Offset: 0xF1E580 VA: 0xF22580 Slot: 31
	private object System.Collections.IList.get_Item(int index) { }

	[NullableContext(2)]
	// RVA: 0xF22590 Offset: 0xF1E590 VA: 0xF22590 Slot: 32
	private void System.Collections.IList.set_Item(int index, object value) { }

	// RVA: 0xF225CC Offset: 0xF1E5CC VA: 0xF225CC Slot: 42
	private void System.Collections.ICollection.CopyTo(Array array, int index) { }

	// RVA: 0xF21420 Offset: 0xF1D420 VA: 0xF21420 Slot: 43
	public int get_Count() { }

	// RVA: 0xF225DC Offset: 0xF1E5DC VA: 0xF225DC Slot: 45
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0xF225E4 Offset: 0xF1E5E4 VA: 0xF225E4 Slot: 44
	private object System.Collections.ICollection.get_SyncRoot() { }
}


// Namespace: Newtonsoft.Json.Linq
[Nullable(0)]
[NullableContext(1)]
[DefaultMember("Item")]
public struct JEnumerable<T> : IEnumerable<T>, IEnumerable, IEquatable<JEnumerable<T>> // TypeDefIndex: 4352
{
	// Fields
	[Nullable(new[] { 0, 1 })]
	public static readonly JEnumerable<T> Empty; // 0x0
	private readonly IEnumerable<T> _enumerable; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(IEnumerable<T> enumerable) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26974 Offset: 0xC22974 VA: 0xC26974
	|-JEnumerable<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public IEnumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC269D4 Offset: 0xC229D4 VA: 0xC269D4
	|-JEnumerable<object>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26B00 Offset: 0xC22B00 VA: 0xC26B00
	|-JEnumerable<object>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool Equals(JEnumerable<T> other) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26B70 Offset: 0xC22B70 VA: 0xC26B70
	|-JEnumerable<object>.Equals
	*/

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 0
	public override bool Equals(object obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26B7C Offset: 0xC22B7C VA: 0xC26B7C
	|-JEnumerable<object>.Equals
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public override int GetHashCode() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26C88 Offset: 0xC22C88 VA: 0xC26C88
	|-JEnumerable<object>.GetHashCode
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26CA0 Offset: 0xC22CA0 VA: 0xC26CA0
	|-JEnumerable<object>..cctor
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class JObject.JObjectDynamicProxy.<>c // TypeDefIndex: 4353
{
	// Fields
	[Nullable(0)]
	public static readonly JObject.JObjectDynamicProxy.<>c <>9; // 0x0
	[Nullable(0)]
	public static Func<JProperty, string> <>9__2_0; // 0x8

	// Methods

	// RVA: 0xF247E8 Offset: 0xF207E8 VA: 0xF247E8
	private static void .cctor() { }

	// RVA: 0xF24844 Offset: 0xF20844 VA: 0xF24844
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xF2484C Offset: 0xF2084C VA: 0xF2484C
	internal string <GetDynamicMemberNames>b__2_0(JProperty p) { }
}


// Namespace: 
[Nullable(new[] { 0, 1 })]
private class JObject.JObjectDynamicProxy : DynamicProxy<JObject> // TypeDefIndex: 4354
{
	// Methods

	// RVA: 0xF245C4 Offset: 0xF205C4 VA: 0xF245C4 Slot: 11
	public override bool TryGetMember(JObject instance, GetMemberBinder binder, out object result) { }

	// RVA: 0xF245FC Offset: 0xF205FC VA: 0xF245FC Slot: 15
	public override bool TrySetMember(JObject instance, SetMemberBinder binder, object value) { }

	// RVA: 0xF246DC Offset: 0xF206DC VA: 0xF246DC Slot: 4
	public override IEnumerable<string> GetDynamicMemberNames(JObject instance) { }

	// RVA: 0xF2457C Offset: 0xF2057C VA: 0xF2457C
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class JObject.<GetEnumerator>d__64 : IEnumerator<KeyValuePair<string, JToken>>, IEnumerator, IDisposable // TypeDefIndex: 4355
{
	// Fields
	private int <>1__state; // 0x10
	[Nullable(new[] { 0, 1, 2 })]
	private KeyValuePair<string, JToken> <>2__current; // 0x18
	[Nullable(0)]
	public JObject <>4__this; // 0x28
	[Nullable(new[] { 0, 1 })]
	private IEnumerator<JToken> <>7__wrap1; // 0x30

	// Properties
	private KeyValuePair<string, JToken> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0xF23E30 Offset: 0xF1FE30 VA: 0xF23E30
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0xF24864 Offset: 0xF20864 VA: 0xF24864 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0xF24880 Offset: 0xF20880 VA: 0xF24880 Slot: 6
	private bool MoveNext() { }

	// RVA: 0xF24B60 Offset: 0xF20B60 VA: 0xF24B60
	private void <>m__Finally1() { }

	[DebuggerHidden]
	// RVA: 0xF24C10 Offset: 0xF20C10 VA: 0xF24C10 Slot: 4
	private KeyValuePair<string, JToken> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0xF24C1C Offset: 0xF20C1C VA: 0xF24C1C Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0xF24C54 Offset: 0xF20C54 VA: 0xF24C54 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[Nullable(0)]
[DefaultMember("Item")]
public class JObject : JContainer, IDictionary<string, JToken>, ICollection<KeyValuePair<string, JToken>>, IEnumerable<KeyValuePair<string, JToken>>, IEnumerable, ICustomTypeDescriptor // TypeDefIndex: 4356
{
	// Fields
	private readonly JPropertyKeyedCollection _properties; // 0x50
	[CompilerGenerated]
	[Nullable(2)]
	private PropertyChangedEventHandler PropertyChanged; // 0x58
	[CompilerGenerated]
	[Nullable(2)]
	private PropertyChangingEventHandler PropertyChanging; // 0x60

	// Properties
	protected override IList<JToken> ChildrenTokens { get; }
	public override JTokenType Type { get; }
	[Nullable(2)]
	public JToken Item { get; set; }
	private ICollection<string> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.Keys { get; }
	[Nullable(new[] { 1, 2 })]
	private ICollection<JToken> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.Values { get; }
	private bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.IsReadOnly { get; }

	// Methods

	// RVA: 0xF22658 Offset: 0xF1E658 VA: 0xF22658 Slot: 46
	protected override IList<JToken> get_ChildrenTokens() { }

	// RVA: 0xF21D74 Offset: 0xF1DD74 VA: 0xF21D74
	public void .ctor() { }

	// RVA: 0xF226F0 Offset: 0xF1E6F0 VA: 0xF226F0
	public void .ctor(JObject other) { }

	// RVA: 0xF2275C Offset: 0xF1E75C VA: 0xF2275C
	internal void .ctor(JObject other, JsonCloneSettings settings) { }

	// RVA: 0xF227CC Offset: 0xF1E7CC VA: 0xF227CC
	public void .ctor(object[] content) { }

	// RVA: 0xF227D0 Offset: 0xF1E7D0 VA: 0xF227D0
	public void .ctor(object content) { }

	[NullableContext(2)]
	// RVA: 0xF2284C Offset: 0xF1E84C VA: 0xF2284C Slot: 49
	internal override int IndexOfItem(JToken item) { }

	[NullableContext(2)]
	// RVA: 0xF22918 Offset: 0xF1E918 VA: 0xF22918 Slot: 50
	internal override bool InsertItem(int index, JToken item, bool skipParentCheck, bool copyAnnotations) { }

	// RVA: 0xF22988 Offset: 0xF1E988 VA: 0xF22988 Slot: 59
	internal override void ValidateToken(JToken o, JToken existing) { }

	// RVA: 0xF22C10 Offset: 0xF1EC10 VA: 0xF22C10
	internal void InternalPropertyChanged(JProperty childProperty) { }

	// RVA: 0xF22D5C Offset: 0xF1ED5C VA: 0xF22D5C
	internal void InternalPropertyChanging(JProperty childProperty) { }

	// RVA: 0xF22D80 Offset: 0xF1ED80 VA: 0xF22D80 Slot: 11
	internal override JToken CloneToken(JsonCloneSettings settings) { }

	// RVA: 0xF22DE8 Offset: 0xF1EDE8 VA: 0xF22DE8 Slot: 12
	public override JTokenType get_Type() { }

	// RVA: 0xF22DF0 Offset: 0xF1EDF0 VA: 0xF22DF0
	public IEnumerable<JProperty> Properties() { }

	// RVA: 0xF22054 Offset: 0xF1E054 VA: 0xF22054
	public JProperty Property(string name, StringComparison comparison) { }

	// RVA: 0xF22E38 Offset: 0xF1EE38 VA: 0xF22E38 Slot: 61
	public JToken get_Item(string propertyName) { }

	// RVA: 0xF22EB8 Offset: 0xF1EEB8 VA: 0xF22EB8 Slot: 62
	public void set_Item(string propertyName, JToken value) { }

	// RVA: 0xF2302C Offset: 0xF1F02C VA: 0xF2302C
	public static JObject Load(JsonReader reader, JsonLoadSettings settings) { }

	// RVA: 0xF231F0 Offset: 0xF1F1F0 VA: 0xF231F0 Slot: 17
	public override void WriteTo(JsonWriter writer, JsonConverter[] converters) { }

	// RVA: 0xF22FB0 Offset: 0xF1EFB0 VA: 0xF22FB0 Slot: 66
	public void Add(string propertyName, JToken value) { }

	// RVA: 0xF233D0 Offset: 0xF1F3D0 VA: 0xF233D0 Slot: 65
	public bool ContainsKey(string propertyName) { }

	// RVA: 0xF234E8 Offset: 0xF1F4E8 VA: 0xF234E8 Slot: 63
	private ICollection<string> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys() { }

	// RVA: 0xF23558 Offset: 0xF1F558 VA: 0xF23558 Slot: 67
	public bool Remove(string propertyName) { }

	// RVA: 0xF235F0 Offset: 0xF1F5F0 VA: 0xF235F0 Slot: 68
	public bool TryGetValue(string propertyName, out JToken value) { }

	// RVA: 0xF23630 Offset: 0xF1F630 VA: 0xF23630 Slot: 64
	private ICollection<JToken> System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values() { }

	// RVA: 0xF23668 Offset: 0xF1F668 VA: 0xF23668 Slot: 71
	private void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add(KeyValuePair<string, JToken> item) { }

	// RVA: 0xF2373C Offset: 0xF1F73C VA: 0xF2373C Slot: 72
	private void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear() { }

	// RVA: 0xF2374C Offset: 0xF1F74C VA: 0xF2374C Slot: 73
	private bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains(KeyValuePair<string, JToken> item) { }

	// RVA: 0xF237FC Offset: 0xF1F7FC VA: 0xF237FC Slot: 74
	private void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo(KeyValuePair<string, JToken>[] array, int arrayIndex) { }

	// RVA: 0xF23C60 Offset: 0xF1FC60 VA: 0xF23C60 Slot: 70
	private bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly() { }

	// RVA: 0xF23C68 Offset: 0xF1FC68 VA: 0xF23C68 Slot: 75
	private bool System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove(KeyValuePair<string, JToken> item) { }

	// RVA: 0xF23DD0 Offset: 0xF1FDD0 VA: 0xF23DD0 Slot: 76
	public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator() { }

	// RVA: 0xF23E58 Offset: 0xF1FE58 VA: 0xF23E58 Slot: 82
	protected virtual void OnPropertyChanged(string propertyName) { }

	// RVA: 0xF23EE8 Offset: 0xF1FEE8 VA: 0xF23EE8 Slot: 83
	protected virtual void OnPropertyChanging(string propertyName) { }

	// RVA: 0xF23F78 Offset: 0xF1FF78 VA: 0xF23F78 Slot: 79
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties() { }

	// RVA: 0xF24014 Offset: 0xF20014 VA: 0xF24014 Slot: 80
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(Attribute[] attributes) { }

	// RVA: 0xF243A4 Offset: 0xF203A4 VA: 0xF243A4 Slot: 77
	private AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() { }

	// RVA: 0xF243FC Offset: 0xF203FC VA: 0xF243FC Slot: 78
	private TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter() { }

	[NullableContext(2)]
	// RVA: 0xF24450 Offset: 0xF20450 VA: 0xF24450 Slot: 81
	private object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd) { }

	// RVA: 0xF244CC Offset: 0xF204CC VA: 0xF244CC Slot: 18
	protected override DynamicMetaObject GetMetaObject(Expression parameter) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class JProperty.JPropertyList.<GetEnumerator>d__1 : IEnumerator<JToken>, IEnumerator, IDisposable // TypeDefIndex: 4357
{
	// Fields
	private int <>1__state; // 0x10
	private JToken <>2__current; // 0x18
	[Nullable(0)]
	public JProperty.JPropertyList <>4__this; // 0x20

	// Properties
	private JToken System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0xF255A8 Offset: 0xF215A8 VA: 0xF255A8
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0xF2573C Offset: 0xF2173C VA: 0xF2573C Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0xF25740 Offset: 0xF21740 VA: 0xF25740 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0xF257A0 Offset: 0xF217A0 VA: 0xF257A0 Slot: 4
	private JToken System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0xF257A8 Offset: 0xF217A8 VA: 0xF257A8 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0xF257E0 Offset: 0xF217E0 VA: 0xF257E0 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: 
[DefaultMember("Item")]
[Nullable(0)]
private class JProperty.JPropertyList : IList<JToken>, ICollection<JToken>, IEnumerable<JToken>, IEnumerable // TypeDefIndex: 4358
{
	// Fields
	[Nullable(2)]
	internal JToken _token; // 0x10

	// Properties
	public int Count { get; }
	public bool IsReadOnly { get; }
	public JToken Item { get; set; }

	// Methods

	// RVA: 0xF25548 Offset: 0xF21548 VA: 0xF25548 Slot: 16
	public IEnumerator<JToken> GetEnumerator() { }

	// RVA: 0xF255D0 Offset: 0xF215D0 VA: 0xF255D0 Slot: 17
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0xF255D4 Offset: 0xF215D4 VA: 0xF255D4 Slot: 11
	public void Add(JToken item) { }

	// RVA: 0xF255DC Offset: 0xF215DC VA: 0xF255DC Slot: 12
	public void Clear() { }

	// RVA: 0xF255E4 Offset: 0xF215E4 VA: 0xF255E4 Slot: 13
	public bool Contains(JToken item) { }

	// RVA: 0xF255F4 Offset: 0xF215F4 VA: 0xF255F4 Slot: 14
	public void CopyTo(JToken[] array, int arrayIndex) { }

	// RVA: 0xF25658 Offset: 0xF21658 VA: 0xF25658 Slot: 15
	public bool Remove(JToken item) { }

	// RVA: 0xF25674 Offset: 0xF21674 VA: 0xF25674 Slot: 9
	public int get_Count() { }

	// RVA: 0xF25684 Offset: 0xF21684 VA: 0xF25684 Slot: 10
	public bool get_IsReadOnly() { }

	// RVA: 0xF25070 Offset: 0xF21070 VA: 0xF25070 Slot: 6
	public int IndexOf(JToken item) { }

	// RVA: 0xF2568C Offset: 0xF2168C VA: 0xF2568C Slot: 7
	public void Insert(int index, JToken item) { }

	// RVA: 0xF2569C Offset: 0xF2169C VA: 0xF2569C Slot: 8
	public void RemoveAt(int index) { }

	// RVA: 0xF256AC Offset: 0xF216AC VA: 0xF256AC Slot: 4
	public JToken get_Item(int index) { }

	// RVA: 0xF256F4 Offset: 0xF216F4 VA: 0xF256F4 Slot: 5
	public void set_Item(int index, JToken value) { }

	// RVA: 0xF24D48 Offset: 0xF20D48 VA: 0xF24D48
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[Nullable(0)]
public class JProperty : JContainer // TypeDefIndex: 4359
{
	// Fields
	private readonly JProperty.JPropertyList _content; // 0x50
	private readonly string _name; // 0x58

	// Properties
	protected override IList<JToken> ChildrenTokens { get; }
	public string Name { get; }
	public JToken Value { get; set; }
	public override JTokenType Type { get; }

	// Methods

	// RVA: 0xF24CB0 Offset: 0xF20CB0 VA: 0xF24CB0 Slot: 46
	protected override IList<JToken> get_ChildrenTokens() { }

	[DebuggerStepThrough]
	// RVA: 0xF24CB8 Offset: 0xF20CB8 VA: 0xF24CB8
	public string get_Name() { }

	[DebuggerStepThrough]
	// RVA: 0xF21D58 Offset: 0xF1DD58 VA: 0xF21D58
	public JToken get_Value() { }

	// RVA: 0xF22F30 Offset: 0xF1EF30 VA: 0xF22F30
	public void set_Value(JToken value) { }

	// RVA: 0xF24CC0 Offset: 0xF20CC0 VA: 0xF24CC0
	internal void .ctor(JProperty other, JsonCloneSettings settings) { }

	// RVA: 0xF24D50 Offset: 0xF20D50 VA: 0xF24D50 Slot: 53
	internal override JToken GetItem(int index) { }

	[NullableContext(2)]
	// RVA: 0xF24DA4 Offset: 0xF20DA4 VA: 0xF24DA4 Slot: 54
	internal override void SetItem(int index, JToken item) { }

	[NullableContext(2)]
	// RVA: 0xF24EE8 Offset: 0xF20EE8 VA: 0xF24EE8 Slot: 52
	internal override bool RemoveItem(JToken item) { }

	// RVA: 0xF24F94 Offset: 0xF20F94 VA: 0xF24F94 Slot: 51
	internal override void RemoveItemAt(int index) { }

	[NullableContext(2)]
	// RVA: 0xF25040 Offset: 0xF21040 VA: 0xF25040 Slot: 49
	internal override int IndexOfItem(JToken item) { }

	[NullableContext(2)]
	// RVA: 0xF25080 Offset: 0xF21080 VA: 0xF25080 Slot: 50
	internal override bool InsertItem(int index, JToken item, bool skipParentCheck, bool copyAnnotations) { }

	[NullableContext(2)]
	// RVA: 0xF25198 Offset: 0xF21198 VA: 0xF25198 Slot: 57
	internal override bool ContainsItem(JToken item) { }

	// RVA: 0xF251BC Offset: 0xF211BC VA: 0xF251BC Slot: 55
	internal override void ClearItems() { }

	// RVA: 0xF25268 Offset: 0xF21268 VA: 0xF25268 Slot: 11
	internal override JToken CloneToken(JsonCloneSettings settings) { }

	[DebuggerStepThrough]
	// RVA: 0xF252D0 Offset: 0xF212D0 VA: 0xF252D0 Slot: 12
	public override JTokenType get_Type() { }

	// RVA: 0xF221E8 Offset: 0xF1E1E8 VA: 0xF221E8
	internal void .ctor(string name) { }

	// RVA: 0xF232E4 Offset: 0xF1F2E4 VA: 0xF232E4
	public void .ctor(string name, object content) { }

	// RVA: 0xF252D8 Offset: 0xF212D8 VA: 0xF252D8 Slot: 17
	public override void WriteTo(JsonWriter writer, JsonConverter[] converters) { }

	// RVA: 0xF25358 Offset: 0xF21358 VA: 0xF25358
	public static JProperty Load(JsonReader reader, JsonLoadSettings settings) { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[Nullable(0)]
public class JPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 4360
{
	// Properties
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }
	protected override int NameHashCode { get; }

	// Methods

	// RVA: 0xF24398 Offset: 0xF20398 VA: 0xF24398
	public void .ctor(string name) { }

	// RVA: 0xF257E8 Offset: 0xF217E8 VA: 0xF257E8 Slot: 17
	public override bool CanResetValue(object component) { }

	[NullableContext(2)]
	// RVA: 0xF257F0 Offset: 0xF217F0 VA: 0xF257F0 Slot: 18
	public override object GetValue(object component) { }

	// RVA: 0xF2588C Offset: 0xF2188C VA: 0xF2588C Slot: 20
	public override void ResetValue(object component) { }

	[NullableContext(2)]
	// RVA: 0xF25890 Offset: 0xF21890 VA: 0xF25890 Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0xF259CC Offset: 0xF219CC VA: 0xF259CC Slot: 22
	public override bool ShouldSerializeValue(object component) { }

	// RVA: 0xF259D4 Offset: 0xF219D4 VA: 0xF259D4 Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0xF25A40 Offset: 0xF21A40 VA: 0xF25A40 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0xF25A48 Offset: 0xF21A48 VA: 0xF25A48 Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0xF25AB4 Offset: 0xF21AB4 VA: 0xF25AB4 Slot: 8
	protected override int get_NameHashCode() { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[Nullable(new[] { 0, 1 })]
[DefaultMember("Item")]
internal class JPropertyKeyedCollection : Collection<JToken> // TypeDefIndex: 4361
{
	// Fields
	private static readonly IEqualityComparer<string> Comparer; // 0x0
	[Nullable(new[] { 2, 1, 1 })]
	private Dictionary<string, JToken> _dictionary; // 0x18

	// Properties
	public ICollection<string> Keys { get; }

	// Methods

	// RVA: 0xF22660 Offset: 0xF1E660 VA: 0xF22660
	public void .ctor() { }

	// RVA: 0xF25ABC Offset: 0xF21ABC VA: 0xF25ABC
	private void AddKey(string key, JToken item) { }

	// RVA: 0xF25BD4 Offset: 0xF21BD4 VA: 0xF25BD4 Slot: 35
	protected override void ClearItems() { }

	// RVA: 0xF2343C Offset: 0xF1F43C VA: 0xF2343C
	public bool Contains(string key) { }

	// RVA: 0xF25B2C Offset: 0xF21B2C VA: 0xF25B2C
	private void EnsureDictionary() { }

	// RVA: 0xF25C4C Offset: 0xF21C4C VA: 0xF25C4C
	private string GetKeyForItem(JToken item) { }

	// RVA: 0xF25CCC Offset: 0xF21CCC VA: 0xF25CCC Slot: 36
	protected override void InsertItem(int index, JToken item) { }

	// RVA: 0xF25D44 Offset: 0xF21D44 VA: 0xF25D44 Slot: 37
	protected override void RemoveItem(int index) { }

	// RVA: 0xF25E38 Offset: 0xF21E38 VA: 0xF25E38
	private void RemoveKey(string key) { }

	// RVA: 0xF25E98 Offset: 0xF21E98 VA: 0xF25E98 Slot: 38
	protected override void SetItem(int index, JToken item) { }

	// RVA: 0xF22B98 Offset: 0xF1EB98 VA: 0xF22B98
	public bool TryGetValue(string key, out JToken value) { }

	// RVA: 0xF23500 Offset: 0xF1F500 VA: 0xF23500
	public ICollection<string> get_Keys() { }

	// RVA: 0xF22874 Offset: 0xF1E874 VA: 0xF22874
	public int IndexOfReference(JToken t) { }

	// RVA: 0xF260A0 Offset: 0xF220A0 VA: 0xF260A0
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Linq
[Nullable(0)]
[NullableContext(1)]
public class JRaw : JValue // TypeDefIndex: 4362
{
	// Methods

	// RVA: 0xF26148 Offset: 0xF22148 VA: 0xF26148
	internal void .ctor(JRaw other, JsonCloneSettings settings) { }

	[NullableContext(2)]
	// RVA: 0xF2620C Offset: 0xF2220C VA: 0xF2620C
	public void .ctor(object rawJson) { }

	// RVA: 0xF26288 Offset: 0xF22288 VA: 0xF26288
	public static JRaw Create(JsonReader reader) { }

	// RVA: 0xF26604 Offset: 0xF22604 VA: 0xF26604 Slot: 11
	internal override JToken CloneToken(JsonCloneSettings settings) { }
}


// Namespace: Newtonsoft.Json.Linq
public class JsonCloneSettings // TypeDefIndex: 4363
{
	// Fields
	[Nullable(1)]
	internal static readonly JsonCloneSettings SkipCopyAnnotations; // 0x0
	[CompilerGenerated]
	private bool <CopyAnnotations>k__BackingField; // 0x10

	// Properties
	public bool CopyAnnotations { get; set; }

	// Methods

	// RVA: 0xF2666C Offset: 0xF2266C VA: 0xF2666C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0xF2668C Offset: 0xF2268C VA: 0xF2668C
	public bool get_CopyAnnotations() { }

	[CompilerGenerated]
	// RVA: 0xF26694 Offset: 0xF22694 VA: 0xF26694
	public void set_CopyAnnotations(bool value) { }

	// RVA: 0xF266A0 Offset: 0xF226A0 VA: 0xF266A0
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Linq
public class JsonLoadSettings // TypeDefIndex: 4364
{
	// Fields
	private CommentHandling _commentHandling; // 0x10
	private LineInfoHandling _lineInfoHandling; // 0x14
	private DuplicatePropertyNameHandling _duplicatePropertyNameHandling; // 0x18

	// Properties
	public CommentHandling CommentHandling { get; }
	public LineInfoHandling LineInfoHandling { get; }
	public DuplicatePropertyNameHandling DuplicatePropertyNameHandling { get; }

	// Methods

	// RVA: 0xF26700 Offset: 0xF22700 VA: 0xF26700
	public CommentHandling get_CommentHandling() { }

	// RVA: 0xF26708 Offset: 0xF22708 VA: 0xF26708
	public LineInfoHandling get_LineInfoHandling() { }

	// RVA: 0xF26710 Offset: 0xF22710 VA: 0xF26710
	public DuplicatePropertyNameHandling get_DuplicatePropertyNameHandling() { }
}


// Namespace: 
[NullableContext(0)]
private class JToken.LineInfoAnnotation // TypeDefIndex: 4365
{
	// Fields
	internal readonly int LineNumber; // 0x10
	internal readonly int LinePosition; // 0x14

	// Methods

	// RVA: 0xF2D52C Offset: 0xF2952C VA: 0xF2D52C
	public void .ctor(int lineNumber, int linePosition) { }
}


// Namespace: Newtonsoft.Json.Linq
[DefaultMember("Item")]
[NullableContext(1)]
[Nullable(0)]
public abstract class JToken : IEnumerable<JToken>, IEnumerable, IJsonLineInfo, ICloneable, IDynamicMetaObjectProvider // TypeDefIndex: 4366
{
	// Fields
	[Nullable(2)]
	private JContainer _parent; // 0x10
	[Nullable(2)]
	private JToken _previous; // 0x18
	[Nullable(2)]
	private JToken _next; // 0x20
	[Nullable(2)]
	private object _annotations; // 0x28
	private static readonly JTokenType[] BooleanTypes; // 0x0
	private static readonly JTokenType[] NumberTypes; // 0x8
	private static readonly JTokenType[] BigIntegerTypes; // 0x10
	private static readonly JTokenType[] StringTypes; // 0x18
	private static readonly JTokenType[] GuidTypes; // 0x20
	private static readonly JTokenType[] TimeSpanTypes; // 0x28
	private static readonly JTokenType[] UriTypes; // 0x30
	private static readonly JTokenType[] CharTypes; // 0x38
	private static readonly JTokenType[] DateTimeTypes; // 0x40
	private static readonly JTokenType[] BytesTypes; // 0x48

	// Properties
	[Nullable(2)]
	public JContainer Parent { get; set; }
	public JToken Root { get; }
	public abstract JTokenType Type { get; }
	public abstract bool HasValues { get; }
	[Nullable(2)]
	public JToken Next { get; set; }
	[Nullable(2)]
	public JToken Previous { get; set; }
	public string Path { get; }
	[Nullable(2)]
	public virtual JToken First { get; }
	[Nullable(2)]
	public virtual JToken Last { get; }
	private int Newtonsoft.Json.IJsonLineInfo.LineNumber { get; }
	private int Newtonsoft.Json.IJsonLineInfo.LinePosition { get; }

	// Methods

	[DebuggerStepThrough]
	[NullableContext(2)]
	// RVA: 0xF26718 Offset: 0xF22718 VA: 0xF26718
	public JContainer get_Parent() { }

	[NullableContext(2)]
	// RVA: 0xF26720 Offset: 0xF22720 VA: 0xF26720
	internal void set_Parent(JContainer value) { }

	// RVA: 0xF1FC9C Offset: 0xF1BC9C VA: 0xF1FC9C
	public JToken get_Root() { }

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract JToken CloneToken(JsonCloneSettings settings);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract JTokenType get_Type();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract bool get_HasValues();

	[NullableContext(2)]
	// RVA: 0xF26728 Offset: 0xF22728 VA: 0xF26728
	public JToken get_Next() { }

	[NullableContext(2)]
	// RVA: 0xF26730 Offset: 0xF22730 VA: 0xF26730
	internal void set_Next(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF26738 Offset: 0xF22738 VA: 0xF26738
	public JToken get_Previous() { }

	[NullableContext(2)]
	// RVA: 0xF26740 Offset: 0xF22740 VA: 0xF26740
	internal void set_Previous(JToken value) { }

	// RVA: 0xF26748 Offset: 0xF22748 VA: 0xF26748
	public string get_Path() { }

	// RVA: 0xF1F0D0 Offset: 0xF1B0D0 VA: 0xF1F0D0
	internal void .ctor() { }

	[NullableContext(2)]
	// RVA: 0xF26A7C Offset: 0xF22A7C VA: 0xF26A7C Slot: 14
	public virtual JToken get_First() { }

	[NullableContext(2)]
	// RVA: 0xF26B0C Offset: 0xF22B0C VA: 0xF26B0C Slot: 15
	public virtual JToken get_Last() { }

	// RVA: 0xF26B9C Offset: 0xF22B9C VA: 0xF26B9C Slot: 16
	public virtual JEnumerable<JToken> Children() { }

	// RVA: 0xF23584 Offset: 0xF1F584 VA: 0xF23584
	public void Remove() { }

	// RVA: 0xF2227C Offset: 0xF1E27C VA: 0xF2227C
	public void Replace(JToken value) { }

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void WriteTo(JsonWriter writer, JsonConverter[] converters);

	// RVA: 0xF26BF4 Offset: 0xF22BF4 VA: 0xF26BF4 Slot: 3
	public override string ToString() { }

	// RVA: 0xF26C8C Offset: 0xF22C8C VA: 0xF26C8C
	public string ToString(Formatting formatting, JsonConverter[] converters) { }

	// RVA: 0xF26EE4 Offset: 0xF22EE4 VA: 0xF26EE4
	private static JValue EnsureValue(JToken value) { }

	// RVA: 0xF26FF8 Offset: 0xF22FF8 VA: 0xF26FF8
	private static string GetType(JToken token) { }

	// RVA: 0xF270E8 Offset: 0xF230E8 VA: 0xF270E8
	private static bool ValidateToken(JToken o, JTokenType[] validTypes, bool nullable) { }

	// RVA: 0xF271AC Offset: 0xF231AC VA: 0xF271AC
	public static bool op_Explicit(JToken value) { }

	// RVA: 0xF273B4 Offset: 0xF233B4 VA: 0xF273B4
	public static DateTimeOffset op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF27600 Offset: 0xF23600 VA: 0xF27600
	public static Nullable<bool> op_Explicit(JToken value) { }

	// RVA: 0xF27878 Offset: 0xF23878 VA: 0xF27878
	public static long op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF27A5C Offset: 0xF23A5C VA: 0xF27A5C
	public static Nullable<DateTime> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF27C84 Offset: 0xF23C84 VA: 0xF27C84
	public static Nullable<DateTimeOffset> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF27F28 Offset: 0xF23F28 VA: 0xF27F28
	public static Nullable<Decimal> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF28180 Offset: 0xF24180 VA: 0xF28180
	public static Nullable<double> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF283A8 Offset: 0xF243A8 VA: 0xF283A8
	public static Nullable<char> op_Explicit(JToken value) { }

	// RVA: 0xF285EC Offset: 0xF245EC VA: 0xF285EC
	public static int op_Explicit(JToken value) { }

	// RVA: 0xF287D0 Offset: 0xF247D0 VA: 0xF287D0
	public static short op_Explicit(JToken value) { }

	// RVA: 0xF289B4 Offset: 0xF249B4 VA: 0xF289B4
	public static ushort op_Explicit(JToken value) { }

	// RVA: 0xF28B98 Offset: 0xF24B98 VA: 0xF28B98
	public static char op_Explicit(JToken value) { }

	// RVA: 0xF28D7C Offset: 0xF24D7C VA: 0xF28D7C
	public static byte op_Explicit(JToken value) { }

	// RVA: 0xF28F60 Offset: 0xF24F60 VA: 0xF28F60
	public static sbyte op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF29144 Offset: 0xF25144 VA: 0xF29144
	public static Nullable<int> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2936C Offset: 0xF2536C VA: 0xF2936C
	public static Nullable<short> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF295B0 Offset: 0xF255B0 VA: 0xF295B0
	public static Nullable<ushort> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF297F4 Offset: 0xF257F4 VA: 0xF297F4
	public static Nullable<byte> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF29A38 Offset: 0xF25A38 VA: 0xF29A38
	public static Nullable<sbyte> op_Explicit(JToken value) { }

	// RVA: 0xF29C7C Offset: 0xF25C7C VA: 0xF29C7C
	public static DateTime op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF29E68 Offset: 0xF25E68 VA: 0xF29E68
	public static Nullable<long> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2A090 Offset: 0xF26090 VA: 0xF2A090
	public static Nullable<float> op_Explicit(JToken value) { }

	// RVA: 0xF2A2B8 Offset: 0xF262B8 VA: 0xF2A2B8
	public static Decimal op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2A49C Offset: 0xF2649C VA: 0xF2A49C
	public static Nullable<uint> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2A6C4 Offset: 0xF266C4 VA: 0xF2A6C4
	public static Nullable<ulong> op_Explicit(JToken value) { }

	// RVA: 0xF2A8EC Offset: 0xF268EC VA: 0xF2A8EC
	public static double op_Explicit(JToken value) { }

	// RVA: 0xF2AAD0 Offset: 0xF26AD0 VA: 0xF2AAD0
	public static float op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2ACB4 Offset: 0xF26CB4 VA: 0xF2ACB4
	public static string op_Explicit(JToken value) { }

	// RVA: 0xF2AF2C Offset: 0xF26F2C VA: 0xF2AF2C
	public static uint op_Explicit(JToken value) { }

	// RVA: 0xF2B110 Offset: 0xF27110 VA: 0xF2B110
	public static ulong op_Explicit(JToken value) { }

	// RVA: 0xF2B2F4 Offset: 0xF272F4 VA: 0xF2B2F4
	public static Guid op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2B514 Offset: 0xF27514 VA: 0xF2B514
	public static Nullable<Guid> op_Explicit(JToken value) { }

	// RVA: 0xF2B798 Offset: 0xF27798 VA: 0xF2B798
	public static TimeSpan op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2B994 Offset: 0xF27994 VA: 0xF2B994
	public static Nullable<TimeSpan> op_Explicit(JToken value) { }

	[NullableContext(2)]
	// RVA: 0xF2BBD0 Offset: 0xF27BD0 VA: 0xF2BBD0
	public static Uri op_Explicit(JToken value) { }

	// RVA: 0xF2BDCC Offset: 0xF27DCC VA: 0xF2BDCC
	private static BigInteger ToBigInteger(JToken value) { }

	// RVA: 0xF2BF18 Offset: 0xF27F18 VA: 0xF2BF18
	private static Nullable<BigInteger> ToBigIntegerNullable(JToken value) { }

	// RVA: 0xF2C0BC Offset: 0xF280BC VA: 0xF2C0BC Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

	// RVA: 0xF2C150 Offset: 0xF28150 VA: 0xF2C150 Slot: 4
	private IEnumerator<JToken> System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator() { }

	// RVA: 0xF2C1E8 Offset: 0xF281E8 VA: 0xF2C1E8
	public JsonReader CreateReader() { }

	// RVA: 0xF2C2AC Offset: 0xF282AC VA: 0xF2C2AC
	public object ToObject(Type objectType) { }

	[NullableContext(2)]
	// RVA: 0xF2CF18 Offset: 0xF28F18 VA: 0xF2CF18
	public object ToObject(Type objectType, JsonSerializer jsonSerializer) { }

	// RVA: 0xF2D184 Offset: 0xF29184 VA: 0xF2D184
	public static JToken ReadFrom(JsonReader reader) { }

	// RVA: 0xF2D1DC Offset: 0xF291DC VA: 0xF2D1DC
	public static JToken ReadFrom(JsonReader reader, JsonLoadSettings settings) { }

	[NullableContext(2)]
	// RVA: 0xF1E5C4 Offset: 0xF1A5C4 VA: 0xF1E5C4
	internal void SetLineInfo(IJsonLineInfo lineInfo, JsonLoadSettings settings) { }

	// RVA: 0xF2D4BC Offset: 0xF294BC VA: 0xF2D4BC
	internal void SetLineInfo(int lineNumber, int linePosition) { }

	// RVA: 0xF2D770 Offset: 0xF29770 VA: 0xF2D770 Slot: 6
	private bool Newtonsoft.Json.IJsonLineInfo.HasLineInfo() { }

	// RVA: 0xF2D7C4 Offset: 0xF297C4 VA: 0xF2D7C4 Slot: 7
	private int Newtonsoft.Json.IJsonLineInfo.get_LineNumber() { }

	// RVA: 0xF2D818 Offset: 0xF29818 VA: 0xF2D818 Slot: 8
	private int Newtonsoft.Json.IJsonLineInfo.get_LinePosition() { }

	// RVA: 0xF2D86C Offset: 0xF2986C VA: 0xF2D86C Slot: 18
	protected virtual DynamicMetaObject GetMetaObject(Expression parameter) { }

	// RVA: 0xF2D934 Offset: 0xF29934 VA: 0xF2D934 Slot: 10
	private DynamicMetaObject System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject(Expression parameter) { }

	// RVA: 0xF2D944 Offset: 0xF29944 VA: 0xF2D944 Slot: 9
	private object System.ICloneable.Clone() { }

	// RVA: 0xF2D954 Offset: 0xF29954 VA: 0xF2D954
	public JToken DeepClone() { }

	// RVA: 0xF2D558 Offset: 0xF29558 VA: 0xF2D558
	public void AddAnnotation(object annotation) { }

	// RVA: -1 Offset: -1
	public T Annotation<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8D848 Offset: 0xB89848 VA: 0xB8D848
	|-JToken.Annotation<object>
	*/

	// RVA: 0xF1F0D8 Offset: 0xF1B0D8 VA: 0xF1F0D8
	internal void CopyAnnotations(JToken target, JToken source) { }

	// RVA: 0xF2D964 Offset: 0xF29964 VA: 0xF2D964
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(1)]
[Nullable(0)]
public class JTokenReader : JsonReader, IJsonLineInfo // TypeDefIndex: 4367
{
	// Fields
	private readonly JToken _root; // 0x78
	[Nullable(2)]
	private string _initialPath; // 0x80
	[Nullable(2)]
	private JToken _parent; // 0x88
	[Nullable(2)]
	private JToken _current; // 0x90

	// Properties
	[Nullable(2)]
	public JToken CurrentToken { get; }
	private int Newtonsoft.Json.IJsonLineInfo.LineNumber { get; }
	private int Newtonsoft.Json.IJsonLineInfo.LinePosition { get; }
	public override string Path { get; }

	// Methods

	[NullableContext(2)]
	// RVA: 0xF2DC18 Offset: 0xF29C18 VA: 0xF2DC18
	public JToken get_CurrentToken() { }

	// RVA: 0xF2C240 Offset: 0xF28240 VA: 0xF2C240
	public void .ctor(JToken token) { }

	// RVA: 0xF2DC20 Offset: 0xF29C20 VA: 0xF2DC20 Slot: 10
	public override bool Read() { }

	// RVA: 0xF2DD58 Offset: 0xF29D58 VA: 0xF2DD58
	private bool ReadOver(JToken t) { }

	// RVA: 0xF2E400 Offset: 0xF2A400 VA: 0xF2E400
	private bool ReadToEnd() { }

	// RVA: 0xF2E500 Offset: 0xF2A500 VA: 0xF2E500
	private Nullable<JsonToken> GetEndToken(JContainer c) { }

	// RVA: 0xF2DCF0 Offset: 0xF29CF0 VA: 0xF2DCF0
	private bool ReadInto(JContainer c) { }

	// RVA: 0xF2E420 Offset: 0xF2A420 VA: 0xF2E420
	private bool SetEnd(JContainer c) { }

	// RVA: 0xF2DE0C Offset: 0xF29E0C VA: 0xF2DE0C
	private void SetToken(JToken token) { }

	[NullableContext(2)]
	// RVA: 0xF2E658 Offset: 0xF2A658 VA: 0xF2E658
	private string SafeToString(object value) { }

	// RVA: 0xF2E678 Offset: 0xF2A678 VA: 0xF2E678 Slot: 21
	private bool Newtonsoft.Json.IJsonLineInfo.HasLineInfo() { }

	// RVA: 0xF2E72C Offset: 0xF2A72C VA: 0xF2E72C Slot: 22
	private int Newtonsoft.Json.IJsonLineInfo.get_LineNumber() { }

	// RVA: 0xF2E7E4 Offset: 0xF2A7E4 VA: 0xF2E7E4 Slot: 23
	private int Newtonsoft.Json.IJsonLineInfo.get_LinePosition() { }

	// RVA: 0xF2E89C Offset: 0xF2A89C VA: 0xF2E89C Slot: 9
	public override string get_Path() { }
}


// Namespace: Newtonsoft.Json.Linq
public enum JTokenType // TypeDefIndex: 4368
{
	// Fields
	public int value__; // 0x0
	public const JTokenType None = 0;
	public const JTokenType Object = 1;
	public const JTokenType Array = 2;
	public const JTokenType Constructor = 3;
	public const JTokenType Property = 4;
	public const JTokenType Comment = 5;
	public const JTokenType Integer = 6;
	public const JTokenType Float = 7;
	public const JTokenType String = 8;
	public const JTokenType Boolean = 9;
	public const JTokenType Null = 10;
	public const JTokenType Undefined = 11;
	public const JTokenType Date = 12;
	public const JTokenType Raw = 13;
	public const JTokenType Bytes = 14;
	public const JTokenType Guid = 15;
	public const JTokenType Uri = 16;
	public const JTokenType TimeSpan = 17;
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(2)]
[Nullable(0)]
public class JTokenWriter : JsonWriter // TypeDefIndex: 4369
{
	// Fields
	private JContainer _token; // 0x60
	private JContainer _parent; // 0x68
	private JValue _value; // 0x70
	private JToken _current; // 0x78

	// Properties
	public JToken Token { get; }

	// Methods

	// RVA: 0xF2E980 Offset: 0xF2A980 VA: 0xF2E980
	public JToken get_Token() { }

	// RVA: 0xF2E99C Offset: 0xF2A99C VA: 0xF2E99C
	public void .ctor() { }

	// RVA: 0xF2E9F4 Offset: 0xF2A9F4 VA: 0xF2E9F4 Slot: 6
	public override void Close() { }

	// RVA: 0xF2E9FC Offset: 0xF2A9FC VA: 0xF2E9FC Slot: 7
	public override void WriteStartObject() { }

	[NullableContext(1)]
	// RVA: 0xF2EA78 Offset: 0xF2AA78 VA: 0xF2EA78
	private void AddParent(JContainer container) { }

	// RVA: 0xF2EAB4 Offset: 0xF2AAB4 VA: 0xF2EAB4
	private void RemoveParent() { }

	// RVA: 0xF2EB04 Offset: 0xF2AB04 VA: 0xF2EB04 Slot: 9
	public override void WriteStartArray() { }

	[NullableContext(1)]
	// RVA: 0xF2EB80 Offset: 0xF2AB80 VA: 0xF2EB80 Slot: 11
	public override void WriteStartConstructor(string name) { }

	// RVA: 0xF2EC10 Offset: 0xF2AC10 VA: 0xF2EC10 Slot: 17
	protected override void WriteEnd(JsonToken token) { }

	[NullableContext(1)]
	// RVA: 0xF2EC14 Offset: 0xF2AC14 VA: 0xF2EC14 Slot: 13
	public override void WritePropertyName(string name) { }

	// RVA: 0xF2ECE8 Offset: 0xF2ACE8 VA: 0xF2ECE8
	private void AddRawValue(object value, JTokenType type, JsonToken token) { }

	// RVA: 0xF2ED58 Offset: 0xF2AD58 VA: 0xF2ED58
	internal void AddJValue(JValue value, JsonToken token) { }

	// RVA: 0xF2EDDC Offset: 0xF2ADDC VA: 0xF2EDDC Slot: 62
	public override void WriteValue(object value) { }

	// RVA: 0xF2EE6C Offset: 0xF2AE6C VA: 0xF2EE6C Slot: 21
	public override void WriteNull() { }

	// RVA: 0xF2EE90 Offset: 0xF2AE90 VA: 0xF2EE90 Slot: 22
	public override void WriteUndefined() { }

	// RVA: 0xF2EEB4 Offset: 0xF2AEB4 VA: 0xF2EEB4 Slot: 23
	public override void WriteRaw(string json) { }

	// RVA: 0xF2EF30 Offset: 0xF2AF30 VA: 0xF2EF30 Slot: 63
	public override void WriteComment(string text) { }

	// RVA: 0xF2EF64 Offset: 0xF2AF64 VA: 0xF2EF64 Slot: 25
	public override void WriteValue(string value) { }

	// RVA: 0xF2EFE8 Offset: 0xF2AFE8 VA: 0xF2EFE8 Slot: 26
	public override void WriteValue(int value) { }

	// RVA: 0xF2F068 Offset: 0xF2B068 VA: 0xF2F068 Slot: 27
	public override void WriteValue(uint value) { }

	// RVA: 0xF2F0E8 Offset: 0xF2B0E8 VA: 0xF2F0E8 Slot: 28
	public override void WriteValue(long value) { }

	// RVA: 0xF2F1D4 Offset: 0xF2B1D4 VA: 0xF2F1D4 Slot: 29
	public override void WriteValue(ulong value) { }

	// RVA: 0xF2F2B8 Offset: 0xF2B2B8 VA: 0xF2F2B8 Slot: 30
	public override void WriteValue(float value) { }

	// RVA: 0xF2F39C Offset: 0xF2B39C VA: 0xF2F39C Slot: 31
	public override void WriteValue(double value) { }

	// RVA: 0xF2F488 Offset: 0xF2B488 VA: 0xF2F488 Slot: 32
	public override void WriteValue(bool value) { }

	// RVA: 0xF2F578 Offset: 0xF2B578 VA: 0xF2F578 Slot: 33
	public override void WriteValue(short value) { }

	// RVA: 0xF2F5F8 Offset: 0xF2B5F8 VA: 0xF2F5F8 Slot: 34
	public override void WriteValue(ushort value) { }

	// RVA: 0xF2F678 Offset: 0xF2B678 VA: 0xF2F678 Slot: 35
	public override void WriteValue(char value) { }

	// RVA: 0xF2F76C Offset: 0xF2B76C VA: 0xF2F76C Slot: 36
	public override void WriteValue(byte value) { }

	// RVA: 0xF2F7EC Offset: 0xF2B7EC VA: 0xF2F7EC Slot: 37
	public override void WriteValue(sbyte value) { }

	// RVA: 0xF2F86C Offset: 0xF2B86C VA: 0xF2F86C Slot: 38
	public override void WriteValue(Decimal value) { }

	// RVA: 0xF2F96C Offset: 0xF2B96C VA: 0xF2F96C Slot: 39
	public override void WriteValue(DateTime value) { }

	// RVA: 0xF2FA90 Offset: 0xF2BA90 VA: 0xF2FA90 Slot: 40
	public override void WriteValue(DateTimeOffset value) { }

	// RVA: 0xF2FB8C Offset: 0xF2BB8C VA: 0xF2FB8C Slot: 60
	public override void WriteValue(byte[] value) { }

	// RVA: 0xF2FC08 Offset: 0xF2BC08 VA: 0xF2FC08 Slot: 42
	public override void WriteValue(TimeSpan value) { }

	// RVA: 0xF2FCEC Offset: 0xF2BCEC VA: 0xF2FCEC Slot: 41
	public override void WriteValue(Guid value) { }

	// RVA: 0xF2FDE8 Offset: 0xF2BDE8 VA: 0xF2FDE8 Slot: 61
	public override void WriteValue(Uri value) { }

	[NullableContext(1)]
	// RVA: 0xF2FEE4 Offset: 0xF2BEE4 VA: 0xF2FEE4 Slot: 16
	internal override void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) { }
}


// Namespace: 
[NullableContext(1)]
[Nullable(new[] { 0, 1 })]
private class JValue.JValueDynamicProxy : DynamicProxy<JValue> // TypeDefIndex: 4370
{
	// Methods

	// RVA: 0xF33024 Offset: 0xF2F024 VA: 0xF33024 Slot: 6
	public override bool TryConvert(JValue instance, ConvertBinder binder, out object result) { }

	// RVA: 0xF331F0 Offset: 0xF2F1F0 VA: 0xF331F0 Slot: 5
	public override bool TryBinaryOperation(JValue instance, BinaryOperationBinder binder, object arg, out object result) { }

	// RVA: 0xF32984 Offset: 0xF2E984 VA: 0xF32984
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Linq
[NullableContext(2)]
[Nullable(0)]
public class JValue : JToken, IEquatable<JValue>, IFormattable, IComparable, IComparable<JValue>, IConvertible // TypeDefIndex: 4371
{
	// Fields
	private JTokenType _valueType; // 0x30
	private object _value; // 0x38

	// Properties
	public override bool HasValues { get; }
	public override JTokenType Type { get; }
	public object Value { get; }

	// Methods

	// RVA: 0xF26214 Offset: 0xF22214 VA: 0xF26214
	internal void .ctor(object value, JTokenType type) { }

	[NullableContext(1)]
	// RVA: 0xF2614C Offset: 0xF2214C VA: 0xF2614C
	internal void .ctor(JValue other, JsonCloneSettings settings) { }

	// RVA: 0xF2F160 Offset: 0xF2B160 VA: 0xF2F160
	public void .ctor(long value) { }

	// RVA: 0xF2F8F0 Offset: 0xF2B8F0 VA: 0xF2F8F0
	public void .ctor(Decimal value) { }

	// RVA: 0xF2F24C Offset: 0xF2B24C VA: 0xF2F24C
	public void .ctor(ulong value) { }

	// RVA: 0xF2F414 Offset: 0xF2B414 VA: 0xF2F414
	public void .ctor(double value) { }

	// RVA: 0xF2F330 Offset: 0xF2B330 VA: 0xF2F330
	public void .ctor(float value) { }

	// RVA: 0xF2FA24 Offset: 0xF2BA24 VA: 0xF2FA24
	public void .ctor(DateTime value) { }

	// RVA: 0xF2FB14 Offset: 0xF2BB14 VA: 0xF2FB14
	public void .ctor(DateTimeOffset value) { }

	// RVA: 0xF2F504 Offset: 0xF2B504 VA: 0xF2F504
	public void .ctor(bool value) { }

	// RVA: 0xF2EFE0 Offset: 0xF2AFE0 VA: 0xF2EFE0
	public void .ctor(string value) { }

	// RVA: 0xF2FD70 Offset: 0xF2BD70 VA: 0xF2FD70
	public void .ctor(Guid value) { }

	// RVA: 0xF2FE60 Offset: 0xF2BE60 VA: 0xF2FE60
	public void .ctor(Uri value) { }

	// RVA: 0xF2FC80 Offset: 0xF2BC80 VA: 0xF2FC80
	public void .ctor(TimeSpan value) { }

	// RVA: 0xF21914 Offset: 0xF1D914 VA: 0xF21914
	public void .ctor(object value) { }

	// RVA: 0xF30578 Offset: 0xF2C578 VA: 0xF30578 Slot: 13
	public override bool get_HasValues() { }

	[NullableContext(1)]
	// RVA: 0xF30580 Offset: 0xF2C580 VA: 0xF30580
	private static int CompareBigInteger(BigInteger i1, object i2) { }

	// RVA: 0xF30884 Offset: 0xF2C884 VA: 0xF30884
	internal static int Compare(JTokenType valueType, object objA, object objB) { }

	[NullableContext(1)]
	// RVA: 0xF312FC Offset: 0xF2D2FC VA: 0xF312FC
	private static int CompareFloat(object objA, object objB) { }

	// RVA: 0xF313F4 Offset: 0xF2D3F4 VA: 0xF313F4
	private static bool Operation(ExpressionType operation, object objA, object objB, out object result) { }

	[NullableContext(1)]
	// RVA: 0xF31D18 Offset: 0xF2DD18 VA: 0xF31D18 Slot: 11
	internal override JToken CloneToken(JsonCloneSettings settings) { }

	[NullableContext(1)]
	// RVA: 0xF21DCC Offset: 0xF1DDCC VA: 0xF21DCC
	public static JValue CreateComment(string value) { }

	[NullableContext(1)]
	// RVA: 0xF1FC44 Offset: 0xF1BC44 VA: 0xF1FC44
	public static JValue CreateNull() { }

	[NullableContext(1)]
	// RVA: 0xF21E28 Offset: 0xF1DE28 VA: 0xF21E28
	public static JValue CreateUndefined() { }

	// RVA: 0xF3014C Offset: 0xF2C14C VA: 0xF3014C
	private static JTokenType GetValueType(Nullable<JTokenType> current, object value) { }

	// RVA: 0xF31D80 Offset: 0xF2DD80 VA: 0xF31D80
	private static JTokenType GetStringValueType(Nullable<JTokenType> current) { }

	// RVA: 0xF31E58 Offset: 0xF2DE58 VA: 0xF31E58 Slot: 12
	public override JTokenType get_Type() { }

	// RVA: 0xF31E60 Offset: 0xF2DE60 VA: 0xF31E60
	public object get_Value() { }

	[NullableContext(1)]
	// RVA: 0xF31E68 Offset: 0xF2DE68 VA: 0xF31E68 Slot: 17
	public override void WriteTo(JsonWriter writer, JsonConverter[] converters) { }

	[NullableContext(1)]
	// RVA: 0xF32638 Offset: 0xF2E638 VA: 0xF32638
	private static bool ValuesEquals(JValue v1, JValue v2) { }

	// RVA: 0xF32694 Offset: 0xF2E694 VA: 0xF32694 Slot: 19
	public bool Equals(JValue other) { }

	// RVA: 0xF326A4 Offset: 0xF2E6A4 VA: 0xF326A4 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0xF32730 Offset: 0xF2E730 VA: 0xF32730 Slot: 2
	public override int GetHashCode() { }

	[NullableContext(1)]
	// RVA: 0xF32748 Offset: 0xF2E748 VA: 0xF32748 Slot: 3
	public override string ToString() { }

	[NullableContext(1)]
	// RVA: 0xF327B0 Offset: 0xF2E7B0 VA: 0xF327B0 Slot: 38
	public string ToString(IFormatProvider formatProvider) { }

	// RVA: 0xF327BC Offset: 0xF2E7BC VA: 0xF327BC Slot: 20
	public string ToString(string format, IFormatProvider formatProvider) { }

	[NullableContext(1)]
	// RVA: 0xF328D4 Offset: 0xF2E8D4 VA: 0xF328D4 Slot: 18
	protected override DynamicMetaObject GetMetaObject(Expression parameter) { }

	// RVA: 0xF329CC Offset: 0xF2E9CC VA: 0xF329CC Slot: 21
	private int System.IComparable.CompareTo(object obj) { }

	// RVA: 0xF32A88 Offset: 0xF2EA88 VA: 0xF32A88 Slot: 22
	public int CompareTo(JValue obj) { }

	// RVA: 0xF32ACC Offset: 0xF2EACC VA: 0xF32ACC Slot: 23
	private TypeCode System.IConvertible.GetTypeCode() { }

	// RVA: 0xF32B88 Offset: 0xF2EB88 VA: 0xF32B88 Slot: 24
	private bool System.IConvertible.ToBoolean(IFormatProvider provider) { }

	// RVA: 0xF32BDC Offset: 0xF2EBDC VA: 0xF32BDC Slot: 25
	private char System.IConvertible.ToChar(IFormatProvider provider) { }

	// RVA: 0xF32C30 Offset: 0xF2EC30 VA: 0xF32C30 Slot: 26
	private sbyte System.IConvertible.ToSByte(IFormatProvider provider) { }

	// RVA: 0xF32C84 Offset: 0xF2EC84 VA: 0xF32C84 Slot: 27
	private byte System.IConvertible.ToByte(IFormatProvider provider) { }

	// RVA: 0xF32CD8 Offset: 0xF2ECD8 VA: 0xF32CD8 Slot: 28
	private short System.IConvertible.ToInt16(IFormatProvider provider) { }

	// RVA: 0xF32D2C Offset: 0xF2ED2C VA: 0xF32D2C Slot: 29
	private ushort System.IConvertible.ToUInt16(IFormatProvider provider) { }

	// RVA: 0xF32D80 Offset: 0xF2ED80 VA: 0xF32D80 Slot: 30
	private int System.IConvertible.ToInt32(IFormatProvider provider) { }

	// RVA: 0xF32DD4 Offset: 0xF2EDD4 VA: 0xF32DD4 Slot: 31
	private uint System.IConvertible.ToUInt32(IFormatProvider provider) { }

	// RVA: 0xF32E28 Offset: 0xF2EE28 VA: 0xF32E28 Slot: 32
	private long System.IConvertible.ToInt64(IFormatProvider provider) { }

	// RVA: 0xF32E7C Offset: 0xF2EE7C VA: 0xF32E7C Slot: 33
	private ulong System.IConvertible.ToUInt64(IFormatProvider provider) { }

	// RVA: 0xF32ED0 Offset: 0xF2EED0 VA: 0xF32ED0 Slot: 34
	private float System.IConvertible.ToSingle(IFormatProvider provider) { }

	// RVA: 0xF32F24 Offset: 0xF2EF24 VA: 0xF32F24 Slot: 35
	private double System.IConvertible.ToDouble(IFormatProvider provider) { }

	// RVA: 0xF32F78 Offset: 0xF2EF78 VA: 0xF32F78 Slot: 36
	private Decimal System.IConvertible.ToDecimal(IFormatProvider provider) { }

	// RVA: 0xF32FCC Offset: 0xF2EFCC VA: 0xF32FCC Slot: 37
	private DateTime System.IConvertible.ToDateTime(IFormatProvider provider) { }

	[NullableContext(1)]
	// RVA: 0xF33020 Offset: 0xF2F020 VA: 0xF33020 Slot: 39
	private object System.IConvertible.ToType(Type conversionType, IFormatProvider provider) { }
}


// Namespace: Newtonsoft.Json.Linq
public enum LineInfoHandling // TypeDefIndex: 4372
{
	// Fields
	public int value__; // 0x0
	public const LineInfoHandling Ignore = 0;
	public const LineInfoHandling Load = 1;
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class BinaryConverter : JsonConverter // TypeDefIndex: 4373
{
	// Fields
	private const string BinaryTypeName = "System.Data.Linq.Binary";
	private const string BinaryToArrayName = "ToArray";
	[Nullable(2)]
	private static ReflectionObject _reflectionObject; // 0x0

	// Methods

	// RVA: 0xF33500 Offset: 0xF2F500 VA: 0xF33500 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF33554 Offset: 0xF2F554 VA: 0xF33554
	private byte[] GetByteArray(object value) { }

	// RVA: 0xF3373C Offset: 0xF2F73C VA: 0xF3373C
	private static void EnsureReflectionObject(Type t) { }

	// RVA: 0xF338C8 Offset: 0xF2F8C8 VA: 0xF338C8 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF33CB4 Offset: 0xF2FCB4 VA: 0xF33CB4
	private byte[] ReadByteArray(JsonReader reader) { }

	// RVA: 0xF33F04 Offset: 0xF2FF04 VA: 0xF33F04 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF3401C Offset: 0xF3001C VA: 0xF3401C
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonObjectIdConverter : JsonConverter // TypeDefIndex: 4374
{
	// Methods

	// RVA: 0xF34024 Offset: 0xF30024 VA: 0xF34024 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF34124 Offset: 0xF30124 VA: 0xF34124 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF342A8 Offset: 0xF302A8 VA: 0xF342A8 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF34330 Offset: 0xF30330 VA: 0xF34330
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public abstract class CustomCreationConverter<T> : JsonConverter // TypeDefIndex: 4375
{
	// Properties
	public override bool CanWrite { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF514C Offset: 0xBF114C VA: 0xBF514C
	|-CustomCreationConverter<__Il2CppFullySharedGenericType>.WriteJson
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF5194 Offset: 0xBF1194 VA: 0xBF5194
	|-CustomCreationConverter<__Il2CppFullySharedGenericType>.ReadJson
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public abstract T Create(Type objectType);

	// RVA: -1 Offset: -1 Slot: 6
	public override bool CanConvert(Type objectType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF5370 Offset: 0xBF1370 VA: 0xBF5370
	|-CustomCreationConverter<__Il2CppFullySharedGenericType>.CanConvert
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public override bool get_CanWrite() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF53FC Offset: 0xBF13FC VA: 0xBF53FC
	|-CustomCreationConverter<__Il2CppFullySharedGenericType>.get_CanWrite
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF5404 Offset: 0xBF1404 VA: 0xBF5404
	|-CustomCreationConverter<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class DataSetConverter : JsonConverter // TypeDefIndex: 4376
{
	// Methods

	// RVA: 0xF34338 Offset: 0xF30338 VA: 0xF34338 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF347C8 Offset: 0xF307C8 VA: 0xF347C8 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF34AB0 Offset: 0xF30AB0 VA: 0xF34AB0 Slot: 6
	public override bool CanConvert(Type valueType) { }

	// RVA: 0xF34B44 Offset: 0xF30B44 VA: 0xF34B44
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class DataTableConverter : JsonConverter // TypeDefIndex: 4377
{
	// Methods

	// RVA: 0xF34B4C Offset: 0xF30B4C VA: 0xF34B4C Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF35348 Offset: 0xF31348 VA: 0xF35348 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF35634 Offset: 0xF31634 VA: 0xF35634
	private static void CreateRow(JsonReader reader, DataTable dt, JsonSerializer serializer) { }

	// RVA: 0xF35B0C Offset: 0xF31B0C VA: 0xF35B0C
	private static Type GetColumnDataType(JsonReader reader) { }

	// RVA: 0xF35CD8 Offset: 0xF31CD8 VA: 0xF35CD8 Slot: 6
	public override bool CanConvert(Type valueType) { }

	// RVA: 0xF347C0 Offset: 0xF307C0 VA: 0xF347C0
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
public abstract class DateTimeConverterBase : JsonConverter // TypeDefIndex: 4378
{
	// Methods

	[NullableContext(1)]
	// RVA: 0xF35D6C Offset: 0xF31D6C VA: 0xF35D6C Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF35EE0 Offset: 0xF31EE0 VA: 0xF35EE0
	protected void .ctor() { }
}


// Namespace: 
[Nullable(0)]
internal class DiscriminatedUnionConverter.Union // TypeDefIndex: 4379
{
	// Fields
	public readonly FSharpFunction TagReader; // 0x10
	public readonly List<DiscriminatedUnionConverter.UnionCase> Cases; // 0x18

	// Methods

	// RVA: 0xF36870 Offset: 0xF32870 VA: 0xF36870
	public void .ctor(FSharpFunction tagReader, List<DiscriminatedUnionConverter.UnionCase> cases) { }
}


// Namespace: 
[Nullable(0)]
internal class DiscriminatedUnionConverter.UnionCase // TypeDefIndex: 4380
{
	// Fields
	public readonly int Tag; // 0x10
	public readonly string Name; // 0x18
	public readonly PropertyInfo[] Fields; // 0x20
	public readonly FSharpFunction FieldReader; // 0x28
	public readonly FSharpFunction Constructor; // 0x30

	// Methods

	// RVA: 0xF3689C Offset: 0xF3289C VA: 0xF3689C
	public void .ctor(int tag, string name, PropertyInfo[] fields, FSharpFunction fieldReader, FSharpFunction constructor) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DiscriminatedUnionConverter.<>c__DisplayClass8_0 // TypeDefIndex: 4381
{
	// Fields
	public int tag; // 0x10

	// Methods

	// RVA: 0xF36D8C Offset: 0xF32D8C VA: 0xF36D8C
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xF377E4 Offset: 0xF337E4 VA: 0xF377E4
	internal bool <WriteJson>b__0(DiscriminatedUnionConverter.UnionCase c) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class DiscriminatedUnionConverter.<>c__DisplayClass9_0 // TypeDefIndex: 4382
{
	// Fields
	[Nullable(0)]
	public string caseName; // 0x10
	[Nullable(0)]
	public Func<DiscriminatedUnionConverter.UnionCase, bool> <>9__0; // 0x18

	// Methods

	// RVA: 0xF373B8 Offset: 0xF333B8 VA: 0xF373B8
	public void .ctor() { }

	[NullableContext(0)]
	// RVA: 0xF37808 Offset: 0xF33808 VA: 0xF37808
	internal bool <ReadJson>b__0(DiscriminatedUnionConverter.UnionCase c) { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class DiscriminatedUnionConverter : JsonConverter // TypeDefIndex: 4383
{
	// Fields
	private const string CasePropertyName = "Case";
	private const string FieldsPropertyName = "Fields";
	private static readonly ThreadSafeStore<Type, DiscriminatedUnionConverter.Union> UnionCache; // 0x0
	private static readonly ThreadSafeStore<Type, Type> UnionTypeLookupCache; // 0x8

	// Methods

	// RVA: 0xF35EE8 Offset: 0xF31EE8 VA: 0xF35EE8
	private static Type CreateUnionTypeLookup(Type t) { }

	// RVA: 0xF36104 Offset: 0xF32104 VA: 0xF36104
	private static DiscriminatedUnionConverter.Union CreateUnion(Type t) { }

	// RVA: 0xF368EC Offset: 0xF328EC VA: 0xF368EC Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF36D94 Offset: 0xF32D94 VA: 0xF36D94 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF373C0 Offset: 0xF333C0 VA: 0xF373C0 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF37660 Offset: 0xF33660 VA: 0xF37660
	public void .ctor() { }

	// RVA: 0xF37668 Offset: 0xF33668 VA: 0xF37668
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
public class EntityKeyMemberConverter : JsonConverter // TypeDefIndex: 4384
{
	// Fields
	private const string EntityKeyMemberFullTypeName = "System.Data.EntityKeyMember";
	private const string KeyPropertyName = "Key";
	private const string TypePropertyName = "Type";
	private const string ValuePropertyName = "Value";
	[Nullable(2)]
	private static ReflectionObject _reflectionObject; // 0x0

	// Methods

	// RVA: 0xF3782C Offset: 0xF3382C VA: 0xF3782C Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF37C60 Offset: 0xF33C60 VA: 0xF37C60
	private static void ReadAndAssertProperty(JsonReader reader, string propertyName) { }

	// RVA: 0xF37D4C Offset: 0xF33D4C VA: 0xF37D4C Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF37B80 Offset: 0xF33B80 VA: 0xF37B80
	private static void EnsureReflectionObject(Type objectType) { }

	// RVA: 0xF38004 Offset: 0xF34004 VA: 0xF38004 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF38054 Offset: 0xF34054 VA: 0xF38054
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
public class ExpandoObjectConverter : JsonConverter // TypeDefIndex: 4385
{
	// Properties
	public override bool CanWrite { get; }

	// Methods

	// RVA: 0xF3805C Offset: 0xF3405C VA: 0xF3805C Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF38060 Offset: 0xF34060 VA: 0xF38060 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF38064 Offset: 0xF34064 VA: 0xF38064
	private object ReadValue(JsonReader reader) { }

	// RVA: 0xF3837C Offset: 0xF3437C VA: 0xF3837C
	private object ReadList(JsonReader reader) { }

	// RVA: 0xF381C0 Offset: 0xF341C0 VA: 0xF381C0
	private object ReadObject(JsonReader reader) { }

	// RVA: 0xF38504 Offset: 0xF34504 VA: 0xF38504 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF3858C Offset: 0xF3458C VA: 0xF3858C Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0xF38594 Offset: 0xF34594 VA: 0xF38594
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class IsoDateTimeConverter : DateTimeConverterBase // TypeDefIndex: 4386
{
	// Fields
	private const string DefaultDateTimeFormat = "yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK";
	private DateTimeStyles _dateTimeStyles; // 0x10
	[Nullable(2)]
	private string _dateTimeFormat; // 0x18
	[Nullable(2)]
	private CultureInfo _culture; // 0x20

	// Properties
	public DateTimeStyles DateTimeStyles { get; set; }
	[Nullable(2)]
	public string DateTimeFormat { get; set; }
	public CultureInfo Culture { get; set; }

	// Methods

	// RVA: 0xF3859C Offset: 0xF3459C VA: 0xF3859C
	public DateTimeStyles get_DateTimeStyles() { }

	// RVA: 0xF385A4 Offset: 0xF345A4 VA: 0xF385A4
	public void set_DateTimeStyles(DateTimeStyles value) { }

	[NullableContext(2)]
	// RVA: 0xF385AC Offset: 0xF345AC VA: 0xF385AC
	public string get_DateTimeFormat() { }

	[NullableContext(2)]
	// RVA: 0xF38600 Offset: 0xF34600 VA: 0xF38600
	public void set_DateTimeFormat(string value) { }

	// RVA: 0xF3863C Offset: 0xF3463C VA: 0xF3863C
	public CultureInfo get_Culture() { }

	// RVA: 0xF386A4 Offset: 0xF346A4 VA: 0xF386A4
	public void set_Culture(CultureInfo value) { }

	// RVA: 0xF386AC Offset: 0xF346AC VA: 0xF386AC Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF38914 Offset: 0xF34914 VA: 0xF38914 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF38E1C Offset: 0xF34E1C VA: 0xF38E1C
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class JavaScriptDateTimeConverter : DateTimeConverterBase // TypeDefIndex: 4387
{
	// Methods

	// RVA: 0xF38E2C Offset: 0xF34E2C VA: 0xF38E2C Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF39008 Offset: 0xF35008 VA: 0xF39008 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF39334 Offset: 0xF35334 VA: 0xF39334
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class KeyValuePairConverter : JsonConverter // TypeDefIndex: 4388
{
	// Fields
	private const string KeyName = "Key";
	private const string ValueName = "Value";
	private static readonly ThreadSafeStore<Type, ReflectionObject> ReflectionObjectPerType; // 0x0

	// Methods

	// RVA: 0xF3933C Offset: 0xF3533C VA: 0xF3933C
	private static ReflectionObject InitializeReflectionObject(Type t) { }

	// RVA: 0xF39584 Offset: 0xF35584 VA: 0xF39584 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF39800 Offset: 0xF35800 VA: 0xF39800 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF39CA0 Offset: 0xF35CA0 VA: 0xF39CA0 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF39DB8 Offset: 0xF35DB8 VA: 0xF39DB8
	public void .ctor() { }

	// RVA: 0xF39DC0 Offset: 0xF35DC0 VA: 0xF39DC0
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class RegexConverter : JsonConverter // TypeDefIndex: 4389
{
	// Fields
	private const string PatternName = "Pattern";
	private const string OptionsName = "Options";

	// Methods

	// RVA: 0xF39E9C Offset: 0xF35E9C VA: 0xF39E9C Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF3A2AC Offset: 0xF362AC VA: 0xF3A2AC
	private bool HasFlag(RegexOptions options, RegexOptions flag) { }

	// RVA: 0xF39FBC Offset: 0xF35FBC VA: 0xF39FBC
	private void WriteBson(BsonWriter writer, Regex regex) { }

	// RVA: 0xF3A0F0 Offset: 0xF360F0 VA: 0xF3A0F0
	private void WriteJson(JsonWriter writer, Regex regex, JsonSerializer serializer) { }

	// RVA: 0xF3A368 Offset: 0xF36368 VA: 0xF3A368 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF3A6AC Offset: 0xF366AC VA: 0xF3A6AC
	private object ReadRegexString(JsonReader reader) { }

	// RVA: 0xF3A414 Offset: 0xF36414 VA: 0xF3A414
	private Regex ReadRegexObject(JsonReader reader, JsonSerializer serializer) { }

	// RVA: 0xF3A810 Offset: 0xF36810 VA: 0xF3A810 Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF3A88C Offset: 0xF3688C VA: 0xF3A88C
	private bool IsRegex(Type objectType) { }

	// RVA: 0xF3A914 Offset: 0xF36914 VA: 0xF3A914
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
public class StringEnumConverter : JsonConverter // TypeDefIndex: 4390
{
	// Fields
	[CompilerGenerated]
	[Nullable(2)]
	private NamingStrategy <NamingStrategy>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <AllowIntegerValues>k__BackingField; // 0x18

	// Properties
	[Obsolete("StringEnumConverter.CamelCaseText is obsolete. Set StringEnumConverter.NamingStrategy with CamelCaseNamingStrategy instead.")]
	public bool CamelCaseText { get; set; }
	[Nullable(2)]
	public NamingStrategy NamingStrategy { get; set; }
	public bool AllowIntegerValues { get; set; }

	// Methods

	// RVA: 0xF3A91C Offset: 0xF3691C VA: 0xF3A91C
	public bool get_CamelCaseText() { }

	// RVA: 0xF3A998 Offset: 0xF36998 VA: 0xF3A998
	public void set_CamelCaseText(bool value) { }

	[CompilerGenerated]
	[NullableContext(2)]
	// RVA: 0xF3AA48 Offset: 0xF36A48 VA: 0xF3AA48
	public NamingStrategy get_NamingStrategy() { }

	[NullableContext(2)]
	[CompilerGenerated]
	// RVA: 0xF3AA50 Offset: 0xF36A50 VA: 0xF3AA50
	public void set_NamingStrategy(NamingStrategy value) { }

	[CompilerGenerated]
	// RVA: 0xF3AA58 Offset: 0xF36A58 VA: 0xF3AA58
	public bool get_AllowIntegerValues() { }

	[CompilerGenerated]
	// RVA: 0xF3AA60 Offset: 0xF36A60 VA: 0xF3AA60
	public void set_AllowIntegerValues(bool value) { }

	// RVA: 0xF3AA6C Offset: 0xF36A6C VA: 0xF3AA6C
	public void .ctor() { }

	[Obsolete("StringEnumConverter(bool) is obsolete. Create a converter with StringEnumConverter(NamingStrategy, bool) instead.")]
	// RVA: 0xF3AA7C Offset: 0xF36A7C VA: 0xF3AA7C
	public void .ctor(bool camelCaseText) { }

	// RVA: 0xF3AAF0 Offset: 0xF36AF0 VA: 0xF3AAF0
	public void .ctor(NamingStrategy namingStrategy, bool allowIntegerValues = True) { }

	// RVA: 0xF3AB2C Offset: 0xF36B2C VA: 0xF3AB2C
	public void .ctor(Type namingStrategyType) { }

	// RVA: 0xF3ABD4 Offset: 0xF36BD4 VA: 0xF3ABD4
	public void .ctor(Type namingStrategyType, object[] namingStrategyParameters) { }

	// RVA: 0xF3AC88 Offset: 0xF36C88 VA: 0xF3AC88
	public void .ctor(Type namingStrategyType, object[] namingStrategyParameters, bool allowIntegerValues) { }

	// RVA: 0xF3AD48 Offset: 0xF36D48 VA: 0xF3AD48 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF3AF38 Offset: 0xF36F38 VA: 0xF3AF38 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF3B3A8 Offset: 0xF373A8 VA: 0xF3B3A8 Slot: 6
	public override bool CanConvert(Type objectType) { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
public class UnixDateTimeConverter : DateTimeConverterBase // TypeDefIndex: 4391
{
	// Fields
	internal static readonly DateTime UnixEpoch; // 0x0
	[CompilerGenerated]
	private bool <AllowPreEpoch>k__BackingField; // 0x10

	// Properties
	public bool AllowPreEpoch { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF3B420 Offset: 0xF37420 VA: 0xF3B420
	public bool get_AllowPreEpoch() { }

	[CompilerGenerated]
	// RVA: 0xF3B428 Offset: 0xF37428 VA: 0xF3B428
	public void set_AllowPreEpoch(bool value) { }

	// RVA: 0xF3B434 Offset: 0xF37434 VA: 0xF3B434
	public void .ctor() { }

	// RVA: 0xF3B450 Offset: 0xF37450 VA: 0xF3B450
	public void .ctor(bool allowPreEpoch) { }

	// RVA: 0xF3B47C Offset: 0xF3747C VA: 0xF3B47C Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF3B6E0 Offset: 0xF376E0 VA: 0xF3B6E0 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF3BAE4 Offset: 0xF37AE4 VA: 0xF3BAE4
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
public class VersionConverter : JsonConverter // TypeDefIndex: 4392
{
	// Methods

	// RVA: 0xF3BB60 Offset: 0xF37B60 VA: 0xF3BB60 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF3BC48 Offset: 0xF37C48 VA: 0xF3BC48 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF3BECC Offset: 0xF37ECC VA: 0xF3BECC Slot: 6
	public override bool CanConvert(Type objectType) { }

	// RVA: 0xF3BF54 Offset: 0xF37F54 VA: 0xF3BF54
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
internal class XmlDocumentWrapper : XmlNodeWrapper, IXmlDocument, IXmlNode // TypeDefIndex: 4393
{
	// Fields
	private readonly XmlDocument _document; // 0x28

	// Properties
	[Nullable(2)]
	public IXmlElement DocumentElement { get; }

	// Methods

	// RVA: 0xF3BF5C Offset: 0xF37F5C VA: 0xF3BF5C
	public void .ctor(XmlDocument document) { }

	// RVA: 0xF3BFB0 Offset: 0xF37FB0 VA: 0xF3BFB0 Slot: 15
	public IXmlNode CreateComment(string data) { }

	// RVA: 0xF3C038 Offset: 0xF38038 VA: 0xF3C038 Slot: 16
	public IXmlNode CreateTextNode(string text) { }

	// RVA: 0xF3C0C0 Offset: 0xF380C0 VA: 0xF3C0C0 Slot: 17
	public IXmlNode CreateCDataSection(string data) { }

	// RVA: 0xF3C148 Offset: 0xF38148 VA: 0xF3C148 Slot: 18
	public IXmlNode CreateWhitespace(string text) { }

	// RVA: 0xF3C1D0 Offset: 0xF381D0 VA: 0xF3C1D0 Slot: 19
	public IXmlNode CreateSignificantWhitespace(string text) { }

	// RVA: 0xF3C258 Offset: 0xF38258 VA: 0xF3C258 Slot: 20
	public IXmlNode CreateXmlDeclaration(string version, string encoding, string standalone) { }

	[NullableContext(2)]
	// RVA: 0xF3C328 Offset: 0xF38328 VA: 0xF3C328 Slot: 21
	public IXmlNode CreateXmlDocumentType(string name, string publicId, string systemId, string internalSubset) { }

	// RVA: 0xF3C3FC Offset: 0xF383FC VA: 0xF3C3FC Slot: 22
	public IXmlNode CreateProcessingInstruction(string target, string data) { }

	// RVA: 0xF3C494 Offset: 0xF38494 VA: 0xF3C494 Slot: 23
	public IXmlElement CreateElement(string elementName) { }

	// RVA: 0xF3C544 Offset: 0xF38544 VA: 0xF3C544 Slot: 24
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri) { }

	// RVA: 0xF3C5D8 Offset: 0xF385D8 VA: 0xF3C5D8 Slot: 25
	public IXmlNode CreateAttribute(string name, string value) { }

	// RVA: 0xF3C69C Offset: 0xF3869C VA: 0xF3C69C Slot: 26
	public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value) { }

	[NullableContext(2)]
	// RVA: 0xF3C748 Offset: 0xF38748 VA: 0xF3C748 Slot: 27
	public IXmlElement get_DocumentElement() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
internal class XmlElementWrapper : XmlNodeWrapper, IXmlElement, IXmlNode // TypeDefIndex: 4394
{
	// Fields
	private readonly XmlElement _element; // 0x28

	// Properties
	public bool IsEmpty { get; }

	// Methods

	// RVA: 0xF3C518 Offset: 0xF38518 VA: 0xF3C518
	public void .ctor(XmlElement element) { }

	// RVA: 0xF3C7E0 Offset: 0xF387E0 VA: 0xF3C7E0 Slot: 15
	public void SetAttributeNode(IXmlNode attribute) { }

	// RVA: 0xF3C8C8 Offset: 0xF388C8 VA: 0xF3C8C8 Slot: 16
	public string GetPrefixOfNamespace(string namespaceUri) { }

	// RVA: 0xF3C8EC Offset: 0xF388EC VA: 0xF3C8EC Slot: 17
	public bool get_IsEmpty() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(2)]
internal class XmlDeclarationWrapper : XmlNodeWrapper, IXmlDeclaration, IXmlNode // TypeDefIndex: 4395
{
	// Fields
	[Nullable(1)]
	private readonly XmlDeclaration _declaration; // 0x28

	// Properties
	public string Version { get; }
	public string Encoding { get; }
	public string Standalone { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3C2FC Offset: 0xF382FC VA: 0xF3C2FC
	public void .ctor(XmlDeclaration declaration) { }

	// RVA: 0xF3C908 Offset: 0xF38908 VA: 0xF3C908 Slot: 15
	public string get_Version() { }

	// RVA: 0xF3C924 Offset: 0xF38924 VA: 0xF3C924 Slot: 16
	public string get_Encoding() { }

	// RVA: 0xF3C940 Offset: 0xF38940 VA: 0xF3C940 Slot: 17
	public string get_Standalone() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(2)]
internal class XmlDocumentTypeWrapper : XmlNodeWrapper, IXmlDocumentType, IXmlNode // TypeDefIndex: 4396
{
	// Fields
	[Nullable(1)]
	private readonly XmlDocumentType _documentType; // 0x28

	// Properties
	[Nullable(1)]
	public string Name { get; }
	public string System { get; }
	public string Public { get; }
	public string InternalSubset { get; }
	public override string LocalName { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3C3D0 Offset: 0xF383D0 VA: 0xF3C3D0
	public void .ctor(XmlDocumentType documentType) { }

	[NullableContext(1)]
	// RVA: 0xF3C95C Offset: 0xF3895C VA: 0xF3C95C Slot: 15
	public string get_Name() { }

	// RVA: 0xF3C97C Offset: 0xF3897C VA: 0xF3C97C Slot: 16
	public string get_System() { }

	// RVA: 0xF3C998 Offset: 0xF38998 VA: 0xF3C998 Slot: 17
	public string get_Public() { }

	// RVA: 0xF3C9B4 Offset: 0xF389B4 VA: 0xF3C9B4 Slot: 18
	public string get_InternalSubset() { }

	// RVA: 0xF3C9D0 Offset: 0xF389D0 VA: 0xF3C9D0 Slot: 13
	public override string get_LocalName() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(2)]
internal class XmlNodeWrapper : IXmlNode // TypeDefIndex: 4397
{
	// Fields
	[Nullable(1)]
	private readonly XmlNode _node; // 0x10
	[Nullable(new[] { 2, 1 })]
	private List<IXmlNode> _childNodes; // 0x18
	[Nullable(new[] { 2, 1 })]
	private List<IXmlNode> _attributes; // 0x20

	// Properties
	public object WrappedNode { get; }
	public XmlNodeType NodeType { get; }
	public virtual string LocalName { get; }
	[Nullable(1)]
	public List<IXmlNode> ChildNodes { get; }
	[Nullable(1)]
	public List<IXmlNode> Attributes { get; }
	private bool HasAttributes { get; }
	public IXmlNode ParentNode { get; }
	public string Value { get; set; }
	public string NamespaceUri { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3BF88 Offset: 0xF37F88 VA: 0xF3BF88
	public void .ctor(XmlNode node) { }

	// RVA: 0xF3CA10 Offset: 0xF38A10 VA: 0xF3CA10 Slot: 12
	public object get_WrappedNode() { }

	// RVA: 0xF3CA18 Offset: 0xF38A18 VA: 0xF3CA18 Slot: 4
	public XmlNodeType get_NodeType() { }

	// RVA: 0xF3CA38 Offset: 0xF38A38 VA: 0xF3CA38 Slot: 13
	public virtual string get_LocalName() { }

	[NullableContext(1)]
	// RVA: 0xF3CA5C Offset: 0xF38A5C VA: 0xF3CA5C Slot: 6
	public List<IXmlNode> get_ChildNodes() { }

	[NullableContext(1)]
	// RVA: 0xF3CE44 Offset: 0xF38E44 VA: 0xF3CE44
	internal static IXmlNode WrapNode(XmlNode node) { }

	[NullableContext(1)]
	// RVA: 0xF3CFB8 Offset: 0xF38FB8 VA: 0xF3CFB8 Slot: 7
	public List<IXmlNode> get_Attributes() { }

	// RVA: 0xF3D398 Offset: 0xF39398 VA: 0xF3D398
	private bool get_HasAttributes() { }

	// RVA: 0xF3D44C Offset: 0xF3944C VA: 0xF3D44C Slot: 8
	public IXmlNode get_ParentNode() { }

	// RVA: 0xF3D4EC Offset: 0xF394EC VA: 0xF3D4EC Slot: 9
	public string get_Value() { }

	// RVA: 0xF3C67C Offset: 0xF3867C VA: 0xF3C67C Slot: 14
	public void set_Value(string value) { }

	[NullableContext(1)]
	// RVA: 0xF3D50C Offset: 0xF3950C VA: 0xF3D50C Slot: 10
	public IXmlNode AppendChild(IXmlNode newChild) { }

	// RVA: 0xF3D5B0 Offset: 0xF395B0 VA: 0xF3D5B0 Slot: 11
	public string get_NamespaceUri() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
internal interface IXmlDocument : IXmlNode // TypeDefIndex: 4398
{
	// Properties
	[Nullable(2)]
	public abstract IXmlElement DocumentElement { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IXmlNode CreateComment(string text);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract IXmlNode CreateTextNode(string text);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract IXmlNode CreateCDataSection(string data);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract IXmlNode CreateWhitespace(string text);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract IXmlNode CreateSignificantWhitespace(string text);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract IXmlNode CreateXmlDeclaration(string version, string encoding, string standalone);

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract IXmlNode CreateXmlDocumentType(string name, string publicId, string systemId, string internalSubset);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract IXmlNode CreateProcessingInstruction(string target, string data);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract IXmlElement CreateElement(string elementName);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract IXmlElement CreateElement(string qualifiedName, string namespaceUri);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract IXmlNode CreateAttribute(string name, string value);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value);

	[NullableContext(2)]
	// RVA: -1 Offset: -1 Slot: 12
	public abstract IXmlElement get_DocumentElement();
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
internal interface IXmlDeclaration : IXmlNode // TypeDefIndex: 4399
{
	// Properties
	public abstract string Version { get; }
	public abstract string Encoding { get; }
	public abstract string Standalone { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Version();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_Encoding();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_Standalone();
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
internal interface IXmlDocumentType : IXmlNode // TypeDefIndex: 4400
{
	// Properties
	[Nullable(1)]
	public abstract string Name { get; }
	public abstract string System { get; }
	public abstract string Public { get; }
	public abstract string InternalSubset { get; }

	// Methods

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Name();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_System();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_Public();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string get_InternalSubset();
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
internal interface IXmlElement : IXmlNode // TypeDefIndex: 4401
{
	// Properties
	public abstract bool IsEmpty { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetAttributeNode(IXmlNode attribute);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string GetPrefixOfNamespace(string namespaceUri);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool get_IsEmpty();
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
internal interface IXmlNode // TypeDefIndex: 4402
{
	// Properties
	public abstract XmlNodeType NodeType { get; }
	public abstract string LocalName { get; }
	[Nullable(1)]
	public abstract List<IXmlNode> ChildNodes { get; }
	[Nullable(1)]
	public abstract List<IXmlNode> Attributes { get; }
	public abstract IXmlNode ParentNode { get; }
	public abstract string Value { get; }
	public abstract string NamespaceUri { get; }
	public abstract object WrappedNode { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract XmlNodeType get_NodeType();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract string get_LocalName();

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract List<IXmlNode> get_ChildNodes();

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract List<IXmlNode> get_Attributes();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract IXmlNode get_ParentNode();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract string get_Value();

	[NullableContext(1)]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract IXmlNode AppendChild(IXmlNode newChild);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract string get_NamespaceUri();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract object get_WrappedNode();
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
[Nullable(0)]
internal class XDeclarationWrapper : XObjectWrapper, IXmlDeclaration, IXmlNode // TypeDefIndex: 4403
{
	// Fields
	[CompilerGenerated]
	[Nullable(1)]
	private readonly XDeclaration <Declaration>k__BackingField; // 0x18

	// Properties
	[Nullable(1)]
	internal XDeclaration Declaration { get; }
	public override XmlNodeType NodeType { get; }
	public string Version { get; }
	public string Encoding { get; }
	public string Standalone { get; }

	// Methods

	[NullableContext(1)]
	[CompilerGenerated]
	// RVA: 0xF3D5D4 Offset: 0xF395D4 VA: 0xF3D5D4
	internal XDeclaration get_Declaration() { }

	[NullableContext(1)]
	// RVA: 0xF3D5DC Offset: 0xF395DC VA: 0xF3D5DC
	public void .ctor(XDeclaration declaration) { }

	// RVA: 0xF3D62C Offset: 0xF3962C VA: 0xF3D62C Slot: 13
	public override XmlNodeType get_NodeType() { }

	// RVA: 0xF3D634 Offset: 0xF39634 VA: 0xF3D634 Slot: 21
	public string get_Version() { }

	// RVA: 0xF3D650 Offset: 0xF39650 VA: 0xF3D650 Slot: 22
	public string get_Encoding() { }

	// RVA: 0xF3D66C Offset: 0xF3966C VA: 0xF3D66C Slot: 23
	public string get_Standalone() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
[Nullable(0)]
internal class XDocumentTypeWrapper : XObjectWrapper, IXmlDocumentType, IXmlNode // TypeDefIndex: 4404
{
	// Fields
	[Nullable(1)]
	private readonly XDocumentType _documentType; // 0x18

	// Properties
	[Nullable(1)]
	public string Name { get; }
	public string System { get; }
	public string Public { get; }
	public string InternalSubset { get; }
	public override string LocalName { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3D688 Offset: 0xF39688 VA: 0xF3D688
	public void .ctor(XDocumentType documentType) { }

	[NullableContext(1)]
	// RVA: 0xF3D6B0 Offset: 0xF396B0 VA: 0xF3D6B0 Slot: 21
	public string get_Name() { }

	// RVA: 0xF3D6CC Offset: 0xF396CC VA: 0xF3D6CC Slot: 22
	public string get_System() { }

	// RVA: 0xF3D6E8 Offset: 0xF396E8 VA: 0xF3D6E8 Slot: 23
	public string get_Public() { }

	// RVA: 0xF3D704 Offset: 0xF39704 VA: 0xF3D704 Slot: 24
	public string get_InternalSubset() { }

	// RVA: 0xF3D720 Offset: 0xF39720 VA: 0xF3D720 Slot: 14
	public override string get_LocalName() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
internal class XDocumentWrapper : XContainerWrapper, IXmlDocument, IXmlNode // TypeDefIndex: 4405
{
	// Properties
	private XDocument Document { get; }
	public override List<IXmlNode> ChildNodes { get; }
	protected override bool HasChildNodes { get; }
	[Nullable(2)]
	public IXmlElement DocumentElement { get; }

	// Methods

	// RVA: 0xF3D760 Offset: 0xF39760 VA: 0xF3D760
	private XDocument get_Document() { }

	// RVA: 0xF3D7D8 Offset: 0xF397D8 VA: 0xF3D7D8
	public void .ctor(XDocument document) { }

	// RVA: 0xF3D828 Offset: 0xF39828 VA: 0xF3D828 Slot: 15
	public override List<IXmlNode> get_ChildNodes() { }

	// RVA: 0xF3DD60 Offset: 0xF39D60 VA: 0xF3DD60 Slot: 21
	protected override bool get_HasChildNodes() { }

	// RVA: 0xF3DDC4 Offset: 0xF39DC4 VA: 0xF3DDC4 Slot: 22
	public IXmlNode CreateComment(string text) { }

	// RVA: 0xF3DE54 Offset: 0xF39E54 VA: 0xF3DE54 Slot: 23
	public IXmlNode CreateTextNode(string text) { }

	// RVA: 0xF3DEE4 Offset: 0xF39EE4 VA: 0xF3DEE4 Slot: 24
	public IXmlNode CreateCDataSection(string data) { }

	// RVA: 0xF3DF74 Offset: 0xF39F74 VA: 0xF3DF74 Slot: 25
	public IXmlNode CreateWhitespace(string text) { }

	// RVA: 0xF3E004 Offset: 0xF3A004 VA: 0xF3E004 Slot: 26
	public IXmlNode CreateSignificantWhitespace(string text) { }

	// RVA: 0xF3E094 Offset: 0xF3A094 VA: 0xF3E094 Slot: 27
	public IXmlNode CreateXmlDeclaration(string version, string encoding, string standalone) { }

	[NullableContext(2)]
	// RVA: 0xF3E13C Offset: 0xF3A13C VA: 0xF3E13C Slot: 28
	public IXmlNode CreateXmlDocumentType(string name, string publicId, string systemId, string internalSubset) { }

	// RVA: 0xF3E1EC Offset: 0xF3A1EC VA: 0xF3E1EC Slot: 29
	public IXmlNode CreateProcessingInstruction(string target, string data) { }

	// RVA: 0xF3E2AC Offset: 0xF3A2AC VA: 0xF3E2AC Slot: 30
	public IXmlElement CreateElement(string elementName) { }

	// RVA: 0xF3E378 Offset: 0xF3A378 VA: 0xF3E378 Slot: 31
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri) { }

	// RVA: 0xF3E42C Offset: 0xF3A42C VA: 0xF3E42C Slot: 32
	public IXmlNode CreateAttribute(string name, string value) { }

	// RVA: 0xF3E500 Offset: 0xF3A500 VA: 0xF3E500 Slot: 33
	public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value) { }

	[NullableContext(2)]
	// RVA: 0xF3E5C4 Offset: 0xF3A5C4 VA: 0xF3E5C4 Slot: 34
	public IXmlElement get_DocumentElement() { }

	// RVA: 0xF3E660 Offset: 0xF3A660 VA: 0xF3E660 Slot: 19
	public override IXmlNode AppendChild(IXmlNode newChild) { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
[Nullable(0)]
internal class XTextWrapper : XObjectWrapper // TypeDefIndex: 4406
{
	// Properties
	[Nullable(1)]
	private XText Text { get; }
	public override string Value { get; }
	public override IXmlNode ParentNode { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3E7D0 Offset: 0xF3A7D0 VA: 0xF3E7D0
	private XText get_Text() { }

	[NullableContext(1)]
	// RVA: 0xF3E848 Offset: 0xF3A848 VA: 0xF3E848
	public void .ctor(XText text) { }

	// RVA: 0xF3E870 Offset: 0xF3A870 VA: 0xF3E870 Slot: 18
	public override string get_Value() { }

	// RVA: 0xF3E88C Offset: 0xF3A88C VA: 0xF3E88C Slot: 17
	public override IXmlNode get_ParentNode() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
[Nullable(0)]
internal class XCommentWrapper : XObjectWrapper // TypeDefIndex: 4407
{
	// Properties
	[Nullable(1)]
	private XComment Text { get; }
	public override string Value { get; }
	public override IXmlNode ParentNode { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3EBD8 Offset: 0xF3ABD8 VA: 0xF3EBD8
	private XComment get_Text() { }

	[NullableContext(1)]
	// RVA: 0xF3EC50 Offset: 0xF3AC50 VA: 0xF3EC50
	public void .ctor(XComment text) { }

	// RVA: 0xF3EC78 Offset: 0xF3AC78 VA: 0xF3EC78 Slot: 18
	public override string get_Value() { }

	// RVA: 0xF3EC94 Offset: 0xF3AC94 VA: 0xF3EC94 Slot: 17
	public override IXmlNode get_ParentNode() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(2)]
internal class XProcessingInstructionWrapper : XObjectWrapper // TypeDefIndex: 4408
{
	// Properties
	[Nullable(1)]
	private XProcessingInstruction ProcessingInstruction { get; }
	public override string LocalName { get; }
	public override string Value { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3ECD8 Offset: 0xF3ACD8 VA: 0xF3ECD8
	private XProcessingInstruction get_ProcessingInstruction() { }

	[NullableContext(1)]
	// RVA: 0xF3E284 Offset: 0xF3A284 VA: 0xF3E284
	public void .ctor(XProcessingInstruction processingInstruction) { }

	// RVA: 0xF3ED50 Offset: 0xF3AD50 VA: 0xF3ED50 Slot: 14
	public override string get_LocalName() { }

	// RVA: 0xF3ED6C Offset: 0xF3AD6C VA: 0xF3ED6C Slot: 18
	public override string get_Value() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
internal class XContainerWrapper : XObjectWrapper // TypeDefIndex: 4409
{
	// Fields
	[Nullable(new[] { 2, 1 })]
	private List<IXmlNode> _childNodes; // 0x18

	// Properties
	private XContainer Container { get; }
	public override List<IXmlNode> ChildNodes { get; }
	protected virtual bool HasChildNodes { get; }
	[Nullable(2)]
	public override IXmlNode ParentNode { get; }

	// Methods

	// RVA: 0xF3ED88 Offset: 0xF3AD88 VA: 0xF3ED88
	private XContainer get_Container() { }

	// RVA: 0xF3D800 Offset: 0xF39800 VA: 0xF3D800
	public void .ctor(XContainer container) { }

	// RVA: 0xF3D9A4 Offset: 0xF399A4 VA: 0xF3D9A4 Slot: 15
	public override List<IXmlNode> get_ChildNodes() { }

	// RVA: 0xF3DD9C Offset: 0xF39D9C VA: 0xF3DD9C Slot: 21
	protected virtual bool get_HasChildNodes() { }

	[NullableContext(2)]
	// RVA: 0xF3EE00 Offset: 0xF3AE00 VA: 0xF3EE00 Slot: 17
	public override IXmlNode get_ParentNode() { }

	// RVA: 0xF3E8D0 Offset: 0xF3A8D0 VA: 0xF3E8D0
	internal static IXmlNode WrapNode(XObject node) { }

	// RVA: 0xF3E700 Offset: 0xF3A700 VA: 0xF3E700 Slot: 19
	public override IXmlNode AppendChild(IXmlNode newChild) { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(2)]
internal class XObjectWrapper : IXmlNode // TypeDefIndex: 4410
{
	// Fields
	private readonly XObject _xmlObject; // 0x10

	// Properties
	public object WrappedNode { get; }
	public virtual XmlNodeType NodeType { get; }
	public virtual string LocalName { get; }
	[Nullable(1)]
	public virtual List<IXmlNode> ChildNodes { get; }
	[Nullable(1)]
	public virtual List<IXmlNode> Attributes { get; }
	public virtual IXmlNode ParentNode { get; }
	public virtual string Value { get; }
	public virtual string NamespaceUri { get; }

	// Methods

	// RVA: 0xF3D604 Offset: 0xF39604 VA: 0xF3D604
	public void .ctor(XObject xmlObject) { }

	// RVA: 0xF3EE44 Offset: 0xF3AE44 VA: 0xF3EE44 Slot: 12
	public object get_WrappedNode() { }

	// RVA: 0xF3EE4C Offset: 0xF3AE4C VA: 0xF3EE4C Slot: 13
	public virtual XmlNodeType get_NodeType() { }

	// RVA: 0xF3EE64 Offset: 0xF3AE64 VA: 0xF3EE64 Slot: 14
	public virtual string get_LocalName() { }

	[NullableContext(1)]
	// RVA: 0xF3EE6C Offset: 0xF3AE6C VA: 0xF3EE6C Slot: 15
	public virtual List<IXmlNode> get_ChildNodes() { }

	[NullableContext(1)]
	// RVA: 0xF3EEC4 Offset: 0xF3AEC4 VA: 0xF3EEC4 Slot: 16
	public virtual List<IXmlNode> get_Attributes() { }

	// RVA: 0xF3EF1C Offset: 0xF3AF1C VA: 0xF3EF1C Slot: 17
	public virtual IXmlNode get_ParentNode() { }

	// RVA: 0xF3EF24 Offset: 0xF3AF24 VA: 0xF3EF24 Slot: 18
	public virtual string get_Value() { }

	[NullableContext(1)]
	// RVA: 0xF3EF2C Offset: 0xF3AF2C VA: 0xF3EF2C Slot: 19
	public virtual IXmlNode AppendChild(IXmlNode newChild) { }

	// RVA: 0xF3EF64 Offset: 0xF3AF64 VA: 0xF3EF64 Slot: 20
	public virtual string get_NamespaceUri() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(2)]
[Nullable(0)]
internal class XAttributeWrapper : XObjectWrapper // TypeDefIndex: 4411
{
	// Properties
	[Nullable(1)]
	private XAttribute Attribute { get; }
	public override string Value { get; }
	public override string LocalName { get; }
	public override string NamespaceUri { get; }
	public override IXmlNode ParentNode { get; }

	// Methods

	[NullableContext(1)]
	// RVA: 0xF3EF6C Offset: 0xF3AF6C VA: 0xF3EF6C
	private XAttribute get_Attribute() { }

	[NullableContext(1)]
	// RVA: 0xF3E4D8 Offset: 0xF3A4D8 VA: 0xF3E4D8
	public void .ctor(XAttribute attribute) { }

	// RVA: 0xF3EFE4 Offset: 0xF3AFE4 VA: 0xF3EFE4 Slot: 18
	public override string get_Value() { }

	// RVA: 0xF3F000 Offset: 0xF3B000 VA: 0xF3F000 Slot: 14
	public override string get_LocalName() { }

	// RVA: 0xF3F024 Offset: 0xF3B024 VA: 0xF3F024 Slot: 20
	public override string get_NamespaceUri() { }

	// RVA: 0xF3F048 Offset: 0xF3B048 VA: 0xF3F048 Slot: 17
	public override IXmlNode get_ParentNode() { }
}


// Namespace: Newtonsoft.Json.Converters
[NullableContext(1)]
[Nullable(0)]
internal class XElementWrapper : XContainerWrapper, IXmlElement, IXmlNode // TypeDefIndex: 4412
{
	// Fields
	[Nullable(new[] { 2, 1 })]
	private List<IXmlNode> _attributes; // 0x20

	// Properties
	private XElement Element { get; }
	public override List<IXmlNode> Attributes { get; }
	[Nullable(2)]
	public override string Value { get; }
	[Nullable(2)]
	public override string LocalName { get; }
	[Nullable(2)]
	public override string NamespaceUri { get; }
	public bool IsEmpty { get; }

	// Methods

	// RVA: 0xF3F08C Offset: 0xF3B08C VA: 0xF3F08C
	private XElement get_Element() { }

	// RVA: 0xF3E350 Offset: 0xF3A350 VA: 0xF3E350
	public void .ctor(XElement element) { }

	// RVA: 0xF3F104 Offset: 0xF3B104 VA: 0xF3F104 Slot: 22
	public void SetAttributeNode(IXmlNode attribute) { }

	// RVA: 0xF3F1A8 Offset: 0xF3B1A8 VA: 0xF3F1A8 Slot: 16
	public override List<IXmlNode> get_Attributes() { }

	// RVA: 0xF3F6A8 Offset: 0xF3B6A8 VA: 0xF3F6A8
	private bool HasImplicitNamespaceAttribute(string namespaceUri) { }

	// RVA: 0xF3FB94 Offset: 0xF3BB94 VA: 0xF3FB94 Slot: 19
	public override IXmlNode AppendChild(IXmlNode newChild) { }

	[NullableContext(2)]
	// RVA: 0xF3FBBC Offset: 0xF3BBBC VA: 0xF3FBBC Slot: 18
	public override string get_Value() { }

	[NullableContext(2)]
	// RVA: 0xF3FBD8 Offset: 0xF3BBD8 VA: 0xF3FBD8 Slot: 14
	public override string get_LocalName() { }

	[NullableContext(2)]
	// RVA: 0xF3FBFC Offset: 0xF3BBFC VA: 0xF3FBFC Slot: 20
	public override string get_NamespaceUri() { }

	// RVA: 0xF3FB54 Offset: 0xF3BB54 VA: 0xF3FB54 Slot: 23
	public string GetPrefixOfNamespace(string namespaceUri) { }

	// RVA: 0xF3FC20 Offset: 0xF3BC20 VA: 0xF3FC20 Slot: 24
	public bool get_IsEmpty() { }
}


// Namespace: Newtonsoft.Json.Converters
[Nullable(0)]
[NullableContext(1)]
public class XmlNodeConverter : JsonConverter // TypeDefIndex: 4413
{
	// Fields
	internal static readonly List<IXmlNode> EmptyChildNodes; // 0x0
	private const string TextName = "#text";
	private const string CommentName = "#comment";
	private const string CDataName = "#cdata-section";
	private const string WhitespaceName = "#whitespace";
	private const string SignificantWhitespaceName = "#significant-whitespace";
	private const string DeclarationName = "?xml";
	private const string JsonNamespaceUri = "http://james.newtonking.com/projects/json";
	[Nullable(2)]
	[CompilerGenerated]
	private string <DeserializeRootElementName>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <WriteArrayAttribute>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <OmitRootObject>k__BackingField; // 0x19
	[CompilerGenerated]
	private bool <EncodeSpecialCharacters>k__BackingField; // 0x1A

	// Properties
	[Nullable(2)]
	public string DeserializeRootElementName { get; set; }
	public bool WriteArrayAttribute { get; set; }
	public bool OmitRootObject { get; set; }
	public bool EncodeSpecialCharacters { get; set; }

	// Methods

	[CompilerGenerated]
	[NullableContext(2)]
	// RVA: 0xF3FC3C Offset: 0xF3BC3C VA: 0xF3FC3C
	public string get_DeserializeRootElementName() { }

	[CompilerGenerated]
	[NullableContext(2)]
	// RVA: 0xF3FC44 Offset: 0xF3BC44 VA: 0xF3FC44
	public void set_DeserializeRootElementName(string value) { }

	[CompilerGenerated]
	// RVA: 0xF3FC4C Offset: 0xF3BC4C VA: 0xF3FC4C
	public bool get_WriteArrayAttribute() { }

	[CompilerGenerated]
	// RVA: 0xF3FC54 Offset: 0xF3BC54 VA: 0xF3FC54
	public void set_WriteArrayAttribute(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF3FC60 Offset: 0xF3BC60 VA: 0xF3FC60
	public bool get_OmitRootObject() { }

	[CompilerGenerated]
	// RVA: 0xF3FC68 Offset: 0xF3BC68 VA: 0xF3FC68
	public void set_OmitRootObject(bool value) { }

	[CompilerGenerated]
	// RVA: 0xF3FC74 Offset: 0xF3BC74 VA: 0xF3FC74
	public bool get_EncodeSpecialCharacters() { }

	[CompilerGenerated]
	// RVA: 0xF3FC7C Offset: 0xF3BC7C VA: 0xF3FC7C
	public void set_EncodeSpecialCharacters(bool value) { }

	// RVA: 0xF3FC88 Offset: 0xF3BC88 VA: 0xF3FC88 Slot: 4
	public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) { }

	// RVA: 0xF3FDC8 Offset: 0xF3BDC8 VA: 0xF3FDC8
	private IXmlNode WrapXml(object value) { }

	// RVA: 0xF3FEE0 Offset: 0xF3BEE0 VA: 0xF3FEE0
	private void PushParentNamespaces(IXmlNode node, XmlNamespaceManager manager) { }

	// RVA: 0xF41CD4 Offset: 0xF3DCD4 VA: 0xF41CD4
	private string ResolveFullName(IXmlNode node, XmlNamespaceManager manager) { }

	// RVA: 0xF41FF0 Offset: 0xF3DFF0 VA: 0xF41FF0
	private string GetPropertyName(IXmlNode node, XmlNamespaceManager manager) { }

	// RVA: 0xF42430 Offset: 0xF3E430 VA: 0xF42430
	private bool IsArray(IXmlNode node) { }

	// RVA: 0xF427D4 Offset: 0xF3E7D4 VA: 0xF427D4
	private void SerializeGroupedNodes(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName) { }

	// RVA: 0xF43168 Offset: 0xF3F168 VA: 0xF43168
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, List<IXmlNode> groupedNodes, string elementNames) { }

	// RVA: 0xF432E0 Offset: 0xF3F2E0 VA: 0xF432E0
	private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, IXmlNode node, string elementNames) { }

	// RVA: 0xF4052C Offset: 0xF3C52C VA: 0xF4052C
	private void SerializeNode(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName) { }

	// RVA: 0xF433B0 Offset: 0xF3F3B0 VA: 0xF433B0
	private static bool AllSameName(IXmlNode node) { }

	// RVA: 0xF439A4 Offset: 0xF3F9A4 VA: 0xF439A4 Slot: 5
	public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) { }

	// RVA: 0xF44CF4 Offset: 0xF40CF4 VA: 0xF44CF4
	private void DeserializeValue(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, string propertyName, IXmlNode currentNode) { }

	// RVA: 0xF44204 Offset: 0xF40204 VA: 0xF44204
	private void ReadElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, XmlNamespaceManager manager) { }

	// RVA: 0xF46F94 Offset: 0xF42F94 VA: 0xF46F94
	private void CreateElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string elementName, XmlNamespaceManager manager, string elementPrefix, Dictionary<string, string> attributeNameValues) { }

	// RVA: 0xF46C18 Offset: 0xF42C18 VA: 0xF46C18
	private static void AddAttribute(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, string attributeName, XmlNamespaceManager manager, string attributePrefix) { }

	// RVA: 0xF452A0 Offset: 0xF412A0 VA: 0xF452A0
	private static string ConvertTokenToXmlValue(JsonReader reader) { }

	// RVA: 0xF461D8 Offset: 0xF421D8 VA: 0xF461D8
	private void ReadArrayElements(JsonReader reader, IXmlDocument document, string propertyName, IXmlNode currentNode, XmlNamespaceManager manager) { }

	// RVA: 0xF4783C Offset: 0xF4383C VA: 0xF4783C
	private void AddJsonArrayAttribute(IXmlElement element, IXmlDocument document) { }

	// RVA: 0xF46590 Offset: 0xF42590 VA: 0xF46590
	private bool ShouldReadInto(JsonReader reader) { }

	// RVA: 0xF465D8 Offset: 0xF425D8 VA: 0xF465D8
	private Dictionary<string, string> ReadAttributeElements(JsonReader reader, XmlNamespaceManager manager) { }

	// RVA: 0xF4592C Offset: 0xF4192C VA: 0xF4592C
	private void CreateInstruction(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName) { }

	// RVA: 0xF45DE0 Offset: 0xF41DE0 VA: 0xF45DE0
	private void CreateDocumentType(JsonReader reader, IXmlDocument document, IXmlNode currentNode) { }

	// RVA: 0xF47680 Offset: 0xF43680 VA: 0xF47680
	private IXmlElement CreateElement(string elementName, IXmlDocument document, string elementPrefix, XmlNamespaceManager manager) { }

	// RVA: 0xF4454C Offset: 0xF4054C VA: 0xF4454C
	private void DeserializeNode(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, IXmlNode currentNode) { }

	// RVA: 0xF47B7C Offset: 0xF43B7C VA: 0xF47B7C
	private bool IsNamespaceAttribute(string attributeName, out string prefix) { }

	// RVA: 0xF43680 Offset: 0xF3F680 VA: 0xF43680
	private bool ValueAttributes(List<IXmlNode> c) { }

	// RVA: 0xF47C5C Offset: 0xF43C5C VA: 0xF47C5C Slot: 6
	public override bool CanConvert(Type valueType) { }

	// RVA: 0xF47D04 Offset: 0xF43D04 VA: 0xF47D04
	private bool IsXObject(Type valueType) { }

	// RVA: 0xF47D98 Offset: 0xF43D98 VA: 0xF47D98
	private bool IsXmlNode(Type valueType) { }

	// RVA: 0xF47E2C Offset: 0xF43E2C VA: 0xF47E2C
	public void .ctor() { }

	// RVA: 0xF47E34 Offset: 0xF43E34 VA: 0xF47E34
	private static void .cctor() { }
}


// Namespace: Newtonsoft.Json.Bson
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonObjectId // TypeDefIndex: 4414
{
	// Fields
	[CompilerGenerated]
	private readonly byte[] <Value>k__BackingField; // 0x10

	// Properties
	public byte[] Value { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF47EC0 Offset: 0xF43EC0 VA: 0xF47EC0
	public byte[] get_Value() { }

	// RVA: 0xF47EC8 Offset: 0xF43EC8 VA: 0xF47EC8
	public void .ctor(byte[] value) { }
}


// Namespace: Newtonsoft.Json.Bson
internal abstract class BsonToken // TypeDefIndex: 4415
{
	// Fields
	[CompilerGenerated]
	private BsonToken <Parent>k__BackingField; // 0x10

	// Properties
	public abstract BsonType Type { get; }
	public BsonToken Parent { set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract BsonType get_Type();

	[CompilerGenerated]
	// RVA: 0xF47FA4 Offset: 0xF43FA4 VA: 0xF47FA4
	public void set_Parent(BsonToken value) { }

	// RVA: 0xF47FAC Offset: 0xF43FAC VA: 0xF47FAC
	protected void .ctor() { }
}


// Namespace: Newtonsoft.Json.Bson
internal class BsonObject : BsonToken // TypeDefIndex: 4416
{
	// Fields
	private readonly List<BsonProperty> _children; // 0x18

	// Properties
	public override BsonType Type { get; }

	// Methods

	// RVA: 0xF47FB4 Offset: 0xF43FB4 VA: 0xF47FB4
	public void Add(string name, BsonToken token) { }

	// RVA: 0xF480D4 Offset: 0xF440D4 VA: 0xF480D4 Slot: 4
	public override BsonType get_Type() { }
}


// Namespace: Newtonsoft.Json.Bson
internal class BsonArray : BsonToken // TypeDefIndex: 4417
{
	// Fields
	private readonly List<BsonToken> _children; // 0x18

	// Properties
	public override BsonType Type { get; }

	// Methods

	// RVA: 0xF480DC Offset: 0xF440DC VA: 0xF480DC
	public void Add(BsonToken token) { }

	// RVA: 0xF48140 Offset: 0xF44140 VA: 0xF48140 Slot: 4
	public override BsonType get_Type() { }
}


// Namespace: Newtonsoft.Json.Bson
internal class BsonValue : BsonToken // TypeDefIndex: 4418
{
	// Fields
	private readonly object _value; // 0x18
	private readonly BsonType _type; // 0x20

	// Properties
	public override BsonType Type { get; }

	// Methods

	// RVA: 0xF48148 Offset: 0xF44148 VA: 0xF48148
	public void .ctor(object value, BsonType type) { }

	// RVA: 0xF48178 Offset: 0xF44178 VA: 0xF48178 Slot: 4
	public override BsonType get_Type() { }
}


// Namespace: Newtonsoft.Json.Bson
internal class BsonString : BsonValue // TypeDefIndex: 4419
{
	// Fields
	[CompilerGenerated]
	private readonly bool <IncludeLength>k__BackingField; // 0x21

	// Methods

	// RVA: 0xF4809C Offset: 0xF4409C VA: 0xF4809C
	public void .ctor(object value, bool includeLength) { }
}


// Namespace: Newtonsoft.Json.Bson
internal class BsonRegex : BsonToken // TypeDefIndex: 4420
{
	// Fields
	[CompilerGenerated]
	private BsonString <Pattern>k__BackingField; // 0x18
	[CompilerGenerated]
	private BsonString <Options>k__BackingField; // 0x20

	// Properties
	public BsonString Pattern { set; }
	public BsonString Options { set; }
	public override BsonType Type { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF48180 Offset: 0xF44180 VA: 0xF48180
	public void set_Pattern(BsonString value) { }

	[CompilerGenerated]
	// RVA: 0xF48188 Offset: 0xF44188 VA: 0xF48188
	public void set_Options(BsonString value) { }

	// RVA: 0xF48190 Offset: 0xF44190 VA: 0xF48190
	public void .ctor(string pattern, string options) { }

	// RVA: 0xF48238 Offset: 0xF44238 VA: 0xF48238 Slot: 4
	public override BsonType get_Type() { }
}


// Namespace: Newtonsoft.Json.Bson
internal class BsonProperty // TypeDefIndex: 4421
{
	// Fields
	[CompilerGenerated]
	private BsonString <Name>k__BackingField; // 0x10
	[CompilerGenerated]
	private BsonToken <Value>k__BackingField; // 0x18

	// Properties
	public BsonString Name { set; }
	public BsonToken Value { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0xF48240 Offset: 0xF44240 VA: 0xF48240
	public void set_Name(BsonString value) { }

	[CompilerGenerated]
	// RVA: 0xF48248 Offset: 0xF44248 VA: 0xF48248
	public void set_Value(BsonToken value) { }

	// RVA: 0xF48094 Offset: 0xF44094 VA: 0xF48094
	public void .ctor() { }
}


// Namespace: Newtonsoft.Json.Bson
internal enum BsonType // TypeDefIndex: 4422
{
	// Fields
	public sbyte value__; // 0x0
	public const BsonType Number = 1;
	public const BsonType String = 2;
	public const BsonType Object = 3;
	public const BsonType Array = 4;
	public const BsonType Binary = 5;
	public const BsonType Undefined = 6;
	public const BsonType Oid = 7;
	public const BsonType Boolean = 8;
	public const BsonType Date = 9;
	public const BsonType Null = 10;
	public const BsonType Regex = 11;
	public const BsonType Reference = 12;
	public const BsonType Code = 13;
	public const BsonType Symbol = 14;
	public const BsonType CodeWScope = 15;
	public const BsonType Integer = 16;
	public const BsonType TimeStamp = 17;
	public const BsonType Long = 18;
	public const BsonType MinKey = -1;
	public const BsonType MaxKey = 127;
}


// Namespace: Newtonsoft.Json.Bson
[Obsolete("BSON reading and writing has been moved to its own package. See https://www.nuget.org/packages/Newtonsoft.Json.Bson for more details.")]
public class BsonWriter : JsonWriter // TypeDefIndex: 4423
{
	// Fields
	private BsonToken _root; // 0x60
	private BsonToken _parent; // 0x68
	private string _propertyName; // 0x70

	// Methods

	// RVA: 0xF48250 Offset: 0xF44250 VA: 0xF48250
	private void AddValue(object value, BsonType type) { }

	// RVA: 0xF482C4 Offset: 0xF442C4 VA: 0xF482C4
	internal void AddToken(BsonToken token) { }

	// RVA: 0xF48488 Offset: 0xF44488 VA: 0xF48488
	public void WriteObjectId(byte[] value) { }

	// RVA: 0xF3A2B8 Offset: 0xF362B8 VA: 0xF3A2B8
	public void WriteRegex(string pattern, string options) { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 // TypeDefIndex: 4424
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 // TypeDefIndex: 4425
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 // TypeDefIndex: 4426
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 // TypeDefIndex: 4427
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=28 // TypeDefIndex: 4428
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 // TypeDefIndex: 4429
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 // TypeDefIndex: 4430
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=44 // TypeDefIndex: 4431
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 // TypeDefIndex: 4432
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 4433
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=44 0698228BF899CAEAB9A53E5E6C7099E846C44F56432050D234DDF03AD772F139 /*Metadata offset 0x387DE0*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=10 19AE20A57B073E3E8DD45C6F6A4E9AB1076EA3EBFFF28E4AEB58B411472CF994 /*Metadata offset 0x387E10*/; // 0x2C
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 223D6CA32241C349E421A0164F2341E20CC5B65D5A04AA021CFF71D623895570 /*Metadata offset 0x387E20*/; // 0x36
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 33350F5DA385CE1B8749AEC68BA060CD54EE981968522B5EDF62178537A1FEEE /*Metadata offset 0x387E50*/; // 0x5E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 38809B9974198671140931F729415F3FD75DF68A6398E3486AE3B58554329A63 /*Metadata offset 0x387E68*/; // 0x72
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=28 499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6 /*Metadata offset 0x387E98*/; // 0x9A
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 4EDE3546F1189E450DF4D4A2739BE90BEB3B1708B3B9F406B02E0773A92A10FF /*Metadata offset 0x387EB8*/; // 0xB6
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA /*Metadata offset 0x387ED0*/; // 0xC6
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=28 5ADB7CA81690556AB2A3201A849839FA3562604BB469382C7D6D78AB426283E2 /*Metadata offset 0x387F08*/; // 0xFA
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=24 5DDF815AC046E7D4603FA586D1BDE42118AD4FE9875D64F716BC7D2740EE52C9 /*Metadata offset 0x387F28*/; // 0x116
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 605A3F93AE7A97E00C156F977E942027EA532E263A5B440A4219984F803FDD04 /*Metadata offset 0x387F48*/; // 0x12E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 7367A65185E4F747AA29364AB199D01646A010A62129A6BA2E35E929D7294D62 /*Metadata offset 0x387F60*/; // 0x13E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 7439A4C9E30AC42BCC55AD1A2B617E29E7129B6DDAC79C886944B17819262CC1 /*Metadata offset 0x387F88*/; // 0x162
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 990F3F1286CC3928725497B2745CFF7BC7C9803B4EB8271611540BA6BF6654B5 /*Metadata offset 0x387FB8*/; // 0x18A
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=16 A8636D08B42D058EFC34703DD37B6468FCE56138DF242B862C3F1CA138CB3B89 /*Metadata offset 0x387FE8*/; // 0x1B2
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 B1D1BCD1D06B4A563944BE3C67D51F63DF23702E5BE760D7897C6AD1F51C6122 /*Metadata offset 0x388000*/; // 0x1C2
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 CAA07D7573596B3356BD202533F0EAFDD05309981F270193A99E300D57587326 /*Metadata offset 0x388018*/; // 0x1D6
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 D4B3B8EBA0589FC38724A0D318B46104B07BC528744109ED69ED71604B7EEC1A /*Metadata offset 0x388030*/; // 0x1EA
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 F6EDC1733B068F457C63E03BB041B9AB6BFAD5CD7673D3E0841968D3FBCB12C7 /*Metadata offset 0x388060*/; // 0x212
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315 /*Metadata offset 0x388090*/; // 0x23A
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=40 FCA56C548368F7065472C8C8EE4D63921B4F16BB51181EC202A0C252D5209E6A /*Metadata offset 0x3880C8*/; // 0x26E
}
