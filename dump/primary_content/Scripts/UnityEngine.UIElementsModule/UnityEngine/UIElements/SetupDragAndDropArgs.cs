using System.Collections.Generic;

namespace UnityEngine.UIElements;

internal struct SetupDragAndDropArgs
{
	public readonly VisualElement draggedElement = null;

	public readonly IEnumerable<int> selectedIds = null;

	public readonly StartDragArgs startDragArgs = default;

	internal SetupDragAndDropArgs(VisualElement draggedElement, IEnumerable<int> selectedIds, StartDragArgs startDragArgs)
	{
	}
}
