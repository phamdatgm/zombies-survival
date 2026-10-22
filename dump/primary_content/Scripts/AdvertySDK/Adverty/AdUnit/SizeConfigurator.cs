using UnityEngine;

namespace Adverty.AdUnit;

public abstract class SizeConfigurator
{
	private const string gL = "Unknown Unit Ratio value: {0}";

	private const float gl = 1.7777778f;

	private const float gM = 3.88f;

	private const float gm = 0.5f;

	private const float gN = 1.2f;

	protected const float ZERO = 0f;

	protected const float ONE = 1f;

	private static SizeConfigurator gn;

	private static RenderType gO;

	public static void Configurate(GameObject gameObject, ViewData viewData, RenderType renderType)
	{
	}

	public static bool IsSizeSuitsAnyRatio(int width, int height)
	{
		return false;
	}

	public static bool IsSizeSuitsTargetRatio(int width, int height, UnitRatio ratio)
	{
		return false;
	}

	protected static float GetRatioValue(UnitRatio ratio)
	{
		return 0f;
	}

	public abstract void MaintainRatio(GameObject gameObject, ViewData viewData);

	protected abstract float GetXValue(ViewData viewData, float parentScale);

	protected abstract float GetYValue(ViewData viewData, float parentScale);

	protected abstract float GetZValue(ViewData viewData, Vector3 vector, float parentScale);
}
