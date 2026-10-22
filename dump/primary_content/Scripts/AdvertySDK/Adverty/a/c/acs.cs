using System;
using System.Runtime.CompilerServices;
using AOT;
using Adverty.Native;
using Adverty.a.B;
using Adverty.a.a;
using UnityEngine;

namespace Adverty.a.c
{
	internal class acs : aax
	{
		private sealed class A
		{
			public IntPtr ky;

			internal void ZA()
			{
			}
		}

		private sealed class a
		{
			public IntPtr kZ;

			internal void _003COnPageStarted_003Eb__0()
			{
			}
		}

		public aAz ia;

		public acs(aaz P_0)
			: base(default)
		{
		}

		protected override IWebViewTextureBridge Nm()
		{
			return null;
		}

		[MonoPInvokeCallback(typeof(Action<IntPtr>))]
		private static void WF(IntPtr P_0)
		{
		}

		[MonoPInvokeCallback(typeof(Action<IntPtr>))]
		private static void OnPageStarted(IntPtr ptr)
		{
		}

		private void OnPageStarted()
		{
		}

		private void Wf()
		{
		}

		public override void NN(int[] P_0)
		{
		}
	}
}
namespace Adverty.a.C
{
	internal interface aCs
	{
		[SpecialName]
		[CompilerGenerated]
		void nk(Func<string, bool> P_0);

		[SpecialName]
		[CompilerGenerated]
		void nL(Func<string, bool> P_0);

		[SpecialName]
		[CompilerGenerated]
		void nl(Action<float> P_0);

		[SpecialName]
		[CompilerGenerated]
		void nM(Action<float> P_0);

		void nm();

		void nN();

		void nn(Vector2 P_0);
	}
}
