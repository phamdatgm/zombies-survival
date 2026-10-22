namespace System.Xml.Schema;

internal sealed class SequenceNode : InteriorNode
{
	private struct SequenceConstructPosContext(SequenceNode node, BitSet firstpos, BitSet lastpos)
	{
		public SequenceNode this_ = null;

		public BitSet firstpos = null;

		public BitSet lastpos = null;

		public BitSet lastposLeft = null;

		public BitSet firstposRight = null;
	}

	public override bool IsNullable => false;

	public override void ConstructPos(BitSet firstpos, BitSet lastpos, BitSet[] followpos)
	{
	}

	public override void ExpandTree(InteriorNode parent, SymbolsDictionary symbols, Positions positions)
	{
	}
}
