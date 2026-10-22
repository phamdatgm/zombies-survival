// Namespace: 
internal class <Module> // TypeDefIndex: 3899
{}


// Namespace: 
internal static class SR // TypeDefIndex: 3900
{
	// Methods

	// RVA: 0xFD7E98 Offset: 0xFD3E98 VA: 0xFD7E98
	internal static string GetString(string name) { }

	// RVA: 0xFD7E9C Offset: 0xFD3E9C VA: 0xFD7E9C
	internal static string Format(string resourceFormat, object p1) { }

	// RVA: 0xFD7F0C Offset: 0xFD3F0C VA: 0xFD7F0C
	internal static string Format(string resourceFormat, object p1, object p2) { }

	// RVA: 0xFD7F84 Offset: 0xFD3F84 VA: 0xFD7F84
	internal static string Format(string resourceFormat, object p1, object p2, object p3) { }
}


// Namespace: System
internal static class LocalAppContextSwitches // TypeDefIndex: 3901
{
	// Fields
	private static int s_allowArbitraryTypeInstantiation; // 0x0

	// Properties
	public static bool AllowArbitraryTypeInstantiation { get; }

	// Methods

	// RVA: 0xFD800C Offset: 0xFD400C VA: 0xFD800C
	public static bool get_AllowArbitraryTypeInstantiation() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class LocalAppContext.<>c // TypeDefIndex: 3902
{
	// Fields
	public static readonly LocalAppContext.<>c <>9; // 0x0
	public static Func<bool> <>9__6_0; // 0x8

	// Methods

	// RVA: 0xFD8264 Offset: 0xFD4264 VA: 0xFD8264
	private static void .cctor() { }

	// RVA: 0xFD82C0 Offset: 0xFD42C0 VA: 0xFD82C0
	public void .ctor() { }

	// RVA: 0xFD82C8 Offset: 0xFD42C8 VA: 0xFD82C8
	internal bool <get_DisableCaching>b__6_0() { }
}


// Namespace: System
internal class LocalAppContext // TypeDefIndex: 3903
{
	// Fields
	private static bool s_isDisableCachingInitialized; // 0x0
	private static bool s_disableCaching; // 0x1
	private static object s_syncObject; // 0x8

	// Properties
	private static bool DisableCaching { get; }

	// Methods

	// RVA: 0xFD808C Offset: 0xFD408C VA: 0xFD808C
	internal static bool GetCachedSwitchValue(string switchName, ref int switchValue) { }

	// RVA: 0xFD80AC Offset: 0xFD40AC VA: 0xFD80AC
	private static bool GetCachedSwitchValueInternal(string switchName, ref int switchValue) { }

	// RVA: 0xFD8140 Offset: 0xFD4140 VA: 0xFD8140
	private static bool get_DisableCaching() { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public class DataColumn : MarshalByValueComponent // TypeDefIndex: 3904
{
	// Fields
	private bool _allowNull; // 0x20
	private string _caption; // 0x28
	private string _columnName; // 0x30
	private Type _dataType; // 0x38
	private StorageType _storageType; // 0x40
	internal object _defaultValue; // 0x48
	private DataSetDateTime _dateTimeMode; // 0x50
	private DataExpression _expression; // 0x58
	private int _maxLength; // 0x60
	private int _ordinal; // 0x64
	private bool _readOnly; // 0x68
	internal Index _sortIndex; // 0x70
	internal DataTable _table; // 0x78
	private bool _unique; // 0x80
	internal MappingType _columnMapping; // 0x84
	internal int _hashCode; // 0x88
	internal int _errors; // 0x8C
	private bool _isSqlType; // 0x90
	private bool _implementsINullable; // 0x91
	private bool _implementsIChangeTracking; // 0x92
	private bool _implementsIRevertibleChangeTracking; // 0x93
	private bool _implementsIXMLSerializable; // 0x94
	private bool _defaultValueIsNull; // 0x95
	internal List<DataColumn> _dependentColumns; // 0x98
	internal PropertyCollection _extendedProperties; // 0xA0
	private DataStorage _storage; // 0xA8
	private AutoIncrementValue _autoInc; // 0xB0
	internal string _columnUri; // 0xB8
	private string _columnPrefix; // 0xC0
	internal string _encodedColumnName; // 0xC8
	internal SimpleType _simpleType; // 0xD0
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0xD8
	[CompilerGenerated]
	private string <XmlDataType>k__BackingField; // 0xE0
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging; // 0xE8

	// Properties
	[DefaultValue(True)]
	public bool AllowDBNull { set; }
	[DefaultValue(False)]
	public bool AutoIncrement { get; set; }
	internal object AutoIncrementCurrent { get; set; }
	internal AutoIncrementValue AutoInc { get; }
	[DefaultValue(0)]
	public long AutoIncrementSeed { get; set; }
	[DefaultValue(1)]
	public long AutoIncrementStep { get; set; }
	public string Caption { get; set; }
	[DefaultValue("")]
	public string ColumnName { get; set; }
	internal string EncodedColumnName { get; }
	internal IFormatProvider FormatProvider { get; }
	internal CultureInfo Locale { get; }
	[DefaultValue("")]
	public string Prefix { set; }
	internal bool Computed { get; }
	[TypeConverter(typeof(ColumnTypeConverter))]
	[DefaultValue(typeof(string))]
	public Type DataType { get; set; }
	[DefaultValue(3)]
	public DataSetDateTime DateTimeMode { set; }
	[TypeConverter(typeof(DefaultValueTypeConverter))]
	public object DefaultValue { get; set; }
	[DefaultValue("")]
	public string Expression { get; set; }
	[Browsable(False)]
	public PropertyCollection ExtendedProperties { get; }
	internal bool HasData { get; }
	internal bool IsValueType { get; }
	[DefaultValue(-1)]
	public int MaxLength { set; }
	public string Namespace { get; set; }
	[DefaultValue(False)]
	public bool ReadOnly { set; }
	private Index SortIndex { get; }
	[DesignerSerializationVisibility(0)]
	[Browsable(False)]
	public DataTable Table { get; }
	internal object Item { get; set; }
	[DefaultValue(False)]
	[DesignerSerializationVisibility(0)]
	public bool Unique { set; }
	internal SimpleType SimpleType { set; }
	[DefaultValue(1)]
	public virtual MappingType ColumnMapping { set; }
	internal bool IsCustomType { get; }

	// Methods

	// RVA: 0xFD8340 Offset: 0xFD4340 VA: 0xFD8340
	public void .ctor() { }

	// RVA: 0xFD8650 Offset: 0xFD4650 VA: 0xFD8650
	public void .ctor(string columnName, Type dataType) { }

	// RVA: 0xFD83D0 Offset: 0xFD43D0 VA: 0xFD83D0
	public void .ctor(string columnName, Type dataType, string expr, MappingType type) { }

	// RVA: 0xFD8754 Offset: 0xFD4754 VA: 0xFD8754
	private void UpdateColumnType(Type type, StorageType typeCode) { }

	// RVA: 0xFD8FC0 Offset: 0xFD4FC0 VA: 0xFD8FC0
	public void set_AllowDBNull(bool value) { }

	// RVA: 0xFD95F0 Offset: 0xFD55F0 VA: 0xFD95F0
	public bool get_AutoIncrement() { }

	// RVA: 0xFD9610 Offset: 0xFD5610 VA: 0xFD9610
	public void set_AutoIncrement(bool value) { }

	// RVA: 0xFDA40C Offset: 0xFD640C VA: 0xFDA40C
	internal object get_AutoIncrementCurrent() { }

	// RVA: 0xFDA490 Offset: 0xFD6490 VA: 0xFDA490
	internal void set_AutoIncrementCurrent(object value) { }

	// RVA: 0xFDA318 Offset: 0xFD6318 VA: 0xFDA318
	internal AutoIncrementValue get_AutoInc() { }

	// RVA: 0xFDA478 Offset: 0xFD6478 VA: 0xFDA478
	public long get_AutoIncrementSeed() { }

	// RVA: 0xFDA674 Offset: 0xFD6674 VA: 0xFDA674
	public void set_AutoIncrementSeed(long value) { }

	// RVA: 0xFDA6D4 Offset: 0xFD66D4 VA: 0xFDA6D4
	public long get_AutoIncrementStep() { }

	// RVA: 0xFDA6F0 Offset: 0xFD66F0 VA: 0xFDA6F0
	public void set_AutoIncrementStep(long value) { }

	// RVA: 0xFDA758 Offset: 0xFD6758 VA: 0xFDA758
	public string get_Caption() { }

	// RVA: 0xFDA774 Offset: 0xFD6774 VA: 0xFDA774
	public void set_Caption(string value) { }

	// RVA: 0xFDA864 Offset: 0xFD6864 VA: 0xFDA864
	public string get_ColumnName() { }

	// RVA: 0xFDA86C Offset: 0xFD686C VA: 0xFDA86C
	public void set_ColumnName(string value) { }

	// RVA: 0xFDAC90 Offset: 0xFD6C90 VA: 0xFDAC90
	internal string get_EncodedColumnName() { }

	// RVA: 0xFDA594 Offset: 0xFD6594 VA: 0xFDA594
	internal IFormatProvider get_FormatProvider() { }

	// RVA: 0xFDA7F8 Offset: 0xFD67F8 VA: 0xFDA7F8
	internal CultureInfo get_Locale() { }

	// RVA: 0xFDAD88 Offset: 0xFD6D88 VA: 0xFDAD88
	public void set_Prefix(string value) { }

	// RVA: 0xFDAEBC Offset: 0xFD6EBC VA: 0xFDAEBC
	internal string GetColumnValueAsString(DataRow row, DataRowVersion version) { }

	// RVA: 0xFDAFE0 Offset: 0xFD6FE0 VA: 0xFDAFE0
	internal bool get_Computed() { }

	// RVA: 0xFDAFF0 Offset: 0xFD6FF0 VA: 0xFDAFF0
	public Type get_DataType() { }

	// RVA: 0xFD9B00 Offset: 0xFD5B00 VA: 0xFD9B00
	public void set_DataType(Type value) { }

	// RVA: 0xFDB6EC Offset: 0xFD76EC VA: 0xFDB6EC
	public void set_DateTimeMode(DataSetDateTime value) { }

	// RVA: 0xFDB200 Offset: 0xFD7200 VA: 0xFDB200
	public object get_DefaultValue() { }

	// RVA: 0xFDB324 Offset: 0xFD7324 VA: 0xFDB324
	public void set_DefaultValue(object value) { }

	// RVA: 0xFDBA50 Offset: 0xFD7A50 VA: 0xFDBA50
	public string get_Expression() { }

	// RVA: 0xFD886C Offset: 0xFD486C VA: 0xFD886C
	public void set_Expression(string value) { }

	// RVA: 0xFDC2AC Offset: 0xFD82AC VA: 0xFDC2AC
	public PropertyCollection get_ExtendedProperties() { }

	// RVA: 0xFD9AA4 Offset: 0xFD5AA4 VA: 0xFD9AA4
	internal bool get_HasData() { }

	// RVA: 0xFDC310 Offset: 0xFD8310 VA: 0xFDC310
	internal bool get_IsValueType() { }

	// RVA: 0xFDC32C Offset: 0xFD832C VA: 0xFDC32C
	private void SetMaxLengthSimpleType() { }

	// RVA: 0xFDC3A8 Offset: 0xFD83A8 VA: 0xFDC3A8
	public void set_MaxLength(int value) { }

	// RVA: 0xFDCBD8 Offset: 0xFD8BD8 VA: 0xFDCBD8
	public string get_Namespace() { }

	// RVA: 0xFDCCD0 Offset: 0xFD8CD0 VA: 0xFDCCD0
	public void set_Namespace(string value) { }

	// RVA: 0xFDCDD0 Offset: 0xFD8DD0 VA: 0xFDCDD0
	internal void SetOrdinalInternal(int ordinal) { }

	// RVA: 0xFDBB4C Offset: 0xFD7B4C VA: 0xFDBB4C
	public void set_ReadOnly(bool value) { }

	// RVA: 0xFDCF40 Offset: 0xFD8F40 VA: 0xFDCF40
	private Index get_SortIndex() { }

	// RVA: 0xFDD1C8 Offset: 0xFD91C8 VA: 0xFDD1C8
	public DataTable get_Table() { }

	// RVA: 0xFDD1D0 Offset: 0xFD91D0 VA: 0xFDD1D0
	internal void SetTable(DataTable table) { }

	// RVA: 0xFDD280 Offset: 0xFD9280 VA: 0xFDD280
	private DataRow GetDataRow(int index) { }

	// RVA: 0xFDAF84 Offset: 0xFD6F84 VA: 0xFDAF84
	internal object get_Item(int record) { }

	// RVA: 0xFDD2A4 Offset: 0xFD92A4 VA: 0xFDD2A4
	internal void set_Item(int record, object value) { }

	// RVA: 0xFDBD7C Offset: 0xFD7D7C VA: 0xFDBD7C
	internal void InitializeRecord(int record) { }

	// RVA: 0xFDD4FC Offset: 0xFD94FC VA: 0xFDD4FC
	internal void SetValue(int record, object value) { }

	// RVA: 0xFDD604 Offset: 0xFD9604 VA: 0xFDD604
	internal void FreeRecord(int record) { }

	// RVA: 0xFDD628 Offset: 0xFD9628 VA: 0xFDD628
	public void set_Unique(bool value) { }

	// RVA: 0xFD8718 Offset: 0xFD4718 VA: 0xFD8718
	internal void set_SimpleType(SimpleType value) { }

	// RVA: 0xFDDB30 Offset: 0xFD9B30 VA: 0xFDDB30 Slot: 10
	public virtual void set_ColumnMapping(MappingType value) { }

	// RVA: 0xFDDEA8 Offset: 0xFD9EA8 VA: 0xFDDEA8
	internal void CheckColumnConstraint(DataRow row, DataRowAction action) { }

	// RVA: 0xFDC7B8 Offset: 0xFD87B8 VA: 0xFDC7B8
	internal bool CheckMaxLength() { }

	// RVA: 0xFDDFAC Offset: 0xFD9FAC VA: 0xFDDFAC
	internal void CheckMaxLength(DataRow dr) { }

	// RVA: 0xFD91B8 Offset: 0xFD51B8 VA: 0xFD91B8
	protected internal void CheckNotAllowNull() { }

	// RVA: 0xFDDF34 Offset: 0xFD9F34 VA: 0xFDDF34
	internal void CheckNullable(DataRow row) { }

	// RVA: 0xFDDAE4 Offset: 0xFD9AE4 VA: 0xFDDAE4
	protected void CheckUnique() { }

	// RVA: 0xFDE180 Offset: 0xFDA180 VA: 0xFDE180
	internal int Compare(int record1, int record2) { }

	// RVA: 0xFDE1A0 Offset: 0xFDA1A0 VA: 0xFDE1A0
	internal bool CompareValueTo(int record1, object value, bool checkType) { }

	// RVA: 0xFDE380 Offset: 0xFDA380 VA: 0xFDE380
	internal int CompareValueTo(int record1, object value) { }

	// RVA: 0xFDE3A0 Offset: 0xFDA3A0 VA: 0xFDE3A0
	internal object ConvertValue(object value) { }

	// RVA: 0xFDE3C0 Offset: 0xFDA3C0 VA: 0xFDE3C0
	internal void Copy(int srcRecordNo, int dstRecordNo) { }

	// RVA: 0xFDE3E0 Offset: 0xFDA3E0 VA: 0xFDE3E0
	internal DataColumn Clone() { }

	// RVA: 0xFDE9D0 Offset: 0xFDA9D0 VA: 0xFDE9D0
	internal object GetAggregateValue(int[] records, AggregateType kind) { }

	// RVA: 0xFDE028 Offset: 0xFDA028 VA: 0xFDE028
	private int GetStringLength(int record) { }

	// RVA: 0xFDEA94 Offset: 0xFDAA94 VA: 0xFDEA94
	internal void Init(int record) { }

	// RVA: 0xFD97C8 Offset: 0xFD57C8 VA: 0xFD97C8
	internal static bool IsAutoIncrementType(Type dataType) { }

	// RVA: 0xFDEB20 Offset: 0xFDAB20 VA: 0xFDEB20
	internal bool get_IsCustomType() { }

	// RVA: 0xFDEB94 Offset: 0xFDAB94 VA: 0xFDEB94
	internal bool IsValueCustomTypeInstance(object value) { }

	// RVA: 0xFDB078 Offset: 0xFD7078 VA: 0xFDB078
	internal bool IsInRelation() { }

	// RVA: 0xFDED38 Offset: 0xFDAD38 VA: 0xFDED38
	internal bool IsMaxLengthViolated() { }

	// RVA: 0xFDF2EC Offset: 0xFDB2EC VA: 0xFDF2EC
	internal bool IsNotAllowDBNullViolated() { }

	// RVA: 0xFDF45C Offset: 0xFDB45C VA: 0xFDF45C Slot: 11
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent) { }

	// RVA: 0xFDAC1C Offset: 0xFD6C1C VA: 0xFDAC1C
	protected internal void RaisePropertyChanging(string name) { }

	// RVA: 0xFDF484 Offset: 0xFDB484 VA: 0xFDF484
	private void InsureStorage() { }

	// RVA: 0xFDF4FC Offset: 0xFDB4FC VA: 0xFDF4FC
	internal void SetCapacity(int capacity) { }

	// RVA: 0xFDF538 Offset: 0xFDB538 VA: 0xFDF538
	internal void OnSetDataSet() { }

	// RVA: 0xFDF53C Offset: 0xFDB53C VA: 0xFDF53C Slot: 3
	public override string ToString() { }

	// RVA: 0xFDF5B0 Offset: 0xFDB5B0 VA: 0xFDF5B0
	internal object ConvertXmlToObject(string s) { }

	// RVA: 0xFDF5EC Offset: 0xFDB5EC VA: 0xFDF5EC
	internal object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib) { }

	// RVA: 0xFDAFA4 Offset: 0xFD6FA4 VA: 0xFDAFA4
	internal string ConvertObjectToXml(object value) { }

	// RVA: 0xFDF630 Offset: 0xFDB630 VA: 0xFDF630
	internal void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib) { }

	// RVA: 0xFDF684 Offset: 0xFDB684 VA: 0xFDF684
	internal object GetEmptyColumnStore(int recordCount) { }

	// RVA: 0xFDF6B8 Offset: 0xFDB6B8 VA: 0xFDF6B8
	internal void CopyValueIntoStore(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0xFDF6D4 Offset: 0xFDB6D4 VA: 0xFDF6D4
	internal void SetStorage(object store, BitArray nullbits) { }

	// RVA: 0xFDF710 Offset: 0xFDB710 VA: 0xFDF710
	internal void AddDependentColumn(DataColumn expressionColumn) { }

	// RVA: 0xFDF898 Offset: 0xFDB898 VA: 0xFDF898
	internal void RemoveDependentColumn(DataColumn expressionColumn) { }

	// RVA: 0xFDBC54 Offset: 0xFD7C54 VA: 0xFDBC54
	internal void HandleDependentColumnList(DataExpression oldExpression, DataExpression newExpression) { }
}


// Namespace: System.Data
internal abstract class AutoIncrementValue // TypeDefIndex: 3905
{
	// Fields
	[CompilerGenerated]
	private bool <Auto>k__BackingField; // 0x10

	// Properties
	internal abstract object Current { get; set; }
	internal abstract long Seed { get; set; }
	internal abstract long Step { get; set; }
	internal abstract Type DataType { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	internal abstract object get_Current();

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract void set_Current(object value);

	// RVA: -1 Offset: -1 Slot: 6
	internal abstract long get_Seed();

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract void set_Seed(long value);

	// RVA: -1 Offset: -1 Slot: 8
	internal abstract long get_Step();

	// RVA: -1 Offset: -1 Slot: 9
	internal abstract void set_Step(long value);

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract Type get_DataType();

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract void SetCurrent(object value, IFormatProvider formatProvider);

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract void SetCurrentAndIncrement(object value);

	// RVA: -1 Offset: -1 Slot: 13
	internal abstract void MoveAfter();

	// RVA: 0xFDE8C0 Offset: 0xFDA8C0 VA: 0xFDE8C0
	internal AutoIncrementValue Clone() { }

	// RVA: 0xFDF9BC Offset: 0xFDB9BC VA: 0xFDF9BC
	protected void .ctor() { }
}


// Namespace: System.Data
internal sealed class AutoIncrementInt64 : AutoIncrementValue // TypeDefIndex: 3906
{
	// Fields
	private long _current; // 0x18
	private long _seed; // 0x20
	private long _step; // 0x28

	// Properties
	internal override object Current { get; set; }
	internal override Type DataType { get; }
	internal override long Seed { get; set; }
	internal override long Step { get; set; }

	// Methods

	// RVA: 0xFDF9C4 Offset: 0xFDB9C4 VA: 0xFDF9C4 Slot: 4
	internal override object get_Current() { }

	// RVA: 0xFDFA20 Offset: 0xFDBA20 VA: 0xFDFA20 Slot: 5
	internal override void set_Current(object value) { }

	// RVA: 0xFDFA98 Offset: 0xFDBA98 VA: 0xFDFA98 Slot: 10
	internal override Type get_DataType() { }

	// RVA: 0xFDFB04 Offset: 0xFDBB04 VA: 0xFDFB04 Slot: 6
	internal override long get_Seed() { }

	// RVA: 0xFDFB0C Offset: 0xFDBB0C VA: 0xFDFB0C Slot: 7
	internal override void set_Seed(long value) { }

	// RVA: 0xFDFC6C Offset: 0xFDBC6C VA: 0xFDFC6C Slot: 8
	internal override long get_Step() { }

	// RVA: 0xFDFC74 Offset: 0xFDBC74 VA: 0xFDFC74 Slot: 9
	internal override void set_Step(long value) { }

	// RVA: 0xFDFD0C Offset: 0xFDBD0C VA: 0xFDFD0C Slot: 13
	internal override void MoveAfter() { }

	// RVA: 0xFDFD20 Offset: 0xFDBD20 VA: 0xFDFD20 Slot: 11
	internal override void SetCurrent(object value, IFormatProvider formatProvider) { }

	// RVA: 0xFDFD94 Offset: 0xFDBD94 VA: 0xFDFD94 Slot: 12
	internal override void SetCurrentAndIncrement(object value) { }

	// RVA: 0xFDFB9C Offset: 0xFDBB9C VA: 0xFDFB9C
	private bool BoundaryCheck(BigInteger value) { }

	// RVA: 0xFDA5FC Offset: 0xFD65FC VA: 0xFDA5FC
	public void .ctor() { }
}


// Namespace: System.Data
internal sealed class AutoIncrementBigInteger : AutoIncrementValue // TypeDefIndex: 3907
{
	// Fields
	private BigInteger _current; // 0x18
	private long _seed; // 0x28
	private BigInteger _step; // 0x30

	// Properties
	internal override object Current { get; set; }
	internal override Type DataType { get; }
	internal override long Seed { get; set; }
	internal override long Step { get; set; }

	// Methods

	// RVA: 0xFDFEFC Offset: 0xFDBEFC VA: 0xFDFEFC Slot: 4
	internal override object get_Current() { }

	// RVA: 0xFDFF58 Offset: 0xFDBF58 VA: 0xFDFF58 Slot: 5
	internal override void set_Current(object value) { }

	// RVA: 0xFDFFD0 Offset: 0xFDBFD0 VA: 0xFDFFD0 Slot: 10
	internal override Type get_DataType() { }

	// RVA: 0xFE003C Offset: 0xFDC03C VA: 0xFE003C Slot: 6
	internal override long get_Seed() { }

	// RVA: 0xFE0044 Offset: 0xFDC044 VA: 0xFE0044 Slot: 7
	internal override void set_Seed(long value) { }

	// RVA: 0xFE024C Offset: 0xFDC24C VA: 0xFE024C Slot: 8
	internal override long get_Step() { }

	// RVA: 0xFE02AC Offset: 0xFDC2AC VA: 0xFE02AC Slot: 9
	internal override void set_Step(long value) { }

	// RVA: 0xFE0400 Offset: 0xFDC400 VA: 0xFE0400 Slot: 13
	internal override void MoveAfter() { }

	// RVA: 0xFE047C Offset: 0xFDC47C VA: 0xFE047C Slot: 11
	internal override void SetCurrent(object value, IFormatProvider formatProvider) { }

	// RVA: 0xFE04A0 Offset: 0xFDC4A0 VA: 0xFE04A0 Slot: 12
	internal override void SetCurrentAndIncrement(object value) { }

	// RVA: 0xFE0124 Offset: 0xFDC124 VA: 0xFE0124
	private bool BoundaryCheck(BigInteger value) { }

	// RVA: 0xFDA60C Offset: 0xFD660C VA: 0xFDA60C
	public void .ctor() { }
}


// Namespace: System.Data
[Serializable]
public class DataException : SystemException // TypeDefIndex: 3908
{
	// Methods

	// RVA: 0xFE0560 Offset: 0xFDC560 VA: 0xFE0560
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0568 Offset: 0xFDC568 VA: 0xFE0568
	public void .ctor() { }

	// RVA: 0xFE05C4 Offset: 0xFDC5C4 VA: 0xFE05C4
	public void .ctor(string s) { }

	// RVA: 0xFE05E8 Offset: 0xFDC5E8 VA: 0xFE05E8
	public void .ctor(string s, Exception innerException) { }
}


// Namespace: System.Data
[Serializable]
public class ConstraintException : DataException // TypeDefIndex: 3909
{
	// Methods

	// RVA: 0xFE05F0 Offset: 0xFDC5F0 VA: 0xFE05F0
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE05F8 Offset: 0xFDC5F8 VA: 0xFE05F8
	public void .ctor() { }

	// RVA: 0xFE0654 Offset: 0xFDC654 VA: 0xFE0654
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class DeletedRowInaccessibleException : DataException // TypeDefIndex: 3910
{
	// Methods

	// RVA: 0xFE0678 Offset: 0xFDC678 VA: 0xFE0678
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0680 Offset: 0xFDC680 VA: 0xFE0680
	public void .ctor() { }

	// RVA: 0xFE06DC Offset: 0xFDC6DC VA: 0xFE06DC
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class DuplicateNameException : DataException // TypeDefIndex: 3911
{
	// Methods

	// RVA: 0xFE0700 Offset: 0xFDC700 VA: 0xFE0700
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0708 Offset: 0xFDC708 VA: 0xFE0708
	public void .ctor() { }

	// RVA: 0xFE0764 Offset: 0xFDC764 VA: 0xFE0764
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class InRowChangingEventException : DataException // TypeDefIndex: 3912
{
	// Methods

	// RVA: 0xFE0788 Offset: 0xFDC788 VA: 0xFE0788
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0790 Offset: 0xFDC790 VA: 0xFE0790
	public void .ctor() { }

	// RVA: 0xFE07EC Offset: 0xFDC7EC VA: 0xFE07EC
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class InvalidConstraintException : DataException // TypeDefIndex: 3913
{
	// Methods

	// RVA: 0xFE0810 Offset: 0xFDC810 VA: 0xFE0810
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0818 Offset: 0xFDC818 VA: 0xFE0818
	public void .ctor() { }

	// RVA: 0xFE0874 Offset: 0xFDC874 VA: 0xFE0874
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class NoNullAllowedException : DataException // TypeDefIndex: 3914
{
	// Methods

	// RVA: 0xFE0898 Offset: 0xFDC898 VA: 0xFE0898
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE08A0 Offset: 0xFDC8A0 VA: 0xFE08A0
	public void .ctor() { }

	// RVA: 0xFE08FC Offset: 0xFDC8FC VA: 0xFE08FC
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class ReadOnlyException : DataException // TypeDefIndex: 3915
{
	// Methods

	// RVA: 0xFE0920 Offset: 0xFDC920 VA: 0xFE0920
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0928 Offset: 0xFDC928 VA: 0xFE0928
	public void .ctor() { }

	// RVA: 0xFE0984 Offset: 0xFDC984 VA: 0xFE0984
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class RowNotInTableException : DataException // TypeDefIndex: 3916
{
	// Methods

	// RVA: 0xFE09A8 Offset: 0xFDC9A8 VA: 0xFE09A8
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE09B0 Offset: 0xFDC9B0 VA: 0xFE09B0
	public void .ctor() { }

	// RVA: 0xFE0A0C Offset: 0xFDCA0C VA: 0xFE0A0C
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class VersionNotFoundException : DataException // TypeDefIndex: 3917
{
	// Methods

	// RVA: 0xFE0A30 Offset: 0xFDCA30 VA: 0xFE0A30
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE0A38 Offset: 0xFDCA38 VA: 0xFE0A38
	public void .ctor() { }

	// RVA: 0xFE0A94 Offset: 0xFDCA94 VA: 0xFE0A94
	public void .ctor(string s) { }
}


// Namespace: System.Data
internal static class ExceptionBuilder // TypeDefIndex: 3918
{
	// Methods

	// RVA: 0xFE0AB8 Offset: 0xFDCAB8 VA: 0xFE0AB8
	private static void TraceException(string trace, Exception e) { }

	// RVA: 0xFE0ABC Offset: 0xFDCABC VA: 0xFE0ABC
	internal static Exception TraceExceptionAsReturnValue(Exception e) { }

	// RVA: 0xFDBB98 Offset: 0xFD7B98 VA: 0xFDBB98
	internal static Exception TraceExceptionForCapture(Exception e) { }

	// RVA: 0xFDC270 Offset: 0xFD8270 VA: 0xFDC270
	internal static Exception TraceExceptionWithoutRethrow(Exception e) { }

	// RVA: 0xFE0AF8 Offset: 0xFDCAF8 VA: 0xFE0AF8
	internal static Exception _Argument(string error) { }

	// RVA: 0xFE0B74 Offset: 0xFDCB74 VA: 0xFE0B74
	internal static Exception _Argument(string error, Exception innerException) { }

	// RVA: 0xFE0C00 Offset: 0xFDCC00 VA: 0xFE0C00
	private static Exception _ArgumentNull(string paramName, string msg) { }

	// RVA: 0xFE0C8C Offset: 0xFDCC8C VA: 0xFE0C8C
	internal static Exception _ArgumentOutOfRange(string paramName, string msg) { }

	// RVA: 0xFE0D18 Offset: 0xFDCD18 VA: 0xFE0D18
	private static Exception _IndexOutOfRange(string error) { }

	// RVA: 0xFE0D94 Offset: 0xFDCD94 VA: 0xFE0D94
	private static Exception _InvalidOperation(string error) { }

	// RVA: 0xFE0E10 Offset: 0xFDCE10 VA: 0xFE0E10
	private static Exception _InvalidEnumArgumentException(string error) { }

	// RVA: -1 Offset: -1
	private static Exception _InvalidEnumArgumentException<T>(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB87550 Offset: 0xB83550 VA: 0xB87550
	|-ExceptionBuilder._InvalidEnumArgumentException<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0xFE0E8C Offset: 0xFDCE8C VA: 0xFE0E8C
	private static void ThrowDataException(string error, Exception innerException) { }

	// RVA: 0xFE0EDC Offset: 0xFDCEDC VA: 0xFE0EDC
	private static Exception _Data(string error) { }

	// RVA: 0xFE0F64 Offset: 0xFDCF64 VA: 0xFE0F64
	private static Exception _Constraint(string error) { }

	// RVA: 0xFE0FEC Offset: 0xFDCFEC VA: 0xFE0FEC
	private static Exception _InvalidConstraint(string error) { }

	// RVA: 0xFE1074 Offset: 0xFDD074 VA: 0xFE1074
	private static Exception _DeletedRowInaccessible(string error) { }

	// RVA: 0xFE10FC Offset: 0xFDD0FC VA: 0xFE10FC
	private static Exception _DuplicateName(string error) { }

	// RVA: 0xFE1184 Offset: 0xFDD184 VA: 0xFE1184
	private static Exception _InRowChangingEvent(string error) { }

	// RVA: 0xFE120C Offset: 0xFDD20C VA: 0xFE120C
	private static Exception _NoNullAllowed(string error) { }

	// RVA: 0xFE1294 Offset: 0xFDD294 VA: 0xFE1294
	private static Exception _ReadOnly(string error) { }

	// RVA: 0xFE131C Offset: 0xFDD31C VA: 0xFE131C
	private static Exception _RowNotInTable(string error) { }

	// RVA: 0xFE13A4 Offset: 0xFDD3A4 VA: 0xFE13A4
	private static Exception _VersionNotFound(string error) { }

	// RVA: 0xFD865C Offset: 0xFD465C VA: 0xFD865C
	public static Exception ArgumentNull(string paramName) { }

	// RVA: 0xFE142C Offset: 0xFDD42C VA: 0xFE142C
	public static Exception ArgumentOutOfRange(string paramName) { }

	// RVA: 0xFE1480 Offset: 0xFDD480 VA: 0xFE1480
	public static Exception BadObjectPropertyAccess(string error) { }

	// RVA: 0xFE14CC Offset: 0xFDD4CC VA: 0xFE14CC
	public static Exception TypeNotAllowed(Type type) { }

	// RVA: 0xFE1538 Offset: 0xFDD538 VA: 0xFE1538
	public static Exception CaseInsensitiveNameConflict(string name) { }

	// RVA: 0xFE1584 Offset: 0xFDD584 VA: 0xFE1584
	public static Exception NamespaceNameConflict(string name) { }

	// RVA: 0xFE15D0 Offset: 0xFDD5D0 VA: 0xFE15D0
	public static Exception InvalidOffsetLength() { }

	// RVA: 0xFE1610 Offset: 0xFDD610 VA: 0xFE1610
	public static Exception ColumnNotInTheTable(string column, string table) { }

	// RVA: 0xFE166C Offset: 0xFDD66C VA: 0xFE166C
	public static Exception ColumnNotInAnyTable() { }

	// RVA: 0xFE16AC Offset: 0xFDD6AC VA: 0xFE16AC
	public static Exception ColumnOutOfRange(int index) { }

	// RVA: 0xFE173C Offset: 0xFDD73C VA: 0xFE173C
	public static Exception ColumnOutOfRange(string column) { }

	// RVA: 0xFE1788 Offset: 0xFDD788 VA: 0xFE1788
	public static Exception CannotAddColumn1(string column) { }

	// RVA: 0xFE17D4 Offset: 0xFDD7D4 VA: 0xFE17D4
	public static Exception CannotAddColumn2(string column) { }

	// RVA: 0xFDDD38 Offset: 0xFD9D38 VA: 0xFDDD38
	public static Exception CannotAddColumn3() { }

	// RVA: 0xFDDD78 Offset: 0xFD9D78 VA: 0xFDDD78
	public static Exception CannotAddColumn4(string column) { }

	// RVA: 0xFE1820 Offset: 0xFDD820 VA: 0xFE1820
	public static Exception CannotAddDuplicate(string column) { }

	// RVA: 0xFE186C Offset: 0xFDD86C VA: 0xFE186C
	public static Exception CannotAddDuplicate2(string table) { }

	// RVA: 0xFE18B8 Offset: 0xFDD8B8 VA: 0xFE18B8
	public static Exception CannotAddDuplicate3(string table) { }

	// RVA: 0xFE1904 Offset: 0xFDD904 VA: 0xFE1904
	public static Exception CannotRemoveColumn() { }

	// RVA: 0xFE1944 Offset: 0xFDD944 VA: 0xFE1944
	public static Exception CannotRemovePrimaryKey() { }

	// RVA: 0xFE1984 Offset: 0xFDD984 VA: 0xFE1984
	public static Exception CannotRemoveChildKey(string relation) { }

	// RVA: 0xFE19D0 Offset: 0xFDD9D0 VA: 0xFE19D0
	public static Exception CannotRemoveConstraint(string constraint, string table) { }

	// RVA: 0xFE1A2C Offset: 0xFDDA2C VA: 0xFE1A2C
	public static Exception CannotRemoveExpression(string column, string expression) { }

	// RVA: 0xFE1A88 Offset: 0xFDDA88 VA: 0xFE1A88
	public static Exception AddPrimaryKeyConstraint() { }

	// RVA: 0xFE1AC8 Offset: 0xFDDAC8 VA: 0xFE1AC8
	public static Exception NoConstraintName() { }

	// RVA: 0xFE1B08 Offset: 0xFDDB08 VA: 0xFE1B08
	public static Exception ConstraintViolation(string constraint) { }

	// RVA: 0xFE1B54 Offset: 0xFDDB54 VA: 0xFE1B54
	public static string KeysToString(object[] keys) { }

	// RVA: 0xFE1C78 Offset: 0xFDDC78 VA: 0xFE1C78
	public static string UniqueConstraintViolationText(DataColumn[] columns, object[] values) { }

	// RVA: 0xFE1DF8 Offset: 0xFDDDF8 VA: 0xFE1DF8
	public static Exception ConstraintViolation(DataColumn[] columns, object[] values) { }

	// RVA: 0xFE1E08 Offset: 0xFDDE08 VA: 0xFE1E08
	public static Exception ConstraintOutOfRange(int index) { }

	// RVA: 0xFE1E98 Offset: 0xFDDE98 VA: 0xFE1E98
	public static Exception DuplicateConstraint(string constraint) { }

	// RVA: 0xFE1EE4 Offset: 0xFDDEE4 VA: 0xFE1EE4
	public static Exception DuplicateConstraintName(string constraint) { }

	// RVA: 0xFE1F30 Offset: 0xFDDF30 VA: 0xFE1F30
	public static Exception NeededForForeignKeyConstraint(UniqueConstraint key, ForeignKeyConstraint fk) { }

	// RVA: 0xFE1F90 Offset: 0xFDDF90 VA: 0xFE1F90
	public static Exception UniqueConstraintViolation() { }

	// RVA: 0xFE1FD0 Offset: 0xFDDFD0 VA: 0xFE1FD0
	public static Exception ConstraintForeignTable() { }

	// RVA: 0xFE2010 Offset: 0xFDE010 VA: 0xFE2010
	public static Exception ConstraintParentValues() { }

	// RVA: 0xFE2050 Offset: 0xFDE050 VA: 0xFE2050
	public static Exception ConstraintAddFailed(DataTable table) { }

	// RVA: 0xFE20A4 Offset: 0xFDE0A4 VA: 0xFE20A4
	public static Exception ConstraintRemoveFailed() { }

	// RVA: 0xFE20E4 Offset: 0xFDE0E4 VA: 0xFE20E4
	public static Exception FailedCascadeDelete(string constraint) { }

	// RVA: 0xFE2130 Offset: 0xFDE130 VA: 0xFE2130
	public static Exception FailedCascadeUpdate(string constraint) { }

	// RVA: 0xFE217C Offset: 0xFDE17C VA: 0xFE217C
	public static Exception FailedClearParentTable(string table, string constraint, string childTable) { }

	// RVA: 0xFE21E0 Offset: 0xFDE1E0 VA: 0xFE21E0
	public static Exception ForeignKeyViolation(string constraint, object[] keys) { }

	// RVA: 0xFE2248 Offset: 0xFDE248 VA: 0xFE2248
	public static Exception RemoveParentRow(ForeignKeyConstraint constraint) { }

	// RVA: 0xFDF2A4 Offset: 0xFDB2A4 VA: 0xFDF2A4
	public static string MaxLengthViolationText(string columnName) { }

	// RVA: 0xFDF414 Offset: 0xFDB414 VA: 0xFDF414
	public static string NotAllowDBNullViolationText(string columnName) { }

	// RVA: 0xFE229C Offset: 0xFDE29C VA: 0xFE229C
	public static Exception CantAddConstraintToMultipleNestedTable(string tableName) { }

	// RVA: 0xFD9748 Offset: 0xFD5748 VA: 0xFD9748
	public static Exception AutoIncrementAndExpression() { }

	// RVA: 0xFD9788 Offset: 0xFD5788 VA: 0xFD9788
	public static Exception AutoIncrementAndDefaultValue() { }

	// RVA: 0xFDFCCC Offset: 0xFDBCCC VA: 0xFDFCCC
	public static Exception AutoIncrementSeed() { }

	// RVA: 0xFDAFF8 Offset: 0xFD6FF8 VA: 0xFDAFF8
	public static Exception CantChangeDataType() { }

	// RVA: 0xFDB038 Offset: 0xFD7038 VA: 0xFDB038
	public static Exception NullDataType() { }

	// RVA: 0xFDABDC Offset: 0xFD6BDC VA: 0xFDABDC
	public static Exception ColumnNameRequired() { }

	// RVA: 0xFDB968 Offset: 0xFD7968 VA: 0xFDB968
	public static Exception DefaultValueAndAutoIncrement() { }

	// RVA: 0xFDB5B8 Offset: 0xFD75B8 VA: 0xFDB5B8
	public static Exception DefaultValueDataType(string column, Type defaultType, Type columnType, Exception inner) { }

	// RVA: 0xFDB9A8 Offset: 0xFD79A8 VA: 0xFDB9A8
	public static Exception DefaultValueColumnDataType(string column, Type defaultType, Type columnType, Exception inner) { }

	// RVA: 0xFDBAAC Offset: 0xFD7AAC VA: 0xFDBAAC
	public static Exception ExpressionAndUnique() { }

	// RVA: 0xFDBBD4 Offset: 0xFD7BD4 VA: 0xFDBBD4
	public static Exception ExpressionAndReadOnly() { }

	// RVA: 0xFDBAEC Offset: 0xFD7AEC VA: 0xFDBAEC
	public static Exception ExpressionAndConstraint(DataColumn column, Constraint constraint) { }

	// RVA: 0xFE22E8 Offset: 0xFDE2E8 VA: 0xFE22E8
	public static Exception ExpressionInConstraint(DataColumn column) { }

	// RVA: 0xFDBC14 Offset: 0xFD7C14 VA: 0xFDBC14
	public static Exception ExpressionCircular() { }

	// RVA: 0xFDE134 Offset: 0xFDA134 VA: 0xFDE134
	public static Exception NonUniqueValues(string column) { }

	// RVA: 0xFDE09C Offset: 0xFDA09C VA: 0xFDE09C
	public static Exception NullKeyValues(string column) { }

	// RVA: 0xFDE0E8 Offset: 0xFDA0E8 VA: 0xFDE0E8
	public static Exception NullValues(string column) { }

	// RVA: 0xFDCF00 Offset: 0xFD8F00 VA: 0xFDCF00
	public static Exception ReadOnlyAndExpression() { }

	// RVA: 0xFE233C Offset: 0xFDE33C VA: 0xFE233C
	public static Exception ReadOnly(string column) { }

	// RVA: 0xFDDAA4 Offset: 0xFD9AA4 VA: 0xFDDAA4
	public static Exception UniqueAndExpression() { }

	// RVA: 0xFDD424 Offset: 0xFD9424 VA: 0xFDD424
	public static Exception SetFailed(object value, DataColumn column, Type type, Exception innerException) { }

	// RVA: 0xFE2388 Offset: 0xFDE388 VA: 0xFE2388
	public static Exception CannotSetToNull(DataColumn column) { }

	// RVA: 0xFDE048 Offset: 0xFDA048 VA: 0xFDE048
	public static Exception LongerThanMaxLength(DataColumn column) { }

	// RVA: 0xFDCB34 Offset: 0xFD8B34 VA: 0xFDCB34
	public static Exception CannotSetMaxLength(DataColumn column, int value) { }

	// RVA: 0xFDC710 Offset: 0xFD8710 VA: 0xFDC710
	public static Exception CannotSetMaxLength2(DataColumn column) { }

	// RVA: 0xFDB690 Offset: 0xFD7690 VA: 0xFDB690
	public static Exception CannotSetSimpleContentType(string columnName, Type type) { }

	// RVA: 0xFDDCDC Offset: 0xFD9CDC VA: 0xFDDCDC
	public static Exception CannotSetSimpleContent(string columnName, Type type) { }

	// RVA: 0xFDCD84 Offset: 0xFD8D84 VA: 0xFDCD84
	public static Exception CannotChangeNamespace(string columnName) { }

	// RVA: 0xFDC764 Offset: 0xFD8764 VA: 0xFDC764
	public static Exception HasToBeStringType(DataColumn column) { }

	// RVA: 0xFD9AB4 Offset: 0xFD5AB4 VA: 0xFD9AB4
	public static Exception AutoIncrementCannotSetIfHasData(string typeName) { }

	// RVA: 0xFE23DC Offset: 0xFDE3DC VA: 0xFE23DC
	public static Exception INullableUDTwithoutStaticNull(string typeName) { }

	// RVA: 0xFE2428 Offset: 0xFDE428 VA: 0xFE2428
	public static Exception IComparableNotImplemented(string typeName) { }

	// RVA: 0xFE2474 Offset: 0xFDE474 VA: 0xFE2474
	public static Exception UDTImplementsIChangeTrackingButnotIRevertible(string typeName) { }

	// RVA: 0xFE24C0 Offset: 0xFDE4C0 VA: 0xFE24C0
	public static Exception InvalidDataColumnMapping(Type type) { }

	// RVA: 0xFDB818 Offset: 0xFD7818 VA: 0xFDB818
	public static Exception CannotSetDateTimeModeForNonDateTimeColumns() { }

	// RVA: 0xFDB910 Offset: 0xFD7910 VA: 0xFDB910
	public static Exception InvalidDateTimeMode(DataSetDateTime mode) { }

	// RVA: 0xFDB858 Offset: 0xFD7858 VA: 0xFDB858
	public static Exception CantChangeDateTimeMode(DataSetDateTime oldValue, DataSetDateTime newValue) { }

	// RVA: 0xFD86B0 Offset: 0xFD46B0 VA: 0xFD86B0
	public static Exception ColumnTypeNotSupported() { }

	// RVA: 0xFE252C Offset: 0xFDE52C VA: 0xFE252C
	public static Exception SetFailed(string name) { }

	// RVA: 0xFE2578 Offset: 0xFDE578 VA: 0xFE2578
	public static Exception CanNotUse() { }

	// RVA: 0xFE25B8 Offset: 0xFDE5B8 VA: 0xFE25B8
	public static Exception SetIListObject() { }

	// RVA: 0xFE25F8 Offset: 0xFDE5F8 VA: 0xFE25F8
	public static Exception AddNewNotAllowNull() { }

	// RVA: 0xFE2638 Offset: 0xFDE638 VA: 0xFE2638
	public static Exception NotOpen() { }

	// RVA: 0xFE2678 Offset: 0xFDE678 VA: 0xFE2678
	public static Exception CreateChildView() { }

	// RVA: 0xFE26B8 Offset: 0xFDE6B8 VA: 0xFE26B8
	public static Exception CanNotDelete() { }

	// RVA: 0xFE26F8 Offset: 0xFDE6F8 VA: 0xFE26F8
	public static Exception GetElementIndex(int index) { }

	// RVA: 0xFE2788 Offset: 0xFDE788 VA: 0xFE2788
	public static Exception AddExternalObject() { }

	// RVA: 0xFE27C8 Offset: 0xFDE7C8 VA: 0xFE27C8
	public static Exception CanNotClear() { }

	// RVA: 0xFE2808 Offset: 0xFDE808 VA: 0xFE2808
	public static Exception InsertExternalObject() { }

	// RVA: 0xFE2848 Offset: 0xFDE848 VA: 0xFE2848
	public static Exception RemoveExternalObject() { }

	// RVA: 0xFE2888 Offset: 0xFDE888 VA: 0xFE2888
	public static Exception KeyTableMismatch() { }

	// RVA: 0xFE28C8 Offset: 0xFDE8C8 VA: 0xFE28C8
	public static Exception KeyNoColumns() { }

	// RVA: 0xFE2908 Offset: 0xFDE908 VA: 0xFE2908
	public static Exception KeyTooManyColumns(int cols) { }

	// RVA: 0xFE2998 Offset: 0xFDE998 VA: 0xFE2998
	public static Exception KeyDuplicateColumns(string columnName) { }

	// RVA: 0xFE29E4 Offset: 0xFDE9E4 VA: 0xFE29E4
	public static Exception RelationDataSetMismatch() { }

	// RVA: 0xFDB1C0 Offset: 0xFD71C0 VA: 0xFDB1C0
	public static Exception ColumnsTypeMismatch() { }

	// RVA: 0xFE2A24 Offset: 0xFDEA24 VA: 0xFE2A24
	public static Exception KeyLengthMismatch() { }

	// RVA: 0xFE2A64 Offset: 0xFDEA64 VA: 0xFE2A64
	public static Exception KeyLengthZero() { }

	// RVA: 0xFE2AA4 Offset: 0xFDEAA4 VA: 0xFE2AA4
	public static Exception ForeignRelation() { }

	// RVA: 0xFE2AE4 Offset: 0xFDEAE4 VA: 0xFE2AE4
	public static Exception KeyColumnsIdentical() { }

	// RVA: 0xFE2B24 Offset: 0xFDEB24 VA: 0xFE2B24
	public static Exception RelationForeignTable(string t1, string t2) { }

	// RVA: 0xFE2B80 Offset: 0xFDEB80 VA: 0xFE2B80
	public static Exception GetParentRowTableMismatch(string t1, string t2) { }

	// RVA: 0xFE2BDC Offset: 0xFDEBDC VA: 0xFE2BDC
	public static Exception SetParentRowTableMismatch(string t1, string t2) { }

	// RVA: 0xFE2C38 Offset: 0xFDEC38 VA: 0xFE2C38
	public static Exception RelationForeignRow() { }

	// RVA: 0xFE2C78 Offset: 0xFDEC78 VA: 0xFE2C78
	public static Exception RelationNestedReadOnly() { }

	// RVA: 0xFE2CB8 Offset: 0xFDECB8 VA: 0xFE2CB8
	public static Exception TableCantBeNestedInTwoTables(string tableName) { }

	// RVA: 0xFE2D04 Offset: 0xFDED04 VA: 0xFE2D04
	public static Exception LoopInNestedRelations(string tableName) { }

	// RVA: 0xFE2D50 Offset: 0xFDED50 VA: 0xFE2D50
	public static Exception RelationDoesNotExist() { }

	// RVA: 0xFE2D90 Offset: 0xFDED90 VA: 0xFE2D90
	public static Exception ParentOrChildColumnsDoNotHaveDataSet() { }

	// RVA: 0xFE2DD0 Offset: 0xFDEDD0 VA: 0xFE2DD0
	public static Exception InValidNestedRelation(string childTableName) { }

	// RVA: 0xFE2E1C Offset: 0xFDEE1C VA: 0xFE2E1C
	public static Exception InvalidParentNamespaceinNestedRelation(string childTableName) { }

	// RVA: 0xFE2E68 Offset: 0xFDEE68 VA: 0xFE2E68
	public static Exception RowNotInTheDataSet() { }

	// RVA: 0xFE2EA8 Offset: 0xFDEEA8 VA: 0xFE2EA8
	public static Exception RowNotInTheTable() { }

	// RVA: 0xFE2EE8 Offset: 0xFDEEE8 VA: 0xFE2EE8
	public static Exception EditInRowChanging() { }

	// RVA: 0xFE2F28 Offset: 0xFDEF28 VA: 0xFE2F28
	public static Exception EndEditInRowChanging() { }

	// RVA: 0xFE2F68 Offset: 0xFDEF68 VA: 0xFE2F68
	public static Exception BeginEditInRowChanging() { }

	// RVA: 0xFE2FA8 Offset: 0xFDEFA8 VA: 0xFE2FA8
	public static Exception CancelEditInRowChanging() { }

	// RVA: 0xFE2FE8 Offset: 0xFDEFE8 VA: 0xFE2FE8
	public static Exception DeleteInRowDeleting() { }

	// RVA: 0xFE3028 Offset: 0xFDF028 VA: 0xFE3028
	public static Exception ValueArrayLength() { }

	// RVA: 0xFE3068 Offset: 0xFDF068 VA: 0xFE3068
	public static Exception NoCurrentData() { }

	// RVA: 0xFE30A8 Offset: 0xFDF0A8 VA: 0xFE30A8
	public static Exception NoOriginalData() { }

	// RVA: 0xFE30E8 Offset: 0xFDF0E8 VA: 0xFE30E8
	public static Exception NoProposedData() { }

	// RVA: 0xFE3128 Offset: 0xFDF128 VA: 0xFE3128
	public static Exception RowRemovedFromTheTable() { }

	// RVA: 0xFE3168 Offset: 0xFDF168 VA: 0xFE3168
	public static Exception DeletedRowInaccessible() { }

	// RVA: 0xFE31A8 Offset: 0xFDF1A8 VA: 0xFE31A8
	public static Exception RowAlreadyDeleted() { }

	// RVA: 0xFE31E8 Offset: 0xFDF1E8 VA: 0xFE31E8
	public static Exception RowEmpty() { }

	// RVA: 0xFE3228 Offset: 0xFDF228 VA: 0xFE3228
	public static Exception InvalidRowVersion() { }

	// RVA: 0xFE3268 Offset: 0xFDF268 VA: 0xFE3268
	public static Exception RowOutOfRange(int index) { }

	// RVA: 0xFE32F8 Offset: 0xFDF2F8 VA: 0xFE32F8
	public static Exception RowInsertTwice(int index, string tableName) { }

	// RVA: 0xFE3398 Offset: 0xFDF398 VA: 0xFE3398
	public static Exception RowInsertMissing(string tableName) { }

	// RVA: 0xFE33E4 Offset: 0xFDF3E4 VA: 0xFE33E4
	public static Exception RowAlreadyRemoved() { }

	// RVA: 0xFE3424 Offset: 0xFDF424 VA: 0xFE3424
	public static Exception MultipleParents() { }

	// RVA: 0xFE3464 Offset: 0xFDF464 VA: 0xFE3464
	public static Exception InvalidRowState(DataRowState state) { }

	// RVA: 0xFE34BC Offset: 0xFDF4BC VA: 0xFE34BC
	public static Exception InvalidRowBitPattern() { }

	// RVA: 0xFE34FC Offset: 0xFDF4FC VA: 0xFE34FC
	internal static Exception SetDataSetNameToEmpty() { }

	// RVA: 0xFE353C Offset: 0xFDF53C VA: 0xFE353C
	internal static Exception SetDataSetNameConflicting(string name) { }

	// RVA: 0xFE3588 Offset: 0xFDF588 VA: 0xFE3588
	public static Exception DataSetUnsupportedSchema(string ns) { }

	// RVA: 0xFE35D4 Offset: 0xFDF5D4 VA: 0xFE35D4
	public static Exception MergeMissingDefinition(string obj) { }

	// RVA: 0xFE3620 Offset: 0xFDF620 VA: 0xFE3620
	public static Exception TablesInDifferentSets() { }

	// RVA: 0xFE3660 Offset: 0xFDF660 VA: 0xFE3660
	public static Exception RelationAlreadyExists() { }

	// RVA: 0xFE36A0 Offset: 0xFDF6A0 VA: 0xFE36A0
	public static Exception RowAlreadyInOtherCollection() { }

	// RVA: 0xFE36E0 Offset: 0xFDF6E0 VA: 0xFE36E0
	public static Exception RowAlreadyInTheCollection() { }

	// RVA: 0xFE3720 Offset: 0xFDF720 VA: 0xFE3720
	public static Exception RecordStateRange() { }

	// RVA: 0xFE3760 Offset: 0xFDF760 VA: 0xFE3760
	public static Exception IndexKeyLength(int length, int keyLength) { }

	// RVA: 0xFE383C Offset: 0xFDF83C VA: 0xFE383C
	public static Exception RemovePrimaryKey(DataTable table) { }

	// RVA: 0xFE38B8 Offset: 0xFDF8B8 VA: 0xFE38B8
	public static Exception RelationAlreadyInOtherDataSet() { }

	// RVA: 0xFE38F8 Offset: 0xFDF8F8 VA: 0xFE38F8
	public static Exception RelationAlreadyInTheDataSet() { }

	// RVA: 0xFE3938 Offset: 0xFDF938 VA: 0xFE3938
	public static Exception RelationNotInTheDataSet(string relation) { }

	// RVA: 0xFE3984 Offset: 0xFDF984 VA: 0xFE3984
	public static Exception RelationOutOfRange(object index) { }

	// RVA: 0xFE3A08 Offset: 0xFDFA08 VA: 0xFE3A08
	public static Exception DuplicateRelation(string relation) { }

	// RVA: 0xFE3A54 Offset: 0xFDFA54 VA: 0xFE3A54
	public static Exception RelationTableNull() { }

	// RVA: 0xFE3A94 Offset: 0xFDFA94 VA: 0xFE3A94
	public static Exception RelationDataSetNull() { }

	// RVA: 0xFE3AD4 Offset: 0xFDFAD4 VA: 0xFE3AD4
	public static Exception RelationTableWasRemoved() { }

	// RVA: 0xFE3B14 Offset: 0xFDFB14 VA: 0xFE3B14
	public static Exception ParentTableMismatch() { }

	// RVA: 0xFE3B54 Offset: 0xFDFB54 VA: 0xFE3B54
	public static Exception ChildTableMismatch() { }

	// RVA: 0xFE3B94 Offset: 0xFDFB94 VA: 0xFE3B94
	public static Exception EnforceConstraint() { }

	// RVA: 0xFE3BD4 Offset: 0xFDFBD4 VA: 0xFE3BD4
	public static Exception CaseLocaleMismatch() { }

	// RVA: 0xFE3C14 Offset: 0xFDFC14 VA: 0xFE3C14
	public static Exception CannotChangeCaseLocale() { }

	// RVA: 0xFE3C1C Offset: 0xFDFC1C VA: 0xFE3C1C
	public static Exception CannotChangeCaseLocale(Exception innerException) { }

	// RVA: 0xFE3C64 Offset: 0xFDFC64 VA: 0xFE3C64
	public static Exception InvalidRemotingFormat(SerializationFormat mode) { }

	// RVA: 0xFE3CBC Offset: 0xFDFCBC VA: 0xFE3CBC
	public static Exception TableForeignPrimaryKey() { }

	// RVA: 0xFE3CFC Offset: 0xFDFCFC VA: 0xFE3CFC
	public static Exception TableCannotAddToSimpleContent() { }

	// RVA: 0xFE3D3C Offset: 0xFDFD3C VA: 0xFE3D3C
	public static Exception NoTableName() { }

	// RVA: 0xFE3D7C Offset: 0xFDFD7C VA: 0xFE3D7C
	public static Exception MultipleTextOnlyColumns() { }

	// RVA: 0xFE3DBC Offset: 0xFDFDBC VA: 0xFE3DBC
	public static Exception InvalidSortString(string sort) { }

	// RVA: 0xFE3E08 Offset: 0xFDFE08 VA: 0xFE3E08
	public static Exception DuplicateTableName(string table) { }

	// RVA: 0xFE3E54 Offset: 0xFDFE54 VA: 0xFE3E54
	public static Exception DuplicateTableName2(string table, string ns) { }

	// RVA: 0xFE3EB0 Offset: 0xFDFEB0 VA: 0xFE3EB0
	public static Exception SelfnestedDatasetConflictingName(string table) { }

	// RVA: 0xFE3EFC Offset: 0xFDFEFC VA: 0xFE3EFC
	public static Exception DatasetConflictingName(string table) { }

	// RVA: 0xFE3F48 Offset: 0xFDFF48 VA: 0xFE3F48
	public static Exception TableAlreadyInOtherDataSet() { }

	// RVA: 0xFE3F88 Offset: 0xFDFF88 VA: 0xFE3F88
	public static Exception TableAlreadyInTheDataSet() { }

	// RVA: 0xFE3FC8 Offset: 0xFDFFC8 VA: 0xFE3FC8
	public static Exception TableOutOfRange(int index) { }

	// RVA: 0xFE4058 Offset: 0xFE0058 VA: 0xFE4058
	public static Exception TableNotInTheDataSet(string table) { }

	// RVA: 0xFE40A4 Offset: 0xFE00A4 VA: 0xFE40A4
	public static Exception TableInRelation() { }

	// RVA: 0xFE40E4 Offset: 0xFE00E4 VA: 0xFE40E4
	public static Exception TableInConstraint(DataTable table, Constraint constraint) { }

	// RVA: 0xFE4144 Offset: 0xFE0144 VA: 0xFE4144
	public static Exception CanNotSerializeDataTableHierarchy() { }

	// RVA: 0xFE4184 Offset: 0xFE0184 VA: 0xFE4184
	public static Exception CanNotRemoteDataTable() { }

	// RVA: 0xFE41C4 Offset: 0xFE01C4 VA: 0xFE41C4
	public static Exception CanNotSetRemotingFormat() { }

	// RVA: 0xFE4204 Offset: 0xFE0204 VA: 0xFE4204
	public static Exception CanNotSerializeDataTableWithEmptyName() { }

	// RVA: 0xFE4244 Offset: 0xFE0244 VA: 0xFE4244
	public static Exception TableNotFound(string tableName) { }

	// RVA: 0xFE4290 Offset: 0xFE0290 VA: 0xFE4290
	public static Exception AggregateException(AggregateType aggregateType, Type type) { }

	// RVA: 0xFE4348 Offset: 0xFE0348 VA: 0xFE4348
	public static Exception InvalidStorageType(TypeCode typecode) { }

	// RVA: 0xFE43DC Offset: 0xFE03DC VA: 0xFE43DC
	public static Exception RangeArgument(int min, int max) { }

	// RVA: 0xFE448C Offset: 0xFE048C VA: 0xFE448C
	public static Exception NullRange() { }

	// RVA: 0xFE44CC Offset: 0xFE04CC VA: 0xFE44CC
	public static Exception NegativeMinimumCapacity() { }

	// RVA: 0xFE450C Offset: 0xFE050C VA: 0xFE450C
	public static Exception ProblematicChars(char charValue) { }

	// RVA: 0xFE45E8 Offset: 0xFE05E8 VA: 0xFE45E8
	public static Exception StorageSetFailed() { }

	// RVA: 0xFE4628 Offset: 0xFE0628 VA: 0xFE4628
	public static Exception SimpleTypeNotSupported() { }

	// RVA: 0xFE4668 Offset: 0xFE0668 VA: 0xFE4668
	public static Exception MissingAttribute(string attribute) { }

	// RVA: 0xFE46B8 Offset: 0xFE06B8 VA: 0xFE46B8
	public static Exception MissingAttribute(string element, string attribute) { }

	// RVA: 0xFE4714 Offset: 0xFE0714 VA: 0xFE4714
	public static Exception InvalidAttributeValue(string name, string value) { }

	// RVA: 0xFE4770 Offset: 0xFE0770 VA: 0xFE4770
	public static Exception AttributeValues(string name, string value1, string value2) { }

	// RVA: 0xFE47D4 Offset: 0xFE07D4 VA: 0xFE47D4
	public static Exception ElementTypeNotFound(string name) { }

	// RVA: 0xFE4820 Offset: 0xFE0820 VA: 0xFE4820
	public static Exception RelationParentNameMissing(string rel) { }

	// RVA: 0xFE486C Offset: 0xFE086C VA: 0xFE486C
	public static Exception RelationChildNameMissing(string rel) { }

	// RVA: 0xFE48B8 Offset: 0xFE08B8 VA: 0xFE48B8
	public static Exception RelationTableKeyMissing(string rel) { }

	// RVA: 0xFE4904 Offset: 0xFE0904 VA: 0xFE4904
	public static Exception RelationChildKeyMissing(string rel) { }

	// RVA: 0xFE4950 Offset: 0xFE0950 VA: 0xFE4950
	public static Exception UndefinedDatatype(string name) { }

	// RVA: 0xFE499C Offset: 0xFE099C VA: 0xFE499C
	public static Exception DatatypeNotDefined() { }

	// RVA: 0xFE49DC Offset: 0xFE09DC VA: 0xFE49DC
	public static Exception MismatchKeyLength() { }

	// RVA: 0xFE4A1C Offset: 0xFE0A1C VA: 0xFE4A1C
	public static Exception InvalidField(string name) { }

	// RVA: 0xFE4A68 Offset: 0xFE0A68 VA: 0xFE4A68
	public static Exception InvalidSelector(string name) { }

	// RVA: 0xFE4AB4 Offset: 0xFE0AB4 VA: 0xFE4AB4
	public static Exception CircularComplexType(string name) { }

	// RVA: 0xFE4B00 Offset: 0xFE0B00 VA: 0xFE4B00
	public static Exception CannotInstantiateAbstract(string name) { }

	// RVA: 0xFE4B4C Offset: 0xFE0B4C VA: 0xFE4B4C
	public static Exception InvalidKey(string name) { }

	// RVA: 0xFE4B98 Offset: 0xFE0B98 VA: 0xFE4B98
	public static Exception DiffgramMissingTable(string name) { }

	// RVA: 0xFE4BE4 Offset: 0xFE0BE4 VA: 0xFE4BE4
	public static Exception DiffgramMissingSQL() { }

	// RVA: 0xFE4C24 Offset: 0xFE0C24 VA: 0xFE4C24
	public static Exception DuplicateConstraintRead(string str) { }

	// RVA: 0xFE4C70 Offset: 0xFE0C70 VA: 0xFE4C70
	public static Exception ColumnTypeConflict(string name) { }

	// RVA: 0xFE4CBC Offset: 0xFE0CBC VA: 0xFE4CBC
	public static Exception CannotConvert(string name, string type) { }

	// RVA: 0xFE4D18 Offset: 0xFE0D18 VA: 0xFE4D18
	public static Exception MissingRefer(string name) { }

	// RVA: 0xFDAE70 Offset: 0xFD6E70 VA: 0xFDAE70
	public static Exception InvalidPrefix(string name) { }

	// RVA: 0xFE4D9C Offset: 0xFE0D9C VA: 0xFE4D9C
	public static Exception CanNotDeserializeObjectType() { }

	// RVA: 0xFE4DDC Offset: 0xFE0DDC VA: 0xFE4DDC
	public static Exception IsDataSetAttributeMissingInSchema() { }

	// RVA: 0xFE4E1C Offset: 0xFE0E1C VA: 0xFE4E1C
	public static Exception TooManyIsDataSetAtributeInSchema() { }

	// RVA: 0xFE4E5C Offset: 0xFE0E5C VA: 0xFE4E5C
	public static Exception NestedCircular(string name) { }

	// RVA: 0xFE4EA8 Offset: 0xFE0EA8 VA: 0xFE4EA8
	public static Exception MultipleParentRows(string tableQName) { }

	// RVA: 0xFE4EF4 Offset: 0xFE0EF4 VA: 0xFE4EF4
	public static Exception PolymorphismNotSupported(string typeName) { }

	// RVA: 0xFE4F40 Offset: 0xFE0F40 VA: 0xFE4F40
	public static Exception DataTableInferenceNotSupported() { }

	// RVA: 0xFE4F80 Offset: 0xFE0F80 VA: 0xFE4F80
	internal static void ThrowMultipleTargetConverter(Exception innerException) { }

	// RVA: 0xFE4FE0 Offset: 0xFE0FE0 VA: 0xFE4FE0
	public static Exception DuplicateDeclaration(string name) { }

	// RVA: 0xFE502C Offset: 0xFE102C VA: 0xFE502C
	public static Exception FoundEntity() { }

	// RVA: 0xFE506C Offset: 0xFE106C VA: 0xFE506C
	public static Exception MergeFailed(string name) { }

	// RVA: 0xFE5070 Offset: 0xFE1070 VA: 0xFE5070
	public static Exception ConvertFailed(Type type1, Type type2) { }

	// RVA: 0xFE5100 Offset: 0xFE1100 VA: 0xFE5100
	internal static Exception InvalidDuplicateNamedSimpleTypeDelaration(string stName, string errorStr) { }

	// RVA: 0xFE515C Offset: 0xFE115C VA: 0xFE515C
	internal static Exception InternalRBTreeError(RBTreeError internalError) { }

	// RVA: 0xFE51DC Offset: 0xFE11DC VA: 0xFE51DC
	public static Exception EnumeratorModified() { }
}


// Namespace: System.Data
[XmlRoot("DataSet")]
[XmlSchemaProvider("GetDataSetSchema")]
[Serializable]
public class DataSet : MarshalByValueComponent, IXmlSerializable, ISerializable // TypeDefIndex: 3919
{
	// Fields
	private DataViewManager _defaultViewManager; // 0x20
	private readonly DataTableCollection _tableCollection; // 0x28
	private readonly DataRelationCollection _relationCollection; // 0x30
	internal PropertyCollection _extendedProperties; // 0x38
	private string _dataSetName; // 0x40
	private string _datasetPrefix; // 0x48
	internal string _namespaceURI; // 0x50
	private bool _enforceConstraints; // 0x58
	private bool _caseSensitive; // 0x59
	private CultureInfo _culture; // 0x60
	private bool _cultureUserSet; // 0x68
	internal bool _fInReadXml; // 0x69
	internal bool _fInLoadDiffgram; // 0x6A
	internal bool _fTopLevelTable; // 0x6B
	internal bool _fInitInProgress; // 0x6C
	internal bool _fEnableCascading; // 0x6D
	internal bool _fIsSchemaLoading; // 0x6E
	internal string _mainTableName; // 0x70
	private SerializationFormat _remotingFormat; // 0x78
	private object _defaultViewManagerLock; // 0x80
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0x88
	private static XmlSchemaComplexType s_schemaTypeForWSDL; // 0x8
	internal bool _useDataSetSchemaOnly; // 0x8C
	internal bool _udtIsWrapped; // 0x8D
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging; // 0x90
	[CompilerGenerated]
	private MergeFailedEventHandler MergeFailed; // 0x98
	[CompilerGenerated]
	private DataRowCreatedEventHandler DataRowCreated; // 0xA0
	[CompilerGenerated]
	private DataSetClearEventhandler ClearFunctionCalled; // 0xA8

	// Properties
	[DefaultValue(0)]
	public SerializationFormat RemotingFormat { set; }
	[DefaultValue(False)]
	public bool CaseSensitive { set; }
	[DefaultValue(True)]
	public bool EnforceConstraints { set; }
	[DefaultValue("")]
	public string DataSetName { set; }
	[DefaultValue("")]
	public string Namespace { set; }
	[DefaultValue("")]
	public string Prefix { set; }
	[Browsable(False)]
	public PropertyCollection ExtendedProperties { get; }
	public CultureInfo Locale { set; }
	[Browsable(False)]
	[DesignerSerializationVisibility(0)]
	public override ISite Site { get; }
	[DesignerSerializationVisibility(2)]
	public DataTableCollection Tables { get; }

	// Methods

	// RVA: 0xFE521C Offset: 0xFE121C VA: 0xFE521C
	public void .ctor() { }

	// RVA: 0xFE53EC Offset: 0xFE13EC VA: 0xFE53EC
	public void .ctor(string dataSetName) { }

	// RVA: 0xFE54DC Offset: 0xFE14DC VA: 0xFE54DC
	public void set_RemotingFormat(SerializationFormat value) { }

	// RVA: 0xFE55D0 Offset: 0xFE15D0 VA: 0xFE55D0
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE55D8 Offset: 0xFE15D8 VA: 0xFE55D8
	protected void .ctor(SerializationInfo info, StreamingContext context, bool ConstructSchema) { }

	// RVA: 0xFE57FC Offset: 0xFE17FC VA: 0xFE57FC Slot: 14
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE5804 Offset: 0xFE1804 VA: 0xFE5804
	private void SerializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat) { }

	// RVA: 0xFE57B4 Offset: 0xFE17B4 VA: 0xFE57B4
	internal void DeserializeDataSet(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode) { }

	// RVA: 0xFE7874 Offset: 0xFE3874 VA: 0xFE7874
	private void DeserializeDataSetSchema(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat, SchemaSerializationMode schemaSerializationMode) { }

	// RVA: 0xFE7D44 Offset: 0xFE3D44 VA: 0xFE7D44
	private void DeserializeDataSetData(SerializationInfo info, StreamingContext context, SerializationFormat remotingFormat) { }

	// RVA: 0xFE5D78 Offset: 0xFE1D78 VA: 0xFE5D78
	private void SerializeDataSetProperties(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE7EF8 Offset: 0xFE3EF8 VA: 0xFE7EF8
	private void DeserializeDataSetProperties(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE65F0 Offset: 0xFE25F0 VA: 0xFE65F0
	private void SerializeRelations(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFE8E4C Offset: 0xFE4E4C VA: 0xFE8E4C
	private void DeserializeRelations(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFEAB0C Offset: 0xFE6B0C VA: 0xFEAB0C
	internal void FailedEnableConstraints() { }

	// RVA: 0xFEACD4 Offset: 0xFE6CD4 VA: 0xFEACD4
	public void set_CaseSensitive(bool value) { }

	// RVA: 0xFEAB38 Offset: 0xFE6B38 VA: 0xFEAB38
	public void set_EnforceConstraints(bool value) { }

	// RVA: 0xFEB714 Offset: 0xFE7714 VA: 0xFEB714
	internal void EnableConstraints() { }

	// RVA: 0xFE5414 Offset: 0xFE1414 VA: 0xFE5414
	public void set_DataSetName(string value) { }

	// RVA: 0xFEBF44 Offset: 0xFE7F44 VA: 0xFEBF44
	public void set_Namespace(string value) { }

	// RVA: 0xFECD24 Offset: 0xFE8D24 VA: 0xFECD24
	public void set_Prefix(string value) { }

	// RVA: 0xFEAAA8 Offset: 0xFE6AA8 VA: 0xFEAAA8
	public PropertyCollection get_ExtendedProperties() { }

	// RVA: 0xFECE40 Offset: 0xFE8E40 VA: 0xFECE40
	public void set_Locale(CultureInfo value) { }

	// RVA: 0xFECFE8 Offset: 0xFE8FE8 VA: 0xFECFE8
	internal void SetLocaleValue(CultureInfo value, bool userSet) { }

	// RVA: 0xFEE170 Offset: 0xFEA170 VA: 0xFEE170 Slot: 7
	public override ISite get_Site() { }

	// RVA: 0xFEE178 Offset: 0xFEA178 VA: 0xFEE178
	public DataTableCollection get_Tables() { }

	// RVA: 0xFEE180 Offset: 0xFEA180 VA: 0xFEE180
	public void Clear() { }

	// RVA: 0xFEE3CC Offset: 0xFEA3CC VA: 0xFEE3CC Slot: 15
	public virtual DataSet Clone() { }

	// RVA: 0xFE7530 Offset: 0xFE3530 VA: 0xFE7530
	internal int EstimatedXmlStringSize() { }

	// RVA: 0xFEF618 Offset: 0xFEB618 VA: 0xFEF618
	internal string GetRemotingDiffGram(DataTable table) { }

	// RVA: 0xFE73E8 Offset: 0xFE33E8 VA: 0xFE73E8
	internal string GetXmlSchemaForRemoting(DataTable table) { }

	// RVA: 0xFEF748 Offset: 0xFEB748 VA: 0xFEF748
	public void ReadXmlSchema(XmlReader reader) { }

	// RVA: 0xFE9824 Offset: 0xFE5824 VA: 0xFE9824
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving) { }

	// RVA: 0xFEFB50 Offset: 0xFEBB50 VA: 0xFEFB50
	internal bool MoveToElement(XmlReader reader, int depth) { }

	// RVA: 0xFEFFD8 Offset: 0xFEBFD8 VA: 0xFEFFD8
	private static void MoveToElement(XmlReader reader) { }

	// RVA: 0xFEFC04 Offset: 0xFEBC04 VA: 0xFEFC04
	internal void ReadEndElement(XmlReader reader) { }

	// RVA: 0xFEF8A8 Offset: 0xFEB8A8 VA: 0xFEF8A8
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving) { }

	// RVA: 0xFEF750 Offset: 0xFEB750 VA: 0xFEF750
	internal void ReadXDRSchema(XmlReader reader) { }

	// RVA: 0xFF0050 Offset: 0xFEC050 VA: 0xFF0050
	private void WriteXmlSchema(XmlWriter writer, SchemaFormat schemaFormat, Converter<Type, string> multipleTargetConverter) { }

	// RVA: 0xFF0234 Offset: 0xFEC234 VA: 0xFF0234
	public XmlReadMode ReadXml(XmlReader reader) { }

	// RVA: 0xFF023C Offset: 0xFEC23C VA: 0xFF023C
	internal XmlReadMode ReadXml(XmlReader reader, bool denyResolving) { }

	// RVA: 0xFEFC98 Offset: 0xFEBC98 VA: 0xFEFC98
	internal void InferSchema(XmlDocument xdoc, string[] excludedNamespaces, XmlReadMode mode) { }

	// RVA: 0xFF25F0 Offset: 0xFEE5F0 VA: 0xFF25F0
	private bool IsEmpty() { }

	// RVA: 0xFF1294 Offset: 0xFED294 VA: 0xFF1294
	private void ReadXmlDiffgram(XmlReader reader) { }

	// RVA: 0xFEAAA0 Offset: 0xFE6AA0 VA: 0xFEAAA0
	public XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode) { }

	// RVA: 0xFF2A70 Offset: 0xFEEA70 VA: 0xFF2A70
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving) { }

	// RVA: 0xFE7650 Offset: 0xFE3650 VA: 0xFE7650
	public void WriteXml(XmlWriter writer, XmlWriteMode mode) { }

	// RVA: 0xFF28E0 Offset: 0xFEE8E0 VA: 0xFF28E0
	public void Merge(DataSet dataSet) { }

	// RVA: 0xFF37F4 Offset: 0xFEF7F4 VA: 0xFF37F4
	public void Merge(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction) { }

	// RVA: 0xFF3A74 Offset: 0xFEFA74 VA: 0xFF3A74 Slot: 16
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent) { }

	// RVA: 0xFF3A9C Offset: 0xFEFA9C VA: 0xFF3A9C
	internal void OnMergeFailed(MergeFailedEventArgs mfevent) { }

	// RVA: 0xFF3AF8 Offset: 0xFEFAF8 VA: 0xFF3AF8
	internal void RaiseMergeFailed(DataTable table, string conflict, MissingSchemaAction missingSchemaAction) { }

	// RVA: 0xFF3B9C Offset: 0xFEFB9C VA: 0xFF3B9C
	internal void OnDataRowCreated(DataRow row) { }

	// RVA: 0xFEE39C Offset: 0xFEA39C VA: 0xFEE39C
	internal void OnClearFunctionCalled(DataTable table) { }

	// RVA: 0xFF3BC4 Offset: 0xFEFBC4 VA: 0xFF3BC4 Slot: 17
	protected internal virtual void OnRemoveTable(DataTable table) { }

	// RVA: 0xFF3BC8 Offset: 0xFEFBC8 VA: 0xFF3BC8
	internal void OnRemovedTable(DataTable table) { }

	// RVA: 0xFF3BF4 Offset: 0xFEFBF4 VA: 0xFF3BF4
	internal void OnRemoveRelationHack(DataRelation relation) { }

	// RVA: 0xFEBECC Offset: 0xFE7ECC VA: 0xFEBECC
	protected internal void RaisePropertyChanging(string name) { }

	// RVA: 0xFF3BF8 Offset: 0xFEFBF8 VA: 0xFF3BF8
	internal DataTable[] TopLevelTables() { }

	// RVA: 0xFF3C00 Offset: 0xFEFC00 VA: 0xFF3C00
	internal DataTable[] TopLevelTables(bool forSchema) { }

	// RVA: 0xFF4408 Offset: 0xFF0408 VA: 0xFF4408 Slot: 18
	public virtual void Reset() { }

	// RVA: 0xFEAFFC Offset: 0xFE6FFC VA: 0xFEAFFC
	internal bool ValidateCaseConstraint() { }

	// RVA: 0xFEDD40 Offset: 0xFE9D40 VA: 0xFEDD40
	internal bool ValidateLocaleConstraint() { }

	// RVA: 0xFF46D8 Offset: 0xFF06D8 VA: 0xFF46D8 Slot: 19
	protected virtual void ReadXmlSerializable(XmlReader reader) { }

	// RVA: 0xFF49C0 Offset: 0xFF09C0 VA: 0xFF49C0
	public static XmlSchemaComplexType GetDataSetSchema(XmlSchemaSet schemaSet) { }

	// RVA: 0xFF4BF0 Offset: 0xFF0BF0 VA: 0xFF4BF0 Slot: 10
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0xFF4DC0 Offset: 0xFF0DC0 VA: 0xFF4DC0 Slot: 11
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0xFF5010 Offset: 0xFF1010 VA: 0xFF5010 Slot: 12
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }
}


// Namespace: 
internal struct DataTable.RowDiffIdUsageSection // TypeDefIndex: 3920
{
	// Fields
	private DataTable _targetTable; // 0x0

	// Methods

	// RVA: 0x1006E88 Offset: 0x1002E88 VA: 0x1006E88
	internal void Prepare(DataTable table) { }
}


// Namespace: 
internal struct DataTable.DSRowDiffIdUsageSection // TypeDefIndex: 3921
{
	// Fields
	private DataSet _targetDS; // 0x0

	// Methods

	// RVA: 0x1006EA4 Offset: 0x1002EA4 VA: 0x1006EA4
	internal void Prepare(DataSet ds) { }
}


// Namespace: System.Data
[XmlSchemaProvider("GetDataTableSchema")]
[Serializable]
public class DataTable : MarshalByValueComponent, ISerializable, IXmlSerializable // TypeDefIndex: 3922
{
	// Fields
	private DataSet _dataSet; // 0x20
	private DataView _defaultView; // 0x28
	internal long _nextRowID; // 0x30
	internal readonly DataRowCollection _rowCollection; // 0x38
	internal readonly DataColumnCollection _columnCollection; // 0x40
	private readonly ConstraintCollection _constraintCollection; // 0x48
	private int _elementColumnCount; // 0x50
	internal DataRelationCollection _parentRelationsCollection; // 0x58
	internal DataRelationCollection _childRelationsCollection; // 0x60
	internal readonly RecordManager _recordManager; // 0x68
	internal readonly List<Index> _indexes; // 0x70
	private List<Index> _shadowIndexes; // 0x78
	private int _shadowCount; // 0x80
	internal PropertyCollection _extendedProperties; // 0x88
	private string _tableName; // 0x90
	internal string _tableNamespace; // 0x98
	private string _tablePrefix; // 0xA0
	internal DataExpression _displayExpression; // 0xA8
	internal bool _fNestedInDataset; // 0xB0
	private CultureInfo _culture; // 0xB8
	private bool _cultureUserSet; // 0xC0
	private CompareInfo _compareInfo; // 0xC8
	private CompareOptions _compareFlags; // 0xD0
	private IFormatProvider _formatProvider; // 0xD8
	private StringComparer _hashCodeProvider; // 0xE0
	private bool _caseSensitive; // 0xE8
	private bool _caseSensitiveUserSet; // 0xE9
	internal string _encodedTableName; // 0xF0
	internal DataColumn _xmlText; // 0xF8
	internal DataColumn _colUnique; // 0x100
	internal Decimal _minOccurs; // 0x108
	internal Decimal _maxOccurs; // 0x118
	internal bool _repeatableElement; // 0x128
	private object _typeName; // 0x130
	internal UniqueConstraint _primaryKey; // 0x138
	internal IndexField[] _primaryIndex; // 0x140
	private DataColumn[] _delayedSetPrimaryKey; // 0x148
	private Index _loadIndex; // 0x150
	private Index _loadIndexwithOriginalAdded; // 0x158
	private Index _loadIndexwithCurrentDeleted; // 0x160
	private int _suspendIndexEvents; // 0x168
	private bool _inDataLoad; // 0x16C
	private bool _schemaLoading; // 0x16D
	private bool _enforceConstraints; // 0x16E
	internal bool _suspendEnforceConstraints; // 0x16F
	protected internal bool fInitInProgress; // 0x170
	private bool _inLoad; // 0x171
	internal bool _fInLoadDiffgram; // 0x172
	private byte _isTypedDataTable; // 0x173
	private DataRow[] _emptyDataRowArray; // 0x178
	private PropertyDescriptorCollection _propertyDescriptorCollectionCache; // 0x180
	private DataRelation[] _nestedParentRelations; // 0x188
	internal List<DataColumn> _dependentColumns; // 0x190
	private bool _mergingData; // 0x198
	private DataRowChangeEventHandler _onRowChangedDelegate; // 0x1A0
	private DataRowChangeEventHandler _onRowChangingDelegate; // 0x1A8
	private DataRowChangeEventHandler _onRowDeletingDelegate; // 0x1B0
	private DataRowChangeEventHandler _onRowDeletedDelegate; // 0x1B8
	private DataColumnChangeEventHandler _onColumnChangedDelegate; // 0x1C0
	private DataColumnChangeEventHandler _onColumnChangingDelegate; // 0x1C8
	private DataTableClearEventHandler _onTableClearingDelegate; // 0x1D0
	private DataTableClearEventHandler _onTableClearedDelegate; // 0x1D8
	private DataTableNewRowEventHandler _onTableNewRowDelegate; // 0x1E0
	private PropertyChangedEventHandler _onPropertyChangingDelegate; // 0x1E8
	private readonly DataRowBuilder _rowBuilder; // 0x1F0
	internal readonly List<DataView> _delayedViews; // 0x1F8
	private readonly List<DataViewListener> _dataViewListeners; // 0x200
	internal Hashtable _rowDiffId; // 0x208
	internal readonly ReaderWriterLockSlim _indexesLock; // 0x210
	internal int _ukColumnPositionForInference; // 0x218
	private SerializationFormat _remotingFormat; // 0x21C
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0x220

	// Properties
	public bool CaseSensitive { set; }
	internal bool AreIndexEventsSuspended { get; }
	private bool IsTypedDataTable { get; }
	internal bool SelfNested { get; }
	internal List<Index> LiveIndexes { get; }
	[DefaultValue(0)]
	public SerializationFormat RemotingFormat { set; }
	[Browsable(False)]
	[DesignerSerializationVisibility(0)]
	public DataRelationCollection ChildRelations { get; }
	[DesignerSerializationVisibility(2)]
	public DataColumnCollection Columns { get; }
	private CompareInfo CompareInfo { get; }
	internal string DisplayExpressionInternal { get; }
	internal bool EnforceConstraints { get; set; }
	[Browsable(False)]
	public PropertyCollection ExtendedProperties { get; }
	internal IFormatProvider FormatProvider { get; }
	public CultureInfo Locale { set; }
	[DefaultValue(50)]
	public int MinimumCapacity { get; set; }
	internal int RecordCapacity { get; }
	internal int ElementColumnCount { set; }
	[DesignerSerializationVisibility(0)]
	[Browsable(False)]
	public DataRelationCollection ParentRelations { get; }
	internal DataRelation[] NestedParentRelations { get; }
	internal int NestedParentsCount { get; }
	[TypeConverter(typeof(PrimaryKeyTypeConverter))]
	public DataColumn[] PrimaryKey { get; set; }
	[Browsable(False)]
	public DataRowCollection Rows { get; }
	[DefaultValue("")]
	public string TableName { get; set; }
	internal string EncodedTableName { get; }
	public string Namespace { get; set; }
	[DefaultValue("")]
	public string Prefix { set; }
	internal DataColumn XmlText { set; }
	[Browsable(False)]
	[DesignerSerializationVisibility(0)]
	public override ISite Site { get; }
	internal bool NeedColumnChangeEvents { get; }
	internal XmlQualifiedName TypeName { get; }
	internal Hashtable RowDiffId { get; }

	// Methods

	// RVA: 0xFF5044 Offset: 0xFF1044 VA: 0xFF5044
	public void .ctor() { }

	// RVA: 0xFF5420 Offset: 0xFF1420 VA: 0xFF5420
	public void .ctor(string tableName) { }

	// RVA: 0xFF5484 Offset: 0xFF1484 VA: 0xFF5484
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFF5934 Offset: 0xFF1934 VA: 0xFF5934 Slot: 14
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0xFF5A0C Offset: 0xFF1A0C VA: 0xFF5A0C
	private void SerializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat) { }

	// RVA: 0xFF561C Offset: 0xFF161C VA: 0xFF561C
	internal void DeserializeDataTable(SerializationInfo info, StreamingContext context, bool isSingleTable, SerializationFormat remotingFormat) { }

	// RVA: 0xFF5CB4 Offset: 0xFF1CB4 VA: 0xFF5CB4
	internal void SerializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable) { }

	// RVA: 0xFF6954 Offset: 0xFF2954 VA: 0xFF6954
	internal void DeserializeTableSchema(SerializationInfo info, StreamingContext context, bool isSingleTable) { }

	// RVA: 0xFE5EDC Offset: 0xFE1EDC VA: 0xFE5EDC
	internal void SerializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints) { }

	// RVA: 0xFE81B0 Offset: 0xFE41B0 VA: 0xFE81B0
	internal void DeserializeConstraints(SerializationInfo info, StreamingContext context, int serIndex, bool allConstraints) { }

	// RVA: 0xFE6CCC Offset: 0xFE2CCC VA: 0xFE6CCC
	internal void SerializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex) { }

	// RVA: 0xFE96C4 Offset: 0xFE56C4 VA: 0xFE96C4
	internal void DeserializeExpressionColumns(SerializationInfo info, StreamingContext context, int serIndex) { }

	// RVA: 0xFE6E24 Offset: 0xFE2E24 VA: 0xFE6E24
	internal void SerializeTableData(SerializationInfo info, StreamingContext context, int serIndex) { }

	// RVA: 0xFEA10C Offset: 0xFE610C VA: 0xFEA10C
	internal void DeserializeTableData(SerializationInfo info, StreamingContext context, int serIndex) { }

	// RVA: 0xFF8F34 Offset: 0xFF4F34 VA: 0xFF8F34
	private DataRowState ConvertToRowState(BitArray bitStates, int bitIndex) { }

	// RVA: 0xFF8C8C Offset: 0xFF4C8C VA: 0xFF8C8C
	internal void GetRowAndColumnErrors(int rowIndex, Hashtable rowErrors, Hashtable colErrors) { }

	// RVA: 0xFF8FD8 Offset: 0xFF4FD8 VA: 0xFF8FD8
	private void ConvertToRowError(int rowIndex, Hashtable rowErrors, Hashtable colErrors) { }

	// RVA: 0xFF92AC Offset: 0xFF52AC VA: 0xFF92AC
	public void set_CaseSensitive(bool value) { }

	// RVA: 0xFF9344 Offset: 0xFF5344 VA: 0xFF9344
	internal bool get_AreIndexEventsSuspended() { }

	// RVA: 0xFF9354 Offset: 0xFF5354 VA: 0xFF9354
	internal void RestoreIndexEvents(bool forceReset) { }

	// RVA: 0xFF966C Offset: 0xFF566C VA: 0xFF966C
	internal void SuspendIndexEvents() { }

	// RVA: 0xFF967C Offset: 0xFF567C VA: 0xFF967C
	private bool get_IsTypedDataTable() { }

	// RVA: 0xFEB3EC Offset: 0xFE73EC VA: 0xFEB3EC
	internal bool SetCaseSensitiveValue(bool isCaseSensitive, bool userSet, bool resetIndexes) { }

	// RVA: 0xFF40EC Offset: 0xFF00EC VA: 0xFF40EC
	internal bool get_SelfNested() { }

	// RVA: 0xFF9738 Offset: 0xFF5738 VA: 0xFF9738
	internal List<Index> get_LiveIndexes() { }

	// RVA: 0xFE5578 Offset: 0xFE1578 VA: 0xFE5578
	public void set_RemotingFormat(SerializationFormat value) { }

	// RVA: 0xFDECCC Offset: 0xFDACCC VA: 0xFDECCC
	public DataRelationCollection get_ChildRelations() { }

	// RVA: 0xFF97E4 Offset: 0xFF57E4 VA: 0xFF97E4
	public DataColumnCollection get_Columns() { }

	// RVA: 0xFF97EC Offset: 0xFF57EC VA: 0xFF97EC
	private CompareInfo get_CompareInfo() { }

	// RVA: 0xFF9820 Offset: 0xFF5820 VA: 0xFF9820
	private void ResetConstraints() { }

	// RVA: 0xFF983C Offset: 0xFF583C VA: 0xFF983C
	internal void SetDataSet(DataSet dataSet) { }

	// RVA: 0xFF98E0 Offset: 0xFF58E0 VA: 0xFF98E0
	internal string get_DisplayExpressionInternal() { }

	// RVA: 0xFD9188 Offset: 0xFD5188 VA: 0xFD9188
	internal bool get_EnforceConstraints() { }

	// RVA: 0xFF9944 Offset: 0xFF5944 VA: 0xFF9944
	internal void set_EnforceConstraints(bool value) { }

	// RVA: 0xFF9984 Offset: 0xFF5984 VA: 0xFF9984
	internal void EnableConstraints() { }

	// RVA: 0xFF87A0 Offset: 0xFF47A0 VA: 0xFF87A0
	public PropertyCollection get_ExtendedProperties() { }

	// RVA: 0xFDACFC Offset: 0xFD6CFC VA: 0xFDACFC
	internal IFormatProvider get_FormatProvider() { }

	// RVA: 0xFF9F50 Offset: 0xFF5F50 VA: 0xFF9F50
	public void set_Locale(CultureInfo value) { }

	// RVA: 0xFED780 Offset: 0xFE9780 VA: 0xFED780
	internal bool SetLocaleValue(CultureInfo culture, bool userSet, bool resetIndexes) { }

	// RVA: 0xFFA400 Offset: 0xFF6400 VA: 0xFFA400
	public int get_MinimumCapacity() { }

	// RVA: 0xFF8C5C Offset: 0xFF4C5C VA: 0xFF8C5C
	public void set_MinimumCapacity(int value) { }

	// RVA: 0xFDBDB8 Offset: 0xFD7DB8 VA: 0xFDBDB8
	internal int get_RecordCapacity() { }

	// RVA: 0xFDDDC4 Offset: 0xFD9DC4 VA: 0xFDDDC4
	internal void set_ElementColumnCount(int value) { }

	// RVA: 0xFDEC60 Offset: 0xFDAC60 VA: 0xFDEC60
	public DataRelationCollection get_ParentRelations() { }

	// RVA: 0xFFA41C Offset: 0xFF641C VA: 0xFFA41C
	internal DataRelation[] get_NestedParentRelations() { }

	// RVA: 0xFFA424 Offset: 0xFF6424 VA: 0xFFA424
	internal void CacheNestedParent() { }

	// RVA: 0xFFA43C Offset: 0xFF643C VA: 0xFFA43C
	private DataRelation[] FindNestedParentRelations() { }

	// RVA: 0xFF3E0C Offset: 0xFEFE0C VA: 0xFF3E0C
	internal int get_NestedParentsCount() { }

	// RVA: 0xFFA830 Offset: 0xFF6830 VA: 0xFFA830
	public DataColumn[] get_PrimaryKey() { }

	// RVA: 0xFFA8B0 Offset: 0xFF68B0 VA: 0xFFA8B0
	public void set_PrimaryKey(DataColumn[] value) { }

	// RVA: 0xFFAC68 Offset: 0xFF6C68 VA: 0xFFAC68
	public DataRowCollection get_Rows() { }

	// RVA: 0xFFAC70 Offset: 0xFF6C70 VA: 0xFFAC70
	public string get_TableName() { }

	// RVA: 0xFFAC78 Offset: 0xFF6C78 VA: 0xFFAC78
	public void set_TableName(string value) { }

	// RVA: 0xFFB1FC Offset: 0xFF71FC VA: 0xFFB1FC
	internal string get_EncodedTableName() { }

	// RVA: 0xFFB268 Offset: 0xFF7268 VA: 0xFFB268
	private string GetInheritedNamespace(List<DataTable> visitedTables) { }

	// RVA: 0xFDCC4C Offset: 0xFD8C4C VA: 0xFDCC4C
	public string get_Namespace() { }

	// RVA: 0xFF8468 Offset: 0xFF4468 VA: 0xFF8468
	public void set_Namespace(string value) { }

	// RVA: 0xFFB88C Offset: 0xFF788C VA: 0xFFB88C
	internal bool IsNamespaceInherited() { }

	// RVA: 0xFEC384 Offset: 0xFE8384 VA: 0xFEC384
	internal void CheckCascadingNamespaceConflict(string realNamespace) { }

	// RVA: 0xFFB468 Offset: 0xFF7468 VA: 0xFFB468
	internal void CheckNamespaceValidityForNestedRelations(string realNamespace) { }

	// RVA: 0xFFB89C Offset: 0xFF789C VA: 0xFFB89C
	internal void CheckNamespaceValidityForNestedParentRelations(string ns, DataTable parentTable) { }

	// RVA: 0xFEC75C Offset: 0xFE875C VA: 0xFEC75C
	internal void DoRaiseNamespaceChange() { }

	// RVA: 0xFFBC18 Offset: 0xFF7C18 VA: 0xFFBC18
	public void set_Prefix(string value) { }

	// RVA: 0xFDDE04 Offset: 0xFD9E04 VA: 0xFDDE04
	internal void set_XmlText(DataColumn value) { }

	// RVA: 0xFFBD00 Offset: 0xFF7D00 VA: 0xFFBD00
	internal void SetKeyValues(DataKey key, object[] keyValues, int record) { }

	// RVA: 0xFFBD8C Offset: 0xFF7D8C VA: 0xFFBD8C
	internal DataRow FindByIndex(Index ndx, object[] key) { }

	// RVA: 0xFFBE1C Offset: 0xFF7E1C VA: 0xFFBE1C
	internal DataRow FindMergeTarget(DataRow row, DataKey key, Index ndx) { }

	// RVA: 0xFFBE9C Offset: 0xFF7E9C VA: 0xFFBE9C
	private void SetMergeRecords(DataRow row, int newRecord, int oldRecord, DataRowAction action) { }

	// RVA: 0xFFC208 Offset: 0xFF8208 VA: 0xFFC208
	internal DataRow MergeRow(DataRow row, DataRow targetRow, bool preserveChanges, Index idxSearch) { }

	// RVA: 0xFFCBD8 Offset: 0xFF8BD8 VA: 0xFFCBD8 Slot: 15
	protected virtual DataTable CreateInstance() { }

	// RVA: 0xFFCC64 Offset: 0xFF8C64 VA: 0xFFCC64 Slot: 16
	public virtual DataTable Clone() { }

	// RVA: 0xFEF410 Offset: 0xFEB410 VA: 0xFEF410
	internal DataTable Clone(DataSet cloneDS) { }

	// RVA: 0xFFCC6C Offset: 0xFF8C6C VA: 0xFFCC6C
	private DataTable IncrementalCloneTo(DataTable sourceTable, DataTable targetTable) { }

	// RVA: 0xFFCFA8 Offset: 0xFF8FA8 VA: 0xFFCFA8
	private DataTable CloneHierarchy(DataTable sourceTable, DataSet ds, Hashtable visitedMap) { }

	// RVA: 0xFF77DC Offset: 0xFF37DC VA: 0xFF77DC
	private DataTable CloneTo(DataTable clone, DataSet cloneDS, bool skipExpressionColumns) { }

	// RVA: 0xFFD428 Offset: 0xFF9428 VA: 0xFFD428 Slot: 7
	public override ISite get_Site() { }

	// RVA: 0xFFD430 Offset: 0xFF9430 VA: 0xFFD430
	internal void AddRow(DataRow row, int proposedID) { }

	// RVA: 0xFFD440 Offset: 0xFF9440 VA: 0xFFD440
	internal void InsertRow(DataRow row, int proposedID, int pos) { }

	// RVA: 0xFFD44C Offset: 0xFF944C VA: 0xFFD44C
	internal void InsertRow(DataRow row, long proposedID, int pos, bool fireEvent) { }

	// RVA: 0xFFDFBC Offset: 0xFF9FBC VA: 0xFFDFBC
	internal void CheckNotModifying(DataRow row) { }

	// RVA: 0xFEE3C4 Offset: 0xFEA3C4 VA: 0xFEE3C4
	public void Clear() { }

	// RVA: 0xFFDFEC Offset: 0xFF9FEC VA: 0xFFDFEC
	internal void Clear(bool clearAll) { }

	// RVA: 0xFFE87C Offset: 0xFFA87C VA: 0xFFE87C
	internal void CascadeAll(DataRow row, DataRowAction action) { }

	// RVA: 0xFFE934 Offset: 0xFFA934 VA: 0xFFE934
	internal void CommitRow(DataRow row) { }

	// RVA: 0xFFEAEC Offset: 0xFFAAEC VA: 0xFFEAEC
	internal int Compare(string s1, string s2) { }

	// RVA: 0xFFEAF4 Offset: 0xFFAAF4 VA: 0xFFEAF4
	internal int Compare(string s1, string s2, CompareInfo comparer) { }

	// RVA: 0xFFEC58 Offset: 0xFFAC58 VA: 0xFFEC58
	internal int IndexOf(string s1, string s2) { }

	// RVA: 0xFFEC98 Offset: 0xFFAC98 VA: 0xFFEC98
	internal bool IsSuffix(string s1, string s2) { }

	// RVA: 0xFFECD8 Offset: 0xFFACD8 VA: 0xFFECD8
	internal void DeleteRow(DataRow row) { }

	// RVA: 0xFFED2C Offset: 0xFFAD2C VA: 0xFFED2C
	internal string FormatSortString(IndexField[] indexDesc) { }

	// RVA: 0xFFEE58 Offset: 0xFFAE58 VA: 0xFFEE58
	internal void FreeRecord(ref int record) { }

	// RVA: 0xFFEE74 Offset: 0xFFAE74 VA: 0xFFEE74
	internal Index GetIndex(string sort, DataViewRowState recordStates, IFilter rowFilter) { }

	// RVA: 0xFDD000 Offset: 0xFD9000 VA: 0xFDD000
	internal Index GetIndex(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter) { }

	// RVA: 0xFFA310 Offset: 0xFF6310 VA: 0xFFA310
	internal int GetSpecialHashCode(string name) { }

	// RVA: 0xFFC738 Offset: 0xFF8738 VA: 0xFFC738
	internal void InsertRow(DataRow row, long proposedID) { }

	// RVA: 0xFFFCC4 Offset: 0xFFBCC4 VA: 0xFFFCC4
	internal int NewRecord() { }

	// RVA: 0xFFFDB8 Offset: 0xFFBDB8 VA: 0xFFFDB8
	internal int NewUninitializedRecord() { }

	// RVA: 0xFFFCCC Offset: 0xFFBCCC VA: 0xFFFCCC
	internal int NewRecord(int sourceRecord) { }

	// RVA: 0xFF8ED4 Offset: 0xFF4ED4 VA: 0xFF8ED4
	internal DataRow NewEmptyRow() { }

	// RVA: 0xFFFDD4 Offset: 0xFFBDD4 VA: 0xFFFDD4
	private DataRow NewUninitializedRow() { }

	// RVA: 0xFFFE9C Offset: 0xFFBE9C VA: 0xFFFE9C
	public DataRow NewRow() { }

	// RVA: 0xFFFF54 Offset: 0xFFBF54 VA: 0xFFFF54
	internal DataRow CreateEmptyRow() { }

	// RVA: 0xFFFED0 Offset: 0xFFBED0 VA: 0xFFFED0
	private void NewRowCreated(DataRow row) { }

	// RVA: 0xFFFE00 Offset: 0xFFBE00 VA: 0xFFFE00
	internal DataRow NewRow(int record) { }

	// RVA: 0x100031C Offset: 0xFFC31C VA: 0x100031C Slot: 17
	protected virtual DataRow NewRowFromBuilder(DataRowBuilder builder) { }

	// RVA: 0x1000378 Offset: 0xFFC378 VA: 0x1000378 Slot: 18
	protected virtual Type GetRowType() { }

	// RVA: 0x10003E4 Offset: 0xFFC3E4 VA: 0x10003E4
	protected internal DataRow[] NewRowArray(int size) { }

	// RVA: 0x1000554 Offset: 0xFFC554 VA: 0x1000554
	internal bool get_NeedColumnChangeEvents() { }

	// RVA: 0x1000588 Offset: 0xFFC588 VA: 0x1000588 Slot: 19
	protected internal virtual void OnColumnChanging(DataColumnChangeEventArgs e) { }

	// RVA: 0x10005B0 Offset: 0xFFC5B0 VA: 0x10005B0 Slot: 20
	protected internal virtual void OnColumnChanged(DataColumnChangeEventArgs e) { }

	// RVA: 0x10005D8 Offset: 0xFFC5D8 VA: 0x10005D8 Slot: 21
	protected virtual void OnPropertyChanging(PropertyChangedEventArgs pcevent) { }

	// RVA: 0x1000600 Offset: 0xFFC600 VA: 0x1000600
	internal void OnRemoveColumnInternal(DataColumn column) { }

	// RVA: 0xFFEA48 Offset: 0xFFAA48 VA: 0xFFEA48
	private DataRowChangeEventArgs OnRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction) { }

	// RVA: 0xFFE9A4 Offset: 0xFFA9A4 VA: 0xFFE9A4
	private DataRowChangeEventArgs OnRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction) { }

	// RVA: 0x1000604 Offset: 0xFFC604 VA: 0x1000604 Slot: 22
	protected virtual void OnRowChanged(DataRowChangeEventArgs e) { }

	// RVA: 0x100062C Offset: 0xFFC62C VA: 0x100062C Slot: 23
	protected virtual void OnRowChanging(DataRowChangeEventArgs e) { }

	// RVA: 0x1000654 Offset: 0xFFC654 VA: 0x1000654 Slot: 24
	protected virtual void OnRowDeleting(DataRowChangeEventArgs e) { }

	// RVA: 0x100067C Offset: 0xFFC67C VA: 0x100067C Slot: 25
	protected virtual void OnRowDeleted(DataRowChangeEventArgs e) { }

	// RVA: 0x10006A4 Offset: 0xFFC6A4 VA: 0x10006A4 Slot: 26
	protected virtual void OnTableCleared(DataTableClearEventArgs e) { }

	// RVA: 0x10006CC Offset: 0xFFC6CC VA: 0x10006CC Slot: 27
	protected virtual void OnTableClearing(DataTableClearEventArgs e) { }

	// RVA: 0x10006F4 Offset: 0xFFC6F4 VA: 0x10006F4 Slot: 28
	protected virtual void OnTableNewRow(DataTableNewRowEventArgs e) { }

	// RVA: 0xFFEEA8 Offset: 0xFFAEA8 VA: 0xFFEEA8
	internal IndexField[] ParseSortString(string sortString) { }

	// RVA: 0xFFB184 Offset: 0xFF7184 VA: 0xFFB184
	internal void RaisePropertyChanging(string name) { }

	// RVA: 0x100071C Offset: 0xFFC71C VA: 0x100071C
	internal void RecordChanged(int record) { }

	// RVA: 0x100088C Offset: 0xFFC88C VA: 0x100088C
	internal void RecordChanged(int[] oldIndex, int[] newIndex) { }

	// RVA: 0xFFF348 Offset: 0xFFB348 VA: 0xFFF348
	internal void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState) { }

	// RVA: 0xFFF4D0 Offset: 0xFFB4D0 VA: 0xFFF4D0
	internal void RecordStateChanged(int record1, DataViewRowState oldState1, DataViewRowState newState1, int record2, DataViewRowState oldState2, DataViewRowState newState2) { }

	// RVA: 0x1000A58 Offset: 0xFFCA58 VA: 0x1000A58
	internal int[] RemoveRecordFromIndexes(DataRow row, DataRowVersion version) { }

	// RVA: 0x1000C28 Offset: 0xFFCC28 VA: 0x1000C28
	internal int[] InsertRecordToIndexes(DataRow row, DataRowVersion version) { }

	// RVA: 0x1000DA0 Offset: 0xFFCDA0 VA: 0x1000DA0
	internal void SilentlySetValue(DataRow dr, DataColumn dc, DataRowVersion version, object newValue) { }

	// RVA: 0x10015C8 Offset: 0xFFD5C8 VA: 0x10015C8
	internal void RemoveRow(DataRow row, bool check) { }

	// RVA: 0x1001760 Offset: 0xFFD760 VA: 0x1001760 Slot: 29
	public virtual void Reset() { }

	// RVA: 0xFF77D4 Offset: 0xFF37D4 VA: 0xFF77D4
	internal void ResetIndexes() { }

	// RVA: 0xFDBFE4 Offset: 0xFD7FE4 VA: 0xFDBFE4
	internal void ResetInternalIndexes(DataColumn column) { }

	// RVA: 0x1001A2C Offset: 0xFFDA2C VA: 0x1001A2C
	internal void RollbackRow(DataRow row) { }

	// RVA: 0xFFFAC8 Offset: 0xFFBAC8 VA: 0xFFFAC8
	private DataRowChangeEventArgs RaiseRowChanged(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction) { }

	// RVA: 0x1001A78 Offset: 0xFFDA78 VA: 0x1001A78
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction) { }

	// RVA: 0xFFF1CC Offset: 0xFFB1CC VA: 0xFFF1CC
	private DataRowChangeEventArgs RaiseRowChanging(DataRowChangeEventArgs args, DataRow eRow, DataRowAction eAction, bool fireEvent) { }

	// RVA: 0xFFBF58 Offset: 0xFF7F58 VA: 0xFFBF58
	internal void SetNewRecord(DataRow row, int proposedRecord, DataRowAction action = 2, bool isInMerge = False, bool fireEvent = True, bool suppressEnsurePropertyChanged = False) { }

	// RVA: 0xFFD7BC Offset: 0xFF97BC VA: 0xFFD7BC
	private void SetNewRecordWorker(DataRow row, int proposedRecord, DataRowAction action, bool isInMerge, bool suppressEnsurePropertyChanged, int position, bool fireEvent, out Exception deferredException) { }

	// RVA: 0xFFBFB0 Offset: 0xFF7FB0 VA: 0xFFBFB0
	internal void SetOldRecord(DataRow row, int proposedRecord) { }

	// RVA: 0x1001C28 Offset: 0xFFDC28 VA: 0x1001C28
	private void RestoreShadowIndexes() { }

	// RVA: 0xFF9634 Offset: 0xFF5634 VA: 0xFF9634
	private void SetShadowIndexes() { }

	// RVA: 0x1001C44 Offset: 0xFFDC44 VA: 0x1001C44
	internal void ShadowIndexCopy() { }

	// RVA: 0x1001CC0 Offset: 0xFFDCC0 VA: 0x1001CC0 Slot: 3
	public override string ToString() { }

	// RVA: 0xFDDF0C Offset: 0xFD9F0C VA: 0xFDDF0C
	internal bool UpdatingCurrent(DataRow row, DataRowAction action) { }

	// RVA: 0x1001D34 Offset: 0xFFDD34 VA: 0x1001D34
	internal DataColumn AddUniqueKey(int position) { }

	// RVA: 0x1001F90 Offset: 0xFFDF90 VA: 0x1001F90
	internal DataColumn AddUniqueKey() { }

	// RVA: 0x1001F98 Offset: 0xFFDF98 VA: 0x1001F98
	internal DataColumn AddForeignKey(DataColumn parentKey) { }

	// RVA: 0x1002040 Offset: 0xFFE040 VA: 0x1002040
	internal void UpdatePropertyDescriptorCollectionCache() { }

	// RVA: 0x1002048 Offset: 0xFFE048 VA: 0x1002048
	internal PropertyDescriptorCollection GetPropertyDescriptorCollection(Attribute[] attributes) { }

	// RVA: 0xFF870C Offset: 0xFF470C VA: 0xFF870C
	internal XmlQualifiedName get_TypeName() { }

	// RVA: 0x1002288 Offset: 0xFFE288 VA: 0x1002288
	public void Merge(DataTable table) { }

	// RVA: 0x1002294 Offset: 0xFFE294 VA: 0x1002294
	public void Merge(DataTable table, bool preserveChanges, MissingSchemaAction missingSchemaAction) { }

	// RVA: 0x1002514 Offset: 0xFFE514 VA: 0x1002514
	public void WriteXml(XmlWriter writer, XmlWriteMode mode, bool writeHierarchy) { }

	// RVA: 0x10028B4 Offset: 0xFFE8B4 VA: 0x10028B4
	private bool CheckForClosureOnExpressions(DataTable dt, bool writeHierarchy) { }

	// RVA: 0xFF8804 Offset: 0xFF4804 VA: 0xFF8804
	private bool CheckForClosureOnExpressionTables(List<DataTable> tableList) { }

	// RVA: 0x1002D10 Offset: 0xFFED10 VA: 0x1002D10
	public void WriteXmlSchema(XmlWriter writer, bool writeHierarchy) { }

	// RVA: 0x1003030 Offset: 0xFFF030 VA: 0x1003030
	private void RestoreConstraint(bool originalEnforceConstraint) { }

	// RVA: 0x1003080 Offset: 0xFFF080 VA: 0x1003080
	private bool IsEmptyXml(XmlReader reader) { }

	// RVA: 0x1003250 Offset: 0xFFF250 VA: 0x1003250
	internal XmlReadMode ReadXml(XmlReader reader, XmlReadMode mode, bool denyResolving) { }

	// RVA: 0x1004BC4 Offset: 0x1000BC4 VA: 0x1004BC4
	internal void ReadEndElement(XmlReader reader) { }

	// RVA: 0x1004C58 Offset: 0x1000C58 VA: 0x1004C58
	internal void ReadXDRSchema(XmlReader reader) { }

	// RVA: 0x1005E98 Offset: 0x1001E98 VA: 0x1005E98
	internal bool MoveToElement(XmlReader reader, int depth) { }

	// RVA: 0x1004204 Offset: 0x1000204 VA: 0x1004204
	private void ReadXmlDiffgram(XmlReader reader) { }

	// RVA: 0x1005F4C Offset: 0x1001F4C VA: 0x1005F4C
	internal void ReadXSDSchema(XmlReader reader, bool denyResolving) { }

	// RVA: 0x1004CC8 Offset: 0x1000CC8 VA: 0x1004CC8
	internal void ReadXmlSchema(XmlReader reader, bool denyResolving) { }

	// RVA: 0x1002978 Offset: 0xFFE978 VA: 0x1002978
	private void CreateTableList(DataTable currentTable, List<DataTable> tableList) { }

	// RVA: 0x10060E0 Offset: 0x10020E0 VA: 0x10060E0
	private void CreateRelationList(List<DataTable> tableList, List<DataRelation> relationList) { }

	// RVA: 0x10064EC Offset: 0x10024EC VA: 0x10064EC
	public static XmlSchemaComplexType GetDataTableSchema(XmlSchemaSet schemaSet) { }

	// RVA: 0x10066EC Offset: 0x10026EC VA: 0x10066EC Slot: 11
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x10066FC Offset: 0x10026FC VA: 0x10066FC Slot: 30
	protected virtual XmlSchema GetSchema() { }

	// RVA: 0x10068CC Offset: 0x10028CC VA: 0x10068CC Slot: 12
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1006A78 Offset: 0x1002A78 VA: 0x1006A78 Slot: 13
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1006AAC Offset: 0x1002AAC VA: 0x1006AAC Slot: 31
	protected virtual void ReadXmlSerializable(XmlReader reader) { }

	// RVA: 0x1006AB8 Offset: 0x1002AB8 VA: 0x1006AB8
	internal Hashtable get_RowDiffId() { }

	// RVA: 0xFDF7C0 Offset: 0xFDB7C0 VA: 0xFDF7C0
	internal void AddDependentColumn(DataColumn expressionColumn) { }

	// RVA: 0xFDF92C Offset: 0xFDB92C VA: 0xFDF92C
	internal void RemoveDependentColumn(DataColumn expressionColumn) { }

	// RVA: 0x1006B1C Offset: 0x1002B1C VA: 0x1006B1C
	internal void EvaluateExpressions() { }

	// RVA: 0xFFF6EC Offset: 0xFFB6EC VA: 0xFFF6EC
	internal void EvaluateExpressions(DataRow row, DataRowAction action, List<DataRow> cachedRows) { }

	// RVA: 0xFDBDD4 Offset: 0xFD7DD4 VA: 0xFDBDD4
	internal void EvaluateExpressions(DataColumn column) { }

	// RVA: 0xFDC1B8 Offset: 0xFD81B8 VA: 0xFDC1B8
	internal void EvaluateDependentExpressions(DataColumn column) { }

	// RVA: 0x1000F10 Offset: 0xFFCF10 VA: 0x1000F10
	internal void EvaluateDependentExpressions(List<DataColumn> columns, DataRow row, DataRowVersion version, List<DataRow> cachedRows) { }
}


// Namespace: System.Data
internal sealed class FunctionNode : ExpressionNode // TypeDefIndex: 3923
{
	// Fields
	internal readonly string _name; // 0x18
	internal readonly int _info; // 0x20
	internal int _argumentCount; // 0x24
	internal ExpressionNode[] _arguments; // 0x28
	private readonly TypeLimiter _capturedLimiter; // 0x30
	private static readonly Function[] s_funcs; // 0x0

	// Properties
	internal FunctionId Aggregate { get; }
	internal bool IsAggregate { get; }

	// Methods

	// RVA: 0x1006F10 Offset: 0x1002F10 VA: 0x1006F10
	internal void .ctor(DataTable table, string name) { }

	// RVA: 0x10070B8 Offset: 0x10030B8 VA: 0x10070B8
	internal void AddArgument(ExpressionNode argument) { }

	// RVA: 0x10072A0 Offset: 0x10032A0 VA: 0x10072A0 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x1007728 Offset: 0x1003728 VA: 0x1007728 Slot: 6
	internal override object Eval() { }

	// RVA: 0x100773C Offset: 0x100373C VA: 0x100773C Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x1009AC8 Offset: 0x1005AC8 VA: 0x1009AC8 Slot: 8
	internal override object Eval(int[] recordNos) { }

	// RVA: 0x1009AFC Offset: 0x1005AFC VA: 0x1009AFC Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x1009B8C Offset: 0x1005B8C VA: 0x1009B8C Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x1009C08 Offset: 0x1005C08 VA: 0x1009C08 Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x1009C84 Offset: 0x1005C84 VA: 0x1009C84 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x1009D00 Offset: 0x1005D00 VA: 0x1009D00 Slot: 14
	internal override bool DependsOn(DataColumn column) { }

	// RVA: 0x1009D88 Offset: 0x1005D88 VA: 0x1009D88 Slot: 13
	internal override ExpressionNode Optimize() { }

	// RVA: 0x1008088 Offset: 0x1004088 VA: 0x1008088
	private Type GetDataType(ExpressionNode node) { }

	// RVA: 0x1008324 Offset: 0x1004324 VA: 0x1008324
	private object EvalFunction(FunctionId id, object[] argumentValues, DataRow row, DataRowVersion version) { }

	// RVA: 0x1009FD4 Offset: 0x1005FD4 VA: 0x1009FD4
	internal FunctionId get_Aggregate() { }

	// RVA: 0x100A070 Offset: 0x1006070 VA: 0x100A070
	internal bool get_IsAggregate() { }

	// RVA: 0x100757C Offset: 0x100357C VA: 0x100757C
	internal void Check() { }

	// RVA: 0x100A2A4 Offset: 0x10062A4 VA: 0x100A2A4
	private static void .cctor() { }
}


// Namespace: System.Data
internal enum FunctionId // TypeDefIndex: 3924
{
	// Fields
	public int value__; // 0x0
	public const FunctionId none = -1;
	public const FunctionId Ascii = 0;
	public const FunctionId Char = 1;
	public const FunctionId Charindex = 2;
	public const FunctionId Difference = 3;
	public const FunctionId Len = 4;
	public const FunctionId Lower = 5;
	public const FunctionId LTrim = 6;
	public const FunctionId Patindex = 7;
	public const FunctionId Replicate = 8;
	public const FunctionId Reverse = 9;
	public const FunctionId Right = 10;
	public const FunctionId RTrim = 11;
	public const FunctionId Soundex = 12;
	public const FunctionId Space = 13;
	public const FunctionId Str = 14;
	public const FunctionId Stuff = 15;
	public const FunctionId Substring = 16;
	public const FunctionId Upper = 17;
	public const FunctionId IsNull = 18;
	public const FunctionId Iif = 19;
	public const FunctionId Convert = 20;
	public const FunctionId cInt = 21;
	public const FunctionId cBool = 22;
	public const FunctionId cDate = 23;
	public const FunctionId cDbl = 24;
	public const FunctionId cStr = 25;
	public const FunctionId Abs = 26;
	public const FunctionId Acos = 27;
	public const FunctionId In = 28;
	public const FunctionId Trim = 29;
	public const FunctionId Sum = 30;
	public const FunctionId Avg = 31;
	public const FunctionId Min = 32;
	public const FunctionId Max = 33;
	public const FunctionId Count = 34;
	public const FunctionId StDev = 35;
	public const FunctionId Var = 37;
	public const FunctionId DateTimeOffset = 38;
}


// Namespace: System.Data
internal sealed class Function // TypeDefIndex: 3925
{
	// Fields
	internal readonly string _name; // 0x10
	internal readonly FunctionId _id; // 0x18
	internal readonly Type _result; // 0x20
	internal readonly bool _isValidateArguments; // 0x28
	internal readonly bool _isVariantArgumentList; // 0x29
	internal readonly int _argumentCount; // 0x2C
	internal readonly Type[] _parameters; // 0x30
	internal static string[] s_functionName; // 0x0

	// Methods

	// RVA: 0x100ABA4 Offset: 0x1006BA4 VA: 0x100ABA4
	internal void .ctor(string name, FunctionId id, Type result, bool IsValidateArguments, bool IsVariantArgumentList, int argumentCount, Type a1, Type a2, Type a3) { }

	// RVA: 0x100AD7C Offset: 0x1006D7C VA: 0x100AD7C
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class TypeLimiter.Scope.<>c // TypeDefIndex: 3926
{
	// Fields
	public static readonly TypeLimiter.Scope.<>c <>9; // 0x0
	public static Func<Type, bool> <>9__3_0; // 0x8

	// Methods

	// RVA: 0x100C6F4 Offset: 0x10086F4 VA: 0x100C6F4
	private static void .cctor() { }

	// RVA: 0x100C750 Offset: 0x1008750 VA: 0x100C750
	public void .ctor() { }

	// RVA: 0x100C758 Offset: 0x1008758 VA: 0x100C758
	internal bool <.ctor>b__3_0(Type type) { }
}


// Namespace: 
private sealed class TypeLimiter.Scope : IDisposable // TypeDefIndex: 3927
{
	// Fields
	private static readonly HashSet<Type> s_allowedTypes; // 0x0
	private HashSet<Type> m_allowedTypes; // 0x10
	private readonly TypeLimiter.Scope m_previousScope; // 0x18

	// Methods

	// RVA: 0x100B7BC Offset: 0x10077BC VA: 0x100B7BC
	internal void .ctor(TypeLimiter.Scope previousScope, IEnumerable<Type> allowedTypes) { }

	// RVA: 0x100BB3C Offset: 0x1007B3C VA: 0x100BB3C Slot: 4
	public void Dispose() { }

	// RVA: 0x100B40C Offset: 0x100740C VA: 0x100B40C
	public bool IsAllowedType(Type type) { }

	// RVA: 0x100BC08 Offset: 0x1007C08 VA: 0x100BC08
	private static bool IsTypeUnconditionallyAllowed(Type type) { }

	// RVA: 0x100BDCC Offset: 0x1007DCC VA: 0x100BDCC
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class TypeLimiter.<>c // TypeDefIndex: 3928
{
	// Fields
	public static readonly TypeLimiter.<>c <>9; // 0x0
	public static Func<DataColumn, Type> <>9__10_0; // 0x8
	public static Func<DataTable, IEnumerable<Type>> <>9__11_0; // 0x10

	// Methods

	// RVA: 0x100C7B4 Offset: 0x10087B4 VA: 0x100C7B4
	private static void .cctor() { }

	// RVA: 0x100C810 Offset: 0x1008810 VA: 0x100C810
	public void .ctor() { }

	// RVA: 0x100C818 Offset: 0x1008818 VA: 0x100C818
	internal Type <GetPreviouslyDeclaredDataTypes>b__10_0(DataColumn column) { }

	// RVA: 0x100C830 Offset: 0x1008830 VA: 0x100C830
	internal IEnumerable<Type> <GetPreviouslyDeclaredDataTypes>b__11_0(DataTable table) { }
}


// Namespace: System.Data
internal sealed class TypeLimiter // TypeDefIndex: 3929
{
	// Fields
	[ThreadStatic]
	private static TypeLimiter.Scope s_activeScope; // 0x80000000
	private TypeLimiter.Scope m_instanceScope; // 0x10

	// Properties
	private static bool IsTypeLimitingDisabled { get; }

	// Methods

	// RVA: 0x100B36C Offset: 0x100736C VA: 0x100B36C
	private void .ctor(TypeLimiter.Scope scope) { }

	// RVA: 0x100B394 Offset: 0x1007394 VA: 0x100B394
	private static bool get_IsTypeLimitingDisabled() { }

	// RVA: 0x1007048 Offset: 0x1003048 VA: 0x1007048
	public static TypeLimiter Capture() { }

	// RVA: 0x1009F3C Offset: 0x1005F3C VA: 0x1009F3C
	public static void EnsureTypeIsAllowed(Type type, TypeLimiter capturedLimiter) { }

	// RVA: 0x100B5A4 Offset: 0x10075A4 VA: 0x100B5A4
	public static IDisposable EnterRestrictedScope(DataSet dataSet) { }

	// RVA: 0x100B924 Offset: 0x1007924 VA: 0x100B924
	public static IDisposable EnterRestrictedScope(DataTable dataTable) { }

	// RVA: 0x100B9DC Offset: 0x10079DC VA: 0x100B9DC
	private static IEnumerable<Type> GetPreviouslyDeclaredDataTypes(DataTable dataTable) { }

	// RVA: 0x100B65C Offset: 0x100765C VA: 0x100B65C
	private static IEnumerable<Type> GetPreviouslyDeclaredDataTypes(DataSet dataSet) { }
}


// Namespace: System.Data
public enum AcceptRejectRule // TypeDefIndex: 3930
{
	// Fields
	public int value__; // 0x0
	public const AcceptRejectRule None = 0;
	public const AcceptRejectRule Cascade = 1;
}


// Namespace: System.Data
internal enum AggregateType // TypeDefIndex: 3931
{
	// Fields
	public int value__; // 0x0
	public const AggregateType None = 0;
	public const AggregateType Sum = 4;
	public const AggregateType Mean = 5;
	public const AggregateType Min = 6;
	public const AggregateType Max = 7;
	public const AggregateType First = 8;
	public const AggregateType Count = 9;
	public const AggregateType Var = 10;
	public const AggregateType StDev = 11;
}


// Namespace: System.Data
public class InternalDataCollectionBase : ICollection, IEnumerable // TypeDefIndex: 3932
{
	// Fields
	internal static readonly CollectionChangeEventArgs s_refreshEventArgs; // 0x0

	// Properties
	[Browsable(False)]
	public virtual int Count { get; }
	[Browsable(False)]
	public bool IsSynchronized { get; }
	[Browsable(False)]
	public object SyncRoot { get; }
	protected virtual ArrayList List { get; }

	// Methods

	// RVA: 0x100C838 Offset: 0x1008838 VA: 0x100C838 Slot: 9
	public virtual int get_Count() { }

	// RVA: 0x100C864 Offset: 0x1008864 VA: 0x100C864 Slot: 10
	public virtual void CopyTo(Array ar, int index) { }

	// RVA: 0x100C8AC Offset: 0x10088AC VA: 0x100C8AC Slot: 11
	public virtual IEnumerator GetEnumerator() { }

	// RVA: 0x100C8D8 Offset: 0x10088D8 VA: 0x100C8D8 Slot: 7
	public bool get_IsSynchronized() { }

	// RVA: 0x100C8E0 Offset: 0x10088E0 VA: 0x100C8E0
	internal int NamesEqual(string s1, string s2, bool fCaseSensitive, CultureInfo locale) { }

	// RVA: 0x100C98C Offset: 0x100898C VA: 0x100C98C Slot: 6
	public object get_SyncRoot() { }

	// RVA: 0x100C990 Offset: 0x1008990 VA: 0x100C990 Slot: 12
	protected virtual ArrayList get_List() { }

	// RVA: 0x100C998 Offset: 0x1008998 VA: 0x100C998
	public void .ctor() { }

	// RVA: 0x100C9A0 Offset: 0x10089A0 VA: 0x100C9A0
	private static void .cctor() { }
}


// Namespace: System.Data
internal sealed class ColumnTypeConverter : TypeConverter // TypeDefIndex: 3933
{
	// Fields
	private static readonly Type[] s_types; // 0x0
	private TypeConverter.StandardValuesCollection _values; // 0x10

	// Methods

	// RVA: 0x100CA18 Offset: 0x1008A18 VA: 0x100CA18
	public void .ctor() { }

	// RVA: 0x100CA20 Offset: 0x1008A20 VA: 0x100CA20 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x100CAE8 Offset: 0x1008AE8 VA: 0x100CAE8 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x100CFD0 Offset: 0x1008FD0 VA: 0x100CFD0 Slot: 4
	public override bool CanConvertFrom(ITypeDescriptorContext context, Type sourceType) { }

	// RVA: 0x100D098 Offset: 0x1009098 VA: 0x100D098 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }

	// RVA: 0x100D2A0 Offset: 0x10092A0 VA: 0x100D2A0 Slot: 12
	public override TypeConverter.StandardValuesCollection GetStandardValues(ITypeDescriptorContext context) { }

	// RVA: 0x100D3B4 Offset: 0x10093B4 VA: 0x100D3B4 Slot: 13
	public override bool GetStandardValuesExclusive(ITypeDescriptorContext context) { }

	// RVA: 0x100D3BC Offset: 0x10093BC VA: 0x100D3BC Slot: 14
	public override bool GetStandardValuesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x100D3C4 Offset: 0x10093C4 VA: 0x100D3C4
	private static void .cctor() { }
}


// Namespace: System.Data
internal class DataCommonEventSource : EventSource // TypeDefIndex: 3934
{
	// Fields
	internal static readonly DataCommonEventSource Log; // 0x0
	private static long s_nextScopeId; // 0x8

	// Methods

	// RVA: -1 Offset: -1
	internal void Trace<T0, T1>(string format, T0 arg0, T1 arg1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D528 Offset: 0xB79528 VA: 0xB7D528
	|-DataCommonEventSource.Trace<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal void Trace<T0, T1, T2>(string format, T0 arg0, T1 arg1, T2 arg2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D52C Offset: 0xB7952C VA: 0xB7D52C
	|-DataCommonEventSource.Trace<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal void Trace<T0, T1, T2, T3, T4>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D530 Offset: 0xB79530 VA: 0xB7D530
	|-DataCommonEventSource.Trace<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal long EnterScope<T1>(string format, T1 arg1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D508 Offset: 0xB79508 VA: 0xB7D508
	|-DataCommonEventSource.EnterScope<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal long EnterScope<T1, T2>(string format, T1 arg1, T2 arg2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D510 Offset: 0xB79510 VA: 0xB7D510
	|-DataCommonEventSource.EnterScope<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal long EnterScope<T1, T2, T3>(string format, T1 arg1, T2 arg2, T3 arg3) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D518 Offset: 0xB79518 VA: 0xB7D518
	|-DataCommonEventSource.EnterScope<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal long EnterScope<T1, T2, T3, T4>(string format, T1 arg1, T2 arg2, T3 arg3, T4 arg4) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7D520 Offset: 0xB79520 VA: 0xB7D520
	|-DataCommonEventSource.EnterScope<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: 0x100DEE0 Offset: 0x1009EE0 VA: 0x100DEE0
	internal void ExitScope(long scopeId) { }

	// RVA: 0x100DEF0 Offset: 0x1009EF0 VA: 0x100DEF0
	public void .ctor() { }

	// RVA: 0x100DEF8 Offset: 0x1009EF8 VA: 0x100DEF8
	private static void .cctor() { }
}


// Namespace: System.Data
[TypeConverter(typeof(ConstraintConverter))]
public abstract class Constraint // TypeDefIndex: 3935
{
	// Fields
	private string _schemaName; // 0x10
	private bool _inCollection; // 0x18
	private DataSet _dataSet; // 0x20
	internal string _name; // 0x28
	internal PropertyCollection _extendedProperties; // 0x30

	// Properties
	[DefaultValue("")]
	public virtual string ConstraintName { set; }
	internal string SchemaName { get; set; }
	internal virtual bool InCollection { set; }
	public abstract DataTable Table { get; }
	[Browsable(False)]
	public PropertyCollection ExtendedProperties { get; }

	// Methods

	// RVA: 0x100DF60 Offset: 0x1009F60 VA: 0x100DF60 Slot: 4
	public virtual void set_ConstraintName(string value) { }

	// RVA: 0x100E350 Offset: 0x100A350 VA: 0x100E350
	internal string get_SchemaName() { }

	// RVA: 0x100E380 Offset: 0x100A380 VA: 0x100E380
	internal void set_SchemaName(string value) { }

	// RVA: 0x100E3B0 Offset: 0x100A3B0 VA: 0x100E3B0 Slot: 5
	internal virtual void set_InCollection(bool value) { }

	// RVA: -1 Offset: -1 Slot: 6
	public abstract DataTable get_Table();

	// RVA: 0x100E3F4 Offset: 0x100A3F4 VA: 0x100E3F4
	public PropertyCollection get_ExtendedProperties() { }

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract bool ContainsColumn(DataColumn column);

	// RVA: -1 Offset: -1 Slot: 8
	internal abstract bool CanEnableConstraint();

	// RVA: -1 Offset: -1 Slot: 9
	internal abstract Constraint Clone(DataSet destination);

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract Constraint Clone(DataSet destination, bool ignoreNSforTableLookup);

	// RVA: 0x100E458 Offset: 0x100A458 VA: 0x100E458
	internal void CheckConstraint() { }

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract void CheckCanAddToCollection(ConstraintCollection constraint);

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract bool CanBeRemovedFromCollection(ConstraintCollection constraint, bool fThrowException);

	// RVA: -1 Offset: -1 Slot: 13
	internal abstract void CheckConstraint(DataRow row, DataRowAction action);

	// RVA: -1 Offset: -1 Slot: 14
	internal abstract void CheckState();

	// RVA: 0x100E4A0 Offset: 0x100A4A0 VA: 0x100E4A0
	protected void CheckStateForProperty() { }

	// RVA: -1 Offset: -1 Slot: 15
	internal abstract bool IsConstraintViolated();

	// RVA: 0x100E598 Offset: 0x100A598 VA: 0x100E598 Slot: 3
	public override string ToString() { }

	// RVA: 0x100E5A0 Offset: 0x100A5A0 VA: 0x100E5A0
	protected void .ctor() { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public sealed class ConstraintCollection : InternalDataCollectionBase // TypeDefIndex: 3936
{
	// Fields
	private readonly DataTable _table; // 0x10
	private readonly ArrayList _list; // 0x18
	private int _defaultNameIndex; // 0x20
	private CollectionChangeEventHandler _onCollectionChanged; // 0x28
	private Constraint[] _delayLoadingConstraints; // 0x30
	private bool _fLoadForeignKeyConstraintsOnly; // 0x38

	// Properties
	protected override ArrayList List { get; }
	public Constraint Item { get; }
	public Constraint Item { get; }

	// Methods

	// RVA: 0x100E5FC Offset: 0x100A5FC VA: 0x100E5FC
	internal void .ctor(DataTable table) { }

	// RVA: 0x100E69C Offset: 0x100A69C VA: 0x100E69C Slot: 12
	protected override ArrayList get_List() { }

	// RVA: 0x100E6A4 Offset: 0x100A6A4 VA: 0x100E6A4
	public Constraint get_Item(int index) { }

	// RVA: 0x100E788 Offset: 0x100A788 VA: 0x100E788
	public Constraint get_Item(string name) { }

	// RVA: 0x100E9A0 Offset: 0x100A9A0 VA: 0x100E9A0
	public void Add(Constraint constraint) { }

	// RVA: 0x100E9A8 Offset: 0x100A9A8 VA: 0x100E9A8
	internal void Add(Constraint constraint, bool addUniqueWhenAddingForeign) { }

	// RVA: 0x100F29C Offset: 0x100B29C VA: 0x100F29C
	public Constraint Add(string name, DataColumn[] columns, bool primaryKey) { }

	// RVA: 0x100EF48 Offset: 0x100AF48 VA: 0x100EF48
	private void AddUniqueConstraint(UniqueConstraint constraint) { }

	// RVA: 0x100F13C Offset: 0x100B13C VA: 0x100F13C
	private void AddForeignKeyConstraint(ForeignKeyConstraint constraint) { }

	// RVA: 0x100EE78 Offset: 0x100AE78 VA: 0x100EE78
	private bool AutoGenerated(Constraint constraint) { }

	// RVA: 0x100F250 Offset: 0x100B250 VA: 0x100F250
	private void ArrayAdd(Constraint constraint) { }

	// RVA: 0x100F344 Offset: 0x100B344 VA: 0x100F344
	private void ArrayRemove(Constraint constraint) { }

	// RVA: 0x100F118 Offset: 0x100B118 VA: 0x100F118
	internal string AssignName() { }

	// RVA: 0x100F1A8 Offset: 0x100B1A8 VA: 0x100F1A8
	private void BaseAdd(Constraint constraint) { }

	// RVA: 0x100F420 Offset: 0x100B420 VA: 0x100F420
	private void BaseGroupSwitch(Constraint[] oldArray, int oldLength, Constraint[] newArray, int newLength) { }

	// RVA: 0x100F5A4 Offset: 0x100B5A4 VA: 0x100F5A4
	private void BaseRemove(Constraint constraint) { }

	// RVA: 0x100F828 Offset: 0x100B828 VA: 0x100F828
	internal bool CanRemove(Constraint constraint, bool fThrowException) { }

	// RVA: 0x100F854 Offset: 0x100B854 VA: 0x100F854
	public void Clear() { }

	// RVA: 0x100FBE4 Offset: 0x100BBE4 VA: 0x100FBE4
	public bool Contains(string name) { }

	// RVA: 0x100FBFC Offset: 0x100BBFC VA: 0x100FBFC
	internal bool Contains(string name, bool caseSensitive) { }

	// RVA: 0x100ED40 Offset: 0x100AD40 VA: 0x100ED40
	internal Constraint FindConstraint(Constraint constraint) { }

	// RVA: 0x100F024 Offset: 0x100B024 VA: 0x100F024
	internal UniqueConstraint FindKeyConstraint(DataColumn[] columns) { }

	// RVA: 0x100FD68 Offset: 0x100BD68 VA: 0x100FD68
	internal UniqueConstraint FindKeyConstraint(DataColumn column) { }

	// RVA: 0x100FE5C Offset: 0x100BE5C VA: 0x100FE5C
	internal ForeignKeyConstraint FindForeignKeyConstraint(DataColumn[] parentColumns, DataColumn[] childColumns) { }

	// RVA: 0x100FCE0 Offset: 0x100BCE0 VA: 0x100FCE0
	private static bool CompareArrays(DataColumn[] a1, DataColumn[] a2) { }

	// RVA: 0x100E864 Offset: 0x100A864 VA: 0x100E864
	internal int InternalIndexOf(string constraintName) { }

	// RVA: 0x100F368 Offset: 0x100B368 VA: 0x100F368
	private string MakeName(int index) { }

	// RVA: 0x100F274 Offset: 0x100B274 VA: 0x100F274
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x100E11C Offset: 0x100A11C VA: 0x100E11C
	internal void RegisterName(string name) { }

	// RVA: 0x100FF74 Offset: 0x100BF74 VA: 0x100FF74
	public void Remove(Constraint constraint) { }

	// RVA: 0x100E2D0 Offset: 0x100A2D0 VA: 0x100E2D0
	internal void UnregisterName(string name) { }
}


// Namespace: System.Data
internal sealed class ConstraintConverter : ExpandableObjectConverter // TypeDefIndex: 3937
{
	// Methods

	// RVA: 0x10100DC Offset: 0x100C0DC VA: 0x10100DC
	public void .ctor() { }

	// RVA: 0x10100E4 Offset: 0x100C0E4 VA: 0x10100E4 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x10101AC Offset: 0x100C1AC VA: 0x10101AC Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }
}


// Namespace: System.Data
internal class ConstraintEnumerator // TypeDefIndex: 3938
{
	// Fields
	private IEnumerator _tables; // 0x10
	private IEnumerator _constraints; // 0x18
	private Constraint _currentObject; // 0x20

	// Methods

	// RVA: 0x1010B30 Offset: 0x100CB30 VA: 0x1010B30
	public void .ctor(DataSet dataSet) { }

	// RVA: 0x1010B84 Offset: 0x100CB84 VA: 0x1010B84
	public bool GetNext() { }

	// RVA: 0x1010E64 Offset: 0x100CE64 VA: 0x1010E64 Slot: 4
	protected virtual bool IsValidCandidate(Constraint constraint) { }
}


// Namespace: System.Data
internal class ForeignKeyConstraintEnumerator : ConstraintEnumerator // TypeDefIndex: 3939
{
	// Methods

	// RVA: 0x1010E6C Offset: 0x100CE6C VA: 0x1010E6C
	public void .ctor(DataSet dataSet) { }

	// RVA: 0x1010E70 Offset: 0x100CE70 VA: 0x1010E70 Slot: 4
	protected override bool IsValidCandidate(Constraint constraint) { }

	// RVA: 0x1010EE8 Offset: 0x100CEE8 VA: 0x1010EE8
	public ForeignKeyConstraint GetForeignKeyConstraint() { }
}


// Namespace: System.Data
internal sealed class ChildForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator // TypeDefIndex: 3940
{
	// Fields
	private readonly DataTable _table; // 0x28

	// Methods

	// RVA: 0x1010F60 Offset: 0x100CF60 VA: 0x1010F60
	public void .ctor(DataSet dataSet, DataTable inTable) { }

	// RVA: 0x1010F84 Offset: 0x100CF84 VA: 0x1010F84 Slot: 4
	protected override bool IsValidCandidate(Constraint constraint) { }
}


// Namespace: System.Data
internal sealed class ParentForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator // TypeDefIndex: 3941
{
	// Fields
	private readonly DataTable _table; // 0x28

	// Methods

	// RVA: 0x1011018 Offset: 0x100D018 VA: 0x1011018
	public void .ctor(DataSet dataSet, DataTable inTable) { }

	// RVA: 0x101103C Offset: 0x100D03C VA: 0x101103C Slot: 4
	protected override bool IsValidCandidate(Constraint constraint) { }
}


// Namespace: System.Data
public class DataColumnChangeEventArgs : EventArgs // TypeDefIndex: 3942
{
	// Fields
	private DataColumn _column; // 0x10
	[CompilerGenerated]
	private readonly DataRow <Row>k__BackingField; // 0x18
	[CompilerGenerated]
	private object <ProposedValue>k__BackingField; // 0x20

	// Methods

	// RVA: 0x10110D4 Offset: 0x100D0D4 VA: 0x10110D4
	internal void .ctor(DataRow row) { }

	// RVA: 0x1011140 Offset: 0x100D140 VA: 0x1011140
	public void .ctor(DataRow row, DataColumn column, object value) { }

	// RVA: 0x10111C0 Offset: 0x100D1C0 VA: 0x10111C0
	internal void InitializeColumnChangeEvent(DataColumn column, object value) { }
}


// Namespace: System.Data
public sealed class DataColumnChangeEventHandler : MulticastDelegate // TypeDefIndex: 3943
{
	// Methods

	// RVA: 0x10111CC Offset: 0x100D1CC VA: 0x10111CC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x10112D0 Offset: 0x100D2D0 VA: 0x10112D0 Slot: 12
	public virtual void Invoke(object sender, DataColumnChangeEventArgs e) { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public sealed class DataColumnCollection : InternalDataCollectionBase // TypeDefIndex: 3944
{
	// Fields
	private readonly DataTable _table; // 0x10
	private readonly ArrayList _list; // 0x18
	private int _defaultNameIndex; // 0x20
	private DataColumn[] _delayedAddRangeColumns; // 0x28
	private readonly Dictionary<string, DataColumn> _columnFromName; // 0x30
	private bool _fInClear; // 0x38
	private DataColumn[] _columnsImplementingIChangeTracking; // 0x40
	private int _nColumnsImplementingIChangeTracking; // 0x48
	private int _nColumnsImplementingIRevertibleChangeTracking; // 0x4C
	[CompilerGenerated]
	private CollectionChangeEventHandler CollectionChanged; // 0x50
	[CompilerGenerated]
	private CollectionChangeEventHandler CollectionChanging; // 0x58
	[CompilerGenerated]
	private CollectionChangeEventHandler ColumnPropertyChanged; // 0x60

	// Properties
	protected override ArrayList List { get; }
	public DataColumn Item { get; }
	public DataColumn Item { get; }
	internal DataColumn Item { get; }

	// Methods

	// RVA: 0x10112E4 Offset: 0x100D2E4 VA: 0x10112E4
	internal void .ctor(DataTable table) { }

	// RVA: 0x10113F8 Offset: 0x100D3F8 VA: 0x10113F8 Slot: 12
	protected override ArrayList get_List() { }

	// RVA: 0x1011400 Offset: 0x100D400 VA: 0x1011400
	public DataColumn get_Item(int index) { }

	// RVA: 0x1011530 Offset: 0x100D530 VA: 0x1011530
	public DataColumn get_Item(string name) { }

	// RVA: 0x10117C8 Offset: 0x100D7C8 VA: 0x10117C8
	internal DataColumn get_Item(string name, string ns) { }

	// RVA: 0x101186C Offset: 0x100D86C VA: 0x101186C
	public void Add(DataColumn column) { }

	// RVA: 0x1011878 Offset: 0x100D878 VA: 0x1011878
	internal void AddAt(int index, DataColumn column) { }

	[CompilerGenerated]
	// RVA: 0x1011EEC Offset: 0x100DEEC VA: 0x1011EEC
	public void add_CollectionChanged(CollectionChangeEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x1011F88 Offset: 0x100DF88 VA: 0x1011F88
	public void remove_CollectionChanged(CollectionChangeEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x1012024 Offset: 0x100E024 VA: 0x1012024
	internal void add_ColumnPropertyChanged(CollectionChangeEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x10120C0 Offset: 0x100E0C0 VA: 0x10120C0
	internal void remove_ColumnPropertyChanged(CollectionChangeEventHandler value) { }

	// RVA: 0x1011DFC Offset: 0x100DDFC VA: 0x1011DFC
	private void ArrayAdd(DataColumn column) { }

	// RVA: 0x1011DBC Offset: 0x100DDBC VA: 0x1011DBC
	private void ArrayAdd(int index, DataColumn column) { }

	// RVA: 0x10121A4 Offset: 0x100E1A4 VA: 0x10121A4
	private void ArrayRemove(DataColumn column) { }

	// RVA: 0x10123D8 Offset: 0x100E3D8 VA: 0x10123D8
	internal string AssignName() { }

	// RVA: 0x1011AE4 Offset: 0x100DAE4 VA: 0x1011AE4
	private void BaseAdd(DataColumn column) { }

	// RVA: 0x10127A8 Offset: 0x100E7A8 VA: 0x10127A8
	private void BaseGroupSwitch(DataColumn[] oldArray, int oldLength, DataColumn[] newArray, int newLength) { }

	// RVA: 0x1012988 Offset: 0x100E988 VA: 0x1012988
	private void BaseRemove(DataColumn column) { }

	// RVA: 0x1012A44 Offset: 0x100EA44 VA: 0x1012A44
	internal bool CanRemove(DataColumn column, bool fThrowException) { }

	// RVA: 0x101215C Offset: 0x100E15C VA: 0x101215C
	private void CheckIChangeTracking(DataColumn column) { }

	// RVA: 0x1013168 Offset: 0x100F168 VA: 0x1013168
	public void Clear() { }

	// RVA: 0x101343C Offset: 0x100F43C VA: 0x101343C
	public bool Contains(string name) { }

	// RVA: 0x10134D0 Offset: 0x100F4D0 VA: 0x10134D0
	internal bool Contains(string name, bool caseSensitive) { }

	// RVA: 0x101356C Offset: 0x100F56C VA: 0x101356C
	public int IndexOf(string columnName) { }

	// RVA: 0x1011678 Offset: 0x100D678 VA: 0x1011678
	internal int IndexOfCaseInsensitive(string name) { }

	// RVA: 0x101246C Offset: 0x100E46C VA: 0x101246C
	private string MakeName(int index) { }

	// RVA: 0x1011E68 Offset: 0x100DE68 VA: 0x1011E68
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x1011ABC Offset: 0x100DABC VA: 0x1011ABC
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x101366C Offset: 0x100F66C VA: 0x101366C
	internal void OnColumnPropertyChanged(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x1012524 Offset: 0x100E524 VA: 0x1012524
	internal void RegisterColumnName(string name, DataColumn column) { }

	// RVA: 0x10136C4 Offset: 0x100F6C4 VA: 0x10136C4
	internal bool CanRegisterName(string name) { }

	// RVA: 0x1013728 Offset: 0x100F728 VA: 0x1013728
	public void Remove(DataColumn column) { }

	// RVA: 0x10126EC Offset: 0x100E6EC VA: 0x10126EC
	internal void UnregisterName(string name) { }

	// RVA: 0x101309C Offset: 0x100F09C VA: 0x101309C
	private void AddColumnsImplementingIChangeTrackingList(DataColumn dataColumn) { }

	// RVA: 0x10122D4 Offset: 0x100E2D4 VA: 0x10122D4
	private void RemoveColumnsImplementingIChangeTrackingList(DataColumn dataColumn) { }
}


// Namespace: System.Data
internal sealed class DataColumnPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3945
{
	// Fields
	[CompilerGenerated]
	private readonly DataColumn <Column>k__BackingField; // 0x88

	// Properties
	public override AttributeCollection Attributes { get; }
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }

	// Methods

	// RVA: 0x1013828 Offset: 0x100F828 VA: 0x1013828
	internal void .ctor(DataColumn dataColumn) { }

	// RVA: 0x1013860 Offset: 0x100F860 VA: 0x1013860 Slot: 6
	public override AttributeCollection get_Attributes() { }

	// RVA: 0x1013A1C Offset: 0x100FA1C VA: 0x1013A1C Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x1013A88 Offset: 0x100FA88 VA: 0x1013A88 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x1013AA4 Offset: 0x100FAA4 VA: 0x1013AA4 Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x1013AC0 Offset: 0x100FAC0 VA: 0x1013AC0 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1013B30 Offset: 0x100FB30 VA: 0x1013B30 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1013B50 Offset: 0x100FB50 VA: 0x1013B50 Slot: 17
	public override bool CanResetValue(object component) { }

	// RVA: 0x1013C68 Offset: 0x100FC68 VA: 0x1013C68 Slot: 18
	public override object GetValue(object component) { }

	// RVA: 0x1013CF4 Offset: 0x100FCF4 VA: 0x1013CF4 Slot: 20
	public override void ResetValue(object component) { }

	// RVA: 0x1013DBC Offset: 0x100FDBC VA: 0x1013DBC Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0x1013EA0 Offset: 0x100FEA0 VA: 0x1013EA0 Slot: 22
	public override bool ShouldSerializeValue(object component) { }
}


// Namespace: 
internal struct DataError.ColumnError // TypeDefIndex: 3946
{
	// Fields
	internal DataColumn _column; // 0x0
	internal string _error; // 0x8
}


// Namespace: System.Data
internal sealed class DataError // TypeDefIndex: 3947
{
	// Fields
	private string _rowError; // 0x10
	private int _count; // 0x18
	private DataError.ColumnError[] _errorList; // 0x20

	// Properties
	internal string Text { set; }
	internal bool HasErrors { get; }

	// Methods

	// RVA: 0x1013EA8 Offset: 0x100FEA8 VA: 0x1013EA8
	internal void .ctor() { }

	// RVA: 0x1013F00 Offset: 0x100FF00 VA: 0x1013F00
	internal void .ctor(string rowError) { }

	// RVA: 0x1013FF4 Offset: 0x100FFF4 VA: 0x1013FF4
	internal void set_Text(string value) { }

	// RVA: 0x101404C Offset: 0x101004C VA: 0x101404C
	internal bool get_HasErrors() { }

	// RVA: 0x1014080 Offset: 0x1010080 VA: 0x1014080
	internal void SetColumnError(DataColumn column, string error) { }

	// RVA: 0x101434C Offset: 0x101034C VA: 0x101434C
	internal string GetColumnError(DataColumn column) { }

	// RVA: 0x1014160 Offset: 0x1010160 VA: 0x1014160
	internal void Clear(DataColumn column) { }

	// RVA: 0x10143E8 Offset: 0x10103E8 VA: 0x10143E8
	internal void Clear() { }

	// RVA: 0x1014490 Offset: 0x1010490 VA: 0x1014490
	internal DataColumn[] GetColumnsInError() { }

	// RVA: 0x1013F9C Offset: 0x100FF9C VA: 0x1013F9C
	private void SetText(string errorText) { }

	// RVA: 0x101420C Offset: 0x101020C VA: 0x101420C
	internal int IndexOf(DataColumn column) { }
}


// Namespace: System.Data
internal struct DataKey // TypeDefIndex: 3948
{
	// Fields
	private readonly DataColumn[] _columns; // 0x0

	// Properties
	internal bool HasValue { get; }
	internal DataTable Table { get; }

	// Methods

	// RVA: 0x1014578 Offset: 0x1010578 VA: 0x1014578
	internal void .ctor(DataColumn[] columns, bool copyColumns) { }

	// RVA: 0x1014800 Offset: 0x1010800 VA: 0x1014800
	internal bool get_HasValue() { }

	// RVA: 0x1010B00 Offset: 0x100CB00 VA: 0x1010B00
	internal DataTable get_Table() { }

	// RVA: 0x1014768 Offset: 0x1010768 VA: 0x1014768
	internal void CheckState() { }

	// RVA: 0x1014810 Offset: 0x1010810 VA: 0x1014810
	internal bool ColumnsEqual(DataKey key) { }

	// RVA: 0x1014818 Offset: 0x1010818 VA: 0x1014818
	internal static bool ColumnsEqual(DataColumn[] column1, DataColumn[] column2) { }

	// RVA: 0x101300C Offset: 0x100F00C VA: 0x101300C
	internal bool ContainsColumn(DataColumn column) { }

	// RVA: 0x1014930 Offset: 0x1010930 VA: 0x1014930 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1014994 Offset: 0x1010994 VA: 0x1014994 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1014A0C Offset: 0x1010A0C VA: 0x1014A0C
	internal bool Equals(DataKey value) { }

	// RVA: 0x1014AC4 Offset: 0x1010AC4 VA: 0x1014AC4
	internal string[] GetColumnNames() { }

	// RVA: 0x1014B70 Offset: 0x1010B70 VA: 0x1014B70
	internal IndexField[] GetIndexDesc() { }

	// RVA: 0x1014C48 Offset: 0x1010C48 VA: 0x1014C48
	internal object[] GetKeyValues(int record) { }

	// RVA: 0x1014D40 Offset: 0x1010D40 VA: 0x1014D40
	internal Index GetSortIndex() { }

	// RVA: 0x1014D48 Offset: 0x1010D48 VA: 0x1014D48
	internal Index GetSortIndex(DataViewRowState recordStates) { }

	// RVA: 0x1014DA0 Offset: 0x1010DA0 VA: 0x1014DA0
	internal bool RecordsEqual(int record1, int record2) { }

	// RVA: 0x1014E24 Offset: 0x1010E24 VA: 0x1014E24
	internal DataColumn[] ToArray() { }
}


// Namespace: System.Data
[TypeConverter(typeof(RelationshipConverter))]
public class DataRelation // TypeDefIndex: 3949
{
	// Fields
	private DataSet _dataSet; // 0x10
	internal PropertyCollection _extendedProperties; // 0x18
	internal string _relationName; // 0x20
	private DataKey _childKey; // 0x28
	private DataKey _parentKey; // 0x30
	private UniqueConstraint _parentKeyConstraint; // 0x38
	private ForeignKeyConstraint _childKeyConstraint; // 0x40
	internal string[] _parentColumnNames; // 0x48
	internal string[] _childColumnNames; // 0x50
	internal string _parentTableName; // 0x58
	internal string _childTableName; // 0x60
	internal string _parentTableNamespace; // 0x68
	internal string _childTableNamespace; // 0x70
	internal bool _nested; // 0x78
	internal bool _createConstraints; // 0x79
	private bool _checkMultipleNested; // 0x7A
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0x7C
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanging; // 0x80

	// Properties
	public virtual DataColumn[] ChildColumns { get; }
	internal DataColumn[] ChildColumnsReference { get; }
	internal DataKey ChildKey { get; }
	public virtual DataTable ChildTable { get; }
	[DesignerSerializationVisibility(0)]
	[Browsable(False)]
	public virtual DataSet DataSet { get; }
	internal string[] ParentColumnNames { get; }
	internal string[] ChildColumnNames { get; }
	public virtual DataColumn[] ParentColumns { get; }
	internal DataColumn[] ParentColumnsReference { get; }
	internal DataKey ParentKey { get; }
	public virtual DataTable ParentTable { get; }
	[DefaultValue("")]
	public virtual string RelationName { get; }
	[DefaultValue(False)]
	public virtual bool Nested { get; set; }
	public virtual UniqueConstraint ParentKeyConstraint { get; }
	public virtual ForeignKeyConstraint ChildKeyConstraint { get; }
	[Browsable(False)]
	public PropertyCollection ExtendedProperties { get; }

	// Methods

	// RVA: 0x1014EFC Offset: 0x1010EFC VA: 0x1014EFC
	public void .ctor(string relationName, DataColumn parentColumn, DataColumn childColumn, bool createConstraints) { }

	// RVA: 0x1015424 Offset: 0x1011424 VA: 0x1015424
	public void .ctor(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns) { }

	// RVA: 0x101542C Offset: 0x101142C VA: 0x101542C
	public void .ctor(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints) { }

	[Browsable(False)]
	// RVA: 0x10154F4 Offset: 0x10114F4 VA: 0x10154F4
	public void .ctor(string relationName, string parentTableName, string childTableName, string[] parentColumnNames, string[] childColumnNames, bool nested) { }

	[Browsable(False)]
	// RVA: 0x10155CC Offset: 0x10115CC VA: 0x10155CC
	public void .ctor(string relationName, string parentTableName, string parentTableNamespace, string childTableName, string childTableNamespace, string[] parentColumnNames, string[] childColumnNames, bool nested) { }

	// RVA: 0x10156B8 Offset: 0x10116B8 VA: 0x10156B8 Slot: 4
	public virtual DataColumn[] get_ChildColumns() { }

	// RVA: 0x10157BC Offset: 0x10117BC VA: 0x10157BC
	internal DataColumn[] get_ChildColumnsReference() { }

	// RVA: 0x101306C Offset: 0x100F06C VA: 0x101306C
	internal DataKey get_ChildKey() { }

	// RVA: 0x10157D4 Offset: 0x10117D4 VA: 0x10157D4 Slot: 5
	public virtual DataTable get_ChildTable() { }

	// RVA: 0x10157EC Offset: 0x10117EC VA: 0x10157EC Slot: 6
	public virtual DataSet get_DataSet() { }

	// RVA: 0x1015804 Offset: 0x1011804 VA: 0x1015804
	internal string[] get_ParentColumnNames() { }

	// RVA: 0x101580C Offset: 0x101180C VA: 0x101580C
	internal string[] get_ChildColumnNames() { }

	// RVA: 0x1015814 Offset: 0x1011814 VA: 0x1015814
	private static bool IsKeyNull(object[] values) { }

	// RVA: 0x10158D8 Offset: 0x10118D8 VA: 0x10158D8
	internal static DataRow[] GetChildRows(DataKey parentKey, DataKey childKey, DataRow parentRow, DataRowVersion version) { }

	// RVA: 0x1015994 Offset: 0x1011994 VA: 0x1015994
	internal static DataRow[] GetParentRows(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version) { }

	// RVA: 0x1015A2C Offset: 0x1011A2C VA: 0x1015A2C
	internal static DataRow GetParentRow(DataKey parentKey, DataKey childKey, DataRow childRow, DataRowVersion version) { }

	// RVA: 0x1015C08 Offset: 0x1011C08 VA: 0x1015C08
	internal void SetDataSet(DataSet dataSet) { }

	// RVA: 0x1015C1C Offset: 0x1011C1C VA: 0x1015C1C Slot: 7
	public virtual DataColumn[] get_ParentColumns() { }

	// RVA: 0x1015C34 Offset: 0x1011C34 VA: 0x1015C34
	internal DataColumn[] get_ParentColumnsReference() { }

	// RVA: 0x1013084 Offset: 0x100F084 VA: 0x1013084
	internal DataKey get_ParentKey() { }

	// RVA: 0x1015C3C Offset: 0x1011C3C VA: 0x1015C3C Slot: 8
	public virtual DataTable get_ParentTable() { }

	// RVA: 0x1015C54 Offset: 0x1011C54 VA: 0x1015C54 Slot: 9
	public virtual string get_RelationName() { }

	// RVA: 0x1015C6C Offset: 0x1011C6C VA: 0x1015C6C
	internal void CheckNamespaceValidityForNestedRelations(string ns) { }

	// RVA: 0x1016010 Offset: 0x1012010 VA: 0x1016010
	internal void CheckNestedRelations() { }

	// RVA: 0x101632C Offset: 0x101232C VA: 0x101632C Slot: 10
	public virtual bool get_Nested() { }

	// RVA: 0x1016344 Offset: 0x1012344 VA: 0x1016344 Slot: 11
	public virtual void set_Nested(bool value) { }

	// RVA: 0x1017A2C Offset: 0x1013A2C VA: 0x1017A2C Slot: 12
	public virtual UniqueConstraint get_ParentKeyConstraint() { }

	// RVA: 0x1017A44 Offset: 0x1013A44 VA: 0x1017A44 Slot: 13
	public virtual ForeignKeyConstraint get_ChildKeyConstraint() { }

	// RVA: 0x1017A5C Offset: 0x1013A5C VA: 0x1017A5C
	public PropertyCollection get_ExtendedProperties() { }

	// RVA: 0x1017AC0 Offset: 0x1013AC0 VA: 0x1017AC0
	internal void CheckState() { }

	// RVA: 0x10156D0 Offset: 0x10116D0 VA: 0x10156D0
	protected void CheckStateForProperty() { }

	// RVA: 0x101511C Offset: 0x101111C VA: 0x101511C
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns, bool createConstraints) { }

	// RVA: 0x1017CE8 Offset: 0x1013CE8 VA: 0x1017CE8
	internal DataRelation Clone(DataSet destination) { }

	// RVA: 0x1018350 Offset: 0x1014350 VA: 0x1018350
	protected internal void OnPropertyChanging(PropertyChangedEventArgs pcevent) { }

	// RVA: 0x10178C0 Offset: 0x10138C0 VA: 0x10178C0
	protected internal void RaisePropertyChanging(string name) { }

	// RVA: 0x1018378 Offset: 0x1014378 VA: 0x1018378 Slot: 3
	public override string ToString() { }

	// RVA: 0x10173F0 Offset: 0x10133F0 VA: 0x10173F0
	internal void ValidateMultipleNestedRelations() { }

	// RVA: 0x1018384 Offset: 0x1014384 VA: 0x1018384
	private bool IsAutoGenerated(DataColumn col) { }
}


// Namespace: 
[DefaultMember("Item")]
internal sealed class DataRelationCollection.DataTableRelationCollection : DataRelationCollection // TypeDefIndex: 3950
{
	// Fields
	private readonly DataTable _table; // 0x38
	private readonly ArrayList _relations; // 0x40
	private readonly bool _fParentCollection; // 0x48
	[CompilerGenerated]
	private CollectionChangeEventHandler RelationPropertyChanged; // 0x50

	// Properties
	protected override ArrayList List { get; }
	public override DataRelation Item { get; }
	public override DataRelation Item { get; }

	// Methods

	// RVA: 0x10196F0 Offset: 0x10156F0 VA: 0x10196F0
	internal void .ctor(DataTable table, bool fParentCollection) { }

	// RVA: 0x1019794 Offset: 0x1015794 VA: 0x1019794 Slot: 12
	protected override ArrayList get_List() { }

	// RVA: 0x101979C Offset: 0x101579C VA: 0x101979C
	private void EnsureDataSet() { }

	// RVA: 0x10197E0 Offset: 0x10157E0 VA: 0x10197E0 Slot: 18
	protected override DataSet GetDataSet() { }

	// RVA: 0x1019804 Offset: 0x1015804 VA: 0x1019804 Slot: 13
	public override DataRelation get_Item(int index) { }

	// RVA: 0x1019904 Offset: 0x1015904 VA: 0x1019904 Slot: 14
	public override DataRelation get_Item(string name) { }

	[CompilerGenerated]
	// RVA: 0x10199E0 Offset: 0x10159E0 VA: 0x10199E0
	internal void add_RelationPropertyChanged(CollectionChangeEventHandler value) { }

	[CompilerGenerated]
	// RVA: 0x1019A7C Offset: 0x1015A7C VA: 0x1019A7C
	internal void remove_RelationPropertyChanged(CollectionChangeEventHandler value) { }

	// RVA: 0x1019B18 Offset: 0x1015B18 VA: 0x1019B18
	private void AddCache(DataRelation relation) { }

	// RVA: 0x1019B60 Offset: 0x1015B60 VA: 0x1019B60 Slot: 15
	protected override void AddCore(DataRelation relation) { }

	// RVA: 0x1019C20 Offset: 0x1015C20 VA: 0x1019C20
	private void RemoveCache(DataRelation relation) { }

	// RVA: 0x1019CF4 Offset: 0x1015CF4 VA: 0x1019CF4 Slot: 21
	protected override void RemoveCore(DataRelation relation) { }
}


// Namespace: 
[DefaultMember("Item")]
internal sealed class DataRelationCollection.DataSetRelationCollection : DataRelationCollection // TypeDefIndex: 3951
{
	// Fields
	private readonly DataSet _dataSet; // 0x38
	private readonly ArrayList _relations; // 0x40
	private DataRelation[] _delayLoadingRelations; // 0x48

	// Properties
	protected override ArrayList List { get; }
	public override DataRelation Item { get; }
	public override DataRelation Item { get; }

	// Methods

	// RVA: 0x1019DB4 Offset: 0x1015DB4 VA: 0x1019DB4
	internal void .ctor(DataSet dataSet) { }

	// RVA: 0x1019E44 Offset: 0x1015E44 VA: 0x1019E44 Slot: 12
	protected override ArrayList get_List() { }

	// RVA: 0x1019E4C Offset: 0x1015E4C VA: 0x1019E4C Slot: 16
	public override void Clear() { }

	// RVA: 0x1019E80 Offset: 0x1015E80 VA: 0x1019E80 Slot: 18
	protected override DataSet GetDataSet() { }

	// RVA: 0x1019E88 Offset: 0x1015E88 VA: 0x1019E88 Slot: 13
	public override DataRelation get_Item(int index) { }

	// RVA: 0x1019F88 Offset: 0x1015F88 VA: 0x1019F88 Slot: 14
	public override DataRelation get_Item(string name) { }

	// RVA: 0x101A064 Offset: 0x1016064 VA: 0x101A064 Slot: 15
	protected override void AddCore(DataRelation relation) { }

	// RVA: 0x101A598 Offset: 0x1016598 VA: 0x101A598 Slot: 21
	protected override void RemoveCore(DataRelation relation) { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public abstract class DataRelationCollection : InternalDataCollectionBase // TypeDefIndex: 3952
{
	// Fields
	private DataRelation _inTransition; // 0x10
	private int _defaultNameIndex; // 0x18
	private CollectionChangeEventHandler _onCollectionChangedDelegate; // 0x20
	private CollectionChangeEventHandler _onCollectionChangingDelegate; // 0x28
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0x30

	// Properties
	public abstract DataRelation Item { get; }
	public abstract DataRelation Item { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 13
	public abstract DataRelation get_Item(int index);

	// RVA: -1 Offset: -1 Slot: 14
	public abstract DataRelation get_Item(string name);

	// RVA: 0x101854C Offset: 0x101454C VA: 0x101854C
	public void Add(DataRelation relation) { }

	// RVA: 0x10187E0 Offset: 0x10147E0 VA: 0x10187E0 Slot: 15
	protected virtual void AddCore(DataRelation relation) { }

	// RVA: 0x1018A64 Offset: 0x1014A64 VA: 0x1018A64
	public void add_CollectionChanged(CollectionChangeEventHandler value) { }

	// RVA: 0x1018AE4 Offset: 0x1014AE4 VA: 0x1018AE4
	public void remove_CollectionChanged(CollectionChangeEventHandler value) { }

	// RVA: 0x1018B64 Offset: 0x1014B64 VA: 0x1018B64
	internal string AssignName() { }

	// RVA: 0x1018C40 Offset: 0x1014C40 VA: 0x1018C40 Slot: 16
	public virtual void Clear() { }

	// RVA: 0x1018E94 Offset: 0x1014E94 VA: 0x1018E94 Slot: 17
	public virtual bool Contains(string name) { }

	// RVA: 0x1018EAC Offset: 0x1014EAC VA: 0x1018EAC
	internal int InternalIndexOf(string name) { }

	// RVA: -1 Offset: -1 Slot: 18
	protected abstract DataSet GetDataSet();

	// RVA: 0x1018B88 Offset: 0x1014B88 VA: 0x1018B88
	private string MakeName(int index) { }

	// RVA: 0x1019024 Offset: 0x1015024 VA: 0x1019024 Slot: 19
	protected virtual void OnCollectionChanged(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x101904C Offset: 0x101504C VA: 0x101904C Slot: 20
	protected virtual void OnCollectionChanging(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x1019074 Offset: 0x1015074 VA: 0x1019074
	internal void RegisterName(string name) { }

	// RVA: 0x10191AC Offset: 0x10151AC VA: 0x10191AC
	public void Remove(DataRelation relation) { }

	// RVA: 0x1019364 Offset: 0x1015364 VA: 0x1019364
	public void RemoveAt(int index) { }

	// RVA: 0x10193D8 Offset: 0x10153D8 VA: 0x10193D8 Slot: 21
	protected virtual void RemoveCore(DataRelation relation) { }

	// RVA: 0x10195C0 Offset: 0x10155C0 VA: 0x10195C0
	internal void UnregisterName(string name) { }

	// RVA: 0x1019660 Offset: 0x1015660 VA: 0x1019660
	protected void .ctor() { }
}


// Namespace: System.Data
internal sealed class DataRelationPropertyDescriptor : PropertyDescriptor // TypeDefIndex: 3953
{
	// Fields
	[CompilerGenerated]
	private readonly DataRelation <Relation>k__BackingField; // 0x88

	// Properties
	public override Type ComponentType { get; }
	public override bool IsReadOnly { get; }
	public override Type PropertyType { get; }

	// Methods

	// RVA: 0x101A7C8 Offset: 0x10167C8 VA: 0x101A7C8
	internal void .ctor(DataRelation dataRelation) { }

	// RVA: 0x101A814 Offset: 0x1016814 VA: 0x101A814 Slot: 13
	public override Type get_ComponentType() { }

	// RVA: 0x101A880 Offset: 0x1016880 VA: 0x101A880 Slot: 15
	public override bool get_IsReadOnly() { }

	// RVA: 0x101A888 Offset: 0x1016888 VA: 0x101A888 Slot: 16
	public override Type get_PropertyType() { }

	// RVA: 0x101A8F4 Offset: 0x10168F4 VA: 0x101A8F4 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x101A964 Offset: 0x1016964 VA: 0x101A964 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x101A984 Offset: 0x1016984 VA: 0x101A984 Slot: 17
	public override bool CanResetValue(object component) { }

	// RVA: 0x101A98C Offset: 0x101698C VA: 0x101A98C Slot: 18
	public override object GetValue(object component) { }

	// RVA: 0x101AA18 Offset: 0x1016A18 VA: 0x101AA18 Slot: 20
	public override void ResetValue(object component) { }

	// RVA: 0x101AA1C Offset: 0x1016A1C VA: 0x101AA1C Slot: 21
	public override void SetValue(object component, object value) { }

	// RVA: 0x101AA20 Offset: 0x1016A20 VA: 0x101AA20 Slot: 22
	public override bool ShouldSerializeValue(object component) { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public class DataRow // TypeDefIndex: 3954
{
	// Fields
	private readonly DataTable _table; // 0x10
	private readonly DataColumnCollection _columns; // 0x18
	internal int _oldRecord; // 0x20
	internal int _newRecord; // 0x24
	internal int _tempRecord; // 0x28
	internal long _rowID; // 0x30
	internal DataRowAction _action; // 0x38
	internal bool _inChangingEvent; // 0x3C
	internal bool _inDeletingEvent; // 0x3D
	internal bool _inCascade; // 0x3E
	private DataColumn _lastChangedColumn; // 0x40
	private int _countColumnChange; // 0x48
	private DataError _error; // 0x50
	private int _rbTreeNodeId; // 0x58
	private static int s_objectTypeCount; // 0x0
	internal readonly int _objectID; // 0x5C

	// Properties
	internal DataColumn LastChangedColumn { get; set; }
	internal bool HasPropertyChanged { get; }
	public string RowError { get; set; }
	internal long rowID { set; }
	public DataRowState RowState { get; }
	public DataTable Table { get; }
	public string Item { set; }
	public object Item { get; set; }
	public object Item { get; }
	public object[] ItemArray { set; }
	public bool HasErrors { get; }

	// Methods

	// RVA: 0x101AA28 Offset: 0x1016A28 VA: 0x101AA28
	protected internal void .ctor(DataRowBuilder builder) { }

	// RVA: 0x101AAC8 Offset: 0x1016AC8 VA: 0x101AAC8
	internal DataColumn get_LastChangedColumn() { }

	// RVA: 0x101AAE4 Offset: 0x1016AE4 VA: 0x101AAE4
	internal void set_LastChangedColumn(DataColumn value) { }

	// RVA: 0x101AAF8 Offset: 0x1016AF8 VA: 0x101AAF8
	internal bool get_HasPropertyChanged() { }

	// RVA: 0x101AB08 Offset: 0x1016B08 VA: 0x101AB08
	public string get_RowError() { }

	// RVA: 0x101AB64 Offset: 0x1016B64 VA: 0x101AB64
	public void set_RowError(string value) { }

	// RVA: 0x101AC54 Offset: 0x1016C54 VA: 0x101AC54
	private void RowErrorChanged() { }

	// RVA: 0x101ACA4 Offset: 0x1016CA4 VA: 0x101ACA4
	internal void set_rowID(long value) { }

	// RVA: 0x101ACC0 Offset: 0x1016CC0 VA: 0x101ACC0
	public DataRowState get_RowState() { }

	// RVA: 0x101AEE4 Offset: 0x1016EE4 VA: 0x101AEE4
	public DataTable get_Table() { }

	// RVA: 0x1017950 Offset: 0x1013950 VA: 0x1017950
	internal void CheckForLoops(DataRelation rel) { }

	// RVA: 0x101AEEC Offset: 0x1016EEC VA: 0x101AEEC
	internal int GetNestedParentCount() { }

	// RVA: 0x101AFB4 Offset: 0x1016FB4 VA: 0x101AFB4
	public void set_Item(string columnName, object value) { }

	// RVA: 0x101AEA8 Offset: 0x1016EA8 VA: 0x101AEA8
	public object get_Item(DataColumn column) { }

	// RVA: 0x101B048 Offset: 0x1017048 VA: 0x101B048
	public void set_Item(DataColumn column, object value) { }

	// RVA: 0x101B64C Offset: 0x101764C VA: 0x101B64C
	public object get_Item(DataColumn column, DataRowVersion version) { }

	// RVA: 0x101B6F0 Offset: 0x10176F0 VA: 0x101B6F0
	public void set_ItemArray(object[] value) { }

	// RVA: 0x101BAA0 Offset: 0x1017AA0 VA: 0x101BAA0
	public void AcceptChanges() { }

	// RVA: 0x101BE28 Offset: 0x1017E28 VA: 0x101BE28
	public void BeginEdit() { }

	// RVA: 0x101B418 Offset: 0x1017418 VA: 0x101B418
	private bool BeginEditInternal() { }

	// RVA: 0x101B514 Offset: 0x1017514 VA: 0x101B514
	public void CancelEdit() { }

	// RVA: 0x101B33C Offset: 0x101733C VA: 0x101B33C
	private void CheckColumn(DataColumn column) { }

	// RVA: 0x101BE2C Offset: 0x1017E2C VA: 0x101BE2C
	internal void CheckInTable() { }

	// RVA: 0x101BE68 Offset: 0x1017E68 VA: 0x101BE68
	public void Delete() { }

	// RVA: 0x101B570 Offset: 0x1017570 VA: 0x101B570
	public void EndEdit() { }

	// RVA: 0x101BEC8 Offset: 0x1017EC8 VA: 0x101BEC8
	public void SetColumnError(int columnIndex, string error) { }

	// RVA: 0x101BF2C Offset: 0x1017F2C VA: 0x101BF2C
	public void SetColumnError(DataColumn column, string error) { }

	// RVA: 0x101C138 Offset: 0x1018138 VA: 0x101C138
	public string GetColumnError(DataColumn column) { }

	// RVA: 0x101C1B4 Offset: 0x10181B4 VA: 0x101C1B4
	public void ClearErrors() { }

	// RVA: 0x1012FE4 Offset: 0x100EFE4 VA: 0x1012FE4
	internal void ClearError(DataColumn column) { }

	// RVA: 0x101C1DC Offset: 0x10181DC VA: 0x101C1DC
	public bool get_HasErrors() { }

	// RVA: 0x101C220 Offset: 0x1018220 VA: 0x101C220
	public DataColumn[] GetColumnsInError() { }

	// RVA: 0x101C290 Offset: 0x1018290 VA: 0x101C290
	public DataRow[] GetChildRows(DataRelation relation) { }

	// RVA: 0x101C298 Offset: 0x1018298 VA: 0x101C298
	public DataRow[] GetChildRows(DataRelation relation, DataRowVersion version) { }

	// RVA: 0x101AFE0 Offset: 0x1016FE0 VA: 0x101AFE0
	internal DataColumn GetDataColumn(string columnName) { }

	// RVA: 0x1017A24 Offset: 0x1013A24 VA: 0x1017A24
	public DataRow GetParentRow(DataRelation relation) { }

	// RVA: 0x101C3B0 Offset: 0x10183B0 VA: 0x101C3B0
	public DataRow GetParentRow(DataRelation relation, DataRowVersion version) { }

	// RVA: 0x101C4B8 Offset: 0x10184B8 VA: 0x101C4B8
	internal DataRow GetNestedParentRow(DataRowVersion version) { }

	// RVA: 0x101C574 Offset: 0x1018574 VA: 0x101C574
	public DataRow[] GetParentRows(DataRelation relation) { }

	// RVA: 0x101C57C Offset: 0x101857C VA: 0x101C57C
	public DataRow[] GetParentRows(DataRelation relation, DataRowVersion version) { }

	// RVA: 0x101C694 Offset: 0x1018694 VA: 0x101C694
	internal object[] GetColumnValues(DataColumn[] columns) { }

	// RVA: 0x101C69C Offset: 0x101869C VA: 0x101C69C
	internal object[] GetColumnValues(DataColumn[] columns, DataRowVersion version) { }

	// RVA: 0x101C6EC Offset: 0x10186EC VA: 0x101C6EC
	internal object[] GetKeyValues(DataKey key) { }

	// RVA: 0x1015970 Offset: 0x1011970 VA: 0x1015970
	internal object[] GetKeyValues(DataKey key, DataRowVersion version) { }

	// RVA: 0x101C70C Offset: 0x101870C VA: 0x101C70C
	internal int GetCurrentRecordNo() { }

	// RVA: 0x101B3B4 Offset: 0x10173B4 VA: 0x101B3B4
	internal int GetDefaultRecord() { }

	// RVA: 0x101C748 Offset: 0x1018748 VA: 0x101C748
	internal int GetOriginalRecordNo() { }

	// RVA: 0x101B4D8 Offset: 0x10174D8 VA: 0x101B4D8
	private int GetProposedRecordNo() { }

	// RVA: 0x101B690 Offset: 0x1017690 VA: 0x101B690
	internal int GetRecordFromVersion(DataRowVersion version) { }

	// RVA: 0x101C784 Offset: 0x1018784 VA: 0x101C784
	internal DataRowVersion GetDefaultRowVersion(DataViewRowState viewState) { }

	// RVA: 0x101C7C0 Offset: 0x10187C0 VA: 0x101C7C0
	internal DataViewRowState GetRecordState(int record) { }

	// RVA: 0x101C818 Offset: 0x1018818 VA: 0x101C818
	internal bool HasKeyChanged(DataKey key) { }

	// RVA: 0x101C824 Offset: 0x1018824 VA: 0x101C824
	internal bool HasKeyChanged(DataKey key, DataRowVersion version1, DataRowVersion version2) { }

	// RVA: 0x1015B80 Offset: 0x1011B80 VA: 0x1015B80
	public bool HasVersion(DataRowVersion version) { }

	// RVA: 0x101C8A8 Offset: 0x10188A8 VA: 0x101C8A8
	internal bool HaveValuesChanged(DataColumn[] columns) { }

	// RVA: 0x101C8B4 Offset: 0x10188B4 VA: 0x101C8B4
	internal bool HaveValuesChanged(DataColumn[] columns, DataRowVersion version1, DataRowVersion version2) { }

	// RVA: 0x101C954 Offset: 0x1018954 VA: 0x101C954
	public void RejectChanges() { }

	// RVA: 0x101ACB4 Offset: 0x1016CB4 VA: 0x101ACB4
	internal void ResetLastChangedColumn() { }

	// RVA: 0x101CF58 Offset: 0x1018F58 VA: 0x101CF58
	internal void SetKeyValues(DataKey key, object[] keyValues) { }

	// RVA: 0x101D070 Offset: 0x1019070 VA: 0x101D070
	internal void SetNestedParentRow(DataRow parentRow, bool setNonNested) { }

	// RVA: 0x101D460 Offset: 0x1019460 VA: 0x101D460
	internal void SetParentRowToDBNull() { }

	// RVA: 0x101D744 Offset: 0x1019744 VA: 0x101D744
	internal void SetParentRowToDBNull(DataRelation relation) { }

	// RVA: 0x101D8AC Offset: 0x10198AC VA: 0x101D8AC
	internal int CopyValuesIntoStore(ArrayList storeList, ArrayList nullbitList, int storeIndex) { }
}


// Namespace: System.Data
public sealed class DataRowBuilder // TypeDefIndex: 3955
{
	// Fields
	internal readonly DataTable _table; // 0x10
	internal int _record; // 0x18

	// Methods

	// RVA: 0x101DB98 Offset: 0x1019B98 VA: 0x101DB98
	internal void .ctor(DataTable table, int record) { }
}


// Namespace: System.Data
[Flags]
public enum DataRowAction // TypeDefIndex: 3956
{
	// Fields
	public int value__; // 0x0
	public const DataRowAction Nothing = 0;
	public const DataRowAction Delete = 1;
	public const DataRowAction Change = 2;
	public const DataRowAction Rollback = 4;
	public const DataRowAction Commit = 8;
	public const DataRowAction Add = 16;
	public const DataRowAction ChangeOriginal = 32;
	public const DataRowAction ChangeCurrentAndOriginal = 64;
}


// Namespace: System.Data
public class DataRowChangeEventArgs : EventArgs // TypeDefIndex: 3957
{
	// Fields
	[CompilerGenerated]
	private readonly DataRow <Row>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly DataRowAction <Action>k__BackingField; // 0x18

	// Methods

	// RVA: 0x101DBC8 Offset: 0x1019BC8 VA: 0x101DBC8
	public void .ctor(DataRow row, DataRowAction action) { }
}


// Namespace: System.Data
public sealed class DataRowChangeEventHandler : MulticastDelegate // TypeDefIndex: 3958
{
	// Methods

	// RVA: 0x101DC3C Offset: 0x1019C3C VA: 0x101DC3C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x101DD40 Offset: 0x1019D40 VA: 0x101DD40 Slot: 12
	public virtual void Invoke(object sender, DataRowChangeEventArgs e) { }
}


// Namespace: 
private sealed class DataRowCollection.DataRowTree : RBTree<DataRow> // TypeDefIndex: 3959
{
	// Methods

	// RVA: 0x101DDE8 Offset: 0x1019DE8 VA: 0x101DDE8
	internal void .ctor() { }

	// RVA: 0x101E51C Offset: 0x101A51C VA: 0x101E51C Slot: 5
	protected override int CompareNode(DataRow record1, DataRow record2) { }

	// RVA: 0x101E548 Offset: 0x101A548 VA: 0x101E548 Slot: 6
	protected override int CompareSateliteTreeNode(DataRow record1, DataRow record2) { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public sealed class DataRowCollection : InternalDataCollectionBase // TypeDefIndex: 3960
{
	// Fields
	private readonly DataTable _table; // 0x10
	private readonly DataRowCollection.DataRowTree _list; // 0x18
	internal int _nullInList; // 0x20

	// Properties
	public override int Count { get; }
	public DataRow Item { get; }

	// Methods

	// RVA: 0x101DD54 Offset: 0x1019D54 VA: 0x101DD54
	internal void .ctor(DataTable table) { }

	// RVA: 0x101DE34 Offset: 0x1019E34 VA: 0x101DE34 Slot: 9
	public override int get_Count() { }

	// RVA: 0x101DE84 Offset: 0x1019E84 VA: 0x101DE84
	public DataRow get_Item(int index) { }

	// RVA: 0x101DEF0 Offset: 0x1019EF0 VA: 0x101DEF0
	public void Add(DataRow row) { }

	// RVA: 0x101DF10 Offset: 0x1019F10 VA: 0x101DF10
	internal void DiffInsertAt(DataRow row, int pos) { }

	// RVA: 0x101E144 Offset: 0x101A144 VA: 0x101E144
	public int IndexOf(DataRow row) { }

	// RVA: 0x101E1E0 Offset: 0x101A1E0 VA: 0x101E1E0
	internal DataRow AddWithColumnEvents(object[] values) { }

	// RVA: 0x101E244 Offset: 0x101A244 VA: 0x101E244
	internal void ArrayAdd(DataRow row) { }

	// RVA: 0x101E2A8 Offset: 0x101A2A8 VA: 0x101E2A8
	internal void ArrayInsert(DataRow row, int pos) { }

	// RVA: 0x101E31C Offset: 0x101A31C VA: 0x101E31C
	internal void ArrayClear() { }

	// RVA: 0x101E36C Offset: 0x101A36C VA: 0x101E36C
	internal void ArrayRemove(DataRow row) { }

	// RVA: 0x101E3FC Offset: 0x101A3FC VA: 0x101E3FC Slot: 10
	public override void CopyTo(Array ar, int index) { }

	// RVA: 0x101E464 Offset: 0x101A464 VA: 0x101E464
	public void CopyTo(DataRow[] array, int index) { }

	// RVA: 0x101E4CC Offset: 0x101A4CC VA: 0x101E4CC Slot: 11
	public override IEnumerator GetEnumerator() { }
}


// Namespace: System.Data
internal sealed class DataRowCreatedEventHandler : MulticastDelegate // TypeDefIndex: 3961
{
	// Methods

	// RVA: 0x101E574 Offset: 0x101A574 VA: 0x101E574
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x101E678 Offset: 0x101A678 VA: 0x101E678 Slot: 12
	public virtual void Invoke(object sender, DataRow r) { }
}


// Namespace: System.Data
internal sealed class DataSetClearEventhandler : MulticastDelegate // TypeDefIndex: 3962
{
	// Methods

	// RVA: 0x101E68C Offset: 0x101A68C VA: 0x101E68C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x101E790 Offset: 0x101A790 VA: 0x101E790 Slot: 12
	public virtual void Invoke(object sender, DataTable table) { }
}


// Namespace: System.Data
[Flags]
public enum DataRowState // TypeDefIndex: 3963
{
	// Fields
	public int value__; // 0x0
	public const DataRowState Detached = 1;
	public const DataRowState Unchanged = 2;
	public const DataRowState Added = 4;
	public const DataRowState Deleted = 8;
	public const DataRowState Modified = 16;
}


// Namespace: System.Data
public enum DataRowVersion // TypeDefIndex: 3964
{
	// Fields
	public int value__; // 0x0
	public const DataRowVersion Original = 256;
	public const DataRowVersion Current = 512;
	public const DataRowVersion Proposed = 1024;
	public const DataRowVersion Default = 1536;
}


// Namespace: System.Data
[DefaultMember("Item")]
public class DataRowView : ICustomTypeDescriptor // TypeDefIndex: 3965
{
	// Fields
	private readonly DataView _dataView; // 0x10
	private readonly DataRow _row; // 0x18
	private bool _delayBeginEdit; // 0x20
	private static readonly PropertyDescriptorCollection s_zeroPropertyDescriptorCollection; // 0x0
	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanged; // 0x28

	// Properties
	private DataRowVersion RowVersionDefault { get; }
	public bool IsNew { get; }

	// Methods

	// RVA: 0x101E7A4 Offset: 0x101A7A4 VA: 0x101E7A4
	internal void .ctor(DataView dataView, DataRow row) { }

	// RVA: 0x101E7D0 Offset: 0x101A7D0 VA: 0x101E7D0 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x101E7DC Offset: 0x101A7DC VA: 0x101E7DC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x101E7FC Offset: 0x101A7FC VA: 0x101E7FC
	private DataRowVersion get_RowVersionDefault() { }

	// RVA: 0x101E824 Offset: 0x101A824 VA: 0x101E824
	internal int GetRecord() { }

	// RVA: 0x101E84C Offset: 0x101A84C VA: 0x101E84C
	internal bool HasRecord() { }

	// RVA: 0x101E874 Offset: 0x101A874 VA: 0x101E874
	internal object GetColumnValue(DataColumn column) { }

	// RVA: 0x101E8AC Offset: 0x101A8AC VA: 0x101E8AC
	internal void SetColumnValue(DataColumn column, object value) { }

	// RVA: 0x101E940 Offset: 0x101A940 VA: 0x101E940
	public DataView CreateChildView(DataRelation relation, bool followParent) { }

	// RVA: 0x101ED0C Offset: 0x101AD0C VA: 0x101ED0C
	public DataView CreateChildView(DataRelation relation) { }

	// RVA: 0x101ED14 Offset: 0x101AD14 VA: 0x101ED14 Slot: 9
	public void EndEdit() { }

	// RVA: 0x101ED60 Offset: 0x101AD60 VA: 0x101ED60
	public bool get_IsNew() { }

	// RVA: 0x101EEAC Offset: 0x101AEAC VA: 0x101EEAC
	internal void RaisePropertyChangedEvent(string propName) { }

	// RVA: 0x101EF3C Offset: 0x101AF3C VA: 0x101EF3C Slot: 4
	private AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes() { }

	// RVA: 0x101EF94 Offset: 0x101AF94 VA: 0x101EF94 Slot: 5
	private TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter() { }

	// RVA: 0x101EF9C Offset: 0x101AF9C VA: 0x101EF9C Slot: 6
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties() { }

	// RVA: 0x101F038 Offset: 0x101B038 VA: 0x101F038 Slot: 7
	private PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(Attribute[] attributes) { }

	// RVA: 0x101F0C0 Offset: 0x101B0C0 VA: 0x101F0C0 Slot: 8
	private object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd) { }

	// RVA: 0x101F0C4 Offset: 0x101B0C4 VA: 0x101F0C4
	private static void .cctor() { }
}


// Namespace: System.Data
public enum SerializationFormat // TypeDefIndex: 3966
{
	// Fields
	public int value__; // 0x0
	public const SerializationFormat Xml = 0;
	public const SerializationFormat Binary = 1;
}


// Namespace: System.Data
public enum DataSetDateTime // TypeDefIndex: 3967
{
	// Fields
	public int value__; // 0x0
	public const DataSetDateTime Local = 1;
	public const DataSetDateTime Unspecified = 2;
	public const DataSetDateTime UnspecifiedLocal = 3;
	public const DataSetDateTime Utc = 4;
}


// Namespace: System.Data
public sealed class DataTableClearEventArgs : EventArgs // TypeDefIndex: 3968
{
	// Fields
	[CompilerGenerated]
	private readonly DataTable <Table>k__BackingField; // 0x10

	// Methods

	// RVA: 0x101F138 Offset: 0x101B138 VA: 0x101F138
	public void .ctor(DataTable dataTable) { }
}


// Namespace: System.Data
public sealed class DataTableClearEventHandler : MulticastDelegate // TypeDefIndex: 3969
{
	// Methods

	// RVA: 0x101F1A4 Offset: 0x101B1A4 VA: 0x101F1A4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x101F2A8 Offset: 0x101B2A8 VA: 0x101F2A8 Slot: 12
	public virtual void Invoke(object sender, DataTableClearEventArgs e) { }
}


// Namespace: System.Data
[DefaultMember("Item")]
[ListBindable(False)]
public sealed class DataTableCollection : InternalDataCollectionBase // TypeDefIndex: 3970
{
	// Fields
	private readonly DataSet _dataSet; // 0x10
	private readonly ArrayList _list; // 0x18
	private int _defaultNameIndex; // 0x20
	private DataTable[] _delayedAddRangeTables; // 0x28
	private CollectionChangeEventHandler _onCollectionChangedDelegate; // 0x30
	private CollectionChangeEventHandler _onCollectionChangingDelegate; // 0x38
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0x40

	// Properties
	protected override ArrayList List { get; }
	public DataTable Item { get; }
	public DataTable Item { get; }
	public DataTable Item { get; }

	// Methods

	// RVA: 0x101F2BC Offset: 0x101B2BC VA: 0x101F2BC
	internal void .ctor(DataSet dataSet) { }

	// RVA: 0x101F418 Offset: 0x101B418 VA: 0x101F418 Slot: 12
	protected override ArrayList get_List() { }

	// RVA: 0x101F420 Offset: 0x101B420 VA: 0x101F420
	public DataTable get_Item(int index) { }

	// RVA: 0x101F550 Offset: 0x101B550 VA: 0x101F550
	public DataTable get_Item(string name) { }

	// RVA: 0x101F81C Offset: 0x101B81C VA: 0x101F81C
	public DataTable get_Item(string name, string tableNamespace) { }

	// RVA: 0x101FAB8 Offset: 0x101BAB8 VA: 0x101FAB8
	internal DataTable GetTable(string name, string ns) { }

	// RVA: 0x101FBD4 Offset: 0x101BBD4 VA: 0x101FBD4
	internal DataTable GetTableSmart(string name, string ns) { }

	// RVA: 0x101FD10 Offset: 0x101BD10 VA: 0x101FD10
	public void Add(DataTable table) { }

	// RVA: 0x102011C Offset: 0x101C11C VA: 0x102011C
	private void ArrayAdd(DataTable table) { }

	// RVA: 0x1020168 Offset: 0x101C168 VA: 0x1020168
	internal string AssignName() { }

	// RVA: 0x1020000 Offset: 0x101C000 VA: 0x1020000
	private void BaseAdd(DataTable table) { }

	// RVA: 0x1020474 Offset: 0x101C474 VA: 0x1020474
	private void BaseGroupSwitch(DataTable[] oldArray, int oldLength, DataTable[] newArray, int newLength) { }

	// RVA: 0x10205EC Offset: 0x101C5EC VA: 0x10205EC
	private void BaseRemove(DataTable table) { }

	// RVA: 0x1020664 Offset: 0x101C664 VA: 0x1020664
	internal bool CanRemove(DataTable table, bool fThrowException) { }

	// RVA: 0x1020B80 Offset: 0x101CB80 VA: 0x1020B80
	public void Clear() { }

	// RVA: 0x1020268 Offset: 0x101C268 VA: 0x1020268
	public bool Contains(string name) { }

	// RVA: 0x1020E70 Offset: 0x101CE70 VA: 0x1020E70
	internal bool Contains(string name, string tableNamespace, bool checkProperty, bool caseSensitive) { }

	// RVA: 0x1020FEC Offset: 0x101CFEC VA: 0x1020FEC
	internal bool Contains(string name, bool caseSensitive) { }

	// RVA: 0x1021114 Offset: 0x101D114 VA: 0x1021114
	public int IndexOf(DataTable table) { }

	// RVA: 0x10211F8 Offset: 0x101D1F8 VA: 0x10211F8
	public int IndexOf(string tableName) { }

	// RVA: 0x1021210 Offset: 0x101D210 VA: 0x1021210
	internal int IndexOf(string tableName, string tableNamespace, bool chekforNull) { }

	// RVA: 0x1021270 Offset: 0x101D270 VA: 0x1021270
	internal void ReplaceFromInference(List<DataTable> tableList) { }

	// RVA: 0x101F644 Offset: 0x101B644 VA: 0x101F644
	internal int InternalIndexOf(string tableName) { }

	// RVA: 0x101F924 Offset: 0x101B924 VA: 0x101F924
	internal int InternalIndexOf(string tableName, string tableNamespace) { }

	// RVA: 0x10201B0 Offset: 0x101C1B0 VA: 0x10201B0
	private string MakeName(int index) { }

	// RVA: 0x1020140 Offset: 0x101C140 VA: 0x1020140
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x101FFD8 Offset: 0x101BFD8 VA: 0x101FFD8
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent) { }

	// RVA: 0x1020280 Offset: 0x101C280 VA: 0x1020280
	internal void RegisterName(string name, string tbNamespace) { }

	// RVA: 0x10212C0 Offset: 0x101D2C0 VA: 0x10212C0
	public void Remove(DataTable table) { }

	// RVA: 0x1020B00 Offset: 0x101CB00 VA: 0x1020B00
	internal void UnregisterName(string name) { }
}


// Namespace: System.Data
public sealed class DataTableNewRowEventArgs : EventArgs // TypeDefIndex: 3971
{
	// Fields
	[CompilerGenerated]
	private readonly DataRow <Row>k__BackingField; // 0x10

	// Methods

	// RVA: 0x10214E8 Offset: 0x101D4E8 VA: 0x10214E8
	public void .ctor(DataRow dataRow) { }
}


// Namespace: System.Data
public sealed class DataTableNewRowEventHandler : MulticastDelegate // TypeDefIndex: 3972
{
	// Methods

	// RVA: 0x1021554 Offset: 0x101D554 VA: 0x1021554
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1021658 Offset: 0x101D658 VA: 0x1021658 Slot: 12
	public virtual void Invoke(object sender, DataTableNewRowEventArgs e) { }
}


// Namespace: 
private sealed class DataView.DataRowReferenceComparer : IEqualityComparer<DataRow> // TypeDefIndex: 3973
{
	// Fields
	internal static readonly DataView.DataRowReferenceComparer s_default; // 0x0

	// Methods

	// RVA: 0x1024078 Offset: 0x1020078 VA: 0x1024078
	private void .ctor() { }

	// RVA: 0x1024080 Offset: 0x1020080 VA: 0x1024080 Slot: 4
	public bool Equals(DataRow x, DataRow y) { }

	// RVA: 0x102408C Offset: 0x102008C VA: 0x102408C Slot: 5
	public int GetHashCode(DataRow obj) { }

	// RVA: 0x10240A4 Offset: 0x10200A4 VA: 0x10240A4
	private static void .cctor() { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public class DataView : MarshalByValueComponent, IBindingList, IList, ICollection, IEnumerable // TypeDefIndex: 3974
{
	// Fields
	private DataViewManager _dataViewManager; // 0x20
	private DataTable _table; // 0x28
	private bool _locked; // 0x30
	private Index _index; // 0x38
	private Dictionary<string, Index> _findIndexes; // 0x40
	private string _sort; // 0x48
	private Comparison<DataRow> _comparison; // 0x50
	private IFilter _rowFilter; // 0x58
	private DataViewRowState _recordStates; // 0x60
	private bool _shouldOpen; // 0x64
	private bool _open; // 0x65
	private bool _allowNew; // 0x66
	private bool _allowEdit; // 0x67
	private bool _allowDelete; // 0x68
	private bool _applyDefaultSort; // 0x69
	internal DataRow _addNewRow; // 0x70
	private ListChangedEventArgs _addNewMoved; // 0x78
	private ListChangedEventHandler _onListChanged; // 0x80
	internal static ListChangedEventArgs s_resetEventArgs; // 0x0
	private DataViewRowState _delayedRecordStates; // 0x88
	private bool _fEndInitInProgress; // 0x8C
	private Dictionary<DataRow, DataRowView> _rowViewCache; // 0x90
	private readonly Dictionary<DataRow, DataRowView> _rowViewBuffer; // 0x98
	private DataViewListener _dvListener; // 0xA0
	private static int s_objectTypeCount; // 0x8
	private readonly int _objectID; // 0xA8

	// Properties
	[Browsable(False)]
	public int Count { get; }
	private int CountFromIndex { get; }
	private bool System.Collections.ICollection.IsSynchronized { get; }
	[DefaultValue("")]
	public string Sort { get; }
	private object System.Collections.ICollection.SyncRoot { get; }
	private object System.Collections.IList.Item { get; set; }
	public DataRowView Item { get; }
	private bool System.Collections.IList.IsReadOnly { get; }
	private bool System.Collections.IList.IsFixedSize { get; }

	// Methods

	// RVA: 0x102166C Offset: 0x101D66C VA: 0x102166C
	internal void .ctor(DataTable table, bool locked) { }

	// RVA: 0x1021B80 Offset: 0x101DB80 VA: 0x1021B80 Slot: 22
	public int get_Count() { }

	// RVA: 0x1021BD0 Offset: 0x101DBD0 VA: 0x1021BD0
	private int get_CountFromIndex() { }

	// RVA: 0x1021BEC Offset: 0x101DBEC VA: 0x1021BEC Slot: 24
	private bool System.Collections.ICollection.get_IsSynchronized() { }

	// RVA: 0x1021BF4 Offset: 0x101DBF4 VA: 0x1021BF4
	public string get_Sort() { }

	// RVA: 0x1021C48 Offset: 0x101DC48 VA: 0x1021C48 Slot: 23
	private object System.Collections.ICollection.get_SyncRoot() { }

	// RVA: 0x1021C4C Offset: 0x101DC4C VA: 0x1021C4C Slot: 10
	private object System.Collections.IList.get_Item(int recordIndex) { }

	// RVA: 0x1021C84 Offset: 0x101DC84 VA: 0x1021C84 Slot: 11
	private void System.Collections.IList.set_Item(int recordIndex, object value) { }

	// RVA: 0x1021C68 Offset: 0x101DC68 VA: 0x1021C68
	public DataRowView get_Item(int recordIndex) { }

	// RVA: 0x1021DB4 Offset: 0x101DDB4 VA: 0x1021DB4 Slot: 26
	public virtual DataRowView AddNew() { }

	// RVA: 0x1022098 Offset: 0x101E098 VA: 0x1022098
	private void CheckOpen() { }

	// RVA: 0x10221A0 Offset: 0x101E1A0 VA: 0x10221A0
	protected void Close() { }

	// RVA: 0x10221F4 Offset: 0x101E1F4 VA: 0x10221F4 Slot: 21
	public void CopyTo(Array array, int index) { }

	// RVA: 0x1022370 Offset: 0x101E370 VA: 0x1022370
	private void CopyTo(DataRowView[] array, int index) { }

	// RVA: 0x1022514 Offset: 0x101E514 VA: 0x1022514
	public void Delete(int index) { }

	// RVA: 0x1022530 Offset: 0x101E530 VA: 0x1022530
	internal void Delete(DataRow row) { }

	// RVA: 0x1022708 Offset: 0x101E708 VA: 0x1022708 Slot: 8
	protected override void Dispose(bool disposing) { }

	// RVA: 0x101ED88 Offset: 0x101AD88 VA: 0x101ED88
	internal void FinishAddNew(bool success) { }

	// RVA: 0x102273C Offset: 0x101E73C VA: 0x102273C Slot: 25
	public IEnumerator GetEnumerator() { }

	// RVA: 0x10227B8 Offset: 0x101E7B8 VA: 0x10227B8 Slot: 15
	private bool System.Collections.IList.get_IsReadOnly() { }

	// RVA: 0x10227C0 Offset: 0x101E7C0 VA: 0x10227C0 Slot: 16
	private bool System.Collections.IList.get_IsFixedSize() { }

	// RVA: 0x10227C8 Offset: 0x101E7C8 VA: 0x10227C8 Slot: 12
	private int System.Collections.IList.Add(object value) { }

	// RVA: 0x102281C Offset: 0x101E81C VA: 0x102281C Slot: 14
	private void System.Collections.IList.Clear() { }

	// RVA: 0x1022844 Offset: 0x101E844 VA: 0x1022844 Slot: 13
	private bool System.Collections.IList.Contains(object value) { }

	// RVA: 0x10228D0 Offset: 0x101E8D0 VA: 0x10228D0 Slot: 17
	private int System.Collections.IList.IndexOf(object value) { }

	// RVA: 0x10220D0 Offset: 0x101E0D0 VA: 0x10220D0
	internal int IndexOf(DataRowView rowview) { }

	// RVA: 0x1022950 Offset: 0x101E950 VA: 0x1022950
	private int IndexOfDataRowView(DataRowView rowview) { }

	// RVA: 0x10229A8 Offset: 0x101E9A8 VA: 0x10229A8 Slot: 18
	private void System.Collections.IList.Insert(int index, object value) { }

	// RVA: 0x10229D0 Offset: 0x101E9D0 VA: 0x10229D0 Slot: 19
	private void System.Collections.IList.Remove(object value) { }

	// RVA: 0x1022AF0 Offset: 0x101EAF0 VA: 0x1022AF0 Slot: 20
	private void System.Collections.IList.RemoveAt(int index) { }

	// RVA: 0x1022B0C Offset: 0x101EB0C VA: 0x1022B0C Slot: 27
	internal virtual IFilter GetFilter() { }

	// RVA: 0x1022B14 Offset: 0x101EB14 VA: 0x1022B14
	private int GetRecord(int recordIndex) { }

	// RVA: 0x1021CAC Offset: 0x101DCAC VA: 0x1021CAC
	internal DataRow GetRow(int index) { }

	// RVA: 0x102233C Offset: 0x101E33C VA: 0x102233C
	private DataRowView GetRowView(int record) { }

	// RVA: 0x1021D48 Offset: 0x101DD48 VA: 0x1021D48
	private DataRowView GetRowView(DataRow dr) { }

	// RVA: 0x1022B9C Offset: 0x101EB9C VA: 0x1022B9C Slot: 28
	protected virtual void IndexListChanged(object sender, ListChangedEventArgs e) { }

	// RVA: 0x1022C2C Offset: 0x101EC2C VA: 0x1022C2C
	internal void IndexListChangedInternal(ListChangedEventArgs e) { }

	// RVA: 0x1022CDC Offset: 0x101ECDC VA: 0x1022CDC
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove) { }

	// RVA: 0x102315C Offset: 0x101F15C VA: 0x102315C Slot: 29
	protected virtual void OnListChanged(ListChangedEventArgs e) { }

	// RVA: 0x1023404 Offset: 0x101F404 VA: 0x1023404
	protected void Reset() { }

	// RVA: 0x1022F30 Offset: 0x101EF30 VA: 0x1022F30
	internal void ResetRowViewCache() { }

	// RVA: 0x101EAF4 Offset: 0x101AAF4 VA: 0x101EAF4
	internal void SetDataViewManager(DataViewManager dataViewManager) { }

	// RVA: 0x1023438 Offset: 0x101F438 VA: 0x1023438 Slot: 30
	internal virtual void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter) { }

	// RVA: 0x1023440 Offset: 0x101F440 VA: 0x1023440
	internal void SetIndex2(string newSort, DataViewRowState newRowStates, IFilter newRowFilter, bool fireEvent) { }

	// RVA: 0x10221D8 Offset: 0x101E1D8 VA: 0x10221D8
	protected void UpdateIndex() { }

	// RVA: 0x102387C Offset: 0x101F87C VA: 0x102387C Slot: 31
	protected virtual void UpdateIndex(bool force) { }

	// RVA: 0x102354C Offset: 0x101F54C VA: 0x102354C
	internal void UpdateIndex(bool force, bool fireEvent) { }

	// RVA: 0x1023A68 Offset: 0x101FA68 VA: 0x1023A68
	internal void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x1023C40 Offset: 0x101FC40 VA: 0x1023C40
	internal void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x1023E18 Offset: 0x101FE18 VA: 0x1023E18 Slot: 32
	protected virtual void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x1023FF0 Offset: 0x101FFF0 VA: 0x1023FF0
	internal void ColumnCollectionChangedInternal(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x1024000 Offset: 0x1020000 VA: 0x1024000
	private static void .cctor() { }
}


// Namespace: System.Data
internal sealed class DataViewListener // TypeDefIndex: 3975
{
	// Fields
	private readonly WeakReference _dvWeak; // 0x10
	private DataTable _table; // 0x18
	private Index _index; // 0x20
	internal readonly int _objectID; // 0x28

	// Methods

	// RVA: 0x1021928 Offset: 0x101D928 VA: 0x1021928
	internal void .ctor(DataView dv) { }

	// RVA: 0x1024100 Offset: 0x1020100 VA: 0x1024100
	private void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x10241CC Offset: 0x10201CC VA: 0x10241CC
	private void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x102427C Offset: 0x102027C VA: 0x102427C
	private void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e) { }

	// RVA: 0x1024348 Offset: 0x1020348 VA: 0x1024348
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove) { }

	// RVA: 0x1024414 Offset: 0x1020414 VA: 0x1024414
	internal void IndexListChanged(ListChangedEventArgs e) { }

	// RVA: 0x10219A4 Offset: 0x101D9A4 VA: 0x10219A4
	internal void RegisterMetaDataEvents(DataTable table) { }

	// RVA: 0x10221EC Offset: 0x101E1EC VA: 0x10221EC
	internal void UnregisterMetaDataEvents() { }

	// RVA: 0x1024690 Offset: 0x1020690 VA: 0x1024690
	private void UnregisterMetaDataEvents(bool updateListeners) { }

	// RVA: 0x1023988 Offset: 0x101F988 VA: 0x1023988
	internal void RegisterListChangedEvent(Index index) { }

	// RVA: 0x1023888 Offset: 0x101F888 VA: 0x1023888
	internal void UnregisterListChangedEvent() { }

	// RVA: 0x10241B0 Offset: 0x10201B0 VA: 0x10241B0
	private void CleanUp(bool updateListeners) { }

	// RVA: 0x10244C4 Offset: 0x10204C4 VA: 0x10244C4
	private void RegisterListener(DataTable table) { }
}


// Namespace: System.Data
public class DataViewManager : MarshalByValueComponent // TypeDefIndex: 3976
{
	// Fields
	private DataViewSettingCollection _dataViewSettingsCollection; // 0x20
	internal int _nViews; // 0x28
	private static NotSupportedException s_notSupported; // 0x0

	// Methods

	// RVA: 0x1024928 Offset: 0x1020928 VA: 0x1024928
	private static void .cctor() { }
}


// Namespace: System.Data
[Flags]
public enum DataViewRowState // TypeDefIndex: 3977
{
	// Fields
	public int value__; // 0x0
	public const DataViewRowState None = 0;
	public const DataViewRowState Unchanged = 2;
	public const DataViewRowState Added = 4;
	public const DataViewRowState Deleted = 8;
	public const DataViewRowState ModifiedCurrent = 16;
	public const DataViewRowState ModifiedOriginal = 32;
	public const DataViewRowState OriginalRows = 42;
	public const DataViewRowState CurrentRows = 22;
}


// Namespace: System.Data
[TypeConverter(typeof(ExpandableObjectConverter))]
public class DataViewSetting // TypeDefIndex: 3978
{
	// Fields
	private DataViewManager _dataViewManager; // 0x10
	private DataTable _table; // 0x18
	private string _sort; // 0x20
	private string _rowFilter; // 0x28
	private DataViewRowState _rowStateFilter; // 0x30
	private bool _applyDefaultSort; // 0x34

	// Methods

	// RVA: 0x1024998 Offset: 0x1020998 VA: 0x1024998
	internal void .ctor() { }

	// RVA: 0x10249F8 Offset: 0x10209F8 VA: 0x10249F8
	internal void SetDataViewManager(DataViewManager dataViewManager) { }

	// RVA: 0x1024A0C Offset: 0x1020A0C VA: 0x1024A0C
	internal void SetDataTable(DataTable table) { }
}


// Namespace: System.Data
[DefaultMember("Item")]
public class DataViewSettingCollection // TypeDefIndex: 3979
{
	// Fields
	private readonly DataViewManager _dataViewManager; // 0x10
	private readonly Hashtable _list; // 0x18

	// Properties
	public virtual DataViewSetting Item { get; set; }

	// Methods

	// RVA: 0x1024A20 Offset: 0x1020A20 VA: 0x1024A20 Slot: 4
	public virtual DataViewSetting get_Item(DataTable table) { }

	// RVA: 0x1024B18 Offset: 0x1020B18 VA: 0x1024B18 Slot: 5
	public virtual void set_Item(DataTable table, DataViewSetting value) { }

	// RVA: 0x1024B98 Offset: 0x1020B98 VA: 0x1024B98
	internal void Remove(DataTable table) { }
}


// Namespace: System.Data
internal sealed class DefaultValueTypeConverter : StringConverter // TypeDefIndex: 3980
{
	// Methods

	// RVA: 0x1024BBC Offset: 0x1020BBC VA: 0x1024BBC
	public void .ctor() { }

	// RVA: 0x1024BC4 Offset: 0x1020BC4 VA: 0x1024BC4 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }

	// RVA: 0x1024D70 Offset: 0x1020D70 VA: 0x1024D70 Slot: 6
	public override object ConvertFrom(ITypeDescriptorContext context, CultureInfo culture, object value) { }
}


// Namespace: System.Data
internal enum Aggregate // TypeDefIndex: 3981
{
	// Fields
	public int value__; // 0x0
	public const Aggregate None = -1;
	public const Aggregate Sum = 30;
	public const Aggregate Avg = 31;
	public const Aggregate Min = 32;
	public const Aggregate Max = 33;
	public const Aggregate Count = 34;
	public const Aggregate StDev = 35;
	public const Aggregate Var = 37;
}


// Namespace: System.Data
internal sealed class AggregateNode : ExpressionNode // TypeDefIndex: 3982
{
	// Fields
	private readonly AggregateType _type; // 0x18
	private readonly Aggregate _aggregate; // 0x1C
	private readonly bool _local; // 0x20
	private readonly string _relationName; // 0x28
	private readonly string _columnName; // 0x30
	private DataTable _childTable; // 0x38
	private DataColumn _column; // 0x40
	private DataRelation _relation; // 0x48

	// Methods

	// RVA: 0x1024F10 Offset: 0x1020F10 VA: 0x1024F10
	internal void .ctor(DataTable table, FunctionId aggregateType, string columnName) { }

	// RVA: 0x1024F1C Offset: 0x1020F1C VA: 0x1024F1C
	internal void .ctor(DataTable table, FunctionId aggregateType, string columnName, bool local, string relationName) { }

	// RVA: 0x1025020 Offset: 0x1021020 VA: 0x1025020 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x102524C Offset: 0x102124C VA: 0x102524C
	internal static void Bind(DataRelation relation, List<DataColumn> list) { }

	// RVA: 0x10253B8 Offset: 0x10213B8 VA: 0x10253B8 Slot: 6
	internal override object Eval() { }

	// RVA: 0x10253CC Offset: 0x10213CC VA: 0x10253CC Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x1025670 Offset: 0x1021670 VA: 0x1025670 Slot: 8
	internal override object Eval(int[] records) { }

	// RVA: 0x10256EC Offset: 0x10216EC VA: 0x10256EC Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x10256F4 Offset: 0x10216F4 VA: 0x10256F4 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x10256FC Offset: 0x10216FC VA: 0x10256FC Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x1025704 Offset: 0x1021704 VA: 0x1025704 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x1025714 Offset: 0x1021714 VA: 0x1025714 Slot: 14
	internal override bool DependsOn(DataColumn column) { }

	// RVA: 0x10257AC Offset: 0x10217AC VA: 0x10257AC Slot: 13
	internal override ExpressionNode Optimize() { }
}


// Namespace: 
private enum BinaryNode.DataTypePrecedence // TypeDefIndex: 3983
{
	// Fields
	public int value__; // 0x0
	public const BinaryNode.DataTypePrecedence SqlDateTime = 25;
	public const BinaryNode.DataTypePrecedence DateTimeOffset = 24;
	public const BinaryNode.DataTypePrecedence DateTime = 23;
	public const BinaryNode.DataTypePrecedence TimeSpan = 20;
	public const BinaryNode.DataTypePrecedence SqlDouble = 19;
	public const BinaryNode.DataTypePrecedence Double = 18;
	public const BinaryNode.DataTypePrecedence SqlSingle = 17;
	public const BinaryNode.DataTypePrecedence Single = 16;
	public const BinaryNode.DataTypePrecedence SqlDecimal = 15;
	public const BinaryNode.DataTypePrecedence Decimal = 14;
	public const BinaryNode.DataTypePrecedence SqlMoney = 13;
	public const BinaryNode.DataTypePrecedence UInt64 = 12;
	public const BinaryNode.DataTypePrecedence SqlInt64 = 11;
	public const BinaryNode.DataTypePrecedence Int64 = 10;
	public const BinaryNode.DataTypePrecedence UInt32 = 9;
	public const BinaryNode.DataTypePrecedence SqlInt32 = 8;
	public const BinaryNode.DataTypePrecedence Int32 = 7;
	public const BinaryNode.DataTypePrecedence UInt16 = 6;
	public const BinaryNode.DataTypePrecedence SqlInt16 = 5;
	public const BinaryNode.DataTypePrecedence Int16 = 4;
	public const BinaryNode.DataTypePrecedence Byte = 3;
	public const BinaryNode.DataTypePrecedence SqlByte = 2;
	public const BinaryNode.DataTypePrecedence SByte = 1;
	public const BinaryNode.DataTypePrecedence Error = 0;
	public const BinaryNode.DataTypePrecedence SqlBoolean = -1;
	public const BinaryNode.DataTypePrecedence Boolean = -2;
	public const BinaryNode.DataTypePrecedence SqlGuid = -3;
	public const BinaryNode.DataTypePrecedence SqlString = -4;
	public const BinaryNode.DataTypePrecedence String = -5;
	public const BinaryNode.DataTypePrecedence SqlXml = -6;
	public const BinaryNode.DataTypePrecedence SqlChars = -7;
	public const BinaryNode.DataTypePrecedence Char = -8;
	public const BinaryNode.DataTypePrecedence SqlBytes = -9;
	public const BinaryNode.DataTypePrecedence SqlBinary = -10;
}


// Namespace: System.Data
internal class BinaryNode : ExpressionNode // TypeDefIndex: 3984
{
	// Fields
	internal int _op; // 0x18
	internal ExpressionNode _left; // 0x20
	internal ExpressionNode _right; // 0x28

	// Methods

	// RVA: 0x10257B0 Offset: 0x10217B0 VA: 0x10257B0
	internal void .ctor(DataTable table, int op, ExpressionNode left, ExpressionNode right) { }

	// RVA: 0x10257F4 Offset: 0x10217F4 VA: 0x10257F4 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x1025848 Offset: 0x1021848 VA: 0x1025848 Slot: 6
	internal override object Eval() { }

	// RVA: 0x102585C Offset: 0x102185C VA: 0x102585C Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x102AFEC Offset: 0x1026FEC VA: 0x102AFEC Slot: 8
	internal override object Eval(int[] recordNos) { }

	// RVA: 0x102B008 Offset: 0x1027008 VA: 0x102B008 Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x102B050 Offset: 0x1027050 VA: 0x102B050 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x102B098 Offset: 0x1027098 VA: 0x102B098 Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x102B0E0 Offset: 0x10270E0 VA: 0x102B0E0 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x102B128 Offset: 0x1027128 VA: 0x102B128 Slot: 14
	internal override bool DependsOn(DataColumn column) { }

	// RVA: 0x102B18C Offset: 0x102718C VA: 0x102B18C Slot: 13
	internal override ExpressionNode Optimize() { }

	// RVA: 0x102B6A8 Offset: 0x10276A8 VA: 0x102B6A8
	internal void SetTypeMismatchError(int op, Type left, Type right) { }

	// RVA: 0x102B6DC Offset: 0x10276DC VA: 0x102B6DC
	private static object Eval(ExpressionNode expr, DataRow row, DataRowVersion version, int[] recordNos) { }

	// RVA: 0x102B70C Offset: 0x102770C VA: 0x102B70C
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op) { }

	// RVA: 0x102B714 Offset: 0x1027714 VA: 0x102B714
	internal int BinaryCompare(object vLeft, object vRight, StorageType resultType, int op, CompareInfo comparer) { }

	// RVA: 0x1025878 Offset: 0x1021878 VA: 0x1025878
	private object EvalBinaryOp(int op, ExpressionNode left, ExpressionNode right, DataRow row, DataRowVersion version, int[] recordNos) { }

	// RVA: 0x102D1CC Offset: 0x10291CC VA: 0x102D1CC
	private BinaryNode.DataTypePrecedence GetPrecedence(StorageType storageType) { }

	// RVA: 0x102D1F0 Offset: 0x10291F0 VA: 0x102D1F0
	private static StorageType GetPrecedenceType(BinaryNode.DataTypePrecedence code) { }

	// RVA: 0x102D214 Offset: 0x1029214 VA: 0x102D214
	private bool IsMixed(StorageType left, StorageType right) { }

	// RVA: 0x102D2F8 Offset: 0x10292F8 VA: 0x102D2F8
	private bool IsMixedSql(StorageType left, StorageType right) { }

	// RVA: 0x102CDA0 Offset: 0x1028DA0 VA: 0x102CDA0
	internal StorageType ResultType(StorageType left, StorageType right, bool lc, bool rc, int op) { }

	// RVA: 0x102C9B8 Offset: 0x10289B8 VA: 0x102C9B8
	internal StorageType ResultSqlType(StorageType left, StorageType right, bool lc, bool rc, int op) { }

	// RVA: 0x102D408 Offset: 0x1029408 VA: 0x102D408
	private int SqlResultType(int typeCode) { }
}


// Namespace: System.Data
internal sealed class LikeNode : BinaryNode // TypeDefIndex: 3985
{
	// Fields
	private int _kind; // 0x30
	private string _pattern; // 0x38

	// Methods

	// RVA: 0x102D468 Offset: 0x1029468 VA: 0x102D468
	internal void .ctor(DataTable table, int op, ExpressionNode left, ExpressionNode right) { }

	// RVA: 0x102D4AC Offset: 0x10294AC VA: 0x102D4AC Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x102DA00 Offset: 0x1029A00 VA: 0x102DA00
	internal string AnalyzePattern(string pat) { }
}


// Namespace: System.Data
internal sealed class ConstNode : ExpressionNode // TypeDefIndex: 3986
{
	// Fields
	internal readonly object _val; // 0x18

	// Methods

	// RVA: 0x102DCE4 Offset: 0x1029CE4 VA: 0x102DCE4
	internal void .ctor(DataTable table, ValueType type, object constant) { }

	// RVA: 0x102B3C4 Offset: 0x10273C4 VA: 0x102B3C4
	internal void .ctor(DataTable table, ValueType type, object constant, bool fParseQuotes) { }

	// RVA: 0x102E7AC Offset: 0x102A7AC VA: 0x102E7AC Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x102E7B4 Offset: 0x102A7B4 VA: 0x102E7B4 Slot: 6
	internal override object Eval() { }

	// RVA: 0x102E7BC Offset: 0x102A7BC VA: 0x102E7BC Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x102E7C4 Offset: 0x102A7C4 VA: 0x102E7C4 Slot: 8
	internal override object Eval(int[] recordNos) { }

	// RVA: 0x102E7CC Offset: 0x102A7CC VA: 0x102E7CC Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x102E7D4 Offset: 0x102A7D4 VA: 0x102E7D4 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x102E7DC Offset: 0x102A7DC VA: 0x102E7DC Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x102E7E4 Offset: 0x102A7E4 VA: 0x102E7E4 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x102E7EC Offset: 0x102A7EC VA: 0x102E7EC Slot: 13
	internal override ExpressionNode Optimize() { }

	// RVA: 0x102E31C Offset: 0x102A31C VA: 0x102E31C
	private object SmallestDecimal(object constant) { }

	// RVA: 0x102DCEC Offset: 0x1029CEC VA: 0x102DCEC
	private object SmallestNumeric(object constant) { }
}


// Namespace: System.Data
internal sealed class DataExpression : IFilter // TypeDefIndex: 3987
{
	// Fields
	internal string _originalExpression; // 0x10
	private bool _parsed; // 0x18
	private bool _bound; // 0x19
	private ExpressionNode _expr; // 0x20
	private DataTable _table; // 0x28
	private readonly StorageType _storageType; // 0x30
	private readonly Type _dataType; // 0x38
	private DataColumn[] _dependency; // 0x40

	// Properties
	internal string Expression { get; }
	internal bool HasValue { get; }

	// Methods

	// RVA: 0x1023430 Offset: 0x101F430 VA: 0x1023430
	internal void .ctor(DataTable table, string expression) { }

	// RVA: 0x102E7F0 Offset: 0x102A7F0 VA: 0x102E7F0
	internal void .ctor(DataTable table, string expression, Type type) { }

	// RVA: 0x102F874 Offset: 0x102B874 VA: 0x102F874
	internal string get_Expression() { }

	// RVA: 0x102F8C4 Offset: 0x102B8C4 VA: 0x102F8C4
	internal bool get_HasValue() { }

	// RVA: 0x102F78C Offset: 0x102B78C VA: 0x102F78C
	internal void Bind(DataTable table) { }

	// RVA: 0x1025790 Offset: 0x1021790 VA: 0x1025790
	internal bool DependsOn(DataColumn column) { }

	// RVA: 0x102F8D4 Offset: 0x102B8D4 VA: 0x102F8D4
	internal object Evaluate() { }

	// RVA: 0x102F8E0 Offset: 0x102B8E0 VA: 0x102F8E0
	internal object Evaluate(DataRow row, DataRowVersion version) { }

	// RVA: 0x102FAD8 Offset: 0x102BAD8 VA: 0x102FAD8 Slot: 4
	public bool Invoke(DataRow row, DataRowVersion version) { }

	// RVA: 0x102FBBC Offset: 0x102BBBC VA: 0x102FBBC
	internal bool IsTableAggregate() { }

	// RVA: 0x102FBD4 Offset: 0x102BBD4 VA: 0x102FBD4
	internal static bool IsUnknown(object value) { }

	// RVA: 0x102FC2C Offset: 0x102BC2C VA: 0x102FC2C
	internal bool HasLocalAggregate() { }

	// RVA: 0x102FC44 Offset: 0x102BC44 VA: 0x102FC44
	internal bool HasRemoteAggregate() { }

	// RVA: 0x102C730 Offset: 0x1028730 VA: 0x102C730
	internal static bool ToBoolean(object value) { }
}


// Namespace: System.Data
internal abstract class ExpressionNode // TypeDefIndex: 3988
{
	// Fields
	private DataTable _table; // 0x10

	// Properties
	internal IFormatProvider FormatProvider { get; }
	internal virtual bool IsSqlColumn { get; }

	// Methods

	// RVA: 0x1024FF8 Offset: 0x1020FF8 VA: 0x1024FF8
	protected void .ctor(DataTable table) { }

	// RVA: 0x102C6C4 Offset: 0x10286C4 VA: 0x102C6C4
	internal IFormatProvider get_FormatProvider() { }

	// RVA: 0x102FC5C Offset: 0x102BC5C VA: 0x102FC5C Slot: 4
	internal virtual bool get_IsSqlColumn() { }

	// RVA: -1 Offset: -1 Slot: 5
	internal abstract void Bind(DataTable table, List<DataColumn> list);

	// RVA: -1 Offset: -1 Slot: 6
	internal abstract object Eval();

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract object Eval(DataRow row, DataRowVersion version);

	// RVA: -1 Offset: -1 Slot: 8
	internal abstract object Eval(int[] recordNos);

	// RVA: -1 Offset: -1 Slot: 9
	internal abstract bool IsConstant();

	// RVA: -1 Offset: -1 Slot: 10
	internal abstract bool IsTableConstant();

	// RVA: -1 Offset: -1 Slot: 11
	internal abstract bool HasLocalAggregate();

	// RVA: -1 Offset: -1 Slot: 12
	internal abstract bool HasRemoteAggregate();

	// RVA: -1 Offset: -1 Slot: 13
	internal abstract ExpressionNode Optimize();

	// RVA: 0x102FC64 Offset: 0x102BC64 VA: 0x102FC64 Slot: 14
	internal virtual bool DependsOn(DataColumn column) { }

	// RVA: 0x102D3F8 Offset: 0x10293F8 VA: 0x102D3F8
	internal static bool IsInteger(StorageType type) { }

	// RVA: 0x102D1A0 Offset: 0x10291A0 VA: 0x102D1A0
	internal static bool IsIntegerSql(StorageType type) { }

	// RVA: 0x102D2A8 Offset: 0x10292A8 VA: 0x102D2A8
	internal static bool IsSigned(StorageType type) { }

	// RVA: 0x102D384 Offset: 0x1029384 VA: 0x102D384
	internal static bool IsSignedSql(StorageType type) { }

	// RVA: 0x102D2D8 Offset: 0x10292D8 VA: 0x102D2D8
	internal static bool IsUnsigned(StorageType type) { }

	// RVA: 0x102D3B0 Offset: 0x10293B0 VA: 0x102D3B0
	internal static bool IsUnsignedSql(StorageType type) { }

	// RVA: 0x102D3D8 Offset: 0x10293D8 VA: 0x102D3D8
	internal static bool IsNumeric(StorageType type) { }

	// RVA: 0x102D43C Offset: 0x102943C VA: 0x102D43C
	internal static bool IsNumericSql(StorageType type) { }

	// RVA: 0x102FC6C Offset: 0x102BC6C VA: 0x102FC6C
	internal static bool IsFloat(StorageType type) { }

	// RVA: 0x102FC7C Offset: 0x102BC7C VA: 0x102FC7C
	internal static bool IsFloatSql(StorageType type) { }
}


// Namespace: System.Data
internal enum ValueType // TypeDefIndex: 3989
{
	// Fields
	public int value__; // 0x0
	public const ValueType Unknown = -1;
	public const ValueType Null = 0;
	public const ValueType Bool = 1;
	public const ValueType Numeric = 2;
	public const ValueType Str = 3;
	public const ValueType Float = 4;
	public const ValueType Decimal = 5;
	public const ValueType Object = 6;
	public const ValueType Date = 7;
}


// Namespace: System.Data
internal enum Nodes // TypeDefIndex: 3990
{
	// Fields
	public int value__; // 0x0
	public const Nodes Noop = 0;
	public const Nodes Unop = 1;
	public const Nodes UnopSpec = 2;
	public const Nodes Binop = 3;
	public const Nodes BinopSpec = 4;
	public const Nodes Zop = 5;
	public const Nodes Call = 6;
	public const Nodes Const = 7;
	public const Nodes Name = 8;
	public const Nodes Paren = 9;
	public const Nodes Conv = 10;
}


// Namespace: 
private struct ExpressionParser.ReservedWords // TypeDefIndex: 3991
{
	// Fields
	internal readonly string _word; // 0x0
	internal readonly Tokens _token; // 0x8
	internal readonly int _op; // 0xC

	// Methods

	// RVA: 0x10311D8 Offset: 0x102D1D8 VA: 0x10311D8
	internal void .ctor(string word, Tokens token, int op) { }
}


// Namespace: System.Data
internal sealed class ExpressionParser // TypeDefIndex: 3992
{
	// Fields
	private static readonly ExpressionParser.ReservedWords[] s_reservedwords; // 0x0
	private char _escape; // 0x10
	private char _decimalSeparator; // 0x12
	private char _listSeparator; // 0x14
	private char _exponentL; // 0x16
	private char _exponentU; // 0x18
	internal char[] _text; // 0x20
	internal int _pos; // 0x28
	internal int _start; // 0x2C
	internal Tokens _token; // 0x30
	internal int _op; // 0x34
	internal OperatorInfo[] _ops; // 0x38
	internal int _topOperator; // 0x40
	internal int _topNode; // 0x44
	private readonly DataTable _table; // 0x48
	internal ExpressionNode[] _nodeStack; // 0x50
	internal int _prevOperand; // 0x58
	internal ExpressionNode _expression; // 0x60

	// Methods

	// RVA: 0x102E964 Offset: 0x102A964 VA: 0x102E964
	internal void .ctor(DataTable table) { }

	// RVA: 0x102EA08 Offset: 0x102AA08 VA: 0x102EA08
	internal void LoadExpression(string data) { }

	// RVA: 0x102FCA4 Offset: 0x102BCA4 VA: 0x102FCA4
	internal void StartScan() { }

	// RVA: 0x102EACC Offset: 0x102AACC VA: 0x102EACC
	internal ExpressionNode Parse() { }

	// RVA: 0x1030488 Offset: 0x102C488 VA: 0x1030488
	private ExpressionNode ParseAggregateArgument(FunctionId aggregate) { }

	// RVA: 0x103044C Offset: 0x102C44C VA: 0x103044C
	private ExpressionNode NodePop() { }

	// RVA: 0x1030408 Offset: 0x102C408 VA: 0x1030408
	private ExpressionNode NodePeek() { }

	// RVA: 0x1030370 Offset: 0x102C370 VA: 0x1030370
	private void NodePush(ExpressionNode node) { }

	// RVA: 0x10300D4 Offset: 0x102C0D4 VA: 0x10300D4
	private void BuildExpression(int pri) { }

	// RVA: 0x1030328 Offset: 0x102C328 VA: 0x1030328
	internal void CheckToken(Tokens token) { }

	// RVA: 0x102FD30 Offset: 0x102BD30 VA: 0x102FD30
	internal Tokens Scan() { }

	// RVA: 0x1030A24 Offset: 0x102CA24 VA: 0x1030A24
	private void ScanNumeric() { }

	// RVA: 0x1030D84 Offset: 0x102CD84 VA: 0x1030D84
	private void ScanName() { }

	// RVA: 0x1030914 Offset: 0x102C914 VA: 0x1030914
	private void ScanName(char chEnd, char esc, string charsToEscape) { }

	// RVA: 0x103079C Offset: 0x102C79C VA: 0x103079C
	private void ScanDate() { }

	// RVA: 0x1030B50 Offset: 0x102CB50 VA: 0x1030B50
	private void ScanBinaryConstant() { }

	// RVA: 0x1030B68 Offset: 0x102CB68 VA: 0x1030B68
	private void ScanReserved() { }

	// RVA: 0x1030840 Offset: 0x102C840 VA: 0x1030840
	private void ScanString(char escape) { }

	// RVA: 0x1030300 Offset: 0x102C300 VA: 0x1030300
	internal void ScanToken(Tokens token) { }

	// RVA: 0x1030744 Offset: 0x102C744 VA: 0x1030744
	private void ScanWhite() { }

	// RVA: 0x1030E18 Offset: 0x102CE18 VA: 0x1030E18
	private bool IsWhiteSpace(char ch) { }

	// RVA: 0x1030D48 Offset: 0x102CD48 VA: 0x1030D48
	private bool IsAlphaNumeric(char ch) { }

	// RVA: 0x1030B54 Offset: 0x102CB54 VA: 0x1030B54
	private bool IsDigit(char ch) { }

	// RVA: 0x1030DEC Offset: 0x102CDEC VA: 0x1030DEC
	private bool IsAlpha(char ch) { }

	// RVA: 0x1030E2C Offset: 0x102CE2C VA: 0x1030E2C
	private static void .cctor() { }
}


// Namespace: System.Data
internal enum Tokens // TypeDefIndex: 3993
{
	// Fields
	public int value__; // 0x0
	public const Tokens None = 0;
	public const Tokens Name = 1;
	public const Tokens Numeric = 2;
	public const Tokens Decimal = 3;
	public const Tokens Float = 4;
	public const Tokens BinaryConst = 5;
	public const Tokens StringConst = 6;
	public const Tokens Date = 7;
	public const Tokens ListSeparator = 8;
	public const Tokens LeftParen = 9;
	public const Tokens RightParen = 10;
	public const Tokens ZeroOp = 11;
	public const Tokens UnaryOp = 12;
	public const Tokens BinaryOp = 13;
	public const Tokens Child = 14;
	public const Tokens Parent = 15;
	public const Tokens Dot = 16;
	public const Tokens Unknown = 17;
	public const Tokens EOS = 18;
}


// Namespace: System.Data
internal sealed class OperatorInfo // TypeDefIndex: 3994
{
	// Fields
	internal Nodes _type; // 0x10
	internal int _op; // 0x14
	internal int _priority; // 0x18

	// Methods

	// RVA: 0x10311E4 Offset: 0x102D1E4 VA: 0x10311E4
	internal void .ctor(Nodes type, int op, int pri) { }
}


// Namespace: System.Data
[Serializable]
public class InvalidExpressionException : DataException // TypeDefIndex: 3995
{
	// Methods

	// RVA: 0x1031220 Offset: 0x102D220 VA: 0x1031220
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x1031228 Offset: 0x102D228 VA: 0x1031228
	public void .ctor() { }

	// RVA: 0x1031230 Offset: 0x102D230 VA: 0x1031230
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class EvaluateException : InvalidExpressionException // TypeDefIndex: 3996
{
	// Methods

	// RVA: 0x1031238 Offset: 0x102D238 VA: 0x1031238
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x1031240 Offset: 0x102D240 VA: 0x1031240
	public void .ctor() { }

	// RVA: 0x1031248 Offset: 0x102D248 VA: 0x1031248
	public void .ctor(string s) { }
}


// Namespace: System.Data
[Serializable]
public class SyntaxErrorException : InvalidExpressionException // TypeDefIndex: 3997
{
	// Methods

	// RVA: 0x1031250 Offset: 0x102D250 VA: 0x1031250
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x1031258 Offset: 0x102D258 VA: 0x1031258
	public void .ctor() { }

	// RVA: 0x1031260 Offset: 0x102D260 VA: 0x1031260
	public void .ctor(string s) { }
}


// Namespace: System.Data
internal sealed class ExprException // TypeDefIndex: 3998
{
	// Methods

	// RVA: 0x1031268 Offset: 0x102D268 VA: 0x1031268
	private static OverflowException _Overflow(string error) { }

	// RVA: 0x10312D0 Offset: 0x102D2D0 VA: 0x10312D0
	private static InvalidExpressionException _Expr(string error) { }

	// RVA: 0x1031338 Offset: 0x102D338 VA: 0x1031338
	private static SyntaxErrorException _Syntax(string error) { }

	// RVA: 0x10313A0 Offset: 0x102D3A0 VA: 0x10313A0
	private static EvaluateException _Eval(string error) { }

	// RVA: 0x1031408 Offset: 0x102D408 VA: 0x1031408
	private static EvaluateException _Eval(string error, Exception innerException) { }

	// RVA: 0x1031470 Offset: 0x102D470 VA: 0x1031470
	public static Exception InvokeArgument() { }

	// RVA: 0x10314B4 Offset: 0x102D4B4 VA: 0x10314B4
	public static Exception NYI(string moreinfo) { }

	// RVA: 0x1031504 Offset: 0x102D504 VA: 0x1031504
	public static Exception MissingOperand(OperatorInfo before) { }

	// RVA: 0x1031650 Offset: 0x102D650 VA: 0x1031650
	public static Exception MissingOperator(string token) { }

	// RVA: 0x10316A0 Offset: 0x102D6A0 VA: 0x10316A0
	public static Exception TypeMismatch(string expr) { }

	// RVA: 0x10316F0 Offset: 0x102D6F0 VA: 0x10316F0
	public static Exception FunctionArgumentOutOfRange(string arg, string func) { }

	// RVA: 0x1031758 Offset: 0x102D758 VA: 0x1031758
	public static Exception ExpressionTooComplex() { }

	// RVA: 0x1031798 Offset: 0x102D798 VA: 0x1031798
	public static Exception UnboundName(string name) { }

	// RVA: 0x10317E8 Offset: 0x102D7E8 VA: 0x10317E8
	public static Exception InvalidString(string str) { }

	// RVA: 0x1031838 Offset: 0x102D838 VA: 0x1031838
	public static Exception UndefinedFunction(string name) { }

	// RVA: 0x1031888 Offset: 0x102D888 VA: 0x1031888
	public static Exception SyntaxError() { }

	// RVA: 0x10318C8 Offset: 0x102D8C8 VA: 0x10318C8
	public static Exception FunctionArgumentCount(string name) { }

	// RVA: 0x1031918 Offset: 0x102D918 VA: 0x1031918
	public static Exception MissingRightParen() { }

	// RVA: 0x1031958 Offset: 0x102D958 VA: 0x1031958
	public static Exception UnknownToken(string token, int position) { }

	// RVA: 0x10319FC Offset: 0x102D9FC VA: 0x10319FC
	public static Exception UnknownToken(Tokens tokExpected, Tokens tokCurr, int position) { }

	// RVA: 0x1031B0C Offset: 0x102DB0C VA: 0x1031B0C
	public static Exception DatatypeConvertion(Type type1, Type type2) { }

	// RVA: 0x1031B98 Offset: 0x102DB98 VA: 0x1031B98
	public static Exception DatavalueConvertion(object value, Type type, Exception innerException) { }

	// RVA: 0x1031C24 Offset: 0x102DC24 VA: 0x1031C24
	public static Exception InvalidName(string name) { }

	// RVA: 0x1031C74 Offset: 0x102DC74 VA: 0x1031C74
	public static Exception InvalidDate(string date) { }

	// RVA: 0x1031CC4 Offset: 0x102DCC4 VA: 0x1031CC4
	public static Exception NonConstantArgument() { }

	// RVA: 0x1031D04 Offset: 0x102DD04 VA: 0x1031D04
	public static Exception InvalidPattern(string pat) { }

	// RVA: 0x1031D54 Offset: 0x102DD54 VA: 0x1031D54
	public static Exception InWithoutParentheses() { }

	// RVA: 0x1031D94 Offset: 0x102DD94 VA: 0x1031D94
	public static Exception InWithoutList() { }

	// RVA: 0x1031DD4 Offset: 0x102DDD4 VA: 0x1031DD4
	public static Exception InvalidIsSyntax() { }

	// RVA: 0x1031E14 Offset: 0x102DE14 VA: 0x1031E14
	public static Exception Overflow(Type type) { }

	// RVA: 0x1031E80 Offset: 0x102DE80 VA: 0x1031E80
	public static Exception ArgumentType(string function, int arg, Type type) { }

	// RVA: 0x1031F48 Offset: 0x102DF48 VA: 0x1031F48
	public static Exception ArgumentTypeInteger(string function, int arg) { }

	// RVA: 0x1031FEC Offset: 0x102DFEC VA: 0x1031FEC
	public static Exception TypeMismatchInBinop(int op, Type type1, Type type2) { }

	// RVA: 0x10320B8 Offset: 0x102E0B8 VA: 0x10320B8
	public static Exception AmbiguousBinop(int op, Type type1, Type type2) { }

	// RVA: 0x1032184 Offset: 0x102E184 VA: 0x1032184
	public static Exception UnsupportedOperator(int op) { }

	// RVA: 0x1032204 Offset: 0x102E204 VA: 0x1032204
	public static Exception InvalidNameBracketing(string name) { }

	// RVA: 0x1032254 Offset: 0x102E254 VA: 0x1032254
	public static Exception MissingOperandBefore(string op) { }

	// RVA: 0x10322A4 Offset: 0x102E2A4 VA: 0x10322A4
	public static Exception TooManyRightParentheses() { }

	// RVA: 0x10322E4 Offset: 0x102E2E4 VA: 0x10322E4
	public static Exception UnresolvedRelation(string name, string expr) { }

	// RVA: 0x1032344 Offset: 0x102E344 VA: 0x1032344
	internal static EvaluateException BindFailure(string relationName) { }

	// RVA: 0x1032394 Offset: 0x102E394 VA: 0x1032394
	public static Exception AggregateArgument() { }

	// RVA: 0x10323D4 Offset: 0x102E3D4 VA: 0x10323D4
	public static Exception AggregateUnbound(string expr) { }

	// RVA: 0x1032424 Offset: 0x102E424 VA: 0x1032424
	public static Exception EvalNoContext() { }

	// RVA: 0x1032464 Offset: 0x102E464 VA: 0x1032464
	public static Exception ExpressionUnbound(string expr) { }

	// RVA: 0x10324B4 Offset: 0x102E4B4 VA: 0x10324B4
	public static Exception ComputeNotAggregate(string expr) { }

	// RVA: 0x1032504 Offset: 0x102E504 VA: 0x1032504
	public static Exception FilterConvertion(string expr) { }

	// RVA: 0x1032554 Offset: 0x102E554 VA: 0x1032554
	public static Exception LookupArgument() { }

	// RVA: 0x1032594 Offset: 0x102E594 VA: 0x1032594
	public static Exception InvalidType(string typeName) { }

	// RVA: 0x10325E4 Offset: 0x102E5E4 VA: 0x10325E4
	public static Exception InvalidHoursArgument() { }

	// RVA: 0x1032624 Offset: 0x102E624 VA: 0x1032624
	public static Exception InvalidMinutesArgument() { }

	// RVA: 0x1032664 Offset: 0x102E664 VA: 0x1032664
	public static Exception InvalidTimeZoneRange() { }

	// RVA: 0x10326A4 Offset: 0x102E6A4 VA: 0x10326A4
	public static Exception MismatchKindandTimeSpan() { }

	// RVA: 0x10326E4 Offset: 0x102E6E4 VA: 0x10326E4
	public static Exception UnsupportedDataType(Type type) { }
}


// Namespace: System.Data
internal interface IFilter // TypeDefIndex: 3999
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool Invoke(DataRow row, DataRowVersion version);
}


// Namespace: System.Data
internal sealed class LookupNode : ExpressionNode // TypeDefIndex: 4000
{
	// Fields
	private readonly string _relationName; // 0x18
	private readonly string _columnName; // 0x20
	private DataColumn _column; // 0x28
	private DataRelation _relation; // 0x30

	// Methods

	// RVA: 0x1032758 Offset: 0x102E758 VA: 0x1032758
	internal void .ctor(DataTable table, string columnName, string relationName) { }

	// RVA: 0x1032784 Offset: 0x102E784 VA: 0x1032784 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x1032998 Offset: 0x102E998 VA: 0x1032998 Slot: 6
	internal override object Eval() { }

	// RVA: 0x10329BC Offset: 0x102E9BC VA: 0x10329BC Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x1032AC0 Offset: 0x102EAC0 VA: 0x1032AC0 Slot: 8
	internal override object Eval(int[] recordNos) { }

	// RVA: 0x1032AF0 Offset: 0x102EAF0 VA: 0x1032AF0 Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x1032AF8 Offset: 0x102EAF8 VA: 0x1032AF8 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x1032B00 Offset: 0x102EB00 VA: 0x1032B00 Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x1032B08 Offset: 0x102EB08 VA: 0x1032B08 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x1032B10 Offset: 0x102EB10 VA: 0x1032B10 Slot: 14
	internal override bool DependsOn(DataColumn column) { }

	// RVA: 0x1032B20 Offset: 0x102EB20 VA: 0x1032B20 Slot: 13
	internal override ExpressionNode Optimize() { }
}


// Namespace: System.Data
internal sealed class NameNode : ExpressionNode // TypeDefIndex: 4001
{
	// Fields
	internal string _name; // 0x18
	internal bool _found; // 0x20
	internal DataColumn _column; // 0x28

	// Properties
	internal override bool IsSqlColumn { get; }

	// Methods

	// RVA: 0x1032B24 Offset: 0x102EB24 VA: 0x1032B24
	internal void .ctor(DataTable table, char[] text, int start, int pos) { }

	// RVA: 0x1032D60 Offset: 0x102ED60 VA: 0x1032D60
	internal void .ctor(DataTable table, string name) { }

	// RVA: 0x1032D88 Offset: 0x102ED88 VA: 0x1032D88 Slot: 4
	internal override bool get_IsSqlColumn() { }

	// RVA: 0x1032DA4 Offset: 0x102EDA4 VA: 0x1032DA4 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x1032F80 Offset: 0x102EF80 VA: 0x1032F80 Slot: 6
	internal override object Eval() { }

	// RVA: 0x1032FA4 Offset: 0x102EFA4 VA: 0x1032FA4 Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x103303C Offset: 0x102F03C VA: 0x103303C Slot: 8
	internal override object Eval(int[] records) { }

	// RVA: 0x103306C Offset: 0x102F06C VA: 0x103306C Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x1033074 Offset: 0x102F074 VA: 0x1033074 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x10330BC Offset: 0x102F0BC VA: 0x10330BC Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x1033104 Offset: 0x102F104 VA: 0x1033104 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x103314C Offset: 0x102F14C VA: 0x103314C Slot: 14
	internal override bool DependsOn(DataColumn column) { }

	// RVA: 0x10331B8 Offset: 0x102F1B8 VA: 0x10331B8 Slot: 13
	internal override ExpressionNode Optimize() { }

	// RVA: 0x1032B6C Offset: 0x102EB6C VA: 0x1032B6C
	internal static string ParseName(char[] text, int start, int pos) { }
}


// Namespace: System.Data
internal sealed class Operators // TypeDefIndex: 4002
{
	// Fields
	private static readonly int[] s_priority; // 0x0
	private static readonly string[] s_looks; // 0x8

	// Methods

	// RVA: 0x10331BC Offset: 0x102F1BC VA: 0x10331BC
	internal static bool IsArithmetical(int op) { }

	// RVA: 0x10331E0 Offset: 0x102F1E0 VA: 0x10331E0
	internal static bool IsLogical(int op) { }

	// RVA: 0x103320C Offset: 0x102F20C VA: 0x103320C
	internal static bool IsRelational(int op) { }

	// RVA: 0x103321C Offset: 0x102F21C VA: 0x103321C
	internal static int Priority(int op) { }

	// RVA: 0x1031590 Offset: 0x102D590 VA: 0x1031590
	internal static string ToString(int op) { }

	// RVA: 0x10332C8 Offset: 0x102F2C8 VA: 0x10332C8
	private static void .cctor() { }
}


// Namespace: System.Data
internal sealed class UnaryNode : ExpressionNode // TypeDefIndex: 4003
{
	// Fields
	internal readonly int _op; // 0x18
	internal ExpressionNode _right; // 0x20

	// Methods

	// RVA: 0x10338F8 Offset: 0x102F8F8 VA: 0x10338F8
	internal void .ctor(DataTable table, int op, ExpressionNode right) { }

	// RVA: 0x1033928 Offset: 0x102F928 VA: 0x1033928 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x1033950 Offset: 0x102F950 VA: 0x1033950 Slot: 6
	internal override object Eval() { }

	// RVA: 0x1033964 Offset: 0x102F964 VA: 0x1033964 Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x10341A0 Offset: 0x10301A0 VA: 0x10341A0 Slot: 8
	internal override object Eval(int[] recordNos) { }

	// RVA: 0x10339A4 Offset: 0x102F9A4 VA: 0x10339A4
	private object EvalUnaryOp(int op, object vl) { }

	// RVA: 0x10341C0 Offset: 0x10301C0 VA: 0x10341C0 Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x10341E0 Offset: 0x10301E0 VA: 0x10341E0 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x1034200 Offset: 0x1030200 VA: 0x1034200 Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x1034220 Offset: 0x1030220 VA: 0x1034220 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x1034240 Offset: 0x1030240 VA: 0x1034240 Slot: 14
	internal override bool DependsOn(DataColumn column) { }

	// RVA: 0x1034264 Offset: 0x1030264 VA: 0x1034264 Slot: 13
	internal override ExpressionNode Optimize() { }
}


// Namespace: System.Data
internal sealed class ZeroOpNode : ExpressionNode // TypeDefIndex: 4004
{
	// Fields
	internal readonly int _op; // 0x18

	// Methods

	// RVA: 0x103431C Offset: 0x103031C VA: 0x103431C
	internal void .ctor(int op) { }

	// RVA: 0x1034348 Offset: 0x1030348 VA: 0x1034348 Slot: 5
	internal override void Bind(DataTable table, List<DataColumn> list) { }

	// RVA: 0x103434C Offset: 0x103034C VA: 0x103434C Slot: 6
	internal override object Eval() { }

	// RVA: 0x1034408 Offset: 0x1030408 VA: 0x1034408 Slot: 7
	internal override object Eval(DataRow row, DataRowVersion version) { }

	// RVA: 0x1034414 Offset: 0x1030414 VA: 0x1034414 Slot: 8
	internal override object Eval(int[] recordNos) { }

	// RVA: 0x1034420 Offset: 0x1030420 VA: 0x1034420 Slot: 9
	internal override bool IsConstant() { }

	// RVA: 0x1034428 Offset: 0x1030428 VA: 0x1034428 Slot: 10
	internal override bool IsTableConstant() { }

	// RVA: 0x1034430 Offset: 0x1030430 VA: 0x1034430 Slot: 11
	internal override bool HasLocalAggregate() { }

	// RVA: 0x1034438 Offset: 0x1030438 VA: 0x1034438 Slot: 12
	internal override bool HasRemoteAggregate() { }

	// RVA: 0x1034440 Offset: 0x1030440 VA: 0x1034440 Slot: 13
	internal override ExpressionNode Optimize() { }
}


// Namespace: System.Data
public class ForeignKeyConstraint : Constraint // TypeDefIndex: 4005
{
	// Fields
	internal Rule _deleteRule; // 0x38
	internal Rule _updateRule; // 0x3C
	internal AcceptRejectRule _acceptRejectRule; // 0x40
	private DataKey _childKey; // 0x48
	private DataKey _parentKey; // 0x50
	internal string _constraintName; // 0x58
	internal string[] _parentColumnNames; // 0x60
	internal string[] _childColumnNames; // 0x68
	internal string _parentTableName; // 0x70

	// Properties
	internal DataKey ChildKey { get; }
	[ReadOnly(True)]
	public virtual DataColumn[] Columns { get; }
	[ReadOnly(True)]
	public override DataTable Table { get; }
	internal string[] ParentColumnNames { get; }
	internal string[] ChildColumnNames { get; }
	[DefaultValue(0)]
	public virtual AcceptRejectRule AcceptRejectRule { get; set; }
	[DefaultValue(1)]
	public virtual Rule DeleteRule { get; set; }
	[ReadOnly(True)]
	public virtual DataColumn[] RelatedColumns { get; }
	internal DataColumn[] RelatedColumnsReference { get; }
	internal DataKey ParentKey { get; }
	[ReadOnly(True)]
	public virtual DataTable RelatedTable { get; }
	[DefaultValue(1)]
	public virtual Rule UpdateRule { get; set; }

	// Methods

	// RVA: 0x1034444 Offset: 0x1030444 VA: 0x1034444
	public void .ctor(DataColumn[] parentColumns, DataColumn[] childColumns) { }

	// RVA: 0x1034484 Offset: 0x1030484 VA: 0x1034484
	public void .ctor(string constraintName, DataColumn[] parentColumns, DataColumn[] childColumns) { }

	[Browsable(False)]
	// RVA: 0x1034638 Offset: 0x1030638 VA: 0x1034638
	public void .ctor(string constraintName, string parentTableName, string[] parentColumnNames, string[] childColumnNames, AcceptRejectRule acceptRejectRule, Rule deleteRule, Rule updateRule) { }

	// RVA: 0x10346A4 Offset: 0x10306A4 VA: 0x10346A4
	internal DataKey get_ChildKey() { }

	// RVA: 0x10346C0 Offset: 0x10306C0 VA: 0x10346C0 Slot: 16
	public virtual DataColumn[] get_Columns() { }

	// RVA: 0x10346E0 Offset: 0x10306E0 VA: 0x10346E0 Slot: 6
	public override DataTable get_Table() { }

	// RVA: 0x1034700 Offset: 0x1030700 VA: 0x1034700
	internal string[] get_ParentColumnNames() { }

	// RVA: 0x103470C Offset: 0x103070C VA: 0x103470C
	internal string[] get_ChildColumnNames() { }

	// RVA: 0x1034718 Offset: 0x1030718 VA: 0x1034718 Slot: 11
	internal override void CheckCanAddToCollection(ConstraintCollection constraints) { }

	// RVA: 0x103481C Offset: 0x103081C VA: 0x103481C Slot: 12
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException) { }

	// RVA: 0x1034824 Offset: 0x1030824 VA: 0x1034824
	internal bool IsKeyNull(object[] values) { }

	// RVA: 0x10348E8 Offset: 0x10308E8 VA: 0x10348E8 Slot: 15
	internal override bool IsConstraintViolated() { }

	// RVA: 0x1034D50 Offset: 0x1030D50 VA: 0x1034D50 Slot: 8
	internal override bool CanEnableConstraint() { }

	// RVA: 0x1034EBC Offset: 0x1030EBC VA: 0x1034EBC
	internal void CascadeCommit(DataRow row) { }

	// RVA: 0x103501C Offset: 0x103101C VA: 0x103501C
	internal void CascadeDelete(DataRow row) { }

	// RVA: 0x1035514 Offset: 0x1031514 VA: 0x1035514
	internal void CascadeRollback(DataRow row) { }

	// RVA: 0x10356F4 Offset: 0x10316F4 VA: 0x10356F4
	internal void CascadeUpdate(DataRow row) { }

	// RVA: 0x1035B4C Offset: 0x1031B4C VA: 0x1035B4C
	internal void CheckCanClearParentTable(DataTable table) { }

	// RVA: 0x1035C18 Offset: 0x1031C18 VA: 0x1035C18
	internal void CheckCanRemoveParentRow(DataRow row) { }

	// RVA: 0x1035CE0 Offset: 0x1031CE0 VA: 0x1035CE0
	internal void CheckCascade(DataRow row, DataRowAction action) { }

	// RVA: 0x1035DE0 Offset: 0x1031DE0 VA: 0x1035DE0 Slot: 13
	internal override void CheckConstraint(DataRow childRow, DataRowAction action) { }

	// RVA: 0x10360A8 Offset: 0x10320A8 VA: 0x10360A8
	private void NonVirtualCheckState() { }

	// RVA: 0x10362E4 Offset: 0x10322E4 VA: 0x10362E4 Slot: 14
	internal override void CheckState() { }

	// RVA: 0x10362E8 Offset: 0x10322E8 VA: 0x10362E8 Slot: 17
	public virtual AcceptRejectRule get_AcceptRejectRule() { }

	// RVA: 0x1036304 Offset: 0x1032304 VA: 0x1036304 Slot: 18
	public virtual void set_AcceptRejectRule(AcceptRejectRule value) { }

	// RVA: 0x1036358 Offset: 0x1032358 VA: 0x1036358 Slot: 7
	internal override bool ContainsColumn(DataColumn column) { }

	// RVA: 0x10363A0 Offset: 0x10323A0 VA: 0x10363A0 Slot: 9
	internal override Constraint Clone(DataSet destination) { }

	// RVA: 0x10363B0 Offset: 0x10323B0 VA: 0x10363B0 Slot: 10
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup) { }

	// RVA: 0x1036AF0 Offset: 0x1032AF0 VA: 0x1036AF0
	internal ForeignKeyConstraint Clone(DataTable destination) { }

	// RVA: 0x10344D0 Offset: 0x10304D0 VA: 0x10344D0
	private void Create(string relationName, DataColumn[] parentColumns, DataColumn[] childColumns) { }

	// RVA: 0x10370E0 Offset: 0x10330E0 VA: 0x10370E0 Slot: 19
	public virtual Rule get_DeleteRule() { }

	// RVA: 0x10370FC Offset: 0x10330FC VA: 0x10370FC Slot: 20
	public virtual void set_DeleteRule(Rule value) { }

	// RVA: 0x1037150 Offset: 0x1033150 VA: 0x1037150 Slot: 0
	public override bool Equals(object key) { }

	// RVA: 0x1037240 Offset: 0x1033240 VA: 0x1037240 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1037248 Offset: 0x1033248 VA: 0x1037248 Slot: 21
	public virtual DataColumn[] get_RelatedColumns() { }

	// RVA: 0x1036AD4 Offset: 0x1032AD4 VA: 0x1036AD4
	internal DataColumn[] get_RelatedColumnsReference() { }

	// RVA: 0x1035CC4 Offset: 0x1031CC4 VA: 0x1035CC4
	internal DataKey get_ParentKey() { }

	// RVA: 0x1037268 Offset: 0x1033268 VA: 0x1037268
	internal DataRelation FindParentRelation() { }

	// RVA: 0x1037330 Offset: 0x1033330 VA: 0x1037330 Slot: 22
	public virtual DataTable get_RelatedTable() { }

	// RVA: 0x1037350 Offset: 0x1033350 VA: 0x1037350 Slot: 23
	public virtual Rule get_UpdateRule() { }

	// RVA: 0x103736C Offset: 0x103336C VA: 0x103736C Slot: 24
	public virtual void set_UpdateRule(Rule value) { }
}


// Namespace: System.Data
public enum MappingType // TypeDefIndex: 4006
{
	// Fields
	public int value__; // 0x0
	public const MappingType Element = 1;
	public const MappingType Attribute = 2;
	public const MappingType SimpleContent = 3;
	public const MappingType Hidden = 4;
}


// Namespace: System.Data
public class MergeFailedEventArgs : EventArgs // TypeDefIndex: 4007
{
	// Fields
	[CompilerGenerated]
	private readonly DataTable <Table>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly string <Conflict>k__BackingField; // 0x18

	// Methods

	// RVA: 0x10373C0 Offset: 0x10333C0 VA: 0x10373C0
	public void .ctor(DataTable table, string conflict) { }
}


// Namespace: System.Data
public sealed class MergeFailedEventHandler : MulticastDelegate // TypeDefIndex: 4008
{
	// Methods

	// RVA: 0x1037430 Offset: 0x1033430 VA: 0x1037430
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1037534 Offset: 0x1033534 VA: 0x1037534 Slot: 12
	public virtual void Invoke(object sender, MergeFailedEventArgs e) { }
}


// Namespace: System.Data
internal sealed class Merger // TypeDefIndex: 4009
{
	// Fields
	private DataSet _dataSet; // 0x10
	private DataTable _dataTable; // 0x18
	private bool _preserveChanges; // 0x20
	private MissingSchemaAction _missingSchemaAction; // 0x24
	private bool _isStandAlonetable; // 0x28
	private bool _IgnoreNSforTableLookup; // 0x29

	// Methods

	// RVA: 0x1037548 Offset: 0x1033548 VA: 0x1037548
	internal void .ctor(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction) { }

	// RVA: 0x1037590 Offset: 0x1033590 VA: 0x1037590
	internal void .ctor(DataTable dataTable, bool preserveChanges, MissingSchemaAction missingSchemaAction) { }

	// RVA: 0x10375E0 Offset: 0x10335E0 VA: 0x10375E0
	internal void MergeDataSet(DataSet source) { }

	// RVA: 0x103915C Offset: 0x103515C VA: 0x103915C
	internal void MergeTable(DataTable src) { }

	// RVA: 0x1039388 Offset: 0x1035388 VA: 0x1039388
	private void MergeTable(DataTable src, DataTable dst) { }

	// RVA: 0x1039978 Offset: 0x1035978 VA: 0x1039978
	private DataTable MergeSchema(DataTable table) { }

	// RVA: 0x1038680 Offset: 0x1034680 VA: 0x1038680
	private void MergeTableData(DataTable src) { }

	// RVA: 0x1038708 Offset: 0x1034708 VA: 0x1038708
	private void MergeConstraints(DataSet source) { }

	// RVA: 0x103A084 Offset: 0x1036084 VA: 0x103A084
	private void MergeConstraints(DataTable table) { }

	// RVA: 0x1038778 Offset: 0x1034778 VA: 0x1038778
	private void MergeRelation(DataRelation relation) { }

	// RVA: 0x1038F08 Offset: 0x1034F08 VA: 0x1038F08
	private void MergeExtendedProperties(PropertyCollection src, PropertyCollection dst) { }

	// RVA: 0x1039830 Offset: 0x1035830 VA: 0x1039830
	private DataKey GetSrcKey(DataTable src, DataTable dst) { }
}


// Namespace: System.Data
public enum MissingSchemaAction // TypeDefIndex: 4010
{
	// Fields
	public int value__; // 0x0
	public const MissingSchemaAction Add = 1;
	public const MissingSchemaAction Ignore = 2;
	public const MissingSchemaAction Error = 3;
	public const MissingSchemaAction AddWithKey = 4;
}


// Namespace: System.Data
internal sealed class PrimaryKeyTypeConverter : ReferenceConverter // TypeDefIndex: 4011
{
	// Methods

	// RVA: 0x103A320 Offset: 0x1036320 VA: 0x103A320
	public void .ctor() { }

	// RVA: 0x103A3D4 Offset: 0x10363D4 VA: 0x103A3D4 Slot: 11
	public override bool GetPropertiesSupported(ITypeDescriptorContext context) { }

	// RVA: 0x103A3DC Offset: 0x10363DC VA: 0x103A3DC Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x103A4A4 Offset: 0x10364A4 VA: 0x103A4A4 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }
}


// Namespace: System.Data
[Serializable]
public class PropertyCollection : Hashtable, ICloneable // TypeDefIndex: 4012
{
	// Methods

	// RVA: 0x103A630 Offset: 0x1036630 VA: 0x103A630
	public void .ctor() { }

	// RVA: 0x103A638 Offset: 0x1036638 VA: 0x103A638
	protected void .ctor(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x103A640 Offset: 0x1036640 VA: 0x103A640 Slot: 24
	public override object Clone() { }
}


// Namespace: System.Data
internal struct Range // TypeDefIndex: 4013
{
	// Fields
	private int _min; // 0x0
	private int _max; // 0x4
	private bool _isNotNull; // 0x8

	// Properties
	public int Count { get; }
	public bool IsNull { get; }
	public int Min { get; }

	// Methods

	// RVA: 0x103A93C Offset: 0x103693C VA: 0x103A93C
	public void .ctor(int min, int max) { }

	// RVA: 0x10354B0 Offset: 0x10314B0 VA: 0x10354B0
	public int get_Count() { }

	// RVA: 0x103500C Offset: 0x103100C VA: 0x103500C
	public bool get_IsNull() { }

	// RVA: 0x10354D0 Offset: 0x10314D0 VA: 0x10354D0
	public int get_Min() { }

	// RVA: 0x103A988 Offset: 0x1036988 VA: 0x103A988
	internal void CheckNull() { }
}


// Namespace: System.Data
internal enum RBTreeError // TypeDefIndex: 4014
{
	// Fields
	public int value__; // 0x0
	public const RBTreeError InvalidPageSize = 1;
	public const RBTreeError PagePositionInSlotInUse = 3;
	public const RBTreeError NoFreeSlots = 4;
	public const RBTreeError InvalidStateinInsert = 5;
	public const RBTreeError InvalidNextSizeInDelete = 7;
	public const RBTreeError InvalidStateinDelete = 8;
	public const RBTreeError InvalidNodeSizeinDelete = 9;
	public const RBTreeError InvalidStateinEndDelete = 10;
	public const RBTreeError CannotRotateInvalidsuccessorNodeinDelete = 11;
	public const RBTreeError IndexOutOFRangeinGetNodeByIndex = 13;
	public const RBTreeError RBDeleteFixup = 14;
	public const RBTreeError UnsupportedAccessMethod1 = 15;
	public const RBTreeError UnsupportedAccessMethod2 = 16;
	public const RBTreeError UnsupportedAccessMethodInNonNillRootSubtree = 17;
	public const RBTreeError AttachedNodeWithZerorbTreeNodeId = 18;
	public const RBTreeError CompareNodeInDataRowTree = 19;
	public const RBTreeError CompareSateliteTreeNodeInDataRowTree = 20;
	public const RBTreeError NestedSatelliteTreeEnumerator = 21;
}


// Namespace: System.Data
internal enum TreeAccessMethod // TypeDefIndex: 4015
{
	// Fields
	public int value__; // 0x0
	public const TreeAccessMethod KEY_SEARCH_AND_INDEX = 1;
	public const TreeAccessMethod INDEX_ONLY = 2;
}


// Namespace: 
private enum RBTree.NodeColor<K> // TypeDefIndex: 4016
{
	// Fields
	public int value__; // 0x0
	public const RBTree.NodeColor<K> red = 0;
	public const RBTree.NodeColor<K> black = 1;
}


// Namespace: 
private struct RBTree.Node<K> // TypeDefIndex: 4017
{
	// Fields
	internal int _selfId; // 0x0
	internal int _leftId; // 0x0
	internal int _rightId; // 0x0
	internal int _parentId; // 0x0
	internal int _nextId; // 0x0
	internal int _subTreeSize; // 0x0
	internal K _keyOfNode; // 0x0
	internal RBTree.NodeColor<K> _nodeColor; // 0x0
}


// Namespace: 
private struct RBTree.NodePath<K> // TypeDefIndex: 4018
{
	// Fields
	internal readonly int _nodeID; // 0x0
	internal readonly int _mainTreeNodeID; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(int nodeID, int mainTreeNodeID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3DB3C Offset: 0xC39B3C VA: 0xC3DB3C
	|-RBTree.NodePath<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: 
private sealed class RBTree.TreePage<K> // TypeDefIndex: 4019
{
	// Fields
	internal readonly RBTree.Node<K>[] _slots; // 0x0
	internal readonly int[] _slotMap; // 0x0
	private int _inUseCount; // 0x0
	private int _pageId; // 0x0
	private int _nextFreeSlotLine; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC71588 Offset: 0xC6D588 VA: 0xC71588
	|-RBTree.TreePage<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal int AllocSlot(RBTree<K> tree) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC71644 Offset: 0xC6D644 VA: 0xC71644
	|-RBTree.TreePage<__Il2CppFullySharedGenericType>.AllocSlot
	*/
}


// Namespace: 
internal struct RBTree.RBTreeEnumerator<K> : IEnumerator<K>, IDisposable, IEnumerator // TypeDefIndex: 4020
{
	// Fields
	private readonly RBTree<K> _tree; // 0x0
	private readonly int _version; // 0x0
	private int _index; // 0x0
	private int _mainTreeNodeId; // 0x0
	private K _current; // 0x0

	// Properties
	public K Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(RBTree<K> tree) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48064 Offset: 0xC44064 VA: 0xC48064
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void .ctor(RBTree<K> tree, int position) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC481F8 Offset: 0xC441F8 VA: 0xC481F8
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48480 Offset: 0xC44480 VA: 0xC48480
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48484 Offset: 0xC44484 VA: 0xC48484
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public K get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48730 Offset: 0xC44730 VA: 0xC48730
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48820 Offset: 0xC44820 VA: 0xC48820
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>.System.Collections.IEnumerator.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4891C Offset: 0xC4491C VA: 0xC4891C
	|-RBTree.RBTreeEnumerator<__Il2CppFullySharedGenericType>.System.Collections.IEnumerator.Reset
	*/
}


// Namespace: System.Data
[DefaultMember("Item")]
internal abstract class RBTree<K> : IEnumerable // TypeDefIndex: 4021
{
	// Fields
	private RBTree.TreePage<K>[] _pageTable; // 0x0
	private int[] _pageTableMap; // 0x0
	private int _inUsePageCount; // 0x0
	private int _nextFreePageLine; // 0x0
	public int root; // 0x0
	private int _version; // 0x0
	private int _inUseNodeCount; // 0x0
	private int _inUseSatelliteTreeCount; // 0x0
	private readonly TreeAccessMethod _accessMethod; // 0x0

	// Properties
	public int Count { get; }
	public bool HasDuplicates { get; }
	public K Item { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract int CompareNode(K record1, K record2);

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract int CompareSateliteTreeNode(K record1, K record2);

	// RVA: -1 Offset: -1
	protected void .ctor(TreeAccessMethod accessMethod) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48ACC Offset: 0xC44ACC VA: 0xC48ACC
	|-RBTree<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	private void InitTree() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48B08 Offset: 0xC44B08 VA: 0xC48B08
	|-RBTree<__Il2CppFullySharedGenericType>.InitTree
	*/

	// RVA: -1 Offset: -1
	private void FreePage(RBTree.TreePage<K> page) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48C5C Offset: 0xC44C5C VA: 0xC48C5C
	|-RBTree<__Il2CppFullySharedGenericType>.FreePage
	*/

	// RVA: -1 Offset: -1
	private RBTree.TreePage<K> AllocPage(int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48CB4 Offset: 0xC44CB4 VA: 0xC48CB4
	|-RBTree<__Il2CppFullySharedGenericType>.AllocPage
	*/

	// RVA: -1 Offset: -1
	private void MarkPageFull(RBTree.TreePage<K> page) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48ED8 Offset: 0xC44ED8 VA: 0xC48ED8
	|-RBTree<__Il2CppFullySharedGenericType>.MarkPageFull
	*/

	// RVA: -1 Offset: -1
	private void MarkPageFree(RBTree.TreePage<K> page) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48F30 Offset: 0xC44F30 VA: 0xC48F30
	|-RBTree<__Il2CppFullySharedGenericType>.MarkPageFree
	*/

	// RVA: -1 Offset: -1
	private static int GetIntValueFromBitMap(uint bitMap) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48F88 Offset: 0xC44F88 VA: 0xC48F88
	|-RBTree<__Il2CppFullySharedGenericType>.GetIntValueFromBitMap
	*/

	// RVA: -1 Offset: -1
	private void FreeNode(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC48FEC Offset: 0xC44FEC VA: 0xC48FEC
	|-RBTree<__Il2CppFullySharedGenericType>.FreeNode
	*/

	// RVA: -1 Offset: -1
	private int GetIndexOfPageWithFreeSlot(bool allocatedPage) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC49120 Offset: 0xC45120 VA: 0xC49120
	|-RBTree<__Il2CppFullySharedGenericType>.GetIndexOfPageWithFreeSlot
	*/

	// RVA: -1 Offset: -1
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC49250 Offset: 0xC45250 VA: 0xC49250
	|-RBTree<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1
	public bool get_HasDuplicates() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4925C Offset: 0xC4525C VA: 0xC4925C
	|-RBTree<__Il2CppFullySharedGenericType>.get_HasDuplicates
	*/

	// RVA: -1 Offset: -1
	private int GetNewNode(K key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4926C Offset: 0xC4526C VA: 0xC4926C
	|-RBTree<__Il2CppFullySharedGenericType>.GetNewNode
	*/

	// RVA: -1 Offset: -1
	private int Successor(int x_id) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC49574 Offset: 0xC45574 VA: 0xC49574
	|-RBTree<__Il2CppFullySharedGenericType>.Successor
	*/

	// RVA: -1 Offset: -1
	private bool Successor(ref int nodeId, ref int mainTreeNodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC49648 Offset: 0xC45648 VA: 0xC49648
	|-RBTree<__Il2CppFullySharedGenericType>.Successor
	*/

	// RVA: -1 Offset: -1
	private int Minimum(int x_id) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC49760 Offset: 0xC45760 VA: 0xC49760
	|-RBTree<__Il2CppFullySharedGenericType>.Minimum
	*/

	// RVA: -1 Offset: -1
	private int LeftRotate(int root_id, int x_id, int mainTreeNode) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC497CC Offset: 0xC457CC VA: 0xC497CC
	|-RBTree<__Il2CppFullySharedGenericType>.LeftRotate
	*/

	// RVA: -1 Offset: -1
	private int RightRotate(int root_id, int x_id, int mainTreeNode) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC49C70 Offset: 0xC45C70 VA: 0xC49C70
	|-RBTree<__Il2CppFullySharedGenericType>.RightRotate
	*/

	// RVA: -1 Offset: -1
	private int RBInsert(int root_id, int x_id, int mainTreeNodeID, int position, bool append) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4A118 Offset: 0xC46118 VA: 0xC4A118
	|-RBTree<__Il2CppFullySharedGenericType>.RBInsert
	*/

	// RVA: -1 Offset: -1
	public void UpdateNodeKey(K currentKey, K newKey) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4AF88 Offset: 0xC46F88 VA: 0xC4AF88
	|-RBTree<__Il2CppFullySharedGenericType>.UpdateNodeKey
	*/

	// RVA: -1 Offset: -1
	public K DeleteByIndex(int i) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4B168 Offset: 0xC47168 VA: 0xC4B168
	|-RBTree<__Il2CppFullySharedGenericType>.DeleteByIndex
	*/

	// RVA: -1 Offset: -1
	public int RBDelete(int z_id) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4B24C Offset: 0xC4724C VA: 0xC4B24C
	|-RBTree<__Il2CppFullySharedGenericType>.RBDelete
	*/

	// RVA: -1 Offset: -1
	private int RBDeleteX(int root_id, int z_id, int mainTreeNodeID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4B26C Offset: 0xC4726C VA: 0xC4B26C
	|-RBTree<__Il2CppFullySharedGenericType>.RBDeleteX
	*/

	// RVA: -1 Offset: -1
	private int RBDeleteFixup(int root_id, int x_id, int px_id, int mainTreeNodeID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4BE90 Offset: 0xC47E90 VA: 0xC4BE90
	|-RBTree<__Il2CppFullySharedGenericType>.RBDeleteFixup
	*/

	// RVA: -1 Offset: -1
	private int SearchSubTree(int root_id, K key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4C5E8 Offset: 0xC485E8 VA: 0xC4C5E8
	|-RBTree<__Il2CppFullySharedGenericType>.SearchSubTree
	*/

	// RVA: -1 Offset: -1
	public K get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4C7B0 Offset: 0xC487B0 VA: 0xC4C7B0
	|-RBTree<__Il2CppFullySharedGenericType>.get_Item
	*/

	// RVA: -1 Offset: -1
	private RBTree.NodePath<K> GetNodeByKey(K key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4C864 Offset: 0xC48864 VA: 0xC4C864
	|-RBTree<__Il2CppFullySharedGenericType>.GetNodeByKey
	*/

	// RVA: -1 Offset: -1
	public int GetIndexByKey(K key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4CB24 Offset: 0xC48B24 VA: 0xC4CB24
	|-RBTree<__Il2CppFullySharedGenericType>.GetIndexByKey
	*/

	// RVA: -1 Offset: -1
	public int GetIndexByNode(int node) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4CC30 Offset: 0xC48C30 VA: 0xC4CC30
	|-RBTree<__Il2CppFullySharedGenericType>.GetIndexByNode
	*/

	// RVA: -1 Offset: -1
	private int GetIndexByNodePath(RBTree.NodePath<K> path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4CDB4 Offset: 0xC48DB4 VA: 0xC4CDB4
	|-RBTree<__Il2CppFullySharedGenericType>.GetIndexByNodePath
	*/

	// RVA: -1 Offset: -1
	private int ComputeIndexByNode(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4CE4C Offset: 0xC48E4C VA: 0xC4CE4C
	|-RBTree<__Il2CppFullySharedGenericType>.ComputeIndexByNode
	*/

	// RVA: -1 Offset: -1
	private int ComputeIndexWithSatelliteByNode(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4CF24 Offset: 0xC48F24 VA: 0xC4CF24
	|-RBTree<__Il2CppFullySharedGenericType>.ComputeIndexWithSatelliteByNode
	*/

	// RVA: -1 Offset: -1
	private RBTree.NodePath<K> GetNodeByIndex(int userIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D054 Offset: 0xC49054 VA: 0xC4D054
	|-RBTree<__Il2CppFullySharedGenericType>.GetNodeByIndex
	*/

	// RVA: -1 Offset: -1
	private int ComputeNodeByIndex(int index, out int satelliteRootId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D108 Offset: 0xC49108 VA: 0xC4D108
	|-RBTree<__Il2CppFullySharedGenericType>.ComputeNodeByIndex
	*/

	// RVA: -1 Offset: -1
	private int ComputeNodeByIndex(int x_id, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D2E0 Offset: 0xC492E0 VA: 0xC4D2E0
	|-RBTree<__Il2CppFullySharedGenericType>.ComputeNodeByIndex
	*/

	// RVA: -1 Offset: -1
	public int Insert(K item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D388 Offset: 0xC49388 VA: 0xC4D388
	|-RBTree<__Il2CppFullySharedGenericType>.Insert
	*/

	// RVA: -1 Offset: -1
	public int Add(K item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D4A0 Offset: 0xC494A0 VA: 0xC4D4A0
	|-RBTree<__Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public IEnumerator GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D5B8 Offset: 0xC495B8 VA: 0xC4D5B8
	|-RBTree<__Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1
	public int IndexOf(int nodeId, K item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D668 Offset: 0xC49668 VA: 0xC4D668
	|-RBTree<__Il2CppFullySharedGenericType>.IndexOf
	*/

	// RVA: -1 Offset: -1
	public int Insert(int position, K item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D8A8 Offset: 0xC498A8 VA: 0xC4D8A8
	|-RBTree<__Il2CppFullySharedGenericType>.Insert
	*/

	// RVA: -1 Offset: -1
	public int InsertAt(int position, K item, bool append) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4D998 Offset: 0xC49998 VA: 0xC4D998
	|-RBTree<__Il2CppFullySharedGenericType>.InsertAt
	*/

	// RVA: -1 Offset: -1
	public void RemoveAt(int position) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DAB8 Offset: 0xC49AB8 VA: 0xC4DAB8
	|-RBTree<__Il2CppFullySharedGenericType>.RemoveAt
	*/

	// RVA: -1 Offset: -1
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DB24 Offset: 0xC49B24 VA: 0xC4DB24
	|-RBTree<__Il2CppFullySharedGenericType>.Clear
	*/

	// RVA: -1 Offset: -1
	public void CopyTo(Array array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DB50 Offset: 0xC49B50 VA: 0xC4DB50
	|-RBTree<__Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1
	public void CopyTo(K[] array, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DCDC Offset: 0xC49CDC VA: 0xC4DCDC
	|-RBTree<__Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1
	private void SetRight(int nodeId, int rightNodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DEA4 Offset: 0xC49EA4 VA: 0xC4DEA4
	|-RBTree<__Il2CppFullySharedGenericType>.SetRight
	*/

	// RVA: -1 Offset: -1
	private void SetLeft(int nodeId, int leftNodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DF48 Offset: 0xC49F48 VA: 0xC4DF48
	|-RBTree<__Il2CppFullySharedGenericType>.SetLeft
	*/

	// RVA: -1 Offset: -1
	private void SetParent(int nodeId, int parentNodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4DFEC Offset: 0xC49FEC VA: 0xC4DFEC
	|-RBTree<__Il2CppFullySharedGenericType>.SetParent
	*/

	// RVA: -1 Offset: -1
	private void SetColor(int nodeId, RBTree.NodeColor<K> color) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E090 Offset: 0xC4A090 VA: 0xC4E090
	|-RBTree<__Il2CppFullySharedGenericType>.SetColor
	*/

	// RVA: -1 Offset: -1
	private void SetKey(int nodeId, K key) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E134 Offset: 0xC4A134 VA: 0xC4E134
	|-RBTree<__Il2CppFullySharedGenericType>.SetKey
	*/

	// RVA: -1 Offset: -1
	private void SetNext(int nodeId, int nextNodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E244 Offset: 0xC4A244 VA: 0xC4E244
	|-RBTree<__Il2CppFullySharedGenericType>.SetNext
	*/

	// RVA: -1 Offset: -1
	private void SetSubTreeSize(int nodeId, int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E2E8 Offset: 0xC4A2E8 VA: 0xC4E2E8
	|-RBTree<__Il2CppFullySharedGenericType>.SetSubTreeSize
	*/

	// RVA: -1 Offset: -1
	private void IncreaseSize(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E38C Offset: 0xC4A38C VA: 0xC4E38C
	|-RBTree<__Il2CppFullySharedGenericType>.IncreaseSize
	*/

	// RVA: -1 Offset: -1
	private void RecomputeSize(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E418 Offset: 0xC4A418 VA: 0xC4E418
	|-RBTree<__Il2CppFullySharedGenericType>.RecomputeSize
	*/

	// RVA: -1 Offset: -1
	private void DecreaseSize(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E588 Offset: 0xC4A588 VA: 0xC4E588
	|-RBTree<__Il2CppFullySharedGenericType>.DecreaseSize
	*/

	// RVA: -1 Offset: -1
	public int Right(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E614 Offset: 0xC4A614 VA: 0xC4E614
	|-RBTree<__Il2CppFullySharedGenericType>.Right
	*/

	// RVA: -1 Offset: -1
	public int Left(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E698 Offset: 0xC4A698 VA: 0xC4E698
	|-RBTree<__Il2CppFullySharedGenericType>.Left
	*/

	// RVA: -1 Offset: -1
	public int Parent(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E71C Offset: 0xC4A71C VA: 0xC4E71C
	|-RBTree<__Il2CppFullySharedGenericType>.Parent
	*/

	// RVA: -1 Offset: -1
	private RBTree.NodeColor<K> color(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E7A0 Offset: 0xC4A7A0 VA: 0xC4E7A0
	|-RBTree<__Il2CppFullySharedGenericType>.color
	*/

	// RVA: -1 Offset: -1
	public int Next(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E824 Offset: 0xC4A824 VA: 0xC4E824
	|-RBTree<__Il2CppFullySharedGenericType>.Next
	*/

	// RVA: -1 Offset: -1
	public int SubTreeSize(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E8A8 Offset: 0xC4A8A8 VA: 0xC4E8A8
	|-RBTree<__Il2CppFullySharedGenericType>.SubTreeSize
	*/

	// RVA: -1 Offset: -1
	public K Key(int nodeId) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4E92C Offset: 0xC4A92C VA: 0xC4E92C
	|-RBTree<__Il2CppFullySharedGenericType>.Key
	*/
}


// Namespace: System.Data
[DefaultMember("Item")]
internal sealed class RecordManager // TypeDefIndex: 4022
{
	// Fields
	private readonly DataTable _table; // 0x10
	private int _lastFreeRecord; // 0x18
	private int _minimumCapacity; // 0x1C
	private int _recordCapacity; // 0x20
	private readonly List<int> _freeRecordList; // 0x28
	private DataRow[] _rows; // 0x30

	// Properties
	internal int MinimumCapacity { set; }
	internal int RecordCapacity { set; }
	internal DataRow Item { get; set; }

	// Methods

	// RVA: 0x103A9C0 Offset: 0x10369C0 VA: 0x103A9C0
	internal void .ctor(DataTable table) { }

	// RVA: 0x103AA84 Offset: 0x1036A84 VA: 0x103AA84
	private void GrowRecordCapacity() { }

	// RVA: 0x103AC64 Offset: 0x1036C64 VA: 0x103AC64
	internal void set_MinimumCapacity(int value) { }

	// RVA: 0x103ABD4 Offset: 0x1036BD4 VA: 0x103ABD4
	internal void set_RecordCapacity(int value) { }

	// RVA: 0x103AB88 Offset: 0x1036B88 VA: 0x103AB88
	internal static int NewCapacity(int capacity) { }

	// RVA: 0x103AB9C Offset: 0x1036B9C VA: 0x103AB9C
	private int NormalizedMinimumCapacity(int capacity) { }

	// RVA: 0x103ACA8 Offset: 0x1036CA8 VA: 0x103ACA8
	internal int NewRecordBase() { }

	// RVA: 0x103AD68 Offset: 0x1036D68 VA: 0x103AD68
	internal void FreeRecord(ref int record) { }

	// RVA: 0x103AEE0 Offset: 0x1036EE0 VA: 0x103AEE0
	internal void Clear(bool clearAll) { }

	// RVA: 0x103B108 Offset: 0x1037108 VA: 0x103B108
	internal DataRow get_Item(int record) { }

	// RVA: 0x103AE7C Offset: 0x1036E7C VA: 0x103AE7C
	internal void set_Item(int record, DataRow value) { }

	// RVA: 0x103B138 Offset: 0x1037138 VA: 0x103B138
	internal int ImportRecord(DataTable src, int record) { }

	// RVA: 0x103B140 Offset: 0x1037140 VA: 0x103B140
	internal int CopyRecord(DataTable src, int record, int copy) { }

	// RVA: 0x103B454 Offset: 0x1037454 VA: 0x103B454
	internal void SetRowCache(DataRow[] newRows) { }
}


// Namespace: System.Data
internal sealed class RelatedView : DataView, IFilter // TypeDefIndex: 4023
{
	// Fields
	private readonly Nullable<DataKey> _parentKey; // 0xB0
	private readonly DataKey _childKey; // 0xC0
	private readonly DataRowView _parentRowView; // 0xC8
	private readonly object[] _filterValues; // 0xD0

	// Methods

	// RVA: 0x103B478 Offset: 0x1037478 VA: 0x103B478
	public void .ctor(DataColumn[] columns, object[] values) { }

	// RVA: 0x103B590 Offset: 0x1037590 VA: 0x103B590
	public void .ctor(DataRowView parentRowView, DataKey parentKey, DataColumn[] childKeyColumns) { }

	// RVA: 0x103B69C Offset: 0x103769C VA: 0x103B69C
	private object[] GetParentValues() { }

	// RVA: 0x103B738 Offset: 0x1037738 VA: 0x103B738 Slot: 33
	public bool Invoke(DataRow row, DataRowVersion version) { }

	// RVA: 0x103B8C0 Offset: 0x10378C0 VA: 0x103B8C0 Slot: 27
	internal override IFilter GetFilter() { }

	// RVA: 0x103B8C4 Offset: 0x10378C4 VA: 0x103B8C4 Slot: 26
	public override DataRowView AddNew() { }

	// RVA: 0x103B924 Offset: 0x1037924 VA: 0x103B924 Slot: 30
	internal override void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter) { }
}


// Namespace: System.Data
internal sealed class RelationshipConverter : ExpandableObjectConverter // TypeDefIndex: 4024
{
	// Methods

	// RVA: 0x103B948 Offset: 0x1037948 VA: 0x103B948
	public void .ctor() { }

	// RVA: 0x103B950 Offset: 0x1037950 VA: 0x103B950 Slot: 5
	public override bool CanConvertTo(ITypeDescriptorContext context, Type destinationType) { }

	// RVA: 0x103BA18 Offset: 0x1037A18 VA: 0x103BA18 Slot: 7
	public override object ConvertTo(ITypeDescriptorContext context, CultureInfo culture, object value, Type destinationType) { }
}


// Namespace: System.Data
public enum Rule // TypeDefIndex: 4025
{
	// Fields
	public int value__; // 0x0
	public const Rule None = 0;
	public const Rule Cascade = 1;
	public const Rule SetNull = 2;
	public const Rule SetDefault = 3;
}


// Namespace: System.Data
public enum SchemaSerializationMode // TypeDefIndex: 4026
{
	// Fields
	public int value__; // 0x0
	public const SchemaSerializationMode IncludeSchema = 1;
	public const SchemaSerializationMode ExcludeSchema = 2;
}


// Namespace: System.Data
internal struct IndexField // TypeDefIndex: 4027
{
	// Fields
	public readonly DataColumn Column; // 0x0
	public readonly bool IsDescending; // 0x8

	// Methods

	// RVA: 0x103C4E0 Offset: 0x10384E0 VA: 0x103C4E0
	internal void .ctor(DataColumn column, bool isDescending) { }

	// RVA: 0x103C4F0 Offset: 0x10384F0 VA: 0x103C4F0
	public static bool op_Equality(IndexField if1, IndexField if2) { }

	// RVA: 0x103C50C Offset: 0x103850C VA: 0x103C50C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x103C59C Offset: 0x103859C VA: 0x103C59C Slot: 2
	public override int GetHashCode() { }
}


// Namespace: 
private sealed class Index.IndexTree : RBTree<int> // TypeDefIndex: 4028
{
	// Fields
	private readonly Index _index; // 0x40

	// Methods

	// RVA: 0x103EA10 Offset: 0x103AA10 VA: 0x103EA10
	internal void .ctor(Index index) { }

	// RVA: 0x103EF78 Offset: 0x103AF78 VA: 0x103EF78 Slot: 5
	protected override int CompareNode(int record1, int record2) { }

	// RVA: 0x103EF90 Offset: 0x103AF90 VA: 0x103EF90 Slot: 6
	protected override int CompareSateliteTreeNode(int record1, int record2) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class Index.<>c // TypeDefIndex: 4029
{
	// Fields
	public static readonly Index.<>c <>9; // 0x0
	public static Listeners.Func<DataViewListener, DataViewListener, bool> <>9__22_0; // 0x8
	public static Listeners.Action<DataViewListener, DataViewListener, ListChangedEventArgs, bool, bool> <>9__85_0; // 0x10

	// Methods

	// RVA: 0x103EFA8 Offset: 0x103AFA8 VA: 0x103EFA8
	private static void .cctor() { }

	// RVA: 0x103F004 Offset: 0x103B004 VA: 0x103F004
	public void .ctor() { }

	// RVA: 0x103F00C Offset: 0x103B00C VA: 0x103F00C
	internal bool <.ctor>b__22_0(DataViewListener listener) { }

	// RVA: 0x103F018 Offset: 0x103B018 VA: 0x103F018
	internal void <OnListChanged>b__85_0(DataViewListener listener, ListChangedEventArgs args, bool arg2, bool arg3) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Index.<>c__DisplayClass86_0 // TypeDefIndex: 4030
{
	// Fields
	public ListChangedType changedType; // 0x10

	// Methods

	// RVA: 0x103EB88 Offset: 0x103AB88 VA: 0x103EB88
	public void .ctor() { }

	// RVA: 0x103F034 Offset: 0x103B034 VA: 0x103F034
	internal void <MaintainDataView>b__0(DataViewListener listener, ListChangedType type, DataRow row, bool track) { }
}


// Namespace: System.Data
internal sealed class Index // TypeDefIndex: 4031
{
	// Fields
	private readonly DataTable _table; // 0x10
	internal readonly IndexField[] _indexFields; // 0x18
	private readonly Comparison<DataRow> _comparison; // 0x20
	private readonly DataViewRowState _recordStates; // 0x28
	private WeakReference _rowFilter; // 0x30
	private Index.IndexTree _records; // 0x38
	private int _recordCount; // 0x40
	private int _refCount; // 0x44
	private Listeners<DataViewListener> _listeners; // 0x48
	private bool _suspendEvents; // 0x50
	private readonly bool _isSharable; // 0x51
	private readonly bool _hasRemoteAggregate; // 0x52
	private static int s_objectTypeCount; // 0x0
	private readonly int _objectID; // 0x54

	// Properties
	public DataViewRowState RecordStates { get; }
	public IFilter RowFilter { get; }
	public bool HasDuplicates { get; }
	private bool DoListChanged { get; }

	// Methods

	// RVA: 0x103C61C Offset: 0x103861C VA: 0x103C61C
	public void .ctor(DataTable table, IndexField[] indexFields, DataViewRowState recordStates, IFilter rowFilter) { }

	// RVA: 0x103C914 Offset: 0x1038914 VA: 0x103C914
	public void .ctor(DataTable table, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter) { }

	// RVA: 0x103C96C Offset: 0x103896C VA: 0x103C96C
	private static IndexField[] GetAllFields(DataColumnCollection columns) { }

	// RVA: 0x103C62C Offset: 0x103862C VA: 0x103C62C
	private void .ctor(DataTable table, IndexField[] indexFields, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter) { }

	// RVA: 0x103CE18 Offset: 0x1038E18 VA: 0x103CE18
	public bool Equal(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter) { }

	// RVA: 0x103CEC0 Offset: 0x1038EC0 VA: 0x103CEC0
	public DataViewRowState get_RecordStates() { }

	// RVA: 0x103CEC8 Offset: 0x1038EC8 VA: 0x103CEC8
	public IFilter get_RowFilter() { }

	// RVA: 0x103CF40 Offset: 0x1038F40 VA: 0x103CF40
	public int GetRecord(int recordIndex) { }

	// RVA: 0x103CFAC Offset: 0x1038FAC VA: 0x103CFAC
	public bool get_HasDuplicates() { }

	// RVA: 0x103CFFC Offset: 0x1038FFC VA: 0x103CFFC
	private bool AcceptRecord(int record) { }

	// RVA: 0x103D028 Offset: 0x1039028 VA: 0x103D028
	private bool AcceptRecord(int record, IFilter filter) { }

	// RVA: 0x103D14C Offset: 0x103914C VA: 0x103D14C
	internal void ListChangedAdd(DataViewListener listener) { }

	// RVA: 0x103D1A4 Offset: 0x10391A4 VA: 0x103D1A4
	internal void ListChangedRemove(DataViewListener listener) { }

	// RVA: 0x103D1FC Offset: 0x10391FC VA: 0x103D1FC
	public void AddRef() { }

	// RVA: 0x103D338 Offset: 0x1039338 VA: 0x103D338
	public int RemoveRef() { }

	// RVA: 0x103D488 Offset: 0x1039488 VA: 0x103D488
	private void ApplyChangeAction(int record, int action, int changeRecord) { }

	// RVA: 0x103D854 Offset: 0x1039854 VA: 0x103D854
	public bool CheckUnique() { }

	// RVA: 0x103D86C Offset: 0x103986C VA: 0x103D86C
	private int CompareRecords(int record1, int record2) { }

	// RVA: 0x103D9B8 Offset: 0x10399B8 VA: 0x103D9B8
	private int CompareDataRows(int record1, int record2) { }

	// RVA: 0x103DA24 Offset: 0x1039A24 VA: 0x103DA24
	private int CompareDuplicateRecords(int record1, int record2) { }

	// RVA: 0x103DB70 Offset: 0x1039B70 VA: 0x103DB70
	private int CompareRecordToKey(int record1, object[] vals) { }

	// RVA: 0x103DC40 Offset: 0x1039C40 VA: 0x103DC40
	public void DeleteRecordFromIndex(int recordIndex) { }

	// RVA: 0x103D7E4 Offset: 0x10397E4 VA: 0x103D7E4
	private void DeleteRecord(int recordIndex) { }

	// RVA: 0x103DC48 Offset: 0x1039C48 VA: 0x103DC48
	private void DeleteRecord(int recordIndex, bool fireEvent) { }

	// RVA: 0x103DEAC Offset: 0x1039EAC VA: 0x103DEAC
	public RBTree.RBTreeEnumerator<int> GetEnumerator(int startIndex) { }

	// RVA: 0x103D7EC Offset: 0x10397EC VA: 0x103D7EC
	public int GetIndex(int record) { }

	// RVA: 0x103D6A8 Offset: 0x10396A8 VA: 0x103D6A8
	private int GetIndex(int record, int changeRecord) { }

	// RVA: 0x1034AD0 Offset: 0x1030AD0 VA: 0x1034AD0
	public object[] GetUniqueKeyValues() { }

	// RVA: 0x103E0EC Offset: 0x103A0EC VA: 0x103E0EC
	private int FindNodeByKey(object originalKey) { }

	// RVA: 0x103E310 Offset: 0x103A310 VA: 0x103E310
	private int FindNodeByKeys(object[] originalKey) { }

	// RVA: 0x103E544 Offset: 0x103A544 VA: 0x103E544
	private int FindNodeByKeyRecord(int record) { }

	// RVA: 0x103E63C Offset: 0x103A63C VA: 0x103E63C
	private Range GetRangeFromNode(int nodeId) { }

	// RVA: 0x103E764 Offset: 0x103A764 VA: 0x103E764
	public Range FindRecords(object key) { }

	// RVA: 0x1034BD8 Offset: 0x1030BD8 VA: 0x1034BD8
	public Range FindRecords(object[] key) { }

	// RVA: 0x103E788 Offset: 0x103A788 VA: 0x103E788
	internal void FireResetEvent() { }

	// RVA: 0x103E9A0 Offset: 0x103A9A0 VA: 0x103E9A0
	private int GetChangeAction(DataViewRowState oldState, DataViewRowState newState) { }

	// RVA: 0x103E9BC Offset: 0x103A9BC VA: 0x103E9BC
	private static int GetReplaceAction(DataViewRowState oldState) { }

	// RVA: 0x10354E8 Offset: 0x10314E8 VA: 0x10354E8
	public DataRow GetRow(int i) { }

	// RVA: 0x103E9E4 Offset: 0x103A9E4 VA: 0x103E9E4
	public DataRow[] GetRows(object[] values) { }

	// RVA: 0x1034BFC Offset: 0x1030BFC VA: 0x1034BFC
	public DataRow[] GetRows(Range range) { }

	// RVA: 0x103CA30 Offset: 0x1038A30 VA: 0x103CA30
	private void InitRecords(IFilter filter) { }

	// RVA: 0x103EA70 Offset: 0x103AA70 VA: 0x103EA70
	public int InsertRecordToIndex(int record) { }

	// RVA: 0x103D52C Offset: 0x103952C VA: 0x103D52C
	private int InsertRecord(int record, bool fireEvent) { }

	// RVA: 0x103EAC0 Offset: 0x103AAC0 VA: 0x103EAC0
	public bool IsKeyInIndex(object key) { }

	// RVA: 0x1034BC0 Offset: 0x1030BC0 VA: 0x1034BC0
	public bool IsKeyInIndex(object[] key) { }

	// RVA: 0x103EAD8 Offset: 0x103AAD8 VA: 0x103EAD8
	public bool IsKeyRecordInIndex(int record) { }

	// RVA: 0x103E800 Offset: 0x103A800 VA: 0x103E800
	private bool get_DoListChanged() { }

	// RVA: 0x103EAF0 Offset: 0x103AAF0 VA: 0x103EAF0
	private void OnListChanged(ListChangedType changedType, int newIndex, int oldIndex) { }

	// RVA: 0x103DE1C Offset: 0x1039E1C VA: 0x103DE1C
	private void OnListChanged(ListChangedType changedType, int index) { }

	// RVA: 0x103E880 Offset: 0x103A880 VA: 0x103E880
	private void OnListChanged(ListChangedEventArgs e) { }

	// RVA: 0x103DCF0 Offset: 0x1039CF0 VA: 0x103DCF0
	private void MaintainDataView(ListChangedType changedType, int record, bool trackAddRemove) { }

	// RVA: 0x103EB90 Offset: 0x103AB90 VA: 0x103EB90
	public void Reset() { }

	// RVA: 0x103EBC8 Offset: 0x103ABC8 VA: 0x103EBC8
	public void RecordChanged(int record) { }

	// RVA: 0x103EC14 Offset: 0x103AC14 VA: 0x103EC14
	public void RecordChanged(int oldIndex, int newIndex) { }

	// RVA: 0x103EC64 Offset: 0x103AC64 VA: 0x103EC64
	public void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState) { }

	// RVA: 0x103ECA0 Offset: 0x103ACA0 VA: 0x103ECA0
	public void RecordStateChanged(int oldRecord, DataViewRowState oldOldState, DataViewRowState oldNewState, int newRecord, DataViewRowState newOldState, DataViewRowState newNewState) { }

	// RVA: 0x103DF14 Offset: 0x1039F14 VA: 0x103DF14
	private void GetUniqueKeyValues(List<object[]> list, int curNodeId) { }

	// RVA: -1 Offset: -1
	internal static int IndexOfReference<T>(List<T> list, T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8D560 Offset: 0xB89560 VA: 0xB8D560
	|-Index.IndexOfReference<object>
	*/
}


// Namespace: 
internal sealed class Listeners.Action<TElem, T1, T2, T3, T4> : MulticastDelegate // TypeDefIndex: 4032
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC75C8 Offset: 0xBC35C8 VA: 0xBC75C8
	|-Listeners.Action<object, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC76CC Offset: 0xBC36CC VA: 0xBC76CC
	|-Listeners.Action<object, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: 
internal sealed class Listeners.Func<TElem, T1, TResult> : MulticastDelegate // TypeDefIndex: 4033
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1CE10 Offset: 0xC18E10 VA: 0xC1CE10
	|-Listeners.Func<object, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual TResult Invoke(T1 arg1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1CF10 Offset: 0xC18F10 VA: 0xC1CF10
	|-Listeners.Func<object, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: System.Data
internal sealed class Listeners<TElem> // TypeDefIndex: 4034
{
	// Fields
	private readonly List<TElem> _listeners; // 0x0
	private readonly Listeners.Func<TElem, TElem, bool> _filter; // 0x0
	private readonly int _objectID; // 0x0
	private int _listenerReaderCount; // 0x0

	// Properties
	internal bool HasListeners { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(int ObjectID, Listeners.Func<TElem, TElem, bool> notifyFilter) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC339D0 Offset: 0xC2F9D0 VA: 0xC339D0
	|-Listeners<object>..ctor
	*/

	// RVA: -1 Offset: -1
	internal bool get_HasListeners() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC33A3C Offset: 0xC2FA3C VA: 0xC33A3C
	|-Listeners<object>.get_HasListeners
	*/

	// RVA: -1 Offset: -1
	internal void Add(TElem listener) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC33A60 Offset: 0xC2FA60 VA: 0xC33A60
	|-Listeners<object>.Add
	*/

	// RVA: -1 Offset: -1
	internal int IndexOfReference(TElem listener) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC33A84 Offset: 0xC2FA84 VA: 0xC33A84
	|-Listeners<object>.IndexOfReference
	*/

	// RVA: -1 Offset: -1
	internal void Remove(TElem listener) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC33A98 Offset: 0xC2FA98 VA: 0xC33A98
	|-Listeners<object>.Remove
	*/

	// RVA: -1 Offset: -1
	internal void Notify<T1, T2, T3>(T1 arg1, T2 arg2, T3 arg3, Listeners.Action<TElem, TElem, T1, T2, T3> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB68FCC Offset: 0xB64FCC VA: 0xB68FCC
	|-Listeners<object>.Notify<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private void RemoveNullListeners(int nullIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC33B44 Offset: 0xC2FB44 VA: 0xC33B44
	|-Listeners<object>.RemoveNullListeners
	*/
}


// Namespace: System.Data
[Serializable]
internal sealed class SimpleType : ISerializable // TypeDefIndex: 4035
{
	// Fields
	private string _baseType; // 0x10
	private SimpleType _baseSimpleType; // 0x18
	private XmlQualifiedName _xmlBaseType; // 0x20
	private string _name; // 0x28
	private int _length; // 0x30
	private int _minLength; // 0x34
	private int _maxLength; // 0x38
	private string _pattern; // 0x40
	private string _ns; // 0x48
	private string _maxExclusive; // 0x50
	private string _maxInclusive; // 0x58
	private string _minExclusive; // 0x60
	private string _minInclusive; // 0x68
	internal string _enumeration; // 0x70

	// Properties
	public string SimpleTypeQualifiedName { get; }

	// Methods

	// RVA: 0x103F064 Offset: 0x103B064 VA: 0x103F064
	internal void .ctor(string baseType) { }

	// RVA: 0x103F0F0 Offset: 0x103B0F0 VA: 0x103F0F0
	internal void .ctor(XmlSchemaSimpleType node) { }

	// RVA: 0x103FAA0 Offset: 0x103BAA0 VA: 0x103FAA0 Slot: 4
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x103F210 Offset: 0x103B210 VA: 0x103F210
	internal void LoadTypeValues(XmlSchemaSimpleType node) { }

	// RVA: 0x103FAD8 Offset: 0x103BAD8 VA: 0x103FAD8
	internal bool IsPlainString() { }

	// RVA: 0x103FC10 Offset: 0x103BC10 VA: 0x103FC10
	public string get_SimpleTypeQualifiedName() { }

	// RVA: 0x103FC80 Offset: 0x103BC80 VA: 0x103FC80
	internal string QualifiedName(string name) { }

	// RVA: 0x103FCFC Offset: 0x103BCFC VA: 0x103FCFC
	internal XmlNode ToNode(XmlDocument dc, Hashtable prefixes, bool inRemoting) { }

	// RVA: 0x1040168 Offset: 0x103C168 VA: 0x1040168
	internal static SimpleType CreateEnumeratedType(string values) { }

	// RVA: 0x10401E8 Offset: 0x103C1E8 VA: 0x10401E8
	internal static SimpleType CreateByteArrayType(string encoding) { }

	// RVA: 0x1040250 Offset: 0x103C250 VA: 0x1040250
	internal static SimpleType CreateLimitedStringType(int length) { }

	// RVA: 0x10402D0 Offset: 0x103C2D0 VA: 0x10402D0
	internal static SimpleType CreateSimpleType(StorageType typeCode, Type type) { }

	// RVA: 0x10403C0 Offset: 0x103C3C0 VA: 0x10403C0
	internal string HasConflictingDefinition(SimpleType otherSimpleType) { }

	// RVA: 0x10404C0 Offset: 0x103C4C0 VA: 0x10404C0
	internal bool CanHaveMaxLength() { }

	// RVA: 0x1040524 Offset: 0x103C524 VA: 0x1040524
	internal void ConvertToAnnonymousSimpleType() { }
}


// Namespace: System.Data
public class UniqueConstraint : Constraint // TypeDefIndex: 4036
{
	// Fields
	private DataKey _key; // 0x38
	private Index _constraintIndex; // 0x40
	internal bool _bPrimaryKey; // 0x48
	internal string _constraintName; // 0x50
	internal string[] _columnNames; // 0x58

	// Properties
	internal string[] ColumnNames { get; }
	[ReadOnly(True)]
	public virtual DataColumn[] Columns { get; }
	internal DataColumn[] ColumnsReference { get; }
	public bool IsPrimaryKey { get; }
	internal override bool InCollection { set; }
	[ReadOnly(True)]
	public override DataTable Table { get; }

	// Methods

	// RVA: 0x1040598 Offset: 0x103C598 VA: 0x1040598
	public void .ctor(DataColumn column) { }

	// RVA: 0x1040734 Offset: 0x103C734 VA: 0x1040734
	public void .ctor(string name, DataColumn[] columns) { }

	// RVA: 0x1040768 Offset: 0x103C768 VA: 0x1040768
	public void .ctor(DataColumn[] columns) { }

	[Browsable(False)]
	// RVA: 0x1040798 Offset: 0x103C798 VA: 0x1040798
	public void .ctor(string name, string[] columnNames, bool isPrimaryKey) { }

	// RVA: 0x10407D4 Offset: 0x103C7D4 VA: 0x10407D4
	public void .ctor(string name, DataColumn[] columns, bool isPrimaryKey) { }

	// RVA: 0x1040818 Offset: 0x103C818 VA: 0x1040818
	internal string[] get_ColumnNames() { }

	// RVA: 0x1040824 Offset: 0x103C824 VA: 0x1040824
	internal void ConstraintIndexClear() { }

	// RVA: 0x1040844 Offset: 0x103C844 VA: 0x1040844
	internal void ConstraintIndexInitialize() { }

	// RVA: 0x104087C Offset: 0x103C87C VA: 0x104087C Slot: 14
	internal override void CheckState() { }

	// RVA: 0x1040888 Offset: 0x103C888 VA: 0x1040888
	private void NonVirtualCheckState() { }

	// RVA: 0x1040894 Offset: 0x103C894 VA: 0x1040894 Slot: 11
	internal override void CheckCanAddToCollection(ConstraintCollection constraints) { }

	// RVA: 0x1040898 Offset: 0x103C898 VA: 0x1040898 Slot: 12
	internal override bool CanBeRemovedFromCollection(ConstraintCollection constraints, bool fThrowException) { }

	// RVA: 0x1040A04 Offset: 0x103CA04 VA: 0x1040A04 Slot: 8
	internal override bool CanEnableConstraint() { }

	// RVA: 0x1040A50 Offset: 0x103CA50 VA: 0x1040A50 Slot: 15
	internal override bool IsConstraintViolated() { }

	// RVA: 0x1040CB0 Offset: 0x103CCB0 VA: 0x1040CB0 Slot: 13
	internal override void CheckConstraint(DataRow row, DataRowAction action) { }

	// RVA: 0x1040DB0 Offset: 0x103CDB0 VA: 0x1040DB0 Slot: 7
	internal override bool ContainsColumn(DataColumn column) { }

	// RVA: 0x1040DBC Offset: 0x103CDBC VA: 0x1040DBC Slot: 9
	internal override Constraint Clone(DataSet destination) { }

	// RVA: 0x1040DCC Offset: 0x103CDCC VA: 0x1040DCC Slot: 10
	internal override Constraint Clone(DataSet destination, bool ignorNSforTableLookup) { }

	// RVA: 0x1041308 Offset: 0x103D308 VA: 0x1041308
	internal UniqueConstraint Clone(DataTable table) { }

	// RVA: 0x10417A8 Offset: 0x103D7A8 VA: 0x10417A8 Slot: 16
	public virtual DataColumn[] get_Columns() { }

	// RVA: 0x1040DA8 Offset: 0x103CDA8 VA: 0x1040DA8
	internal DataColumn[] get_ColumnsReference() { }

	// RVA: 0x10417B4 Offset: 0x103D7B4 VA: 0x10417B4
	public bool get_IsPrimaryKey() { }

	// RVA: 0x1040648 Offset: 0x103C648 VA: 0x1040648
	private void Create(string constraintName, DataColumn[] columns) { }

	// RVA: 0x10417F8 Offset: 0x103D7F8 VA: 0x10417F8 Slot: 0
	public override bool Equals(object key2) { }

	// RVA: 0x10418B0 Offset: 0x103D8B0 VA: 0x10418B0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x10418B8 Offset: 0x103D8B8 VA: 0x10418B8 Slot: 5
	internal override void set_InCollection(bool value) { }

	// RVA: 0x1041904 Offset: 0x103D904 VA: 0x1041904 Slot: 6
	public override DataTable get_Table() { }
}


// Namespace: 
private sealed class XDRSchema.NameType : IComparable // TypeDefIndex: 4037
{
	// Fields
	public string name; // 0x10
	public Type type; // 0x18

	// Methods

	// RVA: 0x1044CA0 Offset: 0x1040CA0 VA: 0x1044CA0
	public void .ctor(string n, Type t) { }

	// RVA: 0x1044CCC Offset: 0x1040CCC VA: 0x1044CCC Slot: 4
	public int CompareTo(object obj) { }
}


// Namespace: System.Data
internal sealed class XDRSchema : XMLSchema // TypeDefIndex: 4038
{
	// Fields
	internal string _schemaName; // 0x10
	internal string _schemaUri; // 0x18
	internal XmlElement _schemaRoot; // 0x20
	internal DataSet _ds; // 0x28
	private static readonly char[] s_colonArray; // 0x0
	private static XDRSchema.NameType[] s_mapNameTypeXdr; // 0x8
	private static XDRSchema.NameType s_enumerationNameType; // 0x10

	// Methods

	// RVA: 0x1041938 Offset: 0x103D938 VA: 0x1041938
	internal void .ctor(DataSet ds, bool fInline) { }

	// RVA: 0x10419A8 Offset: 0x103D9A8 VA: 0x10419A8
	internal void LoadSchema(XmlElement schemaRoot, DataSet ds) { }

	// RVA: 0x1041D78 Offset: 0x103DD78 VA: 0x1041D78
	internal XmlElement FindTypeNode(XmlElement node) { }

	// RVA: 0x10420C0 Offset: 0x103E0C0 VA: 0x10420C0
	internal bool IsTextOnlyContent(XmlElement node) { }

	// RVA: 0x1042290 Offset: 0x103E290 VA: 0x1042290
	internal bool IsXDRField(XmlElement node, XmlElement typeNode) { }

	// RVA: 0x1041BB8 Offset: 0x103DBB8 VA: 0x1041BB8
	internal DataTable HandleTable(XmlElement node) { }

	// RVA: 0x1042D00 Offset: 0x103ED00 VA: 0x1042D00
	private static XDRSchema.NameType FindNameType(string name) { }

	// RVA: 0x1042DD4 Offset: 0x103EDD4 VA: 0x1042DD4
	private Type ParseDataType(string dt, string dtValues) { }

	// RVA: 0x1042F10 Offset: 0x103EF10 VA: 0x1042F10
	internal string GetInstanceName(XmlElement node) { }

	// RVA: 0x1043090 Offset: 0x103F090 VA: 0x1043090
	internal void HandleColumn(XmlElement node, DataTable table) { }

	// RVA: 0x10423F0 Offset: 0x103E3F0 VA: 0x10423F0
	internal void GetMinMax(XmlElement elNode, ref int minOccurs, ref int maxOccurs) { }

	// RVA: 0x1043920 Offset: 0x103F920 VA: 0x1043920
	internal void GetMinMax(XmlElement elNode, bool isAttribute, ref int minOccurs, ref int maxOccurs) { }

	// RVA: 0x1043C58 Offset: 0x103FC58 VA: 0x1043C58
	internal void HandleTypeNode(XmlElement typeNode, DataTable table, ArrayList tableChildren) { }

	// RVA: 0x104262C Offset: 0x103E62C VA: 0x104262C
	internal DataTable InstantiateTable(DataSet dataSet, XmlElement node, XmlElement typeNode) { }

	// RVA: 0x1042400 Offset: 0x103E400 VA: 0x1042400
	internal DataTable InstantiateSimpleTable(DataSet dataSet, XmlElement node) { }

	// RVA: 0x1043E4C Offset: 0x103FE4C VA: 0x1043E4C
	private static void .cctor() { }
}


// Namespace: System.Data
internal sealed class XMLDiffLoader // TypeDefIndex: 4039
{
	// Fields
	private ArrayList _tables; // 0x10
	private DataSet _dataSet; // 0x18
	private DataTable _dataTable; // 0x20

	// Methods

	// RVA: 0x1044D3C Offset: 0x1040D3C VA: 0x1044D3C
	internal void LoadDiffGram(DataSet ds, XmlReader dataTextReader) { }

	// RVA: 0x1045558 Offset: 0x1041558 VA: 0x1045558
	private void CreateTablesHierarchy(DataTable dt) { }

	// RVA: 0x10458DC Offset: 0x10418DC VA: 0x10458DC
	internal void LoadDiffGram(DataTable dt, XmlReader dataTextReader) { }

	// RVA: 0x1044EE0 Offset: 0x1040EE0 VA: 0x1044EE0
	internal void ProcessDiffs(DataSet ds, XmlReader ssync) { }

	// RVA: 0x1045AD4 Offset: 0x1041AD4 VA: 0x1045AD4
	internal void ProcessDiffs(ArrayList tableList, XmlReader ssync) { }

	// RVA: 0x10451B8 Offset: 0x10411B8 VA: 0x10451B8
	internal void ProcessErrors(DataSet ds, XmlReader ssync) { }

	// RVA: 0x1045DA0 Offset: 0x1041DA0 VA: 0x1045DA0
	internal void ProcessErrors(ArrayList dt, XmlReader ssync) { }

	// RVA: 0x104716C Offset: 0x104316C VA: 0x104716C
	private DataTable GetTable(string tableName, string ns) { }

	// RVA: 0x10462B0 Offset: 0x10422B0 VA: 0x10462B0
	private int ReadOldRowData(DataSet ds, ref DataTable table, ref int pos, XmlReader row) { }

	// RVA: 0x1046250 Offset: 0x1042250 VA: 0x1046250
	internal void SkipWhitespaces(XmlReader reader) { }

	// RVA: 0x1047340 Offset: 0x1043340 VA: 0x1047340
	public void .ctor() { }
}


// Namespace: System.Data
internal class XMLSchema // TypeDefIndex: 4040
{
	// Methods

	// RVA: 0x1047348 Offset: 0x1043348 VA: 0x1047348
	internal static TypeConverter GetConverter(Type type) { }

	// RVA: 0x10473A0 Offset: 0x10433A0 VA: 0x10473A0
	internal static void SetProperties(object instance, XmlAttributeCollection attrs) { }

	// RVA: 0x10477EC Offset: 0x10437EC VA: 0x10477EC
	internal static bool FEqualIdentity(XmlNode node, string name, string ns) { }

	// RVA: 0x1047860 Offset: 0x1043860 VA: 0x1047860
	internal static bool GetBooleanAttribute(XmlElement element, string attrName, string attrNS, bool defVal) { }

	// RVA: 0x10479B0 Offset: 0x10439B0 VA: 0x10479B0
	internal static string GenUniqueColumnName(string proposedName, DataTable table) { }

	// RVA: 0x1047AD4 Offset: 0x1043AD4 VA: 0x1047AD4
	public void .ctor() { }
}


// Namespace: System.Data
internal sealed class ConstraintTable // TypeDefIndex: 4041
{
	// Fields
	public DataTable table; // 0x10
	public XmlSchemaIdentityConstraint constraint; // 0x18

	// Methods

	// RVA: 0x1047ADC Offset: 0x1043ADC VA: 0x1047ADC
	public void .ctor(DataTable t, XmlSchemaIdentityConstraint c) { }
}


// Namespace: 
private sealed class XSDSchema.NameType : IComparable // TypeDefIndex: 4042
{
	// Fields
	public readonly string name; // 0x10
	public readonly Type type; // 0x18

	// Methods

	// RVA: 0x10577DC Offset: 0x10537DC VA: 0x10577DC
	public void .ctor(string n, Type t) { }

	// RVA: 0x1057808 Offset: 0x1053808 VA: 0x1057808 Slot: 4
	public int CompareTo(object obj) { }
}


// Namespace: System.Data
internal sealed class XSDSchema : XMLSchema // TypeDefIndex: 4043
{
	// Fields
	private XmlSchemaSet _schemaSet; // 0x10
	private XmlSchemaElement _dsElement; // 0x18
	private DataSet _ds; // 0x20
	private string _schemaName; // 0x28
	private ArrayList _columnExpressions; // 0x30
	private Hashtable _constraintNodes; // 0x38
	private ArrayList _refTables; // 0x40
	private ArrayList _complexTypes; // 0x48
	private XmlSchemaObjectCollection _annotations; // 0x50
	private XmlSchemaObjectCollection _elements; // 0x58
	private Hashtable _attributes; // 0x60
	private Hashtable _elementsTable; // 0x68
	private Hashtable _attributeGroups; // 0x70
	private Hashtable _schemaTypes; // 0x78
	private Hashtable _expressions; // 0x80
	private Dictionary<DataTable, List<DataTable>> _tableDictionary; // 0x88
	private Hashtable _udSimpleTypes; // 0x90
	private Hashtable _existingSimpleTypeMap; // 0x98
	private bool _fromInference; // 0xA0
	private static readonly XSDSchema.NameType[] s_mapNameTypeXsd; // 0x0

	// Methods

	// RVA: 0x1047B08 Offset: 0x1043B08 VA: 0x1047B08
	private void CollectElementsAnnotations(XmlSchema schema) { }

	// RVA: 0x1047B90 Offset: 0x1043B90 VA: 0x1047B90
	private void CollectElementsAnnotations(XmlSchema schema, ArrayList schemaList) { }

	// RVA: 0x104863C Offset: 0x104463C VA: 0x104863C
	internal static string QualifiedName(string name) { }

	// RVA: 0x10486B8 Offset: 0x10446B8 VA: 0x10486B8
	internal static void SetProperties(object instance, XmlAttribute[] attrs) { }

	// RVA: 0x1048C1C Offset: 0x1044C1C VA: 0x1048C1C
	private static void SetExtProperties(object instance, XmlAttribute[] attrs) { }

	// RVA: 0x1048FAC Offset: 0x1044FAC VA: 0x1048FAC
	private void HandleColumnExpression(object instance, XmlAttribute[] attrs) { }

	// RVA: 0x1048524 Offset: 0x1044524 VA: 0x1048524
	internal static string GetMsdataAttribute(XmlSchemaAnnotated node, string ln) { }

	// RVA: 0x1049198 Offset: 0x1045198 VA: 0x1049198
	private static void SetExtProperties(object instance, XmlAttributeCollection attrs) { }

	// RVA: 0x10493DC Offset: 0x10453DC VA: 0x10493DC
	internal void HandleRefTableProperties(ArrayList RefTables, XmlSchemaElement element) { }

	// RVA: 0x1049598 Offset: 0x1045598 VA: 0x1049598
	internal void HandleRelation(XmlElement node, bool fNested) { }

	// RVA: 0x1049D80 Offset: 0x1045D80 VA: 0x1049D80
	private bool HasAttributes(XmlSchemaObjectCollection attributes) { }

	// RVA: 0x104A000 Offset: 0x1046000 VA: 0x104A000
	private bool IsDatasetParticle(XmlSchemaParticle pt) { }

	// RVA: 0x104AA08 Offset: 0x1046A08 VA: 0x104AA08
	private int DatasetElementCount(XmlSchemaObjectCollection elements) { }

	// RVA: 0x104ADA0 Offset: 0x1046DA0 VA: 0x104ADA0
	private XmlSchemaElement FindDatasetElement(XmlSchemaObjectCollection elements) { }

	// RVA: 0x104B37C Offset: 0x104737C VA: 0x104B37C
	public void LoadSchema(XmlSchemaSet schemaSet, DataTable dt) { }

	// RVA: 0x104B3A0 Offset: 0x10473A0 VA: 0x104B3A0
	public void LoadSchema(XmlSchemaSet schemaSet, DataSet ds) { }

	// RVA: 0x104E978 Offset: 0x104A978 VA: 0x104E978
	private void HandleRelations(XmlSchemaAnnotation ann, bool fNested) { }

	// RVA: 0x104A5AC Offset: 0x10465AC VA: 0x104A5AC
	internal XmlSchemaObjectCollection GetParticleItems(XmlSchemaParticle pt) { }

	// RVA: 0x104ECA0 Offset: 0x104ACA0 VA: 0x104ECA0
	internal void HandleParticle(XmlSchemaParticle pt, DataTable table, ArrayList tableChildren, bool isBase) { }

	// RVA: 0x1050354 Offset: 0x104C354 VA: 0x1050354
	internal void HandleAttributes(XmlSchemaObjectCollection attributes, DataTable table, bool isBase) { }

	// RVA: 0x1050FF8 Offset: 0x104CFF8 VA: 0x1050FF8
	private void HandleAttributeGroup(XmlSchemaAttributeGroup attributeGroup, DataTable table, bool isBase) { }

	// RVA: 0x10513E0 Offset: 0x104D3E0 VA: 0x10513E0
	internal void HandleComplexType(XmlSchemaComplexType ct, DataTable table, ArrayList tableChildren, bool isNillable) { }

	// RVA: 0x104B268 Offset: 0x1047268 VA: 0x104B268
	internal XmlSchemaParticle GetParticle(XmlSchemaComplexType ct) { }

	// RVA: 0x1052AB8 Offset: 0x104EAB8 VA: 0x1052AB8
	internal DataColumn FindField(DataTable table, string field) { }

	// RVA: 0x1052C10 Offset: 0x104EC10 VA: 0x1052C10
	internal DataColumn[] BuildKey(XmlSchemaIdentityConstraint keyNode, DataTable table) { }

	// RVA: 0x104AC48 Offset: 0x1046C48 VA: 0x104AC48
	internal bool GetBooleanAttribute(XmlSchemaAnnotated element, string attrName, bool defVal) { }

	// RVA: 0x104D37C Offset: 0x104937C VA: 0x104D37C
	internal string GetStringAttribute(XmlSchemaAnnotated element, string attrName, string defVal) { }

	// RVA: 0x1052EE4 Offset: 0x104EEE4 VA: 0x1052EE4
	internal static AcceptRejectRule TranslateAcceptRejectRule(string strRule) { }

	// RVA: 0x1052F68 Offset: 0x104EF68 VA: 0x1052F68
	internal static Rule TranslateRule(string strRule) { }

	// RVA: 0x1053054 Offset: 0x104F054 VA: 0x1053054
	internal void HandleKeyref(XmlSchemaKeyref keyref) { }

	// RVA: 0x10538BC Offset: 0x104F8BC VA: 0x10538BC
	internal void HandleConstraint(XmlSchemaIdentityConstraint keyNode) { }

	// RVA: 0x1053CF4 Offset: 0x104FCF4 VA: 0x1053CF4
	internal DataTable InstantiateSimpleTable(XmlSchemaElement node) { }

	// RVA: 0x10494C0 Offset: 0x10454C0 VA: 0x10494C0
	internal string GetInstanceName(XmlSchemaAnnotated node) { }

	// RVA: 0x1054848 Offset: 0x1050848 VA: 0x1054848
	internal DataTable InstantiateTable(XmlSchemaElement node, XmlSchemaComplexType typeNode, bool isRef) { }

	// RVA: 0x1055E64 Offset: 0x1051E64 VA: 0x1055E64
	public static Type XsdtoClr(string xsdTypeName) { }

	// RVA: 0x1055F40 Offset: 0x1051F40 VA: 0x1055F40
	private static XSDSchema.NameType FindNameType(string name) { }

	// RVA: 0x1056014 Offset: 0x1052014 VA: 0x1056014
	private Type ParseDataType(string dt) { }

	// RVA: 0x105617C Offset: 0x105217C VA: 0x105617C
	internal static bool IsXsdType(string name) { }

	// RVA: 0x104D400 Offset: 0x1049400 VA: 0x104D400
	internal XmlSchemaAnnotated FindTypeNode(XmlSchemaAnnotated node) { }

	// RVA: 0x1052130 Offset: 0x104E130 VA: 0x1052130
	internal void HandleSimpleTypeSimpleContentColumn(XmlSchemaSimpleType typeNode, string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable) { }

	// RVA: 0x10519B4 Offset: 0x104D9B4 VA: 0x10519B4
	internal void HandleSimpleContentColumn(string strType, DataTable table, bool isBase, XmlAttribute[] attrs, bool isNillable) { }

	// RVA: 0x1050650 Offset: 0x104C650 VA: 0x1050650
	internal void HandleAttributeColumn(XmlSchemaAttribute attrib, DataTable table, bool isBase) { }

	// RVA: 0x104F660 Offset: 0x104B660 VA: 0x104F660
	internal void HandleElementColumn(XmlSchemaElement elem, DataTable table, bool isBase) { }

	// RVA: 0x104D824 Offset: 0x1049824 VA: 0x104D824
	internal void HandleDataSet(XmlSchemaElement node, bool isNewDataSet) { }

	// RVA: 0x10561EC Offset: 0x10521EC VA: 0x10561EC
	private void AddTablesToList(List<DataTable> tableList, DataTable dt) { }

	// RVA: 0x1054438 Offset: 0x1050438 VA: 0x1054438
	private string GetPrefix(string ns) { }

	// RVA: 0x1056318 Offset: 0x1052318 VA: 0x1056318
	private string GetNamespaceFromPrefix(string prefix) { }

	// RVA: 0x1055CD4 Offset: 0x1051CD4 VA: 0x1055CD4
	private string GetTableNamespace(XmlSchemaIdentityConstraint key) { }

	// RVA: 0x10537A4 Offset: 0x104F7A4 VA: 0x10537A4
	private string GetTableName(XmlSchemaIdentityConstraint key) { }

	// RVA: 0x104A79C Offset: 0x104679C VA: 0x104A79C
	internal bool IsTable(XmlSchemaElement node) { }

	// RVA: 0x104D6AC Offset: 0x10496AC VA: 0x104D6AC
	internal DataTable HandleTable(XmlSchemaElement node) { }

	// RVA: 0x1056730 Offset: 0x1052730 VA: 0x1056730
	public void .ctor() { }

	// RVA: 0x1056738 Offset: 0x1052738 VA: 0x1056738
	private static void .cctor() { }
}


// Namespace: System.Data
internal sealed class XmlIgnoreNamespaceReader : XmlNodeReader // TypeDefIndex: 4044
{
	// Fields
	private List<string> _namespacesToIgnore; // 0x30

	// Methods

	// RVA: 0x1057878 Offset: 0x1053878 VA: 0x1057878
	internal void .ctor(XmlDocument xdoc, string[] namespacesToIgnore) { }

	// RVA: 0x1057910 Offset: 0x1053910 VA: 0x1057910 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x1057A20 Offset: 0x1053A20 VA: 0x1057A20 Slot: 28
	public override bool MoveToNextAttribute() { }
}


// Namespace: System.Data
internal sealed class XmlDataLoader // TypeDefIndex: 4045
{
	// Fields
	private DataSet _dataSet; // 0x10
	private XmlToDatasetMap _nodeToSchemaMap; // 0x18
	private Hashtable _nodeToRowMap; // 0x20
	private Stack _childRowsStack; // 0x28
	private Hashtable _htableExcludedNS; // 0x30
	private bool _fIsXdr; // 0x38
	internal bool _isDiffgram; // 0x39
	private XmlElement _topMostNode; // 0x40
	private bool _ignoreSchema; // 0x48
	private DataTable _dataTable; // 0x50
	private bool _isTableLevel; // 0x58
	private bool _fromInference; // 0x59
	private XmlReader _dataReader; // 0x60
	private object _XSD_XMLNS_NS; // 0x68
	private object _XDR_SCHEMA; // 0x70
	private object _XDRNS; // 0x78
	private object _SQL_SYNC; // 0x80
	private object _UPDGNS; // 0x88
	private object _XSD_SCHEMA; // 0x90
	private object _XSDNS; // 0x98
	private object _DFFNS; // 0xA0
	private object _MSDNS; // 0xA8
	private object _DIFFID; // 0xB0
	private object _HASCHANGES; // 0xB8
	private object _ROWORDER; // 0xC0

	// Methods

	// RVA: 0x1057B2C Offset: 0x1053B2C VA: 0x1057B2C
	internal void .ctor(DataSet dataset, bool IsXdr, bool ignoreSchema) { }

	// RVA: 0x1057BC0 Offset: 0x1053BC0 VA: 0x1057BC0
	internal void .ctor(DataSet dataset, bool IsXdr, XmlElement topNode, bool ignoreSchema) { }

	// RVA: 0x1057C94 Offset: 0x1053C94 VA: 0x1057C94
	internal void .ctor(DataTable datatable, bool IsXdr, bool ignoreSchema) { }

	// RVA: 0x1057D34 Offset: 0x1053D34 VA: 0x1057D34
	internal void .ctor(DataTable datatable, bool IsXdr, XmlElement topNode, bool ignoreSchema) { }

	// RVA: 0x1057E14 Offset: 0x1053E14 VA: 0x1057E14
	private void AttachRows(DataRow parentRow, XmlNode parentElement) { }

	// RVA: 0x1058008 Offset: 0x1054008 VA: 0x1058008
	private int CountNonNSAttributes(XmlNode node) { }

	// RVA: 0x1058188 Offset: 0x1054188 VA: 0x1058188
	private string GetValueForTextOnlyColums(XmlNode n) { }

	// RVA: 0x10583AC Offset: 0x10543AC VA: 0x10583AC
	private string GetInitialTextFromNodes(ref XmlNode n) { }

	// RVA: 0x1058588 Offset: 0x1054588 VA: 0x1058588
	private DataColumn GetTextOnlyColumn(DataRow row) { }

	// RVA: 0x1057F70 Offset: 0x1053F70 VA: 0x1057F70
	internal DataRow GetRowFromElement(XmlElement e) { }

	// RVA: 0x1058624 Offset: 0x1054624 VA: 0x1058624
	internal bool FColumnElement(XmlElement e) { }

	// RVA: 0x10580FC Offset: 0x10540FC VA: 0x10580FC
	private bool FExcludedNamespace(string ns) { }

	// RVA: 0x105870C Offset: 0x105470C VA: 0x105870C
	private bool FIgnoreNamespace(XmlNode node) { }

	// RVA: 0x10589D0 Offset: 0x10549D0 VA: 0x10589D0
	private bool FIgnoreNamespace(XmlReader node) { }

	// RVA: 0x1058358 Offset: 0x1054358 VA: 0x1058358
	internal bool IsTextLikeNode(XmlNodeType n) { }

	// RVA: 0x1058604 Offset: 0x1054604 VA: 0x1058604
	internal bool IsTextOnly(DataColumn c) { }

	// RVA: 0x1058A58 Offset: 0x1054A58 VA: 0x1058A58
	internal void LoadData(XmlDocument xdoc) { }

	// RVA: 0x1058E9C Offset: 0x1054E9C VA: 0x1058E9C
	private void LoadRowData(DataRow row, XmlElement rowElement) { }

	// RVA: 0x1059AF8 Offset: 0x1055AF8 VA: 0x1059AF8
	private void LoadRows(DataRow parentRow, XmlNode parentElement) { }

	// RVA: 0x1059E38 Offset: 0x1055E38 VA: 0x1059E38
	private void SetRowValueFromXmlText(DataRow row, DataColumn col, string xmlText) { }

	// RVA: 0x1059EA0 Offset: 0x1055EA0 VA: 0x1059EA0
	private void InitNameTable() { }

	// RVA: 0x105A11C Offset: 0x105611C VA: 0x105A11C
	internal void LoadData(XmlReader reader) { }

	// RVA: 0x105A49C Offset: 0x105649C VA: 0x105A49C
	private void LoadTopMostTable(DataTable table) { }

	// RVA: 0x105B090 Offset: 0x1057090 VA: 0x105B090
	private void LoadTable(DataTable table, bool isNested) { }

	// RVA: 0x105BE80 Offset: 0x1057E80 VA: 0x105BE80
	private void LoadColumn(DataColumn column, object[] foundColumns) { }

	// RVA: 0x105AE7C Offset: 0x1056E7C VA: 0x105AE7C
	private bool ProcessXsdSchema() { }
}


// Namespace: System.Data
public enum XmlReadMode // TypeDefIndex: 4046
{
	// Fields
	public int value__; // 0x0
	public const XmlReadMode Auto = 0;
	public const XmlReadMode ReadSchema = 1;
	public const XmlReadMode IgnoreSchema = 2;
	public const XmlReadMode InferSchema = 3;
	public const XmlReadMode DiffGram = 4;
	public const XmlReadMode Fragment = 5;
	public const XmlReadMode InferTypedSchema = 6;
}


// Namespace: 
private sealed class XmlToDatasetMap.XmlNodeIdentety // TypeDefIndex: 4047
{
	// Fields
	public string LocalName; // 0x10
	public string NamespaceURI; // 0x18

	// Methods

	// RVA: 0x105F24C Offset: 0x105B24C VA: 0x105F24C
	public void .ctor(string localName, string namespaceURI) { }

	// RVA: 0x105F278 Offset: 0x105B278 VA: 0x105F278 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x105F298 Offset: 0x105B298 VA: 0x105F298 Slot: 0
	public override bool Equals(object obj) { }
}


// Namespace: 
[DefaultMember("Item")]
internal sealed class XmlToDatasetMap.XmlNodeIdHashtable : Hashtable // TypeDefIndex: 4048
{
	// Fields
	private XmlToDatasetMap.XmlNodeIdentety _id; // 0x50

	// Properties
	public object Item { get; }
	public object Item { get; }
	public object Item { get; }
	public object Item { get; }

	// Methods

	// RVA: 0x105F334 Offset: 0x105B334 VA: 0x105F334
	public void .ctor(int capacity) { }

	// RVA: 0x105F3C8 Offset: 0x105B3C8 VA: 0x105F3C8
	public object get_Item(XmlNode node) { }

	// RVA: 0x105F440 Offset: 0x105B440 VA: 0x105F440
	public object get_Item(XmlReader dataReader) { }

	// RVA: 0x105F4B0 Offset: 0x105B4B0 VA: 0x105F4B0
	public object get_Item(DataTable table) { }

	// RVA: 0x105F518 Offset: 0x105B518 VA: 0x105F518
	public object get_Item(string name) { }
}


// Namespace: 
private sealed class XmlToDatasetMap.TableSchemaInfo // TypeDefIndex: 4049
{
	// Fields
	public DataTable TableSchema; // 0x10
	public XmlToDatasetMap.XmlNodeIdHashtable ColumnsSchemaMap; // 0x18

	// Methods

	// RVA: 0x105F58C Offset: 0x105B58C VA: 0x105F58C
	public void .ctor(DataTable tableSchema) { }
}


// Namespace: System.Data
internal sealed class XmlToDatasetMap // TypeDefIndex: 4050
{
	// Fields
	private XmlToDatasetMap.XmlNodeIdHashtable _tableSchemaMap; // 0x10
	private XmlToDatasetMap.TableSchemaInfo _lastTableSchemaInfo; // 0x18

	// Methods

	// RVA: 0x1058D78 Offset: 0x1054D78 VA: 0x1058D78
	public void .ctor(DataSet dataSet, XmlNameTable nameTable) { }

	// RVA: 0x105A434 Offset: 0x1056434 VA: 0x105A434
	public void .ctor(XmlNameTable nameTable, DataSet dataSet) { }

	// RVA: 0x1058D44 Offset: 0x1054D44 VA: 0x1058D44
	public void .ctor(DataTable dataTable, XmlNameTable nameTable) { }

	// RVA: 0x105A468 Offset: 0x1056468 VA: 0x105A468
	public void .ctor(XmlNameTable nameTable, DataTable dataTable) { }

	// RVA: 0x1059E80 Offset: 0x1055E80 VA: 0x1059E80
	internal static bool IsMappedColumn(DataColumn c) { }

	// RVA: 0x105E718 Offset: 0x105A718 VA: 0x105E718
	private XmlToDatasetMap.TableSchemaInfo AddTableSchema(DataTable table, XmlNameTable nameTable) { }

	// RVA: 0x105E840 Offset: 0x105A840 VA: 0x105E840
	private XmlToDatasetMap.TableSchemaInfo AddTableSchema(XmlNameTable nameTable, DataTable table) { }

	// RVA: 0x105E9B8 Offset: 0x105A9B8 VA: 0x105E9B8
	private bool AddColumnSchema(DataColumn col, XmlNameTable nameTable, XmlToDatasetMap.XmlNodeIdHashtable columns) { }

	// RVA: 0x105EC50 Offset: 0x105AC50 VA: 0x105EC50
	private bool AddColumnSchema(XmlNameTable nameTable, DataColumn col, XmlToDatasetMap.XmlNodeIdHashtable columns) { }

	// RVA: 0x105C7A4 Offset: 0x10587A4 VA: 0x105C7A4
	private void BuildIdentityMap(DataSet dataSet, XmlNameTable nameTable) { }

	// RVA: 0x105CDB0 Offset: 0x1058DB0 VA: 0x105CDB0
	private void BuildIdentityMap(XmlNameTable nameTable, DataSet dataSet) { }

	// RVA: 0x105D8D8 Offset: 0x10598D8 VA: 0x105D8D8
	private void BuildIdentityMap(DataTable dataTable, XmlNameTable nameTable) { }

	// RVA: 0x105DC24 Offset: 0x1059C24 VA: 0x105DC24
	private void BuildIdentityMap(XmlNameTable nameTable, DataTable dataTable) { }

	// RVA: 0x105EE00 Offset: 0x105AE00 VA: 0x105EE00
	private ArrayList GetSelfAndDescendants(DataTable dt) { }

	// RVA: 0x10587EC Offset: 0x10547EC VA: 0x10587EC
	public object GetColumnSchema(XmlNode node, bool fIgnoreNamespace) { }

	// RVA: 0x105BD54 Offset: 0x1057D54 VA: 0x105BD54
	public object GetColumnSchema(DataTable table, XmlReader dataReader, bool fIgnoreNamespace) { }

	// RVA: 0x1058DAC Offset: 0x1054DAC VA: 0x1058DAC
	public object GetSchemaForNode(XmlNode node, bool fIgnoreNamespace) { }

	// RVA: 0x105ADBC Offset: 0x1056DBC VA: 0x105ADBC
	public DataTable GetTableForNode(XmlReader node, bool fIgnoreNamespace) { }

	// RVA: 0x105EAF0 Offset: 0x105AAF0 VA: 0x105EAF0
	private void HandleSpecialColumn(DataColumn col, XmlNameTable nameTable, XmlToDatasetMap.XmlNodeIdHashtable columns) { }
}


// Namespace: System.Data
public enum XmlWriteMode // TypeDefIndex: 4051
{
	// Fields
	public int value__; // 0x0
	public const XmlWriteMode WriteSchema = 0;
	public const XmlWriteMode IgnoreSchema = 1;
	public const XmlWriteMode DiffGram = 2;
}


// Namespace: System.Data
internal enum SchemaFormat // TypeDefIndex: 4052
{
	// Fields
	public int value__; // 0x0
	public const SchemaFormat Public = 1;
	public const SchemaFormat Remoting = 2;
	public const SchemaFormat WebService = 3;
	public const SchemaFormat RemotingSkipSchema = 4;
	public const SchemaFormat WebServiceSkipSchema = 5;
}


// Namespace: System.Data
internal sealed class XmlTreeGen // TypeDefIndex: 4053
{
	// Fields
	private ArrayList _constraintNames; // 0x10
	private Hashtable _namespaces; // 0x18
	private Hashtable _autogenerated; // 0x20
	private Hashtable _prefixes; // 0x28
	private DataSet _ds; // 0x30
	private ArrayList _tables; // 0x38
	private ArrayList _relations; // 0x40
	private XmlDocument _dc; // 0x48
	private XmlElement _sRoot; // 0x50
	private int _prefixCount; // 0x58
	private SchemaFormat _schFormat; // 0x5C
	private string _filePath; // 0x60
	private string _fileName; // 0x68
	private string _fileExt; // 0x70
	private XmlElement _dsElement; // 0x78
	private XmlElement _constraintSeparator; // 0x80
	private Converter<Type, string> _targetConverter; // 0x88

	// Methods

	// RVA: 0x105F61C Offset: 0x105B61C VA: 0x105F61C
	internal void .ctor(SchemaFormat format) { }

	// RVA: 0x105F6B0 Offset: 0x105B6B0 VA: 0x105F6B0
	internal static void AddExtendedProperties(PropertyCollection props, XmlElement node) { }

	// RVA: 0x105F6B8 Offset: 0x105B6B8 VA: 0x105F6B8
	internal static void AddExtendedProperties(PropertyCollection props, XmlElement node, Type type) { }

	// RVA: 0x105FE2C Offset: 0x105BE2C VA: 0x105FE2C
	internal void AddXdoProperties(object instance, XmlElement root, XmlDocument xd) { }

	// RVA: 0x105FFDC Offset: 0x105BFDC VA: 0x105FFDC
	internal void AddXdoProperty(PropertyDescriptor pd, object instance, XmlElement root, XmlDocument xd) { }

	// RVA: 0x1060908 Offset: 0x105C908 VA: 0x1060908
	internal static string XmlDataTypeName(Type type) { }

	// RVA: 0x10617D0 Offset: 0x105D7D0 VA: 0x10617D0
	private void GenerateConstraintNames(DataTable table, bool fromTable) { }

	// RVA: 0x1061CBC Offset: 0x105DCBC VA: 0x1061CBC
	private void GenerateConstraintNames(ArrayList tables) { }

	// RVA: 0x1061DB4 Offset: 0x105DDB4 VA: 0x1061DB4
	private void GenerateConstraintNames(DataSet ds) { }

	// RVA: 0x1062098 Offset: 0x105E098 VA: 0x1062098
	private static bool _PropsNotEmpty(PropertyCollection props) { }

	// RVA: 0x10620C0 Offset: 0x105E0C0 VA: 0x10620C0
	private bool HaveExtendedProperties(DataSet ds) { }

	// RVA: 0x1062244 Offset: 0x105E244 VA: 0x1062244
	internal void WriteSchemaRoot(XmlDocument xd, XmlElement rootSchema, string targetNamespace) { }

	// RVA: 0x10624A8 Offset: 0x105E4A8 VA: 0x10624A8
	internal static void ValidateColumnMapping(Type columnType) { }

	// RVA: 0x1062530 Offset: 0x105E530 VA: 0x1062530
	internal void SetupAutoGenerated(DataSet ds) { }

	// RVA: 0x1063248 Offset: 0x105F248 VA: 0x1063248
	internal void SetupAutoGenerated(ArrayList dt) { }

	// RVA: 0x1062810 Offset: 0x105E810 VA: 0x1062810
	internal void SetupAutoGenerated(DataTable dt) { }

	// RVA: 0x1063978 Offset: 0x105F978 VA: 0x1063978
	private void CreateTablesHierarchy(DataTable dt) { }

	// RVA: 0x1063CFC Offset: 0x105FCFC VA: 0x1063CFC
	private void CreateRelations(DataTable dt) { }

	// RVA: 0x1064054 Offset: 0x1060054 VA: 0x1064054
	private DataTable[] CreateToplevelTables() { }

	// RVA: 0x106430C Offset: 0x106030C VA: 0x106430C
	internal void SchemaTree(XmlDocument xd, XmlWriter xmlWriter, DataSet ds, DataTable dt, bool writeHierarchy) { }

	// RVA: 0x10675B0 Offset: 0x10635B0 VA: 0x10675B0
	internal XmlElement SchemaTree(XmlDocument xd, DataTable dt) { }

	// RVA: 0x106692C Offset: 0x106292C VA: 0x106692C
	internal XmlElement FillDataSetElement(XmlDocument xd, DataSet ds, DataTable dt) { }

	// RVA: 0x106A294 Offset: 0x1066294 VA: 0x106A294
	internal void SetPath(XmlWriter xw) { }

	// RVA: 0x106A4F0 Offset: 0x10664F0 VA: 0x106A4F0
	internal void Save(DataSet ds, XmlWriter xw) { }

	// RVA: 0x106A510 Offset: 0x1066510 VA: 0x106A510
	internal void Save(DataTable dt, XmlWriter xw) { }

	// RVA: 0x106A504 Offset: 0x1066504 VA: 0x106A504
	internal void Save(DataSet ds, DataTable dt, XmlWriter xw) { }

	// RVA: 0x106A5D0 Offset: 0x10665D0 VA: 0x106A5D0
	internal void Save(DataSet ds, DataTable dt, XmlWriter xw, bool writeHierarchy) { }

	// RVA: 0x106A5DC Offset: 0x10665DC VA: 0x106A5DC
	internal void Save(DataSet ds, DataTable dt, XmlWriter xw, bool writeHierarchy, Converter<Type, string> multipleTargetConverter) { }

	// RVA: 0x1066FEC Offset: 0x1062FEC VA: 0x1066FEC
	internal XmlElement HandleRelation(DataRelation rel, XmlDocument dc) { }

	// RVA: 0x106A72C Offset: 0x106672C VA: 0x106A72C
	private static XmlElement FindSimpleType(XmlElement schema, string name) { }

	// RVA: 0x106A820 Offset: 0x1066820 VA: 0x106A820
	internal XmlElement GetSchema(string NamespaceURI) { }

	// RVA: 0x106AAB4 Offset: 0x1066AB4 VA: 0x106AAB4
	internal void HandleColumnType(DataColumn col, XmlDocument dc, XmlElement root, XmlElement schema) { }

	// RVA: 0x106AF14 Offset: 0x1066F14 VA: 0x106AF14
	internal void AddColumnProperties(DataColumn col, XmlElement root) { }

	// RVA: 0x106B520 Offset: 0x1067520 VA: 0x106B520
	private string FindTargetNamespace(DataTable table) { }

	// RVA: 0x106B630 Offset: 0x1067630 VA: 0x106B630
	internal XmlElement HandleColumn(DataColumn col, XmlDocument dc, XmlElement schema, bool fWriteOrdinal) { }

	// RVA: 0x106C2A4 Offset: 0x10682A4 VA: 0x106C2A4
	internal static string TranslateAcceptRejectRule(AcceptRejectRule rule) { }

	// RVA: 0x106C314 Offset: 0x1068314 VA: 0x106C314
	internal static string TranslateRule(Rule rule) { }

	// RVA: 0x1066F34 Offset: 0x1062F34 VA: 0x1066F34
	internal void AppendChildWithoutRef(XmlElement node, string Namespace, XmlElement el, string refString) { }

	// RVA: 0x106C0DC Offset: 0x10680DC VA: 0x106C0DC
	internal XmlElement FindTypeNode(XmlElement node, string strType) { }

	// RVA: 0x1066F2C Offset: 0x1062F2C VA: 0x1066F2C
	internal XmlElement HandleTable(DataTable table, XmlDocument dc, XmlElement schema) { }

	// RVA: 0x106C3CC Offset: 0x10683CC VA: 0x106C3CC
	private bool HasMixedColumns(DataTable table) { }

	// RVA: 0x106333C Offset: 0x105F33C VA: 0x106333C
	internal static bool AutoGenerated(DataColumn col) { }

	// RVA: 0x106C718 Offset: 0x1068718 VA: 0x106C718
	internal static bool AutoGenerated(DataRelation rel) { }

	// RVA: 0x10638B0 Offset: 0x105F8B0 VA: 0x10638B0
	internal static bool AutoGenerated(UniqueConstraint unique) { }

	// RVA: 0x10638A4 Offset: 0x105F8A4 VA: 0x10638A4
	private bool AutoGenerated(ForeignKeyConstraint fk) { }

	// RVA: 0x106C7FC Offset: 0x10687FC VA: 0x106C7FC
	internal static bool AutoGenerated(ForeignKeyConstraint fk, bool checkRelation) { }

	// RVA: 0x106C924 Offset: 0x1068924 VA: 0x106C924
	private bool IsAutoGenerated(object o) { }

	// RVA: 0x10679FC Offset: 0x10639FC VA: 0x10679FC
	internal XmlElement HandleTable(DataTable table, XmlDocument dc, XmlElement schema, bool genNested) { }

	// RVA: 0x10615EC Offset: 0x105D5EC VA: 0x10615EC
	private void SetMSDataAttribute(XmlElement root, Type type) { }
}


// Namespace: System.Data
internal sealed class NewDiffgramGen // TypeDefIndex: 4054
{
	// Fields
	internal XmlDocument _doc; // 0x10
	internal DataSet _ds; // 0x18
	internal DataTable _dt; // 0x20
	internal XmlWriter _xmlw; // 0x28
	private bool _fBefore; // 0x30
	private bool _fErrors; // 0x31
	internal Hashtable _rowsOrder; // 0x38
	private ArrayList _tables; // 0x40
	private bool _writeHierarchy; // 0x48

	// Methods

	// RVA: 0x106C9D0 Offset: 0x10689D0 VA: 0x106C9D0
	internal void .ctor(DataSet ds) { }

	// RVA: 0x106CD44 Offset: 0x1068D44 VA: 0x106CD44
	internal void .ctor(DataTable dt, bool writeHierarchy) { }

	// RVA: 0x106CE30 Offset: 0x1068E30 VA: 0x106CE30
	private void CreateTableHierarchy(DataTable dt) { }

	// RVA: 0x106CAE0 Offset: 0x1068AE0 VA: 0x106CAE0
	private void DoAssignments(ArrayList tables) { }

	// RVA: 0x106D1B4 Offset: 0x10691B4 VA: 0x106D1B4
	private bool EmptyData() { }

	// RVA: 0x106D2A8 Offset: 0x10692A8 VA: 0x106D2A8
	internal void Save(XmlWriter xmlw) { }

	// RVA: 0x106D2B0 Offset: 0x10692B0 VA: 0x106D2B0
	internal void Save(XmlWriter xmlw, DataTable table) { }

	// RVA: 0x106E238 Offset: 0x106A238 VA: 0x106E238
	private void GenerateTable(DataTable table) { }

	// RVA: 0x106E2B4 Offset: 0x106A2B4 VA: 0x106E2B4
	private void GenerateTableErrors(DataTable table) { }

	// RVA: 0x106E7F4 Offset: 0x106A7F4 VA: 0x106E7F4
	private void GenerateRow(DataRow row) { }

	// RVA: 0x106EE38 Offset: 0x106AE38 VA: 0x106EE38
	private void GenerateColumn(DataRow row, DataColumn col, DataRowVersion version) { }

	// RVA: 0x106C968 Offset: 0x1068968 VA: 0x106C968
	internal static string QualifiedName(string prefix, string name) { }
}


// Namespace: System.Data
internal sealed class XmlDataTreeWriter // TypeDefIndex: 4055
{
	// Fields
	private XmlWriter _xmlw; // 0x10
	private DataSet _ds; // 0x18
	private DataTable _dt; // 0x20
	private ArrayList _dTables; // 0x28
	private DataTable[] _topLevelTables; // 0x30
	private bool _fFromTable; // 0x38
	private bool _isDiffgram; // 0x39
	private Hashtable _rowsOrder; // 0x40
	private bool _writeHierarchy; // 0x48

	// Methods

	// RVA: 0x106DEF4 Offset: 0x1069EF4 VA: 0x106DEF4
	internal void .ctor(DataSet ds) { }

	// RVA: 0x106D6FC Offset: 0x10696FC VA: 0x106D6FC
	internal void .ctor(DataTable dt, bool writeHierarchy) { }

	// RVA: 0x106FC5C Offset: 0x106BC5C VA: 0x106FC5C
	private DataTable[] CreateToplevelTables() { }

	// RVA: 0x106F8D8 Offset: 0x106B8D8 VA: 0x106F8D8
	private void CreateTablesHierarchy(DataTable dt) { }

	// RVA: 0x106ED70 Offset: 0x106AD70 VA: 0x106ED70
	internal static bool RowHasErrors(DataRow row) { }

	// RVA: 0x106D84C Offset: 0x106984C VA: 0x106D84C
	internal void SaveDiffgramData(XmlWriter xw, Hashtable rowsOrder) { }

	// RVA: 0x1071840 Offset: 0x106D840 VA: 0x1071840
	internal void Save(XmlWriter xw, bool writeSchema) { }

	// RVA: 0x1072114 Offset: 0x106E114 VA: 0x1072114
	private ArrayList GetNestedChildRelations(DataRow row) { }

	// RVA: 0x106FF14 Offset: 0x106BF14 VA: 0x106FF14
	internal void XmlDataRowWriter(DataRow row, string encodedTableName) { }

	// RVA: 0x106F81C Offset: 0x106B81C VA: 0x106F81C
	internal static bool PreserveSpace(object value) { }
}


// Namespace: System.Data
internal sealed class DataTextWriter : XmlWriter // TypeDefIndex: 4056
{
	// Fields
	private XmlWriter _xmltextWriter; // 0x18

	// Properties
	internal Stream BaseStream { get; }
	public override WriteState WriteState { get; }

	// Methods

	// RVA: 0x106D6A0 Offset: 0x10696A0 VA: 0x106D6A0
	internal static XmlWriter CreateWriter(XmlWriter xw) { }

	// RVA: 0x107245C Offset: 0x106E45C VA: 0x107245C
	private void .ctor(XmlWriter w) { }

	// RVA: 0x106A45C Offset: 0x106645C VA: 0x106A45C
	internal Stream get_BaseStream() { }

	// RVA: 0x1072484 Offset: 0x106E484 VA: 0x1072484 Slot: 5
	public override void WriteStartDocument() { }

	// RVA: 0x10724A4 Offset: 0x106E4A4 VA: 0x10724A4 Slot: 6
	public override void WriteStartDocument(bool standalone) { }

	// RVA: 0x10724C8 Offset: 0x106E4C8 VA: 0x10724C8 Slot: 7
	public override void WriteEndDocument() { }

	// RVA: 0x10724E8 Offset: 0x106E4E8 VA: 0x10724E8 Slot: 8
	public override void WriteDocType(string name, string pubid, string sysid, string subset) { }

	// RVA: 0x1072508 Offset: 0x106E508 VA: 0x1072508 Slot: 9
	public override void WriteStartElement(string prefix, string localName, string ns) { }

	// RVA: 0x1072528 Offset: 0x106E528 VA: 0x1072528 Slot: 10
	public override void WriteEndElement() { }

	// RVA: 0x1072548 Offset: 0x106E548 VA: 0x1072548 Slot: 11
	public override void WriteFullEndElement() { }

	// RVA: 0x1072568 Offset: 0x106E568 VA: 0x1072568 Slot: 12
	public override void WriteStartAttribute(string prefix, string localName, string ns) { }

	// RVA: 0x1072588 Offset: 0x106E588 VA: 0x1072588 Slot: 13
	public override void WriteEndAttribute() { }

	// RVA: 0x10725AC Offset: 0x106E5AC VA: 0x10725AC Slot: 14
	public override void WriteCData(string text) { }

	// RVA: 0x10725D0 Offset: 0x106E5D0 VA: 0x10725D0 Slot: 15
	public override void WriteComment(string text) { }

	// RVA: 0x10725F4 Offset: 0x106E5F4 VA: 0x10725F4 Slot: 16
	public override void WriteProcessingInstruction(string name, string text) { }

	// RVA: 0x1072618 Offset: 0x106E618 VA: 0x1072618 Slot: 17
	public override void WriteEntityRef(string name) { }

	// RVA: 0x107263C Offset: 0x106E63C VA: 0x107263C Slot: 18
	public override void WriteCharEntity(char ch) { }

	// RVA: 0x1072660 Offset: 0x106E660 VA: 0x1072660 Slot: 19
	public override void WriteWhitespace(string ws) { }

	// RVA: 0x1072684 Offset: 0x106E684 VA: 0x1072684 Slot: 20
	public override void WriteString(string text) { }

	// RVA: 0x10726A8 Offset: 0x106E6A8 VA: 0x10726A8 Slot: 21
	public override void WriteSurrogateCharEntity(char lowChar, char highChar) { }

	// RVA: 0x10726CC Offset: 0x106E6CC VA: 0x10726CC Slot: 22
	public override void WriteChars(char[] buffer, int index, int count) { }

	// RVA: 0x10726F0 Offset: 0x106E6F0 VA: 0x10726F0 Slot: 23
	public override void WriteRaw(char[] buffer, int index, int count) { }

	// RVA: 0x1072714 Offset: 0x106E714 VA: 0x1072714 Slot: 24
	public override void WriteRaw(string data) { }

	// RVA: 0x1072738 Offset: 0x106E738 VA: 0x1072738 Slot: 25
	public override void WriteBase64(byte[] buffer, int index, int count) { }

	// RVA: 0x107275C Offset: 0x106E75C VA: 0x107275C Slot: 26
	public override void WriteBinHex(byte[] buffer, int index, int count) { }

	// RVA: 0x1072780 Offset: 0x106E780 VA: 0x1072780 Slot: 27
	public override WriteState get_WriteState() { }

	// RVA: 0x10727A4 Offset: 0x106E7A4 VA: 0x10727A4 Slot: 28
	public override void Close() { }

	// RVA: 0x10727C8 Offset: 0x106E7C8 VA: 0x10727C8 Slot: 29
	public override void Flush() { }

	// RVA: 0x10727EC Offset: 0x106E7EC VA: 0x10727EC Slot: 30
	public override string LookupPrefix(string ns) { }
}


// Namespace: System.Data
internal sealed class DataTextReader : XmlReader // TypeDefIndex: 4057
{
	// Fields
	private XmlReader _xmlreader; // 0x10

	// Properties
	public override XmlReaderSettings Settings { get; }
	public override XmlNodeType NodeType { get; }
	public override string Name { get; }
	public override string LocalName { get; }
	public override string NamespaceURI { get; }
	public override string Prefix { get; }
	public override string Value { get; }
	public override int Depth { get; }
	public override string BaseURI { get; }
	public override bool IsEmptyElement { get; }
	public override bool IsDefault { get; }
	public override char QuoteChar { get; }
	public override XmlSpace XmlSpace { get; }
	public override string XmlLang { get; }
	public override int AttributeCount { get; }
	public override bool EOF { get; }
	public override ReadState ReadState { get; }
	public override XmlNameTable NameTable { get; }
	public override bool CanResolveEntity { get; }
	public override bool CanReadValueChunk { get; }

	// Methods

	// RVA: 0x1072810 Offset: 0x106E810 VA: 0x1072810
	internal static XmlReader CreateReader(XmlReader xr) { }

	// RVA: 0x1072868 Offset: 0x106E868 VA: 0x1072868
	private void .ctor(XmlReader input) { }

	// RVA: 0x10728D4 Offset: 0x106E8D4 VA: 0x10728D4 Slot: 5
	public override XmlReaderSettings get_Settings() { }

	// RVA: 0x10728F4 Offset: 0x106E8F4 VA: 0x10728F4 Slot: 6
	public override XmlNodeType get_NodeType() { }

	// RVA: 0x1072914 Offset: 0x106E914 VA: 0x1072914 Slot: 7
	public override string get_Name() { }

	// RVA: 0x1072934 Offset: 0x106E934 VA: 0x1072934 Slot: 8
	public override string get_LocalName() { }

	// RVA: 0x1072954 Offset: 0x106E954 VA: 0x1072954 Slot: 9
	public override string get_NamespaceURI() { }

	// RVA: 0x1072974 Offset: 0x106E974 VA: 0x1072974 Slot: 10
	public override string get_Prefix() { }

	// RVA: 0x1072994 Offset: 0x106E994 VA: 0x1072994 Slot: 11
	public override string get_Value() { }

	// RVA: 0x10729B4 Offset: 0x106E9B4 VA: 0x10729B4 Slot: 12
	public override int get_Depth() { }

	// RVA: 0x10729D4 Offset: 0x106E9D4 VA: 0x10729D4 Slot: 13
	public override string get_BaseURI() { }

	// RVA: 0x10729F8 Offset: 0x106E9F8 VA: 0x10729F8 Slot: 14
	public override bool get_IsEmptyElement() { }

	// RVA: 0x1072A1C Offset: 0x106EA1C VA: 0x1072A1C Slot: 15
	public override bool get_IsDefault() { }

	// RVA: 0x1072A40 Offset: 0x106EA40 VA: 0x1072A40 Slot: 16
	public override char get_QuoteChar() { }

	// RVA: 0x1072A64 Offset: 0x106EA64 VA: 0x1072A64 Slot: 17
	public override XmlSpace get_XmlSpace() { }

	// RVA: 0x1072A88 Offset: 0x106EA88 VA: 0x1072A88 Slot: 18
	public override string get_XmlLang() { }

	// RVA: 0x1072AAC Offset: 0x106EAAC VA: 0x1072AAC Slot: 21
	public override int get_AttributeCount() { }

	// RVA: 0x1072AD0 Offset: 0x106EAD0 VA: 0x1072AD0 Slot: 22
	public override string GetAttribute(string name) { }

	// RVA: 0x1072AF4 Offset: 0x106EAF4 VA: 0x1072AF4 Slot: 23
	public override string GetAttribute(string localName, string namespaceURI) { }

	// RVA: 0x1072B18 Offset: 0x106EB18 VA: 0x1072B18 Slot: 24
	public override string GetAttribute(int i) { }

	// RVA: 0x1072B3C Offset: 0x106EB3C VA: 0x1072B3C Slot: 25
	public override bool MoveToAttribute(string name) { }

	// RVA: 0x1072B60 Offset: 0x106EB60 VA: 0x1072B60 Slot: 26
	public override void MoveToAttribute(int i) { }

	// RVA: 0x1072B84 Offset: 0x106EB84 VA: 0x1072B84 Slot: 27
	public override bool MoveToFirstAttribute() { }

	// RVA: 0x1072BA8 Offset: 0x106EBA8 VA: 0x1072BA8 Slot: 28
	public override bool MoveToNextAttribute() { }

	// RVA: 0x1072BCC Offset: 0x106EBCC VA: 0x1072BCC Slot: 29
	public override bool MoveToElement() { }

	// RVA: 0x1072BF0 Offset: 0x106EBF0 VA: 0x1072BF0 Slot: 30
	public override bool ReadAttributeValue() { }

	// RVA: 0x1072C14 Offset: 0x106EC14 VA: 0x1072C14 Slot: 31
	public override bool Read() { }

	// RVA: 0x1072C38 Offset: 0x106EC38 VA: 0x1072C38 Slot: 32
	public override bool get_EOF() { }

	// RVA: 0x1072C5C Offset: 0x106EC5C VA: 0x1072C5C Slot: 33
	public override void Close() { }

	// RVA: 0x1072C80 Offset: 0x106EC80 VA: 0x1072C80 Slot: 34
	public override ReadState get_ReadState() { }

	// RVA: 0x1072CA4 Offset: 0x106ECA4 VA: 0x1072CA4 Slot: 35
	public override void Skip() { }

	// RVA: 0x1072CC8 Offset: 0x106ECC8 VA: 0x1072CC8 Slot: 36
	public override XmlNameTable get_NameTable() { }

	// RVA: 0x1072CEC Offset: 0x106ECEC VA: 0x1072CEC Slot: 37
	public override string LookupNamespace(string prefix) { }

	// RVA: 0x1072D10 Offset: 0x106ED10 VA: 0x1072D10 Slot: 38
	public override bool get_CanResolveEntity() { }

	// RVA: 0x1072D34 Offset: 0x106ED34 VA: 0x1072D34 Slot: 39
	public override void ResolveEntity() { }

	// RVA: 0x1072D58 Offset: 0x106ED58 VA: 0x1072D58 Slot: 40
	public override bool get_CanReadValueChunk() { }

	// RVA: 0x1072D7C Offset: 0x106ED7C VA: 0x1072D7C Slot: 42
	public override string ReadString() { }
}


// Namespace: System.Data.SqlTypes
internal static class SQLResource // TypeDefIndex: 4058
{
	// Methods

	// RVA: 0x1072DA0 Offset: 0x106EDA0 VA: 0x1072DA0
	internal static string InvalidOpStreamClosed(string method) { }

	// RVA: 0x1072DEC Offset: 0x106EDEC VA: 0x1072DEC
	internal static string InvalidOpStreamNonWritable(string method) { }

	// RVA: 0x1072E38 Offset: 0x106EE38 VA: 0x1072E38
	internal static string InvalidOpStreamNonReadable(string method) { }

	// RVA: 0x1072E84 Offset: 0x106EE84 VA: 0x1072E84
	internal static string InvalidOpStreamNonSeekable(string method) { }
}


// Namespace: System.Data.SqlTypes
public interface INullable // TypeDefIndex: 4059
{
	// Properties
	public abstract bool IsNull { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsNull();
}


// Namespace: System.Data.SqlTypes
[DefaultMember("Item")]
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlBinary : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4060
{
	// Fields
	private byte[] _value; // 0x0
	public static readonly SqlBinary Null; // 0x0

	// Properties
	public bool IsNull { get; }
	public byte[] Value { get; }

	// Methods

	// RVA: 0x1072ED0 Offset: 0x106EED0 VA: 0x1072ED0
	private void .ctor(bool fNull) { }

	// RVA: 0x1072ED8 Offset: 0x106EED8 VA: 0x1072ED8
	public void .ctor(byte[] value) { }

	// RVA: 0x1072F50 Offset: 0x106EF50 VA: 0x1072F50 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x1072F60 Offset: 0x106EF60 VA: 0x1072F60
	public byte[] get_Value() { }

	// RVA: 0x1073034 Offset: 0x106F034 VA: 0x1073034
	public static SqlBinary op_Implicit(byte[] x) { }

	// RVA: 0x1073054 Offset: 0x106F054 VA: 0x1073054 Slot: 3
	public override string ToString() { }

	// RVA: 0x1073154 Offset: 0x106F154 VA: 0x1073154
	private static EComparison PerformCompareByte(byte[] x, byte[] y) { }

	// RVA: 0x1073250 Offset: 0x106F250 VA: 0x1073250
	public static SqlBoolean op_Equality(SqlBinary x, SqlBinary y) { }

	// RVA: 0x1073364 Offset: 0x106F364 VA: 0x1073364
	public static SqlBoolean op_LessThan(SqlBinary x, SqlBinary y) { }

	// RVA: 0x1073464 Offset: 0x106F464 VA: 0x1073464
	public static SqlBoolean op_GreaterThan(SqlBinary x, SqlBinary y) { }

	// RVA: 0x1073564 Offset: 0x106F564 VA: 0x1073564 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x1073668 Offset: 0x106F668 VA: 0x1073668
	public int CompareTo(SqlBinary value) { }

	// RVA: 0x1073808 Offset: 0x106F808 VA: 0x1073808 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1073994 Offset: 0x106F994 VA: 0x1073994
	internal static int HashByteArray(byte[] rgbValue, int length) { }

	// RVA: 0x10739FC Offset: 0x106F9FC VA: 0x10739FC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1073AC0 Offset: 0x106FAC0 VA: 0x1073AC0 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1073AC8 Offset: 0x106FAC8 VA: 0x1073AC8 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1073C34 Offset: 0x106FC34 VA: 0x1073C34 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1073D60 Offset: 0x106FD60 VA: 0x1073D60
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1073DEC Offset: 0x106FDEC VA: 0x1073DEC
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlBoolean : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4061
{
	// Fields
	private byte m_value; // 0x0
	public static readonly SqlBoolean True; // 0x0
	public static readonly SqlBoolean False; // 0x1
	public static readonly SqlBoolean Null; // 0x2
	public static readonly SqlBoolean Zero; // 0x3
	public static readonly SqlBoolean One; // 0x4

	// Properties
	public bool IsNull { get; }
	public bool Value { get; }
	public bool IsTrue { get; }
	public bool IsFalse { get; }
	public byte ByteValue { get; }

	// Methods

	// RVA: 0x1073350 Offset: 0x106F350 VA: 0x1073350
	public void .ctor(bool value) { }

	// RVA: 0x1073E34 Offset: 0x106FE34 VA: 0x1073E34
	public void .ctor(int value) { }

	// RVA: 0x1073EA0 Offset: 0x106FEA0 VA: 0x1073EA0
	private void .ctor(int value, bool fNull) { }

	// RVA: 0x1073EBC Offset: 0x106FEBC VA: 0x1073EBC Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107393C Offset: 0x106F93C VA: 0x107393C
	public bool get_Value() { }

	// RVA: 0x1073ECC Offset: 0x106FECC VA: 0x1073ECC
	public bool get_IsTrue() { }

	// RVA: 0x1073EDC Offset: 0x106FEDC VA: 0x1073EDC
	public bool get_IsFalse() { }

	// RVA: 0x1073EEC Offset: 0x106FEEC VA: 0x1073EEC
	public static SqlBoolean op_Implicit(bool x) { }

	// RVA: 0x10737AC Offset: 0x106F7AC VA: 0x10737AC
	public static bool op_True(SqlBoolean x) { }

	// RVA: 0x1073EFC Offset: 0x106FEFC VA: 0x1073EFC
	public static SqlBoolean op_BitwiseAnd(SqlBoolean x, SqlBoolean y) { }

	// RVA: 0x1073FB4 Offset: 0x106FFB4 VA: 0x1073FB4
	public static SqlBoolean op_BitwiseOr(SqlBoolean x, SqlBoolean y) { }

	// RVA: 0x107406C Offset: 0x107006C VA: 0x107406C
	public byte get_ByteValue() { }

	// RVA: 0x1074100 Offset: 0x1070100 VA: 0x1074100 Slot: 3
	public override string ToString() { }

	// RVA: 0x10741D0 Offset: 0x10701D0 VA: 0x10741D0
	public static SqlBoolean op_Equality(SqlBoolean x, SqlBoolean y) { }

	// RVA: 0x1074280 Offset: 0x1070280 VA: 0x1074280
	public static SqlBoolean And(SqlBoolean x, SqlBoolean y) { }

	// RVA: 0x10742EC Offset: 0x10702EC VA: 0x10742EC
	public static SqlBoolean Or(SqlBoolean x, SqlBoolean y) { }

	// RVA: 0x1074358 Offset: 0x1070358 VA: 0x1074358 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x107445C Offset: 0x107045C VA: 0x107445C
	public int CompareTo(SqlBoolean value) { }

	// RVA: 0x1074560 Offset: 0x1070560 VA: 0x1074560 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x107466C Offset: 0x107066C VA: 0x107466C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1074728 Offset: 0x1070728 VA: 0x1074728 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1074730 Offset: 0x1070730 VA: 0x1074730 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1074854 Offset: 0x1070854 VA: 0x1074854 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x107496C Offset: 0x107096C VA: 0x107496C
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x10749F8 Offset: 0x10709F8 VA: 0x10749F8
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlByte : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4062
{
	// Fields
	private bool m_fNotNull; // 0x0
	private byte m_value; // 0x1
	private static readonly int s_iBitNotByteMax; // 0x0
	public static readonly SqlByte Null; // 0x4
	public static readonly SqlByte Zero; // 0x6
	public static readonly SqlByte MinValue; // 0x8
	public static readonly SqlByte MaxValue; // 0xA

	// Properties
	public bool IsNull { get; }
	public byte Value { get; }

	// Methods

	// RVA: 0x1074AA8 Offset: 0x1070AA8 VA: 0x1074AA8
	private void .ctor(bool fNull) { }

	// RVA: 0x1074AB0 Offset: 0x1070AB0 VA: 0x1074AB0
	public void .ctor(byte value) { }

	// RVA: 0x1074AC0 Offset: 0x1070AC0 VA: 0x1074AC0 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x1074AD0 Offset: 0x1070AD0 VA: 0x1074AD0
	public byte get_Value() { }

	// RVA: 0x1074B1C Offset: 0x1070B1C VA: 0x1074B1C
	public static SqlByte op_Implicit(byte x) { }

	// RVA: 0x1074B2C Offset: 0x1070B2C VA: 0x1074B2C Slot: 3
	public override string ToString() { }

	// RVA: 0x1074BB4 Offset: 0x1070BB4 VA: 0x1074BB4
	public static SqlByte op_Addition(SqlByte x, SqlByte y) { }

	// RVA: 0x1074CE8 Offset: 0x1070CE8 VA: 0x1074CE8
	public static SqlByte op_Subtraction(SqlByte x, SqlByte y) { }

	// RVA: 0x1074E1C Offset: 0x1070E1C VA: 0x1074E1C
	public static SqlByte op_Multiply(SqlByte x, SqlByte y) { }

	// RVA: 0x1074F54 Offset: 0x1070F54 VA: 0x1074F54
	public static SqlByte op_Division(SqlByte x, SqlByte y) { }

	// RVA: 0x1075060 Offset: 0x1071060 VA: 0x1075060
	public static SqlByte op_Explicit(SqlInt64 x) { }

	// RVA: 0x10751FC Offset: 0x10711FC VA: 0x10751FC
	public static SqlBoolean op_Equality(SqlByte x, SqlByte y) { }

	// RVA: 0x10752C4 Offset: 0x10712C4 VA: 0x10752C4
	public static SqlBoolean op_LessThan(SqlByte x, SqlByte y) { }

	// RVA: 0x107538C Offset: 0x107138C VA: 0x107538C
	public static SqlBoolean op_GreaterThan(SqlByte x, SqlByte y) { }

	// RVA: 0x1075454 Offset: 0x1071454 VA: 0x1075454
	public static SqlBoolean LessThan(SqlByte x, SqlByte y) { }

	// RVA: 0x10754C0 Offset: 0x10714C0 VA: 0x10754C0
	public static SqlBoolean GreaterThan(SqlByte x, SqlByte y) { }

	// RVA: 0x107552C Offset: 0x107152C VA: 0x107552C
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x1075588 Offset: 0x1071588 VA: 0x1075588
	public SqlInt64 ToSqlInt64() { }

	// RVA: 0x10755E4 Offset: 0x10715E4 VA: 0x10755E4 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x10756E8 Offset: 0x10716E8 VA: 0x10756E8
	public int CompareTo(SqlByte value) { }

	// RVA: 0x1075830 Offset: 0x1071830 VA: 0x1075830 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1075968 Offset: 0x1071968 VA: 0x1075968 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x10759F8 Offset: 0x10719F8 VA: 0x10759F8 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1075A00 Offset: 0x1071A00 VA: 0x1075A00 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1075B20 Offset: 0x1071B20 VA: 0x1075B20 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1075C50 Offset: 0x1071C50 VA: 0x1075C50
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1075CDC Offset: 0x1071CDC VA: 0x1075CDC
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
internal enum SqlBytesCharsState // TypeDefIndex: 4063
{
	// Fields
	public int value__; // 0x0
	public const SqlBytesCharsState Null = 0;
	public const SqlBytesCharsState Buffer = 1;
	public const SqlBytesCharsState Stream = 3;
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[DefaultMember("Item")]
[Serializable]
public sealed class SqlBytes : INullable, IXmlSerializable, ISerializable // TypeDefIndex: 4064
{
	// Fields
	internal byte[] _rgbBuf; // 0x10
	private long _lCurLen; // 0x18
	internal Stream _stream; // 0x20
	private SqlBytesCharsState _state; // 0x28
	private byte[] _rgbWorkBuf; // 0x30

	// Properties
	public bool IsNull { get; }
	public byte[] Buffer { get; }
	public long Length { get; }
	public byte[] Value { get; }
	public static SqlBytes Null { get; }

	// Methods

	// RVA: 0x1075D54 Offset: 0x1071D54 VA: 0x1075D54
	public void .ctor() { }

	// RVA: 0x1075D88 Offset: 0x1071D88 VA: 0x1075D88
	public void .ctor(byte[] buffer) { }

	// RVA: 0x1075DD8 Offset: 0x1071DD8 VA: 0x1075DD8
	public void .ctor(SqlBinary value) { }

	// RVA: 0x1075E70 Offset: 0x1071E70 VA: 0x1075E70 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x1075E80 Offset: 0x1071E80 VA: 0x1075E80
	public byte[] get_Buffer() { }

	// RVA: 0x1075FFC Offset: 0x1071FFC VA: 0x1075FFC
	public long get_Length() { }

	// RVA: 0x10760C8 Offset: 0x10720C8 VA: 0x10760C8
	public byte[] get_Value() { }

	// RVA: 0x1075D78 Offset: 0x1071D78 VA: 0x1075D78
	public void SetNull() { }

	// RVA: 0x1075EB8 Offset: 0x1071EB8 VA: 0x1075EB8
	private void CopyStreamToBuffer() { }

	// RVA: 0x1075EA8 Offset: 0x1071EA8 VA: 0x1075EA8
	internal bool FStream() { }

	// RVA: 0x10762CC Offset: 0x10722CC VA: 0x10762CC
	private void SetBuffer(byte[] buffer) { }

	// RVA: 0x10762F4 Offset: 0x10722F4 VA: 0x10762F4 Slot: 5
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x10762FC Offset: 0x10722FC VA: 0x10762FC Slot: 6
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader r) { }

	// RVA: 0x107648C Offset: 0x107248C VA: 0x107648C Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x10765C0 Offset: 0x10725C0 VA: 0x10765C0
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x107664C Offset: 0x107264C VA: 0x107664C Slot: 8
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x1076684 Offset: 0x1072684 VA: 0x1076684
	public static SqlBytes get_Null() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[DefaultMember("Item")]
[Serializable]
public sealed class SqlChars : INullable, IXmlSerializable, ISerializable // TypeDefIndex: 4065
{
	// Fields
	internal char[] _rgchBuf; // 0x10
	private long _lCurLen; // 0x18
	internal SqlStreamChars _stream; // 0x20
	private SqlBytesCharsState _state; // 0x28
	private char[] _rgchWorkBuf; // 0x30

	// Properties
	public bool IsNull { get; }
	public char[] Buffer { get; }
	public long Length { get; }
	public char[] Value { get; }
	public static SqlChars Null { get; }

	// Methods

	// RVA: 0x10766EC Offset: 0x10726EC VA: 0x10766EC
	public void .ctor() { }

	// RVA: 0x1076720 Offset: 0x1072720 VA: 0x1076720
	public void .ctor(char[] buffer) { }

	// RVA: 0x1076770 Offset: 0x1072770 VA: 0x1076770
	public void .ctor(SqlString value) { }

	// RVA: 0x10768A8 Offset: 0x10728A8 VA: 0x10768A8 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x10768B8 Offset: 0x10728B8 VA: 0x10768B8
	public char[] get_Buffer() { }

	// RVA: 0x1076A2C Offset: 0x1072A2C VA: 0x1076A2C
	public long get_Length() { }

	// RVA: 0x1076A98 Offset: 0x1072A98 VA: 0x1076A98
	public char[] get_Value() { }

	// RVA: 0x1076710 Offset: 0x1072710 VA: 0x1076710
	public void SetNull() { }

	// RVA: 0x10768E0 Offset: 0x10728E0 VA: 0x10768E0
	internal bool FStream() { }

	// RVA: 0x10768F0 Offset: 0x10728F0 VA: 0x10768F0
	private void CopyStreamToBuffer() { }

	// RVA: 0x1076C6C Offset: 0x1072C6C VA: 0x1076C6C
	private void SetBuffer(char[] buffer) { }

	// RVA: 0x1076C94 Offset: 0x1072C94 VA: 0x1076C94 Slot: 5
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1076C9C Offset: 0x1072C9C VA: 0x1076C9C Slot: 6
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader r) { }

	// RVA: 0x1076DB8 Offset: 0x1072DB8 VA: 0x1076DB8 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1076EB8 Offset: 0x1072EB8 VA: 0x1076EB8
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1076F44 Offset: 0x1072F44 VA: 0x1076F44 Slot: 8
	private void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	// RVA: 0x1076F7C Offset: 0x1072F7C VA: 0x1076F7C
	public static SqlChars get_Null() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlDateTime : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4066
{
	// Fields
	private bool m_fNotNull; // 0x0
	private int m_day; // 0x4
	private int m_time; // 0x8
	private static readonly double s_SQLTicksPerMillisecond; // 0x0
	public static readonly int SQLTicksPerSecond; // 0x8
	public static readonly int SQLTicksPerMinute; // 0xC
	public static readonly int SQLTicksPerHour; // 0x10
	private static readonly int s_SQLTicksPerDay; // 0x14
	private static readonly long s_ticksPerSecond; // 0x18
	private static readonly DateTime s_SQLBaseDate; // 0x20
	private static readonly long s_SQLBaseDateTicks; // 0x28
	private static readonly int s_minYear; // 0x30
	private static readonly int s_maxYear; // 0x34
	private static readonly int s_minDay; // 0x38
	private static readonly int s_maxDay; // 0x3C
	private static readonly int s_minTime; // 0x40
	private static readonly int s_maxTime; // 0x44
	private static readonly int s_dayBase; // 0x48
	private static readonly int[] s_daysToMonth365; // 0x50
	private static readonly int[] s_daysToMonth366; // 0x58
	private static readonly DateTime s_minDateTime; // 0x60
	private static readonly DateTime s_maxDateTime; // 0x68
	private static readonly TimeSpan s_minTimeSpan; // 0x70
	private static readonly TimeSpan s_maxTimeSpan; // 0x78
	private static readonly string s_ISO8601_DateTimeFormat; // 0x80
	private static readonly string[] s_dateTimeFormats; // 0x88
	public static readonly SqlDateTime MinValue; // 0x90
	public static readonly SqlDateTime MaxValue; // 0x9C
	public static readonly SqlDateTime Null; // 0xA8

	// Properties
	public bool IsNull { get; }
	public DateTime Value { get; }
	public int DayTicks { get; }
	public int TimeTicks { get; }

	// Methods

	// RVA: 0x1076FE4 Offset: 0x1072FE4 VA: 0x1076FE4
	private void .ctor(bool fNull) { }

	// RVA: 0x1076FF0 Offset: 0x1072FF0 VA: 0x1076FF0
	public void .ctor(DateTime value) { }

	// RVA: 0x1077140 Offset: 0x1073140 VA: 0x1077140
	public void .ctor(int dayTicks, int timeTicks) { }

	// RVA: 0x107726C Offset: 0x107326C VA: 0x107726C Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107727C Offset: 0x107327C VA: 0x107727C
	private static TimeSpan ToTimeSpan(SqlDateTime value) { }

	// RVA: 0x1077324 Offset: 0x1073324 VA: 0x1077324
	private static DateTime ToDateTime(SqlDateTime value) { }

	// RVA: 0x10773CC Offset: 0x10733CC VA: 0x10773CC
	private static SqlDateTime FromTimeSpan(TimeSpan value) { }

	// RVA: 0x107705C Offset: 0x107305C VA: 0x107705C
	private static SqlDateTime FromDateTime(DateTime value) { }

	// RVA: 0x10775CC Offset: 0x10735CC VA: 0x10775CC
	public DateTime get_Value() { }

	// RVA: 0x1077664 Offset: 0x1073664 VA: 0x1077664
	public int get_DayTicks() { }

	// RVA: 0x10776AC Offset: 0x10736AC VA: 0x10776AC
	public int get_TimeTicks() { }

	// RVA: 0x10776F4 Offset: 0x10736F4 VA: 0x10776F4
	public static SqlDateTime op_Implicit(DateTime value) { }

	// RVA: 0x1077724 Offset: 0x1073724 VA: 0x1077724 Slot: 3
	public override string ToString() { }

	// RVA: 0x1077800 Offset: 0x1073800 VA: 0x1077800
	public static SqlBoolean op_Equality(SqlDateTime x, SqlDateTime y) { }

	// RVA: 0x10778F8 Offset: 0x10738F8 VA: 0x10778F8
	public static SqlBoolean op_LessThan(SqlDateTime x, SqlDateTime y) { }

	// RVA: 0x10779F8 Offset: 0x10739F8 VA: 0x10779F8
	public static SqlBoolean op_GreaterThan(SqlDateTime x, SqlDateTime y) { }

	// RVA: 0x1077AF8 Offset: 0x1073AF8 VA: 0x1077AF8
	public static SqlBoolean LessThan(SqlDateTime x, SqlDateTime y) { }

	// RVA: 0x1077B7C Offset: 0x1073B7C VA: 0x1077B7C
	public static SqlBoolean GreaterThan(SqlDateTime x, SqlDateTime y) { }

	// RVA: 0x1077C00 Offset: 0x1073C00 VA: 0x1077C00 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x1077D0C Offset: 0x1073D0C VA: 0x1077D0C
	public int CompareTo(SqlDateTime value) { }

	// RVA: 0x1077E80 Offset: 0x1073E80 VA: 0x1077E80 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1077FCC Offset: 0x1073FCC VA: 0x1077FCC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1078084 Offset: 0x1074084 VA: 0x1078084 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x107808C Offset: 0x107408C VA: 0x107808C Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1078290 Offset: 0x1074290 VA: 0x1078290 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x10783EC Offset: 0x10743EC VA: 0x10783EC
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1078478 Offset: 0x1074478 VA: 0x1078478
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlDecimal : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4067
{
	// Fields
	internal byte _bStatus; // 0x0
	internal byte _bLen; // 0x1
	internal byte _bPrec; // 0x2
	internal byte _bScale; // 0x3
	internal uint _data1; // 0x4
	internal uint _data2; // 0x8
	internal uint _data3; // 0xC
	internal uint _data4; // 0x10
	private static readonly byte s_NUMERIC_MAX_PRECISION; // 0x0
	public static readonly byte MaxPrecision; // 0x1
	public static readonly byte MaxScale; // 0x2
	private static readonly byte s_bNullMask; // 0x3
	private static readonly byte s_bIsNull; // 0x4
	private static readonly byte s_bNotNull; // 0x5
	private static readonly byte s_bReverseNullMask; // 0x6
	private static readonly byte s_bSignMask; // 0x7
	private static readonly byte s_bPositive; // 0x8
	private static readonly byte s_bNegative; // 0x9
	private static readonly byte s_bReverseSignMask; // 0xA
	private static readonly uint s_uiZero; // 0xC
	private static readonly int s_cNumeMax; // 0x10
	private static readonly long s_lInt32Base; // 0x18
	private static readonly ulong s_ulInt32Base; // 0x20
	private static readonly ulong s_ulInt32BaseForMod; // 0x28
	internal static readonly ulong s_llMax; // 0x30
	private static readonly uint s_ulBase10; // 0x38
	private static readonly double s_DUINT_BASE; // 0x40
	private static readonly double s_DUINT_BASE2; // 0x48
	private static readonly double s_DUINT_BASE3; // 0x50
	private static readonly double s_DMAX_NUME; // 0x58
	private static readonly uint s_DBL_DIG; // 0x60
	private static readonly byte s_cNumeDivScaleMin; // 0x64
	private static readonly uint[] s_rgulShiftBase; // 0x68
	private static readonly uint[] s_decimalHelpersLo; // 0x70
	private static readonly uint[] s_decimalHelpersMid; // 0x78
	private static readonly uint[] s_decimalHelpersHi; // 0x80
	private static readonly uint[] s_decimalHelpersHiHi; // 0x88
	private static readonly byte[] s_rgCLenFromPrec; // 0x90
	private static readonly uint s_ulT1; // 0x98
	private static readonly uint s_ulT2; // 0x9C
	private static readonly uint s_ulT3; // 0xA0
	private static readonly uint s_ulT4; // 0xA4
	private static readonly uint s_ulT5; // 0xA8
	private static readonly uint s_ulT6; // 0xAC
	private static readonly uint s_ulT7; // 0xB0
	private static readonly uint s_ulT8; // 0xB4
	private static readonly uint s_ulT9; // 0xB8
	private static readonly ulong s_dwlT10; // 0xC0
	private static readonly ulong s_dwlT11; // 0xC8
	private static readonly ulong s_dwlT12; // 0xD0
	private static readonly ulong s_dwlT13; // 0xD8
	private static readonly ulong s_dwlT14; // 0xE0
	private static readonly ulong s_dwlT15; // 0xE8
	private static readonly ulong s_dwlT16; // 0xF0
	private static readonly ulong s_dwlT17; // 0xF8
	private static readonly ulong s_dwlT18; // 0x100
	private static readonly ulong s_dwlT19; // 0x108
	public static readonly SqlDecimal Null; // 0x110
	public static readonly SqlDecimal MinValue; // 0x124
	public static readonly SqlDecimal MaxValue; // 0x138

	// Properties
	public bool IsNull { get; }
	public Decimal Value { get; }
	public bool IsPositive { get; }
	public byte Scale { get; }
	public int[] Data { get; }

	// Methods

	// RVA: 0x107887C Offset: 0x107487C VA: 0x107887C
	private byte CalculatePrecision() { }

	// RVA: 0x1078AA0 Offset: 0x1074AA0 VA: 0x1078AA0
	private bool VerifyPrecision(byte precision) { }

	// RVA: 0x1078CBC Offset: 0x1074CBC VA: 0x1078CBC
	private void .ctor(bool fNull) { }

	// RVA: 0x1078D24 Offset: 0x1074D24 VA: 0x1078D24
	public void .ctor(Decimal value) { }

	// RVA: 0x1078E88 Offset: 0x1074E88 VA: 0x1078E88
	public void .ctor(int value) { }

	// RVA: 0x1079094 Offset: 0x1075094 VA: 0x1079094
	public void .ctor(long value) { }

	// RVA: 0x10793A4 Offset: 0x10753A4 VA: 0x10793A4
	private void .ctor(uint[] rglData, byte bLen, byte bPrec, byte bScale, bool fPositive) { }

	// RVA: 0x107966C Offset: 0x107566C VA: 0x107966C Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x10796DC Offset: 0x10756DC VA: 0x10796DC
	public Decimal get_Value() { }

	// RVA: 0x1079880 Offset: 0x1075880 VA: 0x1079880
	public bool get_IsPositive() { }

	// RVA: 0x1079604 Offset: 0x1075604 VA: 0x1079604
	private void SetPositive() { }

	// RVA: 0x107993C Offset: 0x107593C VA: 0x107993C
	private void SetSignBit(bool fPositive) { }

	// RVA: 0x10799C0 Offset: 0x10759C0 VA: 0x10799C0
	public byte get_Scale() { }

	// RVA: 0x1079A50 Offset: 0x1075A50 VA: 0x1079A50
	public int[] get_Data() { }

	// RVA: 0x1079B48 Offset: 0x1075B48 VA: 0x1079B48 Slot: 3
	public override string ToString() { }

	// RVA: 0x1079F34 Offset: 0x1075F34 VA: 0x1079F34
	public static SqlDecimal Parse(string s) { }

	// RVA: 0x107A7CC Offset: 0x10767CC VA: 0x107A7CC
	public double ToDouble() { }

	// RVA: 0x1079730 Offset: 0x1075730 VA: 0x1079730
	private Decimal ToDecimal() { }

	// RVA: 0x107A914 Offset: 0x1076914 VA: 0x107A914
	public static SqlDecimal op_Implicit(Decimal x) { }

	// RVA: 0x107A92C Offset: 0x107692C VA: 0x107A92C
	public static SqlDecimal op_Implicit(long x) { }

	// RVA: 0x107A994 Offset: 0x1076994 VA: 0x107A994
	public static SqlDecimal op_UnaryNegation(SqlDecimal x) { }

	// RVA: 0x107AAAC Offset: 0x1076AAC VA: 0x107AAAC
	public static SqlDecimal op_Addition(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107B57C Offset: 0x107757C VA: 0x107B57C
	public static SqlDecimal op_Subtraction(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107B65C Offset: 0x107765C VA: 0x107B65C
	public static SqlDecimal op_Multiply(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107BFA0 Offset: 0x1077FA0 VA: 0x107BFA0
	public static SqlDecimal op_Division(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107CC90 Offset: 0x1078C90 VA: 0x107CC90
	public static SqlDecimal op_Implicit(SqlByte x) { }

	// RVA: 0x107CD6C Offset: 0x1078D6C VA: 0x107CD6C
	public static SqlDecimal op_Implicit(SqlInt16 x) { }

	// RVA: 0x107CEA0 Offset: 0x1078EA0 VA: 0x107CEA0
	public static SqlDecimal op_Implicit(SqlInt32 x) { }

	// RVA: 0x107D018 Offset: 0x1079018 VA: 0x107D018
	public static SqlDecimal op_Implicit(SqlInt64 x) { }

	// RVA: 0x107D158 Offset: 0x1079158 VA: 0x107D158
	public static SqlDecimal op_Implicit(SqlMoney x) { }

	// RVA: 0x107CC14 Offset: 0x1078C14 VA: 0x107CC14
	private static void ZeroToMaxLen(uint[] rgulData, int cUI4sCur) { }

	// RVA: 0x10795E4 Offset: 0x10755E4 VA: 0x10795E4
	private bool FZero() { }

	// RVA: 0x107B514 Offset: 0x1077514 VA: 0x107B514
	private bool FGt10_38() { }

	// RVA: 0x107D360 Offset: 0x1079360 VA: 0x107D360
	private bool FGt10_38(uint[] rglData) { }

	// RVA: 0x1078F5C Offset: 0x1074F5C VA: 0x1078F5C
	private static byte BGetPrecUI4(uint value) { }

	// RVA: 0x1079160 Offset: 0x1075160 VA: 0x1079160
	private static byte BGetPrecUI8(ulong dwlVal) { }

	// RVA: 0x107A614 Offset: 0x1076614 VA: 0x107A614
	private void AddULong(uint ulAdd) { }

	// RVA: 0x107A404 Offset: 0x1076404 VA: 0x107A404
	private void MultByULong(uint uiMultiplier) { }

	// RVA: 0x107D430 Offset: 0x1079430 VA: 0x107D430
	private uint DivByULong(uint iDivisor) { }

	// RVA: 0x107B0AC Offset: 0x10770AC VA: 0x107B0AC
	internal void AdjustScale(int digits, bool fRound) { }

	// RVA: 0x107B3BC Offset: 0x10773BC VA: 0x107B3BC
	private int LAbsCmp(SqlDecimal snumOp) { }

	// RVA: 0x107D63C Offset: 0x107963C VA: 0x107D63C
	private static void MpMove(uint[] rgulS, int ciulS, uint[] rgulD, out int ciulD) { }

	// RVA: 0x107D6A0 Offset: 0x10796A0 VA: 0x107D6A0
	private static void MpSet(uint[] rgulD, out int ciulD, uint iulN) { }

	// RVA: 0x107D6CC Offset: 0x10796CC VA: 0x107D6CC
	private static void MpNormalize(uint[] rgulU, ref int ciulU) { }

	// RVA: 0x107D724 Offset: 0x1079724 VA: 0x107D724
	private static void MpMul1(uint[] piulD, ref int ciulD, uint iulX) { }

	// RVA: 0x1079E54 Offset: 0x1075E54 VA: 0x1079E54
	private static void MpDiv1(uint[] rgulU, ref int ciulU, uint iulD, out uint iulR) { }

	// RVA: 0x107D824 Offset: 0x1079824 VA: 0x107D824
	internal static ulong DWL(uint lo, uint hi) { }

	// RVA: 0x107D818 Offset: 0x1079818 VA: 0x107D818
	private static uint HI(ulong x) { }

	// RVA: 0x107D820 Offset: 0x1079820 VA: 0x107D820
	private static uint LO(ulong x) { }

	// RVA: 0x107C3D8 Offset: 0x10783D8 VA: 0x107C3D8
	private static void MpDiv(uint[] rgulU, int ciulU, uint[] rgulD, int ciulD, uint[] rgulQ, out int ciulQ, uint[] rgulR, out int ciulR) { }

	// RVA: 0x107D830 Offset: 0x1079830 VA: 0x107D830
	private EComparison CompareNm(SqlDecimal snumOp) { }

	// RVA: 0x1079504 Offset: 0x1075504 VA: 0x1079504
	private static void CheckValidPrecScale(byte bPrec, byte bScale) { }

	// RVA: 0x107DA9C Offset: 0x1079A9C VA: 0x107DA9C
	public static SqlBoolean op_Equality(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107DBBC Offset: 0x1079BBC VA: 0x107DBBC
	public static SqlBoolean op_LessThan(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107DCDC Offset: 0x1079CDC VA: 0x107DCDC
	public static SqlBoolean op_GreaterThan(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107DDFC Offset: 0x1079DFC VA: 0x107DDFC
	public static SqlBoolean LessThan(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107DEB0 Offset: 0x1079EB0 VA: 0x107DEB0
	public static SqlBoolean GreaterThan(SqlDecimal x, SqlDecimal y) { }

	// RVA: 0x107DF64 Offset: 0x1079F64 VA: 0x107DF64
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x107E0A8 Offset: 0x107A0A8 VA: 0x107E0A8
	public SqlInt64 ToSqlInt64() { }

	// RVA: 0x107E2F4 Offset: 0x107A2F4 VA: 0x107E2F4
	public SqlMoney ToSqlMoney() { }

	// RVA: 0x1079F2C Offset: 0x1075F2C VA: 0x1079F2C
	private static char ChFromDigit(uint uiDigit) { }

	// RVA: 0x107D3D8 Offset: 0x10793D8 VA: 0x107D3D8
	private void StoreFromWorkingArray(uint[] rguiData) { }

	// RVA: 0x107A38C Offset: 0x107638C VA: 0x107A38C
	private void SetToZero() { }

	// RVA: 0x107E448 Offset: 0x107A448 VA: 0x107E448 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x107E570 Offset: 0x107A570 VA: 0x107E570
	public int CompareTo(SqlDecimal value) { }

	// RVA: 0x107E73C Offset: 0x107A73C VA: 0x107E73C Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x107E8C8 Offset: 0x107A8C8 VA: 0x107E8C8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x107E9D0 Offset: 0x107A9D0 VA: 0x107E9D0 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x107E9D8 Offset: 0x107A9D8 VA: 0x107E9D8 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x107EB3C Offset: 0x107AB3C VA: 0x107EB3C Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x107EC54 Offset: 0x107AC54 VA: 0x107EC54
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x107ECE0 Offset: 0x107ACE0 VA: 0x107ECE0
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlDouble : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4068
{
	// Fields
	private bool m_fNotNull; // 0x0
	private double m_value; // 0x8
	public static readonly SqlDouble Null; // 0x0
	public static readonly SqlDouble Zero; // 0x10
	public static readonly SqlDouble MinValue; // 0x20
	public static readonly SqlDouble MaxValue; // 0x30

	// Properties
	public bool IsNull { get; }
	public double Value { get; }

	// Methods

	// RVA: 0x107F044 Offset: 0x107B044 VA: 0x107F044
	private void .ctor(bool fNull) { }

	// RVA: 0x107F050 Offset: 0x107B050 VA: 0x107F050
	public void .ctor(double value) { }

	// RVA: 0x107F0C0 Offset: 0x107B0C0 VA: 0x107F0C0 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107F0D0 Offset: 0x107B0D0 VA: 0x107F0D0
	public double get_Value() { }

	// RVA: 0x107F118 Offset: 0x107B118 VA: 0x107F118
	public static SqlDouble op_Implicit(double x) { }

	// RVA: 0x107F13C Offset: 0x107B13C VA: 0x107F13C Slot: 3
	public override string ToString() { }

	// RVA: 0x107F1C4 Offset: 0x107B1C4 VA: 0x107F1C4
	public static SqlDouble op_UnaryNegation(SqlDouble x) { }

	// RVA: 0x107F26C Offset: 0x107B26C VA: 0x107F26C
	public static SqlDouble op_Addition(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107F39C Offset: 0x107B39C VA: 0x107F39C
	public static SqlDouble op_Subtraction(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107F4CC Offset: 0x107B4CC VA: 0x107F4CC
	public static SqlDouble op_Multiply(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107F5FC Offset: 0x107B5FC VA: 0x107F5FC
	public static SqlDouble op_Division(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107F768 Offset: 0x107B768 VA: 0x107F768
	public static SqlDouble op_Implicit(SqlByte x) { }

	// RVA: 0x107F83C Offset: 0x107B83C VA: 0x107F83C
	public static SqlDouble op_Implicit(SqlInt16 x) { }

	// RVA: 0x107F908 Offset: 0x107B908 VA: 0x107F908
	public static SqlDouble op_Implicit(SqlInt32 x) { }

	// RVA: 0x107F9D0 Offset: 0x107B9D0 VA: 0x107F9D0
	public static SqlDouble op_Implicit(SqlInt64 x) { }

	// RVA: 0x107FA98 Offset: 0x107BA98 VA: 0x107FA98
	public static SqlDouble op_Implicit(SqlSingle x) { }

	// RVA: 0x107FBB8 Offset: 0x107BBB8 VA: 0x107FBB8
	public static SqlDouble op_Implicit(SqlMoney x) { }

	// RVA: 0x107DFE4 Offset: 0x1079FE4 VA: 0x107DFE4
	public static SqlDouble op_Implicit(SqlDecimal x) { }

	// RVA: 0x107FD0C Offset: 0x107BD0C VA: 0x107FD0C
	public static SqlBoolean op_Equality(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107FDF8 Offset: 0x107BDF8 VA: 0x107FDF8
	public static SqlBoolean op_LessThan(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107FEE4 Offset: 0x107BEE4 VA: 0x107FEE4
	public static SqlBoolean op_GreaterThan(SqlDouble x, SqlDouble y) { }

	// RVA: 0x107FFD0 Offset: 0x107BFD0 VA: 0x107FFD0
	public static SqlBoolean LessThan(SqlDouble x, SqlDouble y) { }

	// RVA: 0x1080054 Offset: 0x107C054 VA: 0x1080054
	public static SqlBoolean GreaterThan(SqlDouble x, SqlDouble y) { }

	// RVA: 0x10800D8 Offset: 0x107C0D8 VA: 0x10800D8
	public SqlSingle ToSqlSingle() { }

	// RVA: 0x10801F8 Offset: 0x107C1F8 VA: 0x10801F8 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x1080300 Offset: 0x107C300 VA: 0x1080300
	public int CompareTo(SqlDouble value) { }

	// RVA: 0x1080468 Offset: 0x107C468 VA: 0x1080468 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x10805AC Offset: 0x107C5AC VA: 0x10805AC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1080640 Offset: 0x107C640 VA: 0x1080640 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1080648 Offset: 0x107C648 VA: 0x1080648 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1080768 Offset: 0x107C768 VA: 0x1080768 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x10808A4 Offset: 0x107C8A4 VA: 0x10808A4
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1080930 Offset: 0x107C930 VA: 0x1080930
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlGuid : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4069
{
	// Fields
	private static readonly int s_sizeOfGuid; // 0x0
	private static readonly int[] s_rgiGuidOrder; // 0x8
	private byte[] m_value; // 0x0
	public static readonly SqlGuid Null; // 0x10

	// Properties
	public bool IsNull { get; }
	public Guid Value { get; }

	// Methods

	// RVA: 0x10809C0 Offset: 0x107C9C0 VA: 0x10809C0
	private void .ctor(bool fNull) { }

	// RVA: 0x10809C8 Offset: 0x107C9C8 VA: 0x10809C8
	public void .ctor(Guid g) { }

	// RVA: 0x10809F4 Offset: 0x107C9F4 VA: 0x10809F4 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x1080A04 Offset: 0x107CA04 VA: 0x1080A04
	public Guid get_Value() { }

	// RVA: 0x1080AA8 Offset: 0x107CAA8 VA: 0x1080AA8
	public static SqlGuid op_Implicit(Guid x) { }

	// RVA: 0x1080ACC Offset: 0x107CACC VA: 0x1080ACC Slot: 3
	public override string ToString() { }

	// RVA: 0x1080B64 Offset: 0x107CB64 VA: 0x1080B64
	private static EComparison Compare(SqlGuid x, SqlGuid y) { }

	// RVA: 0x1080C5C Offset: 0x107CC5C VA: 0x1080C5C
	public static SqlBoolean op_Equality(SqlGuid x, SqlGuid y) { }

	// RVA: 0x1080D50 Offset: 0x107CD50 VA: 0x1080D50
	public static SqlBoolean op_LessThan(SqlGuid x, SqlGuid y) { }

	// RVA: 0x1080E44 Offset: 0x107CE44 VA: 0x1080E44
	public static SqlBoolean op_GreaterThan(SqlGuid x, SqlGuid y) { }

	// RVA: 0x1080F38 Offset: 0x107CF38 VA: 0x1080F38 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x108103C Offset: 0x107D03C VA: 0x108103C
	public int CompareTo(SqlGuid value) { }

	// RVA: 0x1081188 Offset: 0x107D188 VA: 0x1081188 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x10812C0 Offset: 0x107D2C0 VA: 0x10812C0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1081350 Offset: 0x107D350 VA: 0x1081350 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1081358 Offset: 0x107D358 VA: 0x1081358 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1081478 Offset: 0x107D478 VA: 0x1081478 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x10815C4 Offset: 0x107D5C4 VA: 0x10815C4
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1081650 Offset: 0x107D650 VA: 0x1081650
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlInt16 : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4070
{
	// Fields
	private bool m_fNotNull; // 0x0
	private short m_value; // 0x2
	private static readonly int s_MASKI2; // 0x0
	public static readonly SqlInt16 Null; // 0x4
	public static readonly SqlInt16 Zero; // 0x8
	public static readonly SqlInt16 MinValue; // 0xC
	public static readonly SqlInt16 MaxValue; // 0x10

	// Properties
	public bool IsNull { get; }
	public short Value { get; }

	// Methods

	// RVA: 0x10816F4 Offset: 0x107D6F4 VA: 0x10816F4
	private void .ctor(bool fNull) { }

	// RVA: 0x1081700 Offset: 0x107D700 VA: 0x1081700
	public void .ctor(short value) { }

	// RVA: 0x107CE48 Offset: 0x1078E48 VA: 0x107CE48 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107CE58 Offset: 0x1078E58 VA: 0x107CE58
	public short get_Value() { }

	// RVA: 0x1081710 Offset: 0x107D710 VA: 0x1081710
	public static SqlInt16 op_Implicit(short x) { }

	// RVA: 0x1081720 Offset: 0x107D720 VA: 0x1081720 Slot: 3
	public override string ToString() { }

	// RVA: 0x10817A8 Offset: 0x107D7A8 VA: 0x10817A8
	public static SqlInt16 op_UnaryNegation(SqlInt16 x) { }

	// RVA: 0x1081844 Offset: 0x107D844 VA: 0x1081844
	public static SqlInt16 op_Addition(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1081958 Offset: 0x107D958 VA: 0x1081958
	public static SqlInt16 op_Subtraction(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1081A6C Offset: 0x107DA6C VA: 0x1081A6C
	public static SqlInt16 op_Multiply(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1081BBC Offset: 0x107DBBC VA: 0x1081BBC
	public static SqlInt16 op_Division(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1081D24 Offset: 0x107DD24 VA: 0x1081D24
	public static SqlInt16 op_Implicit(SqlByte x) { }

	// RVA: 0x1081DF4 Offset: 0x107DDF4 VA: 0x1081DF4
	public static SqlInt16 op_Explicit(SqlInt64 x) { }

	// RVA: 0x1081F10 Offset: 0x107DF10 VA: 0x1081F10
	public static SqlBoolean op_Equality(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1081FE8 Offset: 0x107DFE8 VA: 0x1081FE8
	public static SqlBoolean op_LessThan(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x10820C0 Offset: 0x107E0C0 VA: 0x10820C0
	public static SqlBoolean op_GreaterThan(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1082198 Offset: 0x107E198 VA: 0x1082198
	public static SqlBoolean LessThan(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1082204 Offset: 0x107E204 VA: 0x1082204
	public static SqlBoolean GreaterThan(SqlInt16 x, SqlInt16 y) { }

	// RVA: 0x1082270 Offset: 0x107E270 VA: 0x1082270
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x10822C8 Offset: 0x107E2C8 VA: 0x10822C8
	public SqlInt64 ToSqlInt64() { }

	// RVA: 0x10823E8 Offset: 0x107E3E8 VA: 0x10823E8 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x10824EC Offset: 0x107E4EC VA: 0x10824EC
	public int CompareTo(SqlInt16 value) { }

	// RVA: 0x108263C Offset: 0x107E63C VA: 0x108263C Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x108277C Offset: 0x107E77C VA: 0x108277C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x108280C Offset: 0x107E80C VA: 0x108280C Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1082814 Offset: 0x107E814 VA: 0x1082814 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1082934 Offset: 0x107E934 VA: 0x1082934 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1082A64 Offset: 0x107EA64 VA: 0x1082A64
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x1082AF0 Offset: 0x107EAF0 VA: 0x1082AF0
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlInt32 : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4071
{
	// Fields
	private bool m_fNotNull; // 0x0
	private int m_value; // 0x4
	private static readonly long s_iIntMin; // 0x0
	private static readonly long s_lBitNotIntMax; // 0x8
	public static readonly SqlInt32 Null; // 0x10
	public static readonly SqlInt32 Zero; // 0x18
	public static readonly SqlInt32 MinValue; // 0x20
	public static readonly SqlInt32 MaxValue; // 0x28

	// Properties
	public bool IsNull { get; }
	public int Value { get; }

	// Methods

	// RVA: 0x1082B6C Offset: 0x107EB6C VA: 0x1082B6C
	private void .ctor(bool fNull) { }

	// RVA: 0x1082B78 Offset: 0x107EB78 VA: 0x1082B78
	public void .ctor(int value) { }

	// RVA: 0x107CF7C Offset: 0x1078F7C VA: 0x107CF7C Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107CF8C Offset: 0x1078F8C VA: 0x107CF8C
	public int get_Value() { }

	// RVA: 0x1082B88 Offset: 0x107EB88 VA: 0x1082B88
	public static SqlInt32 op_Implicit(int x) { }

	// RVA: 0x1082B98 Offset: 0x107EB98 VA: 0x1082B98 Slot: 3
	public override string ToString() { }

	// RVA: 0x1082C20 Offset: 0x107EC20 VA: 0x1082C20
	public static SqlInt32 op_UnaryNegation(SqlInt32 x) { }

	// RVA: 0x1082CBC Offset: 0x107ECBC VA: 0x1082CBC
	public static SqlInt32 op_Addition(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x1082E04 Offset: 0x107EE04 VA: 0x1082E04
	public static SqlInt32 op_Subtraction(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x1082F40 Offset: 0x107EF40 VA: 0x1082F40
	public static SqlInt32 op_Multiply(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x1083090 Offset: 0x107F090 VA: 0x1083090
	public static SqlInt32 op_Division(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x1083204 Offset: 0x107F204 VA: 0x1083204
	public static SqlInt32 op_Implicit(SqlByte x) { }

	// RVA: 0x10832D4 Offset: 0x107F2D4 VA: 0x10832D4
	public static SqlInt32 op_Implicit(SqlInt16 x) { }

	// RVA: 0x10833A4 Offset: 0x107F3A4 VA: 0x10833A4
	public static SqlInt32 op_Explicit(SqlInt64 x) { }

	// RVA: 0x1082DF8 Offset: 0x107EDF8 VA: 0x1082DF8
	private static bool SameSignInt(int x, int y) { }

	// RVA: 0x10834C0 Offset: 0x107F4C0 VA: 0x10834C0
	public static SqlBoolean op_Equality(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x108359C Offset: 0x107F59C VA: 0x108359C
	public static SqlBoolean op_LessThan(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x1083678 Offset: 0x107F678 VA: 0x1083678
	public static SqlBoolean op_GreaterThan(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x1083754 Offset: 0x107F754 VA: 0x1083754
	public static SqlBoolean LessThan(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x10837C0 Offset: 0x107F7C0 VA: 0x10837C0
	public static SqlBoolean GreaterThan(SqlInt32 x, SqlInt32 y) { }

	// RVA: 0x108382C Offset: 0x107F82C VA: 0x108382C
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x1083884 Offset: 0x107F884 VA: 0x1083884
	public SqlInt64 ToSqlInt64() { }

	// RVA: 0x10839A4 Offset: 0x107F9A4 VA: 0x10839A4 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x1083AA8 Offset: 0x107FAA8 VA: 0x1083AA8
	public int CompareTo(SqlInt32 value) { }

	// RVA: 0x1083BF4 Offset: 0x107FBF4 VA: 0x1083BF4 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1083D30 Offset: 0x107FD30 VA: 0x1083D30 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1083DC0 Offset: 0x107FDC0 VA: 0x1083DC0 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1083DC8 Offset: 0x107FDC8 VA: 0x1083DC8 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1083EE8 Offset: 0x107FEE8 VA: 0x1083EE8 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1084018 Offset: 0x1080018 VA: 0x1084018
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x10840A4 Offset: 0x10800A4 VA: 0x10840A4
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlInt64 : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4072
{
	// Fields
	private bool m_fNotNull; // 0x0
	private long m_value; // 0x8
	private static readonly long s_lLowIntMask; // 0x0
	private static readonly long s_lHighIntMask; // 0x8
	public static readonly SqlInt64 Null; // 0x10
	public static readonly SqlInt64 Zero; // 0x20
	public static readonly SqlInt64 MinValue; // 0x30
	public static readonly SqlInt64 MaxValue; // 0x40

	// Properties
	public bool IsNull { get; }
	public long Value { get; }

	// Methods

	// RVA: 0x1084120 Offset: 0x1080120 VA: 0x1084120
	private void .ctor(bool fNull) { }

	// RVA: 0x108412C Offset: 0x108012C VA: 0x108412C
	public void .ctor(long value) { }

	// RVA: 0x107D100 Offset: 0x1079100 VA: 0x107D100 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107D110 Offset: 0x1079110 VA: 0x107D110
	public long get_Value() { }

	// RVA: 0x108413C Offset: 0x108013C VA: 0x108413C
	public static SqlInt64 op_Implicit(long x) { }

	// RVA: 0x1084148 Offset: 0x1080148 VA: 0x1084148 Slot: 3
	public override string ToString() { }

	// RVA: 0x10841D0 Offset: 0x10801D0 VA: 0x10841D0
	public static SqlInt64 op_UnaryNegation(SqlInt64 x) { }

	// RVA: 0x108426C Offset: 0x108026C VA: 0x108426C
	public static SqlInt64 op_Addition(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x10843BC Offset: 0x10803BC VA: 0x10843BC
	public static SqlInt64 op_Subtraction(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x10844FC Offset: 0x10804FC VA: 0x10844FC
	public static SqlInt64 op_Multiply(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x1084688 Offset: 0x1080688 VA: 0x1084688
	public static SqlInt64 op_Division(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x10847E0 Offset: 0x10807E0 VA: 0x10847E0
	public static SqlInt64 op_Modulus(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x108493C Offset: 0x108093C VA: 0x108493C
	public static SqlInt64 op_Implicit(SqlByte x) { }

	// RVA: 0x1082320 Offset: 0x107E320 VA: 0x1082320
	public static SqlInt64 op_Implicit(SqlInt16 x) { }

	// RVA: 0x10838DC Offset: 0x107F8DC VA: 0x10838DC
	public static SqlInt64 op_Implicit(SqlInt32 x) { }

	// RVA: 0x107E128 Offset: 0x107A128 VA: 0x107E128
	public static SqlInt64 op_Explicit(SqlDecimal x) { }

	// RVA: 0x10843AC Offset: 0x10803AC VA: 0x10843AC
	private static bool SameSignLong(long x, long y) { }

	// RVA: 0x1084A04 Offset: 0x1080A04 VA: 0x1084A04
	public static SqlBoolean op_Equality(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x1084AE8 Offset: 0x1080AE8 VA: 0x1084AE8
	public static SqlBoolean op_LessThan(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x1084BCC Offset: 0x1080BCC VA: 0x1084BCC
	public static SqlBoolean op_GreaterThan(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x1084CB0 Offset: 0x1080CB0 VA: 0x1084CB0
	public static SqlBoolean LessThan(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x1084D34 Offset: 0x1080D34 VA: 0x1084D34
	public static SqlBoolean GreaterThan(SqlInt64 x, SqlInt64 y) { }

	// RVA: 0x1084DB8 Offset: 0x1080DB8 VA: 0x1084DB8
	public SqlByte ToSqlByte() { }

	// RVA: 0x1084E20 Offset: 0x1080E20 VA: 0x1084E20
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x1084E7C Offset: 0x1080E7C VA: 0x1084E7C
	public SqlInt16 ToSqlInt16() { }

	// RVA: 0x1084EE0 Offset: 0x1080EE0 VA: 0x1084EE0
	public SqlInt32 ToSqlInt32() { }

	// RVA: 0x1084F3C Offset: 0x1080F3C VA: 0x1084F3C
	public SqlDecimal ToSqlDecimal() { }

	// RVA: 0x1084FC4 Offset: 0x1080FC4 VA: 0x1084FC4 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x10850CC Offset: 0x10810CC VA: 0x10850CC
	public int CompareTo(SqlInt64 value) { }

	// RVA: 0x1085234 Offset: 0x1081234 VA: 0x1085234 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1085378 Offset: 0x1081378 VA: 0x1085378 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1085408 Offset: 0x1081408 VA: 0x1085408 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1085410 Offset: 0x1081410 VA: 0x1085410 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1085530 Offset: 0x1081530 VA: 0x1085530 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1085660 Offset: 0x1081660 VA: 0x1085660
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x10856EC Offset: 0x10816EC VA: 0x10856EC
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlMoney : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4073
{
	// Fields
	private bool _fNotNull; // 0x0
	private long _value; // 0x8
	internal static readonly int s_iMoneyScale; // 0x0
	private static readonly long s_lTickBase; // 0x8
	private static readonly double s_dTickBase; // 0x10
	private static readonly long s_minLong; // 0x18
	private static readonly long s_maxLong; // 0x20
	public static readonly SqlMoney Null; // 0x28
	public static readonly SqlMoney Zero; // 0x38
	public static readonly SqlMoney MinValue; // 0x48
	public static readonly SqlMoney MaxValue; // 0x58

	// Properties
	public bool IsNull { get; }
	public Decimal Value { get; }

	// Methods

	// RVA: 0x1085784 Offset: 0x1081784 VA: 0x1085784
	private void .ctor(bool fNull) { }

	// RVA: 0x1085790 Offset: 0x1081790 VA: 0x1085790
	internal void .ctor(long value, int ignored) { }

	// RVA: 0x10857A0 Offset: 0x10817A0 VA: 0x10857A0
	public void .ctor(int value) { }

	// RVA: 0x108581C Offset: 0x108181C VA: 0x108581C
	public void .ctor(long value) { }

	// RVA: 0x108591C Offset: 0x108191C VA: 0x108591C
	public void .ctor(Decimal value) { }

	// RVA: 0x107D24C Offset: 0x107924C VA: 0x107D24C Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x1085A7C Offset: 0x1081A7C VA: 0x1085A7C
	public Decimal get_Value() { }

	// RVA: 0x107D25C Offset: 0x107925C VA: 0x107D25C
	public Decimal ToDecimal() { }

	// RVA: 0x107FC7C Offset: 0x107BC7C VA: 0x107FC7C
	public double ToDouble() { }

	// RVA: 0x1085B08 Offset: 0x1081B08 VA: 0x1085B08
	public static SqlMoney op_Implicit(Decimal x) { }

	// RVA: 0x1085B34 Offset: 0x1081B34 VA: 0x1085B34
	public static SqlMoney op_Implicit(long x) { }

	// RVA: 0x1085B90 Offset: 0x1081B90 VA: 0x1085B90 Slot: 3
	public override string ToString() { }

	// RVA: 0x1085CA0 Offset: 0x1081CA0 VA: 0x1085CA0
	public static SqlMoney op_UnaryNegation(SqlMoney x) { }

	// RVA: 0x1085DA0 Offset: 0x1081DA0 VA: 0x1085DA0
	public static SqlMoney op_Addition(SqlMoney x, SqlMoney y) { }

	// RVA: 0x1085F54 Offset: 0x1081F54 VA: 0x1085F54
	public static SqlMoney op_Subtraction(SqlMoney x, SqlMoney y) { }

	// RVA: 0x1086104 Offset: 0x1082104 VA: 0x1086104
	public static SqlMoney op_Multiply(SqlMoney x, SqlMoney y) { }

	// RVA: 0x1086240 Offset: 0x1082240 VA: 0x1086240
	public static SqlMoney op_Division(SqlMoney x, SqlMoney y) { }

	// RVA: 0x108637C Offset: 0x108237C VA: 0x108637C
	public static SqlMoney op_Implicit(SqlByte x) { }

	// RVA: 0x108644C Offset: 0x108244C VA: 0x108644C
	public static SqlMoney op_Implicit(SqlInt16 x) { }

	// RVA: 0x1086514 Offset: 0x1082514 VA: 0x1086514
	public static SqlMoney op_Implicit(SqlInt32 x) { }

	// RVA: 0x10865DC Offset: 0x10825DC VA: 0x10865DC
	public static SqlMoney op_Implicit(SqlInt64 x) { }

	// RVA: 0x107E374 Offset: 0x107A374 VA: 0x107E374
	public static SqlMoney op_Explicit(SqlDecimal x) { }

	// RVA: 0x10866A4 Offset: 0x10826A4 VA: 0x10866A4
	public static SqlBoolean op_Equality(SqlMoney x, SqlMoney y) { }

	// RVA: 0x1086788 Offset: 0x1082788 VA: 0x1086788
	public static SqlBoolean op_LessThan(SqlMoney x, SqlMoney y) { }

	// RVA: 0x108686C Offset: 0x108286C VA: 0x108686C
	public static SqlBoolean op_GreaterThan(SqlMoney x, SqlMoney y) { }

	// RVA: 0x1086950 Offset: 0x1082950 VA: 0x1086950
	public static SqlBoolean LessThan(SqlMoney x, SqlMoney y) { }

	// RVA: 0x10869D4 Offset: 0x10829D4 VA: 0x10869D4
	public static SqlBoolean GreaterThan(SqlMoney x, SqlMoney y) { }

	// RVA: 0x1086A58 Offset: 0x1082A58 VA: 0x1086A58
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x1086AB4 Offset: 0x1082AB4 VA: 0x1086AB4
	public SqlDecimal ToSqlDecimal() { }

	// RVA: 0x1086B3C Offset: 0x1082B3C VA: 0x1086B3C Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x1086C44 Offset: 0x1082C44 VA: 0x1086C44
	public int CompareTo(SqlMoney value) { }

	// RVA: 0x1086DAC Offset: 0x1082DAC VA: 0x1086DAC Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1086EF0 Offset: 0x1082EF0 VA: 0x1086EF0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1086F60 Offset: 0x1082F60 VA: 0x1086F60 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1086F68 Offset: 0x1082F68 VA: 0x1086F68 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x10870D8 Offset: 0x10830D8 VA: 0x10870D8 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1087228 Offset: 0x1083228 VA: 0x1087228
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x10872B4 Offset: 0x10832B4 VA: 0x10872B4
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlSingle : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4074
{
	// Fields
	private bool _fNotNull; // 0x0
	private float _value; // 0x4
	public static readonly SqlSingle Null; // 0x0
	public static readonly SqlSingle Zero; // 0x8
	public static readonly SqlSingle MinValue; // 0x10
	public static readonly SqlSingle MaxValue; // 0x18

	// Properties
	public bool IsNull { get; }
	public float Value { get; }

	// Methods

	// RVA: 0x108737C Offset: 0x108337C VA: 0x108737C
	private void .ctor(bool fNull) { }

	// RVA: 0x1087388 Offset: 0x1083388 VA: 0x1087388
	public void .ctor(float value) { }

	// RVA: 0x10873F8 Offset: 0x10833F8 VA: 0x10873F8
	public void .ctor(double value) { }

	// RVA: 0x107FB60 Offset: 0x107BB60 VA: 0x107FB60 Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107FB70 Offset: 0x107BB70 VA: 0x107FB70
	public float get_Value() { }

	// RVA: 0x108745C Offset: 0x108345C VA: 0x108745C
	public static SqlSingle op_Implicit(float x) { }

	// RVA: 0x1087478 Offset: 0x1083478 VA: 0x1087478 Slot: 3
	public override string ToString() { }

	// RVA: 0x1087500 Offset: 0x1083500 VA: 0x1087500
	public static SqlSingle op_UnaryNegation(SqlSingle x) { }

	// RVA: 0x10875A0 Offset: 0x10835A0 VA: 0x10875A0
	public static SqlSingle op_Addition(SqlSingle x, SqlSingle y) { }

	// RVA: 0x10876C0 Offset: 0x10836C0 VA: 0x10876C0
	public static SqlSingle op_Subtraction(SqlSingle x, SqlSingle y) { }

	// RVA: 0x10877E0 Offset: 0x10837E0 VA: 0x10877E0
	public static SqlSingle op_Multiply(SqlSingle x, SqlSingle y) { }

	// RVA: 0x1087900 Offset: 0x1083900 VA: 0x1087900
	public static SqlSingle op_Division(SqlSingle x, SqlSingle y) { }

	// RVA: 0x1087A5C Offset: 0x1083A5C VA: 0x1087A5C
	public static SqlSingle op_Implicit(SqlByte x) { }

	// RVA: 0x1087B30 Offset: 0x1083B30 VA: 0x1087B30
	public static SqlSingle op_Implicit(SqlInt16 x) { }

	// RVA: 0x1087BFC Offset: 0x1083BFC VA: 0x1087BFC
	public static SqlSingle op_Implicit(SqlInt32 x) { }

	// RVA: 0x1087CC4 Offset: 0x1083CC4 VA: 0x1087CC4
	public static SqlSingle op_Implicit(SqlInt64 x) { }

	// RVA: 0x1087D8C Offset: 0x1083D8C VA: 0x1087D8C
	public static SqlSingle op_Implicit(SqlMoney x) { }

	// RVA: 0x1087E50 Offset: 0x1083E50 VA: 0x1087E50
	public static SqlSingle op_Implicit(SqlDecimal x) { }

	// RVA: 0x1080134 Offset: 0x107C134 VA: 0x1080134
	public static SqlSingle op_Explicit(SqlDouble x) { }

	// RVA: 0x1087F14 Offset: 0x1083F14 VA: 0x1087F14
	public static SqlBoolean op_Equality(SqlSingle x, SqlSingle y) { }

	// RVA: 0x1087FF8 Offset: 0x1083FF8 VA: 0x1087FF8
	public static SqlBoolean op_LessThan(SqlSingle x, SqlSingle y) { }

	// RVA: 0x10880DC Offset: 0x10840DC VA: 0x10880DC
	public static SqlBoolean op_GreaterThan(SqlSingle x, SqlSingle y) { }

	// RVA: 0x10881C0 Offset: 0x10841C0 VA: 0x10881C0
	public static SqlBoolean LessThan(SqlSingle x, SqlSingle y) { }

	// RVA: 0x108822C Offset: 0x108422C VA: 0x108822C
	public static SqlBoolean GreaterThan(SqlSingle x, SqlSingle y) { }

	// RVA: 0x1088298 Offset: 0x1084298 VA: 0x1088298
	public SqlDouble ToSqlDouble() { }

	// RVA: 0x10882F0 Offset: 0x10842F0 VA: 0x10882F0 Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x10883F4 Offset: 0x10843F4 VA: 0x10883F4
	public int CompareTo(SqlSingle value) { }

	// RVA: 0x1088540 Offset: 0x1084540 VA: 0x1088540 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x108867C Offset: 0x108467C VA: 0x108867C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x108870C Offset: 0x108470C VA: 0x108870C Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1088714 Offset: 0x1084714 VA: 0x1088714 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1088834 Offset: 0x1084834 VA: 0x1088834 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1088970 Offset: 0x1084970 VA: 0x1088970
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x10889FC Offset: 0x10849FC VA: 0x10889FC
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
[Flags]
public enum SqlCompareOptions // TypeDefIndex: 4075
{
	// Fields
	public int value__; // 0x0
	public const SqlCompareOptions None = 0;
	public const SqlCompareOptions IgnoreCase = 1;
	public const SqlCompareOptions IgnoreNonSpace = 2;
	public const SqlCompareOptions IgnoreKanaType = 8;
	public const SqlCompareOptions IgnoreWidth = 16;
	public const SqlCompareOptions BinarySort = 32768;
	public const SqlCompareOptions BinarySort2 = 16384;
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public struct SqlString : INullable, IComparable, IXmlSerializable // TypeDefIndex: 4076
{
	// Fields
	private string m_value; // 0x0
	private CompareInfo m_cmpInfo; // 0x8
	private int m_lcid; // 0x10
	private SqlCompareOptions m_flag; // 0x14
	private bool m_fNotNull; // 0x18
	public static readonly SqlString Null; // 0x0
	internal static readonly UnicodeEncoding s_unicodeEncoding; // 0x20
	public static readonly int IgnoreCase; // 0x28
	public static readonly int IgnoreWidth; // 0x2C
	public static readonly int IgnoreNonSpace; // 0x30
	public static readonly int IgnoreKanaType; // 0x34
	public static readonly int BinarySort; // 0x38
	public static readonly int BinarySort2; // 0x3C
	private static readonly SqlCompareOptions s_iDefaultFlag; // 0x40
	private static readonly CompareOptions s_iValidCompareOptionMask; // 0x44
	internal static readonly SqlCompareOptions s_iValidSqlCompareOptionMask; // 0x48
	internal static readonly int s_lcidUSEnglish; // 0x4C
	private static readonly int s_lcidBinary; // 0x50

	// Properties
	public bool IsNull { get; }
	public string Value { get; }

	// Methods

	// RVA: 0x1088A8C Offset: 0x1084A8C VA: 0x1088A8C
	private void .ctor(bool fNull) { }

	// RVA: 0x1088A9C Offset: 0x1084A9C VA: 0x1088A9C
	public void .ctor(string data, int lcid, SqlCompareOptions compareOptions) { }

	// RVA: 0x1088BD4 Offset: 0x1084BD4 VA: 0x1088BD4
	public void .ctor(string data) { }

	// RVA: 0x1088C84 Offset: 0x1084C84 VA: 0x1088C84
	private void .ctor(int lcid, SqlCompareOptions compareOptions, string data, CompareInfo cmpInfo) { }

	// RVA: 0x107680C Offset: 0x107280C VA: 0x107680C Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x107681C Offset: 0x107281C VA: 0x107681C
	public string get_Value() { }

	// RVA: 0x1088D18 Offset: 0x1084D18 VA: 0x1088D18
	private void SetCompareInfo() { }

	// RVA: 0x1088D98 Offset: 0x1084D98 VA: 0x1088D98
	public static SqlString op_Implicit(string x) { }

	// RVA: 0x1088DAC Offset: 0x1084DAC VA: 0x1088DAC Slot: 3
	public override string ToString() { }

	// RVA: 0x1088E20 Offset: 0x1084E20 VA: 0x1088E20
	public static SqlString op_Addition(SqlString x, SqlString y) { }

	// RVA: 0x1088F6C Offset: 0x1084F6C VA: 0x1088F6C
	private static int StringCompare(SqlString x, SqlString y) { }

	// RVA: 0x108958C Offset: 0x108558C VA: 0x108958C
	private static SqlBoolean Compare(SqlString x, SqlString y, EComparison ecExpectedResult) { }

	// RVA: 0x10896F8 Offset: 0x10856F8 VA: 0x10896F8
	public static SqlBoolean op_Equality(SqlString x, SqlString y) { }

	// RVA: 0x1088B28 Offset: 0x1084B28 VA: 0x1088B28
	private static void ValidateSqlCompareOptions(SqlCompareOptions compareOptions) { }

	// RVA: 0x10894E4 Offset: 0x10854E4 VA: 0x10894E4
	public static CompareOptions CompareOptionsFromSqlCompareOptions(SqlCompareOptions compareOptions) { }

	// RVA: 0x1089790 Offset: 0x1085790 VA: 0x1089790
	private bool FBinarySort() { }

	// RVA: 0x10891A4 Offset: 0x10851A4 VA: 0x10891A4
	private static int CompareBinary(SqlString x, SqlString y) { }

	// RVA: 0x108936C Offset: 0x108536C VA: 0x108936C
	private static int CompareBinary2(SqlString x, SqlString y) { }

	// RVA: 0x10897FC Offset: 0x10857FC VA: 0x10897FC Slot: 5
	public int CompareTo(object value) { }

	// RVA: 0x1089914 Offset: 0x1085914 VA: 0x1089914
	public int CompareTo(SqlString value) { }

	// RVA: 0x1089A14 Offset: 0x1085A14 VA: 0x1089A14 Slot: 0
	public override bool Equals(object value) { }

	// RVA: 0x1089BD0 Offset: 0x1085BD0 VA: 0x1089BD0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1089DE8 Offset: 0x1085DE8 VA: 0x1089DE8 Slot: 6
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x1089DF0 Offset: 0x1085DF0 VA: 0x1089DF0 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader reader) { }

	// RVA: 0x1089EE4 Offset: 0x1085EE4 VA: 0x1089EE4 Slot: 8
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x1089FE0 Offset: 0x1085FE0 VA: 0x1089FE0
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x108A06C Offset: 0x108606C VA: 0x108A06C
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
internal enum EComparison // TypeDefIndex: 4077
{
	// Fields
	public int value__; // 0x0
	public const EComparison LT = 0;
	public const EComparison LE = 1;
	public const EComparison EQ = 2;
	public const EComparison GE = 3;
	public const EComparison GT = 4;
	public const EComparison NE = 5;
}


// Namespace: System.Data.SqlTypes
[Serializable]
public class SqlTypeException : SystemException // TypeDefIndex: 4078
{
	// Methods

	// RVA: 0x108A118 Offset: 0x1086118 VA: 0x108A118
	public void .ctor() { }

	// RVA: 0x10762A4 Offset: 0x10722A4 VA: 0x10762A4
	public void .ctor(string message) { }

	// RVA: 0x108A178 Offset: 0x1086178 VA: 0x108A178
	public void .ctor(string message, Exception e) { }

	// RVA: 0x108A19C Offset: 0x108619C VA: 0x108A19C
	protected void .ctor(SerializationInfo si, StreamingContext sc) { }

	// RVA: 0x108A1EC Offset: 0x10861EC VA: 0x108A1EC
	private static SerializationInfo SqlTypeExceptionSerialization(SerializationInfo si, StreamingContext sc) { }
}


// Namespace: System.Data.SqlTypes
[Serializable]
public sealed class SqlNullValueException : SqlTypeException // TypeDefIndex: 4079
{
	// Methods

	// RVA: 0x1076068 Offset: 0x1072068 VA: 0x1076068
	public void .ctor() { }

	// RVA: 0x108A2E4 Offset: 0x10862E4 VA: 0x108A2E4
	public void .ctor(string message) { }

	// RVA: 0x108A2C0 Offset: 0x10862C0 VA: 0x108A2C0
	public void .ctor(string message, Exception e) { }

	// RVA: 0x108A30C Offset: 0x108630C VA: 0x108A30C
	private void .ctor(SerializationInfo si, StreamingContext sc) { }

	// RVA: 0x108A36C Offset: 0x108636C VA: 0x108A36C
	private static SerializationInfo SqlNullValueExceptionSerialization(SerializationInfo si, StreamingContext sc) { }
}


// Namespace: System.Data.SqlTypes
[Serializable]
public sealed class SqlTruncateException : SqlTypeException // TypeDefIndex: 4080
{
	// Methods

	// RVA: 0x107D5DC Offset: 0x10795DC VA: 0x107D5DC
	public void .ctor() { }

	// RVA: 0x108A464 Offset: 0x1086464 VA: 0x108A464
	public void .ctor(string message) { }

	// RVA: 0x108A440 Offset: 0x1086440 VA: 0x108A440
	public void .ctor(string message, Exception e) { }

	// RVA: 0x108A48C Offset: 0x108648C VA: 0x108A48C
	private void .ctor(SerializationInfo si, StreamingContext sc) { }

	// RVA: 0x108A4EC Offset: 0x10864EC VA: 0x108A4EC
	private static SerializationInfo SqlTruncateExceptionSerialization(SerializationInfo si, StreamingContext sc) { }
}


// Namespace: System.Data.SqlTypes
internal abstract class SqlStreamChars // TypeDefIndex: 4081
{
	// Properties
	public abstract long Length { get; }
	public abstract long Position { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract long get_Length();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract long get_Position();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract int Read(char[] buffer, int offset, int count);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract long Seek(long offset, SeekOrigin origin);
}


// Namespace: System.Data.SqlTypes
[XmlSchemaProvider("GetXsdType")]
[Serializable]
public sealed class SqlXml : INullable, IXmlSerializable // TypeDefIndex: 4082
{
	// Fields
	private static readonly Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> s_sqlReaderDelegate; // 0x0
	private static readonly XmlReaderSettings s_defaultXmlReaderSettings; // 0x8
	private static readonly XmlReaderSettings s_defaultXmlReaderSettingsCloseInput; // 0x10
	private static MethodInfo s_createSqlReaderMethodInfo; // 0x18
	private MethodInfo _createSqlReaderMethodInfo; // 0x10
	private bool _fNotNull; // 0x18
	private Stream _stream; // 0x20
	private bool _firstCreateReader; // 0x28

	// Properties
	private static MethodInfo CreateSqlReaderMethodInfo { get; }
	public bool IsNull { get; }

	// Methods

	// RVA: 0x108A5C0 Offset: 0x10865C0 VA: 0x108A5C0
	public void .ctor() { }

	// RVA: 0x108A5FC Offset: 0x10865FC VA: 0x108A5FC
	public XmlReader CreateReader() { }

	// RVA: 0x108A8F0 Offset: 0x10868F0 VA: 0x108A8F0
	internal static XmlReader CreateSqlXmlReader(Stream stream, bool closeInput = False, bool throwTargetInvocationExceptions = False) { }

	// RVA: 0x108AAB8 Offset: 0x1086AB8 VA: 0x108AAB8
	private static Func<Stream, XmlReaderSettings, XmlParserContext, XmlReader> CreateSqlReaderDelegate() { }

	// RVA: 0x108A7CC Offset: 0x10867CC VA: 0x108A7CC
	private static MethodInfo get_CreateSqlReaderMethodInfo() { }

	// RVA: 0x108A74C Offset: 0x108674C VA: 0x108A74C Slot: 4
	public bool get_IsNull() { }

	// RVA: 0x108A5E8 Offset: 0x10865E8 VA: 0x108A5E8
	private void SetNull() { }

	// RVA: 0x108ABB0 Offset: 0x1086BB0 VA: 0x108ABB0 Slot: 5
	private XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema() { }

	// RVA: 0x108ABB8 Offset: 0x1086BB8 VA: 0x108ABB8 Slot: 6
	private void System.Xml.Serialization.IXmlSerializable.ReadXml(XmlReader r) { }

	// RVA: 0x108AD88 Offset: 0x1086D88 VA: 0x108AD88 Slot: 7
	private void System.Xml.Serialization.IXmlSerializable.WriteXml(XmlWriter writer) { }

	// RVA: 0x108AED8 Offset: 0x1086ED8 VA: 0x108AED8
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet) { }

	// RVA: 0x108AF64 Offset: 0x1086F64 VA: 0x108AF64
	private static void .cctor() { }
}


// Namespace: System.Data.SqlTypes
internal sealed class SqlXmlStreamWrapper : Stream // TypeDefIndex: 4083
{
	// Fields
	private Stream _stream; // 0x28
	private long _lPosition; // 0x30
	private bool _isClosed; // 0x38

	// Properties
	public override bool CanRead { get; }
	public override bool CanSeek { get; }
	public override bool CanWrite { get; }
	public override long Length { get; }
	public override long Position { get; set; }

	// Methods

	// RVA: 0x108A75C Offset: 0x108675C VA: 0x108A75C
	internal void .ctor(Stream stream) { }

	// RVA: 0x108B040 Offset: 0x1087040 VA: 0x108B040 Slot: 5
	public override bool get_CanRead() { }

	// RVA: 0x108B0E8 Offset: 0x10870E8 VA: 0x108B0E8 Slot: 6
	public override bool get_CanSeek() { }

	// RVA: 0x108B120 Offset: 0x1087120 VA: 0x108B120 Slot: 8
	public override bool get_CanWrite() { }

	// RVA: 0x108B158 Offset: 0x1087158 VA: 0x108B158 Slot: 9
	public override long get_Length() { }

	// RVA: 0x108B2A8 Offset: 0x10872A8 VA: 0x108B2A8 Slot: 10
	public override long get_Position() { }

	// RVA: 0x108B304 Offset: 0x1087304 VA: 0x108B304 Slot: 11
	public override void set_Position(long value) { }

	// RVA: 0x108B3D8 Offset: 0x10873D8 VA: 0x108B3D8 Slot: 25
	public override long Seek(long offset, SeekOrigin origin) { }

	// RVA: 0x108B540 Offset: 0x1087540 VA: 0x108B540 Slot: 27
	public override int Read(byte[] buffer, int offset, int count) { }

	// RVA: 0x108B774 Offset: 0x1087774 VA: 0x108B774 Slot: 30
	public override void Write(byte[] buffer, int offset, int count) { }

	// RVA: 0x108B9A8 Offset: 0x10879A8 VA: 0x108B9A8 Slot: 29
	public override int ReadByte() { }

	// RVA: 0x108BABC Offset: 0x1087ABC VA: 0x108BABC Slot: 32
	public override void WriteByte(byte value) { }

	// RVA: 0x108BBA0 Offset: 0x1087BA0 VA: 0x108BBA0 Slot: 26
	public override void SetLength(long value) { }

	// RVA: 0x108BC34 Offset: 0x1087C34 VA: 0x108BC34 Slot: 16
	public override void Flush() { }

	// RVA: 0x108BC50 Offset: 0x1087C50 VA: 0x108BC50 Slot: 15
	protected override void Dispose(bool disposing) { }

	// RVA: 0x108B22C Offset: 0x108722C VA: 0x108B22C
	private void ThrowIfStreamCannotSeek(string method) { }

	// RVA: 0x108B6F8 Offset: 0x10876F8 VA: 0x108B6F8
	private void ThrowIfStreamCannotRead(string method) { }

	// RVA: 0x108B92C Offset: 0x108792C VA: 0x108B92C
	private void ThrowIfStreamCannotWrite(string method) { }

	// RVA: 0x108B1C4 Offset: 0x10871C4 VA: 0x108B1C4
	private void ThrowIfStreamClosed(string method) { }

	// RVA: 0x108B078 Offset: 0x1087078 VA: 0x108B078
	private bool IsStreamClosed() { }
}


// Namespace: 
private enum ObjectStorage.Families // TypeDefIndex: 4084
{
	// Fields
	public int value__; // 0x0
	public const ObjectStorage.Families DATETIME = 0;
	public const ObjectStorage.Families NUMBER = 1;
	public const ObjectStorage.Families STRING = 2;
	public const ObjectStorage.Families BOOLEAN = 3;
	public const ObjectStorage.Families ARRAY = 4;
}


// Namespace: 
private class ObjectStorage.TempAssemblyComparer : IEqualityComparer<KeyValuePair<Type, XmlRootAttribute>> // TypeDefIndex: 4085
{
	// Fields
	internal static readonly IEqualityComparer<KeyValuePair<Type, XmlRootAttribute>> s_default; // 0x0

	// Methods

	// RVA: 0x108F2FC Offset: 0x108B2FC VA: 0x108F2FC
	private void .ctor() { }

	// RVA: 0x108F304 Offset: 0x108B304 VA: 0x108F304 Slot: 4
	public bool Equals(KeyValuePair<Type, XmlRootAttribute> x, KeyValuePair<Type, XmlRootAttribute> y) { }

	// RVA: 0x108F430 Offset: 0x108B430 VA: 0x108F430 Slot: 5
	public int GetHashCode(KeyValuePair<Type, XmlRootAttribute> obj) { }

	// RVA: 0x108F48C Offset: 0x108B48C VA: 0x108F48C
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class ObjectStorage : DataStorage // TypeDefIndex: 4086
{
	// Fields
	private static readonly object s_defaultValue; // 0x0
	private object[] _values; // 0x50
	private readonly bool _implementsIXmlSerializable; // 0x58
	private static readonly object s_tempAssemblyCacheLock; // 0x8
	private static Dictionary<KeyValuePair<Type, XmlRootAttribute>, XmlSerializer> s_tempAssemblyCache; // 0x10
	private static readonly XmlSerializerFactory s_serializerFactory; // 0x18

	// Methods

	// RVA: 0x108BC64 Offset: 0x1087C64 VA: 0x108BC64
	internal void .ctor(DataColumn column, Type type) { }

	// RVA: 0x108BE0C Offset: 0x1087E0C VA: 0x108BE0C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x108BE3C Offset: 0x1087E3C VA: 0x108BE3C Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x108C48C Offset: 0x108848C VA: 0x108C48C Slot: 6
	public override int CompareValueTo(int recordNo1, object value) { }

	// RVA: 0x108C670 Offset: 0x1088670 VA: 0x108C670
	private int CompareTo(object valueNo1, object valueNo2) { }

	// RVA: 0x108BFF0 Offset: 0x1087FF0 VA: 0x108BFF0
	private int CompareWithFamilies(object valueNo1, object valueNo2) { }

	// RVA: 0x108C93C Offset: 0x108893C VA: 0x108C93C Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x108C9B0 Offset: 0x10889B0 VA: 0x108C9B0 Slot: 9
	public override object Get(int recordNo) { }

	// RVA: 0x108C848 Offset: 0x1088848 VA: 0x108C848
	private ObjectStorage.Families GetFamily(Type dataType) { }

	// RVA: 0x108C9EC Offset: 0x10889EC VA: 0x108C9EC Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x108CA24 Offset: 0x1088A24 VA: 0x108CA24 Slot: 12
	public override void Set(int recordNo, object value) { }

	// RVA: 0x108D2C0 Offset: 0x10892C0 VA: 0x108D2C0 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x108D378 Offset: 0x1089378 VA: 0x108D378 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x108D944 Offset: 0x1089944 VA: 0x108D944 Slot: 15
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib) { }

	// RVA: 0x108E54C Offset: 0x108A54C VA: 0x108E54C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x108EBAC Offset: 0x108ABAC VA: 0x108EBAC Slot: 17
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib) { }

	// RVA: 0x108ED10 Offset: 0x108AD10 VA: 0x108ED10 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x108ED58 Offset: 0x108AD58 VA: 0x108ED58 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x108EF54 Offset: 0x108AF54 VA: 0x108EF54 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }

	// RVA: 0x108F118 Offset: 0x108B118 VA: 0x108F118
	internal static void VerifyIDynamicMetaObjectProvider(Type type) { }

	// RVA: 0x108D8D0 Offset: 0x10898D0 VA: 0x108D8D0
	internal static XmlSerializer GetXmlSerializer(Type type) { }

	// RVA: 0x108E034 Offset: 0x108A034 VA: 0x108E034
	internal static XmlSerializer GetXmlSerializer(Type type, XmlRootAttribute attribute) { }

	// RVA: 0x108F244 Offset: 0x108B244 VA: 0x108F244
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal static class ADP // TypeDefIndex: 4087
{
	// Fields
	private static readonly Type s_stackOverflowType; // 0x0
	private static readonly Type s_outOfMemoryType; // 0x8
	private static readonly Type s_threadAbortType; // 0x10
	private static readonly Type s_nullReferenceType; // 0x18
	private static readonly Type s_accessViolationType; // 0x20
	private static readonly Type s_securityType; // 0x28
	internal static readonly string StrEmpty; // 0x30
	internal static readonly string[] AzureSqlServerEndpoints; // 0x38
	internal static readonly IntPtr PtrZero; // 0x40
	internal static readonly int PtrSize; // 0x48

	// Methods

	// RVA: 0x108F4E8 Offset: 0x108B4E8 VA: 0x108F4E8
	private static void TraceException(string trace, Exception e) { }

	// RVA: 0x108F4EC Offset: 0x108B4EC VA: 0x108F4EC
	internal static void TraceExceptionAsReturnValue(Exception e) { }

	// RVA: 0x108F54C Offset: 0x108B54C VA: 0x108F54C
	internal static void TraceExceptionWithoutRethrow(Exception e) { }

	// RVA: 0x108F5AC Offset: 0x108B5AC VA: 0x108F5AC
	internal static ArgumentException Argument(string error) { }

	// RVA: 0x108F638 Offset: 0x108B638 VA: 0x108F638
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string parameterName) { }

	// RVA: 0x108F6C4 Offset: 0x108B6C4 VA: 0x108F6C4
	internal static ArgumentOutOfRangeException ArgumentOutOfRange(string message, string parameterName) { }

	// RVA: 0x108F758 Offset: 0x108B758 VA: 0x108F758
	internal static InvalidOperationException InvalidOperation(string error) { }

	// RVA: 0x108F7E4 Offset: 0x108B7E4 VA: 0x108F7E4
	internal static NotSupportedException NotSupported(string error) { }

	// RVA: 0x108F870 Offset: 0x108B870 VA: 0x108F870
	internal static bool IsCatchableExceptionType(Exception e) { }

	// RVA: 0x108FA7C Offset: 0x108BA7C VA: 0x108FA7C
	internal static bool IsCatchableOrSecurityExceptionType(Exception e) { }

	// RVA: 0x108FC50 Offset: 0x108BC50 VA: 0x108FC50
	internal static ArgumentOutOfRangeException InvalidEnumerationValue(Type type, int value) { }

	// RVA: 0x108FD5C Offset: 0x108BD5C VA: 0x108FD5C
	internal static Exception InvalidSeekOrigin(string parameterName) { }

	// RVA: 0x108FDC8 Offset: 0x108BDC8 VA: 0x108FDC8
	internal static ArgumentOutOfRangeException InvalidAcceptRejectRule(AcceptRejectRule value) { }

	// RVA: 0x108FE78 Offset: 0x108BE78 VA: 0x108FE78
	internal static ArgumentOutOfRangeException InvalidMissingSchemaAction(MissingSchemaAction value) { }

	// RVA: 0x108FF28 Offset: 0x108BF28 VA: 0x108FF28
	internal static ArgumentOutOfRangeException InvalidRule(Rule value) { }

	// RVA: 0x108FFD8 Offset: 0x108BFD8 VA: 0x108FFD8
	internal static Exception WrongType(Type got, Type expected) { }

	// RVA: 0x109009C Offset: 0x108C09C VA: 0x109009C
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class BigIntegerStorage : DataStorage // TypeDefIndex: 4088
{
	// Fields
	private BigInteger[] _values; // 0x50

	// Methods

	// RVA: 0x1090374 Offset: 0x108C374 VA: 0x1090374
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109051C Offset: 0x108C51C VA: 0x109051C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109054C Offset: 0x108C54C VA: 0x109054C Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10906D4 Offset: 0x108C6D4 VA: 0x10906D4 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x1090824 Offset: 0x108C824 VA: 0x1090824
	internal static BigInteger ConvertToBigInteger(object value, IFormatProvider formatProvider) { }

	// RVA: 0x1090FF8 Offset: 0x108CFF8 VA: 0x1090FF8
	internal static object ConvertFromBigInteger(BigInteger value, Type type, IFormatProvider formatProvider) { }

	// RVA: 0x109178C Offset: 0x108D78C VA: 0x109178C Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x1091848 Offset: 0x108D848 VA: 0x1091848 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10918DC Offset: 0x108D8DC VA: 0x10918DC Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10919D0 Offset: 0x108D9D0 VA: 0x10919D0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x1091AEC Offset: 0x108DAEC VA: 0x1091AEC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x1091C28 Offset: 0x108DC28 VA: 0x1091C28 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x1091CD8 Offset: 0x108DCD8 VA: 0x1091CD8 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x1091DC8 Offset: 0x108DDC8 VA: 0x1091DC8 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x1091E10 Offset: 0x108DE10 VA: 0x1091E10 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1091F14 Offset: 0x108DF14 VA: 0x1091F14 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class BooleanStorage : DataStorage // TypeDefIndex: 4089
{
	// Fields
	private bool[] _values; // 0x50

	// Methods

	// RVA: 0x1091FA8 Offset: 0x108DFA8 VA: 0x1091FA8
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109209C Offset: 0x108E09C VA: 0x109209C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109244C Offset: 0x108E44C VA: 0x109244C Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x1092518 Offset: 0x108E518 VA: 0x1092518 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x1092630 Offset: 0x108E630 VA: 0x1092630 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x1092784 Offset: 0x108E784 VA: 0x1092784 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10927D8 Offset: 0x108E7D8 VA: 0x10927D8 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x1092874 Offset: 0x108E874 VA: 0x1092874 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10929FC Offset: 0x108E9FC VA: 0x10929FC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x1092ABC Offset: 0x108EABC VA: 0x1092ABC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x1092B4C Offset: 0x108EB4C VA: 0x1092B4C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x1092BE4 Offset: 0x108EBE4 VA: 0x1092BE4 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x1092C2C Offset: 0x108EC2C VA: 0x1092C2C Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1092D2C Offset: 0x108ED2C VA: 0x1092D2C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class ByteStorage : DataStorage // TypeDefIndex: 4090
{
	// Fields
	private byte[] _values; // 0x50

	// Methods

	// RVA: 0x1092DC0 Offset: 0x108EDC0 VA: 0x1092DC0
	internal void .ctor(DataColumn column) { }

	// RVA: 0x1092EB4 Offset: 0x108EEB4 VA: 0x1092EB4 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109367C Offset: 0x108F67C VA: 0x109367C Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10936EC Offset: 0x108F6EC VA: 0x10936EC Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10937F0 Offset: 0x108F7F0 VA: 0x10937F0 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x1093940 Offset: 0x108F940 VA: 0x1093940 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x1093994 Offset: 0x108F994 VA: 0x1093994 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x1093A30 Offset: 0x108FA30 VA: 0x1093A30 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x1093BB4 Offset: 0x108FBB4 VA: 0x1093BB4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x1093C74 Offset: 0x108FC74 VA: 0x1093C74 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x1093D00 Offset: 0x108FD00 VA: 0x1093D00 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x1093D98 Offset: 0x108FD98 VA: 0x1093D98 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x1093DE0 Offset: 0x108FDE0 VA: 0x1093DE0 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1093EE0 Offset: 0x108FEE0 VA: 0x1093EE0 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class CharStorage : DataStorage // TypeDefIndex: 4091
{
	// Fields
	private char[] _values; // 0x50

	// Methods

	// RVA: 0x1093F74 Offset: 0x108FF74 VA: 0x1093F74
	internal void .ctor(DataColumn column) { }

	// RVA: 0x1094068 Offset: 0x1090068 VA: 0x1094068 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10943F4 Offset: 0x10903F4 VA: 0x10943F4 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10944BC Offset: 0x10904BC VA: 0x10944BC Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10945D4 Offset: 0x10905D4 VA: 0x10945D4 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x1094724 Offset: 0x1090724 VA: 0x1094724 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x1094778 Offset: 0x1090778 VA: 0x1094778 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x1094814 Offset: 0x1090814 VA: 0x1094814 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10949F4 Offset: 0x10909F4 VA: 0x10949F4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x1094AB4 Offset: 0x1090AB4 VA: 0x1094AB4 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x1094B40 Offset: 0x1090B40 VA: 0x1094B40 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x1094BD8 Offset: 0x1090BD8 VA: 0x1094BD8 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x1094C20 Offset: 0x1090C20 VA: 0x1094C20 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1094D20 Offset: 0x1090D20 VA: 0x1094D20 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal enum StorageType // TypeDefIndex: 4092
{
	// Fields
	public int value__; // 0x0
	public const StorageType Empty = 0;
	public const StorageType Object = 1;
	public const StorageType DBNull = 2;
	public const StorageType Boolean = 3;
	public const StorageType Char = 4;
	public const StorageType SByte = 5;
	public const StorageType Byte = 6;
	public const StorageType Int16 = 7;
	public const StorageType UInt16 = 8;
	public const StorageType Int32 = 9;
	public const StorageType UInt32 = 10;
	public const StorageType Int64 = 11;
	public const StorageType UInt64 = 12;
	public const StorageType Single = 13;
	public const StorageType Double = 14;
	public const StorageType Decimal = 15;
	public const StorageType DateTime = 16;
	public const StorageType TimeSpan = 17;
	public const StorageType String = 18;
	public const StorageType Guid = 19;
	public const StorageType ByteArray = 20;
	public const StorageType CharArray = 21;
	public const StorageType Type = 22;
	public const StorageType DateTimeOffset = 23;
	public const StorageType BigInteger = 24;
	public const StorageType Uri = 25;
	public const StorageType SqlBinary = 26;
	public const StorageType SqlBoolean = 27;
	public const StorageType SqlByte = 28;
	public const StorageType SqlBytes = 29;
	public const StorageType SqlChars = 30;
	public const StorageType SqlDateTime = 31;
	public const StorageType SqlDecimal = 32;
	public const StorageType SqlDouble = 33;
	public const StorageType SqlGuid = 34;
	public const StorageType SqlInt16 = 35;
	public const StorageType SqlInt32 = 36;
	public const StorageType SqlInt64 = 37;
	public const StorageType SqlMoney = 38;
	public const StorageType SqlSingle = 39;
	public const StorageType SqlString = 40;
}


// Namespace: System.Data.Common
internal abstract class DataStorage // TypeDefIndex: 4093
{
	// Fields
	private static readonly Type[] s_storageClassType; // 0x0
	internal readonly DataColumn _column; // 0x10
	internal readonly DataTable _table; // 0x18
	internal readonly Type _dataType; // 0x20
	internal readonly StorageType _storageTypeCode; // 0x28
	private BitArray _dbNullBits; // 0x30
	private readonly object _defaultValue; // 0x38
	internal readonly object _nullValue; // 0x40
	internal readonly bool _isCloneable; // 0x48
	internal readonly bool _isCustomDefinedType; // 0x49
	internal readonly bool _isStringType; // 0x4A
	internal readonly bool _isValueType; // 0x4B
	private static readonly Func<Type, Tuple<bool, bool, bool, bool>> s_inspectTypeForInterfaces; // 0x8
	private static readonly ConcurrentDictionary<Type, Tuple<bool, bool, bool, bool>> s_typeImplementsInterface; // 0x10

	// Properties
	internal DataSetDateTime DateTimeMode { get; }
	internal IFormatProvider FormatProvider { get; }

	// Methods

	// RVA: 0x1090488 Offset: 0x108C488 VA: 0x1090488
	protected void .ctor(DataColumn column, Type type, object defaultValue, StorageType storageType) { }

	// RVA: 0x1094EC0 Offset: 0x1090EC0 VA: 0x1094EC0
	protected void .ctor(DataColumn column, Type type, object defaultValue, object nullValue, StorageType storageType) { }

	// RVA: 0x1094DB4 Offset: 0x1090DB4 VA: 0x1094DB4
	protected void .ctor(DataColumn column, Type type, object defaultValue, object nullValue, bool isICloneable, StorageType storageType) { }

	// RVA: 0x1094F2C Offset: 0x1090F2C VA: 0x1094F2C
	internal DataSetDateTime get_DateTimeMode() { }

	// RVA: 0x109182C Offset: 0x108D82C VA: 0x109182C
	internal IFormatProvider get_FormatProvider() { }

	// RVA: 0x1092438 Offset: 0x108E438 VA: 0x1092438 Slot: 4
	public virtual object Aggregate(int[] recordNos, AggregateType kind) { }

	// RVA: 0x1094F48 Offset: 0x1090F48 VA: 0x1094F48
	public object AggregateCount(int[] recordNos) { }

	// RVA: 0x1090664 Offset: 0x108C664 VA: 0x1090664
	protected int CompareBits(int recordNo1, int recordNo2) { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract int Compare(int recordNo1, int recordNo2);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract int CompareValueTo(int recordNo1, object value);

	// RVA: 0x1095014 Offset: 0x1091014 VA: 0x1095014 Slot: 7
	public virtual object ConvertValue(object value) { }

	// RVA: 0x109189C Offset: 0x108D89C VA: 0x109189C
	protected void CopyBits(int srcRecordNo, int dstRecordNo) { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Copy(int recordNo1, int recordNo2);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract object Get(int recordNo);

	// RVA: 0x1091998 Offset: 0x108D998 VA: 0x1091998
	protected object GetBits(int recordNo) { }

	// RVA: 0x109501C Offset: 0x109101C VA: 0x109501C Slot: 10
	public virtual int GetStringLength(int record) { }

	// RVA: 0x10907FC Offset: 0x108C7FC VA: 0x10907FC
	protected bool HasValue(int recordNo) { }

	// RVA: 0x1095024 Offset: 0x1091024 VA: 0x1095024 Slot: 11
	public virtual bool IsNull(int recordNo) { }

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void Set(int recordNo, object value);

	// RVA: 0x1091ACC Offset: 0x108DACC VA: 0x1091ACC
	protected void SetNullBit(int recordNo, bool flag) { }

	// RVA: 0x1091BAC Offset: 0x108DBAC VA: 0x1091BAC Slot: 13
	public virtual void SetCapacity(int capacity) { }

	// RVA: -1 Offset: -1 Slot: 14
	public abstract object ConvertXmlToObject(string s);

	// RVA: 0x1095040 Offset: 0x1091040 VA: 0x1095040 Slot: 15
	public virtual object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib) { }

	// RVA: -1 Offset: -1 Slot: 16
	public abstract string ConvertObjectToXml(object value);

	// RVA: 0x1095080 Offset: 0x1091080 VA: 0x1095080 Slot: 17
	public virtual void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib) { }

	// RVA: 0x10950BC Offset: 0x10910BC VA: 0x10950BC
	public static DataStorage CreateStorage(DataColumn column, Type dataType, StorageType typeCode) { }

	// RVA: 0x1096758 Offset: 0x1092758 VA: 0x1096758
	internal static StorageType GetStorageType(Type dataType) { }

	// RVA: 0x1096874 Offset: 0x1092874 VA: 0x1096874
	internal static Type GetTypeStorage(StorageType storageType) { }

	// RVA: 0x10968F0 Offset: 0x10928F0 VA: 0x10968F0
	internal static bool IsTypeCustomType(Type type) { }

	// RVA: 0x1094ECC Offset: 0x1090ECC VA: 0x1094ECC
	internal static bool IsTypeCustomType(StorageType typeCode) { }

	// RVA: 0x1096968 Offset: 0x1092968 VA: 0x1096968
	internal static bool IsSqlType(StorageType storageType) { }

	// RVA: 0x1096974 Offset: 0x1092974 VA: 0x1096974
	public static bool IsSqlType(Type dataType) { }

	// RVA: 0x1094EF0 Offset: 0x1090EF0 VA: 0x1094EF0
	private static bool DetermineIfValueType(StorageType typeCode, Type dataType) { }

	// RVA: 0x1096A70 Offset: 0x1092A70 VA: 0x1096A70
	internal static void ImplementsInterfaces(StorageType typeCode, Type dataType, out bool sqlType, out bool nullable, out bool xmlSerializable, out bool changeTracking, out bool revertibleChangeTracking) { }

	// RVA: 0x1096BA4 Offset: 0x1092BA4 VA: 0x1096BA4
	private static Tuple<bool, bool, bool, bool> InspectTypeForInterfaces(Type dataType) { }

	// RVA: 0x1096D84 Offset: 0x1092D84 VA: 0x1096D84
	internal static bool ImplementsINullableValue(StorageType typeCode, Type dataType) { }

	// RVA: 0x1096E58 Offset: 0x1092E58 VA: 0x1096E58
	public static bool IsObjectNull(object value) { }

	// RVA: 0x1096EF8 Offset: 0x1092EF8 VA: 0x1096EF8
	public static bool IsObjectSqlNull(object value) { }

	// RVA: 0x1096FAC Offset: 0x1092FAC VA: 0x1096FAC
	internal object GetEmptyStorageInternal(int recordCount) { }

	// RVA: 0x1096FBC Offset: 0x1092FBC VA: 0x1096FBC
	internal void CopyValueInternal(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1096FCC Offset: 0x1092FCC VA: 0x1096FCC
	internal void SetStorageInternal(object store, BitArray nullbits) { }

	// RVA: -1 Offset: -1 Slot: 18
	protected abstract object GetEmptyStorage(int recordCount);

	// RVA: -1 Offset: -1 Slot: 19
	protected abstract void CopyValue(int record, object store, BitArray nullbits, int storeIndex);

	// RVA: -1 Offset: -1 Slot: 20
	protected abstract void SetStorage(object store, BitArray nullbits);

	// RVA: 0x1096FDC Offset: 0x1092FDC VA: 0x1096FDC
	internal static Type GetType(string value) { }

	// RVA: 0x1097118 Offset: 0x1093118 VA: 0x1097118
	internal static string GetQualifiedName(Type type) { }

	// RVA: 0x109718C Offset: 0x109318C VA: 0x109718C
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class DateTimeOffsetStorage : DataStorage // TypeDefIndex: 4094
{
	// Fields
	private static readonly DateTimeOffset s_defaultValue; // 0x0
	private DateTimeOffset[] _values; // 0x50

	// Methods

	// RVA: 0x1095F50 Offset: 0x1091F50 VA: 0x1095F50
	internal void .ctor(DataColumn column) { }

	// RVA: 0x1097EC0 Offset: 0x1093EC0 VA: 0x1097EC0 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10983A8 Offset: 0x10943A8 VA: 0x10983A8 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109854C Offset: 0x109454C VA: 0x109854C Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10986CC Offset: 0x10946CC VA: 0x10986CC Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x1098770 Offset: 0x1094770 VA: 0x1098770 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10987C4 Offset: 0x10947C4 VA: 0x10987C4 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10988D0 Offset: 0x10948D0 VA: 0x10988D0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10989F0 Offset: 0x10949F0 VA: 0x10989F0 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x1098AB0 Offset: 0x1094AB0 VA: 0x1098AB0 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x1098B3C Offset: 0x1094B3C VA: 0x1098B3C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x1098BD8 Offset: 0x1094BD8 VA: 0x1098BD8 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x1098C20 Offset: 0x1094C20 VA: 0x1098C20 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1098D24 Offset: 0x1094D24 VA: 0x1098D24 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }

	// RVA: 0x1098DB8 Offset: 0x1094DB8 VA: 0x1098DB8
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class DateTimeStorage : DataStorage // TypeDefIndex: 4095
{
	// Fields
	private static readonly DateTime s_defaultValue; // 0x0
	private DateTime[] _values; // 0x50

	// Methods

	// RVA: 0x1095E28 Offset: 0x1091E28 VA: 0x1095E28
	internal void .ctor(DataColumn column) { }

	// RVA: 0x1098E3C Offset: 0x1094E3C VA: 0x1098E3C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x1099304 Offset: 0x1095304 VA: 0x1099304 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109947C Offset: 0x109547C VA: 0x109947C Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10995E0 Offset: 0x10955E0 VA: 0x10995E0 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x1099730 Offset: 0x1095730 VA: 0x1099730 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x1099784 Offset: 0x1095784 VA: 0x1099784 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x109987C Offset: 0x109587C VA: 0x109987C Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x1099BF0 Offset: 0x1095BF0 VA: 0x1099BF0 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x1099CB0 Offset: 0x1095CB0 VA: 0x1099CB0 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x1099D64 Offset: 0x1095D64 VA: 0x1099D64 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x1099E18 Offset: 0x1095E18 VA: 0x1099E18 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x1099E60 Offset: 0x1095E60 VA: 0x1099E60 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x1099FC0 Offset: 0x1095FC0 VA: 0x1099FC0 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }

	// RVA: 0x109A1AC Offset: 0x10961AC VA: 0x109A1AC
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class DecimalStorage : DataStorage // TypeDefIndex: 4096
{
	// Fields
	private static readonly Decimal s_defaultValue; // 0x0
	private Decimal[] _values; // 0x50

	// Methods

	// RVA: 0x1095CEC Offset: 0x1091CEC VA: 0x1095CEC
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109A224 Offset: 0x1096224 VA: 0x109A224 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109AC40 Offset: 0x1096C40 VA: 0x109AC40 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109ADBC Offset: 0x1096DBC VA: 0x109ADBC Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x109AF28 Offset: 0x1096F28 VA: 0x109AF28 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x109B0A0 Offset: 0x10970A0 VA: 0x109B0A0 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x109B0F4 Offset: 0x10970F4 VA: 0x109B0F4 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x109B1B8 Offset: 0x10971B8 VA: 0x109B1B8 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x109B360 Offset: 0x1097360 VA: 0x109B360 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x109B420 Offset: 0x1097420 VA: 0x109B420 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x109B4D4 Offset: 0x10974D4 VA: 0x109B4D4 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x109B570 Offset: 0x1097570 VA: 0x109B570 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x109B5B8 Offset: 0x10975B8 VA: 0x109B5B8 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x109B6BC Offset: 0x10976BC VA: 0x109B6BC Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class DoubleStorage : DataStorage // TypeDefIndex: 4097
{
	// Fields
	private double[] _values; // 0x50

	// Methods

	// RVA: 0x1095BF8 Offset: 0x1091BF8 VA: 0x1095BF8
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109B750 Offset: 0x1097750 VA: 0x109B750 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109BE88 Offset: 0x1097E88 VA: 0x109BE88 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109BF08 Offset: 0x1097F08 VA: 0x109BF08 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x109C010 Offset: 0x1098010 VA: 0x109C010 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x109C15C Offset: 0x109815C VA: 0x109C15C Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x109C1B0 Offset: 0x10981B0 VA: 0x109C1B0 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x109C250 Offset: 0x1098250 VA: 0x109C250 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x109C3D4 Offset: 0x10983D4 VA: 0x109C3D4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x109C494 Offset: 0x1098494 VA: 0x109C494 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x109C51C Offset: 0x109851C VA: 0x109C51C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x109C5B4 Offset: 0x10985B4 VA: 0x109C5B4 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x109C5FC Offset: 0x10985FC VA: 0x109C5FC Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x109C6FC Offset: 0x10986FC VA: 0x109C6FC Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class Int16Storage : DataStorage // TypeDefIndex: 4098
{
	// Fields
	private short[] _values; // 0x50

	// Methods

	// RVA: 0x109591C Offset: 0x109191C VA: 0x109591C
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109C790 Offset: 0x1098790 VA: 0x109C790 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109CFD8 Offset: 0x1098FD8 VA: 0x109CFD8 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109D038 Offset: 0x1099038 VA: 0x109D038 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x109D128 Offset: 0x1099128 VA: 0x109D128 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x109D278 Offset: 0x1099278 VA: 0x109D278 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x109D2CC Offset: 0x10992CC VA: 0x109D2CC Slot: 9
	public override object Get(int record) { }

	// RVA: 0x109D368 Offset: 0x1099368 VA: 0x109D368 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x109D4EC Offset: 0x10994EC VA: 0x109D4EC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x109D5AC Offset: 0x10995AC VA: 0x109D5AC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x109D638 Offset: 0x1099638 VA: 0x109D638 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x109D6D0 Offset: 0x10996D0 VA: 0x109D6D0 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x109D718 Offset: 0x1099718 VA: 0x109D718 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x109D814 Offset: 0x1099814 VA: 0x109D814 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class Int32Storage : DataStorage // TypeDefIndex: 4099
{
	// Fields
	private int[] _values; // 0x50

	// Methods

	// RVA: 0x1095A10 Offset: 0x1091A10 VA: 0x1095A10
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109D8A8 Offset: 0x10998A8 VA: 0x109D8A8 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109E0E8 Offset: 0x109A0E8 VA: 0x109E0E8 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109E154 Offset: 0x109A154 VA: 0x109E154 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x109E244 Offset: 0x109A244 VA: 0x109E244 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x109E394 Offset: 0x109A394 VA: 0x109E394 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x109E3E8 Offset: 0x109A3E8 VA: 0x109E3E8 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x109E484 Offset: 0x109A484 VA: 0x109E484 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x109E608 Offset: 0x109A608 VA: 0x109E608 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x109E6C8 Offset: 0x109A6C8 VA: 0x109E6C8 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x109E754 Offset: 0x109A754 VA: 0x109E754 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x109E7EC Offset: 0x109A7EC VA: 0x109E7EC Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x109E834 Offset: 0x109A834 VA: 0x109E834 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x109E930 Offset: 0x109A930 VA: 0x109E930 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class Int64Storage : DataStorage // TypeDefIndex: 4100
{
	// Fields
	private long[] _values; // 0x50

	// Methods

	// RVA: 0x1095B04 Offset: 0x1091B04 VA: 0x1095B04
	internal void .ctor(DataColumn column) { }

	// RVA: 0x109E9C4 Offset: 0x109A9C4 VA: 0x109E9C4 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x109F1D4 Offset: 0x109B1D4 VA: 0x109F1D4 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x109F240 Offset: 0x109B240 VA: 0x109F240 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x109F330 Offset: 0x109B330 VA: 0x109F330 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x109F480 Offset: 0x109B480 VA: 0x109F480 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x109F4D4 Offset: 0x109B4D4 VA: 0x109F4D4 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x109F570 Offset: 0x109B570 VA: 0x109F570 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x109F6F4 Offset: 0x109B6F4 VA: 0x109F6F4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x109F7B4 Offset: 0x109B7B4 VA: 0x109F7B4 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x109F840 Offset: 0x109B840 VA: 0x109F840 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x109F8D8 Offset: 0x109B8D8 VA: 0x109F8D8 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x109F920 Offset: 0x109B920 VA: 0x109F920 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x109FA1C Offset: 0x109BA1C VA: 0x109FA1C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SByteStorage : DataStorage // TypeDefIndex: 4101
{
	// Fields
	private sbyte[] _values; // 0x50

	// Methods

	// RVA: 0x1095828 Offset: 0x1091828 VA: 0x1095828
	public void .ctor(DataColumn column) { }

	// RVA: 0x109FAB0 Offset: 0x109BAB0 VA: 0x109FAB0 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10A02A0 Offset: 0x109C2A0 VA: 0x10A02A0 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10A0358 Offset: 0x109C358 VA: 0x10A0358 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10A045C Offset: 0x109C45C VA: 0x10A045C Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10A05AC Offset: 0x109C5AC VA: 0x10A05AC Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10A0600 Offset: 0x109C600 VA: 0x10A0600 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10A06B0 Offset: 0x109C6B0 VA: 0x10A06B0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10A0834 Offset: 0x109C834 VA: 0x10A0834 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10A08F4 Offset: 0x109C8F4 VA: 0x10A08F4 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10A0980 Offset: 0x109C980 VA: 0x10A0980 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10A0A18 Offset: 0x109CA18 VA: 0x10A0A18 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10A0A60 Offset: 0x109CA60 VA: 0x10A0A60 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10A0B60 Offset: 0x109CB60 VA: 0x10A0B60 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal static class SqlConvert // TypeDefIndex: 4102
{
	// Methods

	// RVA: 0x10A0BF4 Offset: 0x109CBF4 VA: 0x10A0BF4
	public static SqlByte ConvertToSqlByte(object value) { }

	// RVA: 0x10A0DD0 Offset: 0x109CDD0 VA: 0x10A0DD0
	public static SqlInt16 ConvertToSqlInt16(object value) { }

	// RVA: 0x10A107C Offset: 0x109D07C VA: 0x10A107C
	public static SqlInt32 ConvertToSqlInt32(object value) { }

	// RVA: 0x10A1448 Offset: 0x109D448 VA: 0x10A1448
	public static SqlInt64 ConvertToSqlInt64(object value) { }

	// RVA: 0x10A1938 Offset: 0x109D938 VA: 0x10A1938
	public static SqlDouble ConvertToSqlDouble(object value) { }

	// RVA: 0x10A2080 Offset: 0x109E080 VA: 0x10A2080
	public static SqlDecimal ConvertToSqlDecimal(object value) { }

	// RVA: 0x10A2720 Offset: 0x109E720 VA: 0x10A2720
	public static SqlSingle ConvertToSqlSingle(object value) { }

	// RVA: 0x10A2DE8 Offset: 0x109EDE8 VA: 0x10A2DE8
	public static SqlMoney ConvertToSqlMoney(object value) { }

	// RVA: 0x10A33FC Offset: 0x109F3FC VA: 0x10A33FC
	public static SqlDateTime ConvertToSqlDateTime(object value) { }

	// RVA: 0x10A35E4 Offset: 0x109F5E4 VA: 0x10A35E4
	public static SqlBoolean ConvertToSqlBoolean(object value) { }

	// RVA: 0x10A37AC Offset: 0x109F7AC VA: 0x10A37AC
	public static SqlGuid ConvertToSqlGuid(object value) { }

	// RVA: 0x10A3988 Offset: 0x109F988 VA: 0x10A3988
	public static SqlBinary ConvertToSqlBinary(object value) { }

	// RVA: 0x10A3B58 Offset: 0x109FB58 VA: 0x10A3B58
	public static SqlString ConvertToSqlString(object value) { }

	// RVA: 0x10A3D30 Offset: 0x109FD30 VA: 0x10A3D30
	public static SqlChars ConvertToSqlChars(object value) { }

	// RVA: 0x10A3E78 Offset: 0x109FE78 VA: 0x10A3E78
	public static SqlBytes ConvertToSqlBytes(object value) { }

	// RVA: 0x10A3FC0 Offset: 0x109FFC0 VA: 0x10A3FC0
	public static DateTimeOffset ConvertStringToDateTimeOffset(string value, IFormatProvider formatProvider) { }

	// RVA: 0x10A4028 Offset: 0x10A0028 VA: 0x10A4028
	public static object ChangeTypeForDefaultValue(object value, Type type, IFormatProvider formatProvider) { }

	// RVA: 0x10A4204 Offset: 0x10A0204 VA: 0x10A4204
	public static object ChangeType2(object value, StorageType stype, Type type, IFormatProvider formatProvider) { }

	// RVA: 0x10A57E0 Offset: 0x10A17E0 VA: 0x10A57E0
	public static object ChangeTypeForXML(object value, Type type) { }
}


// Namespace: System.Data.Common
internal sealed class SqlBinaryStorage : DataStorage // TypeDefIndex: 4103
{
	// Fields
	private SqlBinary[] _values; // 0x50

	// Methods

	// RVA: 0x1096080 Offset: 0x1092080 VA: 0x1096080
	public void .ctor(DataColumn column) { }

	// RVA: 0x10A74F8 Offset: 0x10A34F8 VA: 0x10A74F8 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10A7734 Offset: 0x10A3734 VA: 0x10A7734 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10A77D4 Offset: 0x10A37D4 VA: 0x10A77D4 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10A7890 Offset: 0x10A3890 VA: 0x10A7890 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10A7904 Offset: 0x10A3904 VA: 0x10A7904 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10A7940 Offset: 0x10A3940 VA: 0x10A7940 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10A79C0 Offset: 0x10A39C0 VA: 0x10A79C0 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10A7A3C Offset: 0x10A3A3C VA: 0x10A7A3C Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10A7A80 Offset: 0x10A3A80 VA: 0x10A7A80 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10A7B38 Offset: 0x10A3B38 VA: 0x10A7B38 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10A7E20 Offset: 0x10A3E20 VA: 0x10A7E20 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10A80C4 Offset: 0x10A40C4 VA: 0x10A80C4 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10A810C Offset: 0x10A410C VA: 0x10A810C Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10A820C Offset: 0x10A420C VA: 0x10A820C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlByteStorage : DataStorage // TypeDefIndex: 4104
{
	// Fields
	private SqlByte[] _values; // 0x50

	// Methods

	// RVA: 0x10961C0 Offset: 0x10921C0 VA: 0x10961C0
	public void .ctor(DataColumn column) { }

	// RVA: 0x10A82A4 Offset: 0x10A42A4 VA: 0x10A82A4 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10A90EC Offset: 0x10A50EC VA: 0x10A90EC Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10A918C Offset: 0x10A518C VA: 0x10A918C Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10A9248 Offset: 0x10A5248 VA: 0x10A9248 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10A92BC Offset: 0x10A52BC VA: 0x10A92BC Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10A92F8 Offset: 0x10A52F8 VA: 0x10A92F8 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10A9378 Offset: 0x10A5378 VA: 0x10A9378 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10A93F4 Offset: 0x10A53F4 VA: 0x10A93F4 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10A9438 Offset: 0x10A5438 VA: 0x10A9438 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10A94F0 Offset: 0x10A54F0 VA: 0x10A94F0 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10A97D8 Offset: 0x10A57D8 VA: 0x10A97D8 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10A9A7C Offset: 0x10A5A7C VA: 0x10A9A7C Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10A9AC4 Offset: 0x10A5AC4 VA: 0x10A9AC4 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10A9BC4 Offset: 0x10A5BC4 VA: 0x10A9BC4 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlBytesStorage : DataStorage // TypeDefIndex: 4105
{
	// Fields
	private SqlBytes[] _values; // 0x50

	// Methods

	// RVA: 0x10962F8 Offset: 0x10922F8 VA: 0x10962F8
	public void .ctor(DataColumn column) { }

	// RVA: 0x10A9C5C Offset: 0x10A5C5C VA: 0x10A9C5C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10A9E70 Offset: 0x10A5E70 VA: 0x10A9E70 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10A9E78 Offset: 0x10A5E78 VA: 0x10A9E78 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10A9E80 Offset: 0x10A5E80 VA: 0x10A9E80 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10A9EBC Offset: 0x10A5EBC VA: 0x10A9EBC Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10A9EEC Offset: 0x10A5EEC VA: 0x10A9EEC Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10A9F24 Offset: 0x10A5F24 VA: 0x10A9F24 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10AA014 Offset: 0x10A6014 VA: 0x10AA014 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10AA0CC Offset: 0x10A60CC VA: 0x10AA0CC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10AA3D8 Offset: 0x10A63D8 VA: 0x10AA3D8 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10AA67C Offset: 0x10A667C VA: 0x10AA67C Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10AA6C4 Offset: 0x10A66C4 VA: 0x10AA6C4 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10AA7C4 Offset: 0x10A67C4 VA: 0x10AA7C4 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlCharsStorage : DataStorage // TypeDefIndex: 4106
{
	// Fields
	private SqlChars[] _values; // 0x50

	// Methods

	// RVA: 0x10963D8 Offset: 0x10923D8 VA: 0x10963D8
	public void .ctor(DataColumn column) { }

	// RVA: 0x10AA85C Offset: 0x10A685C VA: 0x10AA85C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10AAA70 Offset: 0x10A6A70 VA: 0x10AAA70 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10AAA78 Offset: 0x10A6A78 VA: 0x10AAA78 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10AAA80 Offset: 0x10A6A80 VA: 0x10AAA80 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10AAABC Offset: 0x10A6ABC VA: 0x10AAABC Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10AAAEC Offset: 0x10A6AEC VA: 0x10AAAEC Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10AAB24 Offset: 0x10A6B24 VA: 0x10AAB24 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10AAC14 Offset: 0x10A6C14 VA: 0x10AAC14 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10AACCC Offset: 0x10A6CCC VA: 0x10AACCC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10AAFE4 Offset: 0x10A6FE4 VA: 0x10AAFE4 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10AB288 Offset: 0x10A7288 VA: 0x10AB288 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10AB2D0 Offset: 0x10A72D0 VA: 0x10AB2D0 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10AB3D0 Offset: 0x10A73D0 VA: 0x10AB3D0 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlDateTimeStorage : DataStorage // TypeDefIndex: 4107
{
	// Fields
	private SqlDateTime[] _values; // 0x50

	// Methods

	// RVA: 0x10964B8 Offset: 0x10924B8 VA: 0x10964B8
	public void .ctor(DataColumn column) { }

	// RVA: 0x10AB468 Offset: 0x10A7468 VA: 0x10AB468 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10ABA78 Offset: 0x10A7A78 VA: 0x10ABA78 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10ABB2C Offset: 0x10A7B2C VA: 0x10ABB2C Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10ABBF0 Offset: 0x10A7BF0 VA: 0x10ABBF0 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10ABC68 Offset: 0x10A7C68 VA: 0x10ABC68 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10ABCC0 Offset: 0x10A7CC0 VA: 0x10ABCC0 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10ABD50 Offset: 0x10A7D50 VA: 0x10ABD50 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10ABDD0 Offset: 0x10A7DD0 VA: 0x10ABDD0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10ABE20 Offset: 0x10A7E20 VA: 0x10ABE20 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10ABED8 Offset: 0x10A7ED8 VA: 0x10ABED8 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10AC1CC Offset: 0x10A81CC VA: 0x10AC1CC Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10AC470 Offset: 0x10A8470 VA: 0x10AC470 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10AC4B8 Offset: 0x10A84B8 VA: 0x10AC4B8 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10AC5D0 Offset: 0x10A85D0 VA: 0x10AC5D0 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlDecimalStorage : DataStorage // TypeDefIndex: 4108
{
	// Fields
	private SqlDecimal[] _values; // 0x50

	// Methods

	// RVA: 0x1096608 Offset: 0x1092608 VA: 0x1096608
	public void .ctor(DataColumn column) { }

	// RVA: 0x10AC668 Offset: 0x10A8668 VA: 0x10AC668 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10AD5D0 Offset: 0x10A95D0 VA: 0x10AD5D0 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10AD6A0 Offset: 0x10A96A0 VA: 0x10AD6A0 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10AD77C Offset: 0x10A977C VA: 0x10AD77C Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10AD7FC Offset: 0x10A97FC VA: 0x10AD7FC Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10AD864 Offset: 0x10A9864 VA: 0x10AD864 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10AD8F0 Offset: 0x10A98F0 VA: 0x10AD8F0 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10AD970 Offset: 0x10A9970 VA: 0x10AD970 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10AD9E0 Offset: 0x10A99E0 VA: 0x10AD9E0 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10ADA98 Offset: 0x10A9A98 VA: 0x10ADA98 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10ADD8C Offset: 0x10A9D8C VA: 0x10ADD8C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10AE030 Offset: 0x10AA030 VA: 0x10AE030 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10AE078 Offset: 0x10AA078 VA: 0x10AE078 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10AE1A8 Offset: 0x10AA1A8 VA: 0x10AE1A8 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlDoubleStorage : DataStorage // TypeDefIndex: 4109
{
	// Fields
	private SqlDouble[] _values; // 0x50

	// Methods

	// RVA: 0x10AE240 Offset: 0x10AA240 VA: 0x10AE240
	public void .ctor(DataColumn column) { }

	// RVA: 0x10AE380 Offset: 0x10AA380 VA: 0x10AE380 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10AF098 Offset: 0x10AB098 VA: 0x10AF098 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10AF140 Offset: 0x10AB140 VA: 0x10AF140 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10AF1FC Offset: 0x10AB1FC VA: 0x10AF1FC Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10AF274 Offset: 0x10AB274 VA: 0x10AF274 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10AF2B0 Offset: 0x10AB2B0 VA: 0x10AF2B0 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10AF334 Offset: 0x10AB334 VA: 0x10AF334 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10AF3B0 Offset: 0x10AB3B0 VA: 0x10AF3B0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10AF3FC Offset: 0x10AB3FC VA: 0x10AF3FC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10AF4B4 Offset: 0x10AB4B4 VA: 0x10AF4B4 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10AF79C Offset: 0x10AB79C VA: 0x10AF79C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10AFA3C Offset: 0x10ABA3C VA: 0x10AFA3C Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10AFA84 Offset: 0x10ABA84 VA: 0x10AFA84 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10AFB8C Offset: 0x10ABB8C VA: 0x10AFB8C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlGuidStorage : DataStorage // TypeDefIndex: 4110
{
	// Fields
	private SqlGuid[] _values; // 0x50

	// Methods

	// RVA: 0x10AFC24 Offset: 0x10ABC24 VA: 0x10AFC24
	public void .ctor(DataColumn column) { }

	// RVA: 0x10AFD64 Offset: 0x10ABD64 VA: 0x10AFD64 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10AFFA0 Offset: 0x10ABFA0 VA: 0x10AFFA0 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B0040 Offset: 0x10AC040 VA: 0x10B0040 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B00FC Offset: 0x10AC0FC VA: 0x10B00FC Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B0174 Offset: 0x10AC174 VA: 0x10B0174 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B01B0 Offset: 0x10AC1B0 VA: 0x10B01B0 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B0230 Offset: 0x10AC230 VA: 0x10B0230 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B02AC Offset: 0x10AC2AC VA: 0x10B02AC Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B02F4 Offset: 0x10AC2F4 VA: 0x10B02F4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B03AC Offset: 0x10AC3AC VA: 0x10B03AC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10B0694 Offset: 0x10AC694 VA: 0x10B0694 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10B0934 Offset: 0x10AC934 VA: 0x10B0934 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10B097C Offset: 0x10AC97C VA: 0x10B097C Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10B0A7C Offset: 0x10ACA7C VA: 0x10B0A7C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlInt16Storage : DataStorage // TypeDefIndex: 4111
{
	// Fields
	private SqlInt16[] _values; // 0x50

	// Methods

	// RVA: 0x10B0B14 Offset: 0x10ACB14 VA: 0x10B0B14
	public void .ctor(DataColumn column) { }

	// RVA: 0x10B0C4C Offset: 0x10ACC4C VA: 0x10B0C4C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10B1AA4 Offset: 0x10ADAA4 VA: 0x10B1AA4 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B1B44 Offset: 0x10ADB44 VA: 0x10B1B44 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B1C00 Offset: 0x10ADC00 VA: 0x10B1C00 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B1C78 Offset: 0x10ADC78 VA: 0x10B1C78 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B1CB4 Offset: 0x10ADCB4 VA: 0x10B1CB4 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B1D34 Offset: 0x10ADD34 VA: 0x10B1D34 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B1DB0 Offset: 0x10ADDB0 VA: 0x10B1DB0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B1DF8 Offset: 0x10ADDF8 VA: 0x10B1DF8 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B1EB0 Offset: 0x10ADEB0 VA: 0x10B1EB0 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10B2198 Offset: 0x10AE198 VA: 0x10B2198 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10B2438 Offset: 0x10AE438 VA: 0x10B2438 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10B2480 Offset: 0x10AE480 VA: 0x10B2480 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10B2580 Offset: 0x10AE580 VA: 0x10B2580 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlInt32Storage : DataStorage // TypeDefIndex: 4112
{
	// Fields
	private SqlInt32[] _values; // 0x50

	// Methods

	// RVA: 0x10B2618 Offset: 0x10AE618 VA: 0x10B2618
	public void .ctor(DataColumn column) { }

	// RVA: 0x10B2758 Offset: 0x10AE758 VA: 0x10B2758 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10B3578 Offset: 0x10AF578 VA: 0x10B3578 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B3618 Offset: 0x10AF618 VA: 0x10B3618 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B36D4 Offset: 0x10AF6D4 VA: 0x10B36D4 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B374C Offset: 0x10AF74C VA: 0x10B374C Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B3788 Offset: 0x10AF788 VA: 0x10B3788 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B3808 Offset: 0x10AF808 VA: 0x10B3808 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B3884 Offset: 0x10AF884 VA: 0x10B3884 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B38CC Offset: 0x10AF8CC VA: 0x10B38CC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B3984 Offset: 0x10AF984 VA: 0x10B3984 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10B3C6C Offset: 0x10AFC6C VA: 0x10B3C6C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10B3F0C Offset: 0x10AFF0C VA: 0x10B3F0C Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10B3F54 Offset: 0x10AFF54 VA: 0x10B3F54 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10B4054 Offset: 0x10B0054 VA: 0x10B4054 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlInt64Storage : DataStorage // TypeDefIndex: 4113
{
	// Fields
	private SqlInt64[] _values; // 0x50

	// Methods

	// RVA: 0x10B40EC Offset: 0x10B00EC VA: 0x10B40EC
	public void .ctor(DataColumn column) { }

	// RVA: 0x10B422C Offset: 0x10B022C VA: 0x10B422C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10B50D0 Offset: 0x10B10D0 VA: 0x10B50D0 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B5178 Offset: 0x10B1178 VA: 0x10B5178 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B5234 Offset: 0x10B1234 VA: 0x10B5234 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B52AC Offset: 0x10B12AC VA: 0x10B52AC Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B52E8 Offset: 0x10B12E8 VA: 0x10B52E8 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B536C Offset: 0x10B136C VA: 0x10B536C Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B53E8 Offset: 0x10B13E8 VA: 0x10B53E8 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B5434 Offset: 0x10B1434 VA: 0x10B5434 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B54EC Offset: 0x10B14EC VA: 0x10B54EC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10B57D4 Offset: 0x10B17D4 VA: 0x10B57D4 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10B5A74 Offset: 0x10B1A74 VA: 0x10B5A74 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10B5ABC Offset: 0x10B1ABC VA: 0x10B5ABC Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10B5BC4 Offset: 0x10B1BC4 VA: 0x10B5BC4 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlMoneyStorage : DataStorage // TypeDefIndex: 4114
{
	// Fields
	private SqlMoney[] _values; // 0x50

	// Methods

	// RVA: 0x10B5C5C Offset: 0x10B1C5C VA: 0x10B5C5C
	public void .ctor(DataColumn column) { }

	// RVA: 0x10B5D9C Offset: 0x10B1D9C VA: 0x10B5D9C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10B6CA0 Offset: 0x10B2CA0 VA: 0x10B6CA0 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B6D48 Offset: 0x10B2D48 VA: 0x10B6D48 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B6E04 Offset: 0x10B2E04 VA: 0x10B6E04 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B6E7C Offset: 0x10B2E7C VA: 0x10B6E7C Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B6EB8 Offset: 0x10B2EB8 VA: 0x10B6EB8 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B6F3C Offset: 0x10B2F3C VA: 0x10B6F3C Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B6FB8 Offset: 0x10B2FB8 VA: 0x10B6FB8 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B7004 Offset: 0x10B3004 VA: 0x10B7004 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B70BC Offset: 0x10B30BC VA: 0x10B70BC Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10B73A4 Offset: 0x10B33A4 VA: 0x10B73A4 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10B7644 Offset: 0x10B3644 VA: 0x10B7644 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10B768C Offset: 0x10B368C VA: 0x10B768C Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10B7794 Offset: 0x10B3794 VA: 0x10B7794 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlSingleStorage : DataStorage // TypeDefIndex: 4115
{
	// Fields
	private SqlSingle[] _values; // 0x50

	// Methods

	// RVA: 0x10B782C Offset: 0x10B382C VA: 0x10B782C
	public void .ctor(DataColumn column) { }

	// RVA: 0x10B796C Offset: 0x10B396C VA: 0x10B796C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10B8760 Offset: 0x10B4760 VA: 0x10B8760 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B8800 Offset: 0x10B4800 VA: 0x10B8800 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B88BC Offset: 0x10B48BC VA: 0x10B88BC Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B8934 Offset: 0x10B4934 VA: 0x10B8934 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B8970 Offset: 0x10B4970 VA: 0x10B8970 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B89F0 Offset: 0x10B49F0 VA: 0x10B89F0 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B8A6C Offset: 0x10B4A6C VA: 0x10B8A6C Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B8AB4 Offset: 0x10B4AB4 VA: 0x10B8AB4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B8B6C Offset: 0x10B4B6C VA: 0x10B8B6C Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10B8E54 Offset: 0x10B4E54 VA: 0x10B8E54 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10B90F4 Offset: 0x10B50F4 VA: 0x10B90F4 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10B913C Offset: 0x10B513C VA: 0x10B913C Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10B923C Offset: 0x10B523C VA: 0x10B923C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlStringStorage : DataStorage // TypeDefIndex: 4116
{
	// Fields
	private SqlString[] _values; // 0x50

	// Methods

	// RVA: 0x10B92D4 Offset: 0x10B52D4 VA: 0x10B92D4
	public void .ctor(DataColumn column) { }

	// RVA: 0x10B9414 Offset: 0x10B5414 VA: 0x10B9414 Slot: 4
	public override object Aggregate(int[] recordNos, AggregateType kind) { }

	// RVA: 0x10B9830 Offset: 0x10B5830 VA: 0x10B9830 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10B98A0 Offset: 0x10B58A0 VA: 0x10B98A0
	public int Compare(SqlString valueNo1, SqlString valueNo2) { }

	// RVA: 0x10B99DC Offset: 0x10B59DC VA: 0x10B99DC Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10B9AA0 Offset: 0x10B5AA0 VA: 0x10B9AA0 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10B9B20 Offset: 0x10B5B20 VA: 0x10B9B20 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10B9B78 Offset: 0x10B5B78 VA: 0x10B9B78 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10B9BFC Offset: 0x10B5BFC VA: 0x10B9BFC Slot: 10
	public override int GetStringLength(int record) { }

	// RVA: 0x10B9CC8 Offset: 0x10B5CC8 VA: 0x10B9CC8 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10B9D48 Offset: 0x10B5D48 VA: 0x10B9D48 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10B9DB4 Offset: 0x10B5DB4 VA: 0x10B9DB4 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10B9E6C Offset: 0x10B5E6C VA: 0x10B9E6C Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10BA158 Offset: 0x10B6158 VA: 0x10BA158 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10BA3F8 Offset: 0x10B63F8 VA: 0x10BA3F8 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10BA440 Offset: 0x10B6440 VA: 0x10BA440 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10BA558 Offset: 0x10B6558 VA: 0x10BA558 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SqlBooleanStorage : DataStorage // TypeDefIndex: 4117
{
	// Fields
	private SqlBoolean[] _values; // 0x50

	// Methods

	// RVA: 0x10BA5F0 Offset: 0x10B65F0 VA: 0x10BA5F0
	public void .ctor(DataColumn column) { }

	// RVA: 0x10BA730 Offset: 0x10B6730 VA: 0x10BA730 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10BABB4 Offset: 0x10B6BB4 VA: 0x10BABB4 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10BAC54 Offset: 0x10B6C54 VA: 0x10BAC54 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10BAD10 Offset: 0x10B6D10 VA: 0x10BAD10 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10BAD88 Offset: 0x10B6D88 VA: 0x10BAD88 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10BADC4 Offset: 0x10B6DC4 VA: 0x10BADC4 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10BAE44 Offset: 0x10B6E44 VA: 0x10BAE44 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10BAEC0 Offset: 0x10B6EC0 VA: 0x10BAEC0 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10BAF08 Offset: 0x10B6F08 VA: 0x10BAF08 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10BAFC0 Offset: 0x10B6FC0 VA: 0x10BAFC0 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10BB2A8 Offset: 0x10B72A8 VA: 0x10BB2A8 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10BB548 Offset: 0x10B7548 VA: 0x10BB548 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10BB590 Offset: 0x10B7590 VA: 0x10BB590 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10BB690 Offset: 0x10B7690 VA: 0x10BB690 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class SingleStorage : DataStorage // TypeDefIndex: 4118
{
	// Fields
	private float[] _values; // 0x50

	// Methods

	// RVA: 0x10BB728 Offset: 0x10B7728 VA: 0x10BB728
	public void .ctor(DataColumn column) { }

	// RVA: 0x10BB820 Offset: 0x10B7820 VA: 0x10BB820 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10BBF78 Offset: 0x10B7F78 VA: 0x10BBF78 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10BBFFC Offset: 0x10B7FFC VA: 0x10BBFFC Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10BC104 Offset: 0x10B8104 VA: 0x10BC104 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10BC248 Offset: 0x10B8248 VA: 0x10BC248 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10BC2A0 Offset: 0x10B82A0 VA: 0x10BC2A0 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10BC344 Offset: 0x10B8344 VA: 0x10BC344 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10BC4BC Offset: 0x10B84BC VA: 0x10BC4BC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10BC580 Offset: 0x10B8580 VA: 0x10BC580 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10BC608 Offset: 0x10B8608 VA: 0x10BC608 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10BC6A0 Offset: 0x10B86A0 VA: 0x10BC6A0 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10BC6E8 Offset: 0x10B86E8 VA: 0x10BC6E8 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10BC7E8 Offset: 0x10B87E8 VA: 0x10BC7E8 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class SqlUdtStorage.<>c__DisplayClass6_0 // TypeDefIndex: 4119
{
	// Fields
	public Type type; // 0x10

	// Methods

	// RVA: 0x10BCB98 Offset: 0x10B8B98 VA: 0x10BCB98
	public void .ctor() { }

	// RVA: 0x10BDF80 Offset: 0x10B9F80 VA: 0x10BDF80
	internal object <GetStaticNullForUdtType>b__0(Type t) { }
}


// Namespace: System.Data.Common
internal sealed class SqlUdtStorage : DataStorage // TypeDefIndex: 4120
{
	// Fields
	private object[] _values; // 0x50
	private readonly bool _implementsIXmlSerializable; // 0x58
	private readonly bool _implementsIComparable; // 0x59
	private static readonly ConcurrentDictionary<Type, object> s_typeToNull; // 0x0

	// Methods

	// RVA: 0x10BC87C Offset: 0x10B887C VA: 0x10BC87C
	public void .ctor(DataColumn column, Type type) { }

	// RVA: 0x10BCA10 Offset: 0x10B8A10 VA: 0x10BCA10
	private void .ctor(DataColumn column, Type type, object nullValue) { }

	// RVA: 0x10BC8F4 Offset: 0x10B88F4 VA: 0x10BC8F4
	internal static object GetStaticNullForUdtType(Type type) { }

	// RVA: 0x10BCBA0 Offset: 0x10B8BA0 VA: 0x10BCBA0 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10BCCA4 Offset: 0x10B8CA4 VA: 0x10BCCA4 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10BCCD4 Offset: 0x10B8CD4 VA: 0x10BCCD4 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10BCD0C Offset: 0x10B8D0C VA: 0x10BCD0C Slot: 6
	public override int CompareValueTo(int recordNo1, object value) { }

	// RVA: 0x10BCF98 Offset: 0x10B8F98 VA: 0x10BCF98 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10BD01C Offset: 0x10B901C VA: 0x10BD01C Slot: 9
	public override object Get(int recordNo) { }

	// RVA: 0x10BD04C Offset: 0x10B904C VA: 0x10BD04C Slot: 12
	public override void Set(int recordNo, object value) { }

	// RVA: 0x10BD1AC Offset: 0x10B91AC VA: 0x10BD1AC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10BD270 Offset: 0x10B9270 VA: 0x10BD270 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10BD5BC Offset: 0x10B95BC VA: 0x10BD5BC Slot: 15
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib) { }

	// RVA: 0x10BD858 Offset: 0x10B9858 VA: 0x10BD858 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10BDB84 Offset: 0x10B9B84 VA: 0x10BDB84 Slot: 17
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib) { }

	// RVA: 0x10BDCDC Offset: 0x10B9CDC VA: 0x10BDCDC Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10BDD24 Offset: 0x10B9D24 VA: 0x10BDD24 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10BDE5C Offset: 0x10B9E5C VA: 0x10BDE5C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }

	// RVA: 0x10BDEF4 Offset: 0x10B9EF4 VA: 0x10BDEF4
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class StringStorage : DataStorage // TypeDefIndex: 4121
{
	// Fields
	private string[] _values; // 0x50

	// Methods

	// RVA: 0x10BE0A8 Offset: 0x10BA0A8 VA: 0x10BE0A8
	public void .ctor(DataColumn column) { }

	// RVA: 0x10BE18C Offset: 0x10BA18C VA: 0x10BE18C Slot: 4
	public override object Aggregate(int[] recordNos, AggregateType kind) { }

	// RVA: 0x10BE47C Offset: 0x10BA47C VA: 0x10BE47C Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10BE4F4 Offset: 0x10BA4F4 VA: 0x10BE4F4 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10BE5C8 Offset: 0x10BA5C8 VA: 0x10BE5C8 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10BE5F8 Offset: 0x10BA5F8 VA: 0x10BE5F8 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10BE634 Offset: 0x10BA634 VA: 0x10BE634 Slot: 9
	public override object Get(int recordNo) { }

	// RVA: 0x10BE670 Offset: 0x10BA670 VA: 0x10BE670 Slot: 10
	public override int GetStringLength(int record) { }

	// RVA: 0x10BE6B0 Offset: 0x10BA6B0 VA: 0x10BE6B0 Slot: 11
	public override bool IsNull(int record) { }

	// RVA: 0x10BE6E8 Offset: 0x10BA6E8 VA: 0x10BE6E8 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10BE75C Offset: 0x10BA75C VA: 0x10BE75C Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10BE814 Offset: 0x10BA814 VA: 0x10BE814 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10BE81C Offset: 0x10BA81C VA: 0x10BE81C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10BE87C Offset: 0x10BA87C VA: 0x10BE87C Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10BE8C4 Offset: 0x10BA8C4 VA: 0x10BE8C4 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10BE9C4 Offset: 0x10BA9C4 VA: 0x10BE9C4 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class TimeSpanStorage : DataStorage // TypeDefIndex: 4122
{
	// Fields
	private static readonly TimeSpan s_defaultValue; // 0x0
	private TimeSpan[] _values; // 0x50

	// Methods

	// RVA: 0x10BEA5C Offset: 0x10BAA5C VA: 0x10BEA5C
	public void .ctor(DataColumn column) { }

	// RVA: 0x10BEB88 Offset: 0x10BAB88 VA: 0x10BEB88 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10BF744 Offset: 0x10BB744 VA: 0x10BF744 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10BF8C0 Offset: 0x10BB8C0 VA: 0x10BF8C0 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10BFA34 Offset: 0x10BBA34 VA: 0x10BFA34
	private static TimeSpan ConvertToTimeSpan(object value) { }

	// RVA: 0x10BFC58 Offset: 0x10BBC58 VA: 0x10BFC58 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10BFD04 Offset: 0x10BBD04 VA: 0x10BFD04 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10BFD5C Offset: 0x10BBD5C VA: 0x10BFD5C Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10BFE5C Offset: 0x10BBE5C VA: 0x10BFE5C Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10BFF30 Offset: 0x10BBF30 VA: 0x10BFF30 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10BFFF4 Offset: 0x10BBFF4 VA: 0x10BFFF4 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10C0080 Offset: 0x10BC080 VA: 0x10C0080 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10C0118 Offset: 0x10BC118 VA: 0x10C0118 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10C0160 Offset: 0x10BC160 VA: 0x10C0160 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10C0260 Offset: 0x10BC260 VA: 0x10C0260 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }

	// RVA: 0x10C02F4 Offset: 0x10BC2F4 VA: 0x10C02F4
	private static void .cctor() { }
}


// Namespace: System.Data.Common
internal sealed class UInt16Storage : DataStorage // TypeDefIndex: 4123
{
	// Fields
	private static readonly ushort s_defaultValue; // 0x0
	private ushort[] _values; // 0x50

	// Methods

	// RVA: 0x10C036C Offset: 0x10BC36C VA: 0x10C036C
	public void .ctor(DataColumn column) { }

	// RVA: 0x10C0484 Offset: 0x10BC484 VA: 0x10C0484 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10C0CE0 Offset: 0x10BCCE0 VA: 0x10C0CE0 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10C0D9C Offset: 0x10BCD9C VA: 0x10C0D9C Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10C0EB8 Offset: 0x10BCEB8 VA: 0x10C0EB8 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10C1000 Offset: 0x10BD000 VA: 0x10C1000 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10C1058 Offset: 0x10BD058 VA: 0x10C1058 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10C1128 Offset: 0x10BD128 VA: 0x10C1128 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10C12C0 Offset: 0x10BD2C0 VA: 0x10C12C0 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10C1384 Offset: 0x10BD384 VA: 0x10C1384 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10C1410 Offset: 0x10BD410 VA: 0x10C1410 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10C14A8 Offset: 0x10BD4A8 VA: 0x10C14A8 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10C14F0 Offset: 0x10BD4F0 VA: 0x10C14F0 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10C15F0 Offset: 0x10BD5F0 VA: 0x10C15F0 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class UInt32Storage : DataStorage // TypeDefIndex: 4124
{
	// Fields
	private static readonly uint s_defaultValue; // 0x0
	private uint[] _values; // 0x50

	// Methods

	// RVA: 0x10C1684 Offset: 0x10BD684 VA: 0x10C1684
	public void .ctor(DataColumn column) { }

	// RVA: 0x10C179C Offset: 0x10BD79C VA: 0x10C179C Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10C1FFC Offset: 0x10BDFFC VA: 0x10C1FFC Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10C20C8 Offset: 0x10BE0C8 VA: 0x10C20C8 Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10C21E4 Offset: 0x10BE1E4 VA: 0x10C21E4 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10C232C Offset: 0x10BE32C VA: 0x10C232C Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10C2384 Offset: 0x10BE384 VA: 0x10C2384 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10C2454 Offset: 0x10BE454 VA: 0x10C2454 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10C25EC Offset: 0x10BE5EC VA: 0x10C25EC Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10C26B0 Offset: 0x10BE6B0 VA: 0x10C26B0 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10C273C Offset: 0x10BE73C VA: 0x10C273C Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10C27D4 Offset: 0x10BE7D4 VA: 0x10C27D4 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10C281C Offset: 0x10BE81C VA: 0x10C281C Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10C291C Offset: 0x10BE91C VA: 0x10C291C Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: System.Data.Common
internal sealed class UInt64Storage : DataStorage // TypeDefIndex: 4125
{
	// Fields
	private static readonly ulong s_defaultValue; // 0x0
	private ulong[] _values; // 0x50

	// Methods

	// RVA: 0x10C29B0 Offset: 0x10BE9B0 VA: 0x10C29B0
	public void .ctor(DataColumn column) { }

	// RVA: 0x10C2AC8 Offset: 0x10BEAC8 VA: 0x10C2AC8 Slot: 4
	public override object Aggregate(int[] records, AggregateType kind) { }

	// RVA: 0x10C3314 Offset: 0x10BF314 VA: 0x10C3314 Slot: 5
	public override int Compare(int recordNo1, int recordNo2) { }

	// RVA: 0x10C341C Offset: 0x10BF41C VA: 0x10C341C Slot: 6
	public override int CompareValueTo(int recordNo, object value) { }

	// RVA: 0x10C3538 Offset: 0x10BF538 VA: 0x10C3538 Slot: 7
	public override object ConvertValue(object value) { }

	// RVA: 0x10C3680 Offset: 0x10BF680 VA: 0x10C3680 Slot: 8
	public override void Copy(int recordNo1, int recordNo2) { }

	// RVA: 0x10C36D8 Offset: 0x10BF6D8 VA: 0x10C36D8 Slot: 9
	public override object Get(int record) { }

	// RVA: 0x10C37A8 Offset: 0x10BF7A8 VA: 0x10C37A8 Slot: 12
	public override void Set(int record, object value) { }

	// RVA: 0x10C3940 Offset: 0x10BF940 VA: 0x10C3940 Slot: 13
	public override void SetCapacity(int capacity) { }

	// RVA: 0x10C3A04 Offset: 0x10BFA04 VA: 0x10C3A04 Slot: 14
	public override object ConvertXmlToObject(string s) { }

	// RVA: 0x10C3A90 Offset: 0x10BFA90 VA: 0x10C3A90 Slot: 16
	public override string ConvertObjectToXml(object value) { }

	// RVA: 0x10C3B28 Offset: 0x10BFB28 VA: 0x10C3B28 Slot: 18
	protected override object GetEmptyStorage(int recordCount) { }

	// RVA: 0x10C3B70 Offset: 0x10BFB70 VA: 0x10C3B70 Slot: 19
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex) { }

	// RVA: 0x10C3C70 Offset: 0x10BFC70 VA: 0x10C3C70 Slot: 20
	protected override void SetStorage(object store, BitArray nullbits) { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 // TypeDefIndex: 4126
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=38 // TypeDefIndex: 4127
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 // TypeDefIndex: 4128
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 // TypeDefIndex: 4129
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 // TypeDefIndex: 4130
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=176 // TypeDefIndex: 4131
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 4132
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 39A47A6A540EB845B37C85CE8C346359A0DB937D4AAF7A74A6C207205E0BC61E /*Metadata offset 0x3877B0*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=38 540CD885F06B2760118EA5544E069ACE0C5D184B85D9D104417C14F1E536376D /*Metadata offset 0x387850*/; // 0x98
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA /*Metadata offset 0x387878*/; // 0xBE
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=36 8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD /*Metadata offset 0x3878B0*/; // 0xF2
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 BA1E68F004F9EFDE72987E33682A8A5C579C4A609FBECE4F6EDBB844431D9226 /*Metadata offset 0x3878D8*/; // 0x116
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 C44E90B8C219817ECD3C403823D4770C0F744358EBF32A4282B3CE0338D4602E /*Metadata offset 0x387978*/; // 0x1AE
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=152 D44900CF81FC3D53E7F8D2FCB6EF3B50B39ED1A857628FA737F5B4B7E0382939 /*Metadata offset 0x387A18*/; // 0x246
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=176 E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6 /*Metadata offset 0x387AB8*/; // 0x2DE
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=64 F327BBE8D18E0318C5295B25F9A8BA9B3AFE1F44C3C244BB3921AFEB578F1591 /*Metadata offset 0x387B70*/; // 0x38E
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=52 FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315 /*Metadata offset 0x387BB8*/; // 0x3CE
}
