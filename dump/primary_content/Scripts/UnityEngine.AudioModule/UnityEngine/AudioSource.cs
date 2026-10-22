namespace UnityEngine;

[RequireComponent(typeof(Transform))]
public sealed class AudioSource : AudioBehaviour
{
	public float volume
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public float pitch
	{
		set
		{
		}
	}

	public AudioClip clip
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public bool isPlaying => false;

	public bool loop
	{
		set
		{
		}
	}

	public bool playOnAwake
	{
		set
		{
		}
	}

	private static void SetPitch(AudioSource source, float pitch)
	{
	}

	private static void PlayHelper(AudioSource source, ulong delay)
	{
	}

	private void Stop(bool stopOneShots)
	{
	}

	public void Play()
	{
	}

	public void Stop()
	{
	}

	public void Pause()
	{
	}
}
