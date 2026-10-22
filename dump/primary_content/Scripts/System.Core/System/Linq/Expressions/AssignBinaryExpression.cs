namespace System.Linq.Expressions;

internal class AssignBinaryExpression : BinaryExpression
{
	public sealed override Type Type => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal AssignBinaryExpression(Expression left, Expression right)
		: base(null, null)
	{
	}
}
