using System.Xml.XPath;

namespace MS.Internal.Xml.XPath;

internal class Variable : AstNode
{
	private string _localname;

	private string _prefix;

	public override AstType Type => AstType.Axis;

	public override XPathResultType ReturnType => XPathResultType.Number;

	public Variable(string name, string prefix)
	{
	}
}
