using System.Reflection;
using System.Text;

namespace System.Xml.Serialization;

public class XmlAttributes
{
	private XmlAnyAttributeAttribute xmlAnyAttribute;

	private XmlAnyElementAttributes xmlAnyElements;

	private XmlArrayAttribute xmlArray;

	private XmlArrayItemAttributes xmlArrayItems;

	private XmlAttributeAttribute xmlAttribute;

	private XmlChoiceIdentifierAttribute xmlChoiceIdentifier;

	private object xmlDefaultValue;

	private XmlElementAttributes xmlElements;

	private XmlEnumAttribute xmlEnum;

	private bool xmlIgnore;

	private bool xmlns;

	private XmlRootAttribute xmlRoot;

	private XmlTextAttribute xmlText;

	private XmlTypeAttribute xmlType;

	internal int? Order => null;

	internal int SortableOrder => 0;

	public XmlAttributes()
	{
	}

	public XmlAttributes(ICustomAttributeProvider provider)
	{
	}

	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
