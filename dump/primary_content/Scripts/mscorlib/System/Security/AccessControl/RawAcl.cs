using System.Collections.Generic;

namespace System.Security.AccessControl;

/// <summary>Represents an Access Control List (ACL).</summary>
public sealed class RawAcl : GenericAcl
{
	private byte revision;

	private List<GenericAce> list;

	/// <summary>Gets the number of access control entries (ACEs) in the current <see cref="T:System.Security.AccessControl.RawAcl" /> object.</summary>
	/// <returns>The number of ACEs in the current <see cref="T:System.Security.AccessControl.RawAcl" /> object.</returns>
	public override int Count => 0;

	/// <summary>Gets or sets the Access Control Entry (ACE) at the specified index.</summary>
	/// <param name="index">The zero-based index of the ACE to get or set.</param>
	/// <returns>The ACE at the specified index.</returns>
	public override GenericAce this[int index]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.RawAcl" /> class with the specified revision level.</summary>
	/// <param name="revision">The revision level of the new Access Control List (ACL).</param>
	/// <param name="capacity">The number of Access Control Entries (ACEs) this <see cref="T:System.Security.AccessControl.RawAcl" /> object can contain. This number is to be used only as a hint.</param>
	public RawAcl(byte revision, int capacity)
	{
	}

	/// <summary>Inserts the specified Access Control Entry (ACE) at the specified index.</summary>
	/// <param name="index">The position at which to add the new ACE. Specify the value of the <see cref="P:System.Security.AccessControl.RawAcl.Count" /> property to insert an ACE at the end of the <see cref="T:System.Security.AccessControl.RawAcl" /> object.</param>
	/// <param name="ace">The ACE to insert.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="offset" /> is negative or too high to allow the entire <see cref="T:System.Security.AccessControl.GenericAcl" /> to be copied into <paramref name="array" />.</exception>
	public void InsertAce(int index, GenericAce ace)
	{
	}

	/// <summary>Removes the Access Control Entry (ACE) at the specified location.</summary>
	/// <param name="index">The zero-based index of the ACE to remove.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">The value of the <paramref name="index" /> parameter is higher than the value of the <see cref="P:System.Security.AccessControl.RawAcl.Count" /> property minus one or is negative.</exception>
	public void RemoveAce(int index)
	{
	}
}
