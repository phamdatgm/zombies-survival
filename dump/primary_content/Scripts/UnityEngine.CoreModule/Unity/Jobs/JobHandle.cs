using System;
using Unity.Collections;

namespace Unity.Jobs;

public struct JobHandle : IEquatable<JobHandle>
{
	internal ulong jobGroup;

	internal int version;

	public void Complete()
	{
	}

	public static void ScheduleBatchedJobs()
	{
	}

	private static void ScheduleBatchedJobsAndComplete(ref JobHandle job)
	{
	}

	public static JobHandle CombineDependencies(NativeArray<JobHandle> jobs)
	{
		return default;
	}

	public static JobHandle CombineDependencies(NativeSlice<JobHandle> jobs)
	{
		return default;
	}

	internal unsafe static JobHandle CombineDependenciesInternalPtr(void* jobs, int count)
	{
		return default;
	}

	public bool Equals(JobHandle other)
	{
		return false;
	}

	private unsafe static void CombineDependenciesInternalPtr_Injected(void* jobs, int count, out JobHandle ret)
	{
		ret = default;
	}
}
