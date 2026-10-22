namespace System.Linq.Expressions;

public class ConstantExpression : Expression
{
	private readonly object Value;

	public override Type Type => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal ConstantExpression(object value)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
