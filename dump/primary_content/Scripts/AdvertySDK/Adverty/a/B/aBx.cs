using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Adverty.AdUnit.Renderer;
using Adverty.Communication.Models;
using Adverty.a.D;
using Adverty.a.b;
using UnityEngine;

namespace Adverty.a.B
{
	internal class aBx : aBv<aDd<LoginRequestModel>, LoginRequestModel, LoginResponseModel>
	{
		public struct A
		{
			public string Js;

			public SettingsData JT;

			public LocalizationData Jt;

			public LogSettingsModel JU;
		}

		public static Action<A> Fr;

		public static Action FS;

		[SpecialName]
		protected override string Nn()
		{
			return null;
		}

		protected override void NS(abg P_0)
		{
		}

		protected override void NO(abg P_0)
		{
		}

		public static void rW()
		{
		}

		protected override void NP(LoginResponseModel P_0)
		{
		}
	}
}
namespace Adverty.a.b
{
	internal interface abx
	{
		[SpecialName]
		List<UnitRenderer> NW();

		void Nw(List<UnitRenderer> P_0, Camera P_1);

		void NX(Action<IEnumerable<abi>> P_0);

		void Nx();

		void NY();
	}
}
