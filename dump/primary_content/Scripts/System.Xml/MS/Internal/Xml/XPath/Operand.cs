using System.Xml.XPath;

namespace MS.Internal.Xml.XPath;

internal class Operand : AstNode
{
	private XPathResultType _type;

	private object _val;

	public override AstType Type => AstType.Axis;

	public override XPathResultType ReturnType => XPathResultType.Number;

	public Operand(string val)
	{
	}

	public Operand(double val)
	{
	}
}
