namespace Adverty.Communication.Models;

internal class SignedRequestModel : RequestModel
{
	public string accessToken { get; set; }

	public string applicationType { get; set; }
}
