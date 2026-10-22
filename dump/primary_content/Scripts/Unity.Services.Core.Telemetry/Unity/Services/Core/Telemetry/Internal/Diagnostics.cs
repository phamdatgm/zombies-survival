using System.Collections.Generic;

namespace Unity.Services.Core.Telemetry.Internal;

internal class Diagnostics : IDiagnostics
{
	private readonly IDictionary<string, string> PackageTags;

	public void SendDiagnostic(string name, string message, IDictionary<string, string> tags = null)
	{
	}
}
