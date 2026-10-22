namespace Mono.Security.Interface;

public class MonoTlsConnectionInfo
{
	private string PeerDomainName;

	public CipherSuiteCode CipherSuiteCode { get; }

	public TlsProtocols ProtocolVersion { get; }

	public override string ToString()
	{
		return null;
	}
}
