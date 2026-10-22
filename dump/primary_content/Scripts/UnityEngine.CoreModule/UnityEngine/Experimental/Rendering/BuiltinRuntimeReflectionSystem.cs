using System;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Rendering;

internal class BuiltinRuntimeReflectionSystem : IScriptableRuntimeReflectionSystem, IDisposable
{
	public bool TickRealtimeProbes()
	{
		return false;
	}

	public void Dispose()
	{
	}

	private void Dispose(bool disposing)
	{
	}

	private static bool BuiltinUpdate()
	{
		return false;
	}

	[RequiredByNativeCode]
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
	{
		return null;
	}
}
