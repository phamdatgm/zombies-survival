namespace System.Linq.Expressions;

public sealed class DefaultExpression : Expression
{
	public sealed override Type Type { get; }

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal DefaultExpression(Type type)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
