namespace System.Security.Cryptography.X509Certificates;

/// <summary>Represents an element of an X.509 chain.</summary>
public class X509ChainElement
{
	private X509Certificate2 certificate;

	private X509ChainStatus[] status;

	private string info;

	private X509ChainStatusFlags compressed_status_flags;

	internal X509ChainElement(X509Certificate2 certificate)
	{
	}

	private int Count(X509ChainStatusFlags flags)
	{
		return 0;
	}

	private void Set(X509ChainStatus[] status, ref int position, X509ChainStatusFlags flags, X509ChainStatusFlags mask)
	{
	}

	internal void UncompressFlags()
	{
	}
}
