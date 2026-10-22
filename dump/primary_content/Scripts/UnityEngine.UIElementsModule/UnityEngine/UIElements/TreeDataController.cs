using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal sealed class TreeDataController<T>
{
	private TreeData<T> m_TreeData;

	private Stack<IEnumerator<int>> m_IteratorStack;

	public void SetRootItems(IList<TreeViewItemData<T>> rootItems)
	{
	}

	public T GetDataForId(int id)
	{
		return default;
	}

	public int GetParentId(int id)
	{
		return 0;
	}

	public bool HasChildren(int id)
	{
		return false;
	}

	private static IEnumerable<int> GetItemIds(IEnumerable<TreeViewItemData<T>> items)
	{
		return null;
	}

	public IEnumerable<int> GetChildrenIds(int id)
	{
		return null;
	}

	public void Move(int id, int newParentId, int childIndex = -1)
	{
	}

	public bool IsChildOf(int childId, int id)
	{
		return false;
	}

	public IEnumerable<int> GetAllItemIds(IEnumerable<int> rootIds = null)
	{
		return null;
	}
}
