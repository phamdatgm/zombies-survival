namespace UnityEngine;

public class PlayerPrefs
{
	private static bool TrySetInt(string key, int value)
	{
		return false;
	}

	private static bool TrySetSetString(string key, string value)
	{
		return false;
	}

	public static void SetInt(string key, int value)
	{
	}

	public static int GetInt(string key, int defaultValue)
	{
		return 0;
	}

	public static int GetInt(string key)
	{
		return 0;
	}

	public static void SetString(string key, string value)
	{
	}

	public static string GetString(string key, string defaultValue)
	{
		return null;
	}

	public static string GetString(string key)
	{
		return null;
	}

	public static bool HasKey(string key)
	{
		return false;
	}

	public static void DeleteKey(string key)
	{
	}

	public static void DeleteAll()
	{
	}

	public static void Save()
	{
	}
}
