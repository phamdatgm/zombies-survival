namespace System.Xml;

internal struct BinXmlSqlMoney(int v)
{
	private long data = 0L;

	public decimal ToDecimal()
	{
		return 0m;
	}

	public override string ToString()
	{
		return null;
	}
}
