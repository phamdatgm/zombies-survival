namespace System.Xml.Schema;

internal class Datatype_NMTOKEN : Datatype_token
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	public override XmlTokenizedType TokenizedType => XmlTokenizedType.CDATA;
}
