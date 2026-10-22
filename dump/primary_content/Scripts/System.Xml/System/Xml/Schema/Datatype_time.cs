namespace System.Xml.Schema;

internal class Datatype_time : Datatype_dateTimeBase
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal Datatype_time()
		: base((XsdDateTimeFlags)0)
	{
	}
}
