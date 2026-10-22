namespace System.Security.Cryptography.X509Certificates;

/// <summary>Provides a simple structure for storing X509 chain status and error information.</summary>
public struct X509ChainStatus
{
	private X509ChainStatusFlags status = X509ChainStatusFlags.NoError;

	private string info = null;

	internal X509ChainStatus(X509ChainStatusFlags flag)
	{
	}

	internal static string GetInformation(X509ChainStatusFlags flags)
	{
		return null;
	}
}
