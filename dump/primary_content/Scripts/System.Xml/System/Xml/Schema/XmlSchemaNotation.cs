using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaNotation : XmlSchemaAnnotated
{
	private string name;

	private string publicId;

	private string systemId;

	private XmlQualifiedName qname;

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
}
