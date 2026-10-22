using System;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[UsedByNativeCode]
public struct PlayableHandle : IEquatable<PlayableHandle>
{
	internal IntPtr m_Handle;

	internal uint m_Version;

	private static readonly PlayableHandle m_Null;

	public static PlayableHandle Null => default;

	internal bool IsPlayableOfType<T>()
	{
		return false;
	}

	public static bool operator ==(PlayableHandle x, PlayableHandle y)
	{
		return false;
	}

	public override bool Equals(object p)
	{
		return false;
	}

	public bool Equals(PlayableHandle other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	internal static bool CompareVersion(PlayableHandle lhs, PlayableHandle rhs)
	{
		return false;
	}

	internal bool IsValid()
	{
		return false;
	}

	internal Type GetPlayableType()
	{
		return null;
	}

	private static bool IsValid_Injected(ref PlayableHandle _unity_self)
	{
		return false;
	}

	private static Type GetPlayableType_Injected(ref PlayableHandle _unity_self)
	{
		return null;
	}
}
