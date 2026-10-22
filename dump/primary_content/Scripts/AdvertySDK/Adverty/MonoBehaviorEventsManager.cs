using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Adverty.a.a;
using UnityEngine;

namespace Adverty;

internal sealed class MonoBehaviorEventsManager : MonoBehaviour
{
	private sealed class A : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int IL;

		private object Il;

		public MonoBehaviorEventsManager IM;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return vT();
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return vU();
			}
		}

		[DebuggerHidden]
		public A(int P_0)
		{
		}

		[DebuggerHidden]
		private void vs()
		{
		}

		void IDisposable.Dispose()
		{
			//ILSpy generated this explicit interface implementation from .override directive in vs
			this.vs();
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		private object vT()
		{
			return null;
		}

		[DebuggerHidden]
		private void vt()
		{
		}

		void IEnumerator.Reset()
		{
			//ILSpy generated this explicit interface implementation from .override directive in vt
			this.vt();
		}

		[DebuggerHidden]
		private object vU()
		{
			return null;
		}
	}

	[CompilerGenerated]
	private Action dD;

	[CompilerGenerated]
	private Action dd;

	[CompilerGenerated]
	private Action dE;

	[CompilerGenerated]
	private Action de;

	[CompilerGenerated]
	private Action<bool> dF;

	[CompilerGenerated]
	private Action<bool> df;

	[CompilerGenerated]
	private static Action<bool> dG;

	[CompilerGenerated]
	private static Action<bool> dg;

	[CompilerGenerated]
	private static Action dH;

	internal static aAz dh;

	private aAz dI;

	private aAz di;

	[CompilerGenerated]
	private static int dJ;

	[CompilerGenerated]
	private aAz dj;

	[CompilerGenerated]
	private aAz dK;

	[CompilerGenerated]
	private aAz dk;

	[CompilerGenerated]
	private aAz dL;

	[CompilerGenerated]
	private aAz dl;

	[SpecialName]
	[CompilerGenerated]
	public void Pi(Action value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void PJ(Action value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void Pj(Action value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void PK(Action value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void Pk(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void PL(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void Pl(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void PM(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void Pm(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void PN(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void Pn(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void PO(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public static void Po(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public static void PP(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public static void Pp(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public static void PQ(Action<bool> P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public static void Pq(Action value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public static void PR(Action value)
	{
	}

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void FixedUpdate()
	{
	}

	private void LateUpdate()
	{
	}

	private void OnApplicationQuit()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnApplicationPause(bool pause)
	{
	}

	private void OnApplicationFocus(bool focus)
	{
	}

	private IEnumerator Pr()
	{
		return null;
	}

	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	public void PS(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	private static int Ps()
	{
		return 0;
	}

	[SpecialName]
	[CompilerGenerated]
	private static void PT(int P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz Pt()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void PU(aAz P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz Pu()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void PV(aAz P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz Pv()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void PW(aAz value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz Pw()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void PX(aAz value)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz Px()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void PY(aAz value)
	{
	}

	[SpecialName]
	public aAz Py()
	{
		return null;
	}
}
