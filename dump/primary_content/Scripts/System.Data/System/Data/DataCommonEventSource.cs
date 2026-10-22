using System.Diagnostics.Tracing;

namespace System.Data;

internal class DataCommonEventSource : EventSource
{
	internal static readonly DataCommonEventSource Log;

	private static long s_nextScopeId;

	internal void Trace<T0, T1>(string format, T0 arg0, T1 arg1)
	{
	}

	internal void Trace<T0, T1, T2>(string format, T0 arg0, T1 arg1, T2 arg2)
	{
	}

	internal void Trace<T0, T1, T2, T3, T4>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
	}

	internal long EnterScope<T1>(string format, T1 arg1)
	{
		return 0L;
	}

	internal long EnterScope<T1, T2>(string format, T1 arg1, T2 arg2)
	{
		return 0L;
	}

	internal long EnterScope<T1, T2, T3>(string format, T1 arg1, T2 arg2, T3 arg3)
	{
		return 0L;
	}

	internal long EnterScope<T1, T2, T3, T4>(string format, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
		return 0L;
	}

	internal void ExitScope(long scopeId)
	{
	}
}
