using Unity.Jobs;
using UnityEngine.Scripting;

namespace Unity.Collections;

internal struct NativeArrayDisposeJob : IJob
{
	internal NativeArrayDispose Data;

	public void Execute()
	{
	}

	[RequiredByNativeCode]
	internal static void RegisterNativeArrayDisposeJobReflectionData()
	{
	}
}
