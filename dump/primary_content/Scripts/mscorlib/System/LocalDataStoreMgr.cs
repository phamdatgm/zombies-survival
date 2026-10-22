using System.Collections.Generic;

namespace System;

internal sealed class LocalDataStoreMgr
{
	private bool[] m_SlotInfoTable;

	private List<LocalDataStore> m_ManagedLocalDataStores;

	private Dictionary<string, LocalDataStoreSlot> m_KeyToSlotMap;
}
