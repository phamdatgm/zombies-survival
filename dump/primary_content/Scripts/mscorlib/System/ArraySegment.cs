using System.Collections;
using System.Collections.Generic;
using System.Reflection;

namespace System;

/// <summary>Delimits a section of a one-dimensional array.</summary>
/// <typeparam name="T">The type of the elements in the array segment.</typeparam>
[Serializable]
[DefaultMember("Item")]
public struct ArraySegment<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private readonly T[] _array = null;

		private readonly int _start = 0;

		private readonly int _end = 0;

		private int _current = 0;

		public T Current => default;

		object IEnumerator.Current => null;

		internal Enumerator(ArraySegment<T> arraySegment)
		{
		}

		public bool MoveNext()
		{
			return false;
		}

		void IEnumerator.Reset()
		{
		}

		public void Dispose()
		{
		}
	}

	private static readonly ArraySegment<T> Empty;

	private readonly T[] _array = null;

	private readonly int _offset = 0;

	private readonly int _count = 0;

	/// <summary>Gets the number of elements in the range delimited by the array segment.</summary>
	/// <returns>The number of elements in the range delimited by the <see cref="T:System.ArraySegment`1" />.</returns>
	public int Count => 0;

	/// <summary>Gets or sets the element at the specified index.</summary>
	/// <param name="index">The zero-based index of the element to get or set.</param>
	/// <returns>The element at the specified index.</returns>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="index" /> is not a valid index in the <see cref="T:System.ArraySegment`1" />.</exception>
	/// <exception cref="T:System.NotSupportedException">The property is set and the array segment is read-only.</exception>
	T IList<T>.this[int index]
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	/// <summary>Gets the element at the specified index of the array segment.</summary>
	/// <param name="index">The zero-based index of the element to get.</param>
	/// <returns>The element at the specified index.</returns>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="index" /> is not a valid index in the <see cref="T:System.ArraySegment`1" />.</exception>
	/// <exception cref="T:System.NotSupportedException">The property is set.</exception>
	T IReadOnlyList<T>.this[int index] => default;

	/// <summary>Gets a value that indicates whether the array segment  is read-only.</summary>
	/// <returns>
	///   <see langword="true" /> if the array segment is read-only; otherwise, <see langword="false" />.</returns>
	bool ICollection<T>.IsReadOnly => false;

	/// <summary>Initializes a new instance of the <see cref="T:System.ArraySegment`1" /> structure that delimits all the elements in the specified array.</summary>
	/// <param name="array">The array to wrap.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="array" /> is <see langword="null" />.</exception>
	public ArraySegment(T[] array)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.ArraySegment`1" /> structure that delimits the specified range of the elements in the specified array.</summary>
	/// <param name="array">The array containing the range of elements to delimit.</param>
	/// <param name="offset">The zero-based index of the first element in the range.</param>
	/// <param name="count">The number of elements in the range.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="array" /> is <see langword="null" />.</exception>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="offset" /> or <paramref name="count" /> is less than 0.</exception>
	/// <exception cref="T:System.ArgumentException">
	///   <paramref name="offset" /> and <paramref name="count" /> do not specify a valid range in <paramref name="array" />.</exception>
	public ArraySegment(T[] array, int offset, int count)
	{
	}

	public Enumerator GetEnumerator()
	{
		return default;
	}

	/// <summary>Returns the hash code for the current instance.</summary>
	/// <returns>A 32-bit signed integer hash code.</returns>
	public override int GetHashCode()
	{
		return 0;
	}

	public void CopyTo(T[] destination, int destinationIndex)
	{
	}

	/// <summary>Determines whether the specified object is equal to the current instance.</summary>
	/// <param name="obj">The object to be compared with the current instance.</param>
	/// <returns>
	///   <see langword="true" /> if the specified object is a <see cref="T:System.ArraySegment`1" /> structure and is equal to the current instance; otherwise, <see langword="false" />.</returns>
	public override bool Equals(object obj)
	{
		return false;
	}

	/// <summary>Determines whether the specified <see cref="T:System.ArraySegment`1" /> structure is equal to the current instance.</summary>
	/// <param name="obj">The structure to compare with the current instance.</param>
	/// <returns>
	///   <see langword="true" /> if the specified <see cref="T:System.ArraySegment`1" /> structure is equal to the current instance; otherwise, <see langword="false" />.</returns>
	public bool Equals(ArraySegment<T> obj)
	{
		return false;
	}

	/// <summary>Determines the index of a specific item in the array segment.</summary>
	/// <param name="item">The object to locate in the array segment.</param>
	/// <returns>The index of <paramref name="item" /> if found in the list; otherwise, -1.</returns>
	int IList<T>.IndexOf(T item)
	{
		return 0;
	}

	/// <summary>Inserts an item into the array segment at the specified index.</summary>
	/// <param name="index">The zero-based index at which <paramref name="item" /> should be inserted.</param>
	/// <param name="item">The object to insert into the array segment.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="index" /> is not a valid index in the array segment.</exception>
	/// <exception cref="T:System.NotSupportedException">The array segment is read-only.</exception>
	void IList<T>.Insert(int index, T item)
	{
	}

	/// <summary>Removes the array segment item at the specified index.</summary>
	/// <param name="index">The zero-based index of the item to remove.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="index" /> is not a valid index in the array segment.</exception>
	/// <exception cref="T:System.NotSupportedException">The array segment is read-only.</exception>
	void IList<T>.RemoveAt(int index)
	{
	}

	/// <summary>Adds an item to the array segment.</summary>
	/// <param name="item">The object to add to the array segment.</param>
	/// <exception cref="T:System.NotSupportedException">The array segment is read-only.</exception>
	void ICollection<T>.Add(T item)
	{
	}

	/// <summary>Removes all items from the array segment.</summary>
	/// <exception cref="T:System.NotSupportedException">The array segment is read-only.</exception>
	void ICollection<T>.Clear()
	{
	}

	/// <summary>Determines whether the array segment contains a specific value.</summary>
	/// <param name="item">The object to locate in the array segment.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="item" /> is found in the array segment; otherwise, <see langword="false" />.</returns>
	bool ICollection<T>.Contains(T item)
	{
		return false;
	}

	/// <summary>Removes the first occurrence of a specific object from the array segment.</summary>
	/// <param name="item">The object to remove from the array segment.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="item" /> was successfully removed from the array segment; otherwise, <see langword="false" />. This method also returns <see langword="false" /> if <paramref name="item" /> is not found in the array segment.</returns>
	/// <exception cref="T:System.NotSupportedException">The array segment is read-only.</exception>
	bool ICollection<T>.Remove(T item)
	{
		return false;
	}

	/// <summary>Returns an enumerator that iterates through the array segment.</summary>
	/// <returns>An enumerator that can be used to iterate through the array segment.</returns>
	IEnumerator<T> IEnumerable<T>.GetEnumerator()
	{
		return null;
	}

	/// <summary>Returns an enumerator that iterates through an array segment.</summary>
	/// <returns>An enumerator that can be used to iterate through the array segment.</returns>
	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}

	private void ThrowInvalidOperationIfDefault()
	{
	}
}
