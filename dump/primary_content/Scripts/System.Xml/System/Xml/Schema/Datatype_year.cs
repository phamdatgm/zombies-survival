namespace System.Xml.Schema;

internal class Datatype_year : Datatype_dateTimeBase
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal Datatype_year()
		: base((XsdDateTimeFlags)0)
	{
	}
}
