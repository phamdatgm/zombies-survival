namespace System.Xml.Schema;

internal class Datatype_date : Datatype_dateTimeBase
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal Datatype_date()
		: base((XsdDateTimeFlags)0)
	{
	}
}
