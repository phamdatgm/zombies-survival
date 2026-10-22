using System.Xml.XPath;

namespace MS.Internal.Xml.XPath;

internal class Axis : AstNode
{
	public enum AxisType
	{
		Ancestor = 0,
		AncestorOrSelf = 1,
		Attribute = 2,
		Child = 3,
		Descendant = 4,
		DescendantOrSelf = 5,
		Following = 6,
		FollowingSibling = 7,
		Namespace = 8,
		Parent = 9,
		Preceding = 10,
		PrecedingSibling = 11,
		Self = 12,
		None = 13
	}

	private AxisType _axisType;

	private AstNode _input;

	private string _prefix;

	private string _name;

	private XPathNodeType _nodeType;

	protected bool abbrAxis;

	private string _urn;

	public override AstType Type => AstType.Axis;

	public override XPathResultType ReturnType => XPathResultType.Number;

	public Axis(AxisType axisType, AstNode input, string prefix, string name, XPathNodeType nodetype)
	{
	}

	public Axis(AxisType axisType, AstNode input)
	{
	}
}
