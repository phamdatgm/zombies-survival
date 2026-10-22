using Adverty.AdUnit;

namespace Adverty.Communication.Models;

internal struct UnitData
{
	public int adUnitId { get; private set; } = 0;

	public string adPlacementId { get; private set; } = null;

	public string unitType { get; private set; } = null;

	public int ratioId { get; private set; } = 0;

	public bool allowInteraction { get; private set; } = false;

	public bool allowAnimation { get; private set; } = false;

	public UnitData(BaseUnit unit)
	{
	}

	public UnitData(int adId, UnitConfiguration unitConfiguration)
	{
	}

	private static int GetRatioId(UnitConfiguration unitConfiguration)
	{
		return 0;
	}

	private static string GetUnitTypeString(UnitType unitType)
	{
		return null;
	}
}
