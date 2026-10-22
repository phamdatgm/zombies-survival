using System.Collections.Generic;
using Unity.Services.Core.Telemetry.Internal;

namespace Unity.Services.Core.Internal;

internal class CoreDiagnostics
{
	private readonly IDictionary<string, string> CoreTags;

	public static CoreDiagnostics Instance { get; internal set; }

	internal IDiagnosticsComponentProvider DiagnosticsComponentProvider { set; }
}
