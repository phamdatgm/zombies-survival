namespace System.Net;

internal class CookieTokenizer
{
	private struct RecognizedAttribute
	{
		private string m_name = null;

		private CookieToken m_token = CookieToken.Nothing;

		internal RecognizedAttribute(string name, CookieToken token)
		{
		}

		internal bool IsEqualTo(string value)
		{
			return false;
		}
	}

	private bool m_eofCookie;

	private int m_index;

	private int m_length;

	private string m_name;

	private bool m_quoted;

	private int m_start;

	private CookieToken m_token;

	private int m_tokenLength;

	private string m_tokenStream;

	private string m_value;

	private static RecognizedAttribute[] RecognizedAttributes;

	private static RecognizedAttribute[] RecognizedServerAttributes;

	internal bool Eof => false;

	internal CookieTokenizer(string tokenStream)
	{
	}

	internal string Extract()
	{
		return null;
	}

	internal CookieToken FindNext(bool ignoreComma, bool ignoreEquals)
	{
		return CookieToken.Nothing;
	}

	internal CookieToken Next(bool first, bool parseResponseCookies)
	{
		return CookieToken.Nothing;
	}

	internal void Reset()
	{
	}

	internal CookieToken TokenFromName(bool parseResponseCookies)
	{
		return CookieToken.Nothing;
	}
}
