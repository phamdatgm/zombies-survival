using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[RequiredByNativeCode]
public struct AudioMixerPlayable : IEquatable<AudioMixerPlayable>
{
	private PlayableHandle m_Handle;

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AudioMixerPlayable other)
	{
		return false;
	}
}
