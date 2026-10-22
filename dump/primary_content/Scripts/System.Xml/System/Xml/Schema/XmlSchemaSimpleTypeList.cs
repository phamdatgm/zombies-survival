using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaSimpleTypeList : XmlSchemaSimpleTypeContent
{
	private XmlQualifiedName itemTypeName;

	private XmlSchemaSimpleType itemType;

	private XmlSchemaSimpleType baseItemType;

	[XmlAttribute("itemType")]
	public XmlQualifiedName ItemTypeName
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
