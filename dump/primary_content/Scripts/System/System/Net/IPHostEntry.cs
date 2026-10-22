namespace System.Net;

/// <summary>Provides a container class for Internet host address information.</summary>
public class IPHostEntry
{
	private string hostName;

	private string[] aliases;

	private IPAddress[] addressList;

	internal bool isTrustedHost;

	/// <summary>Initializes a new instance of the <see cref="T:System.Net.IPHostEntry" /> class.</summary>
	public IPHostEntry()
	{
	}
}
