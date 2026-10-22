namespace System.Xml.Schema;

internal class Datatype_normalizedStringV1Compat : Datatype_string
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal override bool HasValueFacets => false;
}
