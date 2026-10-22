using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
internal struct MarkToMarkAdjustmentRecord
{
	[SerializeField]
	private uint m_BaseMarkGlyphID;

	[SerializeField]
	private GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;

	[SerializeField]
	private uint m_CombiningMarkGlyphID;

	[SerializeField]
	private MarkPositionAdjustment m_CombiningMarkPositionAdjustment;

	public uint baseMarkGlyphID => 0u;

	public GlyphAnchorPoint baseMarkGlyphAnchorPoint => default;

	public uint combiningMarkGlyphID => 0u;

	public MarkPositionAdjustment combiningMarkPositionAdjustment => default;
}
