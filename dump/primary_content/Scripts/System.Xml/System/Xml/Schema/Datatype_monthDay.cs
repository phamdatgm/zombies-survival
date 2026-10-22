namespace System.Xml.Schema;

internal class Datatype_monthDay : Datatype_dateTimeBase
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal Datatype_monthDay()
		: base((XsdDateTimeFlags)0)
	{
	}
}
