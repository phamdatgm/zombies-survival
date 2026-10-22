namespace System.Xml.Schema;

public class XmlSchemaSimpleTypeUnion : XmlSchemaSimpleTypeContent
{
	private XmlSchemaObjectCollection baseTypes;

	private XmlQualifiedName[] memberTypes;

	private XmlSchemaSimpleType[] baseMemberTypes;

	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
