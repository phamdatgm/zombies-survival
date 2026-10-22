namespace UnityEngine.Purchasing.Telemetry;

internal struct TelemetryMetricDefinition
{
	public TelemetryMetricTypes MetricType { get; } = TelemetryMetricTypes.Gauge;

	public string MetricName { get; } = null;

	public TelemetryMetricDefinition(string metricName, TelemetryMetricTypes metricType = TelemetryMetricTypes.Histogram)
	{
	}

	public static implicit operator TelemetryMetricDefinition(string name)
	{
		return default;
	}
}
