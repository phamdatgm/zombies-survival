using System.Net.Security;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Mono.Security.Interface;

namespace Mono.Unity;

internal static class UnityTlsConversions
{
	public static UnityTls.unitytls_protocol GetMinProtocol(SslProtocols protocols)
	{
		return UnityTls.unitytls_protocol.UNITYTLS_PROTOCOL_TLS_1_0;
	}

	public static UnityTls.unitytls_protocol GetMaxProtocol(SslProtocols protocols)
	{
		return UnityTls.unitytls_protocol.UNITYTLS_PROTOCOL_TLS_1_0;
	}

	public static TlsProtocols ConvertProtocolVersion(UnityTls.unitytls_protocol protocol)
	{
		return TlsProtocols.Zero;
	}

	public static AlertDescription VerifyResultToAlertDescription(UnityTls.unitytls_x509verify_result verifyResult, AlertDescription defaultAlert = AlertDescription.InternalError)
	{
		return AlertDescription.CloseNotify;
	}

	public static SslPolicyErrors VerifyResultToPolicyErrror(UnityTls.unitytls_x509verify_result verifyResult)
	{
		return SslPolicyErrors.None;
	}

	public static X509ChainStatusFlags VerifyResultToChainStatus(UnityTls.unitytls_x509verify_result verifyResult)
	{
		return X509ChainStatusFlags.NoError;
	}
}
