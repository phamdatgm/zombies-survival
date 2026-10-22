namespace System.Linq.Expressions;

internal static class ConstantCheck
{
	internal static AnalyzeTypeIsResult AnalyzeTypeIs(TypeBinaryExpression typeIs)
	{
		return AnalyzeTypeIsResult.KnownFalse;
	}

	private static AnalyzeTypeIsResult AnalyzeTypeIs(Expression operand, Type testType)
	{
		return AnalyzeTypeIsResult.KnownFalse;
	}
}
