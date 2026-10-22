using System;
using System.Runtime.CompilerServices;
using Adverty.Utility;
using Adverty.a.D;
using Adverty.a.a;
using Adverty.a.d;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace Adverty.a.A
{
	internal class aAl : aai<aAl>
	{
		private abstract class A
		{
			public abstract void nZ();
		}

		private class a : A
		{
			protected static IFactory<GameObject> kX;

			private SessionHolder kx;

			public a(SessionHolder P_0)
			{
			}

			public override void nZ()
			{
			}

			protected virtual void yY()
			{
			}

			protected virtual void yy()
			{
			}
		}

		private class B : A
		{
			private SessionHolder kY;

			public B(SessionHolder P_0)
			{
			}

			public override void nZ()
			{
			}

			protected void yZ()
			{
			}

			protected void yz()
			{
			}
		}

		private class b : A
		{
			public override void nZ()
			{
			}
		}

		[Serializable]
		private sealed class C
		{
			public static readonly C IJ;

			public static UnityAction<Scene> Ij;

			public static UnityAction<Scene, LoadSceneMode> IK;

			public static Action Ik;

			internal void vn(Scene P_0)
			{
			}

			internal void vO(Scene P_0, LoadSceneMode P_1)
			{
			}

			internal void vo()
			{
			}
		}

		private const string cz = "Due to incorrect behavior of some Unity {0} modules Adverty plugin may cause runtime issues.\nPlease use supported Unity versions: 2018.4.0f1+";

		private const string DA = "Initializing Adverty SDK version {0} with API version {1}";

		private const string Da = "Current Unity build with Vulkan target is not supported by Adverty SDK, Adverty SDK is disabled. Please use supported Unity versions: 2019.1.0f1+";

		private const string DB = "Compute shaders is not supported on current device";

		private const string Db = "No API key entered or key is invalid";

		private const string DC = "Adverty session started";

		private const string Dc = "Adverty sandbox session started";

		private const string DD = "Adverty session failed to activate";

		private const string Dd = "Adverty session restarted";

		private const string DE = "Adverty session destroyed";

		private const string De = "Adverty session already active with current set up";

		private const string DF = "Adverty session already terminated";

		private const string Df = "Adverty SDK initialized";

		private const string DG = "Adverty SDK failed to initialize";

		private const string Dg = "Adverty SDK doesn't support .Net 3.5. Please use other scripting runtime.";

		private const string DH = "Provided UserData is invalid";

		private GameObject Dh;

		private adc DI;

		private aDl Di;

		private MonoBehaviorEventsManager DJ;

		private aAm Dj;

		private static bool DK;

		private static SessionHolder Dk;

		[CompilerGenerated]
		private static Action DL;

		[CompilerGenerated]
		private static Action Dl;

		[CompilerGenerated]
		private static Action DM;

		[CompilerGenerated]
		private static Action Dm;

		[CompilerGenerated]
		private static Action DN;

		[CompilerGenerated]
		private static bool Dn;

		[CompilerGenerated]
		private static bool DO;

		[SpecialName]
		[CompilerGenerated]
		internal static void oa(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oB(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void ob(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oC(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oc(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oD(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void od(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oE(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oe(Action P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		internal static void oF(Action P_0)
		{
		}

		static aAl()
		{
		}

		internal static void of()
		{
		}

		internal static void oG(UserData P_0, AdvertyLocalFeatures P_1 = null)
		{
		}

		internal static void og(string P_0, AdvertySettings.Mode P_1, bool P_2, UserData P_3, AdvertyLocalFeatures P_4 = null)
		{
		}

		internal static void oH()
		{
		}

		internal static void oh()
		{
		}

		[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
		private static void oI()
		{
		}

		private static void oi(Scene P_0, Scene P_1)
		{
		}

		private static void Start()
		{
		}

		private static void oJ()
		{
		}

		private static void oj()
		{
		}

		private static void oK()
		{
		}

		private static void CleanStart()
		{
		}

		private static bool ok(string P_0)
		{
			return false;
		}

		private static bool oL()
		{
			return false;
		}

		private static void OnApplicationQuit()
		{
		}

		[SpecialName]
		public static GameObject ol()
		{
			return null;
		}

		[SpecialName]
		public static void oM(GameObject P_0)
		{
		}

		[SpecialName]
		public static SessionHolder om()
		{
			return null;
		}

		[SpecialName]
		public static adc oN()
		{
			return null;
		}

		[SpecialName]
		private static void on(adc P_0)
		{
		}

		[SpecialName]
		public static aDl oO()
		{
			return null;
		}

		[SpecialName]
		private static void oo(aDl P_0)
		{
		}

		[SpecialName]
		public static MonoBehaviorEventsManager oP()
		{
			return null;
		}

		[SpecialName]
		private static void op(MonoBehaviorEventsManager P_0)
		{
		}

		[SpecialName]
		public static aAm oQ()
		{
			return null;
		}

		[SpecialName]
		private static void oq(aAm P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		public static bool oR()
		{
			return false;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void or(bool P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		public static bool oS()
		{
			return false;
		}

		[SpecialName]
		[CompilerGenerated]
		private static void os(bool value)
		{
		}
	}
}
namespace Adverty.a.a
{
	internal interface aal
	{
		[SpecialName]
		[CompilerGenerated]
		void mY(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void my(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void mZ(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void mz(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void NA(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void Na(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void NB(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void Nb(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void NC(Action value);

		[SpecialName]
		[CompilerGenerated]
		void Nc(Action value);

		[SpecialName]
		[CompilerGenerated]
		void ND(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void Nd(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void NE(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void Ne(Action P_0);

		[SpecialName]
		[CompilerGenerated]
		void NF(Action<string> P_0);

		[SpecialName]
		[CompilerGenerated]
		void Nf(Action<string> P_0);

		void Update();

		void NG();

		void Ng(string P_0);

		void NH();

		void Nh(Vector2 P_0);

		void NI();

		void Ni();

		void NJ();

		[SpecialName]
		Texture Nj();
	}
}
