namespace Adverty.Communication.Models;

internal class AdRenderedRequestModel : SignedRequestModel
{
	public string adId { get; set; }

	public AdRenderedRequestModel(string id)
	{
	}
}
