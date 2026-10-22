namespace System.Xml.Schema;

internal class Datatype_anySimpleType : DatatypeImplementation
{
	private static readonly Type atomicValueType;

	private static readonly Type listValueType;

	internal override FacetsChecker FacetsChecker => null;

	public override Type ValueType => null;

	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal override Type ListValueType => null;

	public override XmlTokenizedType TokenizedType => XmlTokenizedType.CDATA;

	internal override RestrictionFlags ValidRestrictionFlags => (RestrictionFlags)0;

	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet => XmlSchemaWhiteSpace.Preserve;

	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	internal override int Compare(object value1, object value2)
	{
		return 0;
	}

	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		typedValue = null;
		return null;
	}
}
