using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaAnnotation : XmlSchemaObject
{
	private string id;

	private XmlSchemaObjectCollection items;

	private XmlAttribute[] moreAttributes;

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
