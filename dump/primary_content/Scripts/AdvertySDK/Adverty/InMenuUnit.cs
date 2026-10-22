using Adverty.AdUnit;
using UnityEngine;

namespace Adverty;

public sealed class InMenuUnit : BaseUnit
{
	[SerializeField]
	private InMenuUnitConfiguration configuration;

	public InMenuUnitConfiguration InMenuConfiguration
	{
		get
		{
			return null;
		}
		internal set
		{
		}
	}

	public override UnitConfiguration Configuration => null;

	public override UnitType UnitType => UnitType.InPlay;
}
