using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Animations;

[RequiredByNativeCode]
public struct AnimatorControllerPlayable : IEquatable<AnimatorControllerPlayable>
{
	private PlayableHandle m_Handle = default;

	private static readonly AnimatorControllerPlayable m_NullPlayable;

	internal AnimatorControllerPlayable(PlayableHandle handle)
	{
	}

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public void SetHandle(PlayableHandle handle)
	{
	}

	public bool Equals(AnimatorControllerPlayable other)
	{
		return false;
	}
}
