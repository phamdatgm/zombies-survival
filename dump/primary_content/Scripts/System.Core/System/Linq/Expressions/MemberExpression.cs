using System.Reflection;

namespace System.Linq.Expressions;

public class MemberExpression : Expression
{
	private readonly Expression Expression;

	public MemberInfo Member => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	internal MemberExpression(Expression expression)
	{
	}

	internal static PropertyExpression Make(Expression expression, PropertyInfo property)
	{
		return null;
	}

	internal static FieldExpression Make(Expression expression, FieldInfo field)
	{
		return null;
	}

	internal virtual MemberInfo GetMember()
	{
		return null;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	public MemberExpression Update(Expression expression)
	{
		return null;
	}
}
