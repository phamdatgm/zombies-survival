namespace System.Data;

public class DataRowChangeEventArgs : EventArgs
{
	private readonly DataRow Row;

	private readonly DataRowAction Action;

	public DataRowChangeEventArgs(DataRow row, DataRowAction action)
	{
	}
}
