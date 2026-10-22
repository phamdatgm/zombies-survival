using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Adverty.AdUnit.Renderer;
using Adverty.a.B;
using Adverty.a.D;
using Adverty.a.a;
using Adverty.a.b;
using UnityEngine;

namespace Adverty.a.d
{
	internal class adp : acz, aaj
	{
		private const string LA = "var event = new MouseEvent('click', {{\n                'view': window,\n                'bubbles': true,\n                'cancelable': true,\n                'screenX': {0},\n                'screenY': {1}\n            }});\n            var element = document.elementFromPoint({0}, {1});\n            element.dispatchEvent(event);";

		private IntPtr La;

		private Texture2D LB;

		static adp()
		{
		}

		public adp(aaz P_0)
		{
		}

		protected override void Ob()
		{
		}

		public override void Nh(Vector2 P_0)
		{
		}

		public override void NH()
		{
		}

		public override void Update()
		{
		}

		public override void OB()
		{
		}

		public override void NG()
		{
		}
	}
}
namespace Adverty.a.D
{
	internal abstract class aDp : abx
	{
		[CompilerGenerated]
		private List<UnitRenderer> jq;

		protected Camera jR;

		protected Action<IEnumerable<abi>> jr;

		[SpecialName]
		[CompilerGenerated]
		public List<UnitRenderer> NW()
		{
			return null;
		}

		[SpecialName]
		[CompilerGenerated]
		protected void XJ(List<UnitRenderer> P_0)
		{
		}

		public virtual void Nw(List<UnitRenderer> P_0, Camera P_1)
		{
		}

		public virtual void NX(Action<IEnumerable<abi>> P_0)
		{
		}

		protected void Xj(IEnumerable<abi> P_0)
		{
		}

		public virtual void Nx()
		{
		}

		public virtual void NY()
		{
		}
	}
}
