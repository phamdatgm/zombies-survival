using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Adverty.AdUnit;

[Serializable]
public struct ViewData
{
	[SerializeField]
	public float Size;

	[SerializeField]
	public WidthHeight MatchWidthOrHeight;

	[SerializeField]
	public UnitRatio Ratio;

	[SerializeField]
	public bool DoubleSided;

	[SerializeField]
	private BendSettings bendSettings;

	[SpecialName]
	internal BendSettings Up()
	{
		return null;
	}
}
