using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
public struct AnimationMixerPlayable : IEquatable<AnimationMixerPlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationMixerPlayable m_NullPlayable;

	internal AnimationMixerPlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationMixerPlayable other)
	{
		return false;
	}
}
