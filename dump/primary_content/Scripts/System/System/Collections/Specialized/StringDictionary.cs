namespace System.Collections.Specialized;

/// <summary>Implements a hash table with the key and the value strongly typed to be strings rather than objects.</summary>
[Serializable]
public class StringDictionary : IEnumerable
{
	internal Hashtable contents;

	/// <summary>Gets or sets the value associated with the specified key.</summary>
	/// <param name="key">The key whose value to get or set.</param>
	/// <returns>The value associated with the specified key. If the specified key is not found, Get returns <see langword="null" />, and Set creates a new entry with the specified key.</returns>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="key" /> is <see langword="null" />.</exception>
	public virtual string this[string key] => null;

	/// <summary>Initializes a new instance of the <see cref="T:System.Collections.Specialized.StringDictionary" /> class.</summary>
	public StringDictionary()
	{
	}

	/// <summary>Returns an enumerator that iterates through the string dictionary.</summary>
	/// <returns>An <see cref="T:System.Collections.IEnumerator" /> that iterates through the string dictionary.</returns>
	public virtual IEnumerator GetEnumerator()
	{
		return null;
	}
}
