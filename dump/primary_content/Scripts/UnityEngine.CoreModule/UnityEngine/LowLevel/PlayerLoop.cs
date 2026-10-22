using System.Collections.Generic;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[MovedFrom("UnityEngine.Experimental.LowLevel")]
public class PlayerLoop
{
	public static PlayerLoopSystem GetCurrentPlayerLoop()
	{
		return default;
	}

	public static void SetPlayerLoop(PlayerLoopSystem loop)
	{
	}

	private static int PlayerLoopSystemToInternal(PlayerLoopSystem sys, ref List<PlayerLoopSystemInternal> internalSys)
	{
		return 0;
	}

	private static PlayerLoopSystem InternalToPlayerLoopSystem(PlayerLoopSystemInternal[] internalSys, ref int offset)
	{
		return default;
	}

	private static PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal()
	{
		return null;
	}

	private static void SetPlayerLoopInternal(PlayerLoopSystemInternal[] loop)
	{
	}
}
