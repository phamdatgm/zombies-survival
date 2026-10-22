using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

internal sealed class NewArrayInitExpression : NewArrayExpression
{
	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal NewArrayInitExpression(Type type, ReadOnlyCollection<Expression> expressions)
		: base(null, null)
	{
	}
}
