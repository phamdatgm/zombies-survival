// Namespace: 
internal class <Module> // TypeDefIndex: 7781
{}


// Namespace: 
public sealed class AudioSettings.AudioConfigurationChangeHandler : MulticastDelegate // TypeDefIndex: 7782
{
	// Methods

	// RVA: 0x13643D0 Offset: 0x13603D0 VA: 0x13643D0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x136445C Offset: 0x136045C VA: 0x136445C Slot: 12
	public virtual void Invoke(bool deviceWasChanged) { }
}


// Namespace: 
public static class AudioSettings.Mobile // TypeDefIndex: 7783
{
	// Fields
	[CompilerGenerated]
	private static bool <muteState>k__BackingField; // 0x0
	private static bool _stopAudioOutputOnMute; // 0x1
	[CompilerGenerated]
	private static Action<bool> OnMuteStateChanged; // 0x8

	// Properties
	public static bool muteState { get; set; }
	public static bool stopAudioOutputOnMute { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1364474 Offset: 0x1360474 VA: 0x1364474
	public static bool get_muteState() { }

	[CompilerGenerated]
	// RVA: 0x13644BC Offset: 0x13604BC VA: 0x13644BC
	private static void set_muteState(bool value) { }

	// RVA: 0x136450C Offset: 0x136050C VA: 0x136450C
	public static bool get_stopAudioOutputOnMute() { }

	[RequiredByNativeCode]
	// RVA: 0x1364554 Offset: 0x1360554 VA: 0x1364554
	internal static void InvokeOnMuteStateChanged(bool mute) { }

	[RequiredByNativeCode]
	// RVA: 0x136471C Offset: 0x136071C VA: 0x136471C
	internal static bool InvokeIsStopAudioOutputOnMuteEnabled() { }

	// RVA: 0x13646F4 Offset: 0x13606F4 VA: 0x13646F4
	public static void StartAudioOutput() { }

	// RVA: 0x13646CC Offset: 0x13606CC VA: 0x13646CC
	public static void StopAudioOutput() { }
}


// Namespace: UnityEngine
public sealed class AudioSettings // TypeDefIndex: 7784
{
	// Fields
	[CompilerGenerated]
	private static AudioSettings.AudioConfigurationChangeHandler OnAudioConfigurationChanged; // 0x0
	[CompilerGenerated]
	private static Action OnAudioSystemShuttingDown; // 0x8
	[CompilerGenerated]
	private static Action OnAudioSystemStartedUp; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x136424C Offset: 0x136024C VA: 0x136424C
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged) { }

	[RequiredByNativeCode]
	// RVA: 0x13642B8 Offset: 0x13602B8 VA: 0x13642B8
	internal static void InvokeOnAudioSystemShuttingDown() { }

	[RequiredByNativeCode]
	// RVA: 0x136431C Offset: 0x136031C VA: 0x136431C
	internal static void InvokeOnAudioSystemStartedUp() { }

	// RVA: 0x1364380 Offset: 0x1360380 VA: 0x1364380
	internal static bool StartAudioOutput() { }

	// RVA: 0x13643A8 Offset: 0x13603A8 VA: 0x13643A8
	internal static bool StopAudioOutput() { }
}


// Namespace: 
public sealed class AudioClip.PCMReaderCallback : MulticastDelegate // TypeDefIndex: 7785
{
	// Methods

	// RVA: 0x1364834 Offset: 0x1360834 VA: 0x1364834
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13648D0 Offset: 0x13608D0 VA: 0x13648D0 Slot: 12
	public virtual void Invoke(float[] data) { }
}


// Namespace: 
public sealed class AudioClip.PCMSetPositionCallback : MulticastDelegate // TypeDefIndex: 7786
{
	// Methods

	// RVA: 0x13648E4 Offset: 0x13608E4 VA: 0x13648E4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1364970 Offset: 0x1360970 VA: 0x1364970 Slot: 12
	public virtual void Invoke(int position) { }
}


// Namespace: UnityEngine
public sealed class AudioClip : Object // TypeDefIndex: 7787
{
	// Fields
	[CompilerGenerated]
	private AudioClip.PCMReaderCallback m_PCMReaderCallback; // 0x18
	[CompilerGenerated]
	private AudioClip.PCMSetPositionCallback m_PCMSetPositionCallback; // 0x20

	// Properties
	public float length { get; }

	// Methods

	// RVA: 0x1364764 Offset: 0x1360764 VA: 0x1364764
	private void .ctor() { }

	// RVA: 0x13647C0 Offset: 0x13607C0 VA: 0x13647C0
	public float get_length() { }

	[RequiredByNativeCode]
	// RVA: 0x13647FC Offset: 0x13607FC VA: 0x13647FC
	private void InvokePCMReaderCallback_Internal(float[] data) { }

	[RequiredByNativeCode]
	// RVA: 0x1364818 Offset: 0x1360818 VA: 0x1364818
	private void InvokePCMSetPositionCallback_Internal(int position) { }
}


// Namespace: UnityEngine
public class AudioBehaviour : Behaviour // TypeDefIndex: 7788
{
	// Methods

	// RVA: 0x1364984 Offset: 0x1360984 VA: 0x1364984
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public sealed class AudioListener : AudioBehaviour // TypeDefIndex: 7789
{
	// Properties
	public static float volume { get; set; }

	// Methods

	// RVA: 0x136498C Offset: 0x136098C VA: 0x136498C
	public static float get_volume() { }

	// RVA: 0x13649B4 Offset: 0x13609B4 VA: 0x13649B4
	public static void set_volume(float value) { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public sealed class AudioSource : AudioBehaviour // TypeDefIndex: 7790
{
	// Properties
	public float volume { get; set; }
	public float pitch { set; }
	public AudioClip clip { get; set; }
	public bool isPlaying { get; }
	public bool loop { set; }
	public bool playOnAwake { set; }

	// Methods

	// RVA: 0x13649EC Offset: 0x13609EC VA: 0x13649EC
	private static void SetPitch(AudioSource source, float pitch) { }

	// RVA: 0x1364A38 Offset: 0x1360A38 VA: 0x1364A38
	private static void PlayHelper(AudioSource source, ulong delay) { }

	// RVA: 0x1364A7C Offset: 0x1360A7C VA: 0x1364A7C
	private void Stop(bool stopOneShots) { }

	// RVA: 0x1364AC0 Offset: 0x1360AC0 VA: 0x1364AC0
	public float get_volume() { }

	// RVA: 0x1364AFC Offset: 0x1360AFC VA: 0x1364AFC
	public void set_volume(float value) { }

	// RVA: 0x1364B48 Offset: 0x1360B48 VA: 0x1364B48
	public void set_pitch(float value) { }

	// RVA: 0x1364B94 Offset: 0x1360B94 VA: 0x1364B94
	public AudioClip get_clip() { }

	// RVA: 0x1364BD0 Offset: 0x1360BD0 VA: 0x1364BD0
	public void set_clip(AudioClip value) { }

	// RVA: 0x1364C14 Offset: 0x1360C14 VA: 0x1364C14
	public void Play() { }

	// RVA: 0x1364C54 Offset: 0x1360C54 VA: 0x1364C54
	public void Stop() { }

	// RVA: 0x1364C94 Offset: 0x1360C94 VA: 0x1364C94
	public void Pause() { }

	// RVA: 0x1364CD0 Offset: 0x1360CD0 VA: 0x1364CD0
	public bool get_isPlaying() { }

	// RVA: 0x1364D0C Offset: 0x1360D0C VA: 0x1364D0C
	public void set_loop(bool value) { }

	// RVA: 0x1364D50 Offset: 0x1360D50 VA: 0x1364D50
	public void set_playOnAwake(bool value) { }

	// RVA: 0x1364D94 Offset: 0x1360D94 VA: 0x1364D94
	public void .ctor() { }
}


// Namespace: 
public sealed class AudioSampleProvider.SampleFramesHandler : MulticastDelegate // TypeDefIndex: 7791
{
	// Methods

	// RVA: 0x1364DEC Offset: 0x1360DEC VA: 0x1364DEC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1364EF0 Offset: 0x1360EF0 VA: 0x1364EF0 Slot: 12
	public virtual void Invoke(AudioSampleProvider provider, uint sampleFrameCount) { }
}


// Namespace: UnityEngine.Experimental.Audio
public class AudioSampleProvider // TypeDefIndex: 7792
{
	// Fields
	[CompilerGenerated]
	private AudioSampleProvider.SampleFramesHandler sampleFramesAvailable; // 0x10
	[CompilerGenerated]
	private AudioSampleProvider.SampleFramesHandler sampleFramesOverflow; // 0x18

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1364D9C Offset: 0x1360D9C VA: 0x1364D9C
	private void InvokeSampleFramesAvailable(int sampleFrameCount) { }

	[RequiredByNativeCode]
	// RVA: 0x1364DC4 Offset: 0x1360DC4 VA: 0x1364DC4
	private void InvokeSampleFramesOverflow(int droppedSampleFrameCount) { }
}


// Namespace: UnityEngine.Audio
[RequiredByNativeCode]
public struct AudioClipPlayable : IEquatable<AudioClipPlayable> // TypeDefIndex: 7793
{
	// Fields
	private PlayableHandle m_Handle; // 0x0

	// Methods

	// RVA: 0x1364F04 Offset: 0x1360F04 VA: 0x1364F04 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1364F10 Offset: 0x1360F10 VA: 0x1364F10 Slot: 4
	public bool Equals(AudioClipPlayable other) { }
}


// Namespace: UnityEngine.Audio
[RequiredByNativeCode]
public struct AudioMixerPlayable : IEquatable<AudioMixerPlayable> // TypeDefIndex: 7794
{
	// Fields
	private PlayableHandle m_Handle; // 0x0

	// Methods

	// RVA: 0x1364F88 Offset: 0x1360F88 VA: 0x1364F88 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x1364F94 Offset: 0x1360F94 VA: 0x1364F94 Slot: 4
	public bool Equals(AudioMixerPlayable other) { }
}


// Namespace: UnityEngine.Audio
[RequiredByNativeCode]
public struct AudioPlayableOutput // TypeDefIndex: 7795
{
	// Fields
	private PlayableOutputHandle m_Handle; // 0x0
}
