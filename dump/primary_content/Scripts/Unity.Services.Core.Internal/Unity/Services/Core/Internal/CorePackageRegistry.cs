namespace Unity.Services.Core.Internal;

public sealed class CorePackageRegistry
{
	public static CorePackageRegistry Instance { get; internal set; }

	internal IPackageRegistry Registry { get; set; }

	internal CorePackageRegistry()
	{
	}

	public CoreRegistration Register<TPackage>(TPackage package) where TPackage : IInitializablePackage
	{
		return default;
	}

	internal void Lock()
	{
	}
}
