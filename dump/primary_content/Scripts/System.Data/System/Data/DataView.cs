using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;

namespace System.Data;

public class DataView : MarshalByValueComponent, IBindingList, IList, ICollection, IEnumerable
{
	private sealed class DataRowReferenceComparer : IEqualityComparer<DataRow>
	{
		internal static readonly DataRowReferenceComparer s_default;

		private DataRowReferenceComparer()
		{
		}

		public bool Equals(DataRow x, DataRow y)
		{
			return false;
		}

		public int GetHashCode(DataRow obj)
		{
			return 0;
		}
	}

	private DataViewManager _dataViewManager;

	private DataTable _table;

	private bool _locked;

	private Index _index;

	private Dictionary<string, Index> _findIndexes;

	private string _sort;

	private Comparison<DataRow> _comparison;

	private IFilter _rowFilter;

	private DataViewRowState _recordStates;

	private bool _shouldOpen;

	private bool _open;

	private bool _allowNew;

	private bool _allowEdit;

	private bool _allowDelete;

	private bool _applyDefaultSort;

	internal DataRow _addNewRow;

	private ListChangedEventArgs _addNewMoved;

	private ListChangedEventHandler _onListChanged;

	internal static ListChangedEventArgs s_resetEventArgs;

	private DataViewRowState _delayedRecordStates;

	private bool _fEndInitInProgress;

	private Dictionary<DataRow, DataRowView> _rowViewCache;

	private readonly Dictionary<DataRow, DataRowView> _rowViewBuffer;

	private DataViewListener _dvListener;

	private static int s_objectTypeCount;

	private readonly int _objectID;

	[Browsable(false)]
	public int Count => 0;

	private int CountFromIndex => 0;

	bool ICollection.IsSynchronized => false;

	[DefaultValue(null)]
	public string Sort => null;

	object ICollection.SyncRoot => null;

	object IList.this[int recordIndex]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public DataRowView this[int recordIndex] => null;

	bool IList.IsReadOnly => false;

	bool IList.IsFixedSize => false;

	internal DataView(DataTable table, bool locked)
	{
	}

	public virtual DataRowView AddNew()
	{
		return null;
	}

	private void CheckOpen()
	{
	}

	protected void Close()
	{
	}

	public void CopyTo(Array array, int index)
	{
	}

	private void CopyTo(DataRowView[] array, int index)
	{
	}

	public void Delete(int index)
	{
	}

	internal void Delete(DataRow row)
	{
	}

	protected override void Dispose(bool disposing)
	{
	}

	internal void FinishAddNew(bool success)
	{
	}

	public IEnumerator GetEnumerator()
	{
		return null;
	}

	int IList.Add(object value)
	{
		return 0;
	}

	void IList.Clear()
	{
	}

	bool IList.Contains(object value)
	{
		return false;
	}

	int IList.IndexOf(object value)
	{
		return 0;
	}

	internal int IndexOf(DataRowView rowview)
	{
		return 0;
	}

	private int IndexOfDataRowView(DataRowView rowview)
	{
		return 0;
	}

	void IList.Insert(int index, object value)
	{
	}

	void IList.Remove(object value)
	{
	}

	void IList.RemoveAt(int index)
	{
	}

	internal virtual IFilter GetFilter()
	{
		return null;
	}

	private int GetRecord(int recordIndex)
	{
		return 0;
	}

	internal DataRow GetRow(int index)
	{
		return null;
	}

	private DataRowView GetRowView(int record)
	{
		return null;
	}

	private DataRowView GetRowView(DataRow dr)
	{
		return null;
	}

	protected virtual void IndexListChanged(object sender, ListChangedEventArgs e)
	{
	}

	internal void IndexListChangedInternal(ListChangedEventArgs e)
	{
	}

	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	protected void Reset()
	{
	}

	internal void ResetRowViewCache()
	{
	}

	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	internal virtual void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}

	internal void SetIndex2(string newSort, DataViewRowState newRowStates, IFilter newRowFilter, bool fireEvent)
	{
	}

	protected void UpdateIndex()
	{
	}

	protected virtual void UpdateIndex(bool force)
	{
	}

	internal void UpdateIndex(bool force, bool fireEvent)
	{
	}

	internal void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	internal void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	protected virtual void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	internal void ColumnCollectionChangedInternal(object sender, CollectionChangeEventArgs e)
	{
	}
}
