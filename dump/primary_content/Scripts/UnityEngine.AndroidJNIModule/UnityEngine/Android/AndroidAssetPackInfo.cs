namespace UnityEngine.Android;

public class AndroidAssetPackInfo
{
	private readonly string name;

	private readonly AndroidAssetPackStatus status;

	private readonly ulong size;

	private readonly ulong bytesDownloaded;

	private readonly float transferProgress;

	private readonly AndroidAssetPackError error;

	internal AndroidAssetPackInfo(string name, AndroidAssetPackStatus status, ulong size, ulong bytesDownloaded, float transferProgress, AndroidAssetPackError error)
	{
	}
}
