using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace System.Threading.Tasks;

internal static class DebuggerSupport
{
	private static readonly LowLevelDictionary<int, Task> s_activeTasks;

	private static readonly object s_activeTasksLock;

	public static bool LoggingOn => false;

	public static void TraceOperationCreation(CausalityTraceLevel traceLevel, Task task, string operationName, ulong relatedContext)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static void AddToActiveTasks(Task task)
	{
	}

	[MethodImpl(MethodImplOptions.NoInlining)]
	private static void AddToActiveTasksNonInlined(Task task)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public static void RemoveFromActiveTasks(Task task)
	{
	}

	[MethodImpl(MethodImplOptions.NoInlining)]
	private static void RemoveFromActiveTasksNonInlined(Task task)
	{
	}
}
