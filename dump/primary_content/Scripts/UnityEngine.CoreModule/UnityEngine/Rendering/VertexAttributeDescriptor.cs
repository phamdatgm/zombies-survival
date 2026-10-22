using System;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[UsedByNativeCode]
public struct VertexAttributeDescriptor : IEquatable<VertexAttributeDescriptor>
{
	public VertexAttribute attribute { get; set; } = VertexAttribute.Position;

	public VertexAttributeFormat format { get; set; } = VertexAttributeFormat.Float32;

	public int dimension { get; set; } = 0;

	public int stream { get; set; } = 0;

	public VertexAttributeDescriptor(VertexAttribute attribute = VertexAttribute.Position, VertexAttributeFormat format = VertexAttributeFormat.Float32, int dimension = 3, int stream = 0)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object other)
	{
		return false;
	}

	public bool Equals(VertexAttributeDescriptor other)
	{
		return false;
	}
}
