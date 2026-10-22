using System.Collections.Generic;
using System.Collections.ObjectModel;

namespace System.Linq.Expressions;

public sealed class TryExpression : Expression
{
	private readonly Expression Body;

	private readonly ReadOnlyCollection<CatchBlock> Handlers;

	private readonly Expression Finally;

	private readonly Expression Fault;

	public sealed override Type Type { get; }

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal TryExpression(Type type, Expression body, Expression @finally, Expression fault, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public TryExpression Update(Expression body, IEnumerable<CatchBlock> handlers, Expression @finally, Expression fault)
	{
		return null;
	}
}
