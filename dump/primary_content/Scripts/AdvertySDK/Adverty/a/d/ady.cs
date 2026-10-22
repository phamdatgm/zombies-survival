using System;
using System.Collections.Generic;
using Adverty.AdUnit.Renderer;
using Adverty.a.C;
using Adverty.a.D;
using Adverty.a.b;
using UnityEngine;

namespace Adverty.a.d
{
	internal abstract class ady<mq, mR> : aDp where mq : UnitRenderer where mR : aDf, new()
	{
		[Serializable]
		private sealed class A
		{
			public static readonly A MH;

			public static Predicate<UnitRenderer> Mh;

			internal bool zP(UnitRenderer P_0)
			{
				return false;
			}
		}

		protected const int Lu = 4;

		protected static readonly int LV;

		protected static Resolution Lv;

		protected mR[] LW;

		static ady()
		{
		}

		protected void Zh()
		{
		}

		public override void NX(Action<IEnumerable<abi>> P_0)
		{
		}

		public override void Nx()
		{
		}

		protected abstract Rect Nz(mq P_0);

		protected abstract int nA(mq P_0);

		protected abstract float NZ(mq P_0);

		protected abstract void Ny(Rect[] P_0, mR[] P_1);
	}
}
namespace Adverty.a.D
{
	internal class aDy : aCo
	{
		private const string jw = "Shaders/AdSpriteLitShader";

		private const string jX = "Shaders/AdSpriteUnlitShader";

		private Sprite jx;

		private SpriteUnitRenderer jY;

		public aDy(BaseUnit P_0)
		{
		}

		protected override void nf(Texture P_0)
		{
		}

		private static Sprite Xn(Texture2D P_0)
		{
			return null;
		}
	}
}
