namespace System.Data;

public class MergeFailedEventArgs : EventArgs
{
	private readonly DataTable Table;

	private readonly string Conflict;

	public MergeFailedEventArgs(DataTable table, string conflict)
	{
	}
}
