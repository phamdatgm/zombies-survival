using UnityEngine;

namespace Adverty.Checks;

public static class Vector3Extension
{
	public static bool InViewportStandard(this Vector3 vector, Camera camera)
	{
		return false;
	}

	public static bool InViewPortStereo(this Vector3 vector, Camera camera)
	{
		return false;
	}

	public static bool InViewportOverlay(this Vector3 vector)
	{
		return false;
	}
}
