using System.Text;
using System.Xml.Schema;

namespace System.Xml.Serialization;

[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlArrayItemAttribute : Attribute
{
	private string dataType;

	private string elementName;

	private XmlSchemaForm form;

	private string ns;

	private bool isNullable;

	private bool isNullableSpecified;

	private int nestingLevel;

	private Type type;

	public string DataType => null;

	public string ElementName => null;

	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
