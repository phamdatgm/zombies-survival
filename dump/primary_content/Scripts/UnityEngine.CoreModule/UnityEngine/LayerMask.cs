using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct LayerMask
{
	private int m_Mask;

	public static implicit operator int(LayerMask mask)
	{
		return 0;
	}

	public static implicit operator LayerMask(int intVal)
	{
		return default;
	}

	public static int NameToLayer(string layerName)
	{
		return 0;
	}
}
