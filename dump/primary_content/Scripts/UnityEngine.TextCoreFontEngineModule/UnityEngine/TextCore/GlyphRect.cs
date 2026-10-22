using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore;

[Serializable]
[UsedByNativeCode]
public struct GlyphRect : IEquatable<GlyphRect>
{
	[SerializeField]
	private int m_X = 0;

	[SerializeField]
	private int m_Y = 0;

	[SerializeField]
	private int m_Width = 0;

	[SerializeField]
	private int m_Height = 0;

	private static readonly GlyphRect s_ZeroGlyphRect;

	public int x => 0;

	public int y => 0;

	public int width => 0;

	public int height => 0;

	public static GlyphRect zero => default;

	public GlyphRect(int x, int y, int width, int height)
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

	public bool Equals(GlyphRect other)
	{
		return false;
	}
}
