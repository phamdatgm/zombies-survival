namespace System.Buffers;

public abstract class ArrayPool<T>
{
	private static readonly ArrayPool<T> Shared;

	public abstract T[] Rent(int minimumLength);

	public abstract void Return(T[] array, bool clearArray = false);
}
