namespace System.Linq.Expressions.Interpreter;

internal sealed class EnterTryFaultInstruction : IndexedBranchInstruction
{
	private TryFaultHandler _tryHandler;

	public override string InstructionName => null;

	public override int ProducedContinuations => 0;

	internal EnterTryFaultInstruction(int targetIndex)
		: base(0)
	{
	}

	public override int Run(InterpretedFrame frame)
	{
		return 0;
	}
}
