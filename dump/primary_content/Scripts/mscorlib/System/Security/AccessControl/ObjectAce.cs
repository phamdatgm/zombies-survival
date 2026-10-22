using System.Security.Principal;

namespace System.Security.AccessControl;

/// <summary>Controls access to Directory Services objects. This class represents an Access Control Entry (ACE) associated with a directory object.</summary>
public sealed class ObjectAce : QualifiedAce
{
	private Guid object_ace_type;

	private Guid inherited_object_type;

	private ObjectAceFlags object_ace_flags;

	/// <summary>Gets the length, in bytes, of the binary representation of the current <see cref="T:System.Security.AccessControl.ObjectAce" /> object. This length should be used before marshaling the ACL into a binary array with the <see cref="M:System.Security.AccessControl.ObjectAce.GetBinaryForm(System.Byte[],System.Int32)" /> method.</summary>
	/// <returns>The length, in bytes, of the binary representation of the current <see cref="T:System.Security.AccessControl.ObjectAce" /> object.</returns>
	public override int BinaryLength => 0;

	private bool InheritedObjectAceTypePresent => false;

	private bool ObjectAceTypePresent => false;

	/// <summary>Initiates a new instance of the <see cref="T:System.Security.AccessControl.ObjectAce" /> class.</summary>
	/// <param name="aceFlags">The inheritance, inheritance propagation, and auditing conditions for the new Access Control Entry (ACE).</param>
	/// <param name="qualifier">The use of the new ACE.</param>
	/// <param name="accessMask">The access mask for the ACE.</param>
	/// <param name="sid">The <see cref="T:System.Security.Principal.SecurityIdentifier" /> associated with the new ACE.</param>
	/// <param name="flags">Whether the <paramref name="type" /> and <paramref name="inheritedType" /> parameters contain valid object GUIDs.</param>
	/// <param name="type">A GUID that identifies the object type to which the new ACE applies.</param>
	/// <param name="inheritedType">A GUID that identifies the object type that can inherit the new ACE.</param>
	/// <param name="isCallback">
	///   <see langword="true" /> if the new ACE is a callback type ACE.</param>
	/// <param name="opaque">Opaque data associated with the new ACE. This is allowed only for callback ACE types. The length of this array must not be greater than the return value of the <see cref="M:System.Security.AccessControl.ObjectAce.MaxOpaqueLength(System.Boolean)" /> method.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">The qualifier parameter contains an invalid value or the length of the value of the opaque parameter is greater than the return value of the <see cref="M:System.Security.AccessControl.ObjectAce.MaxOpaqueLength(System.Boolean)" /> method.</exception>
	public ObjectAce(AceFlags aceFlags, AceQualifier qualifier, int accessMask, SecurityIdentifier sid, ObjectAceFlags flags, Guid type, Guid inheritedType, bool isCallback, byte[] opaque)
		: base(AceType.AccessAllowed, AceFlags.None, null)
	{
	}

	internal ObjectAce(byte[] binaryForm, int offset)
		: base(AceType.AccessAllowed, AceFlags.None, null)
	{
	}

	/// <summary>Marshals the contents of the <see cref="T:System.Security.AccessControl.ObjectAce" /> object into the specified byte array beginning at the specified offset.</summary>
	/// <param name="binaryForm">The byte array into which the contents of the <see cref="T:System.Security.AccessControl.ObjectAce" /> is marshaled.</param>
	/// <param name="offset">The offset at which to start marshaling.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="offset" /> is negative or too high to allow the entire <see cref="T:System.Security.AccessControl.ObjectAce" /> to be copied into <paramref name="array" />.</exception>
	public override void GetBinaryForm(byte[] binaryForm, int offset)
	{
	}

	private static AceType ConvertType(AceQualifier qualifier, bool isCallback)
	{
		return AceType.AccessAllowed;
	}

	private void WriteGuid(Guid val, byte[] buffer, int offset)
	{
	}

	private Guid ReadGuid(byte[] buffer, int offset)
	{
		return default;
	}
}
