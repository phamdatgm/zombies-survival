using System;
using UnityEngine;

namespace Adverty.Extensions;

public static class MeshExtension
{
	[Serializable]
	private sealed class A
	{
		public static readonly A Jm;

		public static Func<Vector3, bool> JN;

		public static Func<Vector3, bool> Jn;

		internal bool wa(Vector3 P_0)
		{
			return false;
		}

		internal bool wB(Vector3 P_0)
		{
			return false;
		}
	}

	public static bool IsMeshDoubleSided(this Mesh mesh)
	{
		return false;
	}
}
