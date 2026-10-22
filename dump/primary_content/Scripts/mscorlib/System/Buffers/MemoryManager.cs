namespace System.Buffers;

public abstract class MemoryManager<T>
{
	public abstract Span<T> GetSpan();

	public abstract MemoryHandle Pin(int elementIndex = 0);

	protected internal virtual bool TryGetArray(out ArraySegment<T> segment)
	{
		segment = default;
		return false;
	}
}
