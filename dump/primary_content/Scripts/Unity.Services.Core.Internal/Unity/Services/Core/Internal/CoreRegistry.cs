namespace Unity.Services.Core.Internal;

public sealed class CoreRegistry
{
	private readonly string InstanceId;

	public static CoreRegistry Instance { get; internal set; }

	internal ServicesType Type { get; private set; }

	internal InitializationOptions Options { get; set; }

	internal IPackageRegistry PackageRegistry { get; private set; }

	internal IComponentRegistry ComponentRegistry { get; private set; }

	private IServiceRegistry ServiceRegistry { set; }

	internal CoreRegistry(IPackageRegistry packageRegistry, ServicesType type = ServicesType.Default, string instanceId = null)
	{
	}

	public CoreRegistration RegisterPackage<TPackage>(TPackage package) where TPackage : IInitializablePackage
	{
		return default;
	}

	public void RegisterServiceComponent<TComponent>(TComponent component) where TComponent : IServiceComponent
	{
	}

	public TComponent GetServiceComponent<TComponent>() where TComponent : IServiceComponent
	{
		return default;
	}

	internal void LockComponentRegistration()
	{
	}
}
