using System.Collections.ObjectModel;
using System.Reflection;

namespace System.Linq.Expressions;

public sealed class ElementInit : IArgumentProvider
{
	private readonly MethodInfo AddMethod;

	private readonly ReadOnlyCollection<Expression> Arguments;

	public int ArgumentCount => 0;

	public Expression GetArgument(int index)
	{
		return null;
	}
}
