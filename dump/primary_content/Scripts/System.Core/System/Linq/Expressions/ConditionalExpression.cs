namespace System.Linq.Expressions;

public class ConditionalExpression : Expression
{
	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public override Type Type => null;

	public Expression Test { get; }

	public Expression IfTrue { get; }

	public Expression IfFalse => null;

	internal ConditionalExpression(Expression test, Expression ifTrue)
	{
	}

	internal static ConditionalExpression Make(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	internal virtual Expression GetFalse()
	{
		return null;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public ConditionalExpression Update(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}
}
