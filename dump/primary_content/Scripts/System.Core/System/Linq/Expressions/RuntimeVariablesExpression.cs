using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class RuntimeVariablesExpression : Expression
{
	private readonly ReadOnlyCollection<ParameterExpression> Variables;
}
