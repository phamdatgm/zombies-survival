using System.Text;
using System.Xml.Schema;

namespace System.Xml.Serialization;

[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlElementAttribute : Attribute
{
	private string dataType;

	private string elementName;

	private XmlSchemaForm form;

	private string ns;

	private bool isNullable;

	private Type type;

	private int order;

	public string DataType => null;

	public string ElementName => null;

	public XmlElementAttribute(string elementName, Type type)
	{
	}

	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
