using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class SwitchCase
{
	private readonly ReadOnlyCollection<Expression> TestValues;

	private readonly Expression Body;
}
