using System.Xml.XPath;

namespace MS.Internal.Xml.XPath;

internal class Root : AstNode
{
	public override AstType Type => AstType.Axis;

	public override XPathResultType ReturnType => XPathResultType.Number;
}
