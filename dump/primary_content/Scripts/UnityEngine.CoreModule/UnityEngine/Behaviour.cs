using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public class Behaviour : Component
{
	[RequiredByNativeCode]
	public bool enabled
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool isActiveAndEnabled => false;
}
