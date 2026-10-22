namespace System.Linq.Expressions;

public class InvocationExpression : Expression, IArgumentProvider
{
	private readonly Expression Expression;

	public sealed override Type Type { get; }

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public virtual int ArgumentCount => 0;

	internal InvocationExpression(Expression expression, Type returnType)
	{
	}

	public virtual Expression GetArgument(int index)
	{
		return null;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	internal virtual InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
