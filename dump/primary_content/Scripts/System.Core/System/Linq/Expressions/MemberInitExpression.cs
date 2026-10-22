using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class MemberInitExpression : Expression
{
	private readonly NewExpression NewExpression;

	private readonly ReadOnlyCollection<MemberBinding> Bindings;
}
