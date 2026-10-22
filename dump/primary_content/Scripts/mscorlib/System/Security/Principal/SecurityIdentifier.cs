namespace System.Security.Principal;

/// <summary>Represents a security identifier (SID) and provides marshaling and comparison operations for SIDs.</summary>
public sealed class SecurityIdentifier : IdentityReference, IComparable<SecurityIdentifier>
{
	private byte[] buffer;

	/// <summary>Returns the maximum size, in bytes, of the binary representation of the security identifier.</summary>
	public static readonly int MaxBinaryLength;

	/// <summary>Returns the minimum size, in bytes, of the binary representation of the security identifier.</summary>
	public static readonly int MinBinaryLength;

	/// <summary>Returns the length, in bytes, of the security identifier (SID) represented by the <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</summary>
	/// <returns>The length, in bytes, of the SID represented by the <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</returns>
	public int BinaryLength => 0;

	/// <summary>Returns an uppercase Security Descriptor Definition Language (SDDL) string for the security identifier (SID) represented by this <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</summary>
	/// <returns>An uppercase SDDL string for the SID represented by the <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</returns>
	public override string Value => null;

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.Principal.SecurityIdentifier" /> class by using the specified security identifier (SID) in Security Descriptor Definition Language (SDDL) format.</summary>
	/// <param name="sddlForm">SDDL string for the SID used to create the <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</param>
	public SecurityIdentifier(string sddlForm)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.Principal.SecurityIdentifier" /> class by using a specified binary representation of a security identifier (SID).</summary>
	/// <param name="binaryForm">The byte array that represents the SID.</param>
	/// <param name="offset">The byte offset to use as the starting index in <paramref name="binaryForm" />.</param>
	public SecurityIdentifier(byte[] binaryForm, int offset)
	{
	}

	private void CreateFromBinaryForm(IntPtr binaryForm, int length)
	{
	}

	private ulong GetSidAuthority()
	{
		return 0uL;
	}

	private byte GetSidSubAuthorityCount()
	{
		return 0;
	}

	private uint GetSidSubAuthority(byte index)
	{
		return 0u;
	}

	/// <summary>Compares the current <see cref="T:System.Security.Principal.SecurityIdentifier" /> object with the specified <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</summary>
	/// <param name="sid">The object to compare with the current object.</param>
	/// <returns>A signed number indicating the relative values of this instance and <paramref name="sid" />.  
	///   Return Value  
	///
	///   Description  
	///
	///   Less than zero  
	///
	///   This instance is less than <paramref name="sid" />.  
	///
	///   Zero  
	///
	///   This instance is equal to <paramref name="sid" />.  
	///
	///   Greater than zero  
	///
	///   This instance is greater than <paramref name="sid" />.</returns>
	public int CompareTo(SecurityIdentifier sid)
	{
		return 0;
	}

	/// <summary>Returns a value that indicates whether this <see cref="T:System.Security.Principal.SecurityIdentifier" /> object is equal to a specified object.</summary>
	/// <param name="o">An object to compare with this <see cref="T:System.Security.Principal.SecurityIdentifier" /> object, or <see langword="null" />.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="o" /> is an object with the same underlying type and value as this <see cref="T:System.Security.Principal.SecurityIdentifier" /> object; otherwise, <see langword="false" />.</returns>
	public override bool Equals(object o)
	{
		return false;
	}

	/// <summary>Indicates whether the specified <see cref="T:System.Security.Principal.SecurityIdentifier" /> object is equal to the current <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</summary>
	/// <param name="sid">The object to compare with the current object.</param>
	/// <returns>
	///   <see langword="true" /> if the value of <paramref name="sid" /> is equal to the value of the current <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</returns>
	public bool Equals(SecurityIdentifier sid)
	{
		return false;
	}

	/// <summary>Copies the binary representation of the specified security identifier (SID) represented by the <see cref="T:System.Security.Principal.SecurityIdentifier" /> class to a byte array.</summary>
	/// <param name="binaryForm">The byte array to receive the copied SID.</param>
	/// <param name="offset">The byte offset to use as the starting index in <paramref name="binaryForm" />.</param>
	public void GetBinaryForm(byte[] binaryForm, int offset)
	{
	}

	/// <summary>Serves as a hash function for the current <see cref="T:System.Security.Principal.SecurityIdentifier" /> object. The <see cref="M:System.Security.Principal.SecurityIdentifier.GetHashCode" /> method is suitable for hashing algorithms and data structures like a hash table.</summary>
	/// <returns>A hash value for the current <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</returns>
	public override int GetHashCode()
	{
		return 0;
	}

	/// <summary>Returns the security identifier (SID), in Security Descriptor Definition Language (SDDL) format, for the account represented by the <see cref="T:System.Security.Principal.SecurityIdentifier" /> object. An example of the SDDL format is S-1-5-9.</summary>
	/// <returns>The SID, in SDDL format, for the account represented by the <see cref="T:System.Security.Principal.SecurityIdentifier" /> object.</returns>
	public override string ToString()
	{
		return null;
	}

	/// <summary>Compares two <see cref="T:System.Security.Principal.SecurityIdentifier" /> objects to determine whether they are equal. They are considered equal if they have the same canonical representation as the one returned by the <see cref="P:System.Security.Principal.SecurityIdentifier.Value" /> property or if they are both <see langword="null" />.</summary>
	/// <param name="left">The left operand to use for the equality comparison. This parameter can be <see langword="null" />.</param>
	/// <param name="right">The right operand to use for the equality comparison. This parameter can be <see langword="null" />.</param>
	/// <returns>
	///   <see langword="true" /> if <paramref name="left" /> and <paramref name="right" /> are equal; otherwise, <see langword="false" />.</returns>
	public static bool operator ==(SecurityIdentifier left, SecurityIdentifier right)
	{
		return false;
	}

	private static byte[] ParseSddlForm(string sddlForm)
	{
		return null;
	}

	private static bool TryParseAuthority(string s, out ulong result)
	{
		result = default;
		return false;
	}

	private static bool TryParseSubAuthority(string s, out uint result)
	{
		result = default;
		return false;
	}
}
