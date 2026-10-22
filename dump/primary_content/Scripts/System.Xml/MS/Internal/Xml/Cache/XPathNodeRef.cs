namespace MS.Internal.Xml.Cache;

internal struct XPathNodeRef(XPathNode[] page, int idx)
{
	private XPathNode[] _page = null;

	private int _idx = 0;

	public override int GetHashCode()
	{
		return 0;
	}
}
