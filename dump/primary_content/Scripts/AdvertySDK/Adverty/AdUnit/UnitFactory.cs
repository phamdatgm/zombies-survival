using UnityEngine;

namespace Adverty.AdUnit;

public static class UnitFactory
{
	private const string Gw = "Impossible to set texture to {0} render type";

	private const string GX = "Impossible to set mesh to {0} render type";

	private const string Gx = "Default texture did not pass validation";

	private const string GY = "AdUnit-{0}";

	private static int Gy;

	private const float GZ = 100f;

	private const uint Gz = 0u;

	private static Vector2 gA;

	static UnitFactory()
	{
	}

	public static GameObject Create(UnitConfiguration config)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, string gameObjectName)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, Mesh mesh)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, Mesh mesh, string gameObjectName)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, Texture2D defaultTexture)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, Texture2D defaultTexture, string gameObjectName)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, Sprite defaultSprite)
	{
		return null;
	}

	public static GameObject Create(UnitConfiguration config, Sprite defaultSprite, string gameObjectName)
	{
		return null;
	}
}
