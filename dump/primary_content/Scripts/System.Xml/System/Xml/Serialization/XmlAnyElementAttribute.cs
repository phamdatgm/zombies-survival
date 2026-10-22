using System.Text;

namespace System.Xml.Serialization;

[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlAnyElementAttribute : Attribute
{
	private string elementName;

	private string ns;

	private int order;

	public string Name => null;

	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
