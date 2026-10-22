using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Animations;

[MovedFrom("UnityEngine.Experimental.Animations")]
[RequiredByNativeCode]
public struct AnimationScriptPlayable : IEquatable<AnimationScriptPlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationScriptPlayable m_NullPlayable;

	internal AnimationScriptPlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationScriptPlayable other)
	{
		return false;
	}
}
