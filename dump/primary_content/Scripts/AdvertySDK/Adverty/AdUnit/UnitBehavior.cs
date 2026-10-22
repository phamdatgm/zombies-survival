using System;
using UnityEngine;

namespace Adverty.AdUnit;

[Serializable]
public struct UnitBehavior
{
	[SerializeField]
	public bool AllowInteraction;

	[SerializeField]
	public bool AllowAnimation;

	[SerializeField]
	public bool LazyLoadDisabled;
}
