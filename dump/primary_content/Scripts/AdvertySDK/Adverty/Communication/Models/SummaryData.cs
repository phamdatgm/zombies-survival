using Adverty.a.C;

namespace Adverty.Communication.Models;

internal struct SummaryData
{
	public string adId { get; private set; } = null;

	public long totalViewTime { get; private set; } = 0L;

	public long totalLiveTime { get; private set; } = 0L;

	public long totalRenderedOnScreenTime { get; private set; } = 0L;

	public long lengthOfRegisteredViewSegment { get; private set; } = 0L;

	public long totalTimeInWebView { get; private set; } = 0L;

	public int averageFOV { get; private set; } = 0;

	public int maxFOV { get; private set; } = 0;

	public int bounceBack { get; private set; } = 0;

	public SummaryData(aCk sessionData)
	{
	}
}
