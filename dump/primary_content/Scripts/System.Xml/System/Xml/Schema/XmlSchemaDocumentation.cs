using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaDocumentation : XmlSchemaObject
{
	private string source;

	private string language;

	private XmlNode[] markup;

	private static XmlSchemaSimpleType languageType;

	[XmlAttribute("xml:lang")]
	public string Language
	{
		set
		{
		}
	}
}
