using System;

namespace CodeStage.AntiCheat.Utils;

internal class ThreadSafeRandom
{
	private static readonly Random Global;

	[ThreadStatic]
	private static Random local;

	public static int Next(int minInclusive, int maxExclusive)
	{
		return 0;
	}

	public static void NextChars(char[] buffer)
	{
	}

	private static void NextChars(Random random, char[] buffer)
	{
	}
}
