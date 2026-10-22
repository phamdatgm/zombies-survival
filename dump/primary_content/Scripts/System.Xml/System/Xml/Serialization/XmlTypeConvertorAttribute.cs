namespace System.Xml.Serialization;

[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
internal class XmlTypeConvertorAttribute : Attribute
{
	private string Method;

	public XmlTypeConvertorAttribute(string method)
	{
	}
}
