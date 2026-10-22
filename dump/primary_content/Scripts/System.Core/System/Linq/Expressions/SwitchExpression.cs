using System.Collections.ObjectModel;
using System.Reflection;

namespace System.Linq.Expressions;

public sealed class SwitchExpression : Expression
{
	private new readonly Type Type;

	private readonly Expression SwitchValue;

	private readonly ReadOnlyCollection<SwitchCase> Cases;

	private readonly Expression DefaultBody;

	private readonly MethodInfo Comparison;
}
