using Adverty.AdUnit;
using UnityEngine;

namespace Adverty;

public sealed class InPlayUnit : BaseUnit
{
	[SerializeField]
	private InPlayUnitConfiguration configuration;

	public InPlayUnitConfiguration InPlayConfiguration
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
