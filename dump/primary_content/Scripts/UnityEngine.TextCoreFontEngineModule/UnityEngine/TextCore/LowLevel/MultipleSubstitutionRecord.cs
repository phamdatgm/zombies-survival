using System;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[UsedByNativeCode]
internal struct MultipleSubstitutionRecord
{
	[SerializeField]
	private uint m_TargetGlyphID;

	[SerializeField]
	private uint[] m_SubstituteGlyphIDs;
}
