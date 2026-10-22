using System.Collections;

namespace System.Security.AccessControl;

/// <summary>Represents an access control list (ACL) and is the base class for the <see cref="T:System.Security.AccessControl.CommonAcl" />, <see cref="T:System.Security.AccessControl.DiscretionaryAcl" />, <see cref="T:System.Security.AccessControl.RawAcl" />, and <see cref="T:System.Security.AccessControl.SystemAcl" /> classes.</summary>
public abstract class GenericAcl : ICollection, IEnumerable
{
	/// <summary>The revision level of the current <see cref="T:System.Security.AccessControl.GenericAcl" />. This value is returned by the <see cref="P:System.Security.AccessControl.GenericAcl.Revision" /> property for Access Control Lists (ACLs) that are not associated with Directory Services objects.</summary>
	public static readonly byte AclRevision;

	/// <summary>The revision level of the current <see cref="T:System.Security.AccessControl.GenericAcl" />. This value is returned by the <see cref="P:System.Security.AccessControl.GenericAcl.Revision" /> property for Access Control Lists (ACLs) that are associated with Directory Services objects.</summary>
	public static readonly byte AclRevisionDS;

	/// <summary>The maximum allowed binary length of a <see cref="T:System.Security.AccessControl.GenericAcl" /> object.</summary>
	public static readonly int MaxBinaryLength;

	/// <summary>Gets the number of access control entries (ACEs) in the current <see cref="T:System.Security.AccessControl.GenericAcl" /> object.</summary>
	/// <returns>The number of ACEs in the current <see cref="T:System.Security.AccessControl.GenericAcl" /> object.</returns>
	public abstract int Count { get; }

	/// <summary>This property is always set to <see langword="false" />. It is implemented only because it is required for the implementation of the <see cref="T:System.Collections.ICollection" /> interface.</summary>
	/// <returns>Always <see langword="false" />.</returns>
	public bool IsSynchronized => false;

	/// <summary>Gets or sets the <see cref="T:System.Security.AccessControl.GenericAce" /> at the specified index.</summary>
	/// <param name="index">The zero-based index of the <see cref="T:System.Security.AccessControl.GenericAce" /> to get or set.</param>
	/// <returns>The <see cref="T:System.Security.AccessControl.GenericAce" /> at the specified index.</returns>
	public abstract GenericAce this[int index] { get; set; }

	/// <summary>This property always returns <see langword="null" />. It is implemented only because it is required for the implementation of the <see cref="T:System.Collections.ICollection" /> interface.</summary>
	/// <returns>Always returns <see langword="null" />.</returns>
	public virtual object SyncRoot => null;

	static GenericAcl()
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.GenericAcl" /> class.</summary>
	protected GenericAcl()
	{
	}

	/// <summary>Copies each <see cref="T:System.Security.AccessControl.GenericAce" /> of the current <see cref="T:System.Security.AccessControl.GenericAcl" /> into the specified array.</summary>
	/// <param name="array">The array into which copies of the <see cref="T:System.Security.AccessControl.GenericAce" /> objects contained by the current <see cref="T:System.Security.AccessControl.GenericAcl" /> are placed.</param>
	/// <param name="index">The zero-based index of <paramref name="array" /> where the copying begins.</param>
	public void CopyTo(GenericAce[] array, int index)
	{
	}

	/// <summary>Copies each <see cref="T:System.Security.AccessControl.GenericAce" /> of the current <see cref="T:System.Security.AccessControl.GenericAcl" /> into the specified array.</summary>
	/// <param name="array">The array into which copies of the <see cref="T:System.Security.AccessControl.GenericAce" /> objects contained by the current <see cref="T:System.Security.AccessControl.GenericAcl" /> are placed.</param>
	/// <param name="index">The zero-based index of <paramref name="array" /> where the copying begins.</param>
	void ICollection.CopyTo(Array array, int index)
	{
	}

	/// <summary>Retrieves an object that you can use to iterate through the access control entries (ACEs) in an access control list (ACL).</summary>
	/// <returns>An enumerator object.</returns>
	public AceEnumerator GetEnumerator()
	{
		return null;
	}

	/// <summary>Returns a new instance of the <see cref="T:System.Security.AccessControl.AceEnumerator" /> class cast as an instance of the <see cref="T:System.Collections.IEnumerator" /> interface.</summary>
	/// <returns>A new <see cref="T:System.Security.AccessControl.AceEnumerator" /> object, cast as an instance of the <see cref="T:System.Collections.IEnumerator" /> interface.</returns>
	IEnumerator IEnumerable.GetEnumerator()
	{
		return null;
	}
}
