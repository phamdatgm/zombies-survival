namespace Unity.Services.Core.Internal;

public struct CoreRegistration
{
	private readonly IPackageRegistry m_Registry = null;

	private readonly int m_PackageHash = 0;

	internal CoreRegistration(IPackageRegistry registry, int packageHash)
	{
	}

	public CoreRegistration DependsOn<T>() where T : IServiceComponent
	{
		return default;
	}

	public CoreRegistration OptionallyDependsOn<T>() where T : IServiceComponent
	{
		return default;
	}

	public CoreRegistration ProvidesComponent<T>() where T : IServiceComponent
	{
		return default;
	}
}
