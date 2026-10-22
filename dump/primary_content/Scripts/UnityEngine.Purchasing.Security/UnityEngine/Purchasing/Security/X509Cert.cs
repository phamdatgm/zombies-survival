using System;
using LipingShare.LCLib.Asn1Processor;

namespace UnityEngine.Purchasing.Security;

internal class X509Cert
{
	private Asn1Node TbsCertificate;

	public byte[] rawTBSCertificate;

	public string SerialNumber { get; private set; }

	public DateTime ValidAfter { get; private set; }

	public DateTime ValidBefore { get; private set; }

	public RSAKey PubKey { get; private set; }

	private bool SelfSigned { set; }

	public DistinguishedName Subject { get; private set; }

	public DistinguishedName Issuer { get; private set; }

	public Asn1Node Signature { get; private set; }

	public X509Cert(Asn1Node n)
	{
	}

	public X509Cert(byte[] data)
	{
	}

	public bool CheckCertTime(DateTime time)
	{
		return false;
	}

	public bool CheckSignature(X509Cert signer)
	{
		return false;
	}

	private bool VerifySignatureWithSha256OrSha1(X509Cert signer)
	{
		return false;
	}

	public bool CheckSignatureSha256(X509Cert signer)
	{
		return false;
	}

	private void ParseNode(Asn1Node root)
	{
	}

	private DateTime ParseTime(Asn1Node n)
	{
		return default;
	}
}
