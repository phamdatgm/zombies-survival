namespace UnityEngine.UIElements.StyleSheets.Syntax;

internal struct StyleSyntaxToken
{
	public StyleSyntaxTokenType type = StyleSyntaxTokenType.Unknown;

	public string text = null;

	public int number = 0;

	public StyleSyntaxToken(StyleSyntaxTokenType t)
	{
	}

	public StyleSyntaxToken(StyleSyntaxTokenType type, string text)
	{
	}

	public StyleSyntaxToken(StyleSyntaxTokenType type, int number)
	{
	}
}
