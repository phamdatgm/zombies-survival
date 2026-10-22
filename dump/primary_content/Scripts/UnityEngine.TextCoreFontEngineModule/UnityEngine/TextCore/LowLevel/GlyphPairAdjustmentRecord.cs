using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
public struct GlyphPairAdjustmentRecord : IEquatable<GlyphPairAdjustmentRecord>
{
	[SerializeField]
	private GlyphAdjustmentRecord m_FirstAdjustmentRecord;

	[SerializeField]
	private GlyphAdjustmentRecord m_SecondAdjustmentRecord;

	[SerializeField]
	private FontFeatureLookupFlags m_FeatureLookupFlags;

	public GlyphAdjustmentRecord firstAdjustmentRecord => default;

	public GlyphAdjustmentRecord secondAdjustmentRecord => default;

	public FontFeatureLookupFlags featureLookupFlags => FontFeatureLookupFlags.None;

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(GlyphPairAdjustmentRecord other)
	{
		return false;
	}
}
