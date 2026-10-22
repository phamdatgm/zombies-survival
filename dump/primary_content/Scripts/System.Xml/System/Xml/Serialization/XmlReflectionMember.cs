namespace System.Xml.Serialization;

public class XmlReflectionMember
{
	private bool isReturnValue;

	private string memberName;

	private Type memberType;

	private XmlAttributes xmlAttributes;

	private Type declaringType;

	public XmlAttributes XmlAttributes => null;

	internal XmlReflectionMember(string name, Type type, XmlAttributes attributes)
	{
	}
}
