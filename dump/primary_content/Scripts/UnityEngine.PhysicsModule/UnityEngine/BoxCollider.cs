using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public class BoxCollider : Collider
{
	public Vector3 center
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector3 size
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	[SpecialName]
	private void get_center_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_center_Injected(ref Vector3 value)
	{
	}

	[SpecialName]
	private void get_size_Injected(out Vector3 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void set_size_Injected(ref Vector3 value)
	{
	}
}
