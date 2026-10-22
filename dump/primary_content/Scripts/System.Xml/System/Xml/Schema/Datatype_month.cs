namespace System.Xml.Schema;

internal class Datatype_month : Datatype_dateTimeBase
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal Datatype_month()
		: base((XsdDateTimeFlags)0)
	{
	}
}
