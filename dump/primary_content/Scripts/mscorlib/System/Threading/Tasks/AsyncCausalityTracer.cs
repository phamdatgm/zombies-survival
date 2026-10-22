using System.Runtime.CompilerServices;

namespace System.Threading.Tasks;

internal static class AsyncCausalityTracer
{
	[MethodImpl(MethodImplOptions.NoInlining)]
	internal static void TraceSynchronousWorkStart(CausalityTraceLevel traceLevel, int taskId, CausalitySynchronousWork work)
	{
	}
}
