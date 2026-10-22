using System.Xml.XPath;

namespace MS.Internal.Xml.XPath;

internal class Group : AstNode
{
	private AstNode _groupNode;

	public override AstType Type => AstType.Axis;

	public override XPathResultType ReturnType => XPathResultType.Number;

	public Group(AstNode groupNode)
	{
	}
}
