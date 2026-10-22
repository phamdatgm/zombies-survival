using System.ComponentModel;
using System.Reflection;
using System.Runtime.CompilerServices;

namespace System.Data;

[DefaultMember("Item")]
public class DataRowView : ICustomTypeDescriptor
{
	private readonly DataView _dataView;

	private readonly DataRow _row;

	private bool _delayBeginEdit;

	private static readonly PropertyDescriptorCollection s_zeroPropertyDescriptorCollection;

	[CompilerGenerated]
	private PropertyChangedEventHandler PropertyChanged;

	private DataRowVersion RowVersionDefault => (DataRowVersion)0;

	public bool IsNew => false;

	internal DataRowView(DataView dataView, DataRow row)
	{
	}

	public override bool Equals(object other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	internal int GetRecord()
	{
		return 0;
	}

	internal bool HasRecord()
	{
		return false;
	}

	internal object GetColumnValue(DataColumn column)
	{
		return null;
	}

	internal void SetColumnValue(DataColumn column, object value)
	{
	}

	public DataView CreateChildView(DataRelation relation, bool followParent)
	{
		return null;
	}

	public DataView CreateChildView(DataRelation relation)
	{
		return null;
	}

	public void EndEdit()
	{
	}

	internal void RaisePropertyChangedEvent(string propName)
	{
	}

	AttributeCollection ICustomTypeDescriptor.GetAttributes()
	{
		return null;
	}

	TypeConverter ICustomTypeDescriptor.GetConverter()
	{
		return null;
	}

	PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties()
	{
		return null;
	}

	PropertyDescriptorCollection ICustomTypeDescriptor.GetProperties(Attribute[] attributes)
	{
		return null;
	}

	object ICustomTypeDescriptor.GetPropertyOwner(PropertyDescriptor pd)
	{
		return null;
	}
}
