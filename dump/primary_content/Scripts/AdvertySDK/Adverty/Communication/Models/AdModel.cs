using Adverty.a.C;

namespace Adverty.Communication.Models;

internal struct AdModel
{
	public int adUnitId { get; set; }

	public string adId { get; set; }

	public AdStageData[] stages { get; set; }

	public bool IsEmpty()
	{
		return false;
	}

	public aCg ToAdData()
	{
		return null;
	}
}
