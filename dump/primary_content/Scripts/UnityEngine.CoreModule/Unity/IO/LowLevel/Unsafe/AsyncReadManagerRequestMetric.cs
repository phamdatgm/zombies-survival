using UnityEngine.Scripting;

namespace Unity.IO.LowLevel.Unsafe;

[RequiredByNativeCode]
public struct AsyncReadManagerRequestMetric
{
	private readonly string AssetName;

	private readonly string FileName;

	private readonly ulong OffsetBytes;

	private readonly ulong SizeBytes;

	private readonly ulong AssetTypeId;

	private readonly ulong CurrentBytesRead;

	private readonly uint BatchReadCount;

	private readonly bool IsBatchRead;

	private readonly ProcessingState State;

	private readonly FileReadType ReadType;

	private readonly Priority PriorityLevel;

	private readonly AssetLoadingSubsystem Subsystem;

	private readonly double RequestTimeMicroseconds;

	private readonly double TimeInQueueMicroseconds;

	private readonly double TotalTimeMicroseconds;
}
