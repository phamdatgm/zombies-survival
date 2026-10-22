using System.Runtime.CompilerServices;
using Adverty.AdUnit.Renderer;
using Adverty.Communication.Models;
using Adverty.a.D;
using Adverty.a.b;
using UnityEngine;

namespace Adverty.a.B
{
	internal abstract class aBv<mI, mi, mJ> : aBu<mI, mJ> where mI : aDd<mi> where mi : RequestModel where mJ : ResponseModel
	{
		protected override abg Np()
		{
			return null;
		}
	}
}
namespace Adverty.a.b
{
	internal abstract class abv
	{
		private const float ft = 0.01f;

		private Transform fU;

		[CompilerGenerated]
		private Vector3[] fu;

		[CompilerGenerated]
		private static int[] fV;

		[SpecialName]
		[CompilerGenerated]
		public Vector3[] TI()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		protected void Ti(Vector3[] P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static int[] TJ()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void Tj(int[] P_0)
		{
		}

		internal abv(UnitRenderer P_0)
		{
		}

		protected abstract Vector3[] NV(UnitRenderer P_0);

		internal virtual Rect TK(Camera P_0)
		{
			return default;
		}

		internal virtual bool Tk(Camera P_0)
		{
			return false;
		}

		internal int TL(Camera P_0)
		{
			return 0;
		}

		private bool Tl(Camera P_0, Vector3 P_1)
		{
			return false;
		}
	}
}
