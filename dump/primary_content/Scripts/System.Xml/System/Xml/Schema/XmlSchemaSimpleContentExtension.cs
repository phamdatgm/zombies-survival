using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaSimpleContentExtension : XmlSchemaContent
{
	private XmlSchemaObjectCollection attributes;

	private XmlSchemaAnyAttribute anyAttribute;

	private XmlQualifiedName baseTypeName;

	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		set
		{
		}
	}
}
