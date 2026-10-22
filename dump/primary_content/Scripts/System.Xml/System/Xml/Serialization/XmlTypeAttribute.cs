using System.Text;

namespace System.Xml.Serialization;

[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
public class XmlTypeAttribute : Attribute
{
	private bool includeInSchema;

	private string ns;

	private string typeName;

	public string TypeName => null;

	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
