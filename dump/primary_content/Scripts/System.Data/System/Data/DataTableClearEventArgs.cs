namespace System.Data;

public sealed class DataTableClearEventArgs : EventArgs
{
	private readonly DataTable Table;

	public DataTableClearEventArgs(DataTable dataTable)
	{
	}
}
