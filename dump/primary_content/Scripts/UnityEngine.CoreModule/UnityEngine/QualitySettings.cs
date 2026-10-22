using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class QualitySettings : Object
{
	[CompilerGenerated]
	private static Action<int, int> activeQualityLevelChanged;

	public static ShadowQuality shadows
	{
		set
		{
		}
	}

	public static ColorSpace activeColorSpace => ColorSpace.Gamma;

	[RequiredByNativeCode]
	internal static void OnActiveQualityLevelChanged(int previousQualityLevel, int currentQualityLevel)
	{
	}

	public static void SetQualityLevel(int index)
	{
	}

	public static void SetQualityLevel(int index, bool applyExpensiveChanges)
	{
	}
}
