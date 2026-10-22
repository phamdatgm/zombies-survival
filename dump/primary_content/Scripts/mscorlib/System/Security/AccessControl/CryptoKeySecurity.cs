namespace System.Security.AccessControl;

/// <summary>Provides the ability to control access to a cryptographic key object without direct manipulation of  an Access Control List (ACL).</summary>
public sealed class CryptoKeySecurity : NativeObjectSecurity
{
	/// <summary>Initializes a new instance of the <see cref="T:System.Security.AccessControl.CryptoKeySecurity" /> class.</summary>
	public CryptoKeySecurity()
		: base(isContainer: false, ResourceType.Unknown)
	{
	}
}
