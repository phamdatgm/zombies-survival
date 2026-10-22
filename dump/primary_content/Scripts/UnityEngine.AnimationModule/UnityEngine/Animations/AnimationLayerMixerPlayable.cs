using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
public struct AnimationLayerMixerPlayable : IEquatable<AnimationLayerMixerPlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimationLayerMixerPlayable m_NullPlayable;

	internal AnimationLayerMixerPlayable(PlayableHandle handle, bool singleLayerOptimization = true)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AnimationLayerMixerPlayable other)
	{
		return false;
	}

	private static void SetSingleLayerOptimizationInternal(ref PlayableHandle handle, bool value)
	{
	}
}
