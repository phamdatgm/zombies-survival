using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public class BlockExpression : Expression
{
	public ReadOnlyCollection<Expression> Expressions => null;

	public ReadOnlyCollection<ParameterExpression> Variables => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public override Type Type => null;

	internal virtual int ExpressionCount => 0;

	internal BlockExpression()
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	internal virtual Expression GetExpression(int index)
	{
		return null;
	}

	internal virtual ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	internal virtual ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	internal virtual BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}

	internal static ReadOnlyCollection<Expression> ReturnReadOnlyExpressions(BlockExpression provider, ref object collection)
	{
		return null;
	}
}
