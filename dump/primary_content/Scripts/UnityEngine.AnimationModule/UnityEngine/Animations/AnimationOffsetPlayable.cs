using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
internal struct AnimationOffsetPlayable : IEquatable<AnimationOffsetPlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationOffsetPlayable m_NullPlayable;

	internal AnimationOffsetPlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationOffsetPlayable other)
	{
		return false;
	}
}
