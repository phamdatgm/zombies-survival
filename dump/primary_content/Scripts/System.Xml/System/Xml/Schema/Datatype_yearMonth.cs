namespace System.Xml.Schema;

internal class Datatype_yearMonth : Datatype_dateTimeBase
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal Datatype_yearMonth()
		: base((XsdDateTimeFlags)0)
	{
	}
}
