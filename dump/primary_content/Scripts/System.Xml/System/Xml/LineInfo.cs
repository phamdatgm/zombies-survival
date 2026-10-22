namespace System.Xml;

internal struct LineInfo(int lineNo, int linePos)
{
	internal int lineNo = 0;

	internal int linePos = 0;

	public void Set(int lineNo, int linePos)
	{
	}
}
