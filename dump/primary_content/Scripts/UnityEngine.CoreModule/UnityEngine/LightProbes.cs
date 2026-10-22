using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
public sealed class LightProbes : Object
{
	[CompilerGenerated]
	private static Action lightProbesUpdated;

	[CompilerGenerated]
	private static Action tetrahedralizationCompleted;

	[CompilerGenerated]
	private static Action needsRetetrahedralization;

	[RequiredByNativeCode]
	private static void Internal_CallLightProbesUpdatedFunction()
	{
	}

	[RequiredByNativeCode]
	private static void Internal_CallTetrahedralizationCompletedFunction()
	{
	}

	[RequiredByNativeCode]
	private static void Internal_CallNeedsRetetrahedralizationFunction()
	{
	}
}
