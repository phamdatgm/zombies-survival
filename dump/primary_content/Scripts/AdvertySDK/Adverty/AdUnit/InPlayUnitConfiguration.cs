using System;
using System.Runtime.CompilerServices;

namespace Adverty.AdUnit;

[Serializable]
public class InPlayUnitConfiguration : UnitConfiguration
{
	[SpecialName]
	internal override UnitType ne()
	{
		return UnitType.InPlay;
	}

	public InPlayUnitConfiguration()
		: base(RenderType.Mesh)
	{
	}

	public InPlayUnitConfiguration(RenderType renderType)
		: base(RenderType.Mesh)
	{
	}
}
