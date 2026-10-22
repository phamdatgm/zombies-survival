using UnityEngine;

namespace Adverty.DebugMode;

public static class DebugModeManager
{
	public static void AddComponent<T>(GameObject gameObject) where T : DebugComponent
	{
	}

	public static void RemoveComponent<T>(GameObject gameObject) where T : DebugComponent
	{
	}

	public static void AddComponentToAll<T>() where T : DebugComponent
	{
	}

	public static void RemoveComponentFromAll<T>() where T : DebugComponent
	{
	}
}
