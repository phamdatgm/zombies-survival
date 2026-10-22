using System;
using System.Runtime.CompilerServices;
using Adverty.a.A;
using Adverty.a.C;
using Adverty.a.b;
using UnityEngine;

namespace Adverty.AdUnit.Renderer;

public abstract class UnitRenderer : MonoBehaviour
{
	internal const string gq = "Adverty unit named {0} became visible by camera";

	internal const string gR = "Adverty unit named {0} became not visible by camera";

	protected const string INVALID_MESSAGE_BASE = "Adverty unit named {0} validation error. {1}";

	[CompilerGenerated]
	private static Action<BaseUnit> gr;

	protected BaseUnit owner;

	protected bool isVisible;

	[CompilerGenerated]
	private aAy.A gS;

	[CompilerGenerated]
	private bool gs;

	[CompilerGenerated]
	private aCo gT;

	[CompilerGenerated]
	private abv gt;

	private bool gU;

	[SpecialName]
	[CompilerGenerated]
	internal static void UX(Action<BaseUnit> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal static void Ux(Action<BaseUnit> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	private aAy.A UY()
	{
		return aAy.A.Ir;
	}

	[SpecialName]
	[CompilerGenerated]
	private void Uy(aAy.A P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal bool UZ()
	{
		return false;
	}

	[SpecialName]
	[CompilerGenerated]
	internal void Uz(bool P_0)
	{
	}

	[SpecialName]
	internal int uA()
	{
		return 0;
	}

	[SpecialName]
	internal string ua()
	{
		return null;
	}

	[SpecialName]
	internal bool uB()
	{
		return false;
	}

	[SpecialName]
	internal bool ub()
	{
		return false;
	}

	[SpecialName]
	internal abstract RenderType nG();

	[SpecialName]
	internal abstract Material ng();

	[SpecialName]
	internal abstract void nH(Material P_0);

	[SpecialName]
	internal abstract bool nh();

	internal abstract Vector2 nI();

	[SpecialName]
	[CompilerGenerated]
	internal aCo uC()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void uc(aCo P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal abv uD()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	internal void ud(abv P_0)
	{
	}

	internal virtual void ni(BaseUnit P_0)
	{
	}

	internal abstract void nJ(bool P_0);

	internal abstract bool nj();

	internal abstract void nK();

	internal void UpdateHandleRendering()
	{
	}

	protected void OnWillRenderObject()
	{
	}

	protected void OnBecameVisible()
	{
	}

	protected void OnBecameInvisible()
	{
	}

	protected void Update()
	{
	}

	protected void LateUpdate()
	{
	}

	private void HandleRenderingStart()
	{
	}

	private void uE()
	{
	}

	internal void HandleRenderingOnDisable()
	{
	}

	protected static void RemoveComponent<T>(T component) where T : Component
	{
	}
}
