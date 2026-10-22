using System;
using System.Collections.Generic;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode]
public sealed class Mesh : Object
{
	public struct MeshData
	{
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_Ptr;
	}

	public bool isReadable => false;

	internal bool canAccess => false;

	public int vertexCount => 0;

	public int subMeshCount => 0;

	public Vector3[] vertices
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Vector3[] normals
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Vector4[] tangents => null;

	public Vector2[] uv
	{
		set
		{
		}
	}

	public Color32[] colors32 => null;

	public int[] triangles
	{
		set
		{
		}
	}

	private static void Internal_Create(Mesh mono)
	{
	}

	[RequiredByNativeCode]
	public Mesh()
	{
	}

	private int[] GetIndicesImpl(int submesh, bool applyBaseVertex)
	{
		return null;
	}

	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex)
	{
	}

	private void PrintErrorCantAccessChannel(VertexAttribute ch)
	{
	}

	public bool HasVertexAttribute(VertexAttribute attr)
	{
		return false;
	}

	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values)
	{
	}

	private void ClearImpl(bool keepVertexLayout)
	{
	}

	private void RecalculateBoundsImpl(MeshUpdateFlags flags)
	{
	}

	private void CombineMeshesImpl(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData)
	{
	}

	internal static VertexAttribute GetUVChannel(int uvIndex)
	{
		return VertexAttribute.Position;
	}

	internal static int DefaultDimensionForChannel(VertexAttribute channel)
	{
		return 0;
	}

	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim)
	{
		return null;
	}

	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel)
	{
		return null;
	}

	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags)
	{
	}

	private void SetArrayForChannel<T>(VertexAttribute channel, T[] values, MeshUpdateFlags flags = MeshUpdateFlags.Default)
	{
	}

	private void SetListForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	private void SetListForChannel<T>(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags)
	{
	}

	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim)
	{
	}

	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType)
	{
	}

	public void SetVertices(List<Vector3> inVertices)
	{
	}

	public void SetVertices(List<Vector3> inVertices, int start, int length)
	{
	}

	public void SetVertices(List<Vector3> inVertices, int start, int length, MeshUpdateFlags flags)
	{
	}

	public void SetNormals(List<Vector3> inNormals)
	{
	}

	public void SetNormals(List<Vector3> inNormals, int start, int length)
	{
	}

	public void SetNormals(List<Vector3> inNormals, int start, int length, MeshUpdateFlags flags)
	{
	}

	public void SetTangents(List<Vector4> inTangents)
	{
	}

	public void SetTangents(List<Vector4> inTangents, int start, int length)
	{
	}

	public void SetTangents(List<Vector4> inTangents, int start, int length, MeshUpdateFlags flags)
	{
	}

	public void SetColors(List<Color32> inColors)
	{
	}

	public void SetColors(List<Color32> inColors, int start, int length)
	{
	}

	public void SetColors(List<Color32> inColors, int start, int length, MeshUpdateFlags flags)
	{
	}

	private void SetUvsImpl<T>(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags)
	{
	}

	public void SetUVs(int channel, List<Vector4> uvs)
	{
	}

	public void SetUVs(int channel, List<Vector4> uvs, int start, int length)
	{
	}

	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, MeshUpdateFlags flags)
	{
	}

	private void GetUVsImpl<T>(int uvIndex, List<T> uvs, int dim)
	{
	}

	public void GetUVs(int channel, List<Vector4> uvs)
	{
	}

	private void PrintErrorCantAccessIndices()
	{
	}

	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles)
	{
		return false;
	}

	private bool CheckCanAccessSubmeshTriangles(int submesh)
	{
		return false;
	}

	private bool CheckCanAccessSubmeshIndices(int submesh)
	{
		return false;
	}

	public int[] GetIndices(int submesh)
	{
		return null;
	}

	public int[] GetIndices(int submesh, bool applyBaseVertex)
	{
		return null;
	}

	private void CheckIndicesArrayRange(int valuesLength, int start, int length)
	{
	}

	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex)
	{
	}

	public void SetTriangles(List<int> triangles, int submesh)
	{
	}

	public void SetTriangles(List<int> triangles, int submesh, bool calculateBounds, int baseVertex)
	{
	}

	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0)
	{
	}

	public void Clear()
	{
	}

	public void RecalculateBounds()
	{
	}

	public void RecalculateBounds(MeshUpdateFlags flags)
	{
	}

	public void CombineMeshes(CombineInstance[] combine)
	{
	}
}
