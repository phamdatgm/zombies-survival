namespace Unity.Services.Core.Internal;

internal class LockedPackageRegistry : IPackageRegistry
{
	internal IPackageRegistry Registry { get; }

	public DependencyTree Tree => null;

	public LockedPackageRegistry(IPackageRegistry registryToLock)
	{
	}

	public CoreRegistration RegisterPackage<TPackage>(TPackage package) where TPackage : IInitializablePackage
	{
		return default;
	}

	public void RegisterDependency<TComponent>(int packageTypeHash) where TComponent : IServiceComponent
	{
	}

	public void RegisterOptionalDependency<TComponent>(int packageTypeHash) where TComponent : IServiceComponent
	{
	}

	public void RegisterProvision<TComponent>(int packageTypeHash) where TComponent : IServiceComponent
	{
	}
}
