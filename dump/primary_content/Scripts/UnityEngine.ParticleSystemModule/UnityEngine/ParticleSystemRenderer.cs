using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequireComponent(typeof(Transform))]
public sealed class ParticleSystemRenderer : Renderer
{
	[RequiredByNativeCode]
	public int GetMeshes([Out] Mesh[] meshes)
	{
		return 0;
	}
}
