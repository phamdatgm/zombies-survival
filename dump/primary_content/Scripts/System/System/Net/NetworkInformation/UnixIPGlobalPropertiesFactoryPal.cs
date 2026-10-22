namespace System.Net.NetworkInformation;

internal static class UnixIPGlobalPropertiesFactoryPal
{
	private static readonly bool PlatformNeedsLibCWorkaround;

	public static IPGlobalProperties Create()
	{
		return null;
	}
}
