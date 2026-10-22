namespace System.Data;

public sealed class DataTableNewRowEventArgs : EventArgs
{
	private readonly DataRow Row;

	public DataTableNewRowEventArgs(DataRow dataRow)
	{
	}
}
