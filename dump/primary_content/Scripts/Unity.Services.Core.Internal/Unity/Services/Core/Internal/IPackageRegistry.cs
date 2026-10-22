namespace Unity.Services.Core.Internal;

internal interface IPackageRegistry
{
	DependencyTree Tree { get; }

	CoreRegistration RegisterPackage<TPackage>(TPackage package) where TPackage : IInitializablePackage;

	void RegisterDependency<TComponent>(int packageTypeHash) where TComponent : IServiceComponent;

	void RegisterOptionalDependency<TComponent>(int packageTypeHash) where TComponent : IServiceComponent;

	void RegisterProvision<TComponent>(int packageTypeHash) where TComponent : IServiceComponent;
}
