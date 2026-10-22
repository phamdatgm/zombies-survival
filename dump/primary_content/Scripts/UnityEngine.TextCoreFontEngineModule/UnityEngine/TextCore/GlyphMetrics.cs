using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore;

[Serializable]
[UsedByNativeCode]
public struct GlyphMetrics : IEquatable<GlyphMetrics>
{
	[SerializeField]
	private float m_Width = 0f;

	[SerializeField]
	private float m_Height = 0f;

	[SerializeField]
	private float m_HorizontalBearingX = 0f;

	[SerializeField]
	private float m_HorizontalBearingY = 0f;

	[SerializeField]
	private float m_HorizontalAdvance = 0f;

	public float width => 0f;

	public float height => 0f;

	public float horizontalBearingX => 0f;

	public float horizontalBearingY => 0f;

	public float horizontalAdvance => 0f;

	public GlyphMetrics(float width, float height, float bearingX, float bearingY, float advance)
	{
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(GlyphMetrics other)
	{
		return false;
	}
}
