namespace System.Linq.Expressions;

public sealed class LoopExpression : Expression
{
	private readonly Expression Body;

	private readonly LabelTarget BreakLabel;

	private readonly LabelTarget ContinueLabel;

	public sealed override Type Type => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal LoopExpression(Expression body, LabelTarget @break, LabelTarget @continue)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public LoopExpression Update(LabelTarget breakLabel, LabelTarget continueLabel, Expression body)
	{
		return null;
	}
}
