namespace System.Data;

public class DataColumnChangeEventArgs : EventArgs
{
	private DataColumn _column;

	private readonly DataRow Row;

	private object ProposedValue;

	internal DataColumnChangeEventArgs(DataRow row)
	{
	}

	public DataColumnChangeEventArgs(DataRow row, DataColumn column, object value)
	{
	}

	internal void InitializeColumnChangeEvent(DataColumn column, object value)
	{
	}
}
