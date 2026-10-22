namespace System.Xml;

internal class ValidatingReaderNodeData
{
	private string localName;

	private string namespaceUri;

	private string prefix;

	private string nameWPrefix;

	private string rawValue;

	private string originalStringValue;

	private int depth;

	private AttributePSVIInfo attributePSVIInfo;

	private XmlNodeType nodeType;

	private int lineNo;

	private int linePos;

	public ValidatingReaderNodeData()
	{
	}

	public ValidatingReaderNodeData(XmlNodeType nodeType)
	{
	}

	public string GetAtomizedNameWPrefix(XmlNameTable nameTable)
	{
		return null;
	}

	internal void Clear(XmlNodeType nodeType)
	{
	}

	internal void SetLineInfo(int lineNo, int linePos)
	{
	}

	internal void SetLineInfo(IXmlLineInfo lineInfo)
	{
	}

	internal void SetItemData(string localName, string prefix, string ns, int depth)
	{
	}

	internal void SetItemData(string value)
	{
	}

	internal void SetItemData(string value, string originalStringValue)
	{
	}
}
