namespace System.Security.AccessControl;

/// <summary>Represents a System Access Control List (SACL).</summary>
public sealed class SystemAcl : CommonAcl
{
	internal override void ApplyCanonicalSortToExplicitAces()
	{
	}

	internal override int GetAceInsertPosition(AceQualifier aceQualifier)
	{
		return 0;
	}

	internal override bool IsAceMeaningless(GenericAce ace)
	{
		return false;
	}

	private static bool IsValidAuditFlags(AuditFlags auditFlags)
	{
		return false;
	}
}
