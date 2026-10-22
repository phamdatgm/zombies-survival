using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Adverty.AdUnit.Renderer;
using Adverty.a.C;
using Adverty.a.D;
using Adverty.a.b;
using UnityEngine;
using UnityEngine.Rendering;

namespace Adverty.a.E;

internal class aEa : aDp
{
	private struct A
	{
		[CompilerGenerated]
		private Vector2[] MM;

		[SpecialName]
		[CompilerGenerated]
		public Vector2[] zR()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		public void zr(Vector2[] P_0)
		{
		}
	}

	private enum a
	{
		Mm = 0,
		MN = 1,
		Mn = 2,
		MO = 3,
		Mo = 4,
		MP = 5
	}

	private const string LX = "Shaders/VisibilityCheckStencilShader";

	private const string Lx = "ComputeShaders/VisibilityCheckCS";

	private const string LY = "lightTexture";

	private const int Ly = 0;

	private const int LZ = 2449;

	private const int Lz = 4;

	private const float lA = 1f;

	private const string la = "_GrayFactor";

	private const string lB = "textureWorld";

	private const string lb = "_StencilWriteMaskID";

	private const int lC = 4;

	private const int lc = 8;

	private const float lD = 128f;

	private const float ld = 0f;

	private const string lE = "_Temp";

	private const int le = 5;

	private const string lF = "bufferOut";

	private const string lf = "bufferIn";

	private const string lG = "bufferWorld";

	private static Material lg;

	private static ComputeShader lH;

	private static ComputeBuffer[] lh;

	private static CommandBuffer[] lI;

	private static aCd li;

	private static a lJ;

	private aDe[] lj;

	internal aEa()
	{
	}

	public override void NX(Action<IEnumerable<abi>> P_0)
	{
	}

	public override void Nx()
	{
	}

	public override void NY()
	{
	}

	private A Zl(List<UnitRenderer> P_0)
	{
		return default;
	}

	private void ZM()
	{
	}

	private void Zm()
	{
	}

	private void ZN(float[] P_0, bool P_1)
	{
	}

	private static void Zn(List<UnitRenderer> P_0)
	{
	}

	private static void ZO()
	{
	}

	private void Zo()
	{
	}
}
