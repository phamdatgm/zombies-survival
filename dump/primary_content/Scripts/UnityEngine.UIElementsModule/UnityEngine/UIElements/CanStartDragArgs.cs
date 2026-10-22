using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal struct CanStartDragArgs
{
	public readonly VisualElement draggedElement = null;

	public readonly int id = 0;

	public readonly IEnumerable<int> selectedIds = null;

	internal CanStartDragArgs(VisualElement draggedElement, int id, IEnumerable<int> selectedIds)
	{
	}
}
