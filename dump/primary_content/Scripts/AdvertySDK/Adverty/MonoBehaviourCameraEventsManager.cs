using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Adverty.a.a;
using UnityEngine;

namespace Adverty;

[RequireComponent(typeof(Camera))]
internal class MonoBehaviourCameraEventsManager : MonoBehaviour
{
	private sealed class A : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int Im;

		private object IN;

		public MonoBehaviourCameraEventsManager In;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return vV();
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return vW();
			}
		}

		[DebuggerHidden]
		public A(int P_0)
		{
		}

		[DebuggerHidden]
		private void vu()
		{
		}

		void IDisposable.Dispose()
		{
			//ILSpy generated this explicit interface implementation from .override directive in vu
			this.vu();
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
		private object vV()
		{
			return null;
		}

		[DebuggerHidden]
		private void vv()
		{
		}

		void IEnumerator.Reset()
		{
			//ILSpy generated this explicit interface implementation from .override directive in vv
			this.vv();
		}

		[DebuggerHidden]
		private object vW()
		{
			return null;
		}
	}

	[CompilerGenerated]
	private Action dM;

	[CompilerGenerated]
	private aAz dm;

	[CompilerGenerated]
	private aAz dN;

	[SpecialName]
	[CompilerGenerated]
	public void PZ(Action P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public void Pz(Action P_0)
	{
	}

	protected void Awake()
	{
	}

	protected void OnPreRender()
	{
	}

	private IEnumerator pA()
	{
		return null;
	}

	protected void OnDestroy()
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz pa()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void pB(aAz P_0)
	{
	}

	[SpecialName]
	[CompilerGenerated]
	public aAz pb()
	{
		return null;
	}

	[SpecialName]
	[CompilerGenerated]
	private void pC(aAz P_0)
	{
	}
}
