using System.Threading.Tasks;
using UnityEngine;

namespace Unity.Services.Core;

internal static class UnityThreadUtils
{
	private static int s_UnityThreadId;

	private static TaskScheduler UnityThreadScheduler { set; }

	public static bool IsRunningOnUnityThread => false;

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void CaptureUnityThreadInfo()
	{
	}
}
