using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
internal struct AnimationRemoveScalePlayable : IEquatable<AnimationRemoveScalePlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationRemoveScalePlayable m_NullPlayable;

	internal AnimationRemoveScalePlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationRemoveScalePlayable other)
	{
		return false;
	}
}
