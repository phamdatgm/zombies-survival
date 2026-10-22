using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace Unity.IO.LowLevel.Unsafe;

[StructLayout((LayoutKind)0)]
[RequiredByNativeCode]
public class AsyncReadManagerMetricsFilters
{
	internal ulong[] TypeIDs;

	internal ProcessingState[] States;

	internal FileReadType[] ReadTypes;

	internal Priority[] PriorityLevels;

	internal AssetLoadingSubsystem[] Subsystems;
}
