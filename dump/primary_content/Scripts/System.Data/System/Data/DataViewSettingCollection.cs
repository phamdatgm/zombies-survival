using System.Collections;

namespace System.Data;

public class DataViewSettingCollection
{
	private readonly DataViewManager _dataViewManager;

	private readonly Hashtable _list;

	public virtual DataViewSetting this[DataTable table]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal void Remove(DataTable table)
	{
	}
}
