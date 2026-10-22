using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
[RequireComponent(typeof(Transform))]
public class Collider : Component
{
	public bool enabled
	{
		set
		{
		}
	}

	public bool isTrigger
	{
		set
		{
		}
	}

	private RaycastHit Raycast(Ray ray, float maxDistance, ref bool hasHit)
	{
		return default;
	}

	public bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		hitInfo = default;
		return false;
	}

	private void Raycast_Injected(ref Ray ray, float maxDistance, ref bool hasHit, out RaycastHit ret)
	{
		ret = default;
	}
}
