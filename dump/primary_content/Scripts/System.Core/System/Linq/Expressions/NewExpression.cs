using System.Collections.Generic;
using System.Reflection;

namespace System.Linq.Expressions;

public class NewExpression : Expression
{
	private IReadOnlyList<Expression> _arguments;

	private readonly ConstructorInfo Constructor;

	public Expression GetArgument(int index)
	{
		return null;
	}
}
