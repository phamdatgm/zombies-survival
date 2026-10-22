using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Playables;

[RequiredByNativeCode]
public struct MaterialEffectPlayable : IEquatable<MaterialEffectPlayable>
{
	private PlayableHandle m_Handle;

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(MaterialEffectPlayable other)
	{
		return false;
	}
}
