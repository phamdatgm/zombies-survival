using System.Xml.Serialization;

namespace System.Xml.Schema;

public class XmlSchemaAny : XmlSchemaParticle
{
	private string ns;

	private XmlSchemaContentProcessing processContents;

	private NamespaceList namespaceList;

	[XmlIgnore]
	internal string ResolvedNamespace => null;

	[XmlIgnore]
	internal XmlSchemaContentProcessing ProcessContentsCorrect => XmlSchemaContentProcessing.None;

	internal override string NameString => null;

	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	internal bool Allows(XmlQualifiedName qname)
	{
		return false;
	}
}
