namespace System.Linq.Expressions.Interpreter;

internal sealed class EnterExceptionFilterInstruction : Instruction
{
	internal static readonly EnterExceptionFilterInstruction Instance;

	public override string InstructionName => null;

	public override int ProducedStack => 0;

	private EnterExceptionFilterInstruction()
	{
	}

	public override int Run(InterpretedFrame frame)
	{
		return 0;
	}
}
