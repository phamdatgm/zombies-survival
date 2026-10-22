namespace System.Linq.Expressions;

public sealed class CatchBlock
{
	private readonly ParameterExpression Variable;

	private readonly Type Test;

	private readonly Expression Filter;

	public Expression Body { get; }

	internal CatchBlock(Type test, ParameterExpression variable, Expression body, Expression filter)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public CatchBlock Update(ParameterExpression variable, Expression filter, Expression body)
	{
		return null;
	}
}
