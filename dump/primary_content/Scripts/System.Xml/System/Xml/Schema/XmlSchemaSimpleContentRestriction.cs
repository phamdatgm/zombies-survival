using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaSimpleContentRestriction : XmlSchemaContent
{
	private XmlQualifiedName baseTypeName;

	private XmlSchemaSimpleType baseType;

	private XmlSchemaObjectCollection facets;

	private XmlSchemaObjectCollection attributes;

	private XmlSchemaAnyAttribute anyAttribute;

	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		set
		{
		}
	}
}
