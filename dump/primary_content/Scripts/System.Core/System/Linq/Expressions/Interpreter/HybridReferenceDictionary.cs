using System.Collections.Generic;

namespace System.Linq.Expressions.Interpreter;

internal class HybridReferenceDictionary<TKey, TValue> where TKey : class
{
	private KeyValuePair<TKey, TValue>[] _keysAndValues;

	private Dictionary<TKey, TValue> _dict;

	public TValue this[TKey key]
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public bool TryGetValue(TKey key, out TValue value)
	{
		value = default;
		return false;
	}

	public void Remove(TKey key)
	{
	}

	public bool ContainsKey(TKey key)
	{
		return false;
	}

	public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
	{
		return null;
	}

	private IEnumerator<KeyValuePair<TKey, TValue>> GetEnumeratorWorker()
	{
		return null;
	}
}
