using UnityEngine.Scripting;

namespace UnityEngine;

[RequireComponent(typeof(Transform))]
public sealed class MeshFilter : Component
{
	public Mesh sharedMesh
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Mesh mesh
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	[RequiredByNativeCode]
	private void DontStripMeshFilter()
	{
	}
}
