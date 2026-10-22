namespace System.Xml.Schema;

internal class Datatype_yearMonthDuration : Datatype_duration
{
	public override XmlTypeCode TypeCode => XmlTypeCode.None;

	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		typedValue = null;
		return null;
	}
}
