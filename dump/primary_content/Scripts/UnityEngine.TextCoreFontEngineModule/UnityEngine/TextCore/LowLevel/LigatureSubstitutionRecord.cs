using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
internal struct LigatureSubstitutionRecord
{
	[SerializeField]
	private uint[] m_ComponentGlyphIDs;

	[SerializeField]
	private uint m_LigatureGlyphID;

	public uint[] componentGlyphIDs => null;

	public uint ligatureGlyphID => 0u;
}
