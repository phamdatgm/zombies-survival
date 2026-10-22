using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Audio;

public class AudioSampleProvider
{
	public delegate void SampleFramesHandler(AudioSampleProvider provider, uint sampleFrameCount);

	[CompilerGenerated]
	private SampleFramesHandler sampleFramesAvailable;

	[CompilerGenerated]
	private SampleFramesHandler sampleFramesOverflow;

	[RequiredByNativeCode]
	private void InvokeSampleFramesAvailable(int sampleFrameCount)
	{
	}

	[RequiredByNativeCode]
	private void InvokeSampleFramesOverflow(int droppedSampleFrameCount)
	{
	}
}
