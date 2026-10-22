using System.Diagnostics.Tracing;

namespace System.Buffers;

internal sealed class ArrayPoolEventSource : EventSource
{
	internal static readonly ArrayPoolEventSource Log;

	private ArrayPoolEventSource()
	{
	}
}
