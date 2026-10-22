using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class ListInitExpression : Expression
{
	private readonly NewExpression NewExpression;

	private readonly ReadOnlyCollection<ElementInit> Initializers;
}
