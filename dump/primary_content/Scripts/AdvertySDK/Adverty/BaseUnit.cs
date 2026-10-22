using System;
using System.Runtime.CompilerServices;
using Adverty.AdUnit;
using Adverty.AdUnit.Renderer;
using Adverty.Checks.UnitChecks;
using Adverty.NotifcationArgs;
using Adverty.a.A;
using Adverty.a.B;
using Adverty.a.C;
using Adverty.a.a;
using UnityEngine;

namespace Adverty;

public abstract class BaseUnit : MonoBehaviour, IRenderable, IIdentified, IVisible
{
	private bool kP;

	protected UnitRenderer unitRenderer;

	protected ViewPortChecker viewportChecker;

	protected const string ENABLE_MESSAGE = "enabled";

	protected const string DISABLE_MESSAGE = "disabled";

	private const string kp = "Adverty unit named {0} initialized with lazy load";

	private const string kQ = "Adverty unit named {0} initialized";

	protected const string UNIT_FAIL_INITIALIZATION_MESSAGE = "Adverty unit named {0} failed to initialize";

	protected const string UNIT_ENABLED_MESSAGE = "Adverty unit named {0} enabled";

	protected const string UNIT_DISABLED_MESSAGE = "Adverty unit named {0} disabled";

	protected const string UNIT_DESTROYED_MESSAGE = "Adverty unit named {0} destroyed";

	protected const string UNIT_INTERACTED_MESSAGE = "Registered interaction on unit named {0}";

	protected const string UNIT_ALREADY_INTERACTED_WARNING_MESSAGE = "Unit names {0} already registered interaction and didn't finish to proceed it yet.";

	private const float kq = 0.2f;

	internal aaa<IVisible> kR;

	internal Action<IRenderable> kr;

	[CompilerGenerated]
	private Action kS;

	[CompilerGenerated]
	private Action<Vector2> ks;

	internal aCh kT;

	[CompilerGenerated]
	private bool kt;

	private aAy.a kU;

	[CompilerGenerated]
	private aAy.B ku;

	protected bool isInitialized;

	[CompilerGenerated]
	private int kV;

	private aag kv;

	private aBg kW;

	private bool kw;

	public bool IsRendered => false;

	public virtual bool IsVisible => false;

	public Material Material
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public int Id
	{
		[CompilerGenerated]
		get
		{
			return 0;
		}
		[CompilerGenerated]
		set
		{
		}
	}

	public abstract UnitConfiguration Configuration { get; }

	public abstract UnitType UnitType { get; }

	[SpecialName]
	[CompilerGenerated]
	internal void yL(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal void yl(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal void yM(Action<Vector2> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal void ym(Action<Vector2> P_0)
	{
	}

	[SpecialName]
	internal string yN()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	internal bool yn()
	{
		return false;
	}

	[SpecialName]
	[CompilerGenerated]
	internal void yO(bool P_0)
	{
	}

	[SpecialName]
	internal aAy.a yo()
	{
		return aAy.a.IT;
	}

	[SpecialName]
	internal void yP(aAy.a P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	internal aAy.B yp()
	{
		return aAy.B.Iu;
	}

	[SpecialName]
	[CompilerGenerated]
	internal void yQ(aAy.B P_0)
	{
	}

	[SpecialName]
	internal Vector2 yq()
	{
		return default;
	}

	[SpecialName]
	internal aCo yR()
	{
		return null;
	}

	[SpecialName]
	internal UnitRenderer yr()
	{
		return null;
	}

	[SpecialName]
	internal bool yS()
	{
		return false;
	}

	[SpecialName]
	internal void ys(bool P_0)
	{
	}

	internal void yT(bool P_0)
	{
	}

	[SpecialName]
	internal bool yt()
	{
		return false;
	}

	[SpecialName]
	internal void yU(bool P_0)
	{
	}

	[SpecialName]
	private bool yu()
	{
		return false;
	}

	protected void Awake()
	{
	}

	private void yV()
	{
	}

	public void SetRenderer(RenderType renderType)
	{
	}

	internal void yv(Texture P_0, Action P_1, bool P_2 = true)
	{
	}

	protected virtual void Start()
	{
	}

	protected virtual void SubscribeImmediately()
	{
	}

	protected virtual void Subscribe()
	{
	}

	private void yW()
	{
	}

	protected virtual void Unsubscribe()
	{
	}

	protected void Update()
	{
	}

	protected void UpdateActiveState(bool isActive)
	{
	}

	protected void ActivateUnit()
	{
	}

	private void yw()
	{
	}

	protected virtual void OnDisable()
	{
	}

	protected virtual void OnEnable()
	{
	}

	protected virtual void OnDestroy()
	{
	}

	public void Interact()
	{
	}

	public void Interact(Vector2 normalizedPosition)
	{
	}

	private void yX()
	{
	}

	private void yx()
	{
	}
}
