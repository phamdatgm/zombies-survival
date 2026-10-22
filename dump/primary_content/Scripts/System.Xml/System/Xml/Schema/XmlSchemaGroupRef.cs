using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaGroupRef : XmlSchemaParticle
{
	private XmlQualifiedName refName;

	private XmlSchemaGroupBase particle;

	private XmlSchemaGroup refined;

	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		set
		{
		}
	}
}
