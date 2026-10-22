using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaComplexContentRestriction : XmlSchemaContent
{
	private XmlSchemaParticle particle;

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
