using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

namespace Adverty.a.a;

[DefaultMember("Item")]
internal class aad<mD> : IEnumerable<KeyValuePair<int, mD>>, IEnumerable where mD : class
{
	private sealed class A : IEnumerator<KeyValuePair<int, mD>>, IEnumerator, IDisposable
	{
		private int Iv;

		private KeyValuePair<int, mD> IW;

		public aad<mD> Iw;

		private Dictionary<int, mD>.Enumerator IX;

		private KeyValuePair<int, mD> Ix;

		KeyValuePair<int, mD> IEnumerator<KeyValuePair<int, mD>>.Current
		{
			[DebuggerHidden]
			get
			{
				return WD();
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return WE();
			}
		}

		[DebuggerHidden]
		public A(int P_0)
		{
		}

		[DebuggerHidden]
		private void WC()
		{
		}

		void IDisposable.Dispose()
		{
			//ILSpy generated this explicit interface implementation from .override directive in WC
			this.WC();
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

		private void Wc()
		{
		}

		[DebuggerHidden]
		private KeyValuePair<int, mD> WD()
		{
			return default;
		}

		[DebuggerHidden]
		private void Wd()
		{
		}

		void IEnumerator.Reset()
		{
			//ILSpy generated this explicit interface implementation from .override directive in Wd
			this.Wd();
		}

		[DebuggerHidden]
		private object WE()
		{
			return null;
		}
	}

	private int Er;

	private Dictionary<int, mD> ES;

	public IEnumerator<KeyValuePair<int, mD>> GetEnumerator()
	{
		return null;
	}

	private IEnumerator QT()
	{
		return null;
	}

	IEnumerator IEnumerable.GetEnumerator()
	{
		//ILSpy generated this explicit interface implementation from .override directive in QT
		return this.QT();
	}

	public void Qt(int P_0)
	{
	}

	public int QU(mD P_0)
	{
		return 0;
	}

	public void Qu()
	{
	}

	public bool QV(int P_0)
	{
		return false;
	}

	public bool Qv(mD P_0)
	{
		return false;
	}

	[SpecialName]
	private Dictionary<int, mD> QW()
	{
		return null;
	}

	[SpecialName]
	public mD Qw(int P_0)
	{
		return null;
	}

	[SpecialName]
	public int QX()
	{
		return 0;
	}
}
