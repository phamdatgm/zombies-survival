using UnityEngine.Scripting;

namespace UnityEngine;

public class MeshRenderer : Renderer
{
	[RequiredByNativeCode]
	private void DontStripMeshRenderer()
	{
	}
}
