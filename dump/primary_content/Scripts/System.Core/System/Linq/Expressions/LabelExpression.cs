namespace System.Linq.Expressions;

public sealed class LabelExpression : Expression
{
	private readonly LabelTarget Target;

	private readonly Expression DefaultValue;

	public sealed override Type Type => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal LabelExpression(LabelTarget label, Expression defaultValue)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public LabelExpression Update(LabelTarget target, Expression defaultValue)
	{
		return null;
	}
}
