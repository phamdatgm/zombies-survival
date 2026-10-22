using UnityEngine;

namespace Adverty.AdUnit;

public class MeshSizeConfigurator : SizeConfigurator
{
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
