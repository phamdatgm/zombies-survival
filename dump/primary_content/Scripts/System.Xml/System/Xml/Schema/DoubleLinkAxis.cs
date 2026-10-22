using System.Xml.XPath;
using MS.Internal.Xml.XPath;

namespace System.Xml.Schema;

internal class DoubleLinkAxis : Axis
{
	internal Axis next;

	internal DoubleLinkAxis(Axis axis, DoubleLinkAxis inputaxis)
		: base(AxisType.Ancestor, null, null, null, XPathNodeType.Root)
	{
	}

	internal static DoubleLinkAxis ConvertTree(Axis axis)
	{
		return null;
	}
}
