namespace System.Xml.Schema;

internal struct Position(int symbol, object particle)
{
	public int symbol = 0;

	public object particle = null;
}
