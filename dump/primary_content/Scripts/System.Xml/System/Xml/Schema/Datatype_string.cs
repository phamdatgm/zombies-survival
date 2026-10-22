namespace System.Xml.Schema;

internal class Datatype_string : Datatype_anySimpleType
{
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet => XmlSchemaWhiteSpace.Preserve;

	internal override FacetsChecker FacetsChecker => null;

	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	public override XmlTokenizedType TokenizedType => XmlTokenizedType.CDATA;

	internal override RestrictionFlags ValidRestrictionFlags => (RestrictionFlags)0;

	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		typedValue = null;
		return null;
	}
}
