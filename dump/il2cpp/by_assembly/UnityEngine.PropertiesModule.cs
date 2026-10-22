// Namespace: 
internal class <Module> // TypeDefIndex: 7105
{}


// Namespace: Unity.Properties
[Usage(384)]
public class CreatePropertyAttribute : Attribute // TypeDefIndex: 7106
{}


// Namespace: Unity.Properties
[Usage(256)]
public class DontCreatePropertyAttribute : Attribute // TypeDefIndex: 7107
{}


// Namespace: Unity.Properties
public sealed class PropertyGetter<TContainer, TValue> : MulticastDelegate // TypeDefIndex: 7108
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46BF8 Offset: 0xC42BF8 VA: 0xC46BF8
	|-PropertyGetter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual TValue Invoke(ref TContainer container) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46C94 Offset: 0xC42C94 VA: 0xC46C94
	|-PropertyGetter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: Unity.Properties
public sealed class PropertySetter<TContainer, TValue> : MulticastDelegate // TypeDefIndex: 7109
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46CA8 Offset: 0xC42CA8 VA: 0xC46CA8
	|-PropertySetter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(ref TContainer container, TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46D48 Offset: 0xC42D48 VA: 0xC46D48
	|-PropertySetter<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: Unity.Properties
public class DelegateProperty<TContainer, TValue> : Property<TContainer, TValue> // TypeDefIndex: 7110
{
	// Fields
	private readonly PropertyGetter<TContainer, TValue> m_Getter; // 0x0
	private readonly PropertySetter<TContainer, TValue> m_Setter; // 0x0
	[CompilerGenerated]
	private readonly string <Name>k__BackingField; // 0x0

	// Properties
	public override string Name { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public override string get_Name() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF6DA8 Offset: 0xBF2DA8 VA: 0xBF6DA8
	|-DelegateProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Name
	*/

	// RVA: -1 Offset: -1
	public void .ctor(string name, PropertyGetter<TContainer, TValue> getter, PropertySetter<TContainer, TValue> setter) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF6DB0 Offset: 0xBF2DB0 VA: 0xBF6DB0
	|-DelegateProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public interface IProperty // TypeDefIndex: 7111
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Type DeclaredValueType();
}


// Namespace: Unity.Properties
public interface IProperty<TContainer> : IProperty // TypeDefIndex: 7112
{}


// Namespace: Unity.Properties
public abstract class Property<TContainer, TValue> : IProperty<TContainer>, IProperty, IAttributes // TypeDefIndex: 7113
{
	// Fields
	private List<Attribute> m_Attributes; // 0x0

	// Properties
	public abstract string Name { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 7
	public abstract string get_Name();

	// RVA: -1 Offset: -1 Slot: 4
	public Type DeclaredValueType() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46D5C Offset: 0xC42D5C VA: 0xC46D5C
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.DeclaredValueType
	*/

	// RVA: -1 Offset: -1
	protected void AddAttribute(Attribute attribute) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46DC0 Offset: 0xC42DC0 VA: 0xC46DC0
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.AddAttribute
	*/

	// RVA: -1 Offset: -1
	protected void AddAttributes(IEnumerable<Attribute> attributes) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46E64 Offset: 0xC42E64 VA: 0xC46E64
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.AddAttributes
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private void Unity.Properties.Internal.IAttributes.AddAttribute(Attribute attribute) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46F0C Offset: 0xC42F0C VA: 0xC46F0C
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Unity.Properties.Internal.IAttributes.AddAttribute
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private void Unity.Properties.Internal.IAttributes.AddAttributes(IEnumerable<Attribute> attributes) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC47038 Offset: 0xC43038 VA: 0xC47038
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Unity.Properties.Internal.IAttributes.AddAttributes
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public bool HasAttribute<TAttribute>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB69990 Offset: 0xB65990 VA: 0xB69990
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.HasAttribute<object>
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC47414 Offset: 0xC43414 VA: 0xC47414
	|-Property<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
internal interface IMemberInfo // TypeDefIndex: 7114
{
	// Properties
	public abstract string Name { get; }
	public abstract bool IsReadOnly { get; }
	public abstract Type ValueType { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Name();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_IsReadOnly();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Type get_ValueType();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract IEnumerable<Attribute> GetCustomAttributes();
}


// Namespace: Unity.Properties
internal struct FieldMember : IMemberInfo // TypeDefIndex: 7115
{
	// Fields
	internal readonly FieldInfo m_FieldInfo; // 0x0
	[CompilerGenerated]
	private readonly string <Name>k__BackingField; // 0x8

	// Properties
	public string Name { get; }
	public bool IsReadOnly { get; }
	public Type ValueType { get; }

	// Methods

	// RVA: 0x13CF8EC Offset: 0x13CB8EC VA: 0x13CF8EC
	public void .ctor(FieldInfo fieldInfo) { }

	[CompilerGenerated]
	// RVA: 0x13CFA00 Offset: 0x13CBA00 VA: 0x13CFA00 Slot: 4
	public string get_Name() { }

	// RVA: 0x13CFA08 Offset: 0x13CBA08 VA: 0x13CFA08 Slot: 5
	public bool get_IsReadOnly() { }

	// RVA: 0x13CFA24 Offset: 0x13CBA24 VA: 0x13CFA24 Slot: 6
	public Type get_ValueType() { }

	// RVA: 0x13CFA48 Offset: 0x13CBA48 VA: 0x13CFA48 Slot: 7
	public IEnumerable<Attribute> GetCustomAttributes() { }
}


// Namespace: Unity.Properties
internal struct PropertyMember : IMemberInfo // TypeDefIndex: 7116
{
	// Fields
	internal readonly PropertyInfo m_PropertyInfo; // 0x0
	[CompilerGenerated]
	private readonly string <Name>k__BackingField; // 0x8

	// Properties
	public string Name { get; }
	public bool IsReadOnly { get; }
	public Type ValueType { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13CFA54 Offset: 0x13CBA54 VA: 0x13CFA54 Slot: 4
	public string get_Name() { }

	// RVA: 0x13CFA5C Offset: 0x13CBA5C VA: 0x13CFA5C Slot: 5
	public bool get_IsReadOnly() { }

	// RVA: 0x13CFA8C Offset: 0x13CBA8C VA: 0x13CFA8C Slot: 6
	public Type get_ValueType() { }

	// RVA: 0x13CFAB0 Offset: 0x13CBAB0 VA: 0x13CFAB0
	public void .ctor(PropertyInfo propertyInfo) { }

	// RVA: 0x13CFAD0 Offset: 0x13CBAD0 VA: 0x13CFAD0 Slot: 7
	public IEnumerable<Attribute> GetCustomAttributes() { }
}


// Namespace: 
private sealed class ReflectedMemberProperty.GetStructValueAction<TContainer, TValue> : MulticastDelegate // TypeDefIndex: 7117
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1E6DC Offset: 0xC1A6DC VA: 0xC1E6DC
	|-ReflectedMemberProperty.GetStructValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual TValue Invoke(ref TContainer container) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1E778 Offset: 0xC1A778 VA: 0xC1E778
	|-ReflectedMemberProperty.GetStructValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: 
private sealed class ReflectedMemberProperty.SetStructValueAction<TContainer, TValue> : MulticastDelegate // TypeDefIndex: 7118
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC58370 Offset: 0xC54370 VA: 0xC58370
	|-ReflectedMemberProperty.SetStructValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(ref TContainer container, TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC58410 Offset: 0xC54410 VA: 0xC58410
	|-ReflectedMemberProperty.SetStructValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: 
private sealed class ReflectedMemberProperty.GetClassValueAction<TContainer, TValue> : MulticastDelegate // TypeDefIndex: 7119
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1E5C8 Offset: 0xC1A5C8 VA: 0xC1E5C8
	|-ReflectedMemberProperty.GetClassValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual TValue Invoke(TContainer container) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1E6C8 Offset: 0xC1A6C8 VA: 0xC1E6C8
	|-ReflectedMemberProperty.GetClassValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: 
private sealed class ReflectedMemberProperty.SetClassValueAction<TContainer, TValue> : MulticastDelegate // TypeDefIndex: 7120
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC580B0 Offset: 0xC540B0 VA: 0xC580B0
	|-ReflectedMemberProperty.SetClassValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(TContainer container, TValue value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC581B4 Offset: 0xC541B4 VA: 0xC581B4
	|-ReflectedMemberProperty.SetClassValueAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: Unity.Properties
public class ReflectedMemberProperty<TContainer, TValue> : Property<TContainer, TValue> // TypeDefIndex: 7121
{
	// Fields
	private readonly IMemberInfo m_Info; // 0x0
	private readonly bool m_IsStructContainerType; // 0x0
	private ReflectedMemberProperty.GetStructValueAction<TContainer, TValue> m_GetStructValueAction; // 0x0
	private ReflectedMemberProperty.SetStructValueAction<TContainer, TValue> m_SetStructValueAction; // 0x0
	private ReflectedMemberProperty.GetClassValueAction<TContainer, TValue> m_GetClassValueAction; // 0x0
	private ReflectedMemberProperty.SetClassValueAction<TContainer, TValue> m_SetClassValueAction; // 0x0
	[CompilerGenerated]
	private readonly string <Name>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly bool <IsReadOnly>k__BackingField; // 0x0

	// Properties
	public override string Name { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public override string get_Name() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC560D8 Offset: 0xC520D8 VA: 0xC560D8
	|-ReflectedMemberProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Name
	*/

	// RVA: -1 Offset: -1
	internal void .ctor(IMemberInfo info, string name) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC560E0 Offset: 0xC520E0 VA: 0xC560E0
	|-ReflectedMemberProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public sealed class ArrayPropertyBag<TElement> : IndexedCollectionPropertyBag<TElement[], TElement> // TypeDefIndex: 7122
{
	// Properties
	protected override InstantiationKind InstantiationKind { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 8
	protected override InstantiationKind get_InstantiationKind() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC9704 Offset: 0xBC5704 VA: 0xBC9704
	|-ArrayPropertyBag<__Il2CppFullySharedGenericType>.get_InstantiationKind
	*/

	// RVA: -1 Offset: -1 Slot: 11
	protected override TElement[] InstantiateWithCount(int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC970C Offset: 0xBC570C VA: 0xBC970C
	|-ArrayPropertyBag<__Il2CppFullySharedGenericType>.InstantiateWithCount
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected override TElement[] Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC9738 Offset: 0xBC5738 VA: 0xBC9738
	|-ArrayPropertyBag<__Il2CppFullySharedGenericType>.Instantiate
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC979C Offset: 0xBC579C VA: 0xBC979C
	|-ArrayPropertyBag<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public abstract class ContainerPropertyBag<TContainer> : PropertyBag<TContainer> // TypeDefIndex: 7123
{
	// Fields
	private readonly List<IProperty<TContainer>> m_PropertiesList; // 0x0
	private readonly Dictionary<string, IProperty<TContainer>> m_PropertiesHash; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF48E4 Offset: 0xBF08E4 VA: 0xBF48E4
	|-ContainerPropertyBag<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	protected void AddProperty<TValue>(Property<TContainer, TValue> property) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB68F5C Offset: 0xB64F5C VA: 0xB68F5C
	|-ContainerPropertyBag<__Il2CppFullySharedGenericType>.AddProperty<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public bool TryGetProperty(ref TContainer container, string name, out IProperty<TContainer> property) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF49E0 Offset: 0xBF09E0 VA: 0xBF49E0
	|-ContainerPropertyBag<__Il2CppFullySharedGenericType>.TryGetProperty
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF4A10 Offset: 0xBF0A10 VA: 0xBF4A10
	|-ContainerPropertyBag<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public class DictionaryPropertyBag<TKey, TValue> : KeyValueCollectionPropertyBag<Dictionary<TKey, TValue>, TKey, TValue> // TypeDefIndex: 7124
{
	// Properties
	protected override InstantiationKind InstantiationKind { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 8
	protected override InstantiationKind get_InstantiationKind() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8658 Offset: 0xBF4658 VA: 0xBF8658
	|-DictionaryPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_InstantiationKind
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected override Dictionary<TKey, TValue> Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF8660 Offset: 0xBF4660 VA: 0xBF8660
	|-DictionaryPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Instantiate
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBF86B8 Offset: 0xBF46B8 VA: 0xBF86B8
	|-DictionaryPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public class HashSetPropertyBag<TElement> : SetPropertyBagBase<HashSet<TElement>, TElement> // TypeDefIndex: 7125
{
	// Properties
	protected override InstantiationKind InstantiationKind { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 8
	protected override InstantiationKind get_InstantiationKind() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1F23C Offset: 0xC1B23C VA: 0xC1F23C
	|-HashSetPropertyBag<__Il2CppFullySharedGenericType>.get_InstantiationKind
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected override HashSet<TElement> Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1F244 Offset: 0xC1B244 VA: 0xC1F244
	|-HashSetPropertyBag<__Il2CppFullySharedGenericType>.Instantiate
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1F2B8 Offset: 0xC1B2B8 VA: 0xC1F2B8
	|-HashSetPropertyBag<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public interface IPropertyBag // TypeDefIndex: 7126
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Accept(ITypeVisitor visitor);
}


// Namespace: Unity.Properties
public interface IPropertyBag<TContainer> : IPropertyBag // TypeDefIndex: 7127
{}


// Namespace: 
private class IndexedCollectionPropertyBag.ListElementProperty<TList, TElement> : Property<TList, TElement> // TypeDefIndex: 7128
{
	// Fields
	internal int m_Index; // 0x0

	// Properties
	public int Index { get; }
	public override string Name { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 9
	public int get_Index() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FBB4 Offset: 0xC2BBB4 VA: 0xC2FBB4
	|-IndexedCollectionPropertyBag.ListElementProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Index
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public override string get_Name() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FBBC Offset: 0xC2BBBC VA: 0xC2FBBC
	|-IndexedCollectionPropertyBag.ListElementProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Name
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FBDC Offset: 0xC2BBDC VA: 0xC2FBDC
	|-IndexedCollectionPropertyBag.ListElementProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public class IndexedCollectionPropertyBag<TList, TElement> : PropertyBag<TList>, IPropertyBag<TList>, IPropertyBag, IConstructorWithCount<TList>, IConstructor // TypeDefIndex: 7129
{
	// Fields
	private readonly IndexedCollectionPropertyBag.ListElementProperty<TList, TElement> m_Property; // 0x0

	// Methods

	// RVA: -1 Offset: -1 Slot: 10
	private TList Unity.Properties.IConstructorWithCount<TList>.InstantiateWithCount(int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC237EC Offset: 0xC1F7EC VA: 0xC237EC
	|-IndexedCollectionPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Unity.Properties.IConstructorWithCount<TList>.InstantiateWithCount
	*/

	// RVA: -1 Offset: -1 Slot: 11
	protected virtual TList InstantiateWithCount(int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC238E8 Offset: 0xC1F8E8 VA: 0xC238E8
	|-IndexedCollectionPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.InstantiateWithCount
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC239E8 Offset: 0xC1F9E8 VA: 0xC239E8
	|-IndexedCollectionPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
private class KeyValueCollectionPropertyBag.KeyValuePairProperty<TDictionary, TKey, TValue> : Property<TDictionary, KeyValuePair<TKey, TValue>> // TypeDefIndex: 7130
{
	// Fields
	[CompilerGenerated]
	private TKey <Key>k__BackingField; // 0x0

	// Properties
	public override string Name { get; }
	public TKey Key { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 7
	public override string get_Name() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC28BA4 Offset: 0xC24BA4 VA: 0xC28BA4
	|-KeyValueCollectionPropertyBag.KeyValuePairProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Name
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 9
	public TKey get_Key() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC28CDC Offset: 0xC24CDC VA: 0xC28CDC
	|-KeyValueCollectionPropertyBag.KeyValuePairProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Key
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC28D78 Offset: 0xC24D78 VA: 0xC28D78
	|-KeyValueCollectionPropertyBag.KeyValuePairProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public class KeyValueCollectionPropertyBag<TDictionary, TKey, TValue> : PropertyBag<TDictionary>, IPropertyBag<TDictionary>, IPropertyBag // TypeDefIndex: 7131
{
	// Fields
	private readonly KeyValueCollectionPropertyBag.KeyValuePairProperty<TDictionary, TKey, TValue> m_KeyValuePairProperty; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC28B08 Offset: 0xC24B08 VA: 0xC28B08
	|-KeyValueCollectionPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class KeyValuePairPropertyBag.<>c<TKey, TValue> // TypeDefIndex: 7132
{
	// Fields
	public static readonly KeyValuePairPropertyBag.<>c<TKey, TValue> <>9; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8570 Offset: 0xBB4570 VA: 0xBB8570
	|-KeyValuePairPropertyBag.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB862C Offset: 0xBB462C VA: 0xBB862C
	|-KeyValuePairPropertyBag.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal TKey <.cctor>b__7_0(ref KeyValuePair<TKey, TValue> container) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8634 Offset: 0xBB4634 VA: 0xBB8634
	|-KeyValuePairPropertyBag.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<.cctor>b__7_0
	*/

	// RVA: -1 Offset: -1
	internal TValue <.cctor>b__7_1(ref KeyValuePair<TKey, TValue> container) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB86C4 Offset: 0xBB46C4 VA: 0xBB86C4
	|-KeyValuePairPropertyBag.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.<.cctor>b__7_1
	*/
}


// Namespace: Unity.Properties
public class KeyValuePairPropertyBag<TKey, TValue> : PropertyBag<KeyValuePair<TKey, TValue>> // TypeDefIndex: 7133
{
	// Fields
	private static readonly DelegateProperty<KeyValuePair<TKey, TValue>, TKey> s_KeyProperty; // 0x0
	private static readonly DelegateProperty<KeyValuePair<TKey, TValue>, TValue> s_ValueProperty; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC28D88 Offset: 0xC24D88 VA: 0xC28D88
	|-KeyValuePairPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC28DE4 Offset: 0xC24DE4 VA: 0xC28DE4
	|-KeyValuePairPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..cctor
	*/
}


// Namespace: Unity.Properties
public class ListPropertyBag<TElement> : IndexedCollectionPropertyBag<List<TElement>, TElement> // TypeDefIndex: 7134
{
	// Properties
	protected override InstantiationKind InstantiationKind { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 8
	protected override InstantiationKind get_InstantiationKind() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FBE4 Offset: 0xC2BBE4 VA: 0xC2FBE4
	|-ListPropertyBag<__Il2CppFullySharedGenericType>.get_InstantiationKind
	*/

	// RVA: -1 Offset: -1 Slot: 11
	protected override List<TElement> InstantiateWithCount(int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FBEC Offset: 0xC2BBEC VA: 0xC2FBEC
	|-ListPropertyBag<__Il2CppFullySharedGenericType>.InstantiateWithCount
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected override List<TElement> Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FC40 Offset: 0xC2BC40 VA: 0xC2FC40
	|-ListPropertyBag<__Il2CppFullySharedGenericType>.Instantiate
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2FC84 Offset: 0xC2BC84 VA: 0xC2FC84
	|-ListPropertyBag<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public static class PropertyBag // TypeDefIndex: 7135
{
	// Methods

	// RVA: -1 Offset: -1
	public static void Register<TContainer>(PropertyBag<TContainer> propertyBag) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA3DD8 Offset: 0xB9FDD8 VA: 0xBA3DD8
	|-PropertyBag.Register<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: Unity.Properties
public abstract class PropertyBag<TContainer> : IPropertyBag<TContainer>, IPropertyBag, IPropertyBagRegister, IConstructor<TContainer>, IConstructor // TypeDefIndex: 7136
{
	// Fields
	[CompilerGenerated]
	private readonly InstantiationKind <InstantiationKind>k__BackingField; // 0x0

	// Properties
	private InstantiationKind Unity.Properties.IConstructor.InstantiationKind { get; }
	protected virtual InstantiationKind InstantiationKind { get; }

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC467B8 Offset: 0xC427B8 VA: 0xC467B8
	|-PropertyBag<__Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private void Unity.Properties.Internal.IPropertyBagRegister.Register() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC468B4 Offset: 0xC428B4 VA: 0xC468B4
	|-PropertyBag<__Il2CppFullySharedGenericType>.Unity.Properties.Internal.IPropertyBagRegister.Register
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public void Accept(ITypeVisitor visitor) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46920 Offset: 0xC42920 VA: 0xC46920
	|-PropertyBag<__Il2CppFullySharedGenericType>.Accept
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private InstantiationKind Unity.Properties.IConstructor.get_InstantiationKind() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC469F0 Offset: 0xC429F0 VA: 0xC469F0
	|-PropertyBag<__Il2CppFullySharedGenericType>.Unity.Properties.IConstructor.get_InstantiationKind
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private TContainer Unity.Properties.IConstructor<TContainer>.Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC469FC Offset: 0xC429FC VA: 0xC469FC
	|-PropertyBag<__Il2CppFullySharedGenericType>.Unity.Properties.IConstructor<TContainer>.Instantiate
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 8
	protected virtual InstantiationKind get_InstantiationKind() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46AE4 Offset: 0xC42AE4 VA: 0xC46AE4
	|-PropertyBag<__Il2CppFullySharedGenericType>.get_InstantiationKind
	*/

	// RVA: -1 Offset: -1 Slot: 9
	protected virtual TContainer Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46AEC Offset: 0xC42AEC VA: 0xC46AEC
	|-PropertyBag<__Il2CppFullySharedGenericType>.Instantiate
	*/

	// RVA: -1 Offset: -1
	protected void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC46BEC Offset: 0xC42BEC VA: 0xC46BEC
	|-PropertyBag<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
private class SetPropertyBagBase.SetElementProperty<TSet, TElement> : Property<TSet, TElement> // TypeDefIndex: 7137
{
	// Fields
	internal TElement m_Value; // 0x0

	// Properties
	public override string Name { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 7
	public override string get_Name() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC581C8 Offset: 0xC541C8 VA: 0xC581C8
	|-SetPropertyBagBase.SetElementProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.get_Name
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC582C4 Offset: 0xC542C4 VA: 0xC582C4
	|-SetPropertyBagBase.SetElementProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public class SetPropertyBagBase<TSet, TElement> : PropertyBag<TSet>, IPropertyBag<TSet>, IPropertyBag // TypeDefIndex: 7138
{
	// Fields
	private readonly SetPropertyBagBase.SetElementProperty<TSet, TElement> m_Property; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC582D4 Offset: 0xC542D4 VA: 0xC582D4
	|-SetPropertyBagBase<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: Unity.Properties
public interface ITypeVisitor // TypeDefIndex: 7139
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Visit<TContainer>();
}


// Namespace: Unity.Properties
public static class TypeTraits // TypeDefIndex: 7140
{
	// Methods

	// RVA: 0x13CFADC Offset: 0x13CBADC VA: 0x13CFADC
	public static bool IsContainer(Type type) { }
}


// Namespace: Unity.Properties
public static class TypeTraits<T> // TypeDefIndex: 7141
{
	// Fields
	[CompilerGenerated]
	private static readonly bool <IsValueType>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsPrimitive>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsInterface>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsAbstract>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsArray>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsMultidimensionalArray>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsEnum>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsEnumFlags>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsNullable>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsObject>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsString>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsContainer>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <CanBeNull>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsPrimitiveOrString>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsAbstractOrInterface>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsUnityObject>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly bool <IsLazyLoadReference>k__BackingField; // 0x0

	// Properties
	public static bool IsValueType { get; }
	public static bool IsPrimitive { get; }
	public static bool IsInterface { get; }
	public static bool IsAbstract { get; }
	public static bool IsArray { get; }
	public static bool IsEnum { get; }
	public static bool IsNullable { get; }
	public static bool IsObject { get; }
	public static bool IsString { get; }
	public static bool IsContainer { get; }
	public static bool CanBeNull { get; }
	public static bool IsAbstractOrInterface { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsValueType() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77DF8 Offset: 0xC73DF8 VA: 0xC77DF8
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsValueType
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsPrimitive() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77E64 Offset: 0xC73E64 VA: 0xC77E64
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsPrimitive
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsInterface() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77ED0 Offset: 0xC73ED0 VA: 0xC77ED0
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsInterface
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsAbstract() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77F3C Offset: 0xC73F3C VA: 0xC77F3C
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsAbstract
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsArray() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77FA8 Offset: 0xC73FA8 VA: 0xC77FA8
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsArray
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsEnum() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC78014 Offset: 0xC74014 VA: 0xC78014
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsEnum
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsNullable() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC78080 Offset: 0xC74080 VA: 0xC78080
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsNullable
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsObject() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC780EC Offset: 0xC740EC VA: 0xC780EC
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsObject
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC78158 Offset: 0xC74158 VA: 0xC78158
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsString
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsContainer() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC781C4 Offset: 0xC741C4 VA: 0xC781C4
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsContainer
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_CanBeNull() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC78230 Offset: 0xC74230 VA: 0xC78230
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_CanBeNull
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public static bool get_IsAbstractOrInterface() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7829C Offset: 0xC7429C VA: 0xC7829C
	|-TypeTraits<__Il2CppFullySharedGenericType>.get_IsAbstractOrInterface
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC78308 Offset: 0xC74308 VA: 0xC78308
	|-TypeTraits<__Il2CppFullySharedGenericType>..cctor
	*/
}


// Namespace: Unity.Properties
public enum InstantiationKind // TypeDefIndex: 7142
{
	// Fields
	public int value__; // 0x0
	public const InstantiationKind Activator = 0;
	public const InstantiationKind PropertyBagOverride = 1;
	public const InstantiationKind NotInstantiatable = 2;
}


// Namespace: Unity.Properties
internal interface IConstructor // TypeDefIndex: 7143
{
	// Properties
	public abstract InstantiationKind InstantiationKind { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract InstantiationKind get_InstantiationKind();
}


// Namespace: Unity.Properties
internal interface IConstructor<T> : IConstructor // TypeDefIndex: 7144
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Instantiate();
}


// Namespace: Unity.Properties
internal interface IConstructorWithCount<T> : IConstructor // TypeDefIndex: 7145
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T InstantiateWithCount(int count);
}


// Namespace: 
private interface TypeUtility.ITypeConstructor // TypeDefIndex: 7146
{
	// Properties
	public abstract bool CanBeInstantiated { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_CanBeInstantiated();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract object Instantiate();
}


// Namespace: 
private interface TypeUtility.ITypeConstructor<T> : TypeUtility.ITypeConstructor // TypeDefIndex: 7147
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract T Instantiate();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetExplicitConstructor(Func<T> constructor);
}


// Namespace: 
private class TypeUtility.TypeConstructor<T> : TypeUtility.ITypeConstructor<T>, TypeUtility.ITypeConstructor // TypeDefIndex: 7148
{
	// Fields
	private Func<T> m_ExplicitConstructor; // 0x0
	private Func<T> m_ImplicitConstructor; // 0x0
	private IConstructor<T> m_OverrideConstructor; // 0x0

	// Properties
	private bool Unity.Properties.TypeUtility.ITypeConstructor.CanBeInstantiated { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 6
	private bool Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77194 Offset: 0xC73194 VA: 0xC77194
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC772CC Offset: 0xC732CC VA: 0xC772CC
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	private void SetImplicitConstructor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC773AC Offset: 0xC733AC VA: 0xC773AC
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.SetImplicitConstructor
	*/

	// RVA: -1 Offset: -1
	private static T CreateValueTypeInstance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC775E0 Offset: 0xC735E0 VA: 0xC775E0
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.CreateValueTypeInstance
	*/

	// RVA: -1 Offset: -1
	private static T CreateScriptableObjectInstance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC776F4 Offset: 0xC736F4 VA: 0xC776F4
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.CreateScriptableObjectInstance
	*/

	// RVA: -1 Offset: -1
	private static T CreateClassInstance() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7789C Offset: 0xC7389C VA: 0xC7789C
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.CreateClassInstance
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void SetExplicitConstructor(Func<T> constructor) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC779B4 Offset: 0xC739B4 VA: 0xC779B4
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.SetExplicitConstructor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	private T Unity.Properties.TypeUtility.ITypeConstructor<T>.Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC779BC Offset: 0xC739BC VA: 0xC779BC
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.Unity.Properties.TypeUtility.ITypeConstructor<T>.Instantiate
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object Unity.Properties.TypeUtility.ITypeConstructor.Instantiate() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC77CEC Offset: 0xC73CEC VA: 0xC77CEC
	|-TypeUtility.TypeConstructor<__Il2CppFullySharedGenericType>.Unity.Properties.TypeUtility.ITypeConstructor.Instantiate
	*/
}


// Namespace: 
private class TypeUtility.NonConstructable : TypeUtility.ITypeConstructor // TypeDefIndex: 7149
{
	// Properties
	private bool Unity.Properties.TypeUtility.ITypeConstructor.CanBeInstantiated { get; }

	// Methods

	// RVA: 0x13D154C Offset: 0x13CD54C VA: 0x13D154C Slot: 4
	private bool Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated() { }

	// RVA: 0x13D1554 Offset: 0x13CD554 VA: 0x13D1554 Slot: 5
	public object Instantiate() { }

	// RVA: 0x13D1128 Offset: 0x13CD128 VA: 0x13D1128
	public void .ctor() { }
}


// Namespace: 
private struct TypeUtility.Cache<T> // TypeDefIndex: 7150
{
	// Fields
	public static TypeUtility.ITypeConstructor<T> TypeConstructor; // 0x0
}


// Namespace: 
private class TypeUtility.TypeConstructorVisitor : ITypeVisitor // TypeDefIndex: 7151
{
	// Fields
	public TypeUtility.ITypeConstructor TypeConstructor; // 0x10

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public void Visit<TContainer>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB3804 Offset: 0xBAF804 VA: 0xBB3804
	|-TypeUtility.TypeConstructorVisitor.Visit<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D1120 Offset: 0x13CD120 VA: 0x13D1120
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class TypeUtility.<>c // TypeDefIndex: 7152
{
	// Fields
	public static readonly TypeUtility.<>c <>9; // 0x0

	// Methods

	// RVA: 0x13D15A0 Offset: 0x13CD5A0 VA: 0x13D15A0
	private static void .cctor() { }

	// RVA: 0x13D15FC Offset: 0x13CD5FC VA: 0x13D15FC
	public void .ctor() { }

	// RVA: 0x13D1604 Offset: 0x13CD604 VA: 0x13D1604
	internal StringBuilder <.cctor>b__11_0() { }

	// RVA: 0x13D1658 Offset: 0x13CD658 VA: 0x13D1658
	internal void <.cctor>b__11_1(StringBuilder sb) { }

	// RVA: 0x13D1670 Offset: 0x13CD670 VA: 0x13D1670
	internal string <.cctor>b__11_2() { }
}


// Namespace: Unity.Properties
[Extension]
public static class TypeUtility // TypeDefIndex: 7153
{
	// Fields
	private static readonly ConcurrentDictionary<Type, TypeUtility.ITypeConstructor> s_TypeConstructors; // 0x0
	private static readonly MethodInfo s_CreateTypeConstructor; // 0x8
	private static readonly ConcurrentDictionary<Type, string> s_CachedResolvedName; // 0x10
	private static readonly ObjectPool<StringBuilder> s_Builders; // 0x18
	private static readonly object syncedPoolObject; // 0x20

	// Methods

	// RVA: 0x13CFC1C Offset: 0x13CBC1C VA: 0x13CFC1C
	private static void .cctor() { }

	// RVA: 0x13D0034 Offset: 0x13CC034 VA: 0x13D0034
	public static string GetTypeDisplayName(Type type) { }

	// RVA: 0x13D014C Offset: 0x13CC14C VA: 0x13D014C
	private static string GetTypeDisplayName(Type type, IReadOnlyList<Type> args, ref int argIndex) { }

	[Extension]
	// RVA: 0x13D0AF0 Offset: 0x13CCAF0 VA: 0x13D0AF0
	public static Type GetRootType(Type type) { }

	[Preserve]
	// RVA: 0x13D0C24 Offset: 0x13CCC24 VA: 0x13D0C24
	private static TypeUtility.ITypeConstructor CreateTypeConstructor(Type type) { }

	// RVA: -1 Offset: -1
	private static TypeUtility.ITypeConstructor<T> CreateTypeConstructor<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAC920 Offset: 0xBA8920 VA: 0xBAC920
	|-TypeUtility.CreateTypeConstructor<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D1130 Offset: 0x13CD130 VA: 0x13D1130
	private static TypeUtility.ITypeConstructor GetTypeConstructor(Type type) { }

	// RVA: -1 Offset: -1
	private static TypeUtility.ITypeConstructor<T> GetTypeConstructor<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBACA44 Offset: 0xBA8A44 VA: 0xBACA44
	|-TypeUtility.GetTypeConstructor<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D11E8 Offset: 0x13CD1E8 VA: 0x13D11E8
	public static bool CanBeInstantiated(Type type) { }

	// RVA: -1 Offset: -1
	public static bool CanBeInstantiated<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAC708 Offset: 0xBA8708 VA: 0xBAC708
	|-TypeUtility.CanBeInstantiated<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void SetExplicitInstantiationMethod<T>(Func<T> constructor) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAD6D4 Offset: 0xBA96D4 VA: 0xBAD6D4
	|-TypeUtility.SetExplicitInstantiationMethod<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static T Instantiate<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBACADC Offset: 0xBA8ADC VA: 0xBACADC
	|-TypeUtility.Instantiate<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static bool TryInstantiate<T>(out T instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAD7B8 Offset: 0xBA97B8 VA: 0xBAD7B8
	|-TypeUtility.TryInstantiate<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static T Instantiate<T>(Type derivedType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBACC88 Offset: 0xBA8C88 VA: 0xBACC88
	|-TypeUtility.Instantiate<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static bool TryInstantiate<T>(Type derivedType, out T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAD9B4 Offset: 0xBA99B4 VA: 0xBAD9B4
	|-TypeUtility.TryInstantiate<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static TArray InstantiateArray<TArray>(int count = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBACEA8 Offset: 0xBA8EA8 VA: 0xBACEA8
	|-TypeUtility.InstantiateArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static bool TryInstantiateArray<TArray>(int count, out TArray instance) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBADC28 Offset: 0xBA9C28 VA: 0xBADC28
	|-TypeUtility.TryInstantiateArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static TArray InstantiateArray<TArray>(Type derivedType, int count = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAD2BC Offset: 0xBA92BC VA: 0xBAD2BC
	|-TypeUtility.InstantiateArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D12B4 Offset: 0x13CD2B4 VA: 0x13D12B4
	private static void CheckIsAssignableFrom(Type type, Type derivedType) { }

	// RVA: -1 Offset: -1
	private static void CheckCanBeInstantiated<T>(TypeUtility.ITypeConstructor<T> constructor) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAC7D4 Offset: 0xBA87D4 VA: 0xBAC7D4
	|-TypeUtility.CheckCanBeInstantiated<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D141C Offset: 0x13CD41C VA: 0x13D141C
	private static void CheckCanBeInstantiated(TypeUtility.ITypeConstructor constructor, Type type) { }
}


// Namespace: Unity.Properties.Internal
internal interface IAttributes // TypeDefIndex: 7154
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void AddAttribute(Attribute attribute);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void AddAttributes(IEnumerable<Attribute> attributes);
}


// Namespace: Unity.Properties.Internal
internal static class DefaultPropertyBagInitializer // TypeDefIndex: 7155
{
	// Methods

	// RVA: 0x13D16B8 Offset: 0x13CD6B8 VA: 0x13D16B8
	internal static void Initialize() { }
}


// Namespace: 
private class ColorPropertyBag.RProperty : Property<Color, float> // TypeDefIndex: 7156
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2800 Offset: 0x13CE800 VA: 0x13D2800 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D26E0 Offset: 0x13CE6E0 VA: 0x13D26E0
	public void .ctor() { }
}


// Namespace: 
private class ColorPropertyBag.GProperty : Property<Color, float> // TypeDefIndex: 7157
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2840 Offset: 0x13CE840 VA: 0x13D2840 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2728 Offset: 0x13CE728 VA: 0x13D2728
	public void .ctor() { }
}


// Namespace: 
private class ColorPropertyBag.BProperty : Property<Color, float> // TypeDefIndex: 7158
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2880 Offset: 0x13CE880 VA: 0x13D2880 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2770 Offset: 0x13CE770 VA: 0x13D2770
	public void .ctor() { }
}


// Namespace: 
private class ColorPropertyBag.AProperty : Property<Color, float> // TypeDefIndex: 7159
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D28C0 Offset: 0x13CE8C0 VA: 0x13D28C0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D27B8 Offset: 0x13CE7B8 VA: 0x13D27B8
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class ColorPropertyBag : ContainerPropertyBag<Color> // TypeDefIndex: 7160
{
	// Methods

	// RVA: 0x13D19E8 Offset: 0x13CD9E8 VA: 0x13D19E8
	public void .ctor() { }
}


// Namespace: 
private class Vector2PropertyBag.XProperty : Property<Vector2, float> // TypeDefIndex: 7161
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2990 Offset: 0x13CE990 VA: 0x13D2990 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2900 Offset: 0x13CE900 VA: 0x13D2900
	public void .ctor() { }
}


// Namespace: 
private class Vector2PropertyBag.YProperty : Property<Vector2, float> // TypeDefIndex: 7162
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D29D0 Offset: 0x13CE9D0 VA: 0x13D29D0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2948 Offset: 0x13CE948 VA: 0x13D2948
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class Vector2PropertyBag : ContainerPropertyBag<Vector2> // TypeDefIndex: 7163
{
	// Methods

	// RVA: 0x13D1B48 Offset: 0x13CDB48 VA: 0x13D1B48
	public void .ctor() { }
}


// Namespace: 
private class Vector3PropertyBag.XProperty : Property<Vector3, float> // TypeDefIndex: 7164
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2AE8 Offset: 0x13CEAE8 VA: 0x13D2AE8 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2A10 Offset: 0x13CEA10 VA: 0x13D2A10
	public void .ctor() { }
}


// Namespace: 
private class Vector3PropertyBag.YProperty : Property<Vector3, float> // TypeDefIndex: 7165
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2B28 Offset: 0x13CEB28 VA: 0x13D2B28 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2A58 Offset: 0x13CEA58 VA: 0x13D2A58
	public void .ctor() { }
}


// Namespace: 
private class Vector3PropertyBag.ZProperty : Property<Vector3, float> // TypeDefIndex: 7166
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2B68 Offset: 0x13CEB68 VA: 0x13D2B68 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2AA0 Offset: 0x13CEAA0 VA: 0x13D2AA0
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class Vector3PropertyBag : ContainerPropertyBag<Vector3> // TypeDefIndex: 7167
{
	// Methods

	// RVA: 0x13D1C38 Offset: 0x13CDC38 VA: 0x13D1C38
	public void .ctor() { }
}


// Namespace: 
private class Vector4PropertyBag.XProperty : Property<Vector4, float> // TypeDefIndex: 7168
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2CC8 Offset: 0x13CECC8 VA: 0x13D2CC8 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2BA8 Offset: 0x13CEBA8 VA: 0x13D2BA8
	public void .ctor() { }
}


// Namespace: 
private class Vector4PropertyBag.YProperty : Property<Vector4, float> // TypeDefIndex: 7169
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2D08 Offset: 0x13CED08 VA: 0x13D2D08 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2BF0 Offset: 0x13CEBF0 VA: 0x13D2BF0
	public void .ctor() { }
}


// Namespace: 
private class Vector4PropertyBag.ZProperty : Property<Vector4, float> // TypeDefIndex: 7170
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2D48 Offset: 0x13CED48 VA: 0x13D2D48 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2C38 Offset: 0x13CEC38 VA: 0x13D2C38
	public void .ctor() { }
}


// Namespace: 
private class Vector4PropertyBag.WProperty : Property<Vector4, float> // TypeDefIndex: 7171
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2D88 Offset: 0x13CED88 VA: 0x13D2D88 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2C80 Offset: 0x13CEC80 VA: 0x13D2C80
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class Vector4PropertyBag : ContainerPropertyBag<Vector4> // TypeDefIndex: 7172
{
	// Methods

	// RVA: 0x13D1D64 Offset: 0x13CDD64 VA: 0x13D1D64
	public void .ctor() { }
}


// Namespace: 
private class Vector2IntPropertyBag.XProperty : Property<Vector2Int, int> // TypeDefIndex: 7173
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2E58 Offset: 0x13CEE58 VA: 0x13D2E58 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2DC8 Offset: 0x13CEDC8 VA: 0x13D2DC8
	public void .ctor() { }
}


// Namespace: 
private class Vector2IntPropertyBag.YProperty : Property<Vector2Int, int> // TypeDefIndex: 7174
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2E98 Offset: 0x13CEE98 VA: 0x13D2E98 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2E10 Offset: 0x13CEE10 VA: 0x13D2E10
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class Vector2IntPropertyBag : ContainerPropertyBag<Vector2Int> // TypeDefIndex: 7175
{
	// Methods

	// RVA: 0x13D1EC4 Offset: 0x13CDEC4 VA: 0x13D1EC4
	public void .ctor() { }
}


// Namespace: 
private class Vector3IntPropertyBag.XProperty : Property<Vector3Int, int> // TypeDefIndex: 7176
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2FB0 Offset: 0x13CEFB0 VA: 0x13D2FB0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2ED8 Offset: 0x13CEED8 VA: 0x13D2ED8
	public void .ctor() { }
}


// Namespace: 
private class Vector3IntPropertyBag.YProperty : Property<Vector3Int, int> // TypeDefIndex: 7177
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D2FF0 Offset: 0x13CEFF0 VA: 0x13D2FF0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2F20 Offset: 0x13CEF20 VA: 0x13D2F20
	public void .ctor() { }
}


// Namespace: 
private class Vector3IntPropertyBag.ZProperty : Property<Vector3Int, int> // TypeDefIndex: 7178
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3030 Offset: 0x13CF030 VA: 0x13D3030 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D2F68 Offset: 0x13CEF68 VA: 0x13D2F68
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class Vector3IntPropertyBag : ContainerPropertyBag<Vector3Int> // TypeDefIndex: 7179
{
	// Methods

	// RVA: 0x13D1FB4 Offset: 0x13CDFB4 VA: 0x13D1FB4
	public void .ctor() { }
}


// Namespace: 
private class RectPropertyBag.XProperty : Property<Rect, float> // TypeDefIndex: 7180
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3190 Offset: 0x13CF190 VA: 0x13D3190 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3070 Offset: 0x13CF070 VA: 0x13D3070
	public void .ctor() { }
}


// Namespace: 
private class RectPropertyBag.YProperty : Property<Rect, float> // TypeDefIndex: 7181
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D31D0 Offset: 0x13CF1D0 VA: 0x13D31D0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D30B8 Offset: 0x13CF0B8 VA: 0x13D30B8
	public void .ctor() { }
}


// Namespace: 
private class RectPropertyBag.WidthProperty : Property<Rect, float> // TypeDefIndex: 7182
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3210 Offset: 0x13CF210 VA: 0x13D3210 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3100 Offset: 0x13CF100 VA: 0x13D3100
	public void .ctor() { }
}


// Namespace: 
private class RectPropertyBag.HeightProperty : Property<Rect, float> // TypeDefIndex: 7183
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3250 Offset: 0x13CF250 VA: 0x13D3250 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3148 Offset: 0x13CF148 VA: 0x13D3148
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class RectPropertyBag : ContainerPropertyBag<Rect> // TypeDefIndex: 7184
{
	// Methods

	// RVA: 0x13D20E0 Offset: 0x13CE0E0 VA: 0x13D20E0
	public void .ctor() { }
}


// Namespace: 
private class RectIntPropertyBag.XProperty : Property<RectInt, int> // TypeDefIndex: 7185
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D33B0 Offset: 0x13CF3B0 VA: 0x13D33B0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3290 Offset: 0x13CF290 VA: 0x13D3290
	public void .ctor() { }
}


// Namespace: 
private class RectIntPropertyBag.YProperty : Property<RectInt, int> // TypeDefIndex: 7186
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D33F0 Offset: 0x13CF3F0 VA: 0x13D33F0 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D32D8 Offset: 0x13CF2D8 VA: 0x13D32D8
	public void .ctor() { }
}


// Namespace: 
private class RectIntPropertyBag.WidthProperty : Property<RectInt, int> // TypeDefIndex: 7187
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3430 Offset: 0x13CF430 VA: 0x13D3430 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3320 Offset: 0x13CF320 VA: 0x13D3320
	public void .ctor() { }
}


// Namespace: 
private class RectIntPropertyBag.HeightProperty : Property<RectInt, int> // TypeDefIndex: 7188
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3470 Offset: 0x13CF470 VA: 0x13D3470 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3368 Offset: 0x13CF368 VA: 0x13D3368
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class RectIntPropertyBag : ContainerPropertyBag<RectInt> // TypeDefIndex: 7189
{
	// Methods

	// RVA: 0x13D2240 Offset: 0x13CE240 VA: 0x13D2240
	public void .ctor() { }
}


// Namespace: 
private class BoundsPropertyBag.CenterProperty : Property<Bounds, Vector3> // TypeDefIndex: 7190
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3540 Offset: 0x13CF540 VA: 0x13D3540 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D34B0 Offset: 0x13CF4B0 VA: 0x13D34B0
	public void .ctor() { }
}


// Namespace: 
private class BoundsPropertyBag.ExtentsProperty : Property<Bounds, Vector3> // TypeDefIndex: 7191
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3580 Offset: 0x13CF580 VA: 0x13D3580 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D34F8 Offset: 0x13CF4F8 VA: 0x13D34F8
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class BoundsPropertyBag : ContainerPropertyBag<Bounds> // TypeDefIndex: 7192
{
	// Methods

	// RVA: 0x13D23A0 Offset: 0x13CE3A0 VA: 0x13D23A0
	public void .ctor() { }
}


// Namespace: 
private class BoundsIntPropertyBag.PositionProperty : Property<BoundsInt, Vector3Int> // TypeDefIndex: 7193
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3650 Offset: 0x13CF650 VA: 0x13D3650 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D35C0 Offset: 0x13CF5C0 VA: 0x13D35C0
	public void .ctor() { }
}


// Namespace: 
private class BoundsIntPropertyBag.SizeProperty : Property<BoundsInt, Vector3Int> // TypeDefIndex: 7194
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3690 Offset: 0x13CF690 VA: 0x13D3690 Slot: 7
	public override string get_Name() { }

	// RVA: 0x13D3608 Offset: 0x13CF608 VA: 0x13D3608
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal class BoundsIntPropertyBag : ContainerPropertyBag<BoundsInt> // TypeDefIndex: 7195
{
	// Methods

	// RVA: 0x13D2490 Offset: 0x13CE490 VA: 0x13D2490
	public void .ctor() { }
}


// Namespace: 
private class SystemVersionPropertyBag.MajorProperty : Property<Version, int> // TypeDefIndex: 7196
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D36D0 Offset: 0x13CF6D0 VA: 0x13D36D0
	public void .ctor() { }

	// RVA: 0x13D3950 Offset: 0x13CF950 VA: 0x13D3950 Slot: 7
	public override string get_Name() { }
}


// Namespace: 
private class SystemVersionPropertyBag.MinorProperty : Property<Version, int> // TypeDefIndex: 7197
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3770 Offset: 0x13CF770 VA: 0x13D3770
	public void .ctor() { }

	// RVA: 0x13D3990 Offset: 0x13CF990 VA: 0x13D3990 Slot: 7
	public override string get_Name() { }
}


// Namespace: 
private class SystemVersionPropertyBag.BuildProperty : Property<Version, int> // TypeDefIndex: 7198
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D3810 Offset: 0x13CF810 VA: 0x13D3810
	public void .ctor() { }

	// RVA: 0x13D39D0 Offset: 0x13CF9D0 VA: 0x13D39D0 Slot: 7
	public override string get_Name() { }
}


// Namespace: 
private class SystemVersionPropertyBag.RevisionProperty : Property<Version, int> // TypeDefIndex: 7199
{
	// Properties
	public override string Name { get; }

	// Methods

	// RVA: 0x13D38B0 Offset: 0x13CF8B0 VA: 0x13D38B0
	public void .ctor() { }

	// RVA: 0x13D3A10 Offset: 0x13CFA10 VA: 0x13D3A10 Slot: 7
	public override string get_Name() { }
}


// Namespace: Unity.Properties.Internal
internal class SystemVersionPropertyBag : ContainerPropertyBag<Version> // TypeDefIndex: 7200
{
	// Methods

	// RVA: 0x13D2580 Offset: 0x13CE580 VA: 0x13D2580
	public void .ctor() { }
}


// Namespace: Unity.Properties.Internal
internal interface IPropertyBagRegister // TypeDefIndex: 7201
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Register();
}


// Namespace: 
internal struct PropertyBagStore.TypedStore<TContainer> // TypeDefIndex: 7202
{
	// Fields
	public static IPropertyBag<TContainer> PropertyBag; // 0x0
}


// Namespace: Unity.Properties.Internal
internal static class PropertyBagStore // TypeDefIndex: 7203
{
	// Fields
	private static readonly ConcurrentDictionary<Type, IPropertyBag> s_PropertyBags; // 0x0
	private static readonly List<Type> s_RegisteredTypes; // 0x8
	[CompilerGenerated]
	private static Action<Type, IPropertyBag> NewTypeRegistered; // 0x10
	private static ReflectedPropertyBagProvider s_PropertyBagProvider; // 0x18

	// Methods

	// RVA: 0x13D3A50 Offset: 0x13CFA50 VA: 0x13D3A50
	private static void .cctor() { }

	// RVA: -1 Offset: -1
	internal static void AddPropertyBag<TContainer>(IPropertyBag<TContainer> propertyBag) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA3E3C Offset: 0xB9FE3C VA: 0xBA3E3C
	|-PropertyBagStore.AddPropertyBag<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal static IPropertyBag<TContainer> GetPropertyBag<TContainer>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA43A0 Offset: 0xBA03A0 VA: 0xBA43A0
	|-PropertyBagStore.GetPropertyBag<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D0E9C Offset: 0x13CCE9C VA: 0x13D0E9C
	internal static IPropertyBag GetPropertyBag(Type type) { }
}


// Namespace: Unity.Properties.Internal
internal class ReflectedPropertyBag<TContainer> : ContainerPropertyBag<TContainer> // TypeDefIndex: 7204
{
	// Methods

	// RVA: -1 Offset: -1
	internal void AddProperty<TValue>(Property<TContainer, TValue> property) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB69B34 Offset: 0xB65B34 VA: 0xB69B34
	|-ReflectedPropertyBag<__Il2CppFullySharedGenericType>.AddProperty<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC56684 Offset: 0xC52684 VA: 0xC56684
	|-ReflectedPropertyBag<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ReflectedPropertyBagProvider.<>c // TypeDefIndex: 7205
{
	// Fields
	public static readonly ReflectedPropertyBagProvider.<>c <>9; // 0x0
	public static Func<MethodInfo, bool> <>9__10_0; // 0x8
	public static Func<MemberInfo, int> <>9__22_0; // 0x10

	// Methods

	// RVA: 0x13D42EC Offset: 0x13D02EC VA: 0x13D42EC
	private static void .cctor() { }

	// RVA: 0x13D4348 Offset: 0x13D0348 VA: 0x13D4348
	public void .ctor() { }

	// RVA: 0x13D4350 Offset: 0x13D0350 VA: 0x13D4350
	internal bool <.ctor>b__10_0(MethodInfo x) { }

	// RVA: 0x13D43D8 Offset: 0x13D03D8 VA: 0x13D43D8
	internal int <GetPropertyMembers>b__22_0(MemberInfo x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class ReflectedPropertyBagProvider.<GetPropertyMembers>d__22 : IEnumerable<MemberInfo>, IEnumerable, IEnumerator<MemberInfo>, IEnumerator, IDisposable // TypeDefIndex: 7206
{
	// Fields
	private int <>1__state; // 0x10
	private MemberInfo <>2__current; // 0x18
	private int <>l__initialThreadId; // 0x20
	private Type type; // 0x28
	public Type <>3__type; // 0x30
	private IOrderedEnumerable<MemberInfo> <members>5__1; // 0x38
	private IEnumerator<MemberInfo> <>s__2; // 0x40
	private MemberInfo <member>5__3; // 0x48
	private bool <hasDontCreatePropertyAttribute>5__4; // 0x50
	private bool <hasCreatePropertyAttribute>5__5; // 0x51
	private bool <hasNonSerializedAttribute>5__6; // 0x52
	private bool <hasSerializedFieldAttribute>5__7; // 0x53
	private FieldInfo <field>5__8; // 0x58

	// Properties
	private MemberInfo System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x13D408C Offset: 0x13D008C VA: 0x13D408C
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x13D4400 Offset: 0x13D0400 VA: 0x13D4400 Slot: 7
	private void System.IDisposable.Dispose() { }

	// RVA: 0x13D442C Offset: 0x13D042C VA: 0x13D442C Slot: 8
	private bool MoveNext() { }

	// RVA: 0x13D4B44 Offset: 0x13D0B44 VA: 0x13D4B44
	private void <>m__Finally1() { }

	[DebuggerHidden]
	// RVA: 0x13D4BF4 Offset: 0x13D0BF4 VA: 0x13D4BF4 Slot: 6
	private MemberInfo System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x13D4BFC Offset: 0x13D0BFC VA: 0x13D4BFC Slot: 10
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x13D4C34 Offset: 0x13D0C34 VA: 0x13D4C34 Slot: 9
	private object System.Collections.IEnumerator.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x13D4C3C Offset: 0x13D0C3C VA: 0x13D4C3C Slot: 4
	private IEnumerator<MemberInfo> System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator() { }

	[DebuggerHidden]
	// RVA: 0x13D4CD8 Offset: 0x13D0CD8 VA: 0x13D4CD8 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
}


// Namespace: Unity.Properties.Internal
internal class ReflectedPropertyBagProvider // TypeDefIndex: 7207
{
	// Fields
	private readonly MethodInfo m_CreatePropertyMethod; // 0x10
	private readonly MethodInfo m_CreatePropertyBagMethod; // 0x18
	private readonly MethodInfo m_CreateIndexedCollectionPropertyBagMethod; // 0x20
	private readonly MethodInfo m_CreateSetPropertyBagMethod; // 0x28
	private readonly MethodInfo m_CreateKeyValueCollectionPropertyBagMethod; // 0x30
	private readonly MethodInfo m_CreateKeyValuePairPropertyBagMethod; // 0x38
	private readonly MethodInfo m_CreateArrayPropertyBagMethod; // 0x40
	private readonly MethodInfo m_CreateListPropertyBagMethod; // 0x48
	private readonly MethodInfo m_CreateHashSetPropertyBagMethod; // 0x50
	private readonly MethodInfo m_CreateDictionaryPropertyBagMethod; // 0x58

	// Methods

	// RVA: 0x13D3B60 Offset: 0x13CFB60 VA: 0x13D3B60
	public void .ctor() { }

	// RVA: 0x13D3EF8 Offset: 0x13CFEF8 VA: 0x13D3EF8
	public IPropertyBag CreatePropertyBag(Type type) { }

	// RVA: -1 Offset: -1
	public IPropertyBag<TContainer> CreatePropertyBag<TContainer>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA5490 Offset: 0xBA1490 VA: 0xBA5490
	|-ReflectedPropertyBagProvider.CreatePropertyBag<__Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private void CreateProperty<TContainer, TValue>(IMemberInfo member, ReflectedPropertyBag<TContainer> propertyBag) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA5330 Offset: 0xBA1330 VA: 0xBA5330
	|-ReflectedPropertyBagProvider.CreateProperty<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<TList> CreateIndexedCollectionPropertyBag<TList, TElement>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA5200 Offset: 0xBA1200 VA: 0xBA5200
	|-ReflectedPropertyBagProvider.CreateIndexedCollectionPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<TSet> CreateSetPropertyBag<TSet, TValue>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA67E0 Offset: 0xBA27E0 VA: 0xBA67E0
	|-ReflectedPropertyBagProvider.CreateSetPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<TDictionary> CreateKeyValueCollectionPropertyBag<TDictionary, TKey, TValue>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA524C Offset: 0xBA124C VA: 0xBA524C
	|-ReflectedPropertyBagProvider.CreateKeyValueCollectionPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<KeyValuePair<TKey, TValue>> CreateKeyValuePairPropertyBag<TKey, TValue>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA5298 Offset: 0xBA1298 VA: 0xBA5298
	|-ReflectedPropertyBagProvider.CreateKeyValuePairPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<TElement[]> CreateArrayPropertyBag<TElement>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA511C Offset: 0xBA111C VA: 0xBA511C
	|-ReflectedPropertyBagProvider.CreateArrayPropertyBag<__Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<List<TElement>> CreateListPropertyBag<TElement>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA52E4 Offset: 0xBA12E4 VA: 0xBA52E4
	|-ReflectedPropertyBagProvider.CreateListPropertyBag<__Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<HashSet<TElement>> CreateHashSetPropertyBag<TElement>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA51B4 Offset: 0xBA11B4 VA: 0xBA51B4
	|-ReflectedPropertyBagProvider.CreateHashSetPropertyBag<__Il2CppFullySharedGenericType>
	*/

	[Preserve]
	// RVA: -1 Offset: -1
	private IPropertyBag<Dictionary<TKey, TValue>> CreateDictionaryPropertyBag<TKey, TValue>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA5168 Offset: 0xBA1168 VA: 0xBA5168
	|-ReflectedPropertyBagProvider.CreateDictionaryPropertyBag<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13D401C Offset: 0x13D001C VA: 0x13D401C
	private static IEnumerable<MemberInfo> GetPropertyMembers(Type type) { }

	// RVA: 0x13D40C0 Offset: 0x13D00C0 VA: 0x13D40C0
	private static bool IsValidMember(MemberInfo memberInfo) { }

	// RVA: 0x13D41F8 Offset: 0x13D01F8 VA: 0x13D41F8
	private static bool IsValidPropertyType(Type type) { }
}


// Namespace: Unity.Properties.Internal
internal static class ReflectionUtilities // TypeDefIndex: 7208
{
	// Methods

	// RVA: 0x13CF90C Offset: 0x13CB90C VA: 0x13CF90C
	public static string SanitizeMemberName(MemberInfo info) { }
}
