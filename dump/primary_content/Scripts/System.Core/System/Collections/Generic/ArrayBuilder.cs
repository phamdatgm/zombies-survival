using System.Reflection;

namespace System.Collections.Generic;

[DefaultMember("Item")]
internal struct ArrayBuilder<T>(int capacity)
{
	private T[] _array = null;

	private int _count = 0;

	public T[] ToArray()
	{
		return null;
	}

	public void UncheckedAdd(T item)
	{
	}
}
