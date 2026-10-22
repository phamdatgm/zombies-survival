using System.Xml.XPath;

namespace MS.Internal.Xml.XPath;

internal class Filter : AstNode
{
	private AstNode _input;

	private AstNode _condition;

	public override AstType Type => AstType.Axis;

	public override XPathResultType ReturnType => XPathResultType.Number;

	public Filter(AstNode input, AstNode condition)
	{
	}
}
