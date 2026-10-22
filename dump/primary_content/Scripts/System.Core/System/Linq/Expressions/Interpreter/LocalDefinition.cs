namespace System.Linq.Expressions.Interpreter;

internal struct LocalDefinition
{
	private readonly int Index = 0;

	private readonly ParameterExpression Parameter = null;

	internal LocalDefinition(int localIndex, ParameterExpression parameter)
	{
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
