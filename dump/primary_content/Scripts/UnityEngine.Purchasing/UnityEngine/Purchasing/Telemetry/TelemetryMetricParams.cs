namespace UnityEngine.Purchasing.Telemetry;

internal struct TelemetryMetricParams
{
	internal TelemetryMetricTypes type = TelemetryMetricTypes.Gauge;

	internal string name = null;

	internal double timeSeconds = 0.0;

	internal TelemetryMetricParams(TelemetryMetricTypes metricType, string metricName, double metricTimeSeconds)
	{
	}
}
