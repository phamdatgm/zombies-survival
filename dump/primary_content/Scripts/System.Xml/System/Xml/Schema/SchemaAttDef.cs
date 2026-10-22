namespace System.Xml.Schema;

internal sealed class SchemaAttDef : SchemaDeclBase, IDtdDefaultAttributeInfo, IDtdAttributeInfo
{
	internal enum Reserve
	{
		None = 0,
		XmlSpace = 1,
		XmlLang = 2
	}

	private string defExpanded;

	private int lineNum;

	private int linePos;

	private int valueLineNum;

	private int valueLinePos;

	private Reserve reserved;

	private bool defaultValueChecked;

	private XmlSchemaAttribute schemaAttribute;

	public static readonly SchemaAttDef Empty;

	string IDtdAttributeInfo.Prefix => null;

	string IDtdAttributeInfo.LocalName => null;

	int IDtdAttributeInfo.LineNumber => 0;

	int IDtdAttributeInfo.LinePosition => 0;

	bool IDtdAttributeInfo.IsNonCDataType => false;

	bool IDtdAttributeInfo.IsDeclaredInExternal => false;

	bool IDtdAttributeInfo.IsXmlAttribute => false;

	string IDtdDefaultAttributeInfo.DefaultValueExpanded => null;

	object IDtdDefaultAttributeInfo.DefaultValueTyped => null;

	int IDtdDefaultAttributeInfo.ValueLineNumber => 0;

	int IDtdDefaultAttributeInfo.ValueLinePosition => 0;

	internal string DefaultValueExpanded => null;

	internal XmlTokenizedType TokenizedType
	{
		get
		{
			return XmlTokenizedType.CDATA;
		}
		set
		{
		}
	}

	public SchemaAttDef(XmlQualifiedName name, string prefix)
		: base(null, null)
	{
	}

	public SchemaAttDef(XmlQualifiedName name)
		: base(null, null)
	{
	}

	private SchemaAttDef()
		: base(null, null)
	{
	}

	internal void CheckXmlSpace(IValidationEventHandling validationEventHandling)
	{
	}

	internal SchemaAttDef Clone()
	{
		return null;
	}
}
