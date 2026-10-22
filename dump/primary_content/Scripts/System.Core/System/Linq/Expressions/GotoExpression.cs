namespace System.Linq.Expressions;

public sealed class GotoExpression : Expression
{
	private readonly Expression Value;

	private readonly LabelTarget Target;

	private readonly GotoExpressionKind Kind;

	public sealed override Type Type { get; }

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal GotoExpression(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public GotoExpression Update(LabelTarget target, Expression value)
	{
		return null;
	}
}
