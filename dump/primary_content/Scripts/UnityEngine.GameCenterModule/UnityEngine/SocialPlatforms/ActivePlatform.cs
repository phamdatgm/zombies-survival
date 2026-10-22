namespace UnityEngine.SocialPlatforms;

internal static class ActivePlatform
{
	private static ISocialPlatform _active;

	internal static ISocialPlatform Instance
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	private static ISocialPlatform SelectSocialPlatform()
	{
		return null;
	}
}
