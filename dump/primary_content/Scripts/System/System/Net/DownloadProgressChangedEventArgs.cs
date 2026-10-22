using System.ComponentModel;

namespace System.Net;

/// <summary>Provides data for the <see cref="E:System.Net.WebClient.DownloadProgressChanged" /> event of a <see cref="T:System.Net.WebClient" />.</summary>
public class DownloadProgressChangedEventArgs : ProgressChangedEventArgs
{
	private readonly long BytesReceived;

	private readonly long TotalBytesToReceive;

	internal DownloadProgressChangedEventArgs(int progressPercentage, object userToken, long bytesReceived, long totalBytesToReceive)
		: base(0, null)
	{
	}
}
