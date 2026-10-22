namespace System.Linq.Expressions;

public sealed class TypeBinaryExpression : Expression
{
	private readonly Expression Expression;

	private readonly Type TypeOperand;

	public sealed override Type Type => null;

	public sealed override ExpressionType NodeType { get; }

	internal TypeBinaryExpression(Expression expression, Type typeOperand, ExpressionType nodeType)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public TypeBinaryExpression Update(Expression expression)
	{
		return null;
	}
}
