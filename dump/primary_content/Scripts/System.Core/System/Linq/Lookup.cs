using System.Collections;
using System.Collections.Generic;
using System.Reflection;

namespace System.Linq;

[DefaultMember("Item")]
public class Lookup<TKey, TElement> : IEnumerable<IGrouping<TKey, TElement>>, IEnumerable
{
	internal class Grouping : IGrouping<TKey, TElement>, IEnumerable<TElement>, IEnumerable, IList<TElement>, ICollection<TElement>
	{
		internal TKey key;

		internal int hashCode;

		internal TElement[] elements;

		internal int count;

		internal Grouping hashNext;

		internal Grouping next;

		int ICollection<TElement>.Count => 0;

		bool ICollection<TElement>.IsReadOnly => false;

		TElement IList<TElement>.this[int index]
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		internal void Add(TElement element)
		{
		}

		public IEnumerator<TElement> GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}

		void ICollection<TElement>.Add(TElement item)
		{
		}

		void ICollection<TElement>.Clear()
		{
		}

		bool ICollection<TElement>.Contains(TElement item)
		{
			return false;
		}

		void ICollection<TElement>.CopyTo(TElement[] array, int arrayIndex)
		{
		}

		bool ICollection<TElement>.Remove(TElement item)
		{
			return false;
		}

		int IList<TElement>.IndexOf(TElement item)
		{
			return 0;
		}

		void IList<TElement>.Insert(int index, TElement item)
		{
		}

		void IList<TElement>.RemoveAt(int index)
		{
		}
	}

	private IEqualityComparer<TKey> comparer;

	private Grouping[] groupings;

	private Grouping lastGrouping;

	private int count;

	internal static Lookup<TKey, TElement> Create<TSource>(IEnumerable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
	{
		return null;
	}

	private Lookup(IEqualityComparer<TKey> comparer)
	{
	}

	public IEnumerator<IGrouping<TKey, TElement>> GetEnumerator()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}

	internal int InternalGetHashCode(TKey key)
	{
		return 0;
	}

	internal Grouping GetGrouping(TKey key, bool create)
	{
		return null;
	}

	private void Resize()
	{
	}
}
