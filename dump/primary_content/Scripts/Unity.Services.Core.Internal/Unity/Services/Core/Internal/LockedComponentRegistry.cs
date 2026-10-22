using System.Collections.Generic;

namespace Unity.Services.Core.Internal;

internal class LockedComponentRegistry : IComponentRegistry
{
	internal IComponentRegistry Registry { get; }

	public LockedComponentRegistry(IComponentRegistry registryToLock)
	{
	}

	public void RegisterServiceComponent<TComponent>(TComponent component) where TComponent : IServiceComponent
	{
	}

	public TComponent GetServiceComponent<TComponent>() where TComponent : IServiceComponent
	{
		return default;
	}

	public void ResetProvidedComponents(IDictionary<int, IServiceComponent> componentTypeHashToInstance)
	{
	}
}
