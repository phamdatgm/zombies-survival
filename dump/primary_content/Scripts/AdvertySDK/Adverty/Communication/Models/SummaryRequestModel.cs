namespace Adverty.Communication.Models;

internal class SummaryRequestModel : SignedRequestModel
{
	public SummaryData[] impressions { get; private set; }

	public SummaryRequestModel(SummaryData[] dataList)
	{
	}
}
