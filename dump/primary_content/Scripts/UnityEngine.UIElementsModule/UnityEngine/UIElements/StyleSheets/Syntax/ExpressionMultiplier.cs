namespace UnityEngine.UIElements.StyleSheets.Syntax;

internal struct ExpressionMultiplier
{
	public const int Infinity = 100;

	private ExpressionMultiplierType m_Type = ExpressionMultiplierType.None;

	public int min = 0;

	public int max = 0;

	public ExpressionMultiplierType type
	{
		get
		{
			return ExpressionMultiplierType.None;
		}
		set
		{
		}
	}

	public ExpressionMultiplier(ExpressionMultiplierType type = ExpressionMultiplierType.None)
	{
	}

	private void SetType(ExpressionMultiplierType value)
	{
	}
}
