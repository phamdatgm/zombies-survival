using System.Collections;

namespace System.ComponentModel;

/// <summary>Provides a read-only container for a collection of <see cref="T:System.ComponentModel.IComponent" /> objects.</summary>
public class ComponentCollection : ReadOnlyCollectionBase
{
	/// <summary>Gets any component in the collection matching the specified name.</summary>
	/// <param name="name">The name of the <see cref="T:System.ComponentModel.IComponent" /> to get.</param>
	/// <returns>A component with a name matching the name specified by the <paramref name="name" /> parameter, or <see langword="null" /> if the named component cannot be found in the collection.</returns>
	public virtual IComponent this[string name] => null;
}
