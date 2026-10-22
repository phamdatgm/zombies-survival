using System.Collections.Generic;

namespace Unity.Services.Core.Internal;

internal class ServiceRegistry : IServiceRegistry
{
	private readonly Dictionary<int, object> ServiceTypeHashToInstance;
}
