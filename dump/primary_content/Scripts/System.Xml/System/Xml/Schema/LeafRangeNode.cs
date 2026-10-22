namespace System.Xml.Schema;

internal sealed class LeafRangeNode : LeafNode
{
	private decimal min;

	private decimal max;

	private BitSet nextIteration;

	public override bool IsRangeNode => false;

	public LeafRangeNode(decimal min, decimal max)
		: base(0)
	{
	}

	public LeafRangeNode(int pos, decimal min, decimal max)
		: base(0)
	{
	}

	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}
}
