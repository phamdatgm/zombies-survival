using System.Collections.Generic;
using System.Reflection;

namespace System.Linq.Expressions;

public class MethodCallExpression : Expression, IArgumentProvider
{
	private readonly MethodInfo Method;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public sealed override Type Type => null;

	public Expression Object => null;

	public virtual int ArgumentCount => 0;

	internal MethodCallExpression(MethodInfo method)
	{
	}

	internal virtual Expression GetInstance()
	{
		return null;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	internal virtual MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}

	public virtual Expression GetArgument(int index)
	{
		return null;
	}
}
