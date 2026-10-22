using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
internal struct MarkToBaseAdjustmentRecord
{
	[SerializeField]
	private uint m_BaseGlyphID;

	[SerializeField]
	private GlyphAnchorPoint m_BaseGlyphAnchorPoint;

	[SerializeField]
	private uint m_MarkGlyphID;

	[SerializeField]
	private MarkPositionAdjustment m_MarkPositionAdjustment;

	public uint baseGlyphID => 0u;

	public GlyphAnchorPoint baseGlyphAnchorPoint => default;

	public uint markGlyphID => 0u;

	public MarkPositionAdjustment markPositionAdjustment => default;
}
