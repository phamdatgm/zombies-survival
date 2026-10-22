using System.Collections.Generic;
using Unity.Services.Core.Internal;

namespace Unity.Services.Core.Telemetry.Internal;

internal class MetricsFactory : IMetricsFactory, IServiceComponent
{
	private readonly IReadOnlyDictionary<string, string> CommonTags;

	public IMetrics Create(string packageName)
	{
		return null;
	}
}
