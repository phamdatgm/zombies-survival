using System.Runtime.CompilerServices;

namespace UnityEngine;

public sealed class Screen
{
	public static int width => 0;

	public static int height => 0;

	public static float dpi => 0f;

	public static ScreenOrientation orientation => ScreenOrientation.Unknown;

	public static int sleepTimeout
	{
		set
		{
		}
	}

	public static Resolution currentResolution => default;

	public static bool fullScreen
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	private static ScreenOrientation GetScreenOrientation()
	{
		return ScreenOrientation.Unknown;
	}

	[SpecialName]
	private static void get_currentResolution_Injected(out Resolution ret)
	{
		ret = default;
	}
}
