using System.Security.Principal;

namespace System.Security.AccessControl;

/// <summary>Represents a Discretionary Access Control List (DACL).</summary>
public sealed class DiscretionaryAcl : CommonAcl
{
	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.DiscretionaryAcl" /> class with the specified values.</summary>
	/// <param name="isContainer">
	///   <see langword="true" /> if the new <see cref="T:System.Security.AccessControl.DiscretionaryAcl" /> object is a container.</param>
	/// <param name="isDS">
	///   <see langword="true" /> if the new <see cref="T:System.Security.AccessControl.DiscretionaryAcl" /> object is a directory object Access Control List (ACL).</param>
	/// <param name="capacity">The number of Access Control Entries (ACEs) this <see cref="T:System.Security.AccessControl.DiscretionaryAcl" /> object can contain. This number is to be used only as a hint.</param>
	public DiscretionaryAcl(bool isContainer, bool isDS, int capacity)
		: base(isContainer: false, isDS: false, 0, 0)
	{
	}

	/// <summary>Adds an Access Control Entry (ACE) with the specified settings to the current <see cref="T:System.Security.AccessControl.DiscretionaryAcl" /> object.</summary>
	/// <param name="accessType">The type of access control (allow or deny) to add.</param>
	/// <param name="sid">The <see cref="T:System.Security.Principal.SecurityIdentifier" /> for which to add an ACE.</param>
	/// <param name="accessMask">The access rule for the new ACE.</param>
	/// <param name="inheritanceFlags">Flags that specify the inheritance properties of the new ACE.</param>
	/// <param name="propagationFlags">Flags that specify the inheritance propagation properties for the new ACE.</param>
	public void AddAccess(AccessControlType accessType, SecurityIdentifier sid, int accessMask, InheritanceFlags inheritanceFlags, PropagationFlags propagationFlags)
	{
	}

	internal override void ApplyCanonicalSortToExplicitAces()
	{
	}

	internal override int GetAceInsertPosition(AceQualifier aceQualifier)
	{
		return 0;
	}

	private static AceQualifier GetAceQualifier(AccessControlType accessType)
	{
		return AceQualifier.AccessAllowed;
	}

	internal override bool IsAceMeaningless(GenericAce ace)
	{
		return false;
	}
}
