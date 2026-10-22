using System.ComponentModel;

namespace System.Data;

public class DataViewManager : MarshalByValueComponent
{
	private DataViewSettingCollection _dataViewSettingsCollection;

	internal int _nViews;

	private static NotSupportedException s_notSupported;
}
