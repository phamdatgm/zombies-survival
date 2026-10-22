namespace Newtonsoft.Json.Utilities;

internal struct StringReference
{
	private readonly char[] _chars = null;

	private readonly int _startIndex = 0;

	private readonly int _length = 0;

	public char this[int i] => '\0';

	public char[] Chars => null;

	public int StartIndex => 0;

	public int Length => 0;

	public StringReference(char[] chars, int startIndex, int length)
	{
	}

	public override string ToString()
	{
		return null;
	}
}
