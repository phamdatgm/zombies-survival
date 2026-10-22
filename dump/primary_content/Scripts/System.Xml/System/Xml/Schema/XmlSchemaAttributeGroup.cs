using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaAttributeGroup : XmlSchemaAnnotated
{
	private string name;

	private XmlSchemaObjectCollection attributes;

	private XmlSchemaAnyAttribute anyAttribute;

	private XmlQualifiedName qname;

	private XmlSchemaAttributeGroup redefined;

	private XmlSchemaObjectTable attributeUses;

	private XmlSchemaAnyAttribute attributeWildcard;

	private int selfReferenceCount;

	[XmlIgnore]
	internal XmlSchemaObjectTable AttributeUses => null;

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

	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
