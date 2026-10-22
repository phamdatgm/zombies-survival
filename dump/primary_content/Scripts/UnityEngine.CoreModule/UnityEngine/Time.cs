namespace UnityEngine;

public class Time
{
	public static float time => 0f;

	public static float deltaTime => 0f;

	public static float fixedTime => 0f;

	public static float unscaledTime => 0f;

	public static float unscaledDeltaTime => 0f;

	public static float fixedDeltaTime => 0f;

	public static float maximumDeltaTime
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public static float timeScale
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public static int frameCount => 0;

	public static float realtimeSinceStartup => 0f;
}
