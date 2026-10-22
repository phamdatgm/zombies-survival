using System.Collections.Generic;
using System.Xml.Schema;
using System.Xml.Serialization;

namespace System.Xml.Linq;

[XmlTypeConvertor("ConvertForAssignment")]
[XmlSchemaProvider(null, IsAny = true)]
public class XElement : XContainer, IXmlSerializable
{
	internal XName name;

	internal XAttribute lastAttr;

	public bool HasAttributes => false;

	public bool IsEmpty => false;

	public XName Name => null;

	public override XmlNodeType NodeType => XmlNodeType.None;

	public string Value => null;

	public XElement(XName name)
	{
	}

	public XElement(XElement other)
	{
	}

	public XElement(XStreamingElement other)
	{
	}

	public XAttribute Attribute(XName name)
	{
		return null;
	}

	public IEnumerable<XAttribute> Attributes()
	{
		return null;
	}

	public string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	public override void WriteTo(XmlWriter writer)
	{
	}

	XmlSchema IXmlSerializable.GetSchema()
	{
		return null;
	}

	void IXmlSerializable.ReadXml(XmlReader reader)
	{
	}

	void IXmlSerializable.WriteXml(XmlWriter writer)
	{
	}

	internal override void AddAttribute(XAttribute a)
	{
	}

	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	internal void AppendAttribute(XAttribute a)
	{
	}

	internal void AppendAttributeSkipNotify(XAttribute a)
	{
	}

	internal override XNode CloneNode()
	{
		return null;
	}

	private IEnumerable<XAttribute> GetAttributes(XName name)
	{
		return null;
	}

	private string GetNamespaceOfPrefixInScope(string prefix, XElement outOfScope)
	{
		return null;
	}

	private void ReadElementFrom(XmlReader r, LoadOptions o)
	{
	}

	private void ReadElementFromImpl(XmlReader r, LoadOptions o)
	{
	}

	internal void SetEndElementLineInfo(int lineNumber, int linePosition)
	{
	}

	internal override void ValidateNode(XNode node, XNode previous)
	{
	}
}
