namespace UnityEngine;

internal class CameraRaycastHelper
{
	internal static GameObject RaycastTry(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	internal static GameObject RaycastTry2D(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	private static GameObject RaycastTry_Injected(Camera cam, ref Ray ray, float distance, int layerMask)
	{
		return null;
	}

	private static GameObject RaycastTry2D_Injected(Camera cam, ref Ray ray, float distance, int layerMask)
	{
		return null;
	}
}
