using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

internal struct MeshInfo(int size)
{
	private static readonly Color32 k_DefaultColor;

	private static readonly Vector3 k_DefaultNormal;

	private static readonly Vector4 k_DefaultTangent;

	public int vertexCount = 0;

	public Vector3[] vertices = null;

	public Vector3[] normals = null;

	public Vector4[] tangents = null;

	public Vector4[] uvs0 = null;

	public Vector2[] uvs2 = null;

	public Color32[] colors32 = null;

	public int[] triangles = null;

	public Material material = null;

	internal GlyphRenderMode glyphRenderMode = (GlyphRenderMode)0;

	internal void ResizeMeshInfo(int size)
	{
	}

	internal void Clear(bool uploadChanges)
	{
	}

	internal void ClearUnusedVertices()
	{
	}

	internal void SortGeometry(VertexSortingOrder order)
	{
	}

	internal void SwapVertexData(int src, int dst)
	{
	}
}
