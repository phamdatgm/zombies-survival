using System;
using System.Runtime.CompilerServices;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[IgnoredByDeepProfiler]
[UsedByNativeCode]
public struct ProfilerMarker
{
	[IgnoredByDeepProfiler]
	[UsedByNativeCode]
	public struct AutoScope : IDisposable
	{
		[NativeDisableUnsafePtrRestriction]
		internal readonly IntPtr m_Ptr = (IntPtr)0;

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		internal AutoScope(IntPtr markerPtr)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void Dispose()
		{
		}
	}

	[NonSerialized]
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr = (IntPtr)0;

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ProfilerMarker(string name)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public ProfilerMarker(ProfilerCategory category, string name)
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public AutoScope Auto()
	{
		return default;
	}
}
