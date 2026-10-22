using System;
using UnityEngine.Scripting;

namespace Unity.Jobs.LowLevel.Unsafe;

public static class JobsUtility
{
	public unsafe struct JobScheduleParameters(void* i_jobData, IntPtr i_reflectionData, JobHandle i_dependency, ScheduleMode i_scheduleMode)
	{
		public JobHandle Dependency = default;

		public int ScheduleMode = 0;

		public IntPtr ReflectionData = (IntPtr)0;

		public IntPtr JobDataPtr = (IntPtr)0;
	}

	internal delegate void PanicFunction_();

	internal static PanicFunction_ PanicFunction;

	public static bool GetWorkStealingRange(ref JobRanges ranges, int jobIndex, out int beginIndex, out int endIndex)
	{
		beginIndex = default;
		endIndex = default;
		return false;
	}

	public static JobHandle ScheduleParallelFor(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount)
	{
		return default;
	}

	private static IntPtr CreateJobReflectionData(Type wrapperJobType, Type userJobType, object managedJobFunction0, object managedJobFunction1, object managedJobFunction2)
	{
		return (IntPtr)0;
	}

	public static IntPtr CreateJobReflectionData(Type type, object managedJobFunction0, object managedJobFunction1 = null, object managedJobFunction2 = null)
	{
		return (IntPtr)0;
	}

	[RequiredByNativeCode]
	private static void InvokePanicFunction()
	{
	}

	private static void ScheduleParallelFor_Injected(ref JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount, out JobHandle ret)
	{
		ret = default;
	}
}
