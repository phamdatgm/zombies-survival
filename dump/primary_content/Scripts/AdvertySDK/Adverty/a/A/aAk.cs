using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Adverty.AdDebug;
using Adverty.Native;
using UnityEngine;

namespace Adverty.a.A
{
	internal static class aAk
	{
		public enum A
		{
			II = 0,
			Ii = 1
		}

		[CompilerGenerated]
		private static Action<string> cW;

		public static LinkedList<string> cw;

		private const string cX = "Debug";

		private const string cx = "Warning";

		private const string cY = "Error";

		private const string cy = "ADVERTY:";

		private static bool cZ;

		[SpecialName]
		[CompilerGenerated]
		public static void Os(Action<string> P_0)
		{
		}

		[SpecialName]
		[CompilerGenerated]
		public static void OT(Action<string> P_0)
		{
		}

		static aAk()
		{
		}

		private static bool Ot(A P_0)
		{
			return false;
		}

		private static bool OU(LogLevel P_0)
		{
			return false;
		}

		public static void Ou()
		{
		}

		public static void OV(string P_0, A P_1 = A.Ii, params object[] objs)
		{
		}

		public static void Ov(object P_0, A P_1 = A.Ii)
		{
		}

		public static void OW(object P_0, A P_1 = A.Ii)
		{
		}

		public static void Ow(object P_0, A P_1 = A.Ii)
		{
		}

		private static void OX(object P_0, A P_1, LogLevel P_2)
		{
		}

		private static void Ox(string P_0, LogLevel P_1)
		{
		}

		public static string[] OY(int P_0)
		{
			return null;
		}

		private static void Oy(string P_0, string P_1, LogType P_2)
		{
		}

		private static void OZ(string P_0, string P_1)
		{
		}

		private static void Oz()
		{
		}

		private static string oA(LogLevel P_0)
		{
			return null;
		}
	}
}
namespace Adverty.a.a
{
	internal interface aak
	{
		[SpecialName]
		string mV();

		[SpecialName]
		string mv();

		void mW(Action P_0);

		void mw(Action P_0);

		void mX(Action<string, bool, int, string> P_0);

		NativeIABData mx();
	}
}
