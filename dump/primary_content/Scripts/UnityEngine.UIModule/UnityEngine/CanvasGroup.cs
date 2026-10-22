namespace UnityEngine;

public sealed class CanvasGroup : Behaviour, ICanvasRaycastFilter
{
	public float alpha
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public bool interactable => false;

	public bool blocksRaycasts
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool ignoreParentGroups
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
	{
		return false;
	}
}
