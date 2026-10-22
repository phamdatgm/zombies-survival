using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore;

[Serializable]
[StructLayout((LayoutKind)0)]
[UsedByNativeCode]
public class Glyph
{
	[SerializeField]
	private uint m_Index;

	[SerializeField]
	private GlyphMetrics m_Metrics;

	[SerializeField]
	private GlyphRect m_GlyphRect;

	[SerializeField]
	private float m_Scale;

	[SerializeField]
	private int m_AtlasIndex;

	[SerializeField]
	private GlyphClassDefinitionType m_ClassDefinitionType;

	public uint index => 0u;

	public GlyphMetrics metrics => default;

	public GlyphRect glyphRect => default;

	public float scale => 0f;

	public int atlasIndex
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public Glyph()
	{
	}

	internal Glyph(GlyphMarshallingStruct glyphStruct)
	{
	}

	public Glyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}
}
