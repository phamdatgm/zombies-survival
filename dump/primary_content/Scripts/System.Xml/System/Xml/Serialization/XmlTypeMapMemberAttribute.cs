using System.Xml.Schema;

namespace System.Xml.Serialization;

internal class XmlTypeMapMemberAttribute : XmlTypeMapMember
{
	private string _attributeName;

	private string _namespace;

	private XmlSchemaForm _form;

	private XmlTypeMapping _mappedType;
}
