using System;
using Unity.Jobs;

namespace UnityEngine.UIElements.UIR;

internal static class JobProcessor
{
	internal static JobHandle ScheduleNudgeJobs(IntPtr buffer, int jobCount)
	{
		return default;
	}

	internal static JobHandle ScheduleConvertMeshJobs(IntPtr buffer, int jobCount)
	{
		return default;
	}

	internal static JobHandle ScheduleCopyClosingMeshJobs(IntPtr buffer, int jobCount)
	{
		return default;
	}

	private static void ScheduleNudgeJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret)
	{
		ret = default;
	}

	private static void ScheduleConvertMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret)
	{
		ret = default;
	}

	private static void ScheduleCopyClosingMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret)
	{
		ret = default;
	}
}
