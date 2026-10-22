using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaSimpleTypeRestriction : XmlSchemaSimpleTypeContent
{
	private XmlQualifiedName baseTypeName;

	private XmlSchemaSimpleType baseType;

	private XmlSchemaObjectCollection facets;

	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		set
		{
		}
	}

	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
