using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class AudioClip : Object
{
	public delegate void PCMReaderCallback(float[] data);

	public delegate void PCMSetPositionCallback(int position);

	[CompilerGenerated]
	private PCMReaderCallback m_PCMReaderCallback;

	[CompilerGenerated]
	private PCMSetPositionCallback m_PCMSetPositionCallback;

	public float length => 0f;

	private AudioClip()
	{
	}

	[RequiredByNativeCode]
	private void InvokePCMReaderCallback_Internal(float[] data)
	{
	}

	[RequiredByNativeCode]
	private void InvokePCMSetPositionCallback_Internal(int position)
	{
	}
}
