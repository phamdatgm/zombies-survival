namespace System.Data;

internal struct IndexField
{
	public readonly DataColumn Column = null;

	public readonly bool IsDescending = false;

	internal IndexField(DataColumn column, bool isDescending)
	{
	}

	public static bool operator ==(IndexField if1, IndexField if2)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
