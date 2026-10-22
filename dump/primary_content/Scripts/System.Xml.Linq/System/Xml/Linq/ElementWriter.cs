namespace System.Xml.Linq;

internal struct ElementWriter(XmlWriter writer)
{
	private XmlWriter _writer = null;

	private NamespaceResolver _resolver = default;

	public void WriteElement(XElement e)
	{
	}

	private string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}

	private void PushAncestors(XElement e)
	{
	}

	private void PushElement(XElement e)
	{
	}

	private void WriteEndElement()
	{
	}

	private void WriteFullEndElement()
	{
	}

	private void WriteStartElement(XElement e)
	{
	}
}
