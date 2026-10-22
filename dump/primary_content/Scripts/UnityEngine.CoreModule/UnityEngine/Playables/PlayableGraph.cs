using System;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[UsedByNativeCode]
public struct PlayableGraph
{
	internal IntPtr m_Handle;

	internal uint m_Version;
}
