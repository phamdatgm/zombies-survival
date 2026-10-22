namespace System.Linq.Expressions;

public abstract class LambdaExpression : Expression, IParameterProvider
{
	private readonly Expression _body;

	public sealed override Type Type => null;

	internal abstract Type TypeCore { get; }

	internal abstract Type PublicType { get; }

	public sealed override ExpressionType NodeType => ExpressionType.Add;

	public string Name => null;

	internal virtual string NameCore => null;

	public Type ReturnType => null;

	public bool TailCall => false;

	internal virtual bool TailCallCore => false;

	int IParameterProvider.ParameterCount => 0;

	internal virtual int ParameterCount => 0;

	internal LambdaExpression(Expression body)
	{
	}

	ParameterExpression IParameterProvider.GetParameter(int index)
	{
		return null;
	}

	internal virtual ParameterExpression GetParameter(int index)
	{
		return null;
	}
}
