using System.Collections.Generic;

namespace Adverty.Communication.Models;

internal class AdRequestModel : SignedRequestModel
{
	public UnitData[] adUnits { get; private set; }

	public HardwareModel hardwareDescription { get; private set; }

	public Dictionary<string, string> userDescription { get; private set; }

	public string sdkVersion { get; private set; }

	public AdRequestModel(UnitData[] unitModels)
	{
	}
}
