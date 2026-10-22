namespace System.Xml.Schema;

internal class Datatype_ID : Datatype_NCName
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	public override XmlTokenizedType TokenizedType => XmlTokenizedType.CDATA;
}
