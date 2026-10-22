using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaComplexContent : XmlSchemaContentModel
{
	private XmlSchemaContent content;

	private bool isMixed;

	private bool hasMixedAttribute;

	[XmlAttribute("mixed")]
	public bool IsMixed
	{
		set
		{
		}
	}

	[XmlElement("restriction", typeof(XmlSchemaComplexContentRestriction))]
	[XmlElement("extension", typeof(XmlSchemaComplexContentExtension))]
	public override XmlSchemaContent Content => null;
}
