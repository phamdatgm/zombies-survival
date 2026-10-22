using System.Xml.Serialization;

namespace System.Xml.Schema;

public abstract class XmlSchemaExternal : XmlSchemaObject
{
	private string location;

	private Uri baseUri;

	private XmlSchema schema;

	private string id;

	private XmlAttribute[] moreAttributes;

	private Compositor compositor;

	[XmlIgnore]
	internal override string IdAttribute
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}
}
