using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaAttribute : XmlSchemaAnnotated
{
	private string defaultValue;

	private string fixedValue;

	private string name;

	private XmlSchemaForm form;

	private XmlSchemaUse use;

	private XmlQualifiedName refName;

	private XmlQualifiedName typeName;

	private XmlQualifiedName qualifiedName;

	private XmlSchemaSimpleType type;

	private XmlSchemaSimpleType attributeType;

	private SchemaAttDef attDef;

	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		set
		{
		}
	}

	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		set
		{
		}
	}

	[XmlIgnore]
	internal XmlSchemaDatatype Datatype => null;

	[XmlIgnore]
	internal override string NameAttribute
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
