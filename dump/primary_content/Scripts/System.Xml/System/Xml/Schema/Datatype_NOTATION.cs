namespace System.Xml.Schema;

internal class Datatype_NOTATION : Datatype_anySimpleType
{
	private static readonly Type atomicValueType;

	private static readonly Type listValueType;

	internal override FacetsChecker FacetsChecker => null;

	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	public override XmlTokenizedType TokenizedType => XmlTokenizedType.CDATA;

	internal override RestrictionFlags ValidRestrictionFlags => (RestrictionFlags)0;

	public override Type ValueType => null;

	internal override Type ListValueType => null;

	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet => XmlSchemaWhiteSpace.Preserve;

	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		typedValue = null;
		return null;
	}

	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller)
	{
	}
}
