using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;

namespace Internal.Cryptography.Pal;

internal struct CertificateData
{
	internal struct AlgorithmIdentifier
	{
		internal string AlgorithmId;

		internal byte[] Parameters;
	}

	internal byte[] RawData = null;

	internal byte[] SubjectPublicKeyInfo = null;

	internal int Version = 0;

	internal byte[] SerialNumber = null;

	internal AlgorithmIdentifier TbsSignature = default;

	internal X500DistinguishedName Issuer = null;

	internal DateTime NotBefore = default;

	internal DateTime NotAfter = default;

	internal X500DistinguishedName Subject = null;

	internal AlgorithmIdentifier PublicKeyAlgorithm = default;

	internal byte[] PublicKey = null;

	internal byte[] IssuerUniqueId = null;

	internal byte[] SubjectUniqueId = null;

	internal List<X509Extension> Extensions = null;

	internal AlgorithmIdentifier SignatureAlgorithm = default;

	internal byte[] SignatureValue = null;

	internal CertificateData(byte[] rawData)
	{
	}

	public string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	private static string GetSimpleNameInfo(X500DistinguishedName name)
	{
		return null;
	}

	private static string FindAltNameMatch(byte[] extensionBytes, GeneralNameType matchType, string otherOid)
	{
		return null;
	}

	private static IEnumerable<KeyValuePair<string, string>> ReadReverseRdns(X500DistinguishedName name)
	{
		return null;
	}
}
