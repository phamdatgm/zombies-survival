using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

internal sealed class NewArrayBoundsExpression : NewArrayExpression
{
	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal NewArrayBoundsExpression(Type type, ReadOnlyCollection<Expression> expressions)
		: base(null, null)
	{
	}
}
