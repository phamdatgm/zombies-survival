using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal struct TreeViewItemWrapper
{
	public readonly TreeItem item = default;

	public readonly int depth = 0;

	public int id => 0;

	public IEnumerable<int> childrenIds => null;

	public bool hasChildren => false;

	public TreeViewItemWrapper(TreeItem item, int depth)
	{
	}
}
