using System;
using System.Collections.Generic;

namespace Adverty;

public class AdvertyLocalFeatures
{
	internal const string DU = "Feature {0} not enabled";

	internal const string Du = "EnabledCustomViewportHandling";

	private readonly Dictionary<string, bool> DV;

	public bool EnabledCustomViewportHandling => false;

	[Obsolete("Adverty SDK supports SRP now. DisableSRPCheck not using anymore.")]
	public bool DisableSRPCheck => false;

	public AdvertyLocalFeatures()
	{
	}

	public AdvertyLocalFeatures(bool enableCustomViewportHandling)
	{
	}

	[Obsolete("Adverty SDK supports SRP now. DisableSRPCheck not using anymore.")]
	public AdvertyLocalFeatures(bool enableCustomViewportHandling, bool disableSRPCheck)
	{
	}

	internal static Dictionary<string, bool> ox(AdvertyLocalFeatures P_0)
	{
		return null;
	}
}
