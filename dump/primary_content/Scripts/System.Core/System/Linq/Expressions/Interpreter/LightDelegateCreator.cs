using System.Runtime.CompilerServices;

namespace System.Linq.Expressions.Interpreter;

internal sealed class LightDelegateCreator
{
	private readonly LambdaExpression _lambda;

	private readonly Interpreter Interpreter;

	internal LightDelegateCreator(Interpreter interpreter, LambdaExpression lambda)
	{
	}

	public Delegate CreateDelegate()
	{
		return null;
	}

	internal Delegate CreateDelegate(IStrongBox[] closure)
	{
		return null;
	}
}
