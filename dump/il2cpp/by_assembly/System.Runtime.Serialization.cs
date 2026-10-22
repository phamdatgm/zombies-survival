// Namespace: 
internal class <Module> // TypeDefIndex: 7884
{}


// Namespace: System.Runtime.Serialization
[Usage(28, Inherited = False, AllowMultiple = False)]
public sealed class DataContractAttribute : Attribute // TypeDefIndex: 7885
{
	// Fields
	private bool isReference; // 0x10

	// Properties
	public bool IsReference { get; }

	// Methods

	// RVA: 0x10D27E4 Offset: 0x10CE7E4 VA: 0x10D27E4
	public bool get_IsReference() { }
}


// Namespace: System.Runtime.Serialization
[Usage(384, Inherited = False, AllowMultiple = False)]
public sealed class DataMemberAttribute : Attribute // TypeDefIndex: 7886
{
	// Fields
	private string name; // 0x10
	private int order; // 0x18
	private bool isRequired; // 0x1C
	private bool emitDefaultValue; // 0x1D

	// Properties
	public string Name { get; }
	public int Order { get; }
	public bool IsRequired { get; }
	public bool EmitDefaultValue { get; }

	// Methods

	// RVA: 0x10D27EC Offset: 0x10CE7EC VA: 0x10D27EC
	public string get_Name() { }

	// RVA: 0x10D27F4 Offset: 0x10CE7F4 VA: 0x10D27F4
	public int get_Order() { }

	// RVA: 0x10D27FC Offset: 0x10CE7FC VA: 0x10D27FC
	public bool get_IsRequired() { }

	// RVA: 0x10D2804 Offset: 0x10CE804 VA: 0x10D2804
	public bool get_EmitDefaultValue() { }
}


// Namespace: System.Runtime.Serialization
[Usage(256, Inherited = False, AllowMultiple = False)]
public sealed class EnumMemberAttribute : Attribute // TypeDefIndex: 7887
{
	// Fields
	private string value; // 0x10

	// Properties
	public string Value { get; }

	// Methods

	// RVA: 0x10D280C Offset: 0x10CE80C VA: 0x10D280C
	public string get_Value() { }
}


// Namespace: System.Runtime.Serialization
[Usage(384, Inherited = False, AllowMultiple = False)]
public sealed class IgnoreDataMemberAttribute : Attribute // TypeDefIndex: 7888
{}
