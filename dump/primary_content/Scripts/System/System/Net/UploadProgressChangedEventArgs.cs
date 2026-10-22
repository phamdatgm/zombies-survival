using System.ComponentModel;

namespace System.Net;

/// <summary>Provides data for the <see cref="E:System.Net.WebClient.UploadProgressChanged" /> event of a <see cref="T:System.Net.WebClient" />.</summary>
public class UploadProgressChangedEventArgs : ProgressChangedEventArgs
{
	private readonly long BytesReceived;

	private readonly long TotalBytesToReceive;

	private readonly long BytesSent;

	private readonly long TotalBytesToSend;

	internal UploadProgressChangedEventArgs(int progressPercentage, object userToken, long bytesSent, long totalBytesToSend, long bytesReceived, long totalBytesToReceive)
		: base(0, null)
	{
	}
}
