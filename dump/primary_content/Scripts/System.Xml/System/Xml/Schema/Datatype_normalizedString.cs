namespace System.Xml.Schema;

internal class Datatype_normalizedString : Datatype_string
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet => XmlSchemaWhiteSpace.Preserve;

	internal override bool HasValueFacets => false;
}
