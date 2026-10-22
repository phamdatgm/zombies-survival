using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaAnnotated : XmlSchemaObject
{
	private string id;

	private XmlSchemaAnnotation annotation;

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

	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
