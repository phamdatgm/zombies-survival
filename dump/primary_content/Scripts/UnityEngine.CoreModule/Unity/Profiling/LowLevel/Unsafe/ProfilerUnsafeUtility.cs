using System;
using UnityEngine.Scripting;

namespace Unity.Profiling.LowLevel.Unsafe;

[UsedByNativeCode]
[IgnoredByDeepProfiler]
public static class ProfilerUnsafeUtility
{
	internal unsafe static ushort CreateCategory__Unmanaged(byte* name, int nameLen, ProfilerCategoryColor colorIndex)
	{
		return 0;
	}

	public static ProfilerCategoryDescription GetCategoryDescription(ushort categoryId)
	{
		return default;
	}

	public static IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount)
	{
		return (IntPtr)0;
	}

	internal unsafe static IntPtr CreateMarker__Unmanaged(byte* name, int nameLen, ushort categoryId, MarkerFlags flags, int metadataCount)
	{
		return (IntPtr)0;
	}

	internal unsafe static void SetMarkerMetadata__Unmanaged(IntPtr markerPtr, int index, byte* name, int nameLen, byte type, byte unit)
	{
	}

	public static void BeginSample(IntPtr markerPtr)
	{
	}

	public static void EndSample(IntPtr markerPtr)
	{
	}

	internal unsafe static void* CreateCounterValue__Unmanaged(out IntPtr counterPtr, byte* name, int nameLen, ushort categoryId, MarkerFlags flags, byte dataType, byte dataUnit, int dataSize, ProfilerCounterOptions counterOptions)
	{
		counterPtr = default;
		return null;
	}

	internal unsafe static string Utf8ToString(byte* chars, int charsLen)
	{
		return null;
	}

	private static void GetCategoryDescription_Injected(ushort categoryId, out ProfilerCategoryDescription ret)
	{
		ret = default;
	}
}
