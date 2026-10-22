using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class AudioSettings
{
	public delegate void AudioConfigurationChangeHandler(bool deviceWasChanged);

	public static class Mobile
	{
		private static bool _stopAudioOutputOnMute;

		[CompilerGenerated]
		private static Action<bool> OnMuteStateChanged;

		public static bool muteState { get; private set; }

		public static bool stopAudioOutputOnMute => false;

		[RequiredByNativeCode]
		internal static void InvokeOnMuteStateChanged(bool mute)
		{
		}

		[RequiredByNativeCode]
		internal static bool InvokeIsStopAudioOutputOnMuteEnabled()
		{
			return false;
		}

		public static void StartAudioOutput()
		{
		}

		public static void StopAudioOutput()
		{
		}
	}

	[CompilerGenerated]
	private static AudioConfigurationChangeHandler OnAudioConfigurationChanged;

	[CompilerGenerated]
	private static Action OnAudioSystemShuttingDown;

	[CompilerGenerated]
	private static Action OnAudioSystemStartedUp;

	[RequiredByNativeCode]
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[RequiredByNativeCode]
	internal static void InvokeOnAudioSystemShuttingDown()
	{
	}

	[RequiredByNativeCode]
	internal static void InvokeOnAudioSystemStartedUp()
	{
	}

	internal static bool StartAudioOutput()
	{
		return false;
	}

	internal static bool StopAudioOutput()
	{
		return false;
	}
}
