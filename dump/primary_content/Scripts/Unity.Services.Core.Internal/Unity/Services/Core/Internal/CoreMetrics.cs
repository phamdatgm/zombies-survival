using System;
using System.Collections.Generic;
using Unity.Services.Core.Telemetry.Internal;

namespace Unity.Services.Core.Internal;

internal class CoreMetrics
{
	private readonly IDictionary<Type, IMetrics> AllPackageMetrics;

	public static CoreMetrics Instance { get; internal set; }
}
