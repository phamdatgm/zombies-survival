using System.Xml.Serialization;

namespace System.Xml.Schema;

public abstract class XmlSchemaObject
{
	private int lineNum;

	private int linePos;

	private string sourceUri;

	private XmlSerializerNamespaces namespaces;

	private XmlSchemaObject parent;

	private bool isProcessing;

	[XmlNamespaceDeclarations]
	public XmlSerializerNamespaces Namespaces => null;

	[XmlIgnore]
	internal virtual string IdAttribute
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	[XmlIgnore]
	internal virtual string NameAttribute
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal virtual void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	internal virtual void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	internal virtual XmlSchemaObject Clone()
	{
		return null;
	}
}
