namespace System.Xml.Serialization;

[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface)]
public sealed class XmlSchemaProviderAttribute : Attribute
{
	private string _methodName;

	private bool _isAny;

	public bool IsAny
	{
		set
		{
		}
	}

	public XmlSchemaProviderAttribute(string methodName)
	{
	}
}
