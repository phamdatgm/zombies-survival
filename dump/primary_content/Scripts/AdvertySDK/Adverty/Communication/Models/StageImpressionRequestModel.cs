namespace Adverty.Communication.Models;

internal class StageImpressionRequestModel : SignedRequestModel
{
	public string adId { get; set; }

	public StageImpressionRequestModel(string id)
	{
	}
}
