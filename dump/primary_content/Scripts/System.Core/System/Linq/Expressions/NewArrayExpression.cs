using System.Collections.Generic;
using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public class NewArrayExpression : Expression
{
	private readonly ReadOnlyCollection<Expression> Expressions;

	public sealed override Type Type { get; }

	internal NewArrayExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}

	internal static NewArrayExpression Make(ExpressionType nodeType, Type type, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public NewArrayExpression Update(IEnumerable<Expression> expressions)
	{
		return null;
	}
}
