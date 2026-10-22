namespace System.Linq.Expressions.Interpreter;

internal struct RuntimeLabel(int index, int continuationStackDepth, int stackDepth)
{
	public readonly int Index = 0;

	public readonly int StackDepth = 0;

	public readonly int ContinuationStackDepth = 0;

	public override string ToString()
	{
		return null;
	}
}
