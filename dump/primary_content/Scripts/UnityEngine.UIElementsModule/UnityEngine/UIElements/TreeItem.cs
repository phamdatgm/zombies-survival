using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal struct TreeItem
{
	public int id { get; } = 0;

	public int parentId { get; } = 0;

	public IEnumerable<int> childrenIds { get; } = null;

	public bool hasChildren => false;

	public TreeItem(int id, int parentId = -1, IEnumerable<int> childrenIds = null)
	{
	}
}
