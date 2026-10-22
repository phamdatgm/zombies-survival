using System.Security.Principal;

namespace System.Security.AccessControl;

/// <summary>Represents an access control list (ACL) and is the base class for the <see cref="T:System.Security.AccessControl.DiscretionaryAcl" /> and <see cref="T:System.Security.AccessControl.SystemAcl" /> classes.</summary>
public abstract class CommonAcl : GenericAcl
{
	internal delegate bool RemoveAcesCallback<T>(T ace);

	private const int default_capacity = 10;

	private bool is_aefa;

	private bool is_canonical;

	private bool is_container;

	private bool is_ds;

	internal RawAcl raw_acl;

	/// <summary>Gets the number of access control entries (ACEs) in the current <see cref="T:System.Security.AccessControl.CommonAcl" /> object.</summary>
	/// <returns>The number of ACEs in the current <see cref="T:System.Security.AccessControl.CommonAcl" /> object.</returns>
	public sealed override int Count => 0;

	/// <summary>Gets or sets the <see cref="T:System.Security.AccessControl.CommonAce" /> at the specified index.</summary>
	/// <param name="index">The zero-based index of the <see cref="T:System.Security.AccessControl.CommonAce" /> to get or set.</param>
	/// <returns>The <see cref="T:System.Security.AccessControl.CommonAce" /> at the specified index.</returns>
	public sealed override GenericAce this[int index]
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal CommonAcl(bool isContainer, bool isDS, byte revision, int capacity)
	{
	}

	internal CommonAcl(bool isContainer, bool isDS, int capacity)
	{
	}

	private void Init(bool isContainer, bool isDS, RawAcl rawAcl)
	{
	}

	internal void RequireCanonicity()
	{
	}

	internal void CanonicalizeAndClearAefa()
	{
	}

	internal virtual bool IsAceMeaningless(GenericAce ace)
	{
		return false;
	}

	private bool TestCanonicity()
	{
		return false;
	}

	internal int GetCanonicalExplicitDenyAceCount()
	{
		return 0;
	}

	internal int GetCanonicalExplicitAceCount()
	{
		return 0;
	}

	private void MergeExplicitAces()
	{
	}

	private GenericAce MergeExplicitAcePair(GenericAce ace1, GenericAce ace2)
	{
		return null;
	}

	private static void GetObjectAceTypeGuids(ObjectAce ace, out Guid type, out Guid inheritedType)
	{
		type = default;
		inheritedType = default;
	}

	internal abstract void ApplyCanonicalSortToExplicitAces();

	internal void ApplyCanonicalSortToExplicitAces(int start, int count)
	{
	}

	internal void RemoveAces<T>(RemoveAcesCallback<T> callback) where T : GenericAce
	{
	}

	internal void AddAce(AceQualifier aceQualifier, SecurityIdentifier sid, int accessMask, InheritanceFlags inheritanceFlags, PropagationFlags propagationFlags, AuditFlags auditFlags)
	{
	}

	private QualifiedAce AddAceGetQualifiedAce(AceQualifier aceQualifier, SecurityIdentifier sid, int accessMask, InheritanceFlags inheritanceFlags, PropagationFlags propagationFlags, AuditFlags auditFlags)
	{
		return null;
	}

	private void AddAce(QualifiedAce newAce)
	{
	}

	private static GenericAce CopyAce(GenericAce ace)
	{
		return null;
	}

	internal abstract int GetAceInsertPosition(AceQualifier aceQualifier);

	private AceFlags GetAceFlags(InheritanceFlags inheritanceFlags, PropagationFlags propagationFlags, AuditFlags auditFlags)
	{
		return AceFlags.None;
	}

	internal CommonAcl()
	{
	}
}
