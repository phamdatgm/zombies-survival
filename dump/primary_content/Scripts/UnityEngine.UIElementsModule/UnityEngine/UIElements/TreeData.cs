using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal struct TreeData<T>
{
	private readonly IList<int> m_RootItemIds = null;

	private readonly Dictionary<int, TreeViewItemData<T>> m_Tree = null;

	private readonly Dictionary<int, int> m_ParentIds = null;

	private readonly Dictionary<int, List<int>> m_ChildrenIds = null;

	public IEnumerable<int> rootItemIds => null;

	public TreeData(IList<TreeViewItemData<T>> rootItems)
	{
	}

	public TreeViewItemData<T> GetDataForId(int id)
	{
		return default;
	}

	public int GetParentId(int id)
	{
		return 0;
	}

	public void Move(int id, int newParentId, int childIndex)
	{
	}

	public bool HasAncestor(int childId, int ancestorId)
	{
		return false;
	}

	private void AddItemToParent(TreeViewItemData<T> item, int parentId, int childIndex)
	{
	}

	private void RemoveFromParent(int id, int parentId)
	{
	}

	private void UpdateParentTree(TreeViewItemData<T> current)
	{
	}

	private void RefreshTree(IList<TreeViewItemData<T>> rootItems)
	{
	}

	private void BuildTree(IEnumerable<TreeViewItemData<T>> items, bool isRoot)
	{
	}
}
