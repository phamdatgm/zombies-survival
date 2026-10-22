using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
internal struct AnimationMotionXToDeltaPlayable : IEquatable<AnimationMotionXToDeltaPlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationMotionXToDeltaPlayable m_NullPlayable;

	private AnimationMotionXToDeltaPlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationMotionXToDeltaPlayable other)
	{
		return false;
	}
}
