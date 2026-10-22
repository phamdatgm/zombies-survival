using System.Reflection;

namespace System.Collections.Specialized;

/// <summary>Represents an indexed collection of key/value pairs.</summary>
[DefaultMember("Item")]
public interface IOrderedDictionary : IDictionary, ICollection, IEnumerable
{
	/// <summary>Returns an enumerator that iterates through the <see cref="T:System.Collections.Specialized.IOrderedDictionary" /> collection.</summary>
	/// <returns>An <see cref="T:System.Collections.IDictionaryEnumerator" /> for the entire <see cref="T:System.Collections.Specialized.IOrderedDictionary" /> collection.</returns>
	new IDictionaryEnumerator GetEnumerator();
}
