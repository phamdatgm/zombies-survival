using System.Collections.Generic;
using Unity.Services.Core.Internal;

namespace Unity.Services.Core.Telemetry.Internal;

internal class DiagnosticsFactory : IDiagnosticsFactory, IServiceComponent
{
	private readonly IReadOnlyDictionary<string, string> CommonTags;

	public IDiagnostics Create(string packageName)
	{
		return null;
	}
}
