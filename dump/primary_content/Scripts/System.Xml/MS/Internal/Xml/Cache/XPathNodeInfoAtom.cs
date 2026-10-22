using System.Xml.XPath;

namespace MS.Internal.Xml.Cache;

internal sealed class XPathNodeInfoAtom
{
	private string _localName;

	private string _namespaceUri;

	private string _prefix;

	private XPathNode[] _pageParent;

	private XPathNode[] _pageSibling;

	private XPathDocument _doc;

	private int _lineNumBase;

	private int _linePosBase;

	private XPathNodePageInfo _pageInfo;
}
