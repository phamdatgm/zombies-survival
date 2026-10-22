namespace Mono;

internal class SystemDependencyProvider : ISystemDependencyProvider
{
	private static SystemDependencyProvider instance;

	private static object syncRoot;

	private readonly SystemCertificateProvider CertificateProvider;

	public static SystemDependencyProvider Instance => null;

	ISystemCertificateProvider ISystemDependencyProvider.CertificateProvider => null;

	public X509PalImpl X509Pal => null;

	internal static void Initialize()
	{
	}

	private SystemDependencyProvider()
	{
	}
}
