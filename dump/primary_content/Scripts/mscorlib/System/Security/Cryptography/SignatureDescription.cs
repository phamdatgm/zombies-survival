namespace System.Security.Cryptography;

/// <summary>Contains information about the properties of a digital signature.</summary>
public class SignatureDescription
{
	private string _strKey;

	private string _strDigest;

	private string _strFormatter;

	private string _strDeformatter;

	/// <summary>Initializes a new instance of the <see cref="T:System.Security.Cryptography.SignatureDescription" /> class.</summary>
	public SignatureDescription()
	{
	}
}
