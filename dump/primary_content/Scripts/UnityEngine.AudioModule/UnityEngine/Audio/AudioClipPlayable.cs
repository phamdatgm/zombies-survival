using System;
using UnityEngine.Playables;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[RequiredByNativeCode]
public struct AudioClipPlayable : IEquatable<AudioClipPlayable>
{
	private PlayableHandle m_Handle;

	public PlayableHandle GetHandle()
	{
		return default;
	}

	public bool Equals(AudioClipPlayable other)
	{
		return false;
	}
}
