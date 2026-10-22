using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
public struct GlyphAdjustmentRecord : IEquatable<GlyphAdjustmentRecord>
{
	[SerializeField]
	private uint m_GlyphIndex;

	[SerializeField]
	private GlyphValueRecord m_GlyphValueRecord;

	public uint glyphIndex => 0u;

	public GlyphValueRecord glyphValueRecord => default;

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(GlyphAdjustmentRecord other)
	{
		return false;
	}
}
