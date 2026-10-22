namespace Adverty.Communication.Models;

internal class StageActionRequestModel : SignedRequestModel
{
	public string adId { get; set; }

	public string stageAction { get; set; }

	public string destinationUrl { get; set; }

	public StageActionRequestModel(string id, string url, StageActionType stageAction)
	{
	}
}
