namespace UnityEngine.UIElements;

internal struct HandleDragAndDropArgs
{
	private readonly DragAndDropArgs m_DragAndDropArgs = default;

	private readonly Vector2 position = default;

	internal HandleDragAndDropArgs(Vector2 position, DragAndDropArgs dragAndDropArgs)
	{
	}
}
