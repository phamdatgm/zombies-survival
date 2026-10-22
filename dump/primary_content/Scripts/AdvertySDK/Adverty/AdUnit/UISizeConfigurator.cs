using UnityEngine;

namespace Adverty.AdUnit;

public class UISizeConfigurator : SizeConfigurator
{
	private const float jZ = 300f;

	private const float jz = 250f;

	public override void MaintainRatio(GameObject gameObject, ViewData viewData)
	{
	}

	protected override float GetXValue(ViewData viewData, float parentScale)
	{
		return 0f;
	}

	protected override float GetYValue(ViewData viewData, float parentScale)
	{
		return 0f;
	}

	protected override float GetZValue(ViewData viewData, Vector3 vector, float parentScale)
	{
		return 0f;
	}
}
