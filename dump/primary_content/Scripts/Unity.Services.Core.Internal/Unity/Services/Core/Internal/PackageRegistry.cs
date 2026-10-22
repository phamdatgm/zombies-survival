namespace Unity.Services.Core.Internal;

internal class PackageRegistry : IPackageRegistry
{
	public DependencyTree Tree { get; set; }

	public PackageRegistry(DependencyTree tree)
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

	private void AddComponentDependencyToPackage(int componentTypeHash, int packageTypeHash)
	{
	}
}
