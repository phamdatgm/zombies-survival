using System;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Mono.Security.Interface;

namespace Mono.Net.Security;

internal abstract class MobileTlsContext : IDisposable
{
	private ChainValidationHelper certificateValidator;

	private readonly MonoSslAuthenticationOptions Options;

	private readonly MobileAuthenticatedStream Parent;

	private readonly bool IsServer;

	private readonly string TargetHost;

	private readonly string ServerName;

	private readonly bool AskForClientCertificate;

	private readonly SslProtocols EnabledProtocols;

	private readonly X509CertificateCollection ClientCertificates;

	private X509Certificate LocalServerCertificate;

	public MonoTlsSettings Settings => null;

	public abstract bool IsAuthenticated { get; }

	internal abstract X509Certificate LocalClientCertificate { get; }

	public abstract X509Certificate2 RemoteCertificate { get; }

	protected MobileTlsContext(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options)
	{
	}

	public abstract void StartHandshake();

	public abstract bool ProcessHandshake();

	public abstract void FinishHandshake();

	public abstract (int, bool) Read(byte[] buffer, int offset, int count);

	public abstract (int, bool) Write(byte[] buffer, int offset, int count);

	public abstract void Shutdown();

	protected bool ValidateCertificate(X509Certificate2 leaf, X509Chain chain)
	{
		return false;
	}

	protected X509Certificate SelectClientCertificate(string[] acceptableIssuers)
	{
		return null;
	}

	public abstract void Renegotiate();

	public void Dispose()
	{
	}

	protected virtual void Dispose(bool disposing)
	{
	}

	~MobileTlsContext()
	{
	}
}
