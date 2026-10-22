using System.Collections.Generic;

namespace System.Data;

internal sealed class RecordManager
{
	private readonly DataTable _table;

	private int _lastFreeRecord;

	private int _minimumCapacity;

	private int _recordCapacity;

	private readonly List<int> _freeRecordList;

	private DataRow[] _rows;

	internal int MinimumCapacity
	{
		set
		{
		}
	}

	internal int RecordCapacity
	{
		set
		{
		}
	}

	internal DataRow this[int record]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal RecordManager(DataTable table)
	{
	}

	private void GrowRecordCapacity()
	{
	}

	internal static int NewCapacity(int capacity)
	{
		return 0;
	}

	private int NormalizedMinimumCapacity(int capacity)
	{
		return 0;
	}

	internal int NewRecordBase()
	{
		return 0;
	}

	internal void FreeRecord(ref int record)
	{
	}

	internal void Clear(bool clearAll)
	{
	}

	internal int ImportRecord(DataTable src, int record)
	{
		return 0;
	}

	internal int CopyRecord(DataTable src, int record, int copy)
	{
		return 0;
	}

	internal void SetRowCache(DataRow[] newRows)
	{
	}
}
