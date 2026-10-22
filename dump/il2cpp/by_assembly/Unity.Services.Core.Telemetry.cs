// Namespace: 
internal class <Module> // TypeDefIndex: 7889
{}


// Namespace: Unity.Services.Core.Telemetry.Internal
internal class Diagnostics : IDiagnostics // TypeDefIndex: 7890
{
	// Fields
	[CompilerGenerated]
	private readonly IDictionary<string, string> <PackageTags>k__BackingField; // 0x10

	// Methods

	// RVA: 0x134F24C Offset: 0x134B24C VA: 0x134F24C Slot: 4
	public void SendDiagnostic(string name, string message, IDictionary<string, string> tags) { }

	// RVA: 0x134F250 Offset: 0x134B250 VA: 0x134F250
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Telemetry.Internal
internal class DiagnosticsFactory : IDiagnosticsFactory, IServiceComponent // TypeDefIndex: 7891
{
	// Fields
	[CompilerGenerated]
	private readonly IReadOnlyDictionary<string, string> <CommonTags>k__BackingField; // 0x10

	// Methods

	// RVA: 0x134F2CC Offset: 0x134B2CC VA: 0x134F2CC Slot: 4
	public IDiagnostics Create(string packageName) { }

	// RVA: 0x134F31C Offset: 0x134B31C VA: 0x134F31C
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Telemetry.Internal
internal class Metrics : IMetrics // TypeDefIndex: 7892
{
	// Fields
	[CompilerGenerated]
	private readonly IDictionary<string, string> <PackageTags>k__BackingField; // 0x10

	// Methods

	// RVA: 0x134F398 Offset: 0x134B398 VA: 0x134F398 Slot: 4
	private void Unity.Services.Core.Telemetry.Internal.IMetrics.SendGaugeMetric(string name, double value, IDictionary<string, string> tags) { }

	// RVA: 0x134F39C Offset: 0x134B39C VA: 0x134F39C Slot: 5
	private void Unity.Services.Core.Telemetry.Internal.IMetrics.SendHistogramMetric(string name, double time, IDictionary<string, string> tags) { }

	// RVA: 0x134F3A0 Offset: 0x134B3A0 VA: 0x134F3A0 Slot: 6
	private void Unity.Services.Core.Telemetry.Internal.IMetrics.SendSumMetric(string name, double value, IDictionary<string, string> tags) { }

	// RVA: 0x134F3A4 Offset: 0x134B3A4 VA: 0x134F3A4
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Telemetry.Internal
internal class MetricsFactory : IMetricsFactory, IServiceComponent // TypeDefIndex: 7893
{
	// Fields
	[CompilerGenerated]
	private readonly IReadOnlyDictionary<string, string> <CommonTags>k__BackingField; // 0x10

	// Methods

	// RVA: 0x134F420 Offset: 0x134B420 VA: 0x134F420 Slot: 4
	public IMetrics Create(string packageName) { }

	// RVA: 0x134F470 Offset: 0x134B470 VA: 0x134F470
	public void .ctor() { }
}
