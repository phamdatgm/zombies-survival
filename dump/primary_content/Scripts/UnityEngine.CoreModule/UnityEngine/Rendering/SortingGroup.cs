namespace UnityEngine.Rendering;

[RequireComponent(typeof(Transform))]
public sealed class SortingGroup : Behaviour
{
	internal static int invalidSortingGroupID => 0;

	public int sortingLayerID => 0;

	public int sortingOrder => 0;

	internal static SortingGroup GetSortingGroupByIndex(int index)
	{
		return null;
	}
}
