using System;
using System.Runtime.CompilerServices;

namespace Adverty.AdUnit;

[Serializable]
public sealed class InMenuUnitConfiguration : UnitConfiguration
{
	[SpecialName]
	internal override UnitType ne()
	{
		return UnitType.InPlay;
	}

	public InMenuUnitConfiguration()
		: base(RenderType.Mesh)
	{
	}

	public InMenuUnitConfiguration(RenderType renderType)
		: base(RenderType.Mesh)
	{
	}
}
