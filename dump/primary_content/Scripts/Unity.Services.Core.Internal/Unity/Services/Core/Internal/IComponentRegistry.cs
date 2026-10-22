using System.Collections.Generic;

namespace Unity.Services.Core.Internal;

internal interface IComponentRegistry
{
	void RegisterServiceComponent<TComponent>(TComponent component) where TComponent : IServiceComponent;

	TComponent GetServiceComponent<TComponent>() where TComponent : IServiceComponent;

	void ResetProvidedComponents(IDictionary<int, IServiceComponent> componentTypeHashToInstance);
}
