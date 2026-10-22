namespace System.Xml;

public class XmlImplementation
{
	private XmlNameTable nameTable;

	public XmlImplementation()
	{
	}

	public XmlImplementation(XmlNameTable nt)
	{
	}

	public virtual XmlDocument CreateDocument()
	{
		return null;
	}
}
