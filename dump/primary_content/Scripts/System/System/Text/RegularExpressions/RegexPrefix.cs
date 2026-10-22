namespace System.Text.RegularExpressions;

internal struct RegexPrefix
{
	private readonly bool CaseInsensitive = false;

	private static readonly RegexPrefix Empty;

	private readonly string Prefix = null;

	internal RegexPrefix(string prefix, bool ci)
	{
	}
}
