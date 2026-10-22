using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Runtime.CompilerServices;
using Adverty.Communication;
using Adverty.NotifcationArgs;
using Adverty.a.A;
using Adverty.a.B;
using Adverty.a.C;
using Adverty.a.D;
using Adverty.a.a;
using Adverty.a.b;

namespace Adverty.a.D
{
	internal abstract class aDc<mN> : aBy where mN : abh
	{
		private sealed class A : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int LR;

			private object Lr;

			public aDc<mN> LS;

			private float Ls;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return ZF();
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return ZG();
				}
			}

			[DebuggerHidden]
			public A(int P_0)
			{
			}

			[DebuggerHidden]
			private void Ze()
			{
			}

			void IDisposable.Dispose()
			{
				//ILSpy generated this explicit interface implementation from .override directive in Ze
				this.Ze();
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
			private object ZF()
			{
				return null;
			}

			[DebuggerHidden]
			private void Zf()
			{
			}

			void IEnumerator.Reset()
			{
				//ILSpy generated this explicit interface implementation from .override directive in Zf
				this.Zf();
			}

			[DebuggerHidden]
			private object ZG()
			{
				return null;
			}
		}

		private sealed class a
		{
			public abg LT;

			public Action<abg> Lt;

			public Action LU;

			internal void Zg()
			{
			}

			internal void ZH()
			{
			}
		}

		protected const string Ju = "sandbox.";

		private const string JV = "adserver.";

		private const string Jv = "Location";

		[CompilerGenerated]
		private mN JW;

		[CompilerGenerated]
		private int Jw;

		[SpecialName]
		protected abstract string Nn();

		[SpecialName]
		protected static IMockServer wG()
		{
			return null;
		}

		[SpecialName]
		protected string wg()
		{
			return null;
		}

		protected aDc()
		{
		}

		protected aDc(mN P_0)
		{
		}

		protected virtual void Ns(abg P_0, Action<abg> P_1)
		{
		}

		protected virtual void wH(abg P_0, Action<abg> P_1)
		{
		}

		private IEnumerator wh()
		{
			return null;
		}

		protected virtual void wI(abg P_0)
		{
		}

		protected virtual void wi(abg P_0)
		{
		}

		protected static string wJ(WebHeaderCollection P_0)
		{
			return null;
		}

		protected static string wj(WebHeaderCollection P_0)
		{
			return null;
		}

		protected static string wK(string P_0)
		{
			return null;
		}

		protected abstract void NQ();

		protected void wk(Action<abg> P_0)
		{
		}

		protected abstract abg Np();

		protected abstract void Nq(abg P_0);

		protected abstract void NR(abg P_0);

		protected abstract void Nr(abg P_0);

		[SpecialName]
		[CompilerGenerated]
		protected mN wL()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		protected void wl(mN P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		protected int wM()
		{
			return 0;
		}

		[SpecialName]
		[CompilerGenerated]
		private void wm(int P_0)
		{
		}
	}
}
namespace Adverty.a.d
{
	internal class adc : aAt
	{
		[Serializable]
		private sealed class A
		{
			public static readonly A lS;

			public static Func<KeyValuePair<int, adb>, adb> ls;

			public static Func<adb, bool> lT;

			public static Func<KeyValuePair<int, adb>, bool> lt;

			public static Func<KeyValuePair<int, adb>, bool> lU;

			internal adb Zw(KeyValuePair<int, adb> P_0)
			{
				return null;
			}

			internal bool ZX(adb P_0)
			{
				return false;
			}

			internal bool Zx(KeyValuePair<int, adb> P_0)
			{
				return false;
			}

			internal bool ZY(KeyValuePair<int, adb> P_0)
			{
				return false;
			}
		}

		private const string KT = "{0} deactivated";

		[CompilerGenerated]
		private static bool Kt;

		[CompilerGenerated]
		private static aad<adb> KU;

		[CompilerGenerated]
		private static List<int> Ku;

		[CompilerGenerated]
		private static List<BaseUnit> KV;

		[CompilerGenerated]
		private static aDx Kv;

		private aag KW;

		private aag Kw;

		[SpecialName]
		[CompilerGenerated]
		internal static bool xp()
		{
			return false;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void xQ(bool P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static aad<adb> xq()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void xR(aad<adb> P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static List<int> xr()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void xS(List<int> P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static List<BaseUnit> xs()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void xT(List<BaseUnit> P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		private static aDx xt()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void xU(aDx P_0)
		{
		}

		static adc()
		{
		}

		internal adc()
		{
		}

		internal static void xu(BaseUnit P_0)
		{
		}

		internal static void xV(BaseUnit P_0)
		{
		}

		internal void Start()
		{
		}

		internal void xv()
		{
		}

		internal static void xW()
		{
		}

		private static void xw(adb P_0)
		{
		}

		private static void xX()
		{
		}

		private void xx()
		{
		}

		private void xY()
		{
		}

		private void xy()
		{
		}

		private static void xZ()
		{
		}

		private static void xz()
		{
		}

		private static void YA(add P_0)
		{
		}

		public void mt()
		{
		}

		private void Ya(aCu P_0)
		{
		}

		private void YB(aCu P_0)
		{
		}

		private static void Yb(aCu P_0)
		{
		}

		private void YC(aCu P_0)
		{
		}

		private static void Yc(adb P_0, bool P_1)
		{
		}

		private static void YD(BaseUnit P_0)
		{
		}

		private static void Yd(BaseUnit P_0)
		{
		}

		private static void YE(IRenderable P_0)
		{
		}

		private void Ye(abi P_0)
		{
		}

		private void YF(BaseUnit P_0)
		{
		}
	}
}
