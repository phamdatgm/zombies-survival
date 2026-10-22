using System.Collections.Generic;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

internal class StyleSyntaxTokenizer
{
	private List<StyleSyntaxToken> m_Tokens;

	private int m_CurrentTokenIndex;

	public StyleSyntaxToken current => default;

	public StyleSyntaxToken MoveNext()
	{
		return default;
	}

	public StyleSyntaxToken PeekNext()
	{
		return default;
	}

	public void Tokenize(string syntax)
	{
	}

	private static bool IsNextCharacter(string s, int index, char c)
	{
		return false;
	}

	private static bool IsNextLetterOrDash(string s, int index)
	{
		return false;
	}

	private static bool IsNextNumber(string s, int index)
	{
		return false;
	}

	private static int GlobCharacter(string s, int index, char c)
	{
		return 0;
	}
}
