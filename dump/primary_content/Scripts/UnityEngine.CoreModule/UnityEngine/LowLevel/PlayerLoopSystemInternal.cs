using System;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[MovedFrom("UnityEngine.Experimental.LowLevel")]
[RequiredByNativeCode]
internal struct PlayerLoopSystemInternal
{
	public Type type;

	public PlayerLoopSystem.UpdateFunction updateDelegate;

	public IntPtr updateFunction;

	public IntPtr loopConditionFunction;

	public int numSubSystems;
}
