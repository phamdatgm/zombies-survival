namespace System.Linq.Expressions;

public class ParameterExpression : Expression
{
	public override Type Type => null;

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public string Name { get; }

	public bool IsByRef => false;

	internal ParameterExpression(string name)
	{
	}

	internal static ParameterExpression Make(Type type, string name, bool isByRef)
	{
		return null;
	}

	internal virtual bool GetIsByRef()
	{
		return false;
	}

	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
