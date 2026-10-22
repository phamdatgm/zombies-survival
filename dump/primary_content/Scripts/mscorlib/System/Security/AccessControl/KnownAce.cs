using System.Security.Principal;

namespace System.Security.AccessControl;

/// <summary>Encapsulates all Access Control Entry (ACE) types currently defined by Microsoft Corporation. All <see cref="T:System.Security.AccessControl.KnownAce" /> objects contain a 32-bit access mask and a <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</summary>
public abstract class KnownAce : GenericAce
{
	private int access_mask;

	private SecurityIdentifier identifier;

	internal KnownAce(AceType type, AceFlags flags)
		: base(AceType.AccessAllowed, AceFlags.None)
	{
	}

	internal KnownAce(byte[] binaryForm, int offset)
		: base(AceType.AccessAllowed, AceFlags.None)
	{
	}
}
