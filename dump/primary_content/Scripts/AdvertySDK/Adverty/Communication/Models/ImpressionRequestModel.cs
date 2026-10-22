using Adverty.a.C;

namespace Adverty.Communication.Models;

internal class ImpressionRequestModel : SignedRequestModel
{
	public string adId { get; set; }

	public int fovCoverage { get; set; }

	public int blockingOpacity { get; set; }

	public int lightCondition { get; set; }

	public string adPlacementId { get; set; }

	public ImpressionRequestModel(aCk sessionData)
	{
	}
}
