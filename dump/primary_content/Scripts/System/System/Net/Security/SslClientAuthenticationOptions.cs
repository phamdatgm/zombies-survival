using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;

namespace System.Net.Security;

public class SslClientAuthenticationOptions
{
	private EncryptionPolicy _encryptionPolicy;

	private X509RevocationMode _checkCertificateRevocation;

	private SslProtocols _enabledSslProtocols;

	private bool _allowRenegotiation;

	private string TargetHost;

	private X509CertificateCollection ClientCertificates;

	public X509RevocationMode CertificateRevocationCheckMode
	{
		set
		{
		}
	}

	public EncryptionPolicy EncryptionPolicy
	{
		set
		{
		}
	}
}
