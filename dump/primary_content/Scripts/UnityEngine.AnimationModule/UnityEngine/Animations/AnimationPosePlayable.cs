using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
internal struct AnimationPosePlayable : IEquatable<AnimationPosePlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationPosePlayable m_NullPlayable;

	internal AnimationPosePlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationPosePlayable other)
	{
		return false;
	}
}
