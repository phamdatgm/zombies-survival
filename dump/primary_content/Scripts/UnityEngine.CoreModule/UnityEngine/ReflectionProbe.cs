using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class ReflectionProbe : Behaviour
{
	public enum ReflectionProbeEvent
	{
		ReflectionProbeAdded = 0,
		ReflectionProbeRemoved = 1
	}

	[CompilerGenerated]
	private static Action<ReflectionProbe, ReflectionProbeEvent> reflectionProbeChanged;

	private static Dictionary<int, Action<Texture>> registeredDefaultReflectionSetActions;

	private static List<Action<Texture>> registeredDefaultReflectionTextureActions;

	[RequiredByNativeCode]
	private static void CallReflectionProbeEvent(ReflectionProbe probe, ReflectionProbeEvent probeEvent)
	{
	}

	[RequiredByNativeCode]
	private static void CallSetDefaultReflection(Texture defaultReflectionCubemap)
	{
	}
}
