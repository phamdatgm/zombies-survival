using System;
using System.Runtime.CompilerServices;
using Adverty.a.C;
using UnityEngine;

namespace Adverty.AdUnit;

[Serializable]
public abstract class UnitConfiguration
{
	[SerializeField]
	public ViewData ViewData;

	[SerializeField]
	[Obsolete("Deprecated")]
	public SceneContext SceneContext;

	[SerializeField]
	public UnitBehavior Behavior;

	[SerializeField]
	private ShaderType shaderType;

	[SerializeField]
	private RenderType renderType;

	public WidthHeight MatchWidthOrHeight => WidthHeight.Width;

	public ShaderType ShaderType
	{
		get
		{
			return ShaderType.Unlit;
		}
		set
		{
		}
	}

	public UnitRatio Ratio => UnitRatio.Box;

	public RenderType RenderType => RenderType.Mesh;

	[SpecialName]
	internal bool Uo()
	{
		return false;
	}

	[SpecialName]
	internal abstract UnitType ne();

	internal bool UP(aCv P_0)
	{
		return false;
	}

	protected UnitConfiguration(RenderType renderType)
	{
	}
}
