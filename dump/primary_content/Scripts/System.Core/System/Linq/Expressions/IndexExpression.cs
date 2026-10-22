using System.Collections.Generic;
using System.Reflection;

namespace System.Linq.Expressions;

public sealed class IndexExpression : Expression, IArgumentProvider
{
	private IReadOnlyList<Expression> _arguments;

	private readonly Expression Object;

	private readonly PropertyInfo Indexer;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public sealed override Type Type => null;

	public int ArgumentCount => 0;

	internal IndexExpression(Expression instance, PropertyInfo indexer, IReadOnlyList<Expression> arguments)
	{
	}

	public Expression GetArgument(int index)
	{
		return null;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	internal Expression Rewrite(Expression instance, Expression[] arguments)
	{
		return null;
	}
}
