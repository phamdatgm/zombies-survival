using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

namespace Adverty.DebugMode;

[RequireComponent(typeof(BaseUnit))]
public class ImpVizComponent : DebugComponent
{
	private sealed class A : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int LN;

		private object Ln;

		public float LO;

		public Material Lo;

		public Color LP;

		private float Lp;

		private float LQ;

		private float Lq;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return ZD();
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return ZE();
			}
		}

		[DebuggerHidden]
		public A(int P_0)
		{
		}

		[DebuggerHidden]
		private void Zc()
		{
		}

		void IDisposable.Dispose()
		{
			//ILSpy generated this explicit interface implementation from .override directive in Zc
			this.Zc();
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
		private object ZD()
		{
			return null;
		}

		[DebuggerHidden]
		private void Zd()
		{
		}

		void IEnumerator.Reset()
		{
			//ILSpy generated this explicit interface implementation from .override directive in Zd
			this.Zd();
		}

		[DebuggerHidden]
		private object ZE()
		{
			return null;
		}
	}

	private BaseUnit JO;

	private Coroutine Jo;

	private const string JP = "_BaseColor";

	[SerializeField]
	private Color impressionColor;

	[SerializeField]
	private Color bounceBackColor;

	protected void Awake()
	{
	}

	protected void OnDestroy()
	{
	}

	private void wb(int P_0)
	{
	}

	private void wC(int P_0)
	{
	}

	private static IEnumerator wc(float P_0, Material P_1, Color P_2)
	{
		return null;
	}

	private void wD()
	{
	}
}
