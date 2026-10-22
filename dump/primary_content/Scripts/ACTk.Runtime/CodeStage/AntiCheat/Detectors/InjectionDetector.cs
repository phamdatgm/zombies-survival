using System;
using UnityEngine;

namespace CodeStage.AntiCheat.Detectors;

[DisallowMultipleComponent]
public class InjectionDetector : ACTkDetectorBase<InjectionDetector>
{
	public const string ComponentName = "Injection Detector";

	internal const string FinalLogPrefix = "[ACTk] Injection Detector: ";

	public static InjectionDetector AddToSceneOrGetExisting()
	{
		return null;
	}

	public static void StartDetection()
	{
	}

	public static void StartDetection(Action<string> callback)
	{
	}

	public static void StopDetection()
	{
	}

	public static void Dispose()
	{
	}

	protected override void StartDetectionAutomatically()
	{
	}

	protected override string GetComponentName()
	{
		return null;
	}
}
