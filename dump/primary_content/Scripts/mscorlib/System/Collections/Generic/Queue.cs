using System.Runtime.CompilerServices;

namespace System.Collections.Generic;

[Serializable]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
public class Queue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private readonly Queue<T> _q = null;

		private readonly int _version = 0;

		private int _index = 0;

		private T _currentElement = default;

		public T Current => default;

		object IEnumerator.Current => null;

		internal Enumerator(Queue<T> q)
		{
		}

		public void Dispose()
		{
		}

		public bool MoveNext()
		{
			return false;
		}

		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		void IEnumerator.Reset()
		{
		}
	}

	private T[] _array;

	private int _head;

	private int _tail;

	private int _size;

	private int _version;

	[NonSerialized]
	private object _syncRoot;

	private const int MinimumGrow = 4;

	private const int GrowFactor = 200;

	public int Count => 0;

	bool ICollection.IsSynchronized => false;

	object ICollection.SyncRoot => null;

	public Queue()
	{
	}

	public Queue(int capacity)
	{
	}

	public void Clear()
	{
	}

	void ICollection.CopyTo(Array array, int index)
	{
	}

	public void Enqueue(T item)
	{
	}

	IEnumerator<T> IEnumerable<T>.GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}

	public T Dequeue()
	{
		return default;
	}

	public T[] ToArray()
	{
		return null;
	}

	private void SetCapacity(int capacity)
	{
	}

	private void MoveNext(ref int index)
	{
	}

	private void ThrowForEmptyQueue()
	{
	}
}
