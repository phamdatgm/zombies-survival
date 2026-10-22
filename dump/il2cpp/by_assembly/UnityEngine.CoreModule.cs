// Namespace: 
internal class <Module> // TypeDefIndex: 5303
{}


// Namespace: AOT
[Usage(64, AllowMultiple = True)]
public class MonoPInvokeCallbackAttribute : Attribute // TypeDefIndex: 5304
{
	// Methods

	// RVA: 0x136500C Offset: 0x136100C VA: 0x136500C
	public void .ctor(Type type) { }
}


// Namespace: UnityEngineInternal
internal enum LightmapType // TypeDefIndex: 5305
{
	// Fields
	public int value__; // 0x0
	public const LightmapType NoLightmap = -1;
	public const LightmapType StaticLightmap = 0;
	public const LightmapType DynamicLightmap = 1;
}


// Namespace: UnityEngineInternal
[Il2CppEagerStaticClassConstruction]
public struct MathfInternal // TypeDefIndex: 5306
{
	// Fields
	public static float FloatMinNormal; // 0x0
	public static float FloatMinDenormal; // 0x4
	public static bool IsFlushToZeroEnabled; // 0x8

	// Methods

	// RVA: 0x1365014 Offset: 0x1361014 VA: 0x1365014
	private static void .cctor() { }
}


// Namespace: UnityEngineInternal
public class GenericStack : Stack // TypeDefIndex: 5307
{
	// Methods

	// RVA: 0x13650AC Offset: 0x13610AC VA: 0x13650AC
	public void .ctor() { }
}


// Namespace: Unity.Jobs
public interface IJob // TypeDefIndex: 5308
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Execute();
}


// Namespace: 
internal sealed class IJobExtensions.JobStruct.ExecuteJobFunction<T> : MulticastDelegate // TypeDefIndex: 5309
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC15E34 Offset: 0xC11E34 VA: 0xC15E34
	|-IJobExtensions.JobStruct.ExecuteJobFunction<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC15ED4 Offset: 0xC11ED4 VA: 0xC15ED4
	|-IJobExtensions.JobStruct.ExecuteJobFunction<__Il2CppFullySharedGenericStructType>.Invoke
	*/
}


// Namespace: 
internal struct IJobExtensions.JobStruct<T> // TypeDefIndex: 5310
{
	// Fields
	internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	internal static void Initialize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26D90 Offset: 0xC22D90 VA: 0xC26D90
	|-IJobExtensions.JobStruct<__Il2CppFullySharedGenericStructType>.Initialize
	*/

	// RVA: -1 Offset: -1
	public static void Execute(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26FA4 Offset: 0xC22FA4 VA: 0xC26FA4
	|-IJobExtensions.JobStruct<__Il2CppFullySharedGenericStructType>.Execute
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC270A0 Offset: 0xC230A0 VA: 0xC270A0
	|-IJobExtensions.JobStruct<__Il2CppFullySharedGenericStructType>..cctor
	*/
}


// Namespace: Unity.Jobs
[Extension]
public static class IJobExtensions // TypeDefIndex: 5311
{
	// Methods

	// RVA: -1 Offset: -1
	public static void EarlyJobInit<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8D14C Offset: 0xB8914C VA: 0xB8D14C
	|-IJobExtensions.EarlyJobInit<__Il2CppFullySharedGenericStructType>
	*/
}


// Namespace: Unity.Jobs
public interface IJobParallelFor // TypeDefIndex: 5312
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Execute(int index);
}


// Namespace: 
public sealed class IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<T> : MulticastDelegate // TypeDefIndex: 5313
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC15EE8 Offset: 0xC11EE8 VA: 0xC15EE8
	|-IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(ref T data, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC15F88 Offset: 0xC11F88 VA: 0xC15F88
	|-IJobParallelForExtensions.ParallelForJobStruct.ExecuteJobFunction<__Il2CppFullySharedGenericStructType>.Invoke
	*/
}


// Namespace: 
internal struct IJobParallelForExtensions.ParallelForJobStruct<T> // TypeDefIndex: 5314
{
	// Fields
	internal static readonly BurstLike.SharedStatic<IntPtr> jobReflectionData; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	internal static void Initialize() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC413DC Offset: 0xC3D3DC VA: 0xC413DC
	|-IJobParallelForExtensions.ParallelForJobStruct<__Il2CppFullySharedGenericStructType>.Initialize
	*/

	// RVA: -1 Offset: -1
	public static void Execute(ref T jobData, IntPtr additionalPtr, IntPtr bufferRangePatchData, ref JobRanges ranges, int jobIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC415FC Offset: 0xC3D5FC VA: 0xC415FC
	|-IJobParallelForExtensions.ParallelForJobStruct<__Il2CppFullySharedGenericStructType>.Execute
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC41770 Offset: 0xC3D770 VA: 0xC41770
	|-IJobParallelForExtensions.ParallelForJobStruct<__Il2CppFullySharedGenericStructType>..cctor
	*/
}


// Namespace: Unity.Jobs
[Extension]
public static class IJobParallelForExtensions // TypeDefIndex: 5315
{
	// Methods

	// RVA: -1 Offset: -1
	private static IntPtr GetReflectionData<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8D194 Offset: 0xB89194 VA: 0xB8D194
	|-IJobParallelForExtensions.GetReflectionData<__Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static JobHandle Schedule<T>(T jobData, int arrayLength, int innerloopBatchCount, JobHandle dependsOn) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8D220 Offset: 0xB89220 VA: 0xB8D220
	|-IJobParallelForExtensions.Schedule<__Il2CppFullySharedGenericStructType>
	*/
}


// Namespace: Unity.Jobs
public struct JobHandle : IEquatable<JobHandle> // TypeDefIndex: 5316
{
	// Fields
	internal ulong jobGroup; // 0x0
	internal int version; // 0x8

	// Methods

	// RVA: 0x13650B4 Offset: 0x13610B4 VA: 0x13650B4
	public void Complete() { }

	// RVA: 0x1365140 Offset: 0x1361140 VA: 0x1365140
	public static void ScheduleBatchedJobs() { }

	// RVA: 0x1365104 Offset: 0x1361104 VA: 0x1365104
	private static void ScheduleBatchedJobsAndComplete(ref JobHandle job) { }

	// RVA: 0x1365168 Offset: 0x1361168 VA: 0x1365168
	public static JobHandle CombineDependencies(NativeArray<JobHandle> jobs) { }

	// RVA: 0x1365224 Offset: 0x1361224 VA: 0x1365224
	public static JobHandle CombineDependencies(NativeSlice<JobHandle> jobs) { }

	// RVA: 0x13651C8 Offset: 0x13611C8 VA: 0x13651C8
	internal static JobHandle CombineDependenciesInternalPtr(void* jobs, int count) { }

	// RVA: 0x1365310 Offset: 0x1361310 VA: 0x1365310 Slot: 4
	public bool Equals(JobHandle other) { }

	// RVA: 0x13652BC Offset: 0x13612BC VA: 0x13652BC
	private static void CombineDependenciesInternalPtr_Injected(void* jobs, int count, out JobHandle ret) { }
}


// Namespace: Unity.Jobs.LowLevel.Unsafe
public struct JobRanges // TypeDefIndex: 5317
{
	// Fields
	internal int BatchSize; // 0x0
	internal int NumJobs; // 0x4
	public int TotalIterationCount; // 0x8
	internal IntPtr StartEndIndex; // 0x10
}


// Namespace: Unity.Jobs.LowLevel.Unsafe
public enum ScheduleMode // TypeDefIndex: 5318
{
	// Fields
	public int value__; // 0x0
	public const ScheduleMode Run = 0;
	[Obsolete("Batched is obsolete, use Parallel or Single depending on job type. (UnityUpgradable) -> Parallel", False)]
	public const ScheduleMode Batched = 1;
	public const ScheduleMode Parallel = 1;
	public const ScheduleMode Single = 2;
}


// Namespace: 
public struct JobsUtility.JobScheduleParameters // TypeDefIndex: 5319
{
	// Fields
	public JobHandle Dependency; // 0x0
	public int ScheduleMode; // 0x10
	public IntPtr ReflectionData; // 0x18
	public IntPtr JobDataPtr; // 0x20

	// Methods

	// RVA: 0x1365574 Offset: 0x1361574 VA: 0x1365574
	public void .ctor(void* i_jobData, IntPtr i_reflectionData, JobHandle i_dependency, ScheduleMode i_scheduleMode) { }
}


// Namespace: 
internal sealed class JobsUtility.PanicFunction_ : MulticastDelegate // TypeDefIndex: 5320
{
	// Methods

	// RVA: 0x13655AC Offset: 0x13615AC VA: 0x13655AC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1365634 Offset: 0x1361634 VA: 0x1365634 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: Unity.Jobs.LowLevel.Unsafe
public static class JobsUtility // TypeDefIndex: 5321
{
	// Fields
	internal static JobsUtility.PanicFunction_ PanicFunction; // 0x0

	// Methods

	// RVA: 0x1365320 Offset: 0x1361320 VA: 0x1365320
	public static bool GetWorkStealingRange(ref JobRanges ranges, int jobIndex, out int beginIndex, out int endIndex) { }

	// RVA: 0x136537C Offset: 0x136137C VA: 0x136537C
	public static JobHandle ScheduleParallelFor(ref JobsUtility.JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount) { }

	// RVA: 0x1365444 Offset: 0x1361444 VA: 0x1365444
	private static IntPtr CreateJobReflectionData(Type wrapperJobType, Type userJobType, object managedJobFunction0, object managedJobFunction1, object managedJobFunction2) { }

	// RVA: 0x13654B0 Offset: 0x13614B0 VA: 0x13654B0
	public static IntPtr CreateJobReflectionData(Type type, object managedJobFunction0, object managedJobFunction1, object managedJobFunction2) { }

	[RequiredByNativeCode]
	// RVA: 0x1365510 Offset: 0x1361510 VA: 0x1365510
	private static void InvokePanicFunction() { }

	// RVA: 0x13653E8 Offset: 0x13613E8 VA: 0x13653E8
	private static void ScheduleParallelFor_Injected(ref JobsUtility.JobScheduleParameters parameters, int arrayLength, int innerloopBatchCount, out JobHandle ret) { }
}


// Namespace: Unity.IL2CPP.CompilerServices
[Usage(12, Inherited = False, AllowMultiple = False)]
internal class Il2CppEagerStaticClassConstructionAttribute : Attribute // TypeDefIndex: 5322
{
	// Methods

	// RVA: 0x1365648 Offset: 0x1361648 VA: 0x1365648
	public void .ctor() { }
}


// Namespace: Unity.Profiling
[RequiredByNativeCode]
[Usage(76, AllowMultiple = False)]
public sealed class IgnoredByDeepProfilerAttribute : Attribute // TypeDefIndex: 5323
{
	// Methods

	// RVA: 0x1365650 Offset: 0x1361650 VA: 0x1365650
	public void .ctor() { }
}


// Namespace: Unity.Profiling
[UsedByNativeCode]
public struct ProfilerCategory // TypeDefIndex: 5324
{
	// Fields
	private readonly ushort m_CategoryId; // 0x0

	// Properties
	public string Name { get; }
	public static ProfilerCategory Scripts { get; }

	// Methods

	// RVA: 0x1365658 Offset: 0x1361658 VA: 0x1365658
	internal void .ctor(ushort category) { }

	// RVA: 0x1365660 Offset: 0x1361660 VA: 0x1365660
	public string get_Name() { }

	// RVA: 0x136585C Offset: 0x136185C VA: 0x136585C Slot: 3
	public override string ToString() { }

	// RVA: 0x1365860 Offset: 0x1361860 VA: 0x1365860
	public static ProfilerCategory get_Scripts() { }

	// RVA: 0x1365868 Offset: 0x1361868 VA: 0x1365868
	public static ushort op_Implicit(ProfilerCategory category) { }
}


// Namespace: Unity.Profiling
public enum ProfilerCategoryColor // TypeDefIndex: 5325
{
	// Fields
	public ushort value__; // 0x0
	public const ProfilerCategoryColor Render = 0;
	public const ProfilerCategoryColor Scripts = 1;
	public const ProfilerCategoryColor BurstJobs = 2;
	public const ProfilerCategoryColor Other = 3;
	public const ProfilerCategoryColor Physics = 4;
	public const ProfilerCategoryColor Animation = 5;
	public const ProfilerCategoryColor Audio = 6;
	public const ProfilerCategoryColor AudioJob = 7;
	public const ProfilerCategoryColor AudioUpdateJob = 8;
	public const ProfilerCategoryColor Lighting = 9;
	public const ProfilerCategoryColor GC = 10;
	public const ProfilerCategoryColor VSync = 11;
	public const ProfilerCategoryColor Memory = 12;
	public const ProfilerCategoryColor Internal = 13;
	public const ProfilerCategoryColor UI = 14;
	public const ProfilerCategoryColor Build = 15;
	public const ProfilerCategoryColor Input = 16;
}


// Namespace: 
[IgnoredByDeepProfiler]
[UsedByNativeCode]
public struct ProfilerMarker.AutoScope : IDisposable // TypeDefIndex: 5326
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr; // 0x0

	// Methods

	// RVA: 0x13659D4 Offset: 0x13619D4 VA: 0x13659D4
	internal void .ctor(IntPtr markerPtr) { }

	// RVA: 0x1365A70 Offset: 0x1361A70 VA: 0x1365A70 Slot: 4
	public void Dispose() { }
}


// Namespace: Unity.Profiling
[IgnoredByDeepProfiler]
[UsedByNativeCode]
public struct ProfilerMarker // TypeDefIndex: 5327
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr; // 0x0

	// Methods

	// RVA: 0x136586C Offset: 0x136186C VA: 0x136586C
	public void .ctor(string name) { }

	// RVA: 0x136591C Offset: 0x136191C VA: 0x136591C
	public void .ctor(ProfilerCategory category, string name) { }

	// RVA: 0x136597C Offset: 0x136197C VA: 0x136597C
	public ProfilerMarker.AutoScope Auto() { }
}


// Namespace: Unity.Profiling
[Flags]
public enum ProfilerCounterOptions // TypeDefIndex: 5328
{
	// Fields
	public ushort value__; // 0x0
	public const ProfilerCounterOptions None = 0;
	public const ProfilerCounterOptions FlushOnEndOfFrame = 2;
	public const ProfilerCounterOptions ResetToZeroOnFlush = 4;
}


// Namespace: Unity.Profiling
public struct DebugScreenCapture // TypeDefIndex: 5329
{
	// Fields
	[CompilerGenerated]
	private NativeArray<byte> <RawImageDataReference>k__BackingField; // 0x0
	[CompilerGenerated]
	private TextureFormat <ImageFormat>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Width>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <Height>k__BackingField; // 0x18

	// Properties
	public NativeArray<byte> RawImageDataReference { set; }
	public TextureFormat ImageFormat { set; }
	public int Width { set; }
	public int Height { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1365B0C Offset: 0x1361B0C VA: 0x1365B0C
	public void set_RawImageDataReference(NativeArray<byte> value) { }

	[CompilerGenerated]
	// RVA: 0x1365B14 Offset: 0x1361B14 VA: 0x1365B14
	public void set_ImageFormat(TextureFormat value) { }

	[CompilerGenerated]
	// RVA: 0x1365B1C Offset: 0x1361B1C VA: 0x1365B1C
	public void set_Width(int value) { }

	[CompilerGenerated]
	// RVA: 0x1365B24 Offset: 0x1361B24 VA: 0x1365B24
	public void set_Height(int value) { }
}


// Namespace: Unity.Profiling.LowLevel
[Flags]
public enum MarkerFlags // TypeDefIndex: 5330
{
	// Fields
	public ushort value__; // 0x0
	public const MarkerFlags Default = 0;
	public const MarkerFlags Script = 2;
	public const MarkerFlags ScriptInvoke = 32;
	public const MarkerFlags ScriptDeepProfiler = 64;
	public const MarkerFlags AvailabilityEditor = 4;
	public const MarkerFlags AvailabilityNonDevelopment = 8;
	public const MarkerFlags Warning = 16;
	public const MarkerFlags Counter = 128;
	public const MarkerFlags SampleGPU = 256;
}


// Namespace: Unity.Profiling.LowLevel.Unsafe
public struct ProfilerCategoryDescription // TypeDefIndex: 5331
{
	// Fields
	public readonly ushort Id; // 0x0
	public readonly ushort Flags; // 0x2
	public readonly Color32 Color; // 0x4
	private readonly int reserved0; // 0x8
	public readonly int NameUtf8Len; // 0xC
	public readonly byte* NameUtf8; // 0x10
}


// Namespace: Unity.Profiling.LowLevel.Unsafe
[UsedByNativeCode]
[IgnoredByDeepProfiler]
public static class ProfilerUnsafeUtility // TypeDefIndex: 5332
{
	// Methods

	// RVA: 0x1365B2C Offset: 0x1361B2C VA: 0x1365B2C
	internal static ushort CreateCategory__Unmanaged(byte* name, int nameLen, ProfilerCategoryColor colorIndex) { }

	// RVA: 0x13656E0 Offset: 0x13616E0 VA: 0x13656E0
	public static ProfilerCategoryDescription GetCategoryDescription(ushort categoryId) { }

	// RVA: 0x13658C0 Offset: 0x13618C0 VA: 0x13658C0
	public static IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount) { }

	// RVA: 0x1365BC4 Offset: 0x1361BC4 VA: 0x1365BC4
	internal static IntPtr CreateMarker__Unmanaged(byte* name, int nameLen, ushort categoryId, MarkerFlags flags, int metadataCount) { }

	// RVA: 0x1365C30 Offset: 0x1361C30 VA: 0x1365C30
	internal static void SetMarkerMetadata__Unmanaged(IntPtr markerPtr, int index, byte* name, int nameLen, byte type, byte unit) { }

	// RVA: 0x1365A34 Offset: 0x1361A34 VA: 0x1365A34
	public static void BeginSample(IntPtr markerPtr) { }

	// RVA: 0x1365AD0 Offset: 0x1361AD0 VA: 0x1365AD0
	public static void EndSample(IntPtr markerPtr) { }

	// RVA: 0x1365CA4 Offset: 0x1361CA4 VA: 0x1365CA4
	internal static void* CreateCounterValue__Unmanaged(out IntPtr counterPtr, byte* name, int nameLen, ushort categoryId, MarkerFlags flags, byte dataType, byte dataUnit, int dataSize, ProfilerCounterOptions counterOptions) { }

	// RVA: 0x1365770 Offset: 0x1361770 VA: 0x1365770
	internal static string Utf8ToString(byte* chars, int charsLen) { }

	// RVA: 0x1365B80 Offset: 0x1361B80 VA: 0x1365B80
	private static void GetCategoryDescription_Injected(ushort categoryId, out ProfilerCategoryDescription ret) { }
}


// Namespace: Unity.Profiling.Memory
public class MemorySnapshotMetadata // TypeDefIndex: 5333
{
	// Fields
	[CompilerGenerated]
	private string <Description>k__BackingField; // 0x10
	[CompilerGenerated]
	private byte[] <Data>k__BackingField; // 0x18

	// Properties
	public string Description { get; set; }
	internal byte[] Data { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1365D40 Offset: 0x1361D40 VA: 0x1365D40
	public string get_Description() { }

	[CompilerGenerated]
	// RVA: 0x1365D48 Offset: 0x1361D48 VA: 0x1365D48
	public void set_Description(string value) { }

	[CompilerGenerated]
	// RVA: 0x1365D50 Offset: 0x1361D50 VA: 0x1365D50
	internal byte[] get_Data() { }

	// RVA: 0x1365D58 Offset: 0x1361D58 VA: 0x1365D58
	public void .ctor() { }
}


// Namespace: Unity.Profiling.Memory
public static class MemoryProfiler // TypeDefIndex: 5334
{
	// Fields
	[CompilerGenerated]
	private static Action<string, bool> m_SnapshotFinished; // 0x0
	[CompilerGenerated]
	private static Action<string, bool, DebugScreenCapture> m_SaveScreenshotToDisk; // 0x8
	[CompilerGenerated]
	private static Action<MemorySnapshotMetadata> CreatingMetadata; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1365D60 Offset: 0x1361D60 VA: 0x1365D60
	private static byte[] PrepareMetadata() { }

	// RVA: 0x1365F5C Offset: 0x1361F5C VA: 0x1365F5C
	internal static int WriteIntToByteArray(byte[] array, int offset, int value) { }

	// RVA: 0x1365FE8 Offset: 0x1361FE8 VA: 0x1365FE8
	internal static int WriteStringToByteArray(byte[] array, int offset, string value) { }

	[RequiredByNativeCode]
	// RVA: 0x13660D8 Offset: 0x13620D8 VA: 0x13660D8
	private static void FinalizeSnapshot(string path, bool result) { }

	[RequiredByNativeCode]
	// RVA: 0x1366158 Offset: 0x1362158 VA: 0x1366158
	private static void SaveScreenshotToDisk(string path, bool result, IntPtr pixelsPtr, int pixelsCount, TextureFormat format, int width, int height) { }
}


// Namespace: Unity.IO.LowLevel.Unsafe
[RequiredByNativeCode]
public enum FileState // TypeDefIndex: 5335
{
	// Fields
	public int value__; // 0x0
	public const FileState Absent = 0;
	public const FileState Exists = 1;
}


// Namespace: Unity.IO.LowLevel.Unsafe
public enum AssetLoadingSubsystem // TypeDefIndex: 5336
{
	// Fields
	public int value__; // 0x0
	public const AssetLoadingSubsystem Other = 0;
	public const AssetLoadingSubsystem Texture = 1;
	public const AssetLoadingSubsystem VirtualTexture = 2;
	public const AssetLoadingSubsystem Mesh = 3;
	public const AssetLoadingSubsystem Audio = 4;
	public const AssetLoadingSubsystem Scripts = 5;
	public const AssetLoadingSubsystem EntitiesScene = 6;
	public const AssetLoadingSubsystem EntitiesStreamBinaryReader = 7;
	public const AssetLoadingSubsystem FileInfo = 8;
	public const AssetLoadingSubsystem ContentLoading = 9;
}


// Namespace: Unity.IO.LowLevel.Unsafe
[RequiredByNativeCode]
public enum Priority // TypeDefIndex: 5337
{
	// Fields
	public int value__; // 0x0
	public const Priority PriorityLow = 0;
	public const Priority PriorityHigh = 1;
}


// Namespace: Unity.IO.LowLevel.Unsafe
public enum ProcessingState // TypeDefIndex: 5338
{
	// Fields
	public int value__; // 0x0
	public const ProcessingState Unknown = 0;
	public const ProcessingState InQueue = 1;
	public const ProcessingState Reading = 2;
	public const ProcessingState Completed = 3;
	public const ProcessingState Failed = 4;
	public const ProcessingState Canceled = 5;
}


// Namespace: Unity.IO.LowLevel.Unsafe
public enum FileReadType // TypeDefIndex: 5339
{
	// Fields
	public int value__; // 0x0
	public const FileReadType Sync = 0;
	public const FileReadType Async = 1;
}


// Namespace: Unity.IO.LowLevel.Unsafe
[RequiredByNativeCode]
public struct AsyncReadManagerRequestMetric // TypeDefIndex: 5340
{
	// Fields
	[CompilerGenerated]
	private readonly string <AssetName>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly string <FileName>k__BackingField; // 0x8
	[CompilerGenerated]
	private readonly ulong <OffsetBytes>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly ulong <SizeBytes>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly ulong <AssetTypeId>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly ulong <CurrentBytesRead>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly uint <BatchReadCount>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly bool <IsBatchRead>k__BackingField; // 0x34
	[CompilerGenerated]
	private readonly ProcessingState <State>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly FileReadType <ReadType>k__BackingField; // 0x3C
	[CompilerGenerated]
	private readonly Priority <PriorityLevel>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly AssetLoadingSubsystem <Subsystem>k__BackingField; // 0x44
	[CompilerGenerated]
	private readonly double <RequestTimeMicroseconds>k__BackingField; // 0x48
	[CompilerGenerated]
	private readonly double <TimeInQueueMicroseconds>k__BackingField; // 0x50
	[CompilerGenerated]
	private readonly double <TotalTimeMicroseconds>k__BackingField; // 0x58
}


// Namespace: Unity.IO.LowLevel.Unsafe
[RequiredByNativeCode]
public class AsyncReadManagerMetricsFilters // TypeDefIndex: 5341
{
	// Fields
	internal ulong[] TypeIDs; // 0x10
	internal ProcessingState[] States; // 0x18
	internal FileReadType[] ReadTypes; // 0x20
	internal Priority[] PriorityLevels; // 0x28
	internal AssetLoadingSubsystem[] Subsystems; // 0x30
}


// Namespace: Unity.IO.Archive
[RequiredByNativeCode]
public enum ArchiveStatus // TypeDefIndex: 5342
{
	// Fields
	public int value__; // 0x0
	public const ArchiveStatus InProgress = 0;
	public const ArchiveStatus Complete = 1;
	public const ArchiveStatus Failed = 2;
}


// Namespace: Unity.IO.Archive
[RequiredByNativeCode]
public struct ArchiveFileInfo // TypeDefIndex: 5343
{
	// Fields
	public string Filename; // 0x0
	public ulong FileSize; // 0x8
}


// Namespace: Unity.IO.Archive
[RequiredByNativeCode]
public struct ArchiveHandle // TypeDefIndex: 5344
{
	// Fields
	internal ulong Handle; // 0x0
}


// Namespace: Unity.IO.Archive
[RequiredByNativeCode]
public static class ArchiveFileInterface // TypeDefIndex: 5345
{}


// Namespace: Unity.Collections
[Usage(10496)]
[RequiredByNativeCode]
public sealed class ReadOnlyAttribute : Attribute // TypeDefIndex: 5346
{}


// Namespace: Unity.Collections
[Usage(10496)]
[RequiredByNativeCode]
public sealed class WriteOnlyAttribute : Attribute // TypeDefIndex: 5347
{}


// Namespace: Unity.Collections
[RequiredByNativeCode]
[Usage(256)]
public sealed class DeallocateOnJobCompletionAttribute : Attribute // TypeDefIndex: 5348
{}


// Namespace: Unity.Collections
[Usage(256)]
[RequiredByNativeCode]
public sealed class NativeFixedLengthAttribute : Attribute // TypeDefIndex: 5349
{}


// Namespace: Unity.Collections
[Usage(256)]
[RequiredByNativeCode]
public sealed class NativeMatchesParallelForLengthAttribute : Attribute // TypeDefIndex: 5350
{}


// Namespace: Unity.Collections
[RequiredByNativeCode]
[Usage(256)]
public sealed class NativeDisableParallelForRestrictionAttribute : Attribute // TypeDefIndex: 5351
{}


// Namespace: Unity.Collections
[UsedByNativeCode]
public enum Allocator // TypeDefIndex: 5352
{
	// Fields
	public int value__; // 0x0
	public const Allocator Invalid = 0;
	public const Allocator None = 1;
	public const Allocator Temp = 2;
	public const Allocator TempJob = 3;
	public const Allocator Persistent = 4;
	public const Allocator AudioKernel = 5;
	public const Allocator FirstUserIndex = 64;
}


// Namespace: Unity.Collections
public enum NativeArrayOptions // TypeDefIndex: 5353
{
	// Fields
	public int value__; // 0x0
	public const NativeArrayOptions UninitializedMemory = 0;
	public const NativeArrayOptions ClearMemory = 1;
}


// Namespace: 
public struct NativeArray.Enumerator<T> : IEnumerator<T>, IEnumerator, IDisposable // TypeDefIndex: 5354
{
	// Fields
	private NativeArray<T> m_Array; // 0x0
	private int m_Index; // 0x0
	private T value; // 0x0

	// Properties
	public T Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(ref NativeArray<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0BC1C Offset: 0xC07C1C VA: 0xC0BC1C
	|-NativeArray.Enumerator<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0BD30 Offset: 0xC07D30 VA: 0xC0BD30
	|-NativeArray.Enumerator<__Il2CppFullySharedGenericStructType>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0BD34 Offset: 0xC07D34 VA: 0xC0BD34
	|-NativeArray.Enumerator<__Il2CppFullySharedGenericStructType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0BF94 Offset: 0xC07F94 VA: 0xC0BF94
	|-NativeArray.Enumerator<__Il2CppFullySharedGenericStructType>.Reset
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0BFF4 Offset: 0xC07FF4 VA: 0xC0BFF4
	|-NativeArray.Enumerator<__Il2CppFullySharedGenericStructType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C128 Offset: 0xC08128 VA: 0xC0C128
	|-NativeArray.Enumerator<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerator.get_Current
	*/
}


// Namespace: 
public struct NativeArray.ReadOnly.Enumerator<T> : IEnumerator<T>, IEnumerator, IDisposable // TypeDefIndex: 5355
{
	// Fields
	private NativeArray.ReadOnly<T> m_Array; // 0x0
	private int m_Index; // 0x0
	private T value; // 0x0

	// Properties
	public T Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(in NativeArray.ReadOnly<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C43C Offset: 0xC0843C VA: 0xC0C43C
	|-NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C550 Offset: 0xC08550 VA: 0xC0C550
	|-NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C554 Offset: 0xC08554 VA: 0xC0C554
	|-NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C7B4 Offset: 0xC087B4 VA: 0xC0C7B4
	|-NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>.Reset
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C814 Offset: 0xC08814 VA: 0xC0C814
	|-NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C904 Offset: 0xC08904 VA: 0xC0C904
	|-NativeArray.ReadOnly.Enumerator<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerator.get_Current
	*/
}


// Namespace: 
[DefaultMember("Item")]
[NativeContainerIsReadOnly]
[NativeContainer]
public struct NativeArray.ReadOnly<T> : IEnumerable<T>, IEnumerable // TypeDefIndex: 5356
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal void* m_Buffer; // 0x0
	internal int m_Length; // 0x0

	// Properties
	public int Length { get; }
	public T Item { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal void .ctor(void* buffer, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4F8CC Offset: 0xC4B8CC VA: 0xC4F8CC
	|-NativeArray.ReadOnly<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	public int get_Length() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4F8D8 Offset: 0xC4B8D8 VA: 0xC4F8D8
	|-NativeArray.ReadOnly<__Il2CppFullySharedGenericStructType>.get_Length
	*/

	// RVA: -1 Offset: -1
	public T get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4F8E0 Offset: 0xC4B8E0 VA: 0xC4F8E0
	|-NativeArray.ReadOnly<__Il2CppFullySharedGenericStructType>.get_Item
	*/

	// RVA: -1 Offset: -1
	public NativeArray.ReadOnly.Enumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4FA14 Offset: 0xC4BA14 VA: 0xC4FA14
	|-NativeArray.ReadOnly<__Il2CppFullySharedGenericStructType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 4
	private IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4FB3C Offset: 0xC4BB3C VA: 0xC4FB3C
	|-NativeArray.ReadOnly<__Il2CppFullySharedGenericStructType>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4FC1C Offset: 0xC4BC1C VA: 0xC4FC1C
	|-NativeArray.ReadOnly<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerable.GetEnumerator
	*/
}


// Namespace: Unity.Collections
[NativeContainerSupportsDeallocateOnJobCompletion]
[DefaultMember("Item")]
[NativeContainerSupportsMinMaxWriteRestriction]
[NativeContainer]
[NativeContainerSupportsDeferredConvertListToArray]
public struct NativeArray<T> : IDisposable, IEnumerable<T>, IEnumerable, IEquatable<NativeArray<T>> // TypeDefIndex: 5357
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal void* m_Buffer; // 0x0
	internal int m_Length; // 0x0
	internal Allocator m_AllocatorLabel; // 0x0

	// Properties
	public int Length { get; }
	public T Item { get; set; }
	public bool IsCreated { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(int length, Allocator allocator, NativeArrayOptions options = 1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BAD0 Offset: 0xC37AD0 VA: 0xC3BAD0
	|-NativeArray<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(T[] array, Allocator allocator) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BBA4 Offset: 0xC37BA4 VA: 0xC3BBA4
	|-NativeArray<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	private static void Allocate(int length, Allocator allocator, out NativeArray<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BC2C Offset: 0xC37C2C VA: 0xC3BC2C
	|-NativeArray<__Il2CppFullySharedGenericStructType>.Allocate
	*/

	// RVA: -1 Offset: -1
	public int get_Length() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BCDC Offset: 0xC37CDC VA: 0xC3BCDC
	|-NativeArray<__Il2CppFullySharedGenericStructType>.get_Length
	*/

	// RVA: -1 Offset: -1
	public T get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BCE4 Offset: 0xC37CE4 VA: 0xC3BCE4
	|-NativeArray<__Il2CppFullySharedGenericStructType>.get_Item
	*/

	// RVA: -1 Offset: -1
	public void set_Item(int index, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BE18 Offset: 0xC37E18 VA: 0xC3BE18
	|-NativeArray<__Il2CppFullySharedGenericStructType>.set_Item
	*/

	// RVA: -1 Offset: -1
	public bool get_IsCreated() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BF1C Offset: 0xC37F1C VA: 0xC3BF1C
	|-NativeArray<__Il2CppFullySharedGenericStructType>.get_IsCreated
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BF2C Offset: 0xC37F2C VA: 0xC3BF2C
	|-NativeArray<__Il2CppFullySharedGenericStructType>.Dispose
	*/

	// RVA: -1 Offset: -1
	public void CopyTo(T[] array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3BFC0 Offset: 0xC37FC0 VA: 0xC3BFC0
	|-NativeArray<__Il2CppFullySharedGenericStructType>.CopyTo
	*/

	// RVA: -1 Offset: -1
	public NativeArray.Enumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C004 Offset: 0xC38004 VA: 0xC3C004
	|-NativeArray<__Il2CppFullySharedGenericStructType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C12C Offset: 0xC3812C VA: 0xC3C12C
	|-NativeArray<__Il2CppFullySharedGenericStructType>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C218 Offset: 0xC38218 VA: 0xC3C218
	|-NativeArray<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public bool Equals(NativeArray<T> other) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C2F8 Offset: 0xC382F8 VA: 0xC3C2F8
	|-NativeArray<__Il2CppFullySharedGenericStructType>.Equals
	*/

	// RVA: -1 Offset: -1 Slot: 0
	public override bool Equals(object obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C31C Offset: 0xC3831C VA: 0xC3C31C
	|-NativeArray<__Il2CppFullySharedGenericStructType>.Equals
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public override int GetHashCode() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C3F4 Offset: 0xC383F4 VA: 0xC3C3F4
	|-NativeArray<__Il2CppFullySharedGenericStructType>.GetHashCode
	*/

	// RVA: -1 Offset: -1
	public static void Copy(T[] src, NativeArray<T> dst) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C40C Offset: 0xC3840C VA: 0xC3C40C
	|-NativeArray<__Il2CppFullySharedGenericStructType>.Copy
	*/

	// RVA: -1 Offset: -1
	public static void Copy(NativeArray<T> src, T[] dst) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C470 Offset: 0xC38470 VA: 0xC3C470
	|-NativeArray<__Il2CppFullySharedGenericStructType>.Copy
	*/

	// RVA: -1 Offset: -1
	private static void CopySafe(T[] src, int srcIndex, NativeArray<T> dst, int dstIndex, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C4F0 Offset: 0xC384F0 VA: 0xC3C4F0
	|-NativeArray<__Il2CppFullySharedGenericStructType>.CopySafe
	*/

	// RVA: -1 Offset: -1
	private static void CopySafe(NativeArray<T> src, int srcIndex, T[] dst, int dstIndex, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C638 Offset: 0xC38638 VA: 0xC3C638
	|-NativeArray<__Il2CppFullySharedGenericStructType>.CopySafe
	*/

	// RVA: -1 Offset: -1
	public NativeArray.ReadOnly<T> AsReadOnly() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3C774 Offset: 0xC38774 VA: 0xC3C774
	|-NativeArray<__Il2CppFullySharedGenericStructType>.AsReadOnly
	*/
}


// Namespace: Unity.Collections
[NativeContainer]
internal struct NativeArrayDispose // TypeDefIndex: 5358
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal void* m_Buffer; // 0x0
	internal Allocator m_AllocatorLabel; // 0x8

	// Methods

	// RVA: 0x1366258 Offset: 0x1362258 VA: 0x1366258
	public void Dispose() { }
}


// Namespace: Unity.Collections
internal struct NativeArrayDisposeJob : IJob // TypeDefIndex: 5359
{
	// Fields
	internal NativeArrayDispose Data; // 0x0

	// Methods

	// RVA: 0x13662E0 Offset: 0x13622E0 VA: 0x13662E0 Slot: 4
	public void Execute() { }

	[RequiredByNativeCode]
	// RVA: 0x1366324 Offset: 0x1362324 VA: 0x1366324
	internal static void RegisterNativeArrayDisposeJobReflectionData() { }
}


// Namespace: Unity.Collections
[Extension]
public static class NativeSliceExtensions // TypeDefIndex: 5360
{
	// Methods

	[Extension]
	// RVA: -1 Offset: -1
	public static NativeSlice<T> Slice<T>(NativeArray<T> thisArray, int start, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1270 Offset: 0xB9D270 VA: 0xBA1270
	|-NativeSliceExtensions.Slice<__Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static NativeSlice<T> Slice<T>(NativeSlice<T> thisSlice, int start, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA12E0 Offset: 0xB9D2E0 VA: 0xBA12E0
	|-NativeSliceExtensions.Slice<__Il2CppFullySharedGenericStructType>
	*/
}


// Namespace: 
public struct NativeSlice.Enumerator<T> : IEnumerator<T>, IEnumerator, IDisposable // TypeDefIndex: 5361
{
	// Fields
	private NativeSlice<T> m_Array; // 0x0
	private int m_Index; // 0x0

	// Properties
	public T Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(ref NativeSlice<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C208 Offset: 0xC08208 VA: 0xC0C208
	|-NativeSlice.Enumerator<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C21C Offset: 0xC0821C VA: 0xC0C21C
	|-NativeSlice.Enumerator<__Il2CppFullySharedGenericStructType>.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C220 Offset: 0xC08220 VA: 0xC0C220
	|-NativeSlice.Enumerator<__Il2CppFullySharedGenericStructType>.MoveNext
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C26C Offset: 0xC0826C VA: 0xC0C26C
	|-NativeSlice.Enumerator<__Il2CppFullySharedGenericStructType>.Reset
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C278 Offset: 0xC08278 VA: 0xC0C278
	|-NativeSlice.Enumerator<__Il2CppFullySharedGenericStructType>.get_Current
	*/

	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC0C35C Offset: 0xC0835C VA: 0xC0C35C
	|-NativeSlice.Enumerator<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerator.get_Current
	*/
}


// Namespace: Unity.Collections
[DefaultMember("Item")]
[NativeContainer]
[NativeContainerSupportsMinMaxWriteRestriction]
public struct NativeSlice<T> : IEnumerable<T>, IEnumerable, IEquatable<NativeSlice<T>> // TypeDefIndex: 5362
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal byte* m_Buffer; // 0x0
	internal int m_Stride; // 0x0
	internal int m_Length; // 0x0

	// Properties
	public T Item { get; set; }
	public int Stride { get; }
	public int Length { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(NativeSlice<T> slice, int start, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3CE70 Offset: 0xC38E70 VA: 0xC3CE70
	|-NativeSlice<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(NativeArray<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3CE84 Offset: 0xC38E84 VA: 0xC3CE84
	|-NativeSlice<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	public static NativeSlice<T> op_Implicit(NativeArray<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3CF00 Offset: 0xC38F00 VA: 0xC3CF00
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	public void .ctor(NativeArray<T> array, int start, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3CF5C Offset: 0xC38F5C VA: 0xC3CF5C
	|-NativeSlice<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	public T get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3CFD4 Offset: 0xC38FD4 VA: 0xC3CFD4
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.get_Item
	*/

	// RVA: -1 Offset: -1
	public void set_Item(int index, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D110 Offset: 0xC39110 VA: 0xC3D110
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.set_Item
	*/

	// RVA: -1 Offset: -1
	public void CopyFrom(NativeSlice<T> slice) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D224 Offset: 0xC39224 VA: 0xC3D224
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.CopyFrom
	*/

	// RVA: -1 Offset: -1
	public void CopyFrom(T[] array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D344 Offset: 0xC39344 VA: 0xC3D344
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.CopyFrom
	*/

	// RVA: -1 Offset: -1
	public int get_Stride() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D450 Offset: 0xC39450 VA: 0xC3D450
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.get_Stride
	*/

	// RVA: -1 Offset: -1
	public int get_Length() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D458 Offset: 0xC39458 VA: 0xC3D458
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.get_Length
	*/

	// RVA: -1 Offset: -1
	public NativeSlice.Enumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D460 Offset: 0xC39460 VA: 0xC3D460
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 4
	private IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D4C8 Offset: 0xC394C8 VA: 0xC3D4C8
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.System.Collections.Generic.IEnumerable<T>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 5
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D54C Offset: 0xC3954C VA: 0xC3D54C
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public bool Equals(NativeSlice<T> other) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D5CC Offset: 0xC395CC VA: 0xC3D5CC
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.Equals
	*/

	// RVA: -1 Offset: -1 Slot: 0
	public override bool Equals(object obj) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D600 Offset: 0xC39600 VA: 0xC3D600
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.Equals
	*/

	// RVA: -1 Offset: -1 Slot: 2
	public override int GetHashCode() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3D6E8 Offset: 0xC396E8 VA: 0xC3D6E8
	|-NativeSlice<__Il2CppFullySharedGenericStructType>.GetHashCode
	*/
}


// Namespace: 
internal struct BurstLike.SharedStatic<T> // TypeDefIndex: 5363
{
	// Fields
	private readonly void* _buffer; // 0x0

	// Properties
	public T Data { get; }

	// Methods

	// RVA: -1 Offset: -1
	private void .ctor(void* buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC5980C Offset: 0xC5580C VA: 0xC5980C
	|-BurstLike.SharedStatic<__Il2CppFullySharedGenericStructType>..ctor
	*/

	// RVA: -1 Offset: -1
	public ref T get_Data() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC59814 Offset: 0xC55814 VA: 0xC59814
	|-BurstLike.SharedStatic<__Il2CppFullySharedGenericStructType>.get_Data
	*/

	// RVA: -1 Offset: -1
	public static BurstLike.SharedStatic<T> GetOrCreate<TContext>(uint alignment = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB69F6C Offset: 0xB65F6C VA: 0xB69F6C
	|-BurstLike.SharedStatic<__Il2CppFullySharedGenericStructType>.GetOrCreate<__Il2CppFullySharedGenericType>
	*/
}


// Namespace: 
internal static class BurstLike.SharedStatic // TypeDefIndex: 5364
{
	// Methods

	// RVA: 0x1366364 Offset: 0x1362364 VA: 0x1366364
	public static void* GetOrCreateSharedStaticInternal(long getHashCode64, long getSubHashCode64, uint sizeOf, uint alignment) { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
internal static class BurstLike // TypeDefIndex: 5365
{}


// Namespace: 
private struct BurstRuntime.HashCode64<T> // TypeDefIndex: 5366
{
	// Fields
	public static readonly long Value; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC1F16C Offset: 0xC1B16C VA: 0xC1F16C
	|-BurstRuntime.HashCode64<__Il2CppFullySharedGenericType>..cctor
	*/
}


// Namespace: Unity.Collections.LowLevel.Unsafe
internal static class BurstRuntime // TypeDefIndex: 5367
{
	// Methods

	// RVA: -1 Offset: -1
	public static long GetHashCode64<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB791A0 Offset: 0xB751A0 VA: 0xB791A0
	|-BurstRuntime.GetHashCode64<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1366420 Offset: 0x1362420 VA: 0x1366420
	internal static long HashStringWithFNV1A64(string text) { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[RequiredByNativeCode]
[Usage(8)]
public sealed class NativeContainerAttribute : Attribute // TypeDefIndex: 5368
{
	// Methods

	// RVA: 0x13664AC Offset: 0x13624AC VA: 0x13664AC
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(8)]
[RequiredByNativeCode]
public sealed class NativeContainerIsReadOnlyAttribute : Attribute // TypeDefIndex: 5369
{
	// Methods

	// RVA: 0x13664B4 Offset: 0x13624B4 VA: 0x13664B4
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[RequiredByNativeCode]
[Usage(8)]
public sealed class NativeContainerIsAtomicWriteOnlyAttribute : Attribute // TypeDefIndex: 5370
{}


// Namespace: Unity.Collections.LowLevel.Unsafe
[RequiredByNativeCode]
[Usage(8)]
public sealed class NativeContainerSupportsMinMaxWriteRestrictionAttribute : Attribute // TypeDefIndex: 5371
{
	// Methods

	// RVA: 0x13664BC Offset: 0x13624BC VA: 0x13664BC
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(8)]
[RequiredByNativeCode]
public sealed class NativeContainerSupportsDeallocateOnJobCompletionAttribute : Attribute // TypeDefIndex: 5372
{
	// Methods

	// RVA: 0x13664C4 Offset: 0x13624C4 VA: 0x13664C4
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(8)]
[RequiredByNativeCode]
public sealed class NativeContainerSupportsDeferredConvertListToArray : Attribute // TypeDefIndex: 5373
{
	// Methods

	// RVA: 0x13664CC Offset: 0x13624CC VA: 0x13664CC
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(256)]
[RequiredByNativeCode]
public sealed class NativeSetThreadIndexAttribute : Attribute // TypeDefIndex: 5374
{}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(8)]
[Obsolete("Use NativeSetThreadIndexAttribute instead")]
[RequiredByNativeCode]
public sealed class NativeContainerNeedsThreadIndexAttribute : Attribute // TypeDefIndex: 5375
{}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(256)]
[RequiredByNativeCode]
public sealed class NativeDisableUnsafePtrRestrictionAttribute : Attribute // TypeDefIndex: 5376
{
	// Methods

	// RVA: 0x13664D4 Offset: 0x13624D4 VA: 0x13664D4
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(256)]
[RequiredByNativeCode]
public sealed class NativeDisableContainerSafetyRestrictionAttribute : Attribute // TypeDefIndex: 5377
{
	// Methods

	// RVA: 0x13664DC Offset: 0x13624DC VA: 0x13664DC
	public void .ctor() { }
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Usage(256)]
[RequiredByNativeCode]
public sealed class NativeSetClassTypeToNullOnScheduleAttribute : Attribute // TypeDefIndex: 5378
{}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Extension]
public static class NativeArrayUnsafeUtility // TypeDefIndex: 5379
{
	// Methods

	// RVA: -1 Offset: -1
	public static NativeArray<T> ConvertExistingDataToNativeArray<T>(void* dataPointer, int length, Allocator allocator) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA125C Offset: 0xB9D25C VA: 0xBA125C
	|-NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<__Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void* GetUnsafePtr<T>(NativeArray<T> nativeArray) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1268 Offset: 0xB9D268 VA: 0xBA1268
	|-NativeArrayUnsafeUtility.GetUnsafePtr<__Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void* GetUnsafeReadOnlyPtr<T>(NativeArray<T> nativeArray) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA126C Offset: 0xB9D26C VA: 0xBA126C
	|-NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<__Il2CppFullySharedGenericStructType>
	*/
}


// Namespace: Unity.Collections.LowLevel.Unsafe
[Extension]
public static class NativeSliceUnsafeUtility // TypeDefIndex: 5380
{
	// Methods

	// RVA: -1 Offset: -1
	public static NativeSlice<T> ConvertExistingDataToNativeSlice<T>(void* dataPointer, int stride, int length) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1350 Offset: 0xB9D350 VA: 0xBA1350
	|-NativeSliceUnsafeUtility.ConvertExistingDataToNativeSlice<__Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void* GetUnsafePtr<T>(NativeSlice<T> nativeSlice) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1454 Offset: 0xB9D454 VA: 0xBA1454
	|-NativeSliceUnsafeUtility.GetUnsafePtr<__Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static void* GetUnsafeReadOnlyPtr<T>(NativeSlice<T> nativeSlice) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1458 Offset: 0xB9D458 VA: 0xBA1458
	|-NativeSliceUnsafeUtility.GetUnsafeReadOnlyPtr<__Il2CppFullySharedGenericStructType>
	*/
}


// Namespace: 
private struct UnsafeUtility.AlignOfHelper<T> // TypeDefIndex: 5381
{
	// Fields
	public byte dummy; // 0x0
	public T data; // 0x0
}


// Namespace: Unity.Collections.LowLevel.Unsafe
public static class UnsafeUtility // TypeDefIndex: 5382
{
	// Methods

	// RVA: 0x13664E4 Offset: 0x13624E4 VA: 0x13664E4
	public static void* MallocTracked(long size, int alignment, Allocator allocator, int callstacksToSkip) { }

	// RVA: 0x136629C Offset: 0x136229C VA: 0x136629C
	public static void FreeTracked(void* memory, Allocator allocator) { }

	// RVA: 0x1366084 Offset: 0x1362084 VA: 0x1366084
	public static void MemCpy(void* destination, void* source, long size) { }

	// RVA: 0x1366540 Offset: 0x1362540 VA: 0x1366540
	public static void MemCpyStride(void* destination, int destinationStride, void* source, int sourceStride, int elementSize, int count) { }

	// RVA: 0x13665B4 Offset: 0x13625B4 VA: 0x13665B4
	public static void MemSet(void* destination, byte value, long size) { }

	// RVA: 0x1366608 Offset: 0x1362608 VA: 0x1366608
	public static void MemClear(void* destination, long size) { }

	// RVA: 0x1366650 Offset: 0x1362650 VA: 0x1366650
	public static int SizeOf(Type type) { }

	// RVA: 0x136668C Offset: 0x136268C VA: 0x136668C
	public static bool IsBlittable(Type type) { }

	// RVA: 0x13666C8 Offset: 0x13626C8 VA: 0x13666C8
	private static bool IsBlittableValueType(Type t) { }

	// RVA: 0x1366728 Offset: 0x1362728 VA: 0x1366728
	private static string GetReasonForTypeNonBlittableImpl(Type t, string name) { }

	// RVA: 0x13668E4 Offset: 0x13628E4 VA: 0x13668E4
	internal static bool IsArrayBlittable(Array arr) { }

	// RVA: 0x1366914 Offset: 0x1362914 VA: 0x1366914
	internal static string GetReasonForArrayNonBlittable(Array arr) { }

	// RVA: -1 Offset: -1
	public static int AlignOf<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF8F4 Offset: 0xBAB8F4 VA: 0xBAF8F4
	|-UnsafeUtility.AlignOf<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: -1 Offset: -1
	public static T ReadArrayElement<T>(void* source, int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFAB4 Offset: 0xBABAB4 VA: 0xBAFAB4
	|-UnsafeUtility.ReadArrayElement<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static T ReadArrayElementWithStride<T>(void* source, int index, int stride) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFB6C Offset: 0xBABB6C VA: 0xBAFB6C
	|-UnsafeUtility.ReadArrayElementWithStride<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void WriteArrayElement<T>(void* destination, int index, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFC50 Offset: 0xBABC50 VA: 0xBAFC50
	|-UnsafeUtility.WriteArrayElement<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void WriteArrayElementWithStride<T>(void* destination, int index, int stride, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFD34 Offset: 0xBABD34 VA: 0xBAFD34
	|-UnsafeUtility.WriteArrayElementWithStride<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void* AddressOf<T>(ref T output) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF8F0 Offset: 0xBAB8F0 VA: 0xBAF8F0
	|-UnsafeUtility.AddressOf<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: -1 Offset: -1
	public static int SizeOf<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFC28 Offset: 0xBABC28 VA: 0xBAFC28
	|-UnsafeUtility.SizeOf<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: -1 Offset: -1
	public static ref T As<U, T>(ref U from) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF968 Offset: 0xBAB968 VA: 0xBAF968
	|-UnsafeUtility.As<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static ref T AsRef<T>(void* ptr) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF96C Offset: 0xBAB96C VA: 0xBAF96C
	|-UnsafeUtility.AsRef<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: -1 Offset: -1
	public static int EnumToInt<T>(T enumValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFA84 Offset: 0xBABA84 VA: 0xBAFA84
	|-UnsafeUtility.EnumToInt<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: -1 Offset: -1
	private static void InternalEnumToInt<T>(ref T enumValue, ref int intValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAFAA8 Offset: 0xBABAA8 VA: 0xBAFAA8
	|-UnsafeUtility.InternalEnumToInt<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static bool EnumEquals<T>(T lhs, T rhs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBAF970 Offset: 0xBAB970 VA: 0xBAF970
	|-UnsafeUtility.EnumEquals<__Il2CppFullySharedGenericStructType>
	*/
}


// Namespace: Unity.Burst.LowLevel
internal static class BurstCompilerService // TypeDefIndex: 5383
{
	// Methods

	// RVA: 0x13663CC Offset: 0x13623CC VA: 0x13663CC
	public static void* GetOrCreateSharedMemory(ref Hash128 key, uint size_of, uint alignment) { }
}


// Namespace: UnityEngine
public struct SortingLayer // TypeDefIndex: 5384
{
	// Fields
	private int m_Id; // 0x0

	// Methods

	// RVA: 0x1366960 Offset: 0x1362960 VA: 0x1366960
	public static int GetLayerValueFromID(int id) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public struct Keyframe // TypeDefIndex: 5385
{
	// Fields
	private float m_Time; // 0x0
	private float m_Value; // 0x4
	private float m_InTangent; // 0x8
	private float m_OutTangent; // 0xC
	private int m_WeightedMode; // 0x10
	private float m_InWeight; // 0x14
	private float m_OutWeight; // 0x18
}


// Namespace: UnityEngine
[DefaultMember("Item")]
[RequiredByNativeCode]
public class AnimationCurve : IEquatable<AnimationCurve> // TypeDefIndex: 5386
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x136699C Offset: 0x136299C VA: 0x136699C
	private static void Internal_Destroy(IntPtr ptr) { }

	// RVA: 0x13669D8 Offset: 0x13629D8 VA: 0x13669D8
	private static IntPtr Internal_Create(Keyframe[] keys) { }

	// RVA: 0x1366A14 Offset: 0x1362A14 VA: 0x1366A14
	private bool Internal_Equals(IntPtr other) { }

	// RVA: 0x1366A58 Offset: 0x1362A58 VA: 0x1366A58 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x1366B14 Offset: 0x1362B14 VA: 0x1366B14 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1366B50 Offset: 0x1362B50 VA: 0x1366B50
	public void .ctor(Keyframe[] keys) { }

	[RequiredByNativeCode]
	// RVA: 0x1366BA0 Offset: 0x1362BA0 VA: 0x1366BA0
	public void .ctor() { }

	// RVA: 0x1366BEC Offset: 0x1362BEC VA: 0x1366BEC Slot: 0
	public override bool Equals(object o) { }

	// RVA: 0x1366CF8 Offset: 0x1362CF8 VA: 0x1366CF8 Slot: 4
	public bool Equals(AnimationCurve other) { }
}


// Namespace: 
public sealed class Application.AdvertisingIdentifierCallback : MulticastDelegate // TypeDefIndex: 5387
{
	// Methods

	// RVA: 0x1367FD8 Offset: 0x1363FD8 VA: 0x1367FD8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1368078 Offset: 0x1364078 VA: 0x1368078 Slot: 12
	public virtual void Invoke(string advertisingId, bool trackingEnabled, string errorMsg) { }
}


// Namespace: 
public sealed class Application.LowMemoryCallback : MulticastDelegate // TypeDefIndex: 5388
{
	// Methods

	// RVA: 0x1368090 Offset: 0x1364090 VA: 0x1368090
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1368118 Offset: 0x1364118 VA: 0x1368118 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: 
public sealed class Application.MemoryUsageChangedCallback : MulticastDelegate // TypeDefIndex: 5389
{
	// Methods

	// RVA: 0x136812C Offset: 0x136412C VA: 0x136812C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13681C8 Offset: 0x13641C8 VA: 0x13681C8 Slot: 12
	public virtual void Invoke(in ApplicationMemoryUsageChange usage) { }
}


// Namespace: 
public sealed class Application.LogCallback : MulticastDelegate // TypeDefIndex: 5390
{
	// Methods

	// RVA: 0x13681DC Offset: 0x13641DC VA: 0x13681DC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x136827C Offset: 0x136427C VA: 0x136827C Slot: 12
	public virtual void Invoke(string condition, string stackTrace, LogType type) { }
}


// Namespace: UnityEngine
public class Application // TypeDefIndex: 5391
{
	// Fields
	[CompilerGenerated]
	private static Application.LowMemoryCallback lowMemory; // 0x0
	[CompilerGenerated]
	private static Application.MemoryUsageChangedCallback memoryUsageChanged; // 0x8
	private static Application.LogCallback s_LogCallbackHandler; // 0x10
	private static Application.LogCallback s_LogCallbackHandlerThreaded; // 0x18
	[CompilerGenerated]
	private static Action<bool> focusChanged; // 0x20
	[CompilerGenerated]
	private static Action<string> deepLinkActivated; // 0x28
	[CompilerGenerated]
	private static Func<bool> wantsToQuit; // 0x30
	[CompilerGenerated]
	private static Action quitting; // 0x38
	[CompilerGenerated]
	private static Action unloading; // 0x40
	private static CancellationTokenSource s_currentCancellationTokenSource; // 0x48

	// Properties
	public static bool isPlaying { get; }
	public static bool isFocused { get; }
	public static string buildGUID { get; }
	public static bool isBatchMode { get; }
	public static string streamingAssetsPath { get; }
	public static string persistentDataPath { get; }
	public static string unityVersion { get; }
	public static string version { get; }
	public static string identifier { get; }
	public static string cloudProjectId { get; }
	public static int targetFrameRate { set; }
	public static RuntimePlatform platform { get; }
	public static SystemLanguage systemLanguage { get; }
	public static NetworkReachability internetReachability { get; }
	public static bool isEditor { get; }

	// Methods

	// RVA: 0x1366DC0 Offset: 0x1362DC0 VA: 0x1366DC0
	public static void Quit(int exitCode) { }

	// RVA: 0x1366DFC Offset: 0x1362DFC VA: 0x1366DFC
	public static void Quit() { }

	// RVA: 0x1366E6C Offset: 0x1362E6C VA: 0x1366E6C
	public static bool get_isPlaying() { }

	// RVA: 0x1366E94 Offset: 0x1362E94 VA: 0x1366E94
	public static bool get_isFocused() { }

	// RVA: 0x1366EBC Offset: 0x1362EBC VA: 0x1366EBC
	public static string get_buildGUID() { }

	// RVA: 0x1366EE4 Offset: 0x1362EE4 VA: 0x1366EE4
	public static bool get_isBatchMode() { }

	// RVA: 0x1366F0C Offset: 0x1362F0C VA: 0x1366F0C
	public static string get_streamingAssetsPath() { }

	// RVA: 0x1366F34 Offset: 0x1362F34 VA: 0x1366F34
	public static string get_persistentDataPath() { }

	// RVA: 0x1366F5C Offset: 0x1362F5C VA: 0x1366F5C
	public static string get_unityVersion() { }

	// RVA: 0x1366F84 Offset: 0x1362F84 VA: 0x1366F84
	public static string get_version() { }

	// RVA: 0x1366FAC Offset: 0x1362FAC VA: 0x1366FAC
	public static string get_identifier() { }

	// RVA: 0x1366FD4 Offset: 0x1362FD4 VA: 0x1366FD4
	public static string get_cloudProjectId() { }

	// RVA: 0x1366FFC Offset: 0x1362FFC VA: 0x1366FFC
	public static bool RequestAdvertisingIdentifierAsync(Application.AdvertisingIdentifierCallback delegateMethod) { }

	// RVA: 0x1367038 Offset: 0x1363038 VA: 0x1367038
	public static void OpenURL(string url) { }

	// RVA: 0x1367074 Offset: 0x1363074 VA: 0x1367074
	public static void set_targetFrameRate(int value) { }

	// RVA: 0x13670B0 Offset: 0x13630B0 VA: 0x13670B0
	private static void SetLogCallbackDefined(bool defined) { }

	// RVA: 0x13670EC Offset: 0x13630EC VA: 0x13670EC
	public static RuntimePlatform get_platform() { }

	// RVA: 0x1367114 Offset: 0x1363114 VA: 0x1367114
	public static SystemLanguage get_systemLanguage() { }

	// RVA: 0x136713C Offset: 0x136313C VA: 0x136713C
	public static NetworkReachability get_internetReachability() { }

	[RequiredByNativeCode]
	// RVA: 0x1367164 Offset: 0x1363164 VA: 0x1367164
	internal static void CallLowMemory(ApplicationMemoryUsage usage) { }

	[RequiredByNativeCode]
	// RVA: 0x136729C Offset: 0x136329C VA: 0x136729C
	internal static bool HasLogCallback() { }

	// RVA: 0x1367320 Offset: 0x1363320 VA: 0x1367320
	public static void add_logMessageReceived(Application.LogCallback value) { }

	// RVA: 0x13673FC Offset: 0x13633FC VA: 0x13673FC
	public static void remove_logMessageReceived(Application.LogCallback value) { }

	[RequiredByNativeCode]
	// RVA: 0x13674B4 Offset: 0x13634B4 VA: 0x13674B4
	private static void CallLogCallback(string logString, string stackTrace, LogType type, bool invokedOnMainThread) { }

	[CompilerGenerated]
	// RVA: 0x1367590 Offset: 0x1363590 VA: 0x1367590
	public static void add_quitting(Action value) { }

	[CompilerGenerated]
	// RVA: 0x136766C Offset: 0x136366C VA: 0x136766C
	public static void remove_quitting(Action value) { }

	[RequiredByNativeCode]
	// RVA: 0x1367748 Offset: 0x1363748 VA: 0x1367748
	private static bool Internal_ApplicationWantsToQuit() { }

	[RequiredByNativeCode]
	// RVA: 0x1367A5C Offset: 0x1363A5C VA: 0x1367A5C
	private static void Internal_ApplicationInit() { }

	[RequiredByNativeCode]
	// RVA: 0x1367ADC Offset: 0x1363ADC VA: 0x1367ADC
	private static void Internal_ApplicationQuit() { }

	[RequiredByNativeCode]
	// RVA: 0x1367B88 Offset: 0x1363B88 VA: 0x1367B88
	private static void Internal_ApplicationUnload() { }

	[RequiredByNativeCode]
	// RVA: 0x1367C1C Offset: 0x1363C1C VA: 0x1367C1C
	internal static void InvokeOnBeforeRender() { }

	[RequiredByNativeCode]
	// RVA: 0x1367E20 Offset: 0x1363E20 VA: 0x1367E20
	internal static void InvokeFocusChanged(bool focus) { }

	[RequiredByNativeCode]
	// RVA: 0x1367EC4 Offset: 0x1363EC4 VA: 0x1367EC4
	internal static void InvokeDeepLinkActivated(string url) { }

	// RVA: 0x1367F60 Offset: 0x1363F60 VA: 0x1367F60
	public static bool get_isEditor() { }

	// RVA: 0x1367F68 Offset: 0x1363F68 VA: 0x1367F68
	private static void .cctor() { }
}


// Namespace: UnityEngine
public enum ApplicationMemoryUsage // TypeDefIndex: 5392
{
	// Fields
	public int value__; // 0x0
	public const ApplicationMemoryUsage Unknown = 0;
	public const ApplicationMemoryUsage Low = 1;
	public const ApplicationMemoryUsage Medium = 2;
	public const ApplicationMemoryUsage High = 3;
	public const ApplicationMemoryUsage Critical = 4;
}


// Namespace: UnityEngine
public struct ApplicationMemoryUsageChange // TypeDefIndex: 5393
{
	// Fields
	[CompilerGenerated]
	private ApplicationMemoryUsage <memoryUsage>k__BackingField; // 0x0

	// Properties
	private ApplicationMemoryUsage memoryUsage { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1368290 Offset: 0x1364290 VA: 0x1368290
	private void set_memoryUsage(ApplicationMemoryUsage value) { }

	// RVA: 0x1367294 Offset: 0x1363294 VA: 0x1367294
	public void .ctor(ApplicationMemoryUsage usage) { }
}


// Namespace: UnityEngine
public enum NetworkReachability // TypeDefIndex: 5394
{
	// Fields
	public int value__; // 0x0
	public const NetworkReachability NotReachable = 0;
	public const NetworkReachability ReachableViaCarrierDataNetwork = 1;
	public const NetworkReachability ReachableViaLocalAreaNetwork = 2;
}


// Namespace: UnityEngine
public enum SendMessageOptions // TypeDefIndex: 5395
{
	// Fields
	public int value__; // 0x0
	public const SendMessageOptions RequireReceiver = 0;
	public const SendMessageOptions DontRequireReceiver = 1;
}


// Namespace: UnityEngine
public enum Space // TypeDefIndex: 5396
{
	// Fields
	public int value__; // 0x0
	public const Space World = 0;
	public const Space Self = 1;
}


// Namespace: UnityEngine
public enum RuntimePlatform // TypeDefIndex: 5397
{
	// Fields
	public int value__; // 0x0
	public const RuntimePlatform OSXEditor = 0;
	public const RuntimePlatform OSXPlayer = 1;
	public const RuntimePlatform WindowsPlayer = 2;
	[Obsolete("WebPlayer export is no longer supported in Unity 5.4+.", True)]
	public const RuntimePlatform OSXWebPlayer = 3;
	[Obsolete("Dashboard widget on Mac OS X export is no longer supported in Unity 5.4+.", True)]
	public const RuntimePlatform OSXDashboardPlayer = 4;
	[Obsolete("WebPlayer export is no longer supported in Unity 5.4+.", True)]
	public const RuntimePlatform WindowsWebPlayer = 5;
	public const RuntimePlatform WindowsEditor = 7;
	public const RuntimePlatform IPhonePlayer = 8;
	[Obsolete("Xbox360 export is no longer supported in Unity 5.5+.")]
	public const RuntimePlatform XBOX360 = 10;
	[Obsolete("PS3 export is no longer supported in Unity >=5.5.")]
	public const RuntimePlatform PS3 = 9;
	public const RuntimePlatform Android = 11;
	[Obsolete("NaCl export is no longer supported in Unity 5.0+.")]
	public const RuntimePlatform NaCl = 12;
	[Obsolete("FlashPlayer export is no longer supported in Unity 5.0+.")]
	public const RuntimePlatform FlashPlayer = 15;
	public const RuntimePlatform LinuxPlayer = 13;
	public const RuntimePlatform LinuxEditor = 16;
	public const RuntimePlatform WebGLPlayer = 17;
	[Obsolete("Use WSAPlayerX86 instead")]
	public const RuntimePlatform MetroPlayerX86 = 18;
	public const RuntimePlatform WSAPlayerX86 = 18;
	[Obsolete("Use WSAPlayerX64 instead")]
	public const RuntimePlatform MetroPlayerX64 = 19;
	public const RuntimePlatform WSAPlayerX64 = 19;
	[Obsolete("Use WSAPlayerARM instead")]
	public const RuntimePlatform MetroPlayerARM = 20;
	public const RuntimePlatform WSAPlayerARM = 20;
	[Obsolete("Windows Phone 8 was removed in 5.3")]
	public const RuntimePlatform WP8Player = 21;
	[Obsolete("BlackBerryPlayer export is no longer supported in Unity 5.4+.")]
	public const RuntimePlatform BlackBerryPlayer = 22;
	[Obsolete("TizenPlayer export is no longer supported in Unity 2017.3+.")]
	public const RuntimePlatform TizenPlayer = 23;
	[Obsolete("PSP2 is no longer supported as of Unity 2018.3")]
	public const RuntimePlatform PSP2 = 24;
	public const RuntimePlatform PS4 = 25;
	[Obsolete("PSM export is no longer supported in Unity >= 5.3")]
	public const RuntimePlatform PSM = 26;
	public const RuntimePlatform XboxOne = 27;
	[Obsolete("SamsungTVPlayer export is no longer supported in Unity 2017.3+.")]
	public const RuntimePlatform SamsungTVPlayer = 28;
	[Obsolete("Wii U is no longer supported in Unity 2018.1+.")]
	public const RuntimePlatform WiiU = 30;
	public const RuntimePlatform tvOS = 31;
	public const RuntimePlatform Switch = 32;
	[Obsolete("Lumin is no longer supported in Unity 2022.2")]
	public const RuntimePlatform Lumin = 33;
	public const RuntimePlatform Stadia = 34;
	[Obsolete("Use LinuxPlayer instead")]
	public const RuntimePlatform CloudRendering = 35;
	[Obsolete("GameCoreScarlett is deprecated, please use GameCoreXboxSeries (UnityUpgradable) -> GameCoreXboxSeries", False)]
	public const RuntimePlatform GameCoreScarlett = -1;
	public const RuntimePlatform GameCoreXboxSeries = 36;
	public const RuntimePlatform GameCoreXboxOne = 37;
	public const RuntimePlatform PS5 = 38;
	public const RuntimePlatform EmbeddedLinuxArm64 = 39;
	public const RuntimePlatform EmbeddedLinuxArm32 = 40;
	public const RuntimePlatform EmbeddedLinuxX64 = 41;
	public const RuntimePlatform EmbeddedLinuxX86 = 42;
	public const RuntimePlatform LinuxServer = 43;
	public const RuntimePlatform WindowsServer = 44;
	public const RuntimePlatform OSXServer = 45;
	public const RuntimePlatform QNXArm32 = 46;
	public const RuntimePlatform QNXArm64 = 47;
	public const RuntimePlatform QNXX64 = 48;
	public const RuntimePlatform QNXX86 = 49;
	public const RuntimePlatform VisionOS = 50;
}


// Namespace: UnityEngine
public enum SystemLanguage // TypeDefIndex: 5398
{
	// Fields
	public int value__; // 0x0
	public const SystemLanguage Afrikaans = 0;
	public const SystemLanguage Arabic = 1;
	public const SystemLanguage Basque = 2;
	public const SystemLanguage Belarusian = 3;
	public const SystemLanguage Bulgarian = 4;
	public const SystemLanguage Catalan = 5;
	public const SystemLanguage Chinese = 6;
	public const SystemLanguage Czech = 7;
	public const SystemLanguage Danish = 8;
	public const SystemLanguage Dutch = 9;
	public const SystemLanguage English = 10;
	public const SystemLanguage Estonian = 11;
	public const SystemLanguage Faroese = 12;
	public const SystemLanguage Finnish = 13;
	public const SystemLanguage French = 14;
	public const SystemLanguage German = 15;
	public const SystemLanguage Greek = 16;
	public const SystemLanguage Hebrew = 17;
	public const SystemLanguage Icelandic = 19;
	public const SystemLanguage Indonesian = 20;
	public const SystemLanguage Italian = 21;
	public const SystemLanguage Japanese = 22;
	public const SystemLanguage Korean = 23;
	public const SystemLanguage Latvian = 24;
	public const SystemLanguage Lithuanian = 25;
	public const SystemLanguage Norwegian = 26;
	public const SystemLanguage Polish = 27;
	public const SystemLanguage Portuguese = 28;
	public const SystemLanguage Romanian = 29;
	public const SystemLanguage Russian = 30;
	public const SystemLanguage SerboCroatian = 31;
	public const SystemLanguage Slovak = 32;
	public const SystemLanguage Slovenian = 33;
	public const SystemLanguage Spanish = 34;
	public const SystemLanguage Swedish = 35;
	public const SystemLanguage Thai = 36;
	public const SystemLanguage Turkish = 37;
	public const SystemLanguage Ukrainian = 38;
	public const SystemLanguage Vietnamese = 39;
	public const SystemLanguage ChineseSimplified = 40;
	public const SystemLanguage ChineseTraditional = 41;
	public const SystemLanguage Hindi = 42;
	public const SystemLanguage Unknown = 43;
	public const SystemLanguage Hungarian = 18;
}


// Namespace: UnityEngine
public enum LogType // TypeDefIndex: 5399
{
	// Fields
	public int value__; // 0x0
	public const LogType Error = 0;
	public const LogType Assert = 1;
	public const LogType Warning = 2;
	public const LogType Log = 3;
	public const LogType Exception = 4;
}


// Namespace: UnityEngine
public enum LogOption // TypeDefIndex: 5400
{
	// Fields
	public int value__; // 0x0
	public const LogOption None = 0;
	public const LogOption NoStacktrace = 1;
}


// Namespace: UnityEngine
internal class BootConfigData // TypeDefIndex: 5401
{
	// Fields
	private IntPtr m_Ptr; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1368298 Offset: 0x1364298 VA: 0x1368298
	private static BootConfigData WrapBootConfigData(IntPtr nativeHandle) { }

	// RVA: 0x13682F0 Offset: 0x13642F0 VA: 0x13682F0
	private void .ctor(IntPtr nativeHandle) { }
}


// Namespace: 
public enum Camera.MonoOrStereoscopicEye // TypeDefIndex: 5402
{
	// Fields
	public int value__; // 0x0
	public const Camera.MonoOrStereoscopicEye Left = 0;
	public const Camera.MonoOrStereoscopicEye Right = 1;
	public const Camera.MonoOrStereoscopicEye Mono = 2;
}


// Namespace: 
public sealed class Camera.CameraCallback : MulticastDelegate // TypeDefIndex: 5403
{
	// Methods

	// RVA: 0x1369994 Offset: 0x1365994 VA: 0x1369994
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1369A30 Offset: 0x1365A30 VA: 0x1369A30 Slot: 12
	public virtual void Invoke(Camera cam) { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
[UsedByNativeCode]
public sealed class Camera : Behaviour // TypeDefIndex: 5404
{
	// Fields
	public const float kMinAperture = 0.7;
	public const float kMaxAperture = 32;
	public const int kMinBladeCount = 3;
	public const int kMaxBladeCount = 11;
	public static Camera.CameraCallback onPreCull; // 0x0
	public static Camera.CameraCallback onPreRender; // 0x8
	public static Camera.CameraCallback onPostRender; // 0x10

	// Properties
	public float nearClipPlane { get; set; }
	public float farClipPlane { get; set; }
	public float fieldOfView { get; set; }
	public RenderingPath renderingPath { set; }
	public bool allowHDR { get; set; }
	public bool allowMSAA { set; }
	public float orthographicSize { get; set; }
	public bool orthographic { get; set; }
	public float depth { get; }
	public float aspect { get; }
	public int cullingMask { get; set; }
	public int eventMask { get; }
	public CameraType cameraType { get; }
	public bool useOcclusionCulling { get; set; }
	public CameraClearFlags clearFlags { get; }
	public Rect rect { get; }
	public Rect pixelRect { get; }
	public int pixelWidth { get; }
	public int pixelHeight { get; }
	public RenderTexture targetTexture { get; }
	public int targetDisplay { get; }
	public Matrix4x4 projectionMatrix { get; set; }
	public static Camera main { get; }
	public static Camera current { get; }
	public StereoTargetEyeMask stereoTargetEye { set; }
	public static int allCamerasCount { get; }
	public static Camera[] allCameras { get; }

	// Methods

	// RVA: 0x1368374 Offset: 0x1364374 VA: 0x1368374
	public void .ctor() { }

	// RVA: 0x136837C Offset: 0x136437C VA: 0x136837C
	public float get_nearClipPlane() { }

	// RVA: 0x13683B8 Offset: 0x13643B8 VA: 0x13683B8
	public void set_nearClipPlane(float value) { }

	// RVA: 0x1368404 Offset: 0x1364404 VA: 0x1368404
	public float get_farClipPlane() { }

	// RVA: 0x1368440 Offset: 0x1364440 VA: 0x1368440
	public void set_farClipPlane(float value) { }

	// RVA: 0x136848C Offset: 0x136448C VA: 0x136848C
	public float get_fieldOfView() { }

	// RVA: 0x13684C8 Offset: 0x13644C8 VA: 0x13684C8
	public void set_fieldOfView(float value) { }

	// RVA: 0x1368514 Offset: 0x1364514 VA: 0x1368514
	public void set_renderingPath(RenderingPath value) { }

	// RVA: 0x1368558 Offset: 0x1364558 VA: 0x1368558
	public bool get_allowHDR() { }

	// RVA: 0x1368594 Offset: 0x1364594 VA: 0x1368594
	public void set_allowHDR(bool value) { }

	// RVA: 0x13685D8 Offset: 0x13645D8 VA: 0x13685D8
	public void set_allowMSAA(bool value) { }

	// RVA: 0x136861C Offset: 0x136461C VA: 0x136861C
	public float get_orthographicSize() { }

	// RVA: 0x1368658 Offset: 0x1364658 VA: 0x1368658
	public void set_orthographicSize(float value) { }

	// RVA: 0x13686A4 Offset: 0x13646A4 VA: 0x13686A4
	public bool get_orthographic() { }

	// RVA: 0x13686E0 Offset: 0x13646E0 VA: 0x13686E0
	public void set_orthographic(bool value) { }

	// RVA: 0x1368724 Offset: 0x1364724 VA: 0x1368724
	public float get_depth() { }

	// RVA: 0x1368760 Offset: 0x1364760 VA: 0x1368760
	public float get_aspect() { }

	// RVA: 0x136879C Offset: 0x136479C VA: 0x136879C
	public void ResetAspect() { }

	// RVA: 0x13687D8 Offset: 0x13647D8 VA: 0x13687D8
	public int get_cullingMask() { }

	// RVA: 0x1368814 Offset: 0x1364814 VA: 0x1368814
	public void set_cullingMask(int value) { }

	// RVA: 0x1368858 Offset: 0x1364858 VA: 0x1368858
	public int get_eventMask() { }

	// RVA: 0x1368894 Offset: 0x1364894 VA: 0x1368894
	public CameraType get_cameraType() { }

	// RVA: 0x13688D0 Offset: 0x13648D0 VA: 0x13688D0
	public bool get_useOcclusionCulling() { }

	// RVA: 0x136890C Offset: 0x136490C VA: 0x136890C
	public void set_useOcclusionCulling(bool value) { }

	// RVA: 0x1368950 Offset: 0x1364950 VA: 0x1368950
	public CameraClearFlags get_clearFlags() { }

	// RVA: 0x136898C Offset: 0x136498C VA: 0x136898C
	public Rect get_rect() { }

	// RVA: 0x1368A28 Offset: 0x1364A28 VA: 0x1368A28
	public Rect get_pixelRect() { }

	// RVA: 0x1368AC4 Offset: 0x1364AC4 VA: 0x1368AC4
	public int get_pixelWidth() { }

	// RVA: 0x1368B00 Offset: 0x1364B00 VA: 0x1368B00
	public int get_pixelHeight() { }

	// RVA: 0x1368B3C Offset: 0x1364B3C VA: 0x1368B3C
	public RenderTexture get_targetTexture() { }

	// RVA: 0x1368B78 Offset: 0x1364B78 VA: 0x1368B78
	public int get_targetDisplay() { }

	// RVA: 0x1368BB4 Offset: 0x1364BB4 VA: 0x1368BB4
	public Matrix4x4 get_projectionMatrix() { }

	// RVA: 0x1368C64 Offset: 0x1364C64 VA: 0x1368C64
	public void set_projectionMatrix(Matrix4x4 value) { }

	// RVA: 0x1368CEC Offset: 0x1364CEC VA: 0x1368CEC
	public Vector3 WorldToScreenPoint(Vector3 position, Camera.MonoOrStereoscopicEye eye) { }

	// RVA: 0x1368DB8 Offset: 0x1364DB8 VA: 0x1368DB8
	public Vector3 WorldToViewportPoint(Vector3 position, Camera.MonoOrStereoscopicEye eye) { }

	// RVA: 0x1368E84 Offset: 0x1364E84 VA: 0x1368E84
	public Vector3 ScreenToWorldPoint(Vector3 position, Camera.MonoOrStereoscopicEye eye) { }

	// RVA: 0x1368F50 Offset: 0x1364F50 VA: 0x1368F50
	public Vector3 WorldToScreenPoint(Vector3 position) { }

	// RVA: 0x1368F58 Offset: 0x1364F58 VA: 0x1368F58
	public Vector3 WorldToViewportPoint(Vector3 position) { }

	// RVA: 0x1368F60 Offset: 0x1364F60 VA: 0x1368F60
	public Vector3 ScreenToWorldPoint(Vector3 position) { }

	// RVA: 0x1368F68 Offset: 0x1364F68 VA: 0x1368F68
	public Vector3 ScreenToViewportPoint(Vector3 position) { }

	// RVA: 0x1369024 Offset: 0x1365024 VA: 0x1369024
	public Vector3 ViewportToScreenPoint(Vector3 position) { }

	// RVA: 0x13690E0 Offset: 0x13650E0 VA: 0x13690E0
	private Ray ScreenPointToRay(Vector2 pos, Camera.MonoOrStereoscopicEye eye) { }

	// RVA: 0x13691B4 Offset: 0x13651B4 VA: 0x13691B4
	public Ray ScreenPointToRay(Vector3 pos, Camera.MonoOrStereoscopicEye eye) { }

	// RVA: 0x13691EC Offset: 0x13651EC VA: 0x13691EC
	public Ray ScreenPointToRay(Vector3 pos) { }

	// RVA: 0x1369230 Offset: 0x1365230 VA: 0x1369230
	public static Camera get_main() { }

	// RVA: 0x1369258 Offset: 0x1365258 VA: 0x1369258
	public static Camera get_current() { }

	// RVA: 0x1369280 Offset: 0x1365280 VA: 0x1369280
	public void set_stereoTargetEye(StereoTargetEyeMask value) { }

	// RVA: 0x13692C4 Offset: 0x13652C4 VA: 0x13692C4
	private static int GetAllCamerasCount() { }

	// RVA: 0x13692EC Offset: 0x13652EC VA: 0x13692EC
	private static int GetAllCamerasImpl([Out] Camera[] cam) { }

	// RVA: 0x1369328 Offset: 0x1365328 VA: 0x1369328
	public static int get_allCamerasCount() { }

	// RVA: 0x1369350 Offset: 0x1365350 VA: 0x1369350
	public static Camera[] get_allCameras() { }

	// RVA: 0x13693F0 Offset: 0x13653F0 VA: 0x13693F0
	public static int GetAllCameras(Camera[] cameras) { }

	// RVA: 0x13694C8 Offset: 0x13654C8 VA: 0x13694C8
	public void Render() { }

	// RVA: 0x1369504 Offset: 0x1365504 VA: 0x1369504
	public static void SetupCurrent(Camera cur) { }

	// RVA: 0x1369540 Offset: 0x1365540 VA: 0x1369540
	private void AddCommandBufferImpl(CameraEvent evt, CommandBuffer buffer) { }

	// RVA: 0x1369594 Offset: 0x1365594 VA: 0x1369594
	private void RemoveCommandBufferImpl(CameraEvent evt, CommandBuffer buffer) { }

	// RVA: 0x13695E8 Offset: 0x13655E8 VA: 0x13695E8
	public void AddCommandBuffer(CameraEvent evt, CommandBuffer buffer) { }

	// RVA: 0x136971C Offset: 0x136571C VA: 0x136971C
	public void RemoveCommandBuffer(CameraEvent evt, CommandBuffer buffer) { }

	[RequiredByNativeCode]
	// RVA: 0x1369850 Offset: 0x1365850 VA: 0x1369850
	private static void FireOnPreCull(Camera cam) { }

	[RequiredByNativeCode]
	// RVA: 0x13698BC Offset: 0x13658BC VA: 0x13698BC
	private static void FireOnPreRender(Camera cam) { }

	[RequiredByNativeCode]
	// RVA: 0x1369928 Offset: 0x1365928 VA: 0x1369928
	private static void FireOnPostRender(Camera cam) { }

	// RVA: 0x13689E4 Offset: 0x13649E4 VA: 0x13689E4
	private void get_rect_Injected(out Rect ret) { }

	// RVA: 0x1368A80 Offset: 0x1364A80 VA: 0x1368A80
	private void get_pixelRect_Injected(out Rect ret) { }

	// RVA: 0x1368C20 Offset: 0x1364C20 VA: 0x1368C20
	private void get_projectionMatrix_Injected(out Matrix4x4 ret) { }

	// RVA: 0x1368CA8 Offset: 0x1364CA8 VA: 0x1368CA8
	private void set_projectionMatrix_Injected(ref Matrix4x4 value) { }

	// RVA: 0x1368D5C Offset: 0x1364D5C VA: 0x1368D5C
	private void WorldToScreenPoint_Injected(ref Vector3 position, Camera.MonoOrStereoscopicEye eye, out Vector3 ret) { }

	// RVA: 0x1368E28 Offset: 0x1364E28 VA: 0x1368E28
	private void WorldToViewportPoint_Injected(ref Vector3 position, Camera.MonoOrStereoscopicEye eye, out Vector3 ret) { }

	// RVA: 0x1368EF4 Offset: 0x1364EF4 VA: 0x1368EF4
	private void ScreenToWorldPoint_Injected(ref Vector3 position, Camera.MonoOrStereoscopicEye eye, out Vector3 ret) { }

	// RVA: 0x1368FD0 Offset: 0x1364FD0 VA: 0x1368FD0
	private void ScreenToViewportPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	// RVA: 0x136908C Offset: 0x136508C VA: 0x136908C
	private void ViewportToScreenPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	// RVA: 0x1369158 Offset: 0x1365158 VA: 0x1369158
	private void ScreenPointToRay_Injected(ref Vector2 pos, Camera.MonoOrStereoscopicEye eye, out Ray ret) { }
}


// Namespace: UnityEngine
public struct CullingGroupEvent // TypeDefIndex: 5405
{
	// Fields
	private int m_Index; // 0x0
	private byte m_PrevState; // 0x4
	private byte m_ThisState; // 0x5
}


// Namespace: 
public sealed class CullingGroup.StateChanged : MulticastDelegate // TypeDefIndex: 5406
{
	// Methods

	// RVA: 0x1369AA0 Offset: 0x1365AA0 VA: 0x1369AA0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1369B2C Offset: 0x1365B2C VA: 0x1369B2C Slot: 12
	public virtual void Invoke(CullingGroupEvent sphere) { }
}


// Namespace: UnityEngine
public class CullingGroup // TypeDefIndex: 5407
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private CullingGroup.StateChanged m_OnStateChanged; // 0x18

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1369A44 Offset: 0x1365A44 VA: 0x1369A44
	private static void SendEvents(CullingGroup cullingGroup, IntPtr eventsPtr, int count) { }
}


// Namespace: 
public enum ReflectionProbe.ReflectionProbeEvent // TypeDefIndex: 5408
{
	// Fields
	public int value__; // 0x0
	public const ReflectionProbe.ReflectionProbeEvent ReflectionProbeAdded = 0;
	public const ReflectionProbe.ReflectionProbeEvent ReflectionProbeRemoved = 1;
}


// Namespace: UnityEngine
public sealed class ReflectionProbe : Behaviour // TypeDefIndex: 5409
{
	// Fields
	[CompilerGenerated]
	private static Action<ReflectionProbe, ReflectionProbe.ReflectionProbeEvent> reflectionProbeChanged; // 0x0
	private static Dictionary<int, Action<Texture>> registeredDefaultReflectionSetActions; // 0x8
	private static List<Action<Texture>> registeredDefaultReflectionTextureActions; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1369B40 Offset: 0x1365B40 VA: 0x1369B40
	private static void CallReflectionProbeEvent(ReflectionProbe probe, ReflectionProbe.ReflectionProbeEvent probeEvent) { }

	[RequiredByNativeCode]
	// RVA: 0x1369BC8 Offset: 0x1365BC8 VA: 0x1369BC8
	private static void CallSetDefaultReflection(Texture defaultReflectionCubemap) { }

	// RVA: 0x1369D70 Offset: 0x1365D70 VA: 0x1369D70
	private static void .cctor() { }
}


// Namespace: UnityEngine
internal sealed class DebugLogHandler : ILogHandler // TypeDefIndex: 5410
{
	// Methods

	// RVA: 0x1369E4C Offset: 0x1365E4C VA: 0x1369E4C
	internal static void Internal_Log(LogType level, LogOption options, string msg, Object obj) { }

	// RVA: 0x1369EA8 Offset: 0x1365EA8 VA: 0x1369EA8
	internal static void Internal_LogException(Exception ex, Object obj) { }

	// RVA: 0x1369EEC Offset: 0x1365EEC VA: 0x1369EEC Slot: 4
	public void LogFormat(LogType logType, Object context, string format, object[] args) { }

	// RVA: 0x1369F54 Offset: 0x1365F54 VA: 0x1369F54
	public void LogFormat(LogType logType, LogOption logOptions, Object context, string format, object[] args) { }

	// RVA: 0x1369FC0 Offset: 0x1365FC0 VA: 0x1369FC0 Slot: 5
	public void LogException(Exception exception, Object context) { }

	// RVA: 0x136A050 Offset: 0x1366050 VA: 0x136A050
	public void .ctor() { }
}


// Namespace: UnityEngine
public class Debug // TypeDefIndex: 5411
{
	// Fields
	internal static readonly ILogger s_DefaultLogger; // 0x0
	internal static ILogger s_Logger; // 0x8

	// Properties
	public static ILogger unityLogger { get; }

	// Methods

	// RVA: 0x136A058 Offset: 0x1366058 VA: 0x136A058
	public static ILogger get_unityLogger() { }

	// RVA: 0x136A0B0 Offset: 0x13660B0 VA: 0x136A0B0
	public static int ExtractStackTraceNoAlloc(byte* buffer, int bufferMax, string projectFolder) { }

	// RVA: 0x136A104 Offset: 0x1366104 VA: 0x136A104
	public static void Log(object message) { }

	// RVA: 0x136A20C Offset: 0x136620C VA: 0x136A20C
	public static void LogFormat(LogType logType, LogOption logOptions, Object context, string format, object[] args) { }

	// RVA: 0x136A4E4 Offset: 0x13664E4 VA: 0x136A4E4
	public static void LogError(object message) { }

	// RVA: 0x136A5EC Offset: 0x13665EC VA: 0x136A5EC
	public static void LogError(object message, Object context) { }

	// RVA: 0x136A704 Offset: 0x1366704 VA: 0x136A704
	public static void LogErrorFormat(string format, object[] args) { }

	// RVA: 0x136A81C Offset: 0x136681C VA: 0x136A81C
	public static void LogErrorFormat(Object context, string format, object[] args) { }

	// RVA: 0x1367954 Offset: 0x1363954 VA: 0x1367954
	public static void LogException(Exception exception) { }

	// RVA: 0x136A938 Offset: 0x1366938 VA: 0x136A938
	public static void LogException(Exception exception, Object context) { }

	// RVA: 0x136AA4C Offset: 0x1366A4C VA: 0x136AA4C
	public static void LogWarning(object message) { }

	// RVA: 0x136AB54 Offset: 0x1366B54 VA: 0x136AB54
	public static void LogWarning(object message, Object context) { }

	// RVA: 0x136AC6C Offset: 0x1366C6C VA: 0x136AC6C
	public static void LogWarningFormat(string format, object[] args) { }

	// RVA: 0x136AD84 Offset: 0x1366D84 VA: 0x136AD84
	public static void LogWarningFormat(Object context, string format, object[] args) { }

	// RVA: 0x136AEA0 Offset: 0x1366EA0 VA: 0x136AEA0
	public static void Assert(bool condition) { }

	// RVA: 0x136AFD0 Offset: 0x1366FD0 VA: 0x136AFD0
	public static void Assert(bool condition, string message) { }

	// RVA: 0x136B0EC Offset: 0x13670EC VA: 0x136B0EC
	public static void LogAssertion(object message) { }

	// RVA: 0x136B1F4 Offset: 0x13671F4 VA: 0x136B1F4
	public static void LogAssertionFormat(string format, object[] args) { }

	[RequiredByNativeCode]
	// RVA: 0x136B30C Offset: 0x136730C VA: 0x136B30C
	internal static bool CallOverridenDebugHandler(Exception exception, Object obj) { }

	[RequiredByNativeCode]
	// RVA: 0x136B704 Offset: 0x1367704 VA: 0x136B704
	internal static bool IsLoggingEnabled() { }

	// RVA: 0x136B928 Offset: 0x1367928 VA: 0x136B928
	private static void .cctor() { }
}


// Namespace: 
internal class ExpressionEvaluator.Expression // TypeDefIndex: 5412
{
	// Fields
	internal readonly string[] rpnTokens; // 0x10
	internal readonly bool hasVariables; // 0x18

	// Methods

	// RVA: 0x136D6B0 Offset: 0x13696B0 VA: 0x136D6B0
	internal void .ctor(string expression) { }

	// RVA: -1 Offset: -1
	public bool Evaluate<T>(ref T value, int index = 0, int count = 1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB3444 Offset: 0xBAF444 VA: 0xBB3444
	|-ExpressionEvaluator.Expression.Evaluate<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x136D734 Offset: 0x1369734 VA: 0x136D734 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x136D7E4 Offset: 0x13697E4 VA: 0x136D7E4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x136D804 Offset: 0x1369804 VA: 0x136D804 Slot: 3
	public override string ToString() { }
}


// Namespace: 
private struct ExpressionEvaluator.PcgRandom // TypeDefIndex: 5413
{
	// Fields
	private readonly ulong increment; // 0x0
	private ulong state; // 0x8

	// Methods

	// RVA: 0x136D648 Offset: 0x1369648 VA: 0x136D648
	public void .ctor(ulong state = 0, ulong sequence = 0) { }

	// RVA: 0x136D0A0 Offset: 0x13690A0 VA: 0x136D0A0
	public uint GetUInt() { }

	// RVA: 0x136D888 Offset: 0x1369888 VA: 0x136D888
	private static uint RotateRight(uint v, int rot) { }

	// RVA: 0x136D870 Offset: 0x1369870 VA: 0x136D870
	private static uint XshRr(ulong s) { }

	// RVA: 0x136D850 Offset: 0x1369850 VA: 0x136D850
	private void Step() { }
}


// Namespace: 
private enum ExpressionEvaluator.Op // TypeDefIndex: 5414
{
	// Fields
	public int value__; // 0x0
	public const ExpressionEvaluator.Op Add = 0;
	public const ExpressionEvaluator.Op Sub = 1;
	public const ExpressionEvaluator.Op Mul = 2;
	public const ExpressionEvaluator.Op Div = 3;
	public const ExpressionEvaluator.Op Mod = 4;
	public const ExpressionEvaluator.Op Neg = 5;
	public const ExpressionEvaluator.Op Pow = 6;
	public const ExpressionEvaluator.Op Sqrt = 7;
	public const ExpressionEvaluator.Op Sin = 8;
	public const ExpressionEvaluator.Op Cos = 9;
	public const ExpressionEvaluator.Op Tan = 10;
	public const ExpressionEvaluator.Op Floor = 11;
	public const ExpressionEvaluator.Op Ceil = 12;
	public const ExpressionEvaluator.Op Round = 13;
	public const ExpressionEvaluator.Op Rand = 14;
	public const ExpressionEvaluator.Op Linear = 15;
}


// Namespace: 
private enum ExpressionEvaluator.Associativity // TypeDefIndex: 5415
{
	// Fields
	public int value__; // 0x0
	public const ExpressionEvaluator.Associativity Left = 0;
	public const ExpressionEvaluator.Associativity Right = 1;
}


// Namespace: 
private class ExpressionEvaluator.Operator // TypeDefIndex: 5416
{
	// Fields
	public readonly ExpressionEvaluator.Op op; // 0x10
	public readonly int precedence; // 0x14
	public readonly ExpressionEvaluator.Associativity associativity; // 0x18
	public readonly int inputs; // 0x1C

	// Methods

	// RVA: 0x136D670 Offset: 0x1369670 VA: 0x136D670
	public void .ctor(ExpressionEvaluator.Op op, int precedence, int inputs, ExpressionEvaluator.Associativity associativity) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ExpressionEvaluator.<>c // TypeDefIndex: 5417
{
	// Fields
	public static readonly ExpressionEvaluator.<>c <>9; // 0x0
	public static Func<string, bool> <>9__14_0; // 0x8

	// Methods

	// RVA: 0x136D890 Offset: 0x1369890 VA: 0x136D890
	private static void .cctor() { }

	// RVA: 0x136D8EC Offset: 0x13698EC VA: 0x136D8EC
	public void .ctor() { }

	// RVA: 0x136D8F4 Offset: 0x13698F4 VA: 0x136D8F4
	internal bool <ExpressionToTokens>b__14_0(string f) { }
}


// Namespace: UnityEngine
[MovedFrom(True, "UnityEditor", "UnityEditor", null)]
public class ExpressionEvaluator // TypeDefIndex: 5418
{
	// Fields
	private static ExpressionEvaluator.PcgRandom s_Random; // 0x0
	private static Dictionary<string, ExpressionEvaluator.Operator> s_Operators; // 0x10

	// Methods

	// RVA: -1 Offset: -1
	internal static bool Evaluate<T>(string expression, out T value, out ExpressionEvaluator.Expression delayed) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8870C Offset: 0xB8470C VA: 0xB8870C
	|-ExpressionEvaluator.Evaluate<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static bool EvaluateTokens<T>(string[] tokens, ref T value, int index, int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB88850 Offset: 0xB84850 VA: 0xB88850
	|-ExpressionEvaluator.EvaluateTokens<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x136BA5C Offset: 0x1367A5C VA: 0x136BA5C
	private static bool EvaluateDouble(string[] tokens, ref double value, int index, int count) { }

	// RVA: 0x136C470 Offset: 0x1368470 VA: 0x136C470
	private static string[] InfixToRPN(string[] tokens) { }

	// RVA: 0x136C910 Offset: 0x1368910 VA: 0x136C910
	private static bool NeedToPop(Stack<string> operatorStack, ExpressionEvaluator.Operator newOperator) { }

	// RVA: 0x136CA00 Offset: 0x1368A00 VA: 0x136CA00
	private static string[] ExpressionToTokens(string expression, out bool hasVariables) { }

	// RVA: 0x136C008 Offset: 0x1368008 VA: 0x136C008
	private static bool IsCommand(string token) { }

	// RVA: 0x136C408 Offset: 0x1368408 VA: 0x136C408
	private static bool IsVariable(string token) { }

	// RVA: 0x136C8A4 Offset: 0x13688A4 VA: 0x136C8A4
	private static bool IsDelayedFunction(string token) { }

	// RVA: 0x136BEE8 Offset: 0x1367EE8 VA: 0x136BEE8
	private static bool IsOperator(string token) { }

	// RVA: 0x136BF68 Offset: 0x1367F68 VA: 0x136BF68
	private static ExpressionEvaluator.Operator TokenToOperator(string token) { }

	// RVA: 0x136CD34 Offset: 0x1368D34 VA: 0x136CD34
	private static string PreFormatExpression(string expression) { }

	// RVA: 0x136CF24 Offset: 0x1368F24 VA: 0x136CF24
	private static string[] FixUnaryOperators(string[] tokens) { }

	// RVA: 0x136C0B4 Offset: 0x13680B4 VA: 0x136C0B4
	private static double EvaluateOp(double[] values, ExpressionEvaluator.Op op, int index, int count) { }

	// RVA: -1 Offset: -1
	private static bool TryParse<T>(string expression, out T result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB88D94 Offset: 0xB84D94 VA: 0xB88D94
	|-ExpressionEvaluator.TryParse<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x136D0D8 Offset: 0x13690D8 VA: 0x136D0D8
	private static void .cctor() { }
}


// Namespace: UnityEngine
public sealed class LightingSettings : Object // TypeDefIndex: 5419
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x136D974 Offset: 0x1369974 VA: 0x136D974
	internal void LightingSettingsDontStripMe() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct Bounds : IEquatable<Bounds>, IFormattable // TypeDefIndex: 5420
{
	// Fields
	private Vector3 m_Center; // 0x0
	private Vector3 m_Extents; // 0xC

	// Properties
	public Vector3 center { get; set; }
	public Vector3 size { get; set; }
	public Vector3 extents { get; set; }
	public Vector3 min { get; }
	public Vector3 max { get; }

	// Methods

	// RVA: 0x136D978 Offset: 0x1369978 VA: 0x136D978
	public void .ctor(Vector3 center, Vector3 size) { }

	// RVA: 0x136D998 Offset: 0x1369998 VA: 0x136D998 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x136DA68 Offset: 0x1369A68 VA: 0x136DA68 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x136DB38 Offset: 0x1369B38 VA: 0x136DB38 Slot: 4
	public bool Equals(Bounds other) { }

	// RVA: 0x136DBA4 Offset: 0x1369BA4 VA: 0x136DBA4
	public Vector3 get_center() { }

	// RVA: 0x136DBB0 Offset: 0x1369BB0 VA: 0x136DBB0
	public void set_center(Vector3 value) { }

	// RVA: 0x136DBBC Offset: 0x1369BBC VA: 0x136DBBC
	public Vector3 get_size() { }

	// RVA: 0x136DBD4 Offset: 0x1369BD4 VA: 0x136DBD4
	public void set_size(Vector3 value) { }

	// RVA: 0x136DBF0 Offset: 0x1369BF0 VA: 0x136DBF0
	public Vector3 get_extents() { }

	// RVA: 0x136DBFC Offset: 0x1369BFC VA: 0x136DBFC
	public void set_extents(Vector3 value) { }

	// RVA: 0x136DC08 Offset: 0x1369C08 VA: 0x136DC08
	public Vector3 get_min() { }

	// RVA: 0x136DC28 Offset: 0x1369C28 VA: 0x136DC28
	public Vector3 get_max() { }

	// RVA: 0x136DC48 Offset: 0x1369C48 VA: 0x136DC48
	public static bool op_Equality(Bounds lhs, Bounds rhs) { }

	// RVA: 0x136DCC4 Offset: 0x1369CC4 VA: 0x136DCC4
	public static bool op_Inequality(Bounds lhs, Bounds rhs) { }

	// RVA: 0x136DD40 Offset: 0x1369D40 VA: 0x136DD40
	public void SetMinMax(Vector3 min, Vector3 max) { }

	// RVA: 0x136DD78 Offset: 0x1369D78 VA: 0x136DD78
	public void Encapsulate(Vector3 point) { }

	// RVA: 0x136DDF0 Offset: 0x1369DF0 VA: 0x136DDF0 Slot: 3
	public override string ToString() { }

	// RVA: 0x136DE00 Offset: 0x1369E00 VA: 0x136DE00 Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct BoundsInt : IEquatable<BoundsInt>, IFormattable // TypeDefIndex: 5421
{
	// Fields
	private Vector3Int m_Position; // 0x0
	private Vector3Int m_Size; // 0xC

	// Properties
	public Vector3Int position { get; set; }
	public Vector3Int size { get; set; }

	// Methods

	// RVA: 0x136DF88 Offset: 0x1369F88 VA: 0x136DF88
	public Vector3Int get_position() { }

	// RVA: 0x136DF98 Offset: 0x1369F98 VA: 0x136DF98
	public void set_position(Vector3Int value) { }

	// RVA: 0x136DFA4 Offset: 0x1369FA4 VA: 0x136DFA4
	public Vector3Int get_size() { }

	// RVA: 0x136DFB4 Offset: 0x1369FB4 VA: 0x136DFB4
	public void set_size(Vector3Int value) { }

	// RVA: 0x136DFC0 Offset: 0x1369FC0 VA: 0x136DFC0
	public void .ctor(Vector3Int position, Vector3Int size) { }

	// RVA: 0x136DFD4 Offset: 0x1369FD4 VA: 0x136DFD4 Slot: 3
	public override string ToString() { }

	// RVA: 0x136DFE4 Offset: 0x1369FE4 VA: 0x136DFE4 Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x136E140 Offset: 0x136A140 VA: 0x136E140 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x136E214 Offset: 0x136A214 VA: 0x136E214 Slot: 4
	public bool Equals(BoundsInt other) { }

	// RVA: 0x136E28C Offset: 0x136A28C VA: 0x136E28C Slot: 2
	public override int GetHashCode() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct Plane : IFormattable // TypeDefIndex: 5422
{
	// Fields
	private Vector3 m_Normal; // 0x0
	private float m_Distance; // 0xC

	// Properties
	public Vector3 normal { get; }

	// Methods

	// RVA: 0x136E360 Offset: 0x136A360 VA: 0x136E360
	public Vector3 get_normal() { }

	// RVA: 0x136E36C Offset: 0x136A36C VA: 0x136E36C
	public void .ctor(Vector3 inNormal, Vector3 inPoint) { }

	// RVA: 0x136E47C Offset: 0x136A47C VA: 0x136E47C
	public bool Raycast(Ray ray, out float enter) { }

	// RVA: 0x136E57C Offset: 0x136A57C VA: 0x136E57C Slot: 3
	public override string ToString() { }

	// RVA: 0x136E58C Offset: 0x136A58C VA: 0x136E58C Slot: 4
	public string ToString(string format, IFormatProvider formatProvider) { }
}


// Namespace: UnityEngine
public struct Ray : IFormattable // TypeDefIndex: 5423
{
	// Fields
	private Vector3 m_Origin; // 0x0
	private Vector3 m_Direction; // 0xC

	// Properties
	public Vector3 origin { get; }
	public Vector3 direction { get; }

	// Methods

	// RVA: 0x136E714 Offset: 0x136A714 VA: 0x136E714
	public void .ctor(Vector3 origin, Vector3 direction) { }

	// RVA: 0x136E800 Offset: 0x136A800 VA: 0x136E800
	public Vector3 get_origin() { }

	// RVA: 0x136E80C Offset: 0x136A80C VA: 0x136E80C
	public Vector3 get_direction() { }

	// RVA: 0x136E818 Offset: 0x136A818 VA: 0x136E818
	public Vector3 GetPoint(float distance) { }

	// RVA: 0x136E840 Offset: 0x136A840 VA: 0x136E840 Slot: 3
	public override string ToString() { }

	// RVA: 0x136E850 Offset: 0x136A850 VA: 0x136E850 Slot: 4
	public string ToString(string format, IFormatProvider formatProvider) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct Rect : IEquatable<Rect>, IFormattable // TypeDefIndex: 5424
{
	// Fields
	private float m_XMin; // 0x0
	private float m_YMin; // 0x4
	private float m_Width; // 0x8
	private float m_Height; // 0xC

	// Properties
	public static Rect zero { get; }
	public float x { get; set; }
	public float y { get; set; }
	public Vector2 position { get; set; }
	public Vector2 center { get; set; }
	public Vector2 min { get; set; }
	public Vector2 max { get; set; }
	public float width { get; set; }
	public float height { get; set; }
	public Vector2 size { get; set; }
	public float xMin { get; set; }
	public float yMin { get; set; }
	public float xMax { get; set; }
	public float yMax { get; set; }

	// Methods

	// RVA: 0x136E9D8 Offset: 0x136A9D8 VA: 0x136E9D8
	public void .ctor(float x, float y, float width, float height) { }

	// RVA: 0x136E9E4 Offset: 0x136A9E4 VA: 0x136E9E4
	public void .ctor(Vector2 position, Vector2 size) { }

	// RVA: 0x136E9F0 Offset: 0x136A9F0 VA: 0x136E9F0
	public void .ctor(Rect source) { }

	// RVA: 0x136E9FC Offset: 0x136A9FC VA: 0x136E9FC
	public static Rect get_zero() { }

	// RVA: 0x136EA10 Offset: 0x136AA10 VA: 0x136EA10
	public static Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax) { }

	// RVA: 0x136EA1C Offset: 0x136AA1C VA: 0x136EA1C
	public float get_x() { }

	// RVA: 0x136EA24 Offset: 0x136AA24 VA: 0x136EA24
	public void set_x(float value) { }

	// RVA: 0x136EA2C Offset: 0x136AA2C VA: 0x136EA2C
	public float get_y() { }

	// RVA: 0x136EA34 Offset: 0x136AA34 VA: 0x136EA34
	public void set_y(float value) { }

	// RVA: 0x136EA3C Offset: 0x136AA3C VA: 0x136EA3C
	public Vector2 get_position() { }

	// RVA: 0x136EA44 Offset: 0x136AA44 VA: 0x136EA44
	public void set_position(Vector2 value) { }

	// RVA: 0x136EA4C Offset: 0x136AA4C VA: 0x136EA4C
	public Vector2 get_center() { }

	// RVA: 0x136EA64 Offset: 0x136AA64 VA: 0x136EA64
	public void set_center(Vector2 value) { }

	// RVA: 0x136EA80 Offset: 0x136AA80 VA: 0x136EA80
	public Vector2 get_min() { }

	// RVA: 0x136EA88 Offset: 0x136AA88 VA: 0x136EA88
	public void set_min(Vector2 value) { }

	// RVA: 0x136EAA4 Offset: 0x136AAA4 VA: 0x136EAA4
	public Vector2 get_max() { }

	// RVA: 0x136EAB4 Offset: 0x136AAB4 VA: 0x136EAB4
	public void set_max(Vector2 value) { }

	// RVA: 0x136EAC8 Offset: 0x136AAC8 VA: 0x136EAC8
	public float get_width() { }

	// RVA: 0x136EAD0 Offset: 0x136AAD0 VA: 0x136EAD0
	public void set_width(float value) { }

	// RVA: 0x136EAD8 Offset: 0x136AAD8 VA: 0x136EAD8
	public float get_height() { }

	// RVA: 0x136EAE0 Offset: 0x136AAE0 VA: 0x136EAE0
	public void set_height(float value) { }

	// RVA: 0x136EAE8 Offset: 0x136AAE8 VA: 0x136EAE8
	public Vector2 get_size() { }

	// RVA: 0x136EAF0 Offset: 0x136AAF0 VA: 0x136EAF0
	public void set_size(Vector2 value) { }

	// RVA: 0x136EAF8 Offset: 0x136AAF8 VA: 0x136EAF8
	public float get_xMin() { }

	// RVA: 0x136EB00 Offset: 0x136AB00 VA: 0x136EB00
	public void set_xMin(float value) { }

	// RVA: 0x136EB1C Offset: 0x136AB1C VA: 0x136EB1C
	public float get_yMin() { }

	// RVA: 0x136EB24 Offset: 0x136AB24 VA: 0x136EB24
	public void set_yMin(float value) { }

	// RVA: 0x136EB40 Offset: 0x136AB40 VA: 0x136EB40
	public float get_xMax() { }

	// RVA: 0x136EB50 Offset: 0x136AB50 VA: 0x136EB50
	public void set_xMax(float value) { }

	// RVA: 0x136EB60 Offset: 0x136AB60 VA: 0x136EB60
	public float get_yMax() { }

	// RVA: 0x136EB70 Offset: 0x136AB70 VA: 0x136EB70
	public void set_yMax(float value) { }

	// RVA: 0x136EB80 Offset: 0x136AB80 VA: 0x136EB80
	public bool Contains(Vector2 point) { }

	// RVA: 0x136EBC4 Offset: 0x136ABC4 VA: 0x136EBC4
	public bool Contains(Vector3 point) { }

	// RVA: 0x136EC08 Offset: 0x136AC08 VA: 0x136EC08
	private static Rect OrderMinMax(Rect rect) { }

	// RVA: 0x136EC34 Offset: 0x136AC34 VA: 0x136EC34
	public bool Overlaps(Rect other) { }

	// RVA: 0x136EC80 Offset: 0x136AC80 VA: 0x136EC80
	public bool Overlaps(Rect other, bool allowInverse) { }

	// RVA: 0x136ED14 Offset: 0x136AD14 VA: 0x136ED14
	public static bool op_Inequality(Rect lhs, Rect rhs) { }

	// RVA: 0x136ED48 Offset: 0x136AD48 VA: 0x136ED48
	public static bool op_Equality(Rect lhs, Rect rhs) { }

	// RVA: 0x136ED7C Offset: 0x136AD7C VA: 0x136ED7C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x136EE04 Offset: 0x136AE04 VA: 0x136EE04 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x136EEF0 Offset: 0x136AEF0 VA: 0x136EEF0 Slot: 4
	public bool Equals(Rect other) { }

	// RVA: 0x136EF90 Offset: 0x136AF90 VA: 0x136EF90 Slot: 3
	public override string ToString() { }

	// RVA: 0x136EF9C Offset: 0x136AF9C VA: 0x136EF9C Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct RectInt : IEquatable<RectInt>, IFormattable // TypeDefIndex: 5425
{
	// Fields
	private int m_XMin; // 0x0
	private int m_YMin; // 0x4
	private int m_Width; // 0x8
	private int m_Height; // 0xC

	// Properties
	public int x { get; set; }
	public int y { get; set; }
	public int width { get; set; }
	public int height { get; set; }
	public int xMin { get; }
	public int yMin { get; }
	public int xMax { get; }
	public int yMax { get; }

	// Methods

	// RVA: 0x136F1D0 Offset: 0x136B1D0 VA: 0x136F1D0
	public int get_x() { }

	// RVA: 0x136F1D8 Offset: 0x136B1D8 VA: 0x136F1D8
	public void set_x(int value) { }

	// RVA: 0x136F1E0 Offset: 0x136B1E0 VA: 0x136F1E0
	public int get_y() { }

	// RVA: 0x136F1E8 Offset: 0x136B1E8 VA: 0x136F1E8
	public void set_y(int value) { }

	// RVA: 0x136F1F0 Offset: 0x136B1F0 VA: 0x136F1F0
	public int get_width() { }

	// RVA: 0x136F1F8 Offset: 0x136B1F8 VA: 0x136F1F8
	public void set_width(int value) { }

	// RVA: 0x136F200 Offset: 0x136B200 VA: 0x136F200
	public int get_height() { }

	// RVA: 0x136F208 Offset: 0x136B208 VA: 0x136F208
	public void set_height(int value) { }

	// RVA: 0x136F210 Offset: 0x136B210 VA: 0x136F210
	public int get_xMin() { }

	// RVA: 0x136F274 Offset: 0x136B274 VA: 0x136F274
	public int get_yMin() { }

	// RVA: 0x136F2D8 Offset: 0x136B2D8 VA: 0x136F2D8
	public int get_xMax() { }

	// RVA: 0x136F33C Offset: 0x136B33C VA: 0x136F33C
	public int get_yMax() { }

	// RVA: 0x136F3A0 Offset: 0x136B3A0 VA: 0x136F3A0
	public void .ctor(int xMin, int yMin, int width, int height) { }

	// RVA: 0x136F3AC Offset: 0x136B3AC VA: 0x136F3AC
	public bool Overlaps(RectInt other) { }

	// RVA: 0x136F64C Offset: 0x136B64C VA: 0x136F64C Slot: 3
	public override string ToString() { }

	// RVA: 0x136F65C Offset: 0x136B65C VA: 0x136F65C Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x136F864 Offset: 0x136B864 VA: 0x136F864 Slot: 4
	public bool Equals(RectInt other) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
[Serializable]
public class RectOffset : IFormattable // TypeDefIndex: 5426
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private readonly object m_SourceStyle; // 0x18

	// Properties
	public int left { get; set; }
	public int right { get; set; }
	public int top { get; set; }
	public int bottom { get; set; }
	public int horizontal { get; }
	public int vertical { get; }

	// Methods

	// RVA: 0x136F8A8 Offset: 0x136B8A8 VA: 0x136F8A8
	public void .ctor() { }

	// RVA: 0x136F918 Offset: 0x136B918 VA: 0x136F918
	internal void .ctor(object sourceStyle, IntPtr source) { }

	// RVA: 0x136F944 Offset: 0x136B944 VA: 0x136F944 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x136FA40 Offset: 0x136BA40 VA: 0x136FA40
	public void .ctor(int left, int right, int top, int bottom) { }

	// RVA: 0x136FC64 Offset: 0x136BC64 VA: 0x136FC64 Slot: 3
	public override string ToString() { }

	// RVA: 0x136FC74 Offset: 0x136BC74 VA: 0x136FC74 Slot: 4
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x136F9E4 Offset: 0x136B9E4 VA: 0x136F9E4
	private void Destroy() { }

	// RVA: 0x136F8F0 Offset: 0x136B8F0 VA: 0x136F8F0
	private static IntPtr InternalCreate() { }

	// RVA: 0x136FFFC Offset: 0x136BFFC VA: 0x136FFFC
	private static void InternalDestroy(IntPtr ptr) { }

	// RVA: 0x136FF0C Offset: 0x136BF0C VA: 0x136FF0C
	public int get_left() { }

	// RVA: 0x136FB54 Offset: 0x136BB54 VA: 0x136FB54
	public void set_left(int value) { }

	// RVA: 0x136FF48 Offset: 0x136BF48 VA: 0x136FF48
	public int get_right() { }

	// RVA: 0x136FB98 Offset: 0x136BB98 VA: 0x136FB98
	public void set_right(int value) { }

	// RVA: 0x136FF84 Offset: 0x136BF84 VA: 0x136FF84
	public int get_top() { }

	// RVA: 0x136FBDC Offset: 0x136BBDC VA: 0x136FBDC
	public void set_top(int value) { }

	// RVA: 0x136FFC0 Offset: 0x136BFC0 VA: 0x136FFC0
	public int get_bottom() { }

	// RVA: 0x136FC20 Offset: 0x136BC20 VA: 0x136FC20
	public void set_bottom(int value) { }

	// RVA: 0x1370038 Offset: 0x136C038 VA: 0x1370038
	public int get_horizontal() { }

	// RVA: 0x1370074 Offset: 0x136C074 VA: 0x1370074
	public int get_vertical() { }

	// RVA: 0x13700B0 Offset: 0x136C0B0 VA: 0x13700B0
	public Rect Remove(Rect rect) { }

	// RVA: 0x1370114 Offset: 0x136C114 VA: 0x1370114
	private void Remove_Injected(ref Rect rect, out Rect ret) { }
}


// Namespace: 
private struct BeforeRenderHelper.OrderBlock // TypeDefIndex: 5427
{
	// Fields
	internal int order; // 0x0
	internal UnityAction callback; // 0x8
}


// Namespace: UnityEngine
internal static class BeforeRenderHelper // TypeDefIndex: 5428
{
	// Fields
	private static List<BeforeRenderHelper.OrderBlock> s_OrderBlocks; // 0x0

	// Methods

	// RVA: 0x1367C68 Offset: 0x1363C68 VA: 0x1367C68
	public static void Invoke() { }

	// RVA: 0x1370168 Offset: 0x136C168 VA: 0x1370168
	private static void .cctor() { }
}


// Namespace: UnityEngine
public static class CustomRenderTextureManager // TypeDefIndex: 5429
{
	// Fields
	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureLoaded; // 0x0
	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureUnloaded; // 0x8

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13701F4 Offset: 0x136C1F4 VA: 0x13701F4
	private static void InvokeOnTextureLoaded_Internal(CustomRenderTexture source) { }

	[RequiredByNativeCode]
	// RVA: 0x1370260 Offset: 0x136C260 VA: 0x1370260
	private static void InvokeOnTextureUnloaded_Internal(CustomRenderTexture source) { }
}


// Namespace: 
public sealed class Display.DisplaysUpdatedDelegate : MulticastDelegate // TypeDefIndex: 5430
{
	// Methods

	// RVA: 0x1370A84 Offset: 0x136CA84 VA: 0x1370A84
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1370B0C Offset: 0x136CB0C VA: 0x1370B0C Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class Display // TypeDefIndex: 5431
{
	// Fields
	internal IntPtr nativeDisplay; // 0x10
	public static Display[] displays; // 0x0
	private static Display _mainDisplay; // 0x8
	private static int m_ActiveEditorGameViewTarget; // 0x10
	[CompilerGenerated]
	private static Display.DisplaysUpdatedDelegate onDisplaysUpdated; // 0x18

	// Properties
	public int renderingWidth { get; }
	public int renderingHeight { get; }
	public int systemWidth { get; }
	public int systemHeight { get; }
	public static Display main { get; }

	// Methods

	// RVA: 0x13702CC Offset: 0x136C2CC VA: 0x13702CC
	internal void .ctor() { }

	// RVA: 0x1370308 Offset: 0x136C308 VA: 0x1370308
	internal void .ctor(IntPtr nativeDisplay) { }

	// RVA: 0x1370330 Offset: 0x136C330 VA: 0x1370330
	public int get_renderingWidth() { }

	// RVA: 0x1370418 Offset: 0x136C418 VA: 0x1370418
	public int get_renderingHeight() { }

	// RVA: 0x13704AC Offset: 0x136C4AC VA: 0x13704AC
	public int get_systemWidth() { }

	// RVA: 0x1370594 Offset: 0x136C594 VA: 0x1370594
	public int get_systemHeight() { }

	// RVA: 0x1370628 Offset: 0x136C628 VA: 0x1370628
	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates) { }

	// RVA: 0x1370744 Offset: 0x136C744 VA: 0x1370744
	public static Display get_main() { }

	[RequiredByNativeCode]
	// RVA: 0x137079C Offset: 0x136C79C VA: 0x137079C
	internal static void RecreateDisplayList(IntPtr[] nativeDisplay) { }

	[RequiredByNativeCode]
	// RVA: 0x13708E4 Offset: 0x136C8E4 VA: 0x13708E4
	internal static void FireDisplaysUpdated() { }

	// RVA: 0x1370540 Offset: 0x136C540 VA: 0x1370540
	private static void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h) { }

	// RVA: 0x13703C4 Offset: 0x136C3C4 VA: 0x13703C4
	private static void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h) { }

	// RVA: 0x13706E8 Offset: 0x136C6E8 VA: 0x13706E8
	private static int RelativeMouseAtImpl(int x, int y, out int rx, out int ry) { }

	// RVA: 0x1370978 Offset: 0x136C978 VA: 0x1370978
	private static void .cctor() { }
}


// Namespace: UnityEngine
public struct RefreshRate : IEquatable<RefreshRate>, IComparable<RefreshRate> // TypeDefIndex: 5432
{
	// Fields
	public uint numerator; // 0x0
	public uint denominator; // 0x4

	// Properties
	public double value { get; }

	// Methods

	// RVA: 0x1370B20 Offset: 0x136CB20 VA: 0x1370B20
	public double get_value() { }

	// RVA: 0x1370B34 Offset: 0x136CB34 VA: 0x1370B34 Slot: 4
	public bool Equals(RefreshRate other) { }

	// RVA: 0x1370B70 Offset: 0x136CB70 VA: 0x1370B70 Slot: 5
	public int CompareTo(RefreshRate other) { }

	// RVA: 0x1370BC0 Offset: 0x136CBC0 VA: 0x1370BC0 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine
public sealed class Screen // TypeDefIndex: 5433
{
	// Properties
	public static int width { get; }
	public static int height { get; }
	public static float dpi { get; }
	public static ScreenOrientation orientation { get; }
	public static int sleepTimeout { set; }
	public static Resolution currentResolution { get; }
	public static bool fullScreen { get; set; }

	// Methods

	// RVA: 0x1370C5C Offset: 0x136CC5C VA: 0x1370C5C
	public static int get_width() { }

	// RVA: 0x1370C84 Offset: 0x136CC84 VA: 0x1370C84
	public static int get_height() { }

	// RVA: 0x1370CAC Offset: 0x136CCAC VA: 0x1370CAC
	public static float get_dpi() { }

	// RVA: 0x1370CD4 Offset: 0x136CCD4 VA: 0x1370CD4
	private static ScreenOrientation GetScreenOrientation() { }

	// RVA: 0x1370CFC Offset: 0x136CCFC VA: 0x1370CFC
	public static ScreenOrientation get_orientation() { }

	// RVA: 0x1370D24 Offset: 0x136CD24 VA: 0x1370D24
	public static void set_sleepTimeout(int value) { }

	// RVA: 0x1370D60 Offset: 0x136CD60 VA: 0x1370D60
	public static Resolution get_currentResolution() { }

	// RVA: 0x1370DE0 Offset: 0x136CDE0 VA: 0x1370DE0
	public static bool get_fullScreen() { }

	// RVA: 0x1370E08 Offset: 0x136CE08 VA: 0x1370E08
	public static void set_fullScreen(bool value) { }

	// RVA: 0x1370DA4 Offset: 0x136CDA4 VA: 0x1370DA4
	private static void get_currentResolution_Injected(out Resolution ret) { }
}


// Namespace: UnityEngine
public struct RenderBuffer // TypeDefIndex: 5434
{
	// Fields
	internal int m_RenderTextureInstanceID; // 0x0
	internal IntPtr m_BufferPtr; // 0x8
}


// Namespace: UnityEngine
public enum ComputeBufferMode // TypeDefIndex: 5435
{
	// Fields
	public int value__; // 0x0
	public const ComputeBufferMode Immutable = 0;
	public const ComputeBufferMode Dynamic = 1;
	[Obsolete("ComputeBufferMode.Circular is deprecated (legacy mode)")]
	public const ComputeBufferMode Circular = 2;
	[Obsolete("ComputeBufferMode.StreamOut is deprecated (internal use only)")]
	public const ComputeBufferMode StreamOut = 3;
	public const ComputeBufferMode SubUpdates = 4;
}


// Namespace: UnityEngine
public class Graphics // TypeDefIndex: 5436
{
	// Fields
	internal static readonly int kMaxDrawMeshInstanceCount; // 0x0
	internal static Dictionary<int, RenderInstancedDataLayout> s_RenderInstancedDataLayouts; // 0x8

	// Methods

	// RVA: 0x1370E44 Offset: 0x136CE44 VA: 0x1370E44
	private static int Internal_GetMaxDrawMeshInstanceCount() { }

	// RVA: 0x1370E6C Offset: 0x136CE6C VA: 0x1370E6C
	private static void Internal_SetNullRT() { }

	// RVA: 0x1370E94 Offset: 0x136CE94 VA: 0x1370E94
	private static void Internal_SetRTSimple(RenderBuffer color, RenderBuffer depth, int mip, CubemapFace face, int depthSlice) { }

	// RVA: 0x1370FA8 Offset: 0x136CFA8 VA: 0x1370FA8
	private static void Internal_DrawMeshNow2(Mesh mesh, int subsetIndex, Matrix4x4 matrix) { }

	// RVA: 0x1371088 Offset: 0x136D088 VA: 0x1371088
	private static void Internal_BlitMaterial5(Texture source, RenderTexture dest, Material mat, int pass, bool setRT) { }

	// RVA: 0x13710F4 Offset: 0x136D0F4 VA: 0x13710F4
	private static void Blit2(Texture source, RenderTexture dest) { }

	// RVA: 0x1371138 Offset: 0x136D138 VA: 0x1371138
	public static void ExecuteCommandBuffer(CommandBuffer buffer) { }

	// RVA: 0x1371174 Offset: 0x136D174 VA: 0x1371174
	internal static void SetRenderTargetImpl(RenderBuffer colorBuffer, RenderBuffer depthBuffer, int mipLevel, CubemapFace face, int depthSlice) { }

	// RVA: 0x1371210 Offset: 0x136D210 VA: 0x1371210
	internal static void SetRenderTargetImpl(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice) { }

	// RVA: 0x1371344 Offset: 0x136D344 VA: 0x1371344
	public static void SetRenderTarget(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice) { }

	// RVA: 0x13713C0 Offset: 0x136D3C0 VA: 0x13713C0
	public static void DrawMeshNow(Mesh mesh, Matrix4x4 matrix, int materialIndex) { }

	// RVA: 0x13714D8 Offset: 0x136D4D8 VA: 0x13714D8
	public static void Blit(Texture source, RenderTexture dest) { }

	// RVA: 0x137155C Offset: 0x136D55C VA: 0x137155C
	public static void Blit(Texture source, RenderTexture dest, Material mat, int pass) { }

	// RVA: 0x13715FC Offset: 0x136D5FC VA: 0x13715FC
	public static void Blit(Texture source, RenderTexture dest, Material mat) { }

	// RVA: 0x137166C Offset: 0x136D66C VA: 0x137166C
	public static void SetRenderTarget(RenderTexture rt) { }

	// RVA: 0x13716CC Offset: 0x136D6CC VA: 0x13716CC
	private static void .cctor() { }

	// RVA: 0x1370F3C Offset: 0x136CF3C VA: 0x1370F3C
	private static void Internal_SetRTSimple_Injected(ref RenderBuffer color, ref RenderBuffer depth, int mip, CubemapFace face, int depthSlice) { }

	// RVA: 0x1371034 Offset: 0x136D034 VA: 0x1371034
	private static void Internal_DrawMeshNow2_Injected(Mesh mesh, int subsetIndex, ref Matrix4x4 matrix) { }
}


// Namespace: UnityEngine
public sealed class GL // TypeDefIndex: 5437
{
	// Properties
	public static Matrix4x4 modelview { set; }

	// Methods

	// RVA: 0x1371788 Offset: 0x136D788 VA: 0x1371788
	public static void Vertex3(float x, float y, float z) { }

	// RVA: 0x13717D8 Offset: 0x136D7D8 VA: 0x13717D8
	public static void TexCoord3(float x, float y, float z) { }

	// RVA: 0x1371828 Offset: 0x136D828 VA: 0x1371828
	public static void TexCoord2(float x, float y) { }

	// RVA: 0x137186C Offset: 0x136D86C VA: 0x137186C
	private static void ImmediateColor(float r, float g, float b, float a) { }

	// RVA: 0x13718C4 Offset: 0x136D8C4 VA: 0x13718C4
	public static void Color(Color c) { }

	// RVA: 0x137191C Offset: 0x136D91C VA: 0x137191C
	private static void SetViewMatrix(Matrix4x4 m) { }

	// RVA: 0x1371994 Offset: 0x136D994 VA: 0x1371994
	public static void set_modelview(Matrix4x4 value) { }

	// RVA: 0x13719E0 Offset: 0x136D9E0 VA: 0x13719E0
	public static void PushMatrix() { }

	// RVA: 0x1371A08 Offset: 0x136DA08 VA: 0x1371A08
	public static void PopMatrix() { }

	// RVA: 0x1371A30 Offset: 0x136DA30 VA: 0x1371A30
	public static void LoadOrtho() { }

	// RVA: 0x1371A58 Offset: 0x136DA58 VA: 0x1371A58
	public static void LoadProjectionMatrix(Matrix4x4 mat) { }

	// RVA: 0x1371AD0 Offset: 0x136DAD0 VA: 0x1371AD0
	private static void GLLoadPixelMatrixScript(float left, float right, float bottom, float top) { }

	// RVA: 0x1371B28 Offset: 0x136DB28 VA: 0x1371B28
	public static void LoadPixelMatrix(float left, float right, float bottom, float top) { }

	// RVA: 0x1371B80 Offset: 0x136DB80 VA: 0x1371B80
	private static void GLIssuePluginEvent(IntPtr callback, int eventID) { }

	// RVA: 0x1371BC4 Offset: 0x136DBC4 VA: 0x1371BC4
	public static void IssuePluginEvent(IntPtr callback, int eventID) { }

	// RVA: 0x1371C74 Offset: 0x136DC74 VA: 0x1371C74
	public static void Begin(int mode) { }

	// RVA: 0x1371CB0 Offset: 0x136DCB0 VA: 0x1371CB0
	public static void End() { }

	// RVA: 0x1371CD8 Offset: 0x136DCD8 VA: 0x1371CD8
	private static void GLClear(bool clearDepth, bool clearColor, Color backgroundColor, float depth) { }

	// RVA: 0x1371DA8 Offset: 0x136DDA8 VA: 0x1371DA8
	public static void Clear(bool clearDepth, bool clearColor, Color backgroundColor, float depth) { }

	// RVA: 0x1371DB4 Offset: 0x136DDB4 VA: 0x1371DB4
	public static void Viewport(Rect pixelRect) { }

	// RVA: 0x1371958 Offset: 0x136D958 VA: 0x1371958
	private static void SetViewMatrix_Injected(ref Matrix4x4 m) { }

	// RVA: 0x1371A94 Offset: 0x136DA94 VA: 0x1371A94
	private static void LoadProjectionMatrix_Injected(ref Matrix4x4 mat) { }

	// RVA: 0x1371D44 Offset: 0x136DD44 VA: 0x1371D44
	private static void GLClear_Injected(bool clearDepth, bool clearColor, ref Color backgroundColor, float depth) { }

	// RVA: 0x1371DF8 Offset: 0x136DDF8 VA: 0x1371DF8
	private static void Viewport_Injected(ref Rect pixelRect) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class LightmapData // TypeDefIndex: 5438
{
	// Fields
	internal Texture2D m_Light; // 0x10
	internal Texture2D m_Dir; // 0x18
	internal Texture2D m_ShadowMask; // 0x20

	// Properties
	public Texture2D lightmapColor { set; }

	// Methods

	// RVA: 0x1371E34 Offset: 0x136DE34 VA: 0x1371E34
	public void set_lightmapColor(Texture2D value) { }

	// RVA: 0x1371E3C Offset: 0x136DE3C VA: 0x1371E3C
	public void .ctor() { }
}


// Namespace: UnityEngine
public sealed class LightmapSettings : Object // TypeDefIndex: 5439
{
	// Properties
	public static LightmapData[] lightmaps { get; set; }

	// Methods

	// RVA: 0x1371E44 Offset: 0x136DE44 VA: 0x1371E44
	public static LightmapData[] get_lightmaps() { }

	// RVA: 0x1371E6C Offset: 0x136DE6C VA: 0x1371E6C
	public static void set_lightmaps(LightmapData[] value) { }
}


// Namespace: UnityEngine
public sealed class LightProbes : Object // TypeDefIndex: 5440
{
	// Fields
	[CompilerGenerated]
	private static Action lightProbesUpdated; // 0x0
	[CompilerGenerated]
	private static Action tetrahedralizationCompleted; // 0x8
	[CompilerGenerated]
	private static Action needsRetetrahedralization; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1371EA8 Offset: 0x136DEA8 VA: 0x1371EA8
	private static void Internal_CallLightProbesUpdatedFunction() { }

	[RequiredByNativeCode]
	// RVA: 0x1371F0C Offset: 0x136DF0C VA: 0x1371F0C
	private static void Internal_CallTetrahedralizationCompletedFunction() { }

	[RequiredByNativeCode]
	// RVA: 0x1371F70 Offset: 0x136DF70 VA: 0x1371F70
	private static void Internal_CallNeedsRetetrahedralizationFunction() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public struct Resolution // TypeDefIndex: 5441
{
	// Fields
	private int m_Width; // 0x0
	private int m_Height; // 0x4
	private RefreshRate m_RefreshRate; // 0x8

	// Properties
	public int width { get; }
	public int height { get; }
	public RefreshRate refreshRateRatio { get; }

	// Methods

	// RVA: 0x1371FD4 Offset: 0x136DFD4 VA: 0x1371FD4
	public int get_width() { }

	// RVA: 0x1371FDC Offset: 0x136DFDC VA: 0x1371FDC
	public int get_height() { }

	// RVA: 0x1371FE4 Offset: 0x136DFE4 VA: 0x1371FE4
	public RefreshRate get_refreshRateRatio() { }

	// RVA: 0x1371FEC Offset: 0x136DFEC VA: 0x1371FEC Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine
internal struct RenderInstancedDataLayout // TypeDefIndex: 5442
{
	// Fields
	[CompilerGenerated]
	private readonly int <size>k__BackingField; // 0x0
	[CompilerGenerated]
	private readonly int <offsetObjectToWorld>k__BackingField; // 0x4
	[CompilerGenerated]
	private readonly int <offsetPrevObjectToWorld>k__BackingField; // 0x8
	[CompilerGenerated]
	private readonly int <offsetRenderingLayerMask>k__BackingField; // 0xC
}


// Namespace: UnityEngine
public sealed class QualitySettings : Object // TypeDefIndex: 5443
{
	// Fields
	[CompilerGenerated]
	private static Action<int, int> activeQualityLevelChanged; // 0x0

	// Properties
	public static ShadowQuality shadows { set; }
	public static ColorSpace activeColorSpace { get; }

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x137216C Offset: 0x136E16C VA: 0x137216C
	internal static void OnActiveQualityLevelChanged(int previousQualityLevel, int currentQualityLevel) { }

	// RVA: 0x13721E4 Offset: 0x136E1E4 VA: 0x13721E4
	public static void SetQualityLevel(int index) { }

	// RVA: 0x1372268 Offset: 0x136E268 VA: 0x1372268
	public static void set_shadows(ShadowQuality value) { }

	// RVA: 0x1372224 Offset: 0x136E224 VA: 0x1372224
	public static void SetQualityLevel(int index, bool applyExpensiveChanges) { }

	// RVA: 0x13722A4 Offset: 0x136E2A4 VA: 0x13722A4
	public static ColorSpace get_activeColorSpace() { }
}


// Namespace: UnityEngine
public sealed class MaterialPropertyBlock // TypeDefIndex: 5444
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x13722CC Offset: 0x136E2CC VA: 0x13722CC
	private void SetTextureImpl(int name, Texture value) { }

	// RVA: 0x1372320 Offset: 0x136E320 VA: 0x1372320
	private void SetVectorArrayImpl(int name, Vector4[] values, int count) { }

	// RVA: 0x137237C Offset: 0x136E37C VA: 0x137237C
	private static IntPtr CreateImpl() { }

	// RVA: 0x13723A4 Offset: 0x136E3A4 VA: 0x13723A4
	private static void DestroyImpl(IntPtr mpb) { }

	// RVA: 0x13723E0 Offset: 0x136E3E0 VA: 0x13723E0
	private void Clear(bool keepMemory) { }

	// RVA: 0x1372424 Offset: 0x136E424 VA: 0x1372424
	public void Clear() { }

	// RVA: 0x1372464 Offset: 0x136E464 VA: 0x1372464
	private void SetVectorArray(int name, Vector4[] values, int count) { }

	// RVA: 0x1372570 Offset: 0x136E570 VA: 0x1372570
	public void .ctor() { }

	// RVA: 0x13725B8 Offset: 0x136E5B8 VA: 0x13725B8 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x137264C Offset: 0x136E64C VA: 0x137264C
	private void Dispose() { }

	// RVA: 0x13726F0 Offset: 0x136E6F0 VA: 0x13726F0
	public void SetTexture(int nameID, Texture value) { }

	// RVA: 0x1372744 Offset: 0x136E744 VA: 0x1372744
	public void SetVectorArray(int nameID, Vector4[] values) { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
[UsedByNativeCode]
public class Renderer : Component // TypeDefIndex: 5445
{
	// Properties
	public Bounds bounds { get; }
	public bool enabled { get; set; }
	public bool isVisible { get; }
	public ShadowCastingMode shadowCastingMode { set; }
	public int sortingLayerID { get; }
	public int sortingOrder { get; set; }
	internal int sortingGroupID { get; }
	internal int sortingGroupOrder { get; }
	public bool isPartOfStaticBatch { get; }
	public int lightmapIndex { get; set; }
	public Vector4 lightmapScaleOffset { get; set; }
	public Material[] materials { get; set; }
	public Material material { get; set; }
	public Material[] sharedMaterials { get; }

	// Methods

	// RVA: 0x137275C Offset: 0x136E75C VA: 0x137275C
	public Bounds get_bounds() { }

	// RVA: 0x1372808 Offset: 0x136E808 VA: 0x1372808
	private void SetStaticLightmapST(Vector4 st) { }

	// RVA: 0x13728A0 Offset: 0x136E8A0 VA: 0x13728A0
	private Material GetMaterial() { }

	// RVA: 0x13728DC Offset: 0x136E8DC VA: 0x13728DC
	private void SetMaterial(Material m) { }

	// RVA: 0x1372920 Offset: 0x136E920 VA: 0x1372920
	private Material[] GetMaterialArray() { }

	// RVA: 0x137295C Offset: 0x136E95C VA: 0x137295C
	private void SetMaterialArray(Material[] m, int length) { }

	// RVA: 0x13729B0 Offset: 0x136E9B0 VA: 0x13729B0
	private void SetMaterialArray(Material[] m) { }

	// RVA: 0x1372A18 Offset: 0x136EA18 VA: 0x1372A18
	public bool get_enabled() { }

	// RVA: 0x1372A54 Offset: 0x136EA54 VA: 0x1372A54
	public void set_enabled(bool value) { }

	// RVA: 0x1372A98 Offset: 0x136EA98 VA: 0x1372A98
	public bool get_isVisible() { }

	// RVA: 0x1372AD4 Offset: 0x136EAD4 VA: 0x1372AD4
	public void set_shadowCastingMode(ShadowCastingMode value) { }

	// RVA: 0x1372B18 Offset: 0x136EB18 VA: 0x1372B18
	public int get_sortingLayerID() { }

	// RVA: 0x1372B54 Offset: 0x136EB54 VA: 0x1372B54
	public int get_sortingOrder() { }

	// RVA: 0x1372B90 Offset: 0x136EB90 VA: 0x1372B90
	public void set_sortingOrder(int value) { }

	// RVA: 0x1372BD4 Offset: 0x136EBD4 VA: 0x1372BD4
	internal int get_sortingGroupID() { }

	// RVA: 0x1372C10 Offset: 0x136EC10 VA: 0x1372C10
	internal int get_sortingGroupOrder() { }

	// RVA: 0x1372C4C Offset: 0x136EC4C VA: 0x1372C4C
	public bool get_isPartOfStaticBatch() { }

	// RVA: 0x1372C88 Offset: 0x136EC88 VA: 0x1372C88
	private int GetLightmapIndex(LightmapType lt) { }

	// RVA: 0x1372CCC Offset: 0x136ECCC VA: 0x1372CCC
	private void SetLightmapIndex(int index, LightmapType lt) { }

	// RVA: 0x1372D20 Offset: 0x136ED20 VA: 0x1372D20
	private Vector4 GetLightmapST(LightmapType lt) { }

	// RVA: 0x1372DD4 Offset: 0x136EDD4 VA: 0x1372DD4
	public int get_lightmapIndex() { }

	// RVA: 0x1372E14 Offset: 0x136EE14 VA: 0x1372E14
	public void set_lightmapIndex(int value) { }

	// RVA: 0x1372E5C Offset: 0x136EE5C VA: 0x1372E5C
	public Vector4 get_lightmapScaleOffset() { }

	// RVA: 0x1372E64 Offset: 0x136EE64 VA: 0x1372E64
	public void set_lightmapScaleOffset(Vector4 value) { }

	// RVA: 0x1372E68 Offset: 0x136EE68 VA: 0x1372E68
	private Material[] GetSharedMaterialArray() { }

	// RVA: 0x1372EA4 Offset: 0x136EEA4 VA: 0x1372EA4
	public Material[] get_materials() { }

	// RVA: 0x1372EE0 Offset: 0x136EEE0 VA: 0x1372EE0
	public void set_materials(Material[] value) { }

	// RVA: 0x1372EE4 Offset: 0x136EEE4 VA: 0x1372EE4
	public Material get_material() { }

	// RVA: 0x1372F20 Offset: 0x136EF20 VA: 0x1372F20
	public void set_material(Material value) { }

	// RVA: 0x1372F64 Offset: 0x136EF64 VA: 0x1372F64
	public Material[] get_sharedMaterials() { }

	// RVA: 0x1372FA0 Offset: 0x136EFA0 VA: 0x1372FA0
	public void .ctor() { }

	// RVA: 0x13727C4 Offset: 0x136E7C4 VA: 0x13727C4
	private void get_bounds_Injected(out Bounds ret) { }

	// RVA: 0x137285C Offset: 0x136E85C VA: 0x137285C
	private void SetStaticLightmapST_Injected(ref Vector4 st) { }

	// RVA: 0x1372D80 Offset: 0x136ED80 VA: 0x1372D80
	private void GetLightmapST_Injected(LightmapType lt, out Vector4 ret) { }
}


// Namespace: UnityEngine
public sealed class RenderSettings : Object // TypeDefIndex: 5446
{
	// Properties
	public static bool fog { set; }

	// Methods

	// RVA: 0x1372FA8 Offset: 0x136EFA8 VA: 0x1372FA8
	public static void set_fog(bool value) { }
}


// Namespace: UnityEngine
public sealed class Shader : Object // TypeDefIndex: 5447
{
	// Methods

	// RVA: 0x1372FE4 Offset: 0x136EFE4 VA: 0x1372FE4
	public static Shader Find(string name) { }

	// RVA: 0x1373050 Offset: 0x136F050 VA: 0x1373050
	internal static int TagToID(string name) { }

	// RVA: 0x137308C Offset: 0x136F08C VA: 0x137308C
	public static int PropertyToID(string name) { }

	// RVA: 0x13730C8 Offset: 0x136F0C8 VA: 0x13730C8
	private void .ctor() { }
}


// Namespace: UnityEngine
public class Material : Object // TypeDefIndex: 5448
{
	// Properties
	public Shader shader { get; set; }
	public Color color { set; }
	public Texture mainTexture { get; set; }
	public Vector2 mainTextureOffset { get; set; }
	public Vector2 mainTextureScale { get; set; }
	public int renderQueue { set; }
	public string[] shaderKeywords { get; set; }

	// Methods

	// RVA: 0x1373120 Offset: 0x136F120 VA: 0x1373120
	private static void CreateWithShader(Material self, Shader shader) { }

	// RVA: 0x1373164 Offset: 0x136F164 VA: 0x1373164
	private static void CreateWithMaterial(Material self, Material source) { }

	// RVA: 0x13731A8 Offset: 0x136F1A8 VA: 0x13731A8
	private static void CreateWithString(Material self) { }

	// RVA: 0x13731E4 Offset: 0x136F1E4 VA: 0x13731E4
	public void .ctor(Shader shader) { }

	[RequiredByNativeCode]
	// RVA: 0x1373274 Offset: 0x136F274 VA: 0x1373274
	public void .ctor(Material source) { }

	[Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", False)]
	// RVA: 0x1373304 Offset: 0x136F304 VA: 0x1373304
	public void .ctor(string contents) { }

	// RVA: 0x1373384 Offset: 0x136F384 VA: 0x1373384
	public Shader get_shader() { }

	// RVA: 0x13733C0 Offset: 0x136F3C0 VA: 0x13733C0
	public void set_shader(Shader value) { }

	// RVA: 0x1373404 Offset: 0x136F404 VA: 0x1373404
	public void set_color(Color value) { }

	// RVA: 0x137359C Offset: 0x136F59C VA: 0x137359C
	public Texture get_mainTexture() { }

	// RVA: 0x1373700 Offset: 0x136F700 VA: 0x1373700
	public void set_mainTexture(Texture value) { }

	// RVA: 0x137389C Offset: 0x136F89C VA: 0x137389C
	public Vector2 get_mainTextureOffset() { }

	// RVA: 0x13739A4 Offset: 0x136F9A4 VA: 0x13739A4
	public void set_mainTextureOffset(Vector2 value) { }

	// RVA: 0x1373ABC Offset: 0x136FABC VA: 0x1373ABC
	public Vector2 get_mainTextureScale() { }

	// RVA: 0x1373B98 Offset: 0x136FB98 VA: 0x1373B98
	public void set_mainTextureScale(Vector2 value) { }

	// RVA: 0x13734D8 Offset: 0x136F4D8 VA: 0x13734D8
	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag) { }

	// RVA: 0x1373CB0 Offset: 0x136FCB0 VA: 0x1373CB0
	public bool HasProperty(int nameID) { }

	// RVA: 0x1373CF4 Offset: 0x136FCF4 VA: 0x1373CF4
	public bool HasProperty(string name) { }

	// RVA: 0x1373D64 Offset: 0x136FD64 VA: 0x1373D64
	public void set_renderQueue(int value) { }

	// RVA: 0x1373DA8 Offset: 0x136FDA8 VA: 0x1373DA8
	public void EnableKeyword(string keyword) { }

	// RVA: 0x1373DEC Offset: 0x136FDEC VA: 0x1373DEC
	public void DisableKeyword(string keyword) { }

	// RVA: 0x1373E30 Offset: 0x136FE30 VA: 0x1373E30
	private string GetTagImpl(string tag, bool currentSubShaderOnly, string defaultValue) { }

	// RVA: 0x1373E8C Offset: 0x136FE8C VA: 0x1373E8C
	public string GetTag(string tag, bool searchFallbacks) { }

	// RVA: 0x1373F14 Offset: 0x136FF14 VA: 0x1373F14
	public bool SetPass(int pass) { }

	// RVA: 0x1373F58 Offset: 0x136FF58 VA: 0x1373F58
	public void CopyPropertiesFromMaterial(Material mat) { }

	// RVA: 0x1373F9C Offset: 0x136FF9C VA: 0x1373F9C
	private string[] GetShaderKeywords() { }

	// RVA: 0x1373FD8 Offset: 0x136FFD8 VA: 0x1373FD8
	private void SetShaderKeywords(string[] names) { }

	// RVA: 0x137401C Offset: 0x137001C VA: 0x137401C
	public string[] get_shaderKeywords() { }

	// RVA: 0x1374058 Offset: 0x1370058 VA: 0x1374058
	public void set_shaderKeywords(string[] value) { }

	// RVA: 0x137409C Offset: 0x137009C VA: 0x137409C
	public int ComputeCRC() { }

	// RVA: 0x13740D8 Offset: 0x13700D8 VA: 0x13740D8
	private void SetFloatImpl(int name, float value) { }

	// RVA: 0x137412C Offset: 0x137012C VA: 0x137412C
	private void SetColorImpl(int name, Color value) { }

	// RVA: 0x13741DC Offset: 0x13701DC VA: 0x13741DC
	private void SetTextureImpl(int name, Texture value) { }

	// RVA: 0x1374230 Offset: 0x1370230 VA: 0x1374230
	private float GetFloatImpl(int name) { }

	// RVA: 0x1374274 Offset: 0x1370274 VA: 0x1374274
	private Color GetColorImpl(int name) { }

	// RVA: 0x1374328 Offset: 0x1370328 VA: 0x1374328
	private Texture GetTextureImpl(int name) { }

	// RVA: 0x137436C Offset: 0x137036C VA: 0x137436C
	private void SetFloatArrayImpl(int name, float[] values, int count) { }

	// RVA: 0x13743C8 Offset: 0x13703C8 VA: 0x13743C8
	private void SetVectorArrayImpl(int name, Vector4[] values, int count) { }

	// RVA: 0x1374424 Offset: 0x1370424 VA: 0x1374424
	private Vector4 GetTextureScaleAndOffsetImpl(int name) { }

	// RVA: 0x13744D8 Offset: 0x13704D8 VA: 0x13744D8
	private void SetTextureOffsetImpl(int name, Vector2 offset) { }

	// RVA: 0x1374584 Offset: 0x1370584 VA: 0x1374584
	private void SetTextureScaleImpl(int name, Vector2 scale) { }

	// RVA: 0x1374630 Offset: 0x1370630 VA: 0x1374630
	private void SetFloatArray(int name, float[] values, int count) { }

	// RVA: 0x137473C Offset: 0x137073C VA: 0x137473C
	private void SetVectorArray(int name, Vector4[] values, int count) { }

	// RVA: 0x1374848 Offset: 0x1370848 VA: 0x1374848
	public void SetInt(string name, int value) { }

	// RVA: 0x13748C8 Offset: 0x13708C8 VA: 0x13748C8
	public void SetFloat(string name, float value) { }

	// RVA: 0x1374948 Offset: 0x1370948 VA: 0x1374948
	public void SetFloat(int nameID, float value) { }

	// RVA: 0x1373520 Offset: 0x136F520 VA: 0x1373520
	public void SetColor(string name, Color value) { }

	// RVA: 0x137351C Offset: 0x136F51C VA: 0x137351C
	public void SetColor(int nameID, Color value) { }

	// RVA: 0x137499C Offset: 0x137099C VA: 0x137499C
	public void SetVector(string name, Vector4 value) { }

	// RVA: 0x137381C Offset: 0x136F81C VA: 0x137381C
	public void SetTexture(string name, Texture value) { }

	// RVA: 0x13737C8 Offset: 0x136F7C8 VA: 0x13737C8
	public void SetTexture(int nameID, Texture value) { }

	// RVA: 0x1374A18 Offset: 0x1370A18 VA: 0x1374A18
	public void SetFloatArray(string name, List<float> values) { }

	// RVA: 0x1374AC4 Offset: 0x1370AC4 VA: 0x1374AC4
	public void SetVectorArray(string name, List<Vector4> values) { }

	// RVA: 0x1374B70 Offset: 0x1370B70 VA: 0x1374B70
	public int GetInt(string name) { }

	// RVA: 0x1374BFC Offset: 0x1370BFC VA: 0x1374BFC
	public float GetFloat(int nameID) { }

	// RVA: 0x1374C40 Offset: 0x1370C40 VA: 0x1374C40
	public Color GetColor(string name) { }

	// RVA: 0x1373690 Offset: 0x136F690 VA: 0x1373690
	public Texture GetTexture(string name) { }

	// RVA: 0x137364C Offset: 0x136F64C VA: 0x137364C
	public Texture GetTexture(int nameID) { }

	// RVA: 0x1373A58 Offset: 0x136FA58 VA: 0x1373A58
	public void SetTextureOffset(string name, Vector2 value) { }

	// RVA: 0x1373A54 Offset: 0x136FA54 VA: 0x1373A54
	public void SetTextureOffset(int nameID, Vector2 value) { }

	// RVA: 0x1373C4C Offset: 0x136FC4C VA: 0x1373C4C
	public void SetTextureScale(string name, Vector2 value) { }

	// RVA: 0x1373C48 Offset: 0x136FC48 VA: 0x1373C48
	public void SetTextureScale(int nameID, Vector2 value) { }

	// RVA: 0x137394C Offset: 0x136F94C VA: 0x137394C
	public Vector2 GetTextureOffset(string name) { }

	// RVA: 0x1373934 Offset: 0x136F934 VA: 0x1373934
	public Vector2 GetTextureOffset(int nameID) { }

	// RVA: 0x1373B4C Offset: 0x136FB4C VA: 0x1373B4C
	public Vector2 GetTextureScale(string name) { }

	// RVA: 0x1373B48 Offset: 0x136FB48 VA: 0x1373B48
	public Vector2 GetTextureScale(int nameID) { }

	// RVA: 0x1374188 Offset: 0x1370188 VA: 0x1374188
	private void SetColorImpl_Injected(int name, ref Color value) { }

	// RVA: 0x13742D4 Offset: 0x13702D4 VA: 0x13742D4
	private void GetColorImpl_Injected(int name, out Color ret) { }

	// RVA: 0x1374484 Offset: 0x1370484 VA: 0x1374484
	private void GetTextureScaleAndOffsetImpl_Injected(int name, out Vector4 ret) { }

	// RVA: 0x1374530 Offset: 0x1370530 VA: 0x1374530
	private void SetTextureOffsetImpl_Injected(int name, ref Vector2 offset) { }

	// RVA: 0x13745DC Offset: 0x13705DC VA: 0x13745DC
	private void SetTextureScaleImpl_Injected(int name, ref Vector2 scale) { }
}


// Namespace: UnityEngine
public struct LightBakingOutput // TypeDefIndex: 5449
{
	// Fields
	public int probeOcclusionLightIndex; // 0x0
	public int occlusionMaskChannel; // 0x4
	public LightmapBakeType lightmapBakeType; // 0x8
	public MixedLightingMode mixedLightingMode; // 0xC
	public bool isBaked; // 0x10
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
[RequireComponent(typeof(Transform))]
public sealed class Light : Behaviour // TypeDefIndex: 5450
{
	// Fields
	private int m_BakedIndex; // 0x18

	// Properties
	public LightType type { get; }
	public float spotAngle { get; }
	public Color color { get; }
	public float colorTemperature { get; }
	public bool useColorTemperature { get; }
	public float intensity { get; }
	public float bounceIntensity { get; }
	public float range { get; }
	public LightBakingOutput bakingOutput { get; }
	public LightShadows shadows { get; }
	public float cookieSize { get; }
	public Texture cookie { get; }

	// Methods

	// RVA: 0x1374C8C Offset: 0x1370C8C VA: 0x1374C8C
	public LightType get_type() { }

	// RVA: 0x1374CC8 Offset: 0x1370CC8 VA: 0x1374CC8
	public float get_spotAngle() { }

	// RVA: 0x1374D04 Offset: 0x1370D04 VA: 0x1374D04
	public Color get_color() { }

	// RVA: 0x1374DA0 Offset: 0x1370DA0 VA: 0x1374DA0
	public float get_colorTemperature() { }

	// RVA: 0x1374DDC Offset: 0x1370DDC VA: 0x1374DDC
	public bool get_useColorTemperature() { }

	// RVA: 0x1374E18 Offset: 0x1370E18 VA: 0x1374E18
	public float get_intensity() { }

	// RVA: 0x1374E54 Offset: 0x1370E54 VA: 0x1374E54
	public float get_bounceIntensity() { }

	// RVA: 0x1374E90 Offset: 0x1370E90 VA: 0x1374E90
	public float get_range() { }

	// RVA: 0x1374ECC Offset: 0x1370ECC VA: 0x1374ECC
	public LightBakingOutput get_bakingOutput() { }

	// RVA: 0x1374F78 Offset: 0x1370F78 VA: 0x1374F78
	public LightShadows get_shadows() { }

	// RVA: 0x1374FB4 Offset: 0x1370FB4 VA: 0x1374FB4
	public float get_cookieSize() { }

	// RVA: 0x1374FF0 Offset: 0x1370FF0 VA: 0x1374FF0
	public Texture get_cookie() { }

	// RVA: 0x1374D5C Offset: 0x1370D5C VA: 0x1374D5C
	private void get_color_Injected(out Color ret) { }

	// RVA: 0x1374F34 Offset: 0x1370F34 VA: 0x1374F34
	private void get_bakingOutput_Injected(out LightBakingOutput ret) { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public sealed class MeshFilter : Component // TypeDefIndex: 5451
{
	// Properties
	public Mesh sharedMesh { get; set; }
	public Mesh mesh { get; set; }

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x137502C Offset: 0x137102C VA: 0x137502C
	private void DontStripMeshFilter() { }

	// RVA: 0x1375030 Offset: 0x1371030 VA: 0x1375030
	public Mesh get_sharedMesh() { }

	// RVA: 0x137506C Offset: 0x137106C VA: 0x137506C
	public void set_sharedMesh(Mesh value) { }

	// RVA: 0x13750B0 Offset: 0x13710B0 VA: 0x13750B0
	public Mesh get_mesh() { }

	// RVA: 0x13750EC Offset: 0x13710EC VA: 0x13750EC
	public void set_mesh(Mesh value) { }

	// RVA: 0x1375130 Offset: 0x1371130 VA: 0x1375130
	public void .ctor() { }
}


// Namespace: UnityEngine
public enum RenderingPath // TypeDefIndex: 5452
{
	// Fields
	public int value__; // 0x0
	public const RenderingPath UsePlayerSettings = -1;
	public const RenderingPath VertexLit = 0;
	public const RenderingPath Forward = 1;
	[Obsolete("DeferredLighting has been removed. Use DeferredShading, Forward or HDRP/URP instead.", False)]
	public const RenderingPath DeferredLighting = 2;
	public const RenderingPath DeferredShading = 3;
}


// Namespace: UnityEngine
public enum StereoTargetEyeMask // TypeDefIndex: 5453
{
	// Fields
	public int value__; // 0x0
	public const StereoTargetEyeMask None = 0;
	public const StereoTargetEyeMask Left = 1;
	public const StereoTargetEyeMask Right = 2;
	public const StereoTargetEyeMask Both = 3;
}


// Namespace: UnityEngine
[Flags]
public enum CameraType // TypeDefIndex: 5454
{
	// Fields
	public int value__; // 0x0
	public const CameraType Game = 1;
	public const CameraType SceneView = 2;
	public const CameraType Preview = 4;
	public const CameraType VR = 8;
	public const CameraType Reflection = 16;
}


// Namespace: UnityEngine
[Flags]
public enum ComputeBufferType // TypeDefIndex: 5455
{
	// Fields
	public int value__; // 0x0
	public const ComputeBufferType Default = 0;
	public const ComputeBufferType Raw = 1;
	public const ComputeBufferType Append = 2;
	public const ComputeBufferType Counter = 4;
	public const ComputeBufferType Constant = 8;
	public const ComputeBufferType Structured = 16;
	[Obsolete("Enum member DrawIndirect has been deprecated. Use IndirectArguments instead (UnityUpgradable) -> IndirectArguments", False)]
	public const ComputeBufferType DrawIndirect = 256;
	public const ComputeBufferType IndirectArguments = 256;
	[Obsolete("Enum member GPUMemory has been deprecated. All compute buffers now follow the behavior previously defined by this member.", False)]
	public const ComputeBufferType GPUMemory = 512;
}


// Namespace: UnityEngine
public enum LightType // TypeDefIndex: 5456
{
	// Fields
	public int value__; // 0x0
	public const LightType Spot = 0;
	public const LightType Directional = 1;
	public const LightType Point = 2;
	public const LightType Area = 3;
	public const LightType Rectangle = 3;
	public const LightType Disc = 4;
}


// Namespace: UnityEngine
public enum LightShadows // TypeDefIndex: 5457
{
	// Fields
	public int value__; // 0x0
	public const LightShadows None = 0;
	public const LightShadows Hard = 1;
	public const LightShadows Soft = 2;
}


// Namespace: UnityEngine
[Flags]
public enum LightmapBakeType // TypeDefIndex: 5458
{
	// Fields
	public int value__; // 0x0
	public const LightmapBakeType Realtime = 4;
	public const LightmapBakeType Baked = 2;
	public const LightmapBakeType Mixed = 1;
}


// Namespace: UnityEngine
public enum MixedLightingMode // TypeDefIndex: 5459
{
	// Fields
	public int value__; // 0x0
	public const MixedLightingMode IndirectOnly = 0;
	public const MixedLightingMode Shadowmask = 2;
	public const MixedLightingMode Subtractive = 1;
}


// Namespace: UnityEngine
public enum ShadowQuality // TypeDefIndex: 5460
{
	// Fields
	public int value__; // 0x0
	public const ShadowQuality Disable = 0;
	public const ShadowQuality HardOnly = 1;
	public const ShadowQuality All = 2;
}


// Namespace: UnityEngine
public enum CameraClearFlags // TypeDefIndex: 5461
{
	// Fields
	public int value__; // 0x0
	public const CameraClearFlags Skybox = 1;
	public const CameraClearFlags Color = 2;
	public const CameraClearFlags SolidColor = 2;
	public const CameraClearFlags Depth = 3;
	public const CameraClearFlags Nothing = 4;
}


// Namespace: UnityEngine
public enum MeshTopology // TypeDefIndex: 5462
{
	// Fields
	public int value__; // 0x0
	public const MeshTopology Triangles = 0;
	public const MeshTopology Quads = 2;
	public const MeshTopology Lines = 3;
	public const MeshTopology LineStrip = 4;
	public const MeshTopology Points = 5;
}


// Namespace: UnityEngine
public enum ColorSpace // TypeDefIndex: 5463
{
	// Fields
	public int value__; // 0x0
	public const ColorSpace Uninitialized = -1;
	public const ColorSpace Gamma = 0;
	public const ColorSpace Linear = 1;
}


// Namespace: UnityEngine
public enum ScreenOrientation // TypeDefIndex: 5464
{
	// Fields
	public int value__; // 0x0
	public const ScreenOrientation Portrait = 1;
	public const ScreenOrientation PortraitUpsideDown = 2;
	public const ScreenOrientation LandscapeLeft = 3;
	public const ScreenOrientation LandscapeRight = 4;
	public const ScreenOrientation AutoRotation = 5;
	[Obsolete("Enum member Unknown has been deprecated.", False)]
	public const ScreenOrientation Unknown = 0;
	[Obsolete("Use LandscapeLeft instead (UnityUpgradable) -> LandscapeLeft", True)]
	public const ScreenOrientation Landscape = 3;
}


// Namespace: UnityEngine
public enum FilterMode // TypeDefIndex: 5465
{
	// Fields
	public int value__; // 0x0
	public const FilterMode Point = 0;
	public const FilterMode Bilinear = 1;
	public const FilterMode Trilinear = 2;
}


// Namespace: UnityEngine
public enum TextureWrapMode // TypeDefIndex: 5466
{
	// Fields
	public int value__; // 0x0
	public const TextureWrapMode Repeat = 0;
	public const TextureWrapMode Clamp = 1;
	public const TextureWrapMode Mirror = 2;
	public const TextureWrapMode MirrorOnce = 3;
}


// Namespace: UnityEngine
public enum TextureFormat // TypeDefIndex: 5467
{
	// Fields
	public int value__; // 0x0
	public const TextureFormat Alpha8 = 1;
	public const TextureFormat ARGB4444 = 2;
	public const TextureFormat RGB24 = 3;
	public const TextureFormat RGBA32 = 4;
	public const TextureFormat ARGB32 = 5;
	public const TextureFormat RGB565 = 7;
	public const TextureFormat R16 = 9;
	public const TextureFormat DXT1 = 10;
	public const TextureFormat DXT5 = 12;
	public const TextureFormat RGBA4444 = 13;
	public const TextureFormat BGRA32 = 14;
	public const TextureFormat RHalf = 15;
	public const TextureFormat RGHalf = 16;
	public const TextureFormat RGBAHalf = 17;
	public const TextureFormat RFloat = 18;
	public const TextureFormat RGFloat = 19;
	public const TextureFormat RGBAFloat = 20;
	public const TextureFormat YUY2 = 21;
	public const TextureFormat RGB9e5Float = 22;
	public const TextureFormat BC4 = 26;
	public const TextureFormat BC5 = 27;
	public const TextureFormat BC6H = 24;
	public const TextureFormat BC7 = 25;
	public const TextureFormat DXT1Crunched = 28;
	public const TextureFormat DXT5Crunched = 29;
	public const TextureFormat PVRTC_RGB2 = 30;
	public const TextureFormat PVRTC_RGBA2 = 31;
	public const TextureFormat PVRTC_RGB4 = 32;
	public const TextureFormat PVRTC_RGBA4 = 33;
	public const TextureFormat ETC_RGB4 = 34;
	public const TextureFormat EAC_R = 41;
	public const TextureFormat EAC_R_SIGNED = 42;
	public const TextureFormat EAC_RG = 43;
	public const TextureFormat EAC_RG_SIGNED = 44;
	public const TextureFormat ETC2_RGB = 45;
	public const TextureFormat ETC2_RGBA1 = 46;
	public const TextureFormat ETC2_RGBA8 = 47;
	public const TextureFormat ASTC_4x4 = 48;
	public const TextureFormat ASTC_5x5 = 49;
	public const TextureFormat ASTC_6x6 = 50;
	public const TextureFormat ASTC_8x8 = 51;
	public const TextureFormat ASTC_10x10 = 52;
	public const TextureFormat ASTC_12x12 = 53;
	[Obsolete("Nintendo 3DS is no longer supported.")]
	public const TextureFormat ETC_RGB4_3DS = 60;
	[Obsolete("Nintendo 3DS is no longer supported.")]
	public const TextureFormat ETC_RGBA8_3DS = 61;
	public const TextureFormat RG16 = 62;
	public const TextureFormat R8 = 63;
	public const TextureFormat ETC_RGB4Crunched = 64;
	public const TextureFormat ETC2_RGBA8Crunched = 65;
	public const TextureFormat ASTC_HDR_4x4 = 66;
	public const TextureFormat ASTC_HDR_5x5 = 67;
	public const TextureFormat ASTC_HDR_6x6 = 68;
	public const TextureFormat ASTC_HDR_8x8 = 69;
	public const TextureFormat ASTC_HDR_10x10 = 70;
	public const TextureFormat ASTC_HDR_12x12 = 71;
	public const TextureFormat RG32 = 72;
	public const TextureFormat RGB48 = 73;
	public const TextureFormat RGBA64 = 74;
	[Obsolete("Enum member TextureFormat.ASTC_RGB_4x4 has been deprecated. Use ASTC_4x4 instead (UnityUpgradable) -> ASTC_4x4")]
	public const TextureFormat ASTC_RGB_4x4 = 48;
	[Obsolete("Enum member TextureFormat.ASTC_RGB_5x5 has been deprecated. Use ASTC_5x5 instead (UnityUpgradable) -> ASTC_5x5")]
	public const TextureFormat ASTC_RGB_5x5 = 49;
	[Obsolete("Enum member TextureFormat.ASTC_RGB_6x6 has been deprecated. Use ASTC_6x6 instead (UnityUpgradable) -> ASTC_6x6")]
	public const TextureFormat ASTC_RGB_6x6 = 50;
	[Obsolete("Enum member TextureFormat.ASTC_RGB_8x8 has been deprecated. Use ASTC_8x8 instead (UnityUpgradable) -> ASTC_8x8")]
	public const TextureFormat ASTC_RGB_8x8 = 51;
	[Obsolete("Enum member TextureFormat.ASTC_RGB_10x10 has been deprecated. Use ASTC_10x10 instead (UnityUpgradable) -> ASTC_10x10")]
	public const TextureFormat ASTC_RGB_10x10 = 52;
	[Obsolete("Enum member TextureFormat.ASTC_RGB_12x12 has been deprecated. Use ASTC_12x12 instead (UnityUpgradable) -> ASTC_12x12")]
	public const TextureFormat ASTC_RGB_12x12 = 53;
	[Obsolete("Enum member TextureFormat.ASTC_RGBA_4x4 has been deprecated. Use ASTC_4x4 instead (UnityUpgradable) -> ASTC_4x4")]
	public const TextureFormat ASTC_RGBA_4x4 = 54;
	[Obsolete("Enum member TextureFormat.ASTC_RGBA_5x5 has been deprecated. Use ASTC_5x5 instead (UnityUpgradable) -> ASTC_5x5")]
	public const TextureFormat ASTC_RGBA_5x5 = 55;
	[Obsolete("Enum member TextureFormat.ASTC_RGBA_6x6 has been deprecated. Use ASTC_6x6 instead (UnityUpgradable) -> ASTC_6x6")]
	public const TextureFormat ASTC_RGBA_6x6 = 56;
	[Obsolete("Enum member TextureFormat.ASTC_RGBA_8x8 has been deprecated. Use ASTC_8x8 instead (UnityUpgradable) -> ASTC_8x8")]
	public const TextureFormat ASTC_RGBA_8x8 = 57;
	[Obsolete("Enum member TextureFormat.ASTC_RGBA_10x10 has been deprecated. Use ASTC_10x10 instead (UnityUpgradable) -> ASTC_10x10")]
	public const TextureFormat ASTC_RGBA_10x10 = 58;
	[Obsolete("Enum member TextureFormat.ASTC_RGBA_12x12 has been deprecated. Use ASTC_12x12 instead (UnityUpgradable) -> ASTC_12x12")]
	public const TextureFormat ASTC_RGBA_12x12 = 59;
}


// Namespace: UnityEngine
internal enum TextureColorSpace // TypeDefIndex: 5468
{
	// Fields
	public int value__; // 0x0
	public const TextureColorSpace Linear = 0;
	public const TextureColorSpace sRGB = 1;
}


// Namespace: UnityEngine
public enum CubemapFace // TypeDefIndex: 5469
{
	// Fields
	public int value__; // 0x0
	public const CubemapFace Unknown = -1;
	public const CubemapFace PositiveX = 0;
	public const CubemapFace NegativeX = 1;
	public const CubemapFace PositiveY = 2;
	public const CubemapFace NegativeY = 3;
	public const CubemapFace PositiveZ = 4;
	public const CubemapFace NegativeZ = 5;
}


// Namespace: UnityEngine
public enum RenderTextureFormat // TypeDefIndex: 5470
{
	// Fields
	public int value__; // 0x0
	public const RenderTextureFormat ARGB32 = 0;
	public const RenderTextureFormat Depth = 1;
	public const RenderTextureFormat ARGBHalf = 2;
	public const RenderTextureFormat Shadowmap = 3;
	public const RenderTextureFormat RGB565 = 4;
	public const RenderTextureFormat ARGB4444 = 5;
	public const RenderTextureFormat ARGB1555 = 6;
	public const RenderTextureFormat Default = 7;
	public const RenderTextureFormat ARGB2101010 = 8;
	public const RenderTextureFormat DefaultHDR = 9;
	public const RenderTextureFormat ARGB64 = 10;
	public const RenderTextureFormat ARGBFloat = 11;
	public const RenderTextureFormat RGFloat = 12;
	public const RenderTextureFormat RGHalf = 13;
	public const RenderTextureFormat RFloat = 14;
	public const RenderTextureFormat RHalf = 15;
	public const RenderTextureFormat R8 = 16;
	public const RenderTextureFormat ARGBInt = 17;
	public const RenderTextureFormat RGInt = 18;
	public const RenderTextureFormat RInt = 19;
	public const RenderTextureFormat BGRA32 = 20;
	public const RenderTextureFormat RGB111110Float = 22;
	public const RenderTextureFormat RG32 = 23;
	public const RenderTextureFormat RGBAUShort = 24;
	public const RenderTextureFormat RG16 = 25;
	public const RenderTextureFormat BGRA10101010_XR = 26;
	public const RenderTextureFormat BGR101010_XR = 27;
	public const RenderTextureFormat R16 = 28;
}


// Namespace: UnityEngine
public enum VRTextureUsage // TypeDefIndex: 5471
{
	// Fields
	public int value__; // 0x0
	public const VRTextureUsage None = 0;
	public const VRTextureUsage OneEye = 1;
	public const VRTextureUsage TwoEyes = 2;
	public const VRTextureUsage DeviceSpecific = 3;
}


// Namespace: UnityEngine
[Flags]
public enum RenderTextureCreationFlags // TypeDefIndex: 5472
{
	// Fields
	public int value__; // 0x0
	public const RenderTextureCreationFlags MipMap = 1;
	public const RenderTextureCreationFlags AutoGenerateMips = 2;
	public const RenderTextureCreationFlags SRGB = 4;
	public const RenderTextureCreationFlags EyeTexture = 8;
	public const RenderTextureCreationFlags EnableRandomWrite = 16;
	public const RenderTextureCreationFlags CreatedFromScript = 32;
	public const RenderTextureCreationFlags AllowVerticalFlip = 128;
	public const RenderTextureCreationFlags NoResolvedColorSurface = 256;
	public const RenderTextureCreationFlags DynamicallyScalable = 1024;
	public const RenderTextureCreationFlags BindMS = 2048;
}


// Namespace: UnityEngine
public enum RenderTextureReadWrite // TypeDefIndex: 5473
{
	// Fields
	public int value__; // 0x0
	public const RenderTextureReadWrite Default = 0;
	public const RenderTextureReadWrite Linear = 1;
	public const RenderTextureReadWrite sRGB = 2;
}


// Namespace: UnityEngine
[Flags]
public enum RenderTextureMemoryless // TypeDefIndex: 5474
{
	// Fields
	public int value__; // 0x0
	public const RenderTextureMemoryless None = 0;
	public const RenderTextureMemoryless Color = 1;
	public const RenderTextureMemoryless Depth = 2;
	public const RenderTextureMemoryless MSAA = 4;
}


// Namespace: UnityEngine
[Flags]
public enum LightmapsMode // TypeDefIndex: 5475
{
	// Fields
	public int value__; // 0x0
	public const LightmapsMode NonDirectional = 0;
	public const LightmapsMode CombinedDirectional = 1;
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class SkinnedMeshRenderer : Renderer // TypeDefIndex: 5476
{
	// Properties
	public Mesh sharedMesh { get; }

	// Methods

	// RVA: 0x1375138 Offset: 0x1371138 VA: 0x1375138
	public Mesh get_sharedMesh() { }
}


// Namespace: UnityEngine
public class MeshRenderer : Renderer // TypeDefIndex: 5477
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1375174 Offset: 0x1371174 VA: 0x1375174
	private void DontStripMeshRenderer() { }

	// RVA: 0x1375178 Offset: 0x1371178 VA: 0x1375178
	public void .ctor() { }
}


// Namespace: 
public struct Mesh.MeshData // TypeDefIndex: 5478
{
	// Fields
	[NativeDisableUnsafePtrRestriction]
	internal IntPtr m_Ptr; // 0x0
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public sealed class Mesh : Object // TypeDefIndex: 5479
{
	// Properties
	public bool isReadable { get; }
	internal bool canAccess { get; }
	public int vertexCount { get; }
	public int subMeshCount { get; }
	public Vector3[] vertices { get; set; }
	public Vector3[] normals { get; set; }
	public Vector4[] tangents { get; }
	public Vector2[] uv { set; }
	public Color32[] colors32 { get; }
	public int[] triangles { set; }

	// Methods

	// RVA: 0x1375180 Offset: 0x1371180 VA: 0x1375180
	private static void Internal_Create(Mesh mono) { }

	[RequiredByNativeCode]
	// RVA: 0x13751BC Offset: 0x13711BC VA: 0x13751BC
	public void .ctor() { }

	// RVA: 0x137523C Offset: 0x137123C VA: 0x137523C
	private int[] GetIndicesImpl(int submesh, bool applyBaseVertex) { }

	// RVA: 0x1375290 Offset: 0x1371290 VA: 0x1375290
	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex) { }

	// RVA: 0x137532C Offset: 0x137132C VA: 0x137532C
	private void PrintErrorCantAccessChannel(VertexAttribute ch) { }

	// RVA: 0x1375370 Offset: 0x1371370 VA: 0x1375370
	public bool HasVertexAttribute(VertexAttribute attr) { }

	// RVA: 0x13753B4 Offset: 0x13713B4 VA: 0x13753B4
	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags) { }

	// RVA: 0x1375450 Offset: 0x1371450 VA: 0x1375450
	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim) { }

	// RVA: 0x13754AC Offset: 0x13714AC VA: 0x13754AC
	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values) { }

	// RVA: 0x1375518 Offset: 0x1371518 VA: 0x1375518
	public bool get_isReadable() { }

	// RVA: 0x1375554 Offset: 0x1371554 VA: 0x1375554
	internal bool get_canAccess() { }

	// RVA: 0x1375590 Offset: 0x1371590 VA: 0x1375590
	public int get_vertexCount() { }

	// RVA: 0x13755CC Offset: 0x13715CC VA: 0x13755CC
	public int get_subMeshCount() { }

	// RVA: 0x1375608 Offset: 0x1371608 VA: 0x1375608
	private void ClearImpl(bool keepVertexLayout) { }

	// RVA: 0x137564C Offset: 0x137164C VA: 0x137564C
	private void RecalculateBoundsImpl(MeshUpdateFlags flags) { }

	// RVA: 0x1375690 Offset: 0x1371690 VA: 0x1375690
	private void CombineMeshesImpl(CombineInstance[] combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) { }

	// RVA: 0x13756FC Offset: 0x13716FC VA: 0x13756FC
	internal static VertexAttribute GetUVChannel(int uvIndex) { }

	// RVA: 0x1375770 Offset: 0x1371770 VA: 0x1375770
	internal static int DefaultDimensionForChannel(VertexAttribute channel) { }

	// RVA: -1 Offset: -1
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9F9F0 Offset: 0xB9B9F0 VA: 0xB9F9F0
	|-Mesh.GetAllocArrayFromChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private T[] GetAllocArrayFromChannel<T>(VertexAttribute channel) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9F99C Offset: 0xB9B99C VA: 0xB9F99C
	|-Mesh.GetAllocArrayFromChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x137580C Offset: 0x137180C VA: 0x137580C
	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags) { }

	// RVA: -1 Offset: -1
	private void SetArrayForChannel<T>(VertexAttribute channel, T[] values, MeshUpdateFlags flags = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FD9C Offset: 0xB9BD9C VA: 0xB9FD9C
	|-Mesh.SetArrayForChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private void SetListForChannel<T>(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FEEC Offset: 0xB9BEEC VA: 0xB9FEEC
	|-Mesh.SetListForChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private void SetListForChannel<T>(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FE18 Offset: 0xB9BE18 VA: 0xB9FE18
	|-Mesh.SetListForChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FAE8 Offset: 0xB9BAE8 VA: 0xB9FAE8
	|-Mesh.GetListForChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private void GetListForChannel<T>(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FB54 Offset: 0xB9BB54 VA: 0xB9FB54
	|-Mesh.GetListForChannel<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1375AA0 Offset: 0x1371AA0 VA: 0x1375AA0
	public Vector3[] get_vertices() { }

	// RVA: 0x1375AEC Offset: 0x1371AEC VA: 0x1375AEC
	public void set_vertices(Vector3[] value) { }

	// RVA: 0x1375B4C Offset: 0x1371B4C VA: 0x1375B4C
	public Vector3[] get_normals() { }

	// RVA: 0x1375B98 Offset: 0x1371B98 VA: 0x1375B98
	public void set_normals(Vector3[] value) { }

	// RVA: 0x1375BF8 Offset: 0x1371BF8 VA: 0x1375BF8
	public Vector4[] get_tangents() { }

	// RVA: 0x1375C44 Offset: 0x1371C44 VA: 0x1375C44
	public void set_uv(Vector2[] value) { }

	// RVA: 0x1375CA4 Offset: 0x1371CA4 VA: 0x1375CA4
	public Color32[] get_colors32() { }

	// RVA: 0x1375CF8 Offset: 0x1371CF8 VA: 0x1375CF8
	public void SetVertices(List<Vector3> inVertices) { }

	// RVA: 0x1375D64 Offset: 0x1371D64 VA: 0x1375D64
	public void SetVertices(List<Vector3> inVertices, int start, int length) { }

	// RVA: 0x1375D6C Offset: 0x1371D6C VA: 0x1375D6C
	public void SetVertices(List<Vector3> inVertices, int start, int length, MeshUpdateFlags flags) { }

	// RVA: 0x1375DE8 Offset: 0x1371DE8 VA: 0x1375DE8
	public void SetNormals(List<Vector3> inNormals) { }

	// RVA: 0x1375E54 Offset: 0x1371E54 VA: 0x1375E54
	public void SetNormals(List<Vector3> inNormals, int start, int length) { }

	// RVA: 0x1375E5C Offset: 0x1371E5C VA: 0x1375E5C
	public void SetNormals(List<Vector3> inNormals, int start, int length, MeshUpdateFlags flags) { }

	// RVA: 0x1375ED8 Offset: 0x1371ED8 VA: 0x1375ED8
	public void SetTangents(List<Vector4> inTangents) { }

	// RVA: 0x1375F44 Offset: 0x1371F44 VA: 0x1375F44
	public void SetTangents(List<Vector4> inTangents, int start, int length) { }

	// RVA: 0x1375F4C Offset: 0x1371F4C VA: 0x1375F4C
	public void SetTangents(List<Vector4> inTangents, int start, int length, MeshUpdateFlags flags) { }

	// RVA: 0x1375FC8 Offset: 0x1371FC8 VA: 0x1375FC8
	public void SetColors(List<Color32> inColors) { }

	// RVA: 0x1376034 Offset: 0x1372034 VA: 0x1376034
	public void SetColors(List<Color32> inColors, int start, int length) { }

	// RVA: 0x137603C Offset: 0x137203C VA: 0x137603C
	public void SetColors(List<Color32> inColors, int start, int length, MeshUpdateFlags flags) { }

	// RVA: -1 Offset: -1
	private void SetUvsImpl<T>(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FFB8 Offset: 0xB9BFB8 VA: 0xB9FFB8
	|-Mesh.SetUvsImpl<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13760D0 Offset: 0x13720D0 VA: 0x13760D0
	public void SetUVs(int channel, List<Vector4> uvs) { }

	// RVA: 0x1376144 Offset: 0x1372144 VA: 0x1376144
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length) { }

	// RVA: 0x137614C Offset: 0x137214C VA: 0x137614C
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, MeshUpdateFlags flags) { }

	// RVA: -1 Offset: -1
	private void GetUVsImpl<T>(int uvIndex, List<T> uvs, int dim) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB9FC8C Offset: 0xB9BC8C VA: 0xB9FC8C
	|-Mesh.GetUVsImpl<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13761D8 Offset: 0x13721D8 VA: 0x13761D8
	public void GetUVs(int channel, List<Vector4> uvs) { }

	// RVA: 0x137623C Offset: 0x137223C VA: 0x137623C
	private void PrintErrorCantAccessIndices() { }

	// RVA: 0x13762D4 Offset: 0x13722D4 VA: 0x13762D4
	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles) { }

	// RVA: 0x1376414 Offset: 0x1372414 VA: 0x1376414
	private bool CheckCanAccessSubmeshTriangles(int submesh) { }

	// RVA: 0x137641C Offset: 0x137241C VA: 0x137641C
	private bool CheckCanAccessSubmeshIndices(int submesh) { }

	// RVA: 0x1376424 Offset: 0x1372424 VA: 0x1376424
	public void set_triangles(int[] value) { }

	// RVA: 0x137656C Offset: 0x137256C VA: 0x137656C
	public int[] GetIndices(int submesh) { }

	// RVA: 0x1376574 Offset: 0x1372574 VA: 0x1376574
	public int[] GetIndices(int submesh, bool applyBaseVertex) { }

	// RVA: 0x137661C Offset: 0x137261C VA: 0x137661C
	private void CheckIndicesArrayRange(int valuesLength, int start, int length) { }

	// RVA: 0x13764CC Offset: 0x13724CC VA: 0x13764CC
	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex) { }

	// RVA: 0x13767B8 Offset: 0x13727B8 VA: 0x13767B8
	public void SetTriangles(List<int> triangles, int submesh) { }

	// RVA: 0x13767C4 Offset: 0x13727C4 VA: 0x13767C4
	public void SetTriangles(List<int> triangles, int submesh, bool calculateBounds, int baseVertex) { }

	// RVA: 0x137684C Offset: 0x137284C VA: 0x137684C
	public void SetTriangles(List<int> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = True, int baseVertex = 0) { }

	// RVA: 0x137691C Offset: 0x137291C VA: 0x137691C
	public void Clear() { }

	// RVA: 0x137695C Offset: 0x137295C VA: 0x137695C
	public void RecalculateBounds() { }

	// RVA: 0x1376964 Offset: 0x1372964 VA: 0x1376964
	public void RecalculateBounds(MeshUpdateFlags flags) { }

	// RVA: 0x1376A58 Offset: 0x1372A58 VA: 0x1376A58
	public void CombineMeshes(CombineInstance[] combine) { }
}


// Namespace: UnityEngine
public struct CombineInstance // TypeDefIndex: 5480
{
	// Fields
	private int m_MeshInstanceID; // 0x0
	private int m_SubMeshIndex; // 0x4
	private Matrix4x4 m_Transform; // 0x8
	private Vector4 m_LightmapScaleOffset; // 0x48
	private Vector4 m_RealtimeLightmapScaleOffset; // 0x58

	// Properties
	public Mesh mesh { set; }
	public int subMeshIndex { set; }
	public Matrix4x4 transform { set; }

	// Methods

	// RVA: 0x1376AA8 Offset: 0x1372AA8 VA: 0x1376AA8
	public void set_mesh(Mesh value) { }

	// RVA: 0x1376B38 Offset: 0x1372B38 VA: 0x1376B38
	public void set_subMeshIndex(int value) { }

	// RVA: 0x1376B40 Offset: 0x1372B40 VA: 0x1376B40
	public void set_transform(Matrix4x4 value) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class Texture : Object // TypeDefIndex: 5481
{
	// Fields
	public static readonly int GenerateAllMips; // 0x0

	// Properties
	public virtual int width { get; set; }
	public virtual int height { get; set; }
	public virtual bool isReadable { get; }
	public TextureWrapMode wrapMode { get; set; }
	public FilterMode filterMode { get; set; }
	public Vector2 texelSize { get; }
	internal ColorSpace activeTextureColorSpace { get; }

	// Methods

	// RVA: 0x1376B5C Offset: 0x1372B5C VA: 0x1376B5C
	protected void .ctor() { }

	// RVA: 0x1376BB4 Offset: 0x1372BB4 VA: 0x1376BB4
	private int GetDataWidth() { }

	// RVA: 0x1376BF0 Offset: 0x1372BF0 VA: 0x1376BF0
	private int GetDataHeight() { }

	// RVA: 0x1376C2C Offset: 0x1372C2C VA: 0x1376C2C Slot: 4
	public virtual int get_width() { }

	// RVA: 0x1376C68 Offset: 0x1372C68 VA: 0x1376C68 Slot: 5
	public virtual void set_width(int value) { }

	// RVA: 0x1376CA0 Offset: 0x1372CA0 VA: 0x1376CA0 Slot: 6
	public virtual int get_height() { }

	// RVA: 0x1376CDC Offset: 0x1372CDC VA: 0x1376CDC Slot: 7
	public virtual void set_height(int value) { }

	// RVA: 0x1376D14 Offset: 0x1372D14 VA: 0x1376D14 Slot: 8
	public virtual bool get_isReadable() { }

	// RVA: 0x1376D50 Offset: 0x1372D50 VA: 0x1376D50
	public TextureWrapMode get_wrapMode() { }

	// RVA: 0x1376D8C Offset: 0x1372D8C VA: 0x1376D8C
	public void set_wrapMode(TextureWrapMode value) { }

	// RVA: 0x1376DD0 Offset: 0x1372DD0 VA: 0x1376DD0
	public FilterMode get_filterMode() { }

	// RVA: 0x1376E0C Offset: 0x1372E0C VA: 0x1376E0C
	public void set_filterMode(FilterMode value) { }

	// RVA: 0x1376E50 Offset: 0x1372E50 VA: 0x1376E50
	public Vector2 get_texelSize() { }

	// RVA: 0x1376EE0 Offset: 0x1372EE0 VA: 0x1376EE0
	public IntPtr GetNativeTexturePtr() { }

	// RVA: 0x1376F1C Offset: 0x1372F1C VA: 0x1376F1C
	private int Internal_GetActiveTextureColorSpace() { }

	// RVA: 0x1376F58 Offset: 0x1372F58 VA: 0x1376F58
	internal ColorSpace get_activeTextureColorSpace() { }

	// RVA: 0x1376FA0 Offset: 0x1372FA0 VA: 0x1376FA0
	internal TextureColorSpace GetTextureColorSpace(bool linear) { }

	// RVA: 0x1376FAC Offset: 0x1372FAC VA: 0x1376FAC
	internal TextureColorSpace GetTextureColorSpace(GraphicsFormat format) { }

	// RVA: 0x137700C Offset: 0x137300C VA: 0x137700C
	internal bool ValidateFormat(TextureFormat format) { }

	// RVA: 0x13771CC Offset: 0x13731CC VA: 0x13771CC
	internal bool ValidateFormat(GraphicsFormat format, FormatUsage usage) { }

	// RVA: 0x1377384 Offset: 0x1373384 VA: 0x1377384
	internal UnityException CreateNonReadableException(Texture t) { }

	// RVA: 0x1377424 Offset: 0x1373424 VA: 0x1377424
	internal UnityException CreateNativeArrayLengthOverflowException() { }

	// RVA: 0x1377490 Offset: 0x1373490 VA: 0x1377490
	private static void .cctor() { }

	// RVA: 0x1376E9C Offset: 0x1372E9C VA: 0x1376E9C
	private void get_texelSize_Injected(out Vector2 ret) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class Texture2D : Texture // TypeDefIndex: 5482
{
	// Fields
	internal const int streamingMipmapsPriorityMin = -128;
	internal const int streamingMipmapsPriorityMax = 127;

	// Properties
	public TextureFormat format { get; }
	public static Texture2D whiteTexture { get; }
	public override bool isReadable { get; }

	// Methods

	// RVA: 0x13774DC Offset: 0x13734DC VA: 0x13774DC
	public TextureFormat get_format() { }

	// RVA: 0x1377518 Offset: 0x1373518 VA: 0x1377518
	public static Texture2D get_whiteTexture() { }

	// RVA: 0x1377540 Offset: 0x1373540 VA: 0x1377540
	private static bool Internal_CreateImpl(Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName) { }

	// RVA: 0x13775DC Offset: 0x13735DC VA: 0x13775DC
	private static void Internal_Create(Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName) { }

	// RVA: 0x13776D0 Offset: 0x13736D0 VA: 0x13776D0 Slot: 8
	public override bool get_isReadable() { }

	// RVA: 0x137770C Offset: 0x137370C VA: 0x137770C
	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) { }

	// RVA: 0x1377760 Offset: 0x1373760 VA: 0x1377760
	private bool ReinitializeImpl(int width, int height) { }

	// RVA: 0x13777B4 Offset: 0x13737B4 VA: 0x13777B4
	private void SetPixelImpl(int image, int mip, int x, int y, Color color) { }

	// RVA: 0x13778AC Offset: 0x13738AC VA: 0x13778AC
	private Color GetPixelBilinearImpl(int image, int mip, float u, float v) { }

	// RVA: 0x13779A8 Offset: 0x13739A8 VA: 0x13779A8
	private bool ReinitializeWithTextureFormatImpl(int width, int height, TextureFormat textureFormat, bool hasMipMap) { }

	// RVA: 0x1377A14 Offset: 0x1373A14 VA: 0x1377A14
	private IntPtr GetWritableImageData(int frame) { }

	// RVA: 0x1377A58 Offset: 0x1373A58 VA: 0x1377A58
	private ulong GetRawImageDataSize() { }

	// RVA: 0x1377A94 Offset: 0x1373A94 VA: 0x1377A94
	private void SetAllPixels32(Color32[] colors, int miplevel) { }

	// RVA: 0x1377AE8 Offset: 0x1373AE8 VA: 0x1377AE8
	internal bool ValidateFormat(TextureFormat format, int width, int height) { }

	// RVA: 0x1377BC8 Offset: 0x1373BC8 VA: 0x1377BC8
	internal void .ctor(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex, bool createUninitialized, bool ignoreMipmapLimit, string mipmapLimitGroupName) { }

	// RVA: 0x1377D6C Offset: 0x1373D6C VA: 0x1377D6C
	public void .ctor(int width, int height, TextureFormat textureFormat, int mipCount, bool linear) { }

	// RVA: 0x1377D98 Offset: 0x1373D98 VA: 0x1377D98
	public void .ctor(int width, int height, TextureFormat textureFormat, bool mipChain, bool linear) { }

	// RVA: 0x1377E58 Offset: 0x1373E58 VA: 0x1377E58
	public void .ctor(int width, int height, TextureFormat textureFormat, bool mipChain) { }

	// RVA: 0x1377F14 Offset: 0x1373F14 VA: 0x1377F14
	public void .ctor(int width, int height) { }

	// RVA: 0x1377FB0 Offset: 0x1373FB0 VA: 0x1377FB0
	public static Texture2D CreateExternalTexture(int width, int height, TextureFormat format, bool mipChain, bool linear, IntPtr nativeTex) { }

	// RVA: 0x13780BC Offset: 0x13740BC VA: 0x13780BC
	public void SetPixel(int x, int y, Color color) { }

	// RVA: 0x1378158 Offset: 0x1374158 VA: 0x1378158
	public Color GetPixelBilinear(float u, float v) { }

	// RVA: -1 Offset: -1
	public NativeArray<T> GetRawTextureData<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBABFE8 Offset: 0xBA7FE8 VA: 0xBABFE8
	|-Texture2D.GetRawTextureData<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: 0x13781C0 Offset: 0x13741C0 VA: 0x13781C0
	public void Apply(bool updateMipmaps, bool makeNoLongerReadable) { }

	// RVA: 0x137824C Offset: 0x137424C VA: 0x137824C
	public void Apply() { }

	// RVA: 0x1378258 Offset: 0x1374258 VA: 0x1378258
	public bool Reinitialize(int width, int height) { }

	// RVA: 0x13782E4 Offset: 0x13742E4 VA: 0x13782E4
	public bool Reinitialize(int width, int height, TextureFormat format, bool hasMipMap) { }

	// RVA: 0x1378350 Offset: 0x1374350 VA: 0x1378350
	public void SetPixels32(Color32[] colors, int miplevel) { }

	// RVA: 0x13783A4 Offset: 0x13743A4 VA: 0x13783A4
	public void SetPixels32(Color32[] colors) { }

	// RVA: 0x1377838 Offset: 0x1373838 VA: 0x1377838
	private void SetPixelImpl_Injected(int image, int mip, int x, int y, ref Color color) { }

	// RVA: 0x1377934 Offset: 0x1373934 VA: 0x1377934
	private void GetPixelBilinearImpl_Injected(int image, int mip, float u, float v, out Color ret) { }
}


// Namespace: UnityEngine
public sealed class Cubemap : Texture // TypeDefIndex: 5483
{
	// Properties
	public override bool isReadable { get; }

	// Methods

	// RVA: 0x13783EC Offset: 0x13743EC VA: 0x13783EC
	private static bool Internal_CreateImpl(Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex) { }

	// RVA: 0x1378470 Offset: 0x1374470 VA: 0x1378470
	private static void Internal_Create(Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex) { }

	// RVA: 0x1378544 Offset: 0x1374544 VA: 0x1378544 Slot: 8
	public override bool get_isReadable() { }

	// RVA: 0x1378580 Offset: 0x1374580 VA: 0x1378580
	internal bool ValidateFormat(TextureFormat format, int width) { }

	// RVA: 0x137864C Offset: 0x137464C VA: 0x137864C
	internal bool ValidateFormat(GraphicsFormat format, int width) { }

	// RVA: 0x137876C Offset: 0x137476C VA: 0x137876C
	public void .ctor(int width, DefaultFormat format, TextureCreationFlags flags) { }

	// RVA: 0x1378830 Offset: 0x1374830 VA: 0x1378830
	public void .ctor(int width, DefaultFormat format, TextureCreationFlags flags, int mipCount) { }

	[RequiredByNativeCode]
	// RVA: 0x13787A8 Offset: 0x13747A8 VA: 0x13787A8
	public void .ctor(int width, GraphicsFormat format, TextureCreationFlags flags) { }

	// RVA: 0x137887C Offset: 0x137487C VA: 0x137887C
	public void .ctor(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount) { }

	// RVA: 0x13789AC Offset: 0x13749AC VA: 0x13789AC
	internal void .ctor(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized) { }

	// RVA: 0x1378B08 Offset: 0x1374B08 VA: 0x1378B08
	public void .ctor(int width, TextureFormat textureFormat, bool mipChain) { }

	// RVA: 0x1378B9C Offset: 0x1374B9C VA: 0x1378B9C
	public void .ctor(int width, TextureFormat textureFormat, bool mipChain, bool createUninitialized) { }

	// RVA: 0x1378C3C Offset: 0x1374C3C VA: 0x1378C3C
	public void .ctor(int width, TextureFormat format, int mipCount) { }

	// RVA: 0x1378C48 Offset: 0x1374C48 VA: 0x1378C48
	public void .ctor(int width, TextureFormat format, int mipCount, bool createUninitialized) { }

	// RVA: 0x1378958 Offset: 0x1374958 VA: 0x1378958
	private static void ValidateIsNotCrunched(TextureCreationFlags flags) { }
}


// Namespace: UnityEngine
public sealed class Texture3D : Texture // TypeDefIndex: 5484
{
	// Properties
	public override bool isReadable { get; }

	// Methods

	// RVA: 0x1378C54 Offset: 0x1374C54 VA: 0x1378C54 Slot: 8
	public override bool get_isReadable() { }

	// RVA: 0x1378C90 Offset: 0x1374C90 VA: 0x1378C90
	private static bool Internal_CreateImpl(Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex) { }

	// RVA: 0x1378D2C Offset: 0x1374D2C VA: 0x1378D2C
	private static void Internal_Create(Texture3D mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex) { }

	// RVA: 0x1378E20 Offset: 0x1374E20 VA: 0x1378E20
	public void .ctor(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags) { }

	// RVA: 0x1378F14 Offset: 0x1374F14 VA: 0x1378F14
	public void .ctor(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount) { }

	[RequiredByNativeCode]
	// RVA: 0x1378E74 Offset: 0x1374E74 VA: 0x1378E74
	public void .ctor(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags) { }

	// RVA: 0x1378F78 Offset: 0x1374F78 VA: 0x1378F78
	public void .ctor(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount) { }

	// RVA: 0x13790B8 Offset: 0x13750B8 VA: 0x13790B8
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, int mipCount) { }

	// RVA: 0x13790D8 Offset: 0x13750D8 VA: 0x13790D8
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, int mipCount, IntPtr nativeTex) { }

	// RVA: 0x13790F4 Offset: 0x13750F4 VA: 0x13790F4
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized) { }

	// RVA: 0x1379258 Offset: 0x1375258 VA: 0x1379258
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, bool mipChain) { }

	// RVA: 0x1379310 Offset: 0x1375310 VA: 0x1379310
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, bool createUninitialized) { }

	// RVA: 0x13793D4 Offset: 0x13753D4 VA: 0x13793D4
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, IntPtr nativeTex) { }

	// RVA: 0x1379064 Offset: 0x1375064 VA: 0x1379064
	private static void ValidateIsNotCrunched(TextureCreationFlags flags) { }
}


// Namespace: UnityEngine
public sealed class Texture2DArray : Texture // TypeDefIndex: 5485
{
	// Properties
	public static int allSlices { get; }
	public override bool isReadable { get; }

	// Methods

	// RVA: 0x1379498 Offset: 0x1375498 VA: 0x1379498
	public static int get_allSlices() { }

	// RVA: 0x13794C0 Offset: 0x13754C0 VA: 0x13794C0 Slot: 8
	public override bool get_isReadable() { }

	// RVA: 0x13794FC Offset: 0x13754FC VA: 0x13794FC
	private static bool Internal_CreateImpl(Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags) { }

	// RVA: 0x1379588 Offset: 0x1375588 VA: 0x1379588
	private static void Internal_Create(Texture2DArray mono, int w, int h, int d, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags) { }

	// RVA: 0x1379664 Offset: 0x1375664 VA: 0x1379664
	internal bool ValidateFormat(TextureFormat format, int width, int height) { }

	// RVA: 0x1379744 Offset: 0x1375744 VA: 0x1379744
	internal bool ValidateFormat(GraphicsFormat format, int width, int height) { }

	// RVA: 0x1379870 Offset: 0x1375870 VA: 0x1379870
	public void .ctor(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags) { }

	// RVA: 0x1379964 Offset: 0x1375964 VA: 0x1379964
	public void .ctor(int width, int height, int depth, DefaultFormat format, TextureCreationFlags flags, int mipCount) { }

	[RequiredByNativeCode]
	// RVA: 0x13798C4 Offset: 0x13758C4 VA: 0x13798C4
	public void .ctor(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags) { }

	// RVA: 0x1379AC4 Offset: 0x1375AC4 VA: 0x1379AC4
	public void .ctor(int width, int height, int depth, GraphicsFormat format, TextureCreationFlags flags, int mipCount) { }

	// RVA: 0x1379BB0 Offset: 0x1375BB0 VA: 0x1379BB0
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized) { }

	// RVA: 0x1379D2C Offset: 0x1375D2C VA: 0x1379D2C
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, int mipCount, bool linear) { }

	// RVA: 0x1379D4C Offset: 0x1375D4C VA: 0x1379D4C
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized) { }

	// RVA: 0x1379E08 Offset: 0x1375E08 VA: 0x1379E08
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, bool mipChain, bool linear) { }

	// RVA: 0x1379ECC Offset: 0x1375ECC VA: 0x1379ECC
	public void .ctor(int width, int height, int depth, TextureFormat textureFormat, bool mipChain) { }

	// RVA: 0x1379A70 Offset: 0x1375A70 VA: 0x1379A70
	private static void ValidateIsNotCrunched(TextureCreationFlags flags) { }
}


// Namespace: UnityEngine
public sealed class CubemapArray : Texture // TypeDefIndex: 5486
{
	// Properties
	public override bool isReadable { get; }

	// Methods

	// RVA: 0x1379F84 Offset: 0x1375F84 VA: 0x1379F84 Slot: 8
	public override bool get_isReadable() { }

	// RVA: 0x1379FC0 Offset: 0x1375FC0 VA: 0x1379FC0
	private static bool Internal_CreateImpl(CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags) { }

	// RVA: 0x137A044 Offset: 0x1376044 VA: 0x137A044
	private static void Internal_Create(CubemapArray mono, int ext, int count, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags) { }

	// RVA: 0x137A118 Offset: 0x1376118 VA: 0x137A118
	public void .ctor(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags) { }

	// RVA: 0x137A1F4 Offset: 0x13761F4 VA: 0x137A1F4
	public void .ctor(int width, int cubemapCount, DefaultFormat format, TextureCreationFlags flags, int mipCount) { }

	[RequiredByNativeCode]
	// RVA: 0x137A164 Offset: 0x1376164 VA: 0x137A164
	public void .ctor(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags) { }

	// RVA: 0x137A248 Offset: 0x1376248 VA: 0x137A248
	public void .ctor(int width, int cubemapCount, GraphicsFormat format, TextureCreationFlags flags, int mipCount) { }

	// RVA: 0x137A388 Offset: 0x1376388 VA: 0x137A388
	public void .ctor(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear, bool createUninitialized) { }

	// RVA: 0x137A4F4 Offset: 0x13764F4 VA: 0x137A4F4
	public void .ctor(int width, int cubemapCount, TextureFormat textureFormat, int mipCount, bool linear) { }

	// RVA: 0x137A500 Offset: 0x1376500 VA: 0x137A500
	public void .ctor(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, bool linear, bool createUninitialized) { }

	// RVA: 0x137A5B4 Offset: 0x13765B4 VA: 0x137A5B4
	public void .ctor(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain, bool linear) { }

	// RVA: 0x137A65C Offset: 0x137665C VA: 0x137A65C
	public void .ctor(int width, int cubemapCount, TextureFormat textureFormat, bool mipChain) { }

	// RVA: 0x137A334 Offset: 0x1376334 VA: 0x137A334
	private static void ValidateIsNotCrunched(TextureCreationFlags flags) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class RenderTexture : Texture // TypeDefIndex: 5487
{
	// Properties
	public override int width { get; set; }
	public override int height { get; set; }
	public GraphicsFormat graphicsFormat { set; }
	public bool useMipMap { set; }
	public GraphicsFormat depthStencilFormat { set; }
	public static RenderTexture active { get; set; }
	public RenderBuffer colorBuffer { get; }
	public RenderBuffer depthBuffer { get; }
	public RenderTextureDescriptor descriptor { get; }

	// Methods

	// RVA: 0x137A700 Offset: 0x1376700 VA: 0x137A700 Slot: 4
	public override int get_width() { }

	// RVA: 0x137A73C Offset: 0x137673C VA: 0x137A73C Slot: 5
	public override void set_width(int value) { }

	// RVA: 0x137A780 Offset: 0x1376780 VA: 0x137A780 Slot: 6
	public override int get_height() { }

	// RVA: 0x137A7BC Offset: 0x13767BC VA: 0x137A7BC Slot: 7
	public override void set_height(int value) { }

	// RVA: 0x137A800 Offset: 0x1376800 VA: 0x137A800
	private void SetColorFormat(GraphicsFormat format) { }

	// RVA: 0x137A844 Offset: 0x1376844 VA: 0x137A844
	public void set_graphicsFormat(GraphicsFormat value) { }

	// RVA: 0x137A888 Offset: 0x1376888 VA: 0x137A888
	public void set_useMipMap(bool value) { }

	// RVA: 0x137A8CC Offset: 0x13768CC VA: 0x137A8CC
	public void set_depthStencilFormat(GraphicsFormat value) { }

	// RVA: 0x137A910 Offset: 0x1376910 VA: 0x137A910
	private static RenderTexture GetActive() { }

	// RVA: 0x137A938 Offset: 0x1376938 VA: 0x137A938
	private static void SetActive(RenderTexture rt) { }

	// RVA: 0x137A974 Offset: 0x1376974 VA: 0x137A974
	public static RenderTexture get_active() { }

	// RVA: 0x137A99C Offset: 0x137699C VA: 0x137A99C
	public static void set_active(RenderTexture value) { }

	// RVA: 0x137A9D8 Offset: 0x13769D8 VA: 0x137A9D8
	private RenderBuffer GetColorBuffer() { }

	// RVA: 0x137AA70 Offset: 0x1376A70 VA: 0x137AA70
	private RenderBuffer GetDepthBuffer() { }

	// RVA: 0x137AB08 Offset: 0x1376B08 VA: 0x137AB08
	private void SetMipMapCount(int count) { }

	// RVA: 0x137133C Offset: 0x136D33C VA: 0x137133C
	public RenderBuffer get_colorBuffer() { }

	// RVA: 0x1371340 Offset: 0x136D340 VA: 0x1371340
	public RenderBuffer get_depthBuffer() { }

	// RVA: 0x137AB4C Offset: 0x1376B4C VA: 0x137AB4C
	public bool Create() { }

	// RVA: 0x137AB88 Offset: 0x1376B88 VA: 0x137AB88
	internal void SetSRGBReadWrite(bool srgb) { }

	// RVA: 0x137ABCC Offset: 0x1376BCC VA: 0x137ABCC
	private static void Internal_Create(RenderTexture rt) { }

	// RVA: 0x137AC08 Offset: 0x1376C08 VA: 0x137AC08
	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc) { }

	// RVA: 0x137AC90 Offset: 0x1376C90 VA: 0x137AC90
	private RenderTextureDescriptor GetDescriptor() { }

	// RVA: 0x137AD4C Offset: 0x1376D4C VA: 0x137AD4C
	private static RenderTexture GetTemporary_Internal(RenderTextureDescriptor desc) { }

	// RVA: 0x137ADC4 Offset: 0x1376DC4 VA: 0x137ADC4
	public static void ReleaseTemporary(RenderTexture temp) { }

	[RequiredByNativeCode]
	// RVA: 0x137AE00 Offset: 0x1376E00 VA: 0x137AE00
	protected internal void .ctor() { }

	// RVA: 0x137AE54 Offset: 0x1376E54 VA: 0x137AE54
	public void .ctor(RenderTextureDescriptor desc) { }

	// RVA: 0x137B334 Offset: 0x1377334 VA: 0x137B334
	public void .ctor(RenderTexture textureToCopy) { }

	// RVA: 0x137B520 Offset: 0x1377520 VA: 0x137B520
	public void .ctor(int width, int height, int depth, DefaultFormat format) { }

	// RVA: 0x137B848 Offset: 0x1377848 VA: 0x137B848
	public void .ctor(int width, int height, int depth, GraphicsFormat format) { }

	// RVA: 0x137B8D8 Offset: 0x13778D8 VA: 0x137B8D8
	public void .ctor(int width, int height, int depth, GraphicsFormat format, int mipCount) { }

	// RVA: 0x137B644 Offset: 0x1377644 VA: 0x137B644
	public void .ctor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount) { }

	// RVA: 0x137BB70 Offset: 0x1377B70 VA: 0x137BB70
	public void .ctor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat) { }

	// RVA: 0x137BC00 Offset: 0x1377C00 VA: 0x137BC00
	public void .ctor(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite) { }

	// RVA: 0x137BE88 Offset: 0x1377E88 VA: 0x137BE88
	public void .ctor(int width, int height, int depth, RenderTextureFormat format) { }

	// RVA: 0x137BFB8 Offset: 0x1377FB8 VA: 0x137BFB8
	public void .ctor(int width, int height, int depth) { }

	// RVA: 0x137BF18 Offset: 0x1377F18 VA: 0x137BF18
	public void .ctor(int width, int height, int depth, RenderTextureFormat format, int mipCount) { }

	// RVA: 0x137BCA8 Offset: 0x1377CA8 VA: 0x137BCA8
	private void Initialize(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite, int mipCount) { }

	// RVA: 0x137BAEC Offset: 0x1377AEC VA: 0x137BAEC
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, GraphicsFormat colorFormat) { }

	// RVA: 0x137C110 Offset: 0x1378110 VA: 0x137C110
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, RenderTextureFormat format) { }

	// RVA: 0x137C19C Offset: 0x137819C VA: 0x137C19C
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, DefaultFormat format) { }

	// RVA: 0x137C11C Offset: 0x137811C VA: 0x137C11C
	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, bool requestedShadowMap) { }

	// RVA: 0x137B49C Offset: 0x137749C VA: 0x137B49C
	public RenderTextureDescriptor get_descriptor() { }

	// RVA: 0x137AF4C Offset: 0x1376F4C VA: 0x137AF4C
	private static void ValidateRenderTextureDesc(RenderTextureDescriptor desc) { }

	// RVA: 0x137B5F4 Offset: 0x13775F4 VA: 0x137B5F4
	internal static GraphicsFormat GetDefaultColorFormat(DefaultFormat format) { }

	// RVA: 0x137B61C Offset: 0x137761C VA: 0x137B61C
	internal static GraphicsFormat GetDefaultDepthStencilFormat(DefaultFormat format, int depth) { }

	// RVA: 0x137BFC0 Offset: 0x1377FC0 VA: 0x137BFC0
	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite) { }

	// RVA: 0x137C1B0 Offset: 0x13781B0 VA: 0x137C1B0
	public static RenderTexture GetTemporary(RenderTextureDescriptor desc) { }

	// RVA: 0x137C250 Offset: 0x1378250 VA: 0x137C250
	private static RenderTexture GetTemporaryImpl(int width, int height, GraphicsFormat depthStencilFormat, GraphicsFormat colorFormat, int antiAliasing = 1, RenderTextureMemoryless memorylessMode = 0, VRTextureUsage vrUsage = 0, bool useDynamicScale = False) { }

	// RVA: 0x137C3C4 Offset: 0x13783C4 VA: 0x137C3C4
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode, VRTextureUsage vrUsage, bool useDynamicScale) { }

	// RVA: 0x137C450 Offset: 0x1378450 VA: 0x137C450
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode, VRTextureUsage vrUsage) { }

	// RVA: 0x137C46C Offset: 0x137846C VA: 0x137C46C
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode) { }

	// RVA: 0x137C48C Offset: 0x137848C VA: 0x137C48C
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing) { }

	// RVA: 0x137C4B0 Offset: 0x13784B0 VA: 0x137C4B0
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite) { }

	// RVA: 0x137C4D8 Offset: 0x13784D8 VA: 0x137C4D8
	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format) { }

	// RVA: 0x137AA2C Offset: 0x1376A2C VA: 0x137AA2C
	private void GetColorBuffer_Injected(out RenderBuffer ret) { }

	// RVA: 0x137AAC4 Offset: 0x1376AC4 VA: 0x137AAC4
	private void GetDepthBuffer_Injected(out RenderBuffer ret) { }

	// RVA: 0x137AC4C Offset: 0x1376C4C VA: 0x137AC4C
	private void SetRenderTextureDescriptor_Injected(ref RenderTextureDescriptor desc) { }

	// RVA: 0x137AD08 Offset: 0x1376D08 VA: 0x137AD08
	private void GetDescriptor_Injected(out RenderTextureDescriptor ret) { }

	// RVA: 0x137AD88 Offset: 0x1376D88 VA: 0x137AD88
	private static RenderTexture GetTemporary_Internal_Injected(ref RenderTextureDescriptor desc) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class CustomRenderTexture : RenderTexture // TypeDefIndex: 5488
{}


// Namespace: UnityEngine
public struct RenderTextureDescriptor // TypeDefIndex: 5489
{
	// Fields
	[CompilerGenerated]
	private int <width>k__BackingField; // 0x0
	[CompilerGenerated]
	private int <height>k__BackingField; // 0x4
	[CompilerGenerated]
	private int <msaaSamples>k__BackingField; // 0x8
	[CompilerGenerated]
	private int <volumeDepth>k__BackingField; // 0xC
	[CompilerGenerated]
	private int <mipCount>k__BackingField; // 0x10
	private GraphicsFormat _graphicsFormat; // 0x14
	[CompilerGenerated]
	private GraphicsFormat <stencilFormat>k__BackingField; // 0x18
	[CompilerGenerated]
	private GraphicsFormat <depthStencilFormat>k__BackingField; // 0x1C
	[CompilerGenerated]
	private TextureDimension <dimension>k__BackingField; // 0x20
	[CompilerGenerated]
	private ShadowSamplingMode <shadowSamplingMode>k__BackingField; // 0x24
	[CompilerGenerated]
	private VRTextureUsage <vrUsage>k__BackingField; // 0x28
	private RenderTextureCreationFlags _flags; // 0x2C
	[CompilerGenerated]
	private RenderTextureMemoryless <memoryless>k__BackingField; // 0x30

	// Properties
	public int width { get; set; }
	public int height { get; set; }
	public int msaaSamples { get; set; }
	public int volumeDepth { get; set; }
	public int mipCount { set; }
	public GraphicsFormat graphicsFormat { get; set; }
	public GraphicsFormat depthStencilFormat { get; set; }
	public int depthBufferBits { get; set; }
	public TextureDimension dimension { get; set; }
	public ShadowSamplingMode shadowSamplingMode { set; }
	public VRTextureUsage vrUsage { set; }
	public RenderTextureMemoryless memoryless { set; }
	internal bool createdFromScript { set; }
	public bool useDynamicScale { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x137C504 Offset: 0x1378504 VA: 0x137C504
	public int get_width() { }

	[CompilerGenerated]
	// RVA: 0x137C50C Offset: 0x137850C VA: 0x137C50C
	public void set_width(int value) { }

	[CompilerGenerated]
	// RVA: 0x137C514 Offset: 0x1378514 VA: 0x137C514
	public int get_height() { }

	[CompilerGenerated]
	// RVA: 0x137C51C Offset: 0x137851C VA: 0x137C51C
	public void set_height(int value) { }

	[CompilerGenerated]
	// RVA: 0x137C524 Offset: 0x1378524 VA: 0x137C524
	public int get_msaaSamples() { }

	[CompilerGenerated]
	// RVA: 0x137C52C Offset: 0x137852C VA: 0x137C52C
	public void set_msaaSamples(int value) { }

	[CompilerGenerated]
	// RVA: 0x137C534 Offset: 0x1378534 VA: 0x137C534
	public int get_volumeDepth() { }

	[CompilerGenerated]
	// RVA: 0x137C53C Offset: 0x137853C VA: 0x137C53C
	public void set_volumeDepth(int value) { }

	[CompilerGenerated]
	// RVA: 0x137C544 Offset: 0x1378544 VA: 0x137C544
	public void set_mipCount(int value) { }

	// RVA: 0x137C1A8 Offset: 0x13781A8 VA: 0x137C1A8
	public GraphicsFormat get_graphicsFormat() { }

	// RVA: 0x137C54C Offset: 0x137854C VA: 0x137C54C
	public void set_graphicsFormat(GraphicsFormat value) { }

	[CompilerGenerated]
	// RVA: 0x137C684 Offset: 0x1378684 VA: 0x137C684
	public GraphicsFormat get_depthStencilFormat() { }

	[CompilerGenerated]
	// RVA: 0x137C68C Offset: 0x137868C VA: 0x137C68C
	public void set_depthStencilFormat(GraphicsFormat value) { }

	// RVA: 0x137C604 Offset: 0x1378604 VA: 0x137C604
	public int get_depthBufferBits() { }

	// RVA: 0x137C660 Offset: 0x1378660 VA: 0x137C660
	public void set_depthBufferBits(int value) { }

	[CompilerGenerated]
	// RVA: 0x137C694 Offset: 0x1378694 VA: 0x137C694
	public TextureDimension get_dimension() { }

	[CompilerGenerated]
	// RVA: 0x137C69C Offset: 0x137869C VA: 0x137C69C
	public void set_dimension(TextureDimension value) { }

	[CompilerGenerated]
	// RVA: 0x137C6A4 Offset: 0x13786A4 VA: 0x137C6A4
	public void set_shadowSamplingMode(ShadowSamplingMode value) { }

	[CompilerGenerated]
	// RVA: 0x137C6AC Offset: 0x13786AC VA: 0x137C6AC
	public void set_vrUsage(VRTextureUsage value) { }

	[CompilerGenerated]
	// RVA: 0x137C6B4 Offset: 0x13786B4 VA: 0x137C6B4
	public void set_memoryless(RenderTextureMemoryless value) { }

	// RVA: 0x137C2E8 Offset: 0x13782E8 VA: 0x137C2E8
	public void .ctor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat) { }

	// RVA: 0x137C6BC Offset: 0x13786BC VA: 0x137C6BC
	public void .ctor(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount) { }

	// RVA: 0x137C5E8 Offset: 0x13785E8 VA: 0x137C5E8
	private void SetOrClearRenderTextureCreationFlag(bool value, RenderTextureCreationFlags flag) { }

	// RVA: 0x137C230 Offset: 0x1378230 VA: 0x137C230
	internal void set_createdFromScript(bool value) { }

	// RVA: 0x137C3A4 Offset: 0x13783A4 VA: 0x137C3A4
	public void set_useDynamicScale(bool value) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
[Serializable]
public struct Hash128 : IComparable, IComparable<Hash128>, IEquatable<Hash128> // TypeDefIndex: 5490
{
	// Fields
	internal ulong u64_0; // 0x0
	internal ulong u64_1; // 0x8

	// Methods

	// RVA: 0x13663C4 Offset: 0x13623C4 VA: 0x13663C4
	public void .ctor(ulong u64_0, ulong u64_1) { }

	// RVA: 0x137C718 Offset: 0x1378718 VA: 0x137C718 Slot: 5
	public int CompareTo(Hash128 rhs) { }

	// RVA: 0x137C7C0 Offset: 0x13787C0 VA: 0x137C7C0 Slot: 3
	public override string ToString() { }

	// RVA: 0x137C80C Offset: 0x137880C VA: 0x137C80C
	public static Hash128 Parse(string hashString) { }

	// RVA: 0x137C7CC Offset: 0x13787CC VA: 0x137C7CC
	private static string Hash128ToStringImpl(Hash128 hash) { }

	// RVA: 0x137C8E0 Offset: 0x13788E0 VA: 0x137C8E0 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x137C97C Offset: 0x137897C VA: 0x137C97C Slot: 6
	public bool Equals(Hash128 obj) { }

	// RVA: 0x137C998 Offset: 0x1378998 VA: 0x137C998 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x137C9CC Offset: 0x13789CC VA: 0x137C9CC Slot: 4
	public int CompareTo(object obj) { }

	// RVA: 0x137C964 Offset: 0x1378964 VA: 0x137C964
	public static bool op_Equality(Hash128 hash1, Hash128 hash2) { }

	// RVA: 0x137C76C Offset: 0x137876C VA: 0x137C76C
	public static bool op_LessThan(Hash128 x, Hash128 y) { }

	// RVA: 0x137C784 Offset: 0x1378784 VA: 0x137C784
	public static bool op_GreaterThan(Hash128 x, Hash128 y) { }

	// RVA: 0x137C860 Offset: 0x1378860 VA: 0x137C860
	private static void Parse_Injected(string hashString, out Hash128 ret) { }

	// RVA: 0x137C8A4 Offset: 0x13788A4 VA: 0x137C8A4
	private static string Hash128ToStringImpl_Injected(ref Hash128 hash) { }
}


// Namespace: UnityEngine
public enum CursorMode // TypeDefIndex: 5491
{
	// Fields
	public int value__; // 0x0
	public const CursorMode Auto = 0;
	public const CursorMode ForceSoftware = 1;
}


// Namespace: UnityEngine
public enum CursorLockMode // TypeDefIndex: 5492
{
	// Fields
	public int value__; // 0x0
	public const CursorLockMode None = 0;
	public const CursorLockMode Locked = 1;
	public const CursorLockMode Confined = 2;
}


// Namespace: UnityEngine
public class Cursor // TypeDefIndex: 5493
{
	// Properties
	public static bool visible { set; }
	public static CursorLockMode lockState { get; set; }

	// Methods

	// RVA: 0x137CA88 Offset: 0x1378A88 VA: 0x137CA88
	public static void SetCursor(Texture2D texture, Vector2 hotspot, CursorMode cursorMode) { }

	// RVA: 0x137CB34 Offset: 0x1378B34 VA: 0x137CB34
	public static void set_visible(bool value) { }

	// RVA: 0x137CB70 Offset: 0x1378B70 VA: 0x137CB70
	public static CursorLockMode get_lockState() { }

	// RVA: 0x137CB98 Offset: 0x1378B98 VA: 0x137CB98
	public static void set_lockState(CursorLockMode value) { }

	// RVA: 0x137CAE0 Offset: 0x1378AE0 VA: 0x137CAE0
	private static void SetCursor_Injected(Texture2D texture, ref Vector2 hotspot, CursorMode cursorMode) { }
}


// Namespace: UnityEngine
public enum KeyCode // TypeDefIndex: 5494
{
	// Fields
	public int value__; // 0x0
	public const KeyCode None = 0;
	public const KeyCode Backspace = 8;
	public const KeyCode Delete = 127;
	public const KeyCode Tab = 9;
	public const KeyCode Clear = 12;
	public const KeyCode Return = 13;
	public const KeyCode Pause = 19;
	public const KeyCode Escape = 27;
	public const KeyCode Space = 32;
	public const KeyCode Keypad0 = 256;
	public const KeyCode Keypad1 = 257;
	public const KeyCode Keypad2 = 258;
	public const KeyCode Keypad3 = 259;
	public const KeyCode Keypad4 = 260;
	public const KeyCode Keypad5 = 261;
	public const KeyCode Keypad6 = 262;
	public const KeyCode Keypad7 = 263;
	public const KeyCode Keypad8 = 264;
	public const KeyCode Keypad9 = 265;
	public const KeyCode KeypadPeriod = 266;
	public const KeyCode KeypadDivide = 267;
	public const KeyCode KeypadMultiply = 268;
	public const KeyCode KeypadMinus = 269;
	public const KeyCode KeypadPlus = 270;
	public const KeyCode KeypadEnter = 271;
	public const KeyCode KeypadEquals = 272;
	public const KeyCode UpArrow = 273;
	public const KeyCode DownArrow = 274;
	public const KeyCode RightArrow = 275;
	public const KeyCode LeftArrow = 276;
	public const KeyCode Insert = 277;
	public const KeyCode Home = 278;
	public const KeyCode End = 279;
	public const KeyCode PageUp = 280;
	public const KeyCode PageDown = 281;
	public const KeyCode F1 = 282;
	public const KeyCode F2 = 283;
	public const KeyCode F3 = 284;
	public const KeyCode F4 = 285;
	public const KeyCode F5 = 286;
	public const KeyCode F6 = 287;
	public const KeyCode F7 = 288;
	public const KeyCode F8 = 289;
	public const KeyCode F9 = 290;
	public const KeyCode F10 = 291;
	public const KeyCode F11 = 292;
	public const KeyCode F12 = 293;
	public const KeyCode F13 = 294;
	public const KeyCode F14 = 295;
	public const KeyCode F15 = 296;
	public const KeyCode Alpha0 = 48;
	public const KeyCode Alpha1 = 49;
	public const KeyCode Alpha2 = 50;
	public const KeyCode Alpha3 = 51;
	public const KeyCode Alpha4 = 52;
	public const KeyCode Alpha5 = 53;
	public const KeyCode Alpha6 = 54;
	public const KeyCode Alpha7 = 55;
	public const KeyCode Alpha8 = 56;
	public const KeyCode Alpha9 = 57;
	public const KeyCode Exclaim = 33;
	public const KeyCode DoubleQuote = 34;
	public const KeyCode Hash = 35;
	public const KeyCode Dollar = 36;
	public const KeyCode Percent = 37;
	public const KeyCode Ampersand = 38;
	public const KeyCode Quote = 39;
	public const KeyCode LeftParen = 40;
	public const KeyCode RightParen = 41;
	public const KeyCode Asterisk = 42;
	public const KeyCode Plus = 43;
	public const KeyCode Comma = 44;
	public const KeyCode Minus = 45;
	public const KeyCode Period = 46;
	public const KeyCode Slash = 47;
	public const KeyCode Colon = 58;
	public const KeyCode Semicolon = 59;
	public const KeyCode Less = 60;
	public const KeyCode Equals = 61;
	public const KeyCode Greater = 62;
	public const KeyCode Question = 63;
	public const KeyCode At = 64;
	public const KeyCode LeftBracket = 91;
	public const KeyCode Backslash = 92;
	public const KeyCode RightBracket = 93;
	public const KeyCode Caret = 94;
	public const KeyCode Underscore = 95;
	public const KeyCode BackQuote = 96;
	public const KeyCode A = 97;
	public const KeyCode B = 98;
	public const KeyCode C = 99;
	public const KeyCode D = 100;
	public const KeyCode E = 101;
	public const KeyCode F = 102;
	public const KeyCode G = 103;
	public const KeyCode H = 104;
	public const KeyCode I = 105;
	public const KeyCode J = 106;
	public const KeyCode K = 107;
	public const KeyCode L = 108;
	public const KeyCode M = 109;
	public const KeyCode N = 110;
	public const KeyCode O = 111;
	public const KeyCode P = 112;
	public const KeyCode Q = 113;
	public const KeyCode R = 114;
	public const KeyCode S = 115;
	public const KeyCode T = 116;
	public const KeyCode U = 117;
	public const KeyCode V = 118;
	public const KeyCode W = 119;
	public const KeyCode X = 120;
	public const KeyCode Y = 121;
	public const KeyCode Z = 122;
	public const KeyCode LeftCurlyBracket = 123;
	public const KeyCode Pipe = 124;
	public const KeyCode RightCurlyBracket = 125;
	public const KeyCode Tilde = 126;
	public const KeyCode Numlock = 300;
	public const KeyCode CapsLock = 301;
	public const KeyCode ScrollLock = 302;
	public const KeyCode RightShift = 303;
	public const KeyCode LeftShift = 304;
	public const KeyCode RightControl = 305;
	public const KeyCode LeftControl = 306;
	public const KeyCode RightAlt = 307;
	public const KeyCode LeftAlt = 308;
	public const KeyCode LeftMeta = 310;
	public const KeyCode LeftCommand = 310;
	public const KeyCode LeftApple = 310;
	public const KeyCode LeftWindows = 311;
	public const KeyCode RightMeta = 309;
	public const KeyCode RightCommand = 309;
	public const KeyCode RightApple = 309;
	public const KeyCode RightWindows = 312;
	public const KeyCode AltGr = 313;
	public const KeyCode Help = 315;
	public const KeyCode Print = 316;
	public const KeyCode SysReq = 317;
	public const KeyCode Break = 318;
	public const KeyCode Menu = 319;
	public const KeyCode F16 = 670;
	public const KeyCode F17 = 671;
	public const KeyCode F18 = 672;
	public const KeyCode F19 = 673;
	public const KeyCode F20 = 674;
	public const KeyCode F21 = 675;
	public const KeyCode F22 = 676;
	public const KeyCode F23 = 677;
	public const KeyCode F24 = 678;
	public const KeyCode Mouse0 = 323;
	public const KeyCode Mouse1 = 324;
	public const KeyCode Mouse2 = 325;
	public const KeyCode Mouse3 = 326;
	public const KeyCode Mouse4 = 327;
	public const KeyCode Mouse5 = 328;
	public const KeyCode Mouse6 = 329;
	public const KeyCode JoystickButton0 = 330;
	public const KeyCode JoystickButton1 = 331;
	public const KeyCode JoystickButton2 = 332;
	public const KeyCode JoystickButton3 = 333;
	public const KeyCode JoystickButton4 = 334;
	public const KeyCode JoystickButton5 = 335;
	public const KeyCode JoystickButton6 = 336;
	public const KeyCode JoystickButton7 = 337;
	public const KeyCode JoystickButton8 = 338;
	public const KeyCode JoystickButton9 = 339;
	public const KeyCode JoystickButton10 = 340;
	public const KeyCode JoystickButton11 = 341;
	public const KeyCode JoystickButton12 = 342;
	public const KeyCode JoystickButton13 = 343;
	public const KeyCode JoystickButton14 = 344;
	public const KeyCode JoystickButton15 = 345;
	public const KeyCode JoystickButton16 = 346;
	public const KeyCode JoystickButton17 = 347;
	public const KeyCode JoystickButton18 = 348;
	public const KeyCode JoystickButton19 = 349;
	public const KeyCode Joystick1Button0 = 350;
	public const KeyCode Joystick1Button1 = 351;
	public const KeyCode Joystick1Button2 = 352;
	public const KeyCode Joystick1Button3 = 353;
	public const KeyCode Joystick1Button4 = 354;
	public const KeyCode Joystick1Button5 = 355;
	public const KeyCode Joystick1Button6 = 356;
	public const KeyCode Joystick1Button7 = 357;
	public const KeyCode Joystick1Button8 = 358;
	public const KeyCode Joystick1Button9 = 359;
	public const KeyCode Joystick1Button10 = 360;
	public const KeyCode Joystick1Button11 = 361;
	public const KeyCode Joystick1Button12 = 362;
	public const KeyCode Joystick1Button13 = 363;
	public const KeyCode Joystick1Button14 = 364;
	public const KeyCode Joystick1Button15 = 365;
	public const KeyCode Joystick1Button16 = 366;
	public const KeyCode Joystick1Button17 = 367;
	public const KeyCode Joystick1Button18 = 368;
	public const KeyCode Joystick1Button19 = 369;
	public const KeyCode Joystick2Button0 = 370;
	public const KeyCode Joystick2Button1 = 371;
	public const KeyCode Joystick2Button2 = 372;
	public const KeyCode Joystick2Button3 = 373;
	public const KeyCode Joystick2Button4 = 374;
	public const KeyCode Joystick2Button5 = 375;
	public const KeyCode Joystick2Button6 = 376;
	public const KeyCode Joystick2Button7 = 377;
	public const KeyCode Joystick2Button8 = 378;
	public const KeyCode Joystick2Button9 = 379;
	public const KeyCode Joystick2Button10 = 380;
	public const KeyCode Joystick2Button11 = 381;
	public const KeyCode Joystick2Button12 = 382;
	public const KeyCode Joystick2Button13 = 383;
	public const KeyCode Joystick2Button14 = 384;
	public const KeyCode Joystick2Button15 = 385;
	public const KeyCode Joystick2Button16 = 386;
	public const KeyCode Joystick2Button17 = 387;
	public const KeyCode Joystick2Button18 = 388;
	public const KeyCode Joystick2Button19 = 389;
	public const KeyCode Joystick3Button0 = 390;
	public const KeyCode Joystick3Button1 = 391;
	public const KeyCode Joystick3Button2 = 392;
	public const KeyCode Joystick3Button3 = 393;
	public const KeyCode Joystick3Button4 = 394;
	public const KeyCode Joystick3Button5 = 395;
	public const KeyCode Joystick3Button6 = 396;
	public const KeyCode Joystick3Button7 = 397;
	public const KeyCode Joystick3Button8 = 398;
	public const KeyCode Joystick3Button9 = 399;
	public const KeyCode Joystick3Button10 = 400;
	public const KeyCode Joystick3Button11 = 401;
	public const KeyCode Joystick3Button12 = 402;
	public const KeyCode Joystick3Button13 = 403;
	public const KeyCode Joystick3Button14 = 404;
	public const KeyCode Joystick3Button15 = 405;
	public const KeyCode Joystick3Button16 = 406;
	public const KeyCode Joystick3Button17 = 407;
	public const KeyCode Joystick3Button18 = 408;
	public const KeyCode Joystick3Button19 = 409;
	public const KeyCode Joystick4Button0 = 410;
	public const KeyCode Joystick4Button1 = 411;
	public const KeyCode Joystick4Button2 = 412;
	public const KeyCode Joystick4Button3 = 413;
	public const KeyCode Joystick4Button4 = 414;
	public const KeyCode Joystick4Button5 = 415;
	public const KeyCode Joystick4Button6 = 416;
	public const KeyCode Joystick4Button7 = 417;
	public const KeyCode Joystick4Button8 = 418;
	public const KeyCode Joystick4Button9 = 419;
	public const KeyCode Joystick4Button10 = 420;
	public const KeyCode Joystick4Button11 = 421;
	public const KeyCode Joystick4Button12 = 422;
	public const KeyCode Joystick4Button13 = 423;
	public const KeyCode Joystick4Button14 = 424;
	public const KeyCode Joystick4Button15 = 425;
	public const KeyCode Joystick4Button16 = 426;
	public const KeyCode Joystick4Button17 = 427;
	public const KeyCode Joystick4Button18 = 428;
	public const KeyCode Joystick4Button19 = 429;
	public const KeyCode Joystick5Button0 = 430;
	public const KeyCode Joystick5Button1 = 431;
	public const KeyCode Joystick5Button2 = 432;
	public const KeyCode Joystick5Button3 = 433;
	public const KeyCode Joystick5Button4 = 434;
	public const KeyCode Joystick5Button5 = 435;
	public const KeyCode Joystick5Button6 = 436;
	public const KeyCode Joystick5Button7 = 437;
	public const KeyCode Joystick5Button8 = 438;
	public const KeyCode Joystick5Button9 = 439;
	public const KeyCode Joystick5Button10 = 440;
	public const KeyCode Joystick5Button11 = 441;
	public const KeyCode Joystick5Button12 = 442;
	public const KeyCode Joystick5Button13 = 443;
	public const KeyCode Joystick5Button14 = 444;
	public const KeyCode Joystick5Button15 = 445;
	public const KeyCode Joystick5Button16 = 446;
	public const KeyCode Joystick5Button17 = 447;
	public const KeyCode Joystick5Button18 = 448;
	public const KeyCode Joystick5Button19 = 449;
	public const KeyCode Joystick6Button0 = 450;
	public const KeyCode Joystick6Button1 = 451;
	public const KeyCode Joystick6Button2 = 452;
	public const KeyCode Joystick6Button3 = 453;
	public const KeyCode Joystick6Button4 = 454;
	public const KeyCode Joystick6Button5 = 455;
	public const KeyCode Joystick6Button6 = 456;
	public const KeyCode Joystick6Button7 = 457;
	public const KeyCode Joystick6Button8 = 458;
	public const KeyCode Joystick6Button9 = 459;
	public const KeyCode Joystick6Button10 = 460;
	public const KeyCode Joystick6Button11 = 461;
	public const KeyCode Joystick6Button12 = 462;
	public const KeyCode Joystick6Button13 = 463;
	public const KeyCode Joystick6Button14 = 464;
	public const KeyCode Joystick6Button15 = 465;
	public const KeyCode Joystick6Button16 = 466;
	public const KeyCode Joystick6Button17 = 467;
	public const KeyCode Joystick6Button18 = 468;
	public const KeyCode Joystick6Button19 = 469;
	public const KeyCode Joystick7Button0 = 470;
	public const KeyCode Joystick7Button1 = 471;
	public const KeyCode Joystick7Button2 = 472;
	public const KeyCode Joystick7Button3 = 473;
	public const KeyCode Joystick7Button4 = 474;
	public const KeyCode Joystick7Button5 = 475;
	public const KeyCode Joystick7Button6 = 476;
	public const KeyCode Joystick7Button7 = 477;
	public const KeyCode Joystick7Button8 = 478;
	public const KeyCode Joystick7Button9 = 479;
	public const KeyCode Joystick7Button10 = 480;
	public const KeyCode Joystick7Button11 = 481;
	public const KeyCode Joystick7Button12 = 482;
	public const KeyCode Joystick7Button13 = 483;
	public const KeyCode Joystick7Button14 = 484;
	public const KeyCode Joystick7Button15 = 485;
	public const KeyCode Joystick7Button16 = 486;
	public const KeyCode Joystick7Button17 = 487;
	public const KeyCode Joystick7Button18 = 488;
	public const KeyCode Joystick7Button19 = 489;
	public const KeyCode Joystick8Button0 = 490;
	public const KeyCode Joystick8Button1 = 491;
	public const KeyCode Joystick8Button2 = 492;
	public const KeyCode Joystick8Button3 = 493;
	public const KeyCode Joystick8Button4 = 494;
	public const KeyCode Joystick8Button5 = 495;
	public const KeyCode Joystick8Button6 = 496;
	public const KeyCode Joystick8Button7 = 497;
	public const KeyCode Joystick8Button8 = 498;
	public const KeyCode Joystick8Button9 = 499;
	public const KeyCode Joystick8Button10 = 500;
	public const KeyCode Joystick8Button11 = 501;
	public const KeyCode Joystick8Button12 = 502;
	public const KeyCode Joystick8Button13 = 503;
	public const KeyCode Joystick8Button14 = 504;
	public const KeyCode Joystick8Button15 = 505;
	public const KeyCode Joystick8Button16 = 506;
	public const KeyCode Joystick8Button17 = 507;
	public const KeyCode Joystick8Button18 = 508;
	public const KeyCode Joystick8Button19 = 509;
}


// Namespace: UnityEngine
public interface ILogHandler // TypeDefIndex: 5495
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void LogFormat(LogType logType, Object context, string format, object[] args);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void LogException(Exception exception, Object context);
}


// Namespace: UnityEngine
public interface ILogger : ILogHandler // TypeDefIndex: 5496
{
	// Properties
	public abstract ILogHandler logHandler { get; }
	public abstract bool logEnabled { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ILogHandler get_logHandler();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_logEnabled();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool IsLogTypeAllowed(LogType logType);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Log(LogType logType, object message);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Log(LogType logType, object message, Object context);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Log(LogType logType, string tag, object message);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Log(string tag, object message);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void LogWarning(string tag, object message);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void LogError(string tag, object message);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void LogFormat(LogType logType, string format, object[] args);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void LogException(Exception exception);
}


// Namespace: UnityEngine
public class Logger : ILogger, ILogHandler // TypeDefIndex: 5497
{
	// Fields
	[CompilerGenerated]
	private ILogHandler <logHandler>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <logEnabled>k__BackingField; // 0x18
	[CompilerGenerated]
	private LogType <filterLogType>k__BackingField; // 0x1C

	// Properties
	public ILogHandler logHandler { get; set; }
	public bool logEnabled { get; set; }
	public LogType filterLogType { get; set; }

	// Methods

	// RVA: 0x136BA24 Offset: 0x1367A24 VA: 0x136BA24
	public void .ctor(ILogHandler logHandler) { }

	[CompilerGenerated]
	// RVA: 0x137CBD4 Offset: 0x1378BD4 VA: 0x137CBD4 Slot: 4
	public ILogHandler get_logHandler() { }

	[CompilerGenerated]
	// RVA: 0x137CBDC Offset: 0x1378BDC VA: 0x137CBDC Slot: 17
	public void set_logHandler(ILogHandler value) { }

	[CompilerGenerated]
	// RVA: 0x137CBE4 Offset: 0x1378BE4 VA: 0x137CBE4 Slot: 5
	public bool get_logEnabled() { }

	[CompilerGenerated]
	// RVA: 0x137CBEC Offset: 0x1378BEC VA: 0x137CBEC Slot: 18
	public void set_logEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x137CBF8 Offset: 0x1378BF8 VA: 0x137CBF8 Slot: 19
	public LogType get_filterLogType() { }

	[CompilerGenerated]
	// RVA: 0x137CC00 Offset: 0x1378C00 VA: 0x137CC00 Slot: 20
	public void set_filterLogType(LogType value) { }

	// RVA: 0x137CC08 Offset: 0x1378C08 VA: 0x137CC08 Slot: 6
	public bool IsLogTypeAllowed(LogType logType) { }

	// RVA: 0x137CC40 Offset: 0x1378C40 VA: 0x137CC40
	private static string GetString(object message) { }

	// RVA: 0x137CD60 Offset: 0x1378D60 VA: 0x137CD60 Slot: 7
	public void Log(LogType logType, object message) { }

	// RVA: 0x137CED8 Offset: 0x1378ED8 VA: 0x137CED8 Slot: 8
	public void Log(LogType logType, object message, Object context) { }

	// RVA: 0x137D054 Offset: 0x1379054 VA: 0x137D054 Slot: 9
	public void Log(LogType logType, string tag, object message) { }

	// RVA: 0x137D1F8 Offset: 0x13791F8 VA: 0x137D1F8 Slot: 10
	public void Log(string tag, object message) { }

	// RVA: 0x137D38C Offset: 0x137938C VA: 0x137D38C Slot: 11
	public void LogWarning(string tag, object message) { }

	// RVA: 0x137D520 Offset: 0x1379520 VA: 0x137D520 Slot: 12
	public void LogError(string tag, object message) { }

	// RVA: 0x137D6B0 Offset: 0x13796B0 VA: 0x137D6B0 Slot: 14
	public void LogException(Exception exception) { }

	// RVA: 0x137D774 Offset: 0x1379774 VA: 0x137D774 Slot: 16
	public void LogException(Exception exception, Object context) { }

	// RVA: 0x137D848 Offset: 0x1379848 VA: 0x137D848 Slot: 13
	public void LogFormat(LogType logType, string format, object[] args) { }

	// RVA: 0x137D944 Offset: 0x1379944 VA: 0x137D944 Slot: 15
	public void LogFormat(LogType logType, Object context, string format, object[] args) { }
}


// Namespace: UnityEngine
internal class UnityLogWriter : TextWriter // TypeDefIndex: 5498
{
	// Properties
	public override Encoding Encoding { get; }

	// Methods

	// RVA: 0x137DA50 Offset: 0x1379A50 VA: 0x137DA50
	public static void WriteStringToUnityLog(string s) { }

	// RVA: 0x137DA94 Offset: 0x1379A94 VA: 0x137DA94
	private static void WriteStringToUnityLogImpl(string s) { }

	// RVA: 0x137DAD0 Offset: 0x1379AD0 VA: 0x137DAD0
	public static void Init() { }

	// RVA: 0x137DBA0 Offset: 0x1379BA0 VA: 0x137DBA0 Slot: 9
	public override Encoding get_Encoding() { }

	// RVA: 0x137DBA8 Offset: 0x1379BA8 VA: 0x137DBA8 Slot: 11
	public override void Write(char value) { }

	// RVA: 0x137DC34 Offset: 0x1379C34 VA: 0x137DC34 Slot: 14
	public override void Write(string s) { }

	// RVA: 0x137DC78 Offset: 0x1379C78 VA: 0x137DC78 Slot: 13
	public override void Write(char[] buffer, int index, int count) { }

	// RVA: 0x137DB48 Offset: 0x1379B48 VA: 0x137DB48
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
[DefaultMember("Item")]
public struct Color : IEquatable<Color>, IFormattable // TypeDefIndex: 5499
{
	// Fields
	public float r; // 0x0
	public float g; // 0x4
	public float b; // 0x8
	public float a; // 0xC

	// Properties
	public static Color red { get; }
	public static Color green { get; }
	public static Color blue { get; }
	public static Color white { get; }
	public static Color black { get; }
	public static Color yellow { get; }
	public static Color gray { get; }
	public static Color clear { get; }
	public Color linear { get; }
	public float maxColorComponent { get; }

	// Methods

	// RVA: 0x137DCC0 Offset: 0x1379CC0 VA: 0x137DCC0
	public void .ctor(float r, float g, float b, float a) { }

	// RVA: 0x137DCCC Offset: 0x1379CCC VA: 0x137DCCC
	public void .ctor(float r, float g, float b) { }

	// RVA: 0x137DCE0 Offset: 0x1379CE0 VA: 0x137DCE0 Slot: 3
	public override string ToString() { }

	// RVA: 0x137DCF0 Offset: 0x1379CF0 VA: 0x137DCF0 Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x137DEF8 Offset: 0x1379EF8 VA: 0x137DEF8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x137DF7C Offset: 0x1379F7C VA: 0x137DF7C Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x137E050 Offset: 0x137A050 VA: 0x137E050 Slot: 4
	public bool Equals(Color other) { }

	// RVA: 0x137E0D0 Offset: 0x137A0D0 VA: 0x137E0D0
	public static Color op_Multiply(Color a, Color b) { }

	// RVA: 0x137E0E4 Offset: 0x137A0E4 VA: 0x137E0E4
	public static Color op_Multiply(Color a, float b) { }

	// RVA: 0x137E0F8 Offset: 0x137A0F8 VA: 0x137E0F8
	public static bool op_Equality(Color lhs, Color rhs) { }

	// RVA: 0x137E138 Offset: 0x137A138 VA: 0x137E138
	public static bool op_Inequality(Color lhs, Color rhs) { }

	// RVA: 0x137E178 Offset: 0x137A178 VA: 0x137E178
	public static Color Lerp(Color a, Color b, float t) { }

	// RVA: 0x137E1C4 Offset: 0x137A1C4 VA: 0x137E1C4
	public static Color LerpUnclamped(Color a, Color b, float t) { }

	// RVA: 0x137E1FC Offset: 0x137A1FC VA: 0x137E1FC
	internal Color RGBMultiplied(float multiplier) { }

	// RVA: 0x137E218 Offset: 0x137A218 VA: 0x137E218
	public static Color get_red() { }

	// RVA: 0x137E22C Offset: 0x137A22C VA: 0x137E22C
	public static Color get_green() { }

	// RVA: 0x137E240 Offset: 0x137A240 VA: 0x137E240
	public static Color get_blue() { }

	// RVA: 0x137E254 Offset: 0x137A254 VA: 0x137E254
	public static Color get_white() { }

	// RVA: 0x137E268 Offset: 0x137A268 VA: 0x137E268
	public static Color get_black() { }

	// RVA: 0x137E27C Offset: 0x137A27C VA: 0x137E27C
	public static Color get_yellow() { }

	// RVA: 0x137E298 Offset: 0x137A298 VA: 0x137E298
	public static Color get_gray() { }

	// RVA: 0x137E2AC Offset: 0x137A2AC VA: 0x137E2AC
	public static Color get_clear() { }

	// RVA: 0x137E2C0 Offset: 0x137A2C0 VA: 0x137E2C0
	public Color get_linear() { }

	// RVA: 0x137E31C Offset: 0x137A31C VA: 0x137E31C
	public float get_maxColorComponent() { }

	// RVA: 0x137E338 Offset: 0x137A338 VA: 0x137E338
	public static Vector4 op_Implicit(Color c) { }

	// RVA: 0x137E33C Offset: 0x137A33C VA: 0x137E33C
	public static Color op_Implicit(Vector4 v) { }
}


// Namespace: UnityEngine
[DefaultMember("Item")]
[UsedByNativeCode]
public struct Color32 : IFormattable // TypeDefIndex: 5500
{
	// Fields
	private int rgba; // 0x0
	public byte r; // 0x0
	public byte g; // 0x1
	public byte b; // 0x2
	public byte a; // 0x3

	// Methods

	// RVA: 0x137E340 Offset: 0x137A340 VA: 0x137E340
	public void .ctor(byte r, byte g, byte b, byte a) { }

	// RVA: 0x137E354 Offset: 0x137A354 VA: 0x137E354
	public static Color32 op_Implicit(Color c) { }

	// RVA: 0x137E618 Offset: 0x137A618 VA: 0x137E618
	public static Color op_Implicit(Color32 c) { }

	// RVA: 0x137E654 Offset: 0x137A654 VA: 0x137E654 Slot: 3
	public override string ToString() { }

	// RVA: 0x137E664 Offset: 0x137A664 VA: 0x137E664 Slot: 4
	public string ToString(string format, IFormatProvider formatProvider) { }
}


// Namespace: UnityEngine
public class ColorUtility // TypeDefIndex: 5501
{
	// Methods

	// RVA: 0x137E840 Offset: 0x137A840 VA: 0x137E840
	internal static bool DoTryParseHtmlColor(string htmlString, out Color32 color) { }

	// RVA: 0x137E884 Offset: 0x137A884 VA: 0x137E884
	public static bool TryParseHtmlString(string htmlString, out Color color) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class Gradient : IEquatable<Gradient> // TypeDefIndex: 5502
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x137E918 Offset: 0x137A918 VA: 0x137E918
	private static IntPtr Init() { }

	// RVA: 0x137E940 Offset: 0x137A940 VA: 0x137E940
	private void Cleanup() { }

	// RVA: 0x137E97C Offset: 0x137A97C VA: 0x137E97C
	private bool Internal_Equals(IntPtr other) { }

	[RequiredByNativeCode]
	// RVA: 0x137E9C0 Offset: 0x137A9C0 VA: 0x137E9C0
	public void .ctor() { }

	// RVA: 0x137EA08 Offset: 0x137AA08 VA: 0x137EA08 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x137EAC0 Offset: 0x137AAC0 VA: 0x137EAC0 Slot: 0
	public override bool Equals(object o) { }

	// RVA: 0x137EBCC Offset: 0x137ABCC VA: 0x137EBCC Slot: 4
	public bool Equals(Gradient other) { }

	// RVA: 0x137EC94 Offset: 0x137AC94 VA: 0x137EC94 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
[Il2CppEagerStaticClassConstruction]
[DefaultMember("Item")]
public struct Matrix4x4 : IEquatable<Matrix4x4>, IFormattable // TypeDefIndex: 5503
{
	// Fields
	public float m00; // 0x0
	public float m10; // 0x4
	public float m20; // 0x8
	public float m30; // 0xC
	public float m01; // 0x10
	public float m11; // 0x14
	public float m21; // 0x18
	public float m31; // 0x1C
	public float m02; // 0x20
	public float m12; // 0x24
	public float m22; // 0x28
	public float m32; // 0x2C
	public float m03; // 0x30
	public float m13; // 0x34
	public float m23; // 0x38
	public float m33; // 0x3C
	private static readonly Matrix4x4 zeroMatrix; // 0x0
	private static readonly Matrix4x4 identityMatrix; // 0x40

	// Properties
	public Matrix4x4 inverse { get; }
	public static Matrix4x4 identity { get; }

	// Methods

	// RVA: 0x137ECA0 Offset: 0x137ACA0 VA: 0x137ECA0
	public static Matrix4x4 TRS(Vector3 pos, Quaternion q, Vector3 s) { }

	// RVA: 0x137ED8C Offset: 0x137AD8C VA: 0x137ED8C
	public static bool Inverse3DAffine(Matrix4x4 input, ref Matrix4x4 result) { }

	// RVA: 0x137EE14 Offset: 0x137AE14 VA: 0x137EE14
	public static Matrix4x4 Inverse(Matrix4x4 m) { }

	// RVA: 0x137EEC4 Offset: 0x137AEC4 VA: 0x137EEC4
	public Matrix4x4 get_inverse() { }

	// RVA: 0x137EF44 Offset: 0x137AF44 VA: 0x137EF44
	public void .ctor(Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3) { }

	// RVA: 0x137EF60 Offset: 0x137AF60 VA: 0x137EF60 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x137F1DC Offset: 0x137B1DC VA: 0x137F1DC Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x137F350 Offset: 0x137B350 VA: 0x137F350 Slot: 4
	public bool Equals(Matrix4x4 other) { }

	// RVA: 0x137F458 Offset: 0x137B458 VA: 0x137F458
	public static Matrix4x4 op_Multiply(Matrix4x4 lhs, Matrix4x4 rhs) { }

	// RVA: 0x137F108 Offset: 0x137B108 VA: 0x137F108
	public Vector4 GetColumn(int index) { }

	// RVA: 0x137F550 Offset: 0x137B550 VA: 0x137F550
	public Vector4 GetRow(int index) { }

	// RVA: 0x137F624 Offset: 0x137B624 VA: 0x137F624
	public Vector3 MultiplyPoint(Vector3 point) { }

	// RVA: 0x137F6A4 Offset: 0x137B6A4 VA: 0x137F6A4
	public Vector3 MultiplyPoint3x4(Vector3 point) { }

	// RVA: 0x137F6FC Offset: 0x137B6FC VA: 0x137F6FC
	public static Matrix4x4 Rotate(Quaternion q) { }

	// RVA: 0x137F794 Offset: 0x137B794 VA: 0x137F794
	public static Matrix4x4 get_identity() { }

	// RVA: 0x137F7EC Offset: 0x137B7EC VA: 0x137F7EC Slot: 3
	public override string ToString() { }

	// RVA: 0x137F7FC Offset: 0x137B7FC VA: 0x137F7FC Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x137FD04 Offset: 0x137BD04 VA: 0x137FD04
	private static void .cctor() { }

	// RVA: 0x137ED30 Offset: 0x137AD30 VA: 0x137ED30
	private static void TRS_Injected(ref Vector3 pos, ref Quaternion q, ref Vector3 s, out Matrix4x4 ret) { }

	// RVA: 0x137EDD0 Offset: 0x137ADD0 VA: 0x137EDD0
	private static bool Inverse3DAffine_Injected(ref Matrix4x4 input, ref Matrix4x4 result) { }

	// RVA: 0x137EE80 Offset: 0x137AE80 VA: 0x137EE80
	private static void Inverse_Injected(ref Matrix4x4 m, out Matrix4x4 ret) { }
}


// Namespace: UnityEngine
[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct Vector3 : IEquatable<Vector3>, IFormattable // TypeDefIndex: 5504
{
	// Fields
	public const float kEpsilon = 1E-05;
	public const float kEpsilonNormalSqrt = 1E-15;
	public float x; // 0x0
	public float y; // 0x4
	public float z; // 0x8
	private static readonly Vector3 zeroVector; // 0x0
	private static readonly Vector3 oneVector; // 0xC
	private static readonly Vector3 upVector; // 0x18
	private static readonly Vector3 downVector; // 0x24
	private static readonly Vector3 leftVector; // 0x30
	private static readonly Vector3 rightVector; // 0x3C
	private static readonly Vector3 forwardVector; // 0x48
	private static readonly Vector3 backVector; // 0x54
	private static readonly Vector3 positiveInfinityVector; // 0x60
	private static readonly Vector3 negativeInfinityVector; // 0x6C

	// Properties
	public float Item { get; set; }
	public Vector3 normalized { get; }
	public float magnitude { get; }
	public float sqrMagnitude { get; }
	public static Vector3 zero { get; }
	public static Vector3 one { get; }
	public static Vector3 forward { get; }
	public static Vector3 back { get; }
	public static Vector3 up { get; }
	public static Vector3 down { get; }
	public static Vector3 left { get; }
	public static Vector3 right { get; }

	// Methods

	// RVA: 0x1381964 Offset: 0x137D964 VA: 0x1381964
	public static Vector3 Lerp(Vector3 a, Vector3 b, float t) { }

	// RVA: 0x13819A0 Offset: 0x137D9A0 VA: 0x13819A0
	public static Vector3 LerpUnclamped(Vector3 a, Vector3 b, float t) { }

	// RVA: 0x13819C8 Offset: 0x137D9C8 VA: 0x13819C8
	public float get_Item(int index) { }

	// RVA: 0x1381A40 Offset: 0x137DA40 VA: 0x1381A40
	public void set_Item(int index, float value) { }

	// RVA: 0x1381AB8 Offset: 0x137DAB8 VA: 0x1381AB8
	public void .ctor(float x, float y, float z) { }

	// RVA: 0x1381AC4 Offset: 0x137DAC4 VA: 0x1381AC4
	public void .ctor(float x, float y) { }

	// RVA: 0x1381AD0 Offset: 0x137DAD0 VA: 0x1381AD0
	public static Vector3 Cross(Vector3 lhs, Vector3 rhs) { }

	// RVA: 0x1381AF8 Offset: 0x137DAF8 VA: 0x1381AF8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1381B40 Offset: 0x137DB40 VA: 0x1381B40 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1381BD8 Offset: 0x137DBD8 VA: 0x1381BD8 Slot: 4
	public bool Equals(Vector3 other) { }

	// RVA: 0x1381C08 Offset: 0x137DC08 VA: 0x1381C08
	public static Vector3 Normalize(Vector3 value) { }

	// RVA: 0x1381CD8 Offset: 0x137DCD8 VA: 0x1381CD8
	public Vector3 get_normalized() { }

	// RVA: 0x1381DA4 Offset: 0x137DDA4 VA: 0x1381DA4
	public static float Dot(Vector3 lhs, Vector3 rhs) { }

	// RVA: 0x1381DBC Offset: 0x137DDBC VA: 0x1381DBC
	public static float Angle(Vector3 from, Vector3 to) { }

	// RVA: 0x1381ED8 Offset: 0x137DED8 VA: 0x1381ED8
	public static float Distance(Vector3 a, Vector3 b) { }

	// RVA: 0x1381F78 Offset: 0x137DF78 VA: 0x1381F78
	public static float Magnitude(Vector3 vector) { }

	// RVA: 0x1381FF8 Offset: 0x137DFF8 VA: 0x1381FF8
	public float get_magnitude() { }

	// RVA: 0x1382078 Offset: 0x137E078 VA: 0x1382078
	public float get_sqrMagnitude() { }

	// RVA: 0x1382098 Offset: 0x137E098 VA: 0x1382098
	public static Vector3 Min(Vector3 lhs, Vector3 rhs) { }

	// RVA: 0x13820B4 Offset: 0x137E0B4 VA: 0x13820B4
	public static Vector3 Max(Vector3 lhs, Vector3 rhs) { }

	// RVA: 0x13820D0 Offset: 0x137E0D0 VA: 0x13820D0
	public static Vector3 get_zero() { }

	// RVA: 0x138211C Offset: 0x137E11C VA: 0x138211C
	public static Vector3 get_one() { }

	// RVA: 0x1382168 Offset: 0x137E168 VA: 0x1382168
	public static Vector3 get_forward() { }

	// RVA: 0x13821B4 Offset: 0x137E1B4 VA: 0x13821B4
	public static Vector3 get_back() { }

	// RVA: 0x1382200 Offset: 0x137E200 VA: 0x1382200
	public static Vector3 get_up() { }

	// RVA: 0x138224C Offset: 0x137E24C VA: 0x138224C
	public static Vector3 get_down() { }

	// RVA: 0x1382298 Offset: 0x137E298 VA: 0x1382298
	public static Vector3 get_left() { }

	// RVA: 0x13822E4 Offset: 0x137E2E4 VA: 0x13822E4
	public static Vector3 get_right() { }

	// RVA: 0x1382330 Offset: 0x137E330 VA: 0x1382330
	public static Vector3 op_Addition(Vector3 a, Vector3 b) { }

	// RVA: 0x1382340 Offset: 0x137E340 VA: 0x1382340
	public static Vector3 op_Subtraction(Vector3 a, Vector3 b) { }

	// RVA: 0x1382350 Offset: 0x137E350 VA: 0x1382350
	public static Vector3 op_UnaryNegation(Vector3 a) { }

	// RVA: 0x1382360 Offset: 0x137E360 VA: 0x1382360
	public static Vector3 op_Multiply(Vector3 a, float d) { }

	// RVA: 0x1382370 Offset: 0x137E370 VA: 0x1382370
	public static Vector3 op_Multiply(float d, Vector3 a) { }

	// RVA: 0x1382384 Offset: 0x137E384 VA: 0x1382384
	public static Vector3 op_Division(Vector3 a, float d) { }

	// RVA: 0x1382394 Offset: 0x137E394 VA: 0x1382394
	public static bool op_Equality(Vector3 lhs, Vector3 rhs) { }

	// RVA: 0x13823C8 Offset: 0x137E3C8 VA: 0x13823C8
	public static bool op_Inequality(Vector3 lhs, Vector3 rhs) { }

	// RVA: 0x13823FC Offset: 0x137E3FC VA: 0x13823FC Slot: 3
	public override string ToString() { }

	// RVA: 0x138240C Offset: 0x137E40C VA: 0x138240C Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x13825D4 Offset: 0x137E5D4 VA: 0x13825D4
	private static void .cctor() { }
}


// Namespace: UnityEngine
[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[UsedByNativeCode]
public struct Quaternion : IEquatable<Quaternion>, IFormattable // TypeDefIndex: 5505
{
	// Fields
	public float x; // 0x0
	public float y; // 0x4
	public float z; // 0x8
	public float w; // 0xC
	private static readonly Quaternion identityQuaternion; // 0x0

	// Properties
	public static Quaternion identity { get; }
	public Vector3 eulerAngles { get; }

	// Methods

	// RVA: 0x13826D0 Offset: 0x137E6D0 VA: 0x13826D0
	public static Quaternion FromToRotation(Vector3 fromDirection, Vector3 toDirection) { }

	// RVA: 0x1382784 Offset: 0x137E784 VA: 0x1382784
	public static Quaternion Inverse(Quaternion rotation) { }

	// RVA: 0x138281C Offset: 0x137E81C VA: 0x138281C
	public static Quaternion Lerp(Quaternion a, Quaternion b, float t) { }

	// RVA: 0x13828F0 Offset: 0x137E8F0 VA: 0x13828F0
	private static Quaternion Internal_FromEulerRad(Vector3 euler) { }

	// RVA: 0x1382988 Offset: 0x137E988 VA: 0x1382988
	private static Vector3 Internal_ToEulerRad(Quaternion rotation) { }

	// RVA: 0x1382A24 Offset: 0x137EA24 VA: 0x1382A24
	public static Quaternion AngleAxis(float angle, Vector3 axis) { }

	// RVA: 0x1382ADC Offset: 0x137EADC VA: 0x1382ADC
	public static Quaternion LookRotation(Vector3 forward, Vector3 upwards) { }

	// RVA: 0x1382B90 Offset: 0x137EB90 VA: 0x1382B90
	public static Quaternion LookRotation(Vector3 forward) { }

	// RVA: 0x1382BFC Offset: 0x137EBFC VA: 0x1382BFC
	public void .ctor(float x, float y, float z, float w) { }

	// RVA: 0x1382C08 Offset: 0x137EC08 VA: 0x1382C08
	public static Quaternion get_identity() { }

	// RVA: 0x1382C54 Offset: 0x137EC54 VA: 0x1382C54
	public static Quaternion op_Multiply(Quaternion lhs, Quaternion rhs) { }

	// RVA: 0x1382CC8 Offset: 0x137ECC8 VA: 0x1382CC8
	public static Vector3 op_Multiply(Quaternion rotation, Vector3 point) { }

	// RVA: 0x1382D6C Offset: 0x137ED6C VA: 0x1382D6C
	private static bool IsEqualUsingDot(float dot) { }

	// RVA: 0x1382D80 Offset: 0x137ED80 VA: 0x1382D80
	public static bool op_Equality(Quaternion lhs, Quaternion rhs) { }

	// RVA: 0x1382DB0 Offset: 0x137EDB0 VA: 0x1382DB0
	public static bool op_Inequality(Quaternion lhs, Quaternion rhs) { }

	// RVA: 0x1382DE0 Offset: 0x137EDE0 VA: 0x1382DE0
	public static float Dot(Quaternion a, Quaternion b) { }

	// RVA: 0x1382E00 Offset: 0x137EE00 VA: 0x1382E00
	private static Vector3 Internal_MakePositive(Vector3 euler) { }

	// RVA: 0x1382E88 Offset: 0x137EE88 VA: 0x1382E88
	public Vector3 get_eulerAngles() { }

	// RVA: 0x1382EB4 Offset: 0x137EEB4 VA: 0x1382EB4
	public static Quaternion Euler(float x, float y, float z) { }

	// RVA: 0x1382ECC Offset: 0x137EECC VA: 0x1382ECC
	public static Quaternion Euler(Vector3 euler) { }

	// RVA: 0x1382EE4 Offset: 0x137EEE4 VA: 0x1382EE4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1382F48 Offset: 0x137EF48 VA: 0x1382F48 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x138301C Offset: 0x137F01C VA: 0x138301C Slot: 4
	public bool Equals(Quaternion other) { }

	// RVA: 0x138309C Offset: 0x137F09C VA: 0x138309C Slot: 3
	public override string ToString() { }

	// RVA: 0x13830AC Offset: 0x137F0AC VA: 0x13830AC Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x13832B4 Offset: 0x137F2B4 VA: 0x13832B4
	private static void .cctor() { }

	// RVA: 0x1382730 Offset: 0x137E730 VA: 0x1382730
	private static void FromToRotation_Injected(ref Vector3 fromDirection, ref Vector3 toDirection, out Quaternion ret) { }

	// RVA: 0x13827D8 Offset: 0x137E7D8 VA: 0x13827D8
	private static void Inverse_Injected(ref Quaternion rotation, out Quaternion ret) { }

	// RVA: 0x138288C Offset: 0x137E88C VA: 0x138288C
	private static void Lerp_Injected(ref Quaternion a, ref Quaternion b, float t, out Quaternion ret) { }

	// RVA: 0x1382944 Offset: 0x137E944 VA: 0x1382944
	private static void Internal_FromEulerRad_Injected(ref Vector3 euler, out Quaternion ret) { }

	// RVA: 0x13829E0 Offset: 0x137E9E0 VA: 0x13829E0
	private static void Internal_ToEulerRad_Injected(ref Quaternion rotation, out Vector3 ret) { }

	// RVA: 0x1382A88 Offset: 0x137EA88 VA: 0x1382A88
	private static void AngleAxis_Injected(float angle, ref Vector3 axis, out Quaternion ret) { }

	// RVA: 0x1382B3C Offset: 0x137EB3C VA: 0x1382B3C
	private static void LookRotation_Injected(ref Vector3 forward, ref Vector3 upwards, out Quaternion ret) { }
}


// Namespace: UnityEngine
[Il2CppEagerStaticClassConstruction]
public struct Mathf // TypeDefIndex: 5506
{
	// Fields
	public static readonly float Epsilon; // 0x0

	// Methods

	// RVA: 0x1383304 Offset: 0x137F304 VA: 0x1383304
	public static bool IsPowerOfTwo(int value) { }

	// RVA: 0x1383340 Offset: 0x137F340 VA: 0x1383340
	public static int NextPowerOfTwo(int value) { }

	// RVA: 0x138337C Offset: 0x137F37C VA: 0x138337C
	public static float GammaToLinearSpace(float value) { }

	// RVA: 0x13833B4 Offset: 0x137F3B4 VA: 0x13833B4
	public static Color CorrelatedColorTemperatureToRGB(float kelvin) { }

	// RVA: 0x1383458 Offset: 0x137F458 VA: 0x1383458
	public static float Sin(float f) { }

	// RVA: 0x13834BC Offset: 0x137F4BC VA: 0x13834BC
	public static float Cos(float f) { }

	// RVA: 0x1383520 Offset: 0x137F520 VA: 0x1383520
	public static float Tan(float f) { }

	// RVA: 0x1383584 Offset: 0x137F584 VA: 0x1383584
	public static float Acos(float f) { }

	// RVA: 0x13835E8 Offset: 0x137F5E8 VA: 0x13835E8
	public static float Atan(float f) { }

	// RVA: 0x138364C Offset: 0x137F64C VA: 0x138364C
	public static float Atan2(float y, float x) { }

	// RVA: 0x13836B8 Offset: 0x137F6B8 VA: 0x13836B8
	public static float Sqrt(float f) { }

	// RVA: 0x1383714 Offset: 0x137F714 VA: 0x1383714
	public static float Abs(float f) { }

	// RVA: 0x1383770 Offset: 0x137F770 VA: 0x1383770
	public static int Abs(int value) { }

	// RVA: 0x13837C8 Offset: 0x137F7C8 VA: 0x13837C8
	public static float Min(float a, float b) { }

	// RVA: 0x13837D4 Offset: 0x137F7D4 VA: 0x13837D4
	public static int Min(int a, int b) { }

	// RVA: 0x13837E0 Offset: 0x137F7E0 VA: 0x13837E0
	public static float Max(float a, float b) { }

	// RVA: 0x13837EC Offset: 0x137F7EC VA: 0x13837EC
	public static int Max(int a, int b) { }

	// RVA: 0x13837F8 Offset: 0x137F7F8 VA: 0x13837F8
	public static float Pow(float f, float p) { }

	// RVA: 0x1383868 Offset: 0x137F868 VA: 0x1383868
	public static float Log(float f, float p) { }

	// RVA: 0x13838D8 Offset: 0x137F8D8 VA: 0x13838D8
	public static float Log10(float f) { }

	// RVA: 0x138393C Offset: 0x137F93C VA: 0x138393C
	public static float Ceil(float f) { }

	// RVA: 0x1383998 Offset: 0x137F998 VA: 0x1383998
	public static float Floor(float f) { }

	// RVA: 0x13839F4 Offset: 0x137F9F4 VA: 0x13839F4
	public static float Round(float f) { }

	// RVA: 0x1383ABC Offset: 0x137FABC VA: 0x1383ABC
	public static int CeilToInt(float f) { }

	// RVA: 0x1383B30 Offset: 0x137FB30 VA: 0x1383B30
	public static int FloorToInt(float f) { }

	// RVA: 0x1383BA4 Offset: 0x137FBA4 VA: 0x1383BA4
	public static int RoundToInt(float f) { }

	// RVA: 0x1383C80 Offset: 0x137FC80 VA: 0x1383C80
	public static float Sign(float f) { }

	// RVA: 0x1383C94 Offset: 0x137FC94 VA: 0x1383C94
	public static float Clamp(float value, float min, float max) { }

	// RVA: 0x1383CB0 Offset: 0x137FCB0 VA: 0x1383CB0
	public static int Clamp(int value, int min, int max) { }

	// RVA: 0x1383CCC Offset: 0x137FCCC VA: 0x1383CCC
	public static float Clamp01(float value) { }

	// RVA: 0x1383CE8 Offset: 0x137FCE8 VA: 0x1383CE8
	public static float Lerp(float a, float b, float t) { }

	// RVA: 0x1383D0C Offset: 0x137FD0C VA: 0x1383D0C
	public static float LerpUnclamped(float a, float b, float t) { }

	// RVA: 0x1383D1C Offset: 0x137FD1C VA: 0x1383D1C
	public static bool Approximately(float a, float b) { }

	// RVA: 0x1383DAC Offset: 0x137FDAC VA: 0x1383DAC
	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime, float maxSpeed, float deltaTime) { }

	// RVA: 0x1383E78 Offset: 0x137FE78 VA: 0x1383E78
	public static float Repeat(float t, float length) { }

	// RVA: 0x1383EA0 Offset: 0x137FEA0 VA: 0x1383EA0
	public static float PingPong(float t, float length) { }

	// RVA: 0x1383ED4 Offset: 0x137FED4 VA: 0x1383ED4
	public static float InverseLerp(float a, float b, float value) { }

	// RVA: 0x1383F04 Offset: 0x137FF04 VA: 0x1383F04
	public static float DeltaAngle(float current, float target) { }

	// RVA: 0x1383F50 Offset: 0x137FF50 VA: 0x1383F50
	internal static float ClampToFloat(double value) { }

	// RVA: 0x1383FBC Offset: 0x137FFBC VA: 0x1383FBC
	internal static int ClampToInt(long value) { }

	// RVA: 0x1383FE4 Offset: 0x137FFE4 VA: 0x1383FE4
	internal static uint ClampToUInt(long value) { }

	// RVA: 0x1384000 Offset: 0x1380000 VA: 0x1384000
	internal static int GetNumberOfDecimalsForMinimumDifference(double minDifference) { }

	// RVA: 0x138408C Offset: 0x138008C VA: 0x138408C
	internal static double RoundBasedOnMinimumDifference(double valueToRound, double minDifference) { }

	// RVA: 0x1384118 Offset: 0x1380118 VA: 0x1384118
	internal static double DiscardLeastSignificantDecimal(double v) { }

	// RVA: 0x1384278 Offset: 0x1380278 VA: 0x1384278
	private static void .cctor() { }

	// RVA: 0x138340C Offset: 0x137F40C VA: 0x138340C
	private static void CorrelatedColorTemperatureToRGB_Injected(float kelvin, out Color ret) { }
}


// Namespace: UnityEngine
[Il2CppEagerStaticClassConstruction]
[DefaultMember("Item")]
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct Vector2 : IEquatable<Vector2>, IFormattable // TypeDefIndex: 5507
{
	// Fields
	public float x; // 0x0
	public float y; // 0x4
	private static readonly Vector2 zeroVector; // 0x0
	private static readonly Vector2 oneVector; // 0x8
	private static readonly Vector2 upVector; // 0x10
	private static readonly Vector2 downVector; // 0x18
	private static readonly Vector2 leftVector; // 0x20
	private static readonly Vector2 rightVector; // 0x28
	private static readonly Vector2 positiveInfinityVector; // 0x30
	private static readonly Vector2 negativeInfinityVector; // 0x38
	public const float kEpsilon = 1E-05;
	public const float kEpsilonNormalSqrt = 1E-15;

	// Properties
	public float Item { get; set; }
	public Vector2 normalized { get; }
	public float magnitude { get; }
	public float sqrMagnitude { get; }
	public static Vector2 zero { get; }
	public static Vector2 one { get; }
	public static Vector2 up { get; }
	public static Vector2 down { get; }
	public static Vector2 left { get; }
	public static Vector2 right { get; }
	public static Vector2 negativeInfinity { get; }

	// Methods

	// RVA: 0x1384334 Offset: 0x1380334 VA: 0x1384334
	public float get_Item(int index) { }

	// RVA: 0x138439C Offset: 0x138039C VA: 0x138439C
	public void set_Item(int index, float value) { }

	// RVA: 0x1384404 Offset: 0x1380404 VA: 0x1384404
	public void .ctor(float x, float y) { }

	// RVA: 0x138440C Offset: 0x138040C VA: 0x138440C
	public static Vector2 Lerp(Vector2 a, Vector2 b, float t) { }

	// RVA: 0x138443C Offset: 0x138043C VA: 0x138443C
	public static Vector2 LerpUnclamped(Vector2 a, Vector2 b, float t) { }

	// RVA: 0x1384458 Offset: 0x1380458 VA: 0x1384458
	public static Vector2 Scale(Vector2 a, Vector2 b) { }

	// RVA: 0x1384464 Offset: 0x1380464 VA: 0x1384464
	public void Normalize() { }

	// RVA: 0x1384528 Offset: 0x1380528 VA: 0x1384528
	public Vector2 get_normalized() { }

	// RVA: 0x13845D8 Offset: 0x13805D8 VA: 0x13845D8 Slot: 3
	public override string ToString() { }

	// RVA: 0x13845E8 Offset: 0x13805E8 VA: 0x13845E8 Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x1384770 Offset: 0x1380770 VA: 0x1384770 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13847A4 Offset: 0x13807A4 VA: 0x13847A4 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x138482C Offset: 0x138082C VA: 0x138482C Slot: 4
	public bool Equals(Vector2 other) { }

	// RVA: 0x1384850 Offset: 0x1380850 VA: 0x1384850
	public static float Dot(Vector2 lhs, Vector2 rhs) { }

	// RVA: 0x1384860 Offset: 0x1380860 VA: 0x1384860
	public float get_magnitude() { }

	// RVA: 0x13848CC Offset: 0x13808CC VA: 0x13848CC
	public float get_sqrMagnitude() { }

	// RVA: 0x13848E0 Offset: 0x13808E0 VA: 0x13848E0
	public static float Distance(Vector2 a, Vector2 b) { }

	// RVA: 0x1384964 Offset: 0x1380964 VA: 0x1384964
	public static Vector2 ClampMagnitude(Vector2 vector, float maxLength) { }

	// RVA: 0x13849F8 Offset: 0x13809F8 VA: 0x13849F8
	public static Vector2 Min(Vector2 lhs, Vector2 rhs) { }

	// RVA: 0x1384A0C Offset: 0x1380A0C VA: 0x1384A0C
	public static Vector2 Max(Vector2 lhs, Vector2 rhs) { }

	// RVA: 0x1384A20 Offset: 0x1380A20 VA: 0x1384A20
	public static Vector2 op_Addition(Vector2 a, Vector2 b) { }

	// RVA: 0x1384A2C Offset: 0x1380A2C VA: 0x1384A2C
	public static Vector2 op_Subtraction(Vector2 a, Vector2 b) { }

	// RVA: 0x1384A38 Offset: 0x1380A38 VA: 0x1384A38
	public static Vector2 op_Multiply(Vector2 a, Vector2 b) { }

	// RVA: 0x1384A44 Offset: 0x1380A44 VA: 0x1384A44
	public static Vector2 op_Division(Vector2 a, Vector2 b) { }

	// RVA: 0x1384A50 Offset: 0x1380A50 VA: 0x1384A50
	public static Vector2 op_UnaryNegation(Vector2 a) { }

	// RVA: 0x1384A5C Offset: 0x1380A5C VA: 0x1384A5C
	public static Vector2 op_Multiply(Vector2 a, float d) { }

	// RVA: 0x1384A68 Offset: 0x1380A68 VA: 0x1384A68
	public static Vector2 op_Multiply(float d, Vector2 a) { }

	// RVA: 0x1384A78 Offset: 0x1380A78 VA: 0x1384A78
	public static Vector2 op_Division(Vector2 a, float d) { }

	// RVA: 0x1384A84 Offset: 0x1380A84 VA: 0x1384A84
	public static bool op_Equality(Vector2 lhs, Vector2 rhs) { }

	// RVA: 0x1384AAC Offset: 0x1380AAC VA: 0x1384AAC
	public static bool op_Inequality(Vector2 lhs, Vector2 rhs) { }

	// RVA: 0x1384AD4 Offset: 0x1380AD4 VA: 0x1384AD4
	public static Vector2 op_Implicit(Vector3 v) { }

	// RVA: 0x1384AD8 Offset: 0x1380AD8 VA: 0x1384AD8
	public static Vector3 op_Implicit(Vector2 v) { }

	// RVA: 0x1384AE0 Offset: 0x1380AE0 VA: 0x1384AE0
	public static Vector2 get_zero() { }

	// RVA: 0x1384B28 Offset: 0x1380B28 VA: 0x1384B28
	public static Vector2 get_one() { }

	// RVA: 0x1384B70 Offset: 0x1380B70 VA: 0x1384B70
	public static Vector2 get_up() { }

	// RVA: 0x1384BB8 Offset: 0x1380BB8 VA: 0x1384BB8
	public static Vector2 get_down() { }

	// RVA: 0x1384C00 Offset: 0x1380C00 VA: 0x1384C00
	public static Vector2 get_left() { }

	// RVA: 0x1384C48 Offset: 0x1380C48 VA: 0x1384C48
	public static Vector2 get_right() { }

	// RVA: 0x1384C90 Offset: 0x1380C90 VA: 0x1384C90
	public static Vector2 get_negativeInfinity() { }

	// RVA: 0x1384CD8 Offset: 0x1380CD8 VA: 0x1384CD8
	private static void .cctor() { }
}


// Namespace: UnityEngine
[DefaultMember("Item")]
[UsedByNativeCode]
[Il2CppEagerStaticClassConstruction]
public struct Vector2Int : IEquatable<Vector2Int>, IFormattable // TypeDefIndex: 5508
{
	// Fields
	private int m_X; // 0x0
	private int m_Y; // 0x4
	private static readonly Vector2Int s_Zero; // 0x0
	private static readonly Vector2Int s_One; // 0x8
	private static readonly Vector2Int s_Up; // 0x10
	private static readonly Vector2Int s_Down; // 0x18
	private static readonly Vector2Int s_Left; // 0x20
	private static readonly Vector2Int s_Right; // 0x28

	// Properties
	public int x { get; set; }
	public int y { get; set; }

	// Methods

	// RVA: 0x1384D8C Offset: 0x1380D8C VA: 0x1384D8C
	public int get_x() { }

	// RVA: 0x1384D94 Offset: 0x1380D94 VA: 0x1384D94
	public void set_x(int value) { }

	// RVA: 0x1384D9C Offset: 0x1380D9C VA: 0x1384D9C
	public int get_y() { }

	// RVA: 0x1384DA4 Offset: 0x1380DA4 VA: 0x1384DA4
	public void set_y(int value) { }

	// RVA: 0x1384DAC Offset: 0x1380DAC VA: 0x1384DAC
	public void .ctor(int x, int y) { }

	// RVA: 0x1384DB4 Offset: 0x1380DB4 VA: 0x1384DB4
	public static Vector2 op_Implicit(Vector2Int v) { }

	// RVA: 0x1384DC4 Offset: 0x1380DC4 VA: 0x1384DC4
	public static Vector2Int FloorToInt(Vector2 v) { }

	// RVA: 0x1384E8C Offset: 0x1380E8C VA: 0x1384E8C
	public static bool op_Equality(Vector2Int lhs, Vector2Int rhs) { }

	// RVA: 0x1384EAC Offset: 0x1380EAC VA: 0x1384EAC Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1384F34 Offset: 0x1380F34 VA: 0x1384F34 Slot: 4
	public bool Equals(Vector2Int other) { }

	// RVA: 0x1384F5C Offset: 0x1380F5C VA: 0x1384F5C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1384FA4 Offset: 0x1380FA4 VA: 0x1384FA4 Slot: 3
	public override string ToString() { }

	// RVA: 0x1384FB4 Offset: 0x1380FB4 VA: 0x1384FB4 Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x138512C Offset: 0x138112C VA: 0x138512C
	private static void .cctor() { }
}


// Namespace: UnityEngine
[Il2CppEagerStaticClassConstruction]
[UsedByNativeCode]
[DefaultMember("Item")]
public struct Vector3Int : IEquatable<Vector3Int>, IFormattable // TypeDefIndex: 5509
{
	// Fields
	private int m_X; // 0x0
	private int m_Y; // 0x4
	private int m_Z; // 0x8
	private static readonly Vector3Int s_Zero; // 0x0
	private static readonly Vector3Int s_One; // 0xC
	private static readonly Vector3Int s_Up; // 0x18
	private static readonly Vector3Int s_Down; // 0x24
	private static readonly Vector3Int s_Left; // 0x30
	private static readonly Vector3Int s_Right; // 0x3C
	private static readonly Vector3Int s_Forward; // 0x48
	private static readonly Vector3Int s_Back; // 0x54

	// Properties
	public int x { get; set; }
	public int y { get; set; }
	public int z { get; set; }

	// Methods

	// RVA: 0x13851B4 Offset: 0x13811B4 VA: 0x13851B4
	public int get_x() { }

	// RVA: 0x13851BC Offset: 0x13811BC VA: 0x13851BC
	public void set_x(int value) { }

	// RVA: 0x13851C4 Offset: 0x13811C4 VA: 0x13851C4
	public int get_y() { }

	// RVA: 0x13851CC Offset: 0x13811CC VA: 0x13851CC
	public void set_y(int value) { }

	// RVA: 0x13851D4 Offset: 0x13811D4 VA: 0x13851D4
	public int get_z() { }

	// RVA: 0x13851DC Offset: 0x13811DC VA: 0x13851DC
	public void set_z(int value) { }

	// RVA: 0x13851E4 Offset: 0x13811E4 VA: 0x13851E4
	public void .ctor(int x, int y, int z) { }

	// RVA: 0x13851F0 Offset: 0x13811F0 VA: 0x13851F0
	public static bool op_Equality(Vector3Int lhs, Vector3Int rhs) { }

	// RVA: 0x1385220 Offset: 0x1381220 VA: 0x1385220 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x13852BC Offset: 0x13812BC VA: 0x13852BC Slot: 4
	public bool Equals(Vector3Int other) { }

	// RVA: 0x13852F4 Offset: 0x13812F4 VA: 0x13852F4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x138536C Offset: 0x138136C VA: 0x138536C Slot: 3
	public override string ToString() { }

	// RVA: 0x138537C Offset: 0x138137C VA: 0x138537C Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x138553C Offset: 0x138153C VA: 0x138553C
	private static void .cctor() { }
}


// Namespace: UnityEngine
[DefaultMember("Item")]
[Il2CppEagerStaticClassConstruction]
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct Vector4 : IEquatable<Vector4>, IFormattable // TypeDefIndex: 5510
{
	// Fields
	public const float kEpsilon = 1E-05;
	public float x; // 0x0
	public float y; // 0x4
	public float z; // 0x8
	public float w; // 0xC
	private static readonly Vector4 zeroVector; // 0x0
	private static readonly Vector4 oneVector; // 0x10
	private static readonly Vector4 positiveInfinityVector; // 0x20
	private static readonly Vector4 negativeInfinityVector; // 0x30

	// Properties
	public float Item { get; set; }
	public float sqrMagnitude { get; }
	public static Vector4 zero { get; }

	// Methods

	// RVA: 0x1385608 Offset: 0x1381608 VA: 0x1385608
	public float get_Item(int index) { }

	// RVA: 0x1385698 Offset: 0x1381698 VA: 0x1385698
	public void set_Item(int index, float value) { }

	// RVA: 0x1385728 Offset: 0x1381728 VA: 0x1385728
	public void .ctor(float x, float y, float z, float w) { }

	// RVA: 0x1385734 Offset: 0x1381734 VA: 0x1385734 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1385798 Offset: 0x1381798 VA: 0x1385798 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1385840 Offset: 0x1381840 VA: 0x1385840 Slot: 4
	public bool Equals(Vector4 other) { }

	// RVA: 0x138587C Offset: 0x138187C VA: 0x138587C
	public static float Dot(Vector4 a, Vector4 b) { }

	// RVA: 0x138589C Offset: 0x138189C VA: 0x138589C
	public float get_sqrMagnitude() { }

	// RVA: 0x13858C4 Offset: 0x13818C4 VA: 0x13858C4
	public static Vector4 get_zero() { }

	// RVA: 0x1385910 Offset: 0x1381910 VA: 0x1385910
	public static Vector4 op_Division(Vector4 a, float d) { }

	// RVA: 0x1385924 Offset: 0x1381924 VA: 0x1385924
	public static bool op_Equality(Vector4 lhs, Vector4 rhs) { }

	// RVA: 0x1385964 Offset: 0x1381964 VA: 0x1385964
	public static bool op_Inequality(Vector4 lhs, Vector4 rhs) { }

	// RVA: 0x13859A4 Offset: 0x13819A4 VA: 0x13859A4
	public static Vector4 op_Implicit(Vector3 v) { }

	// RVA: 0x13859AC Offset: 0x13819AC VA: 0x13859AC
	public static Vector4 op_Implicit(Vector2 v) { }

	// RVA: 0x13859B8 Offset: 0x13819B8 VA: 0x13859B8
	public static Vector2 op_Implicit(Vector4 v) { }

	// RVA: 0x13859BC Offset: 0x13819BC VA: 0x13859BC Slot: 3
	public override string ToString() { }

	// RVA: 0x13859CC Offset: 0x13819CC VA: 0x13859CC Slot: 5
	public string ToString(string format, IFormatProvider formatProvider) { }

	// RVA: 0x1385BD4 Offset: 0x1381BD4 VA: 0x1385BD4
	private static void .cctor() { }
}


// Namespace: UnityEngine
internal struct TypeDispatchData : IDisposable // TypeDefIndex: 5511
{
	// Fields
	public Object[] changed; // 0x0
	public NativeArray<int> changedID; // 0x8
	public NativeArray<int> destroyedID; // 0x18

	// Methods

	// RVA: 0x1385C48 Offset: 0x1381C48 VA: 0x1385C48 Slot: 4
	public void Dispose() { }
}


// Namespace: UnityEngine
internal struct TransformDispatchData : IDisposable // TypeDefIndex: 5512
{
	// Fields
	public NativeArray<int> transformedID; // 0x0
	public NativeArray<int> parentID; // 0x10
	public NativeArray<Matrix4x4> localToWorldMatrices; // 0x20
	public NativeArray<Vector3> positions; // 0x30
	public NativeArray<Quaternion> rotations; // 0x40
	public NativeArray<Vector3> scales; // 0x50

	// Methods

	// RVA: 0x1385CA0 Offset: 0x1381CA0 VA: 0x1385CA0 Slot: 4
	public void Dispose() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ObjectDispatcher.<>c // TypeDefIndex: 5513
{
	// Fields
	public static readonly ObjectDispatcher.<>c <>9; // 0x0

	// Methods

	// RVA: 0x1385E98 Offset: 0x1381E98 VA: 0x1385E98
	private static void .cctor() { }

	// RVA: 0x1385EF4 Offset: 0x1381EF4 VA: 0x1385EF4
	public void .ctor() { }

	// RVA: 0x1385EFC Offset: 0x1381EFC VA: 0x1385EFC
	internal void <.cctor>b__54_0(Object[] changed, IntPtr changedID, IntPtr destroyedID, int changedCount, int destroyedCount, Action<TypeDispatchData> callback) { }

	// RVA: 0x1385FC8 Offset: 0x1381FC8 VA: 0x1385FC8
	internal void <.cctor>b__54_1(IntPtr transformed, IntPtr parents, IntPtr localToWorldMatrices, IntPtr positions, IntPtr rotations, IntPtr scales, int count, Action<TransformDispatchData> callback) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
internal sealed class ObjectDispatcher // TypeDefIndex: 5514
{
	// Fields
	private IntPtr m_Ptr; // 0x10
	private static Action<Object[], IntPtr, IntPtr, int, int, Action<TypeDispatchData>> s_TypeDispatch; // 0x0
	private static Action<IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, IntPtr, int, Action<TransformDispatchData>> s_TransformDispatch; // 0x8

	// Methods

	// RVA: 0x1385D70 Offset: 0x1381D70 VA: 0x1385D70
	private static void .cctor() { }
}


// Namespace: UnityEngine
[MovedFrom("UnityEditor")]
internal class NumericFieldDraggerUtility // TypeDefIndex: 5515
{
	// Fields
	private static bool s_UseYSign; // 0x0

	// Methods

	// RVA: 0x13861C8 Offset: 0x13821C8 VA: 0x13861C8
	internal static float Acceleration(bool shiftPressed, bool altPressed) { }

	// RVA: 0x13861EC Offset: 0x13821EC VA: 0x13861EC
	internal static float NiceDelta(Vector2 deviceDelta, float acceleration) { }

	// RVA: 0x1386344 Offset: 0x1382344 VA: 0x1386344
	internal static double CalculateFloatDragSensitivity(double value) { }

	// RVA: 0x13863D4 Offset: 0x13823D4 VA: 0x13863D4
	internal static double CalculateFloatDragSensitivity(double value, double minValue, double maxValue) { }

	// RVA: 0x1386464 Offset: 0x1382464 VA: 0x1386464
	internal static long CalculateIntDragSensitivity(long value) { }

	// RVA: 0x138650C Offset: 0x138250C VA: 0x138650C
	internal static ulong CalculateIntDragSensitivity(ulong value) { }

	// RVA: 0x1386490 Offset: 0x1382490 VA: 0x1386490
	private static double CalculateIntDragSensitivity(double value) { }

	// RVA: 0x1386530 Offset: 0x1382530 VA: 0x1386530
	internal static long CalculateIntDragSensitivity(long value, long minValue, long maxValue) { }
}


// Namespace: UnityEngine
internal interface IPlayerEditorConnectionNative // TypeDefIndex: 5516
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void DisconnectAll();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SendMessage(Guid messageId, byte[] data, int playerId);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool TrySendMessage(Guid messageId, byte[] data, int playerId);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Poll();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void RegisterInternal(Guid messageId);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void UnregisterInternal(Guid messageId);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool IsConnected();
}


// Namespace: UnityEngine
internal class PlayerConnectionInternal : IPlayerEditorConnectionNative // TypeDefIndex: 5517
{
	// Methods

	// RVA: 0x13865D0 Offset: 0x13825D0 VA: 0x13865D0 Slot: 6
	private void UnityEngine.IPlayerEditorConnectionNative.SendMessage(Guid messageId, byte[] data, int playerId) { }

	// RVA: 0x138674C Offset: 0x138274C VA: 0x138674C Slot: 7
	private bool UnityEngine.IPlayerEditorConnectionNative.TrySendMessage(Guid messageId, byte[] data, int playerId) { }

	// RVA: 0x13868CC Offset: 0x13828CC VA: 0x13868CC Slot: 8
	private void UnityEngine.IPlayerEditorConnectionNative.Poll() { }

	// RVA: 0x138691C Offset: 0x138291C VA: 0x138691C Slot: 9
	private void UnityEngine.IPlayerEditorConnectionNative.RegisterInternal(Guid messageId) { }

	// RVA: 0x13869DC Offset: 0x13829DC VA: 0x13869DC Slot: 10
	private void UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal(Guid messageId) { }

	// RVA: 0x1386A9C Offset: 0x1382A9C VA: 0x1386A9C Slot: 4
	private void UnityEngine.IPlayerEditorConnectionNative.Initialize() { }

	// RVA: 0x1386AEC Offset: 0x1382AEC VA: 0x1386AEC Slot: 11
	private bool UnityEngine.IPlayerEditorConnectionNative.IsConnected() { }

	// RVA: 0x1386B3C Offset: 0x1382B3C VA: 0x1386B3C Slot: 5
	private void UnityEngine.IPlayerEditorConnectionNative.DisconnectAll() { }

	// RVA: 0x1386B14 Offset: 0x1382B14 VA: 0x1386B14
	private static bool IsConnected() { }

	// RVA: 0x1386AC4 Offset: 0x1382AC4 VA: 0x1386AC4
	private static void Initialize() { }

	// RVA: 0x13869A0 Offset: 0x13829A0 VA: 0x13869A0
	private static void RegisterInternal(string messageId) { }

	// RVA: 0x1386A60 Offset: 0x1382A60 VA: 0x1386A60
	private static void UnregisterInternal(string messageId) { }

	// RVA: 0x13866F8 Offset: 0x13826F8 VA: 0x13866F8
	private static void SendMessage(string messageId, byte[] data, int playerId) { }

	// RVA: 0x1386878 Offset: 0x1382878 VA: 0x1386878
	private static bool TrySendMessage(string messageId, byte[] data, int playerId) { }

	// RVA: 0x13868F4 Offset: 0x13828F4 VA: 0x13868F4
	private static void PollInternal() { }

	// RVA: 0x1386B64 Offset: 0x1382B64 VA: 0x1386B64
	private static void DisconnectAll() { }

	// RVA: 0x1386B8C Offset: 0x1382B8C VA: 0x1386B8C
	public void .ctor() { }
}


// Namespace: UnityEngine
public class PlayerPrefsException : Exception // TypeDefIndex: 5518
{
	// Methods

	// RVA: 0x1386B94 Offset: 0x1382B94 VA: 0x1386B94
	public void .ctor(string error) { }
}


// Namespace: UnityEngine
public class PlayerPrefs // TypeDefIndex: 5519
{
	// Methods

	// RVA: 0x1386BFC Offset: 0x1382BFC VA: 0x1386BFC
	private static bool TrySetInt(string key, int value) { }

	// RVA: 0x1386C40 Offset: 0x1382C40 VA: 0x1386C40
	private static bool TrySetSetString(string key, string value) { }

	// RVA: 0x1386C84 Offset: 0x1382C84 VA: 0x1386C84
	public static void SetInt(string key, int value) { }

	// RVA: 0x1386D14 Offset: 0x1382D14 VA: 0x1386D14
	public static int GetInt(string key, int defaultValue) { }

	// RVA: 0x1386D58 Offset: 0x1382D58 VA: 0x1386D58
	public static int GetInt(string key) { }

	// RVA: 0x1386D98 Offset: 0x1382D98 VA: 0x1386D98
	public static void SetString(string key, string value) { }

	// RVA: 0x1386E28 Offset: 0x1382E28 VA: 0x1386E28
	public static string GetString(string key, string defaultValue) { }

	// RVA: 0x1386E6C Offset: 0x1382E6C VA: 0x1386E6C
	public static string GetString(string key) { }

	// RVA: 0x1386ED8 Offset: 0x1382ED8 VA: 0x1386ED8
	public static bool HasKey(string key) { }

	// RVA: 0x1386F14 Offset: 0x1382F14 VA: 0x1386F14
	public static void DeleteKey(string key) { }

	// RVA: 0x1386F50 Offset: 0x1382F50 VA: 0x1386F50
	public static void DeleteAll() { }

	// RVA: 0x1386F78 Offset: 0x1382F78 VA: 0x1386F78
	public static void Save() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
[Usage(256, Inherited = True, AllowMultiple = False)]
public abstract class PropertyAttribute : Attribute // TypeDefIndex: 5520
{
	// Methods

	// RVA: 0x1386FA0 Offset: 0x1382FA0 VA: 0x1386FA0
	protected void .ctor() { }
}


// Namespace: UnityEngine
[Usage(256, Inherited = True, AllowMultiple = False)]
[UsedByNativeCode]
public class InspectorNameAttribute : PropertyAttribute // TypeDefIndex: 5521
{
	// Fields
	public readonly string displayName; // 0x10
}


// Namespace: UnityEngine
[Usage(32767, Inherited = True, AllowMultiple = False)]
public class TooltipAttribute : PropertyAttribute // TypeDefIndex: 5522
{
	// Fields
	public readonly string tooltip; // 0x10

	// Methods

	// RVA: 0x1386FA8 Offset: 0x1382FA8 VA: 0x1386FA8
	public void .ctor(string tooltip) { }
}


// Namespace: UnityEngine
[Usage(256, Inherited = True, AllowMultiple = False)]
public sealed class MinAttribute : PropertyAttribute // TypeDefIndex: 5523
{
	// Fields
	public readonly float min; // 0x10

	// Methods

	// RVA: 0x1386FD0 Offset: 0x1382FD0 VA: 0x1386FD0
	public void .ctor(float min) { }
}


// Namespace: UnityEngine
internal class PropertyNameUtils // TypeDefIndex: 5524
{
	// Methods

	// RVA: 0x1386FF8 Offset: 0x1382FF8 VA: 0x1386FF8
	public static PropertyName PropertyNameFromString(string name) { }

	// RVA: 0x1387044 Offset: 0x1383044 VA: 0x1387044
	private static void PropertyNameFromString_Injected(string name, out PropertyName ret) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct PropertyName : IEquatable<PropertyName> // TypeDefIndex: 5525
{
	// Fields
	internal int id; // 0x0

	// Methods

	// RVA: 0x1387088 Offset: 0x1383088 VA: 0x1387088
	public void .ctor(string name) { }

	// RVA: 0x13870E4 Offset: 0x13830E4 VA: 0x13870E4
	public void .ctor(PropertyName other) { }

	// RVA: 0x13870EC Offset: 0x13830EC VA: 0x13870EC
	public static bool IsNullOrEmpty(PropertyName prop) { }

	// RVA: 0x13870F8 Offset: 0x13830F8 VA: 0x13870F8
	public static bool op_Equality(PropertyName lhs, PropertyName rhs) { }

	// RVA: 0x1387104 Offset: 0x1383104 VA: 0x1387104 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x138710C Offset: 0x138310C VA: 0x138710C Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1387184 Offset: 0x1383184 VA: 0x1387184 Slot: 4
	public bool Equals(PropertyName other) { }

	// RVA: 0x1387194 Offset: 0x1383194 VA: 0x1387194
	public static PropertyName op_Implicit(string name) { }

	// RVA: 0x13871E0 Offset: 0x13831E0 VA: 0x13871E0 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine
public static class Random // TypeDefIndex: 5526
{
	// Properties
	public static float value { get; }

	// Methods

	// RVA: 0x1387264 Offset: 0x1383264 VA: 0x1387264
	public static float Range(float minInclusive, float maxInclusive) { }

	// RVA: 0x13872A4 Offset: 0x13832A4 VA: 0x13872A4
	public static int Range(int minInclusive, int maxExclusive) { }

	// RVA: 0x13872E8 Offset: 0x13832E8 VA: 0x13872E8
	private static int RandomRangeInt(int minInclusive, int maxExclusive) { }

	// RVA: 0x138732C Offset: 0x138332C VA: 0x138732C
	public static float get_value() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class ResourceRequest : AsyncOperation // TypeDefIndex: 5527
{
	// Fields
	internal string m_Path; // 0x20
	internal Type m_Type; // 0x28
}


// Namespace: UnityEngine
internal static class ResourcesAPIInternal // TypeDefIndex: 5528
{
	// Methods

	// RVA: 0x1387354 Offset: 0x1383354 VA: 0x1387354
	public static Shader FindShaderByName(string name) { }

	// RVA: 0x1387390 Offset: 0x1383390 VA: 0x1387390
	public static Object Load(string path, Type systemTypeInstance) { }
}


// Namespace: UnityEngine
public class ResourcesAPI // TypeDefIndex: 5529
{
	// Fields
	private static ResourcesAPI s_DefaultAPI; // 0x0
	[CompilerGenerated]
	private static ResourcesAPI <overrideAPI>k__BackingField; // 0x8

	// Properties
	internal static ResourcesAPI ActiveAPI { get; }
	public static ResourcesAPI overrideAPI { get; }

	// Methods

	// RVA: 0x13873D4 Offset: 0x13833D4 VA: 0x13873D4
	internal static ResourcesAPI get_ActiveAPI() { }

	[CompilerGenerated]
	// RVA: 0x138747C Offset: 0x138347C VA: 0x138747C
	public static ResourcesAPI get_overrideAPI() { }

	// RVA: 0x13874D4 Offset: 0x13834D4 VA: 0x13874D4
	protected internal void .ctor() { }

	// RVA: 0x13874DC Offset: 0x13834DC VA: 0x13874DC Slot: 4
	protected internal virtual Shader FindShaderByName(string name) { }

	// RVA: 0x1387518 Offset: 0x1383518 VA: 0x1387518 Slot: 5
	protected internal virtual Object Load(string path, Type systemTypeInstance) { }

	// RVA: 0x138755C Offset: 0x138355C VA: 0x138755C
	private static void .cctor() { }
}


// Namespace: UnityEngine
public sealed class Resources // TypeDefIndex: 5530
{
	// Methods

	// RVA: -1 Offset: -1
	internal static T[] ConvertObjects<T>(Object[] rawObjects) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6EB4 Offset: 0xBA2EB4 VA: 0xBA6EB4
	|-Resources.ConvertObjects<object>
	*/

	// RVA: 0x13875B8 Offset: 0x13835B8 VA: 0x13875B8
	public static Object Load(string path) { }

	// RVA: -1 Offset: -1
	public static T Load<T>(string path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA707C Offset: 0xBA307C VA: 0xBA707C
	|-Resources.Load<object>
	*/

	// RVA: 0x138763C Offset: 0x138363C VA: 0x138763C
	public static Object Load(string path, Type systemTypeInstance) { }

	// RVA: 0x13876B4 Offset: 0x13836B4 VA: 0x13876B4
	public static Object GetBuiltinResource(Type type, string path) { }

	// RVA: -1 Offset: -1
	public static T GetBuiltinResource<T>(string path) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6FC0 Offset: 0xBA2FC0 VA: 0xBA6FC0
	|-Resources.GetBuiltinResource<object>
	*/
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class AsyncInstantiateOperation : AsyncOperation // TypeDefIndex: 5531
{
	// Fields
	internal Object[] m_Result; // 0x20
}


// Namespace: UnityEngine
[RequiredByNativeCode]
internal class AsyncInstantiateOperationHelper // TypeDefIndex: 5532
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13876F8 Offset: 0x13836F8 VA: 0x13876F8
	public static void SetAsyncInstantiateOperationResult(AsyncInstantiateOperation op, Object[] result) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class AsyncOperation : YieldInstruction // TypeDefIndex: 5533
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private Action<AsyncOperation> m_completeCallback; // 0x18

	// Properties
	public bool isDone { get; }

	// Methods

	// RVA: 0x1387710 Offset: 0x1383710 VA: 0x1387710
	private static void InternalDestroy(IntPtr ptr) { }

	// RVA: 0x138774C Offset: 0x138374C VA: 0x138774C
	public bool get_isDone() { }

	// RVA: 0x1387788 Offset: 0x1383788 VA: 0x1387788 Slot: 1
	protected override void Finalize() { }

	[RequiredByNativeCode]
	// RVA: 0x1387844 Offset: 0x1383844 VA: 0x1387844
	internal void InvokeCompletionEvent() { }

	// RVA: 0x1387874 Offset: 0x1383874 VA: 0x1387874
	public void add_completed(Action<AsyncOperation> value) { }

	// RVA: 0x1387970 Offset: 0x1383970 VA: 0x1387970
	public void remove_completed(Action<AsyncOperation> value) { }

	// RVA: 0x1387A18 Offset: 0x1383A18 VA: 0x1387A18
	public void .ctor() { }
}


// Namespace: UnityEngine
internal class AttributeHelperEngine // TypeDefIndex: 5534
{
	// Fields
	public static DisallowMultipleComponent[] _disallowMultipleComponentArray; // 0x0
	public static ExecuteInEditMode[] _executeInEditModeArray; // 0x8
	public static RequireComponent[] _requireComponentArray; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1387A28 Offset: 0x1383A28 VA: 0x1387A28
	private static Type GetParentTypeDisallowingMultipleInclusion(Type type) { }

	[RequiredByNativeCode]
	// RVA: 0x1387B5C Offset: 0x1383B5C VA: 0x1387B5C
	private static Type[] GetRequiredComponents(Type klass) { }

	// RVA: 0x1387F64 Offset: 0x1383F64 VA: 0x1387F64
	private static int GetExecuteMode(Type klass) { }

	[RequiredByNativeCode]
	// RVA: 0x1388078 Offset: 0x1384078 VA: 0x1388078
	private static int CheckIsEditorScript(Type klass) { }

	[RequiredByNativeCode]
	// RVA: 0x1388188 Offset: 0x1384188 VA: 0x1388188
	private static int GetDefaultExecutionOrderFor(Type klass) { }

	// RVA: -1 Offset: -1
	private static T GetCustomAttributeOfType<T>(Type klass) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB78D84 Offset: 0xB74D84 VA: 0xB78D84
	|-AttributeHelperEngine.GetCustomAttributeOfType<object>
	*/

	// RVA: 0x1388208 Offset: 0x1384208 VA: 0x1388208
	private static void .cctor() { }
}


// Namespace: UnityEngine
[Usage(4, Inherited = False)]
[RequiredByNativeCode]
public sealed class DisallowMultipleComponent : Attribute // TypeDefIndex: 5535
{
	// Methods

	// RVA: 0x13882D0 Offset: 0x13842D0 VA: 0x13882D0
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Usage(4, AllowMultiple = True)]
public sealed class RequireComponent : Attribute // TypeDefIndex: 5536
{
	// Fields
	public Type m_Type0; // 0x10
	public Type m_Type1; // 0x18
	public Type m_Type2; // 0x20

	// Methods

	// RVA: 0x13882D8 Offset: 0x13842D8 VA: 0x13882D8
	public void .ctor(Type requiredComponent) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Usage(64, AllowMultiple = True)]
public sealed class ContextMenu : Attribute // TypeDefIndex: 5537
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class ExecuteInEditMode : Attribute // TypeDefIndex: 5538
{
	// Methods

	// RVA: 0x1388300 Offset: 0x1384300 VA: 0x1388300
	public void .ctor() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class ExecuteAlways : Attribute // TypeDefIndex: 5539
{
	// Methods

	// RVA: 0x1388308 Offset: 0x1384308 VA: 0x1388308
	public void .ctor() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
[Usage(4)]
public class DefaultExecutionOrder : Attribute // TypeDefIndex: 5540
{
	// Fields
	private int m_Order; // 0x10

	// Properties
	public int order { get; }

	// Methods

	// RVA: 0x1388310 Offset: 0x1384310 VA: 0x1388310
	public void .ctor(int order) { }

	// RVA: 0x1388200 Offset: 0x1384200 VA: 0x1388200
	public int get_order() { }
}


// Namespace: UnityEngine
[Usage(1)]
[RequiredByNativeCode]
public class AssemblyIsEditorAssembly : Attribute // TypeDefIndex: 5541
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public class Behaviour : Component // TypeDefIndex: 5542
{
	// Properties
	[RequiredByNativeCode]
	public bool enabled { get; set; }
	public bool isActiveAndEnabled { get; }

	// Methods

	// RVA: 0x1388338 Offset: 0x1384338 VA: 0x1388338
	public bool get_enabled() { }

	// RVA: 0x1388374 Offset: 0x1384374 VA: 0x1388374
	public void set_enabled(bool value) { }

	// RVA: 0x13883B8 Offset: 0x13843B8 VA: 0x13883B8
	public bool get_isActiveAndEnabled() { }

	// RVA: 0x13883F4 Offset: 0x13843F4 VA: 0x13883F4
	public void .ctor() { }
}


// Namespace: UnityEngine
internal struct CastHelper<T> // TypeDefIndex: 5543
{
	// Fields
	public T t; // 0x0
	public IntPtr onePointerFurtherThanT; // 0x0
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ClassLibraryInitializer.<>c // TypeDefIndex: 5544
{
	// Fields
	public static readonly ClassLibraryInitializer.<>c <>9; // 0x0
	public static ResolveEventHandler <>9__2_0; // 0x8

	// Methods

	// RVA: 0x1388674 Offset: 0x1384674 VA: 0x1388674
	private static void .cctor() { }

	// RVA: 0x13886D0 Offset: 0x13846D0 VA: 0x13886D0
	public void .ctor() { }

	// RVA: 0x13886D8 Offset: 0x13846D8 VA: 0x13886D8
	internal Assembly <InitAssemblyRedirections>b__2_0(object _, ResolveEventArgs args) { }
}


// Namespace: UnityEngine
internal static class ClassLibraryInitializer // TypeDefIndex: 5545
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1388450 Offset: 0x1384450 VA: 0x1388450
	private static void Init() { }

	[RequiredByNativeCode]
	// RVA: 0x1388458 Offset: 0x1384458 VA: 0x1388458
	private static void InitStdErrWithHandle(IntPtr fileHandle) { }

	[RequiredByNativeCode]
	// RVA: 0x1388580 Offset: 0x1384580 VA: 0x1388580
	private static void InitAssemblyRedirections() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(GenerateProxy = True)]
internal struct AssemblyVersion // TypeDefIndex: 5546
{
	// Fields
	public ushort major; // 0x0
	public ushort minor; // 0x2
	public ushort build; // 0x4
	public ushort revision; // 0x6

	// Methods

	// RVA: 0x13887E0 Offset: 0x13847E0 VA: 0x13887E0
	public static bool op_Equality(AssemblyVersion lhs, AssemblyVersion rhs) { }

	// RVA: 0x1388810 Offset: 0x1384810 VA: 0x1388810 Slot: 3
	public override string ToString() { }

	// RVA: 0x13889BC Offset: 0x13849BC VA: 0x13889BC Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1388A64 Offset: 0x1384A64 VA: 0x1388A64 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(GenerateProxy = True)]
internal struct AssemblyFullName // TypeDefIndex: 5547
{
	// Fields
	public string Name; // 0x0
	public AssemblyVersion Version; // 0x8
	public string PublicKeyToken; // 0x10
	public string Culture; // 0x18

	// Methods

	// RVA: 0x1388B10 Offset: 0x1384B10 VA: 0x1388B10 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x1388BE8 Offset: 0x1384BE8 VA: 0x1388BE8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1388C80 Offset: 0x1384C80 VA: 0x1388C80 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class Component : Object // TypeDefIndex: 5548
{
	// Properties
	public Transform transform { get; }
	public GameObject gameObject { get; }

	// Methods

	// RVA: 0x1388E20 Offset: 0x1384E20 VA: 0x1388E20
	public Transform get_transform() { }

	// RVA: 0x1388E5C Offset: 0x1384E5C VA: 0x1388E5C
	public GameObject get_gameObject() { }

	// RVA: 0x1388E98 Offset: 0x1384E98 VA: 0x1388E98
	public Component GetComponent(Type type) { }

	// RVA: 0x1388F54 Offset: 0x1384F54 VA: 0x1388F54
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue) { }

	// RVA: -1 Offset: -1
	public T GetComponent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B4B4 Offset: 0xB774B4 VA: 0xB7B4B4
	|-Component.GetComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1388FA8 Offset: 0x1384FA8 VA: 0x1388FA8
	public bool TryGetComponent(Type type, out Component component) { }

	// RVA: -1 Offset: -1
	public bool TryGetComponent<T>(out T component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BC20 Offset: 0xB77C20 VA: 0xB7BC20
	|-Component.TryGetComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13890A4 Offset: 0x13850A4 VA: 0x13890A4
	public Component GetComponentInChildren(Type t, bool includeInactive) { }

	// RVA: -1 Offset: -1
	public T GetComponentInChildren<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B684 Offset: 0xB77684 VA: 0xB7B684
	|-Component.GetComponentInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInChildren<T>(bool includeInactive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BA40 Offset: 0xB77A40 VA: 0xB7BA40
	|-Component.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BAD4 Offset: 0xB77AD4 VA: 0xB7BAD4
	|-Component.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInChildren<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BA04 Offset: 0xB77A04 VA: 0xB7BA04
	|-Component.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void GetComponentsInChildren<T>(List<T> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BA90 Offset: 0xB77A90 VA: 0xB7BA90
	|-Component.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1389180 Offset: 0x1385180 VA: 0x1389180
	public Component GetComponentInParent(Type t, bool includeInactive) { }

	// RVA: -1 Offset: -1
	public T GetComponentInParent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B7E0 Offset: 0xB777E0 VA: 0xB7B7E0
	|-Component.GetComponentInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInParent<T>(bool includeInactive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BB70 Offset: 0xB77B70 VA: 0xB7BB70
	|-Component.GetComponentsInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BBC0 Offset: 0xB77BC0 VA: 0xB7BBC0
	|-Component.GetComponentsInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInParent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7BB34 Offset: 0xB77B34 VA: 0xB7BB34
	|-Component.GetComponentsInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x138925C Offset: 0x138525C VA: 0x138925C
	private void GetComponentsForListInternal(Type searchType, object resultList) { }

	// RVA: 0x13892B0 Offset: 0x13852B0 VA: 0x13892B0
	public void GetComponents(Type type, List<Component> results) { }

	// RVA: -1 Offset: -1
	public void GetComponents<T>(List<T> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B984 Offset: 0xB77984 VA: 0xB7B984
	|-Component.GetComponents<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponents<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7B93C Offset: 0xB7793C VA: 0xB7B93C
	|-Component.GetComponents<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1389304 Offset: 0x1385304 VA: 0x1389304
	public void SendMessage(string methodName, object value, SendMessageOptions options) { }

	// RVA: 0x13883F8 Offset: 0x13843F8 VA: 0x13883F8
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public sealed class Coroutine : YieldInstruction // TypeDefIndex: 5549
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x1389368 Offset: 0x1385368 VA: 0x1389368
	private void .ctor() { }

	// RVA: 0x1389370 Offset: 0x1385370 VA: 0x1389370 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x138942C Offset: 0x138542C VA: 0x138942C
	private static void ReleaseCoroutine(IntPtr ptr) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
internal class SetupCoroutine // TypeDefIndex: 5550
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1389468 Offset: 0x1385468 VA: 0x1389468
	public static void InvokeMoveNext(IEnumerator enumerator, IntPtr returnValueAddress) { }

	[RequiredByNativeCode]
	// RVA: 0x1389594 Offset: 0x1385594 VA: 0x1389594
	public static object InvokeMember(object behaviour, string name, object variable) { }
}


// Namespace: UnityEngine
public abstract class CustomYieldInstruction : IEnumerator // TypeDefIndex: 5551
{
	// Properties
	public abstract bool keepWaiting { get; }
	public object Current { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool get_keepWaiting();

	// RVA: 0x1389688 Offset: 0x1385688 VA: 0x1389688 Slot: 5
	public object get_Current() { }

	// RVA: 0x1389690 Offset: 0x1385690 VA: 0x1389690 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x138969C Offset: 0x138569C VA: 0x138969C Slot: 8
	public virtual void Reset() { }

	// RVA: 0x13896A0 Offset: 0x13856A0 VA: 0x13896A0
	protected void .ctor() { }
}


// Namespace: UnityEngine
internal struct EnumData // TypeDefIndex: 5552
{
	// Fields
	public Enum[] values; // 0x0
	public int[] flagValues; // 0x8
	public string[] displayNames; // 0x10
	public string[] names; // 0x18
	public string[] tooltip; // 0x20
	public bool flags; // 0x28
	public Type underlyingType; // 0x30
	public bool unsigned; // 0x38
	public bool serializable; // 0x39
}


// Namespace: 
public enum EnumDataUtility.CachedType // TypeDefIndex: 5553
{
	// Fields
	public int value__; // 0x0
	public const EnumDataUtility.CachedType ExcludeObsolete = 0;
	public const EnumDataUtility.CachedType IncludeObsoleteExceptErrors = 1;
	public const EnumDataUtility.CachedType IncludeAllObsolete = 2;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class EnumDataUtility.<>c // TypeDefIndex: 5554
{
	// Fields
	public static readonly EnumDataUtility.<>c <>9; // 0x0
	public static Func<FieldInfo, int> <>9__2_5; // 0x8
	public static Func<FieldInfo, string> <>9__2_1; // 0x10
	public static Func<FieldInfo, Enum> <>9__2_2; // 0x18
	public static Func<Enum, int> <>9__2_3; // 0x20
	public static Func<Enum, int> <>9__2_4; // 0x28

	// Methods

	// RVA: 0x138AEDC Offset: 0x1386EDC VA: 0x138AEDC
	private static void .cctor() { }

	// RVA: 0x138AF38 Offset: 0x1386F38 VA: 0x138AF38
	public void .ctor() { }

	// RVA: 0x138AF40 Offset: 0x1386F40 VA: 0x138AF40
	internal int <GetCachedEnumData>b__2_5(FieldInfo f) { }

	// RVA: 0x138AF68 Offset: 0x1386F68 VA: 0x138AF68
	internal string <GetCachedEnumData>b__2_1(FieldInfo f) { }

	// RVA: 0x138AFBC Offset: 0x1386FBC VA: 0x138AFBC
	internal Enum <GetCachedEnumData>b__2_2(FieldInfo f) { }

	// RVA: 0x138B050 Offset: 0x1387050 VA: 0x138B050
	internal int <GetCachedEnumData>b__2_3(Enum v) { }

	// RVA: 0x138B0AC Offset: 0x13870AC VA: 0x138B0AC
	internal int <GetCachedEnumData>b__2_4(Enum v) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class EnumDataUtility.<>c__DisplayClass2_0 // TypeDefIndex: 5555
{
	// Fields
	public Func<string, string> nicifyName; // 0x10

	// Methods

	// RVA: 0x138A530 Offset: 0x1386530 VA: 0x138A530
	public void .ctor() { }

	// RVA: 0x138B108 Offset: 0x1387108 VA: 0x138B108
	internal string <GetCachedEnumData>b__0(FieldInfo f) { }
}


// Namespace: 
[CompilerGenerated]
private struct EnumDataUtility.<>c__DisplayClass8_0 // TypeDefIndex: 5556
{
	// Fields
	public Func<string, string> nicifyName; // 0x0
	public FieldInfo field; // 0x8
}


// Namespace: UnityEngine
internal static class EnumDataUtility // TypeDefIndex: 5557
{
	// Fields
	private static readonly Dictionary<ValueTuple<EnumDataUtility.CachedType, Type>, EnumData> s_EnumData; // 0x0

	// Methods

	// RVA: 0x13896A8 Offset: 0x13856A8 VA: 0x13896A8
	public static EnumData GetCachedEnumData(Type enumType, EnumDataUtility.CachedType cachedType = 1, Func<string, string> nicifyName) { }

	// RVA: 0x138A668 Offset: 0x1386668 VA: 0x138A668
	internal static void HandleInspectorOrderAttribute(Type enumType, ref EnumData enumData) { }

	// RVA: 0x138A538 Offset: 0x1386538 VA: 0x138A538
	private static bool CheckObsoleteAddition(FieldInfo field, EnumDataUtility.CachedType cachedType) { }

	// RVA: 0x138AAD4 Offset: 0x1386AD4 VA: 0x138AAD4
	private static string EnumTooltipFromEnumField(FieldInfo field) { }

	// RVA: 0x138AC14 Offset: 0x1386C14 VA: 0x138AC14
	private static string EnumNameFromEnumField(FieldInfo field, Func<string, string> nicifyName) { }

	// RVA: 0x138AE50 Offset: 0x1386E50 VA: 0x138AE50
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x138ADE8 Offset: 0x1386DE8 VA: 0x138ADE8
	internal static string <EnumNameFromEnumField>g__NicifyName|8_0(ref EnumDataUtility.<>c__DisplayClass8_0 ) { }
}


// Namespace: UnityEngine
[Usage(1028, Inherited = True)]
[RequiredByNativeCode]
internal sealed class ExtensionOfNativeClassAttribute : Attribute // TypeDefIndex: 5558
{
	// Methods

	// RVA: 0x138B170 Offset: 0x1387170 VA: 0x138B170
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
internal class FailedToLoadScriptObject : Object // TypeDefIndex: 5559
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class GameObject : Object // TypeDefIndex: 5560
{
	// Properties
	public Transform transform { get; }
	public int layer { get; set; }
	[Obsolete("GameObject.active is obsolete. Use GameObject.SetActive(), GameObject.activeSelf or GameObject.activeInHierarchy.")]
	public bool active { get; }
	public bool activeSelf { get; }
	public bool activeInHierarchy { get; }
	public string tag { get; }
	public GameObject gameObject { get; }

	// Methods

	// RVA: -1 Offset: -1
	public T GetComponent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B398 Offset: 0xB87398 VA: 0xB8B398
	|-GameObject.GetComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1388F10 Offset: 0x1384F10 VA: 0x1388F10
	public Component GetComponent(Type type) { }

	// RVA: 0x138B178 Offset: 0x1387178 VA: 0x138B178
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue) { }

	// RVA: 0x138912C Offset: 0x138512C VA: 0x138912C
	public Component GetComponentInChildren(Type type, bool includeInactive) { }

	// RVA: -1 Offset: -1
	public T GetComponentInChildren<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B568 Offset: 0xB87568 VA: 0xB8B568
	|-GameObject.GetComponentInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T GetComponentInChildren<T>(bool includeInactive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B65C Offset: 0xB8765C VA: 0xB8B65C
	|-GameObject.GetComponentInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1389208 Offset: 0x1385208 VA: 0x1389208
	public Component GetComponentInParent(Type type, bool includeInactive) { }

	// RVA: -1 Offset: -1
	public T GetComponentInParent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B7C4 Offset: 0xB877C4 VA: 0xB8B7C4
	|-GameObject.GetComponentInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T GetComponentInParent<T>(bool includeInactive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B8B8 Offset: 0xB878B8 VA: 0xB8B8B8
	|-GameObject.GetComponentInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x138B1CC Offset: 0x13871CC VA: 0x138B1CC
	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList) { }

	// RVA: -1 Offset: -1
	public T[] GetComponents<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BA20 Offset: 0xB87A20 VA: 0xB8BA20
	|-GameObject.GetComponents<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void GetComponents<T>(List<T> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BAF4 Offset: 0xB87AF4 VA: 0xB8BAF4
	|-GameObject.GetComponents<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInChildren<T>(bool includeInactive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BBC0 Offset: 0xB87BC0 VA: 0xB8BBC0
	|-GameObject.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void GetComponentsInChildren<T>(bool includeInactive, List<T> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BCA0 Offset: 0xB87CA0 VA: 0xB8BCA0
	|-GameObject.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInChildren<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BB84 Offset: 0xB87B84 VA: 0xB8BB84
	|-GameObject.GetComponentsInChildren<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void GetComponentsInParent<T>(bool includeInactive, List<T> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BE1C Offset: 0xB87E1C VA: 0xB8BE1C
	|-GameObject.GetComponentsInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public T[] GetComponentsInParent<T>(bool includeInactive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BD3C Offset: 0xB87D3C VA: 0xB8BD3C
	|-GameObject.GetComponentsInParent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public bool TryGetComponent<T>(out T component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8BEB8 Offset: 0xB87EB8 VA: 0xB8BEB8
	|-GameObject.TryGetComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1389008 Offset: 0x1385008 VA: 0x1389008
	public bool TryGetComponent(Type type, out Component component) { }

	// RVA: 0x138B250 Offset: 0x1387250 VA: 0x138B250
	internal Component TryGetComponentInternal(Type type) { }

	// RVA: 0x138B304 Offset: 0x1387304 VA: 0x138B304
	internal void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue) { }

	// RVA: 0x138B358 Offset: 0x1387358 VA: 0x138B358
	private Component Internal_AddComponentWithType(Type componentType) { }

	// RVA: 0x138B39C Offset: 0x138739C VA: 0x138B39C
	public Component AddComponent(Type componentType) { }

	// RVA: -1 Offset: -1
	public T AddComponent<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8B2B0 Offset: 0xB872B0 VA: 0xB8B2B0
	|-GameObject.AddComponent<object>
	*/

	// RVA: 0x138B3E0 Offset: 0x13873E0 VA: 0x138B3E0
	public Transform get_transform() { }

	// RVA: 0x138B41C Offset: 0x138741C VA: 0x138B41C
	public int get_layer() { }

	// RVA: 0x138B458 Offset: 0x1387458 VA: 0x138B458
	public void set_layer(int value) { }

	// RVA: 0x138B49C Offset: 0x138749C VA: 0x138B49C
	public bool get_active() { }

	// RVA: 0x138B4D8 Offset: 0x13874D8 VA: 0x138B4D8
	public void SetActive(bool value) { }

	// RVA: 0x138B51C Offset: 0x138751C VA: 0x138B51C
	public bool get_activeSelf() { }

	// RVA: 0x138B558 Offset: 0x1387558 VA: 0x138B558
	public bool get_activeInHierarchy() { }

	// RVA: 0x138B594 Offset: 0x1387594 VA: 0x138B594
	public string get_tag() { }

	// RVA: 0x138B5D0 Offset: 0x13875D0 VA: 0x138B5D0
	public static GameObject[] FindGameObjectsWithTag(string tag) { }

	// RVA: 0x138B60C Offset: 0x138760C VA: 0x138B60C
	public void SendMessage(string methodName, object value, SendMessageOptions options) { }

	// RVA: 0x138B668 Offset: 0x1387668 VA: 0x138B668
	public void .ctor(string name) { }

	// RVA: 0x138B73C Offset: 0x138773C VA: 0x138B73C
	public void .ctor() { }

	// RVA: 0x138B7C0 Offset: 0x13877C0 VA: 0x138B7C0
	public void .ctor(string name, Type[] components) { }

	// RVA: 0x138B6F8 Offset: 0x13876F8 VA: 0x138B6F8
	private static void Internal_CreateGameObject(GameObject self, string name) { }

	// RVA: 0x138B8D0 Offset: 0x13878D0 VA: 0x138B8D0
	public static GameObject Find(string name) { }

	// RVA: 0x138B90C Offset: 0x138790C VA: 0x138B90C
	public GameObject get_gameObject() { }
}


// Namespace: UnityEngine
[Usage(16)]
public sealed class InspectorOrderAttribute : PropertyAttribute // TypeDefIndex: 5561
{
	// Fields
	[CompilerGenerated]
	private InspectorSort <m_inspectorSort>k__BackingField; // 0x10
	[CompilerGenerated]
	private InspectorSortDirection <m_sortDirection>k__BackingField; // 0x14

	// Properties
	internal InspectorSort m_inspectorSort { get; }
	internal InspectorSortDirection m_sortDirection { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x138B910 Offset: 0x1387910 VA: 0x138B910
	internal InspectorSort get_m_inspectorSort() { }

	[CompilerGenerated]
	// RVA: 0x138B918 Offset: 0x1387918 VA: 0x138B918
	internal InspectorSortDirection get_m_sortDirection() { }
}


// Namespace: UnityEngine
public enum InspectorSort // TypeDefIndex: 5562
{
	// Fields
	public int value__; // 0x0
	public const InspectorSort ByName = 0;
	public const InspectorSort ByValue = 1;
}


// Namespace: UnityEngine
public enum InspectorSortDirection // TypeDefIndex: 5563
{
	// Fields
	public int value__; // 0x0
	public const InspectorSortDirection Ascending = 0;
	public const InspectorSortDirection Descending = 1;
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct LayerMask // TypeDefIndex: 5564
{
	// Fields
	private int m_Mask; // 0x0

	// Methods

	// RVA: 0x138B920 Offset: 0x1387920 VA: 0x138B920
	public static int op_Implicit(LayerMask mask) { }

	// RVA: 0x138B924 Offset: 0x1387924 VA: 0x138B924
	public static LayerMask op_Implicit(int intVal) { }

	// RVA: 0x138B92C Offset: 0x138792C VA: 0x138B92C
	public static int NameToLayer(string layerName) { }
}


// Namespace: UnityEngine
[Serializable]
public struct LazyLoadReference<T> // TypeDefIndex: 5565
{
	// Fields
	[SerializeField]
	private int m_InstanceID; // 0x0
}


// Namespace: UnityEngine
internal static class ManagedStreamHelpers // TypeDefIndex: 5566
{
	// Methods

	// RVA: 0x138B968 Offset: 0x1387968 VA: 0x138B968
	internal static void ValidateLoadFromStream(Stream stream) { }

	[RequiredByNativeCode]
	// RVA: 0x138BA6C Offset: 0x1387A6C VA: 0x138BA6C
	internal static void ManagedStreamRead(byte[] buffer, int offset, int count, Stream stream, IntPtr returnValueAddress) { }

	[RequiredByNativeCode]
	// RVA: 0x138BB50 Offset: 0x1387B50 VA: 0x138BB50
	internal static void ManagedStreamSeek(long offset, uint origin, Stream stream, IntPtr returnValueAddress) { }

	[RequiredByNativeCode]
	// RVA: 0x138BC2C Offset: 0x1387C2C VA: 0x138BC2C
	internal static void ManagedStreamLength(Stream stream, IntPtr returnValueAddress) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[ExtensionOfNativeClass]
public class MonoBehaviour : Behaviour // TypeDefIndex: 5567
{
	// Fields
	private CancellationTokenSource m_CancellationTokenSource; // 0x18

	// Properties
	public CancellationToken destroyCancellationToken { get; }

	// Methods

	// RVA: 0x138BCEC Offset: 0x1387CEC VA: 0x138BCEC
	public CancellationToken get_destroyCancellationToken() { }

	[RequiredByNativeCode]
	// RVA: 0x138BF14 Offset: 0x1387F14 VA: 0x138BF14
	private void RaiseCancellation() { }

	// RVA: 0x138BF28 Offset: 0x1387F28 VA: 0x138BF28
	public bool IsInvoking() { }

	// RVA: 0x138BFA0 Offset: 0x1387FA0 VA: 0x138BFA0
	public void CancelInvoke() { }

	// RVA: 0x138C018 Offset: 0x1388018 VA: 0x138C018
	public void Invoke(string methodName, float time) { }

	// RVA: 0x138C0CC Offset: 0x13880CC VA: 0x138C0CC
	public void InvokeRepeating(string methodName, float time, float repeatRate) { }

	// RVA: 0x138C1FC Offset: 0x13881FC VA: 0x138C1FC
	public void CancelInvoke(string methodName) { }

	// RVA: 0x138C284 Offset: 0x1388284 VA: 0x138C284
	public bool IsInvoking(string methodName) { }

	// RVA: 0x138C30C Offset: 0x138830C VA: 0x138C30C
	public Coroutine StartCoroutine(string methodName) { }

	// RVA: 0x138C314 Offset: 0x1388314 VA: 0x138C314
	public Coroutine StartCoroutine(string methodName, object value) { }

	// RVA: 0x138C4B0 Offset: 0x13884B0 VA: 0x138C4B0
	public Coroutine StartCoroutine(IEnumerator routine) { }

	[Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", False)]
	// RVA: 0x138C5E4 Offset: 0x13885E4 VA: 0x138C5E4
	public Coroutine StartCoroutine_Auto(IEnumerator routine) { }

	// RVA: 0x138C5E8 Offset: 0x13885E8 VA: 0x138C5E8
	public void StopCoroutine(IEnumerator routine) { }

	// RVA: 0x138C71C Offset: 0x138871C VA: 0x138C71C
	public void StopCoroutine(Coroutine routine) { }

	// RVA: 0x138C850 Offset: 0x1388850 VA: 0x138C850
	public static void print(object message) { }

	// RVA: 0x138BFDC Offset: 0x1387FDC VA: 0x138BFDC
	private static void Internal_CancelInvokeAll(MonoBehaviour self) { }

	// RVA: 0x138BF64 Offset: 0x1387F64 VA: 0x138BF64
	private static bool Internal_IsInvokingAll(MonoBehaviour self) { }

	// RVA: 0x138C070 Offset: 0x1388070 VA: 0x138C070
	private static void InvokeDelayed(MonoBehaviour self, string methodName, float time, float repeatRate) { }

	// RVA: 0x138C240 Offset: 0x1388240 VA: 0x138C240
	private static void CancelInvoke(MonoBehaviour self, string methodName) { }

	// RVA: 0x138C2C8 Offset: 0x13882C8 VA: 0x138C2C8
	private static bool IsInvoking(MonoBehaviour self, string methodName) { }

	// RVA: 0x138C420 Offset: 0x1388420 VA: 0x138C420
	private static bool IsObjectMonoBehaviour(Object obj) { }

	// RVA: 0x138C45C Offset: 0x138845C VA: 0x138C45C
	private Coroutine StartCoroutineManaged(string methodName, object value) { }

	// RVA: 0x138C5A0 Offset: 0x13885A0 VA: 0x138C5A0
	private Coroutine StartCoroutineManaged2(IEnumerator enumerator) { }

	// RVA: 0x138C80C Offset: 0x138880C VA: 0x138C80C
	private void StopCoroutineManaged(Coroutine routine) { }

	// RVA: 0x138C6D8 Offset: 0x13886D8 VA: 0x138C6D8
	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine) { }

	// RVA: 0x138BED8 Offset: 0x1387ED8 VA: 0x138BED8
	private void OnCancellationTokenCreated() { }

	// RVA: 0x138C8A8 Offset: 0x13888A8 VA: 0x138C8A8
	public void .ctor() { }
}


// Namespace: UnityEngine
internal sealed class NoAllocHelpers // TypeDefIndex: 5568
{
	// Methods

	// RVA: -1 Offset: -1
	public static void ResizeList<T>(List<T> list, int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA18A0 Offset: 0xB9D8A0 VA: 0xBA18A0
	|-NoAllocHelpers.ResizeList<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void EnsureListElemCount<T>(List<T> list, int count) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1760 Offset: 0xB9D760 VA: 0xBA1760
	|-NoAllocHelpers.EnsureListElemCount<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x138C8AC Offset: 0x13888AC VA: 0x138C8AC
	public static int SafeLength(Array values) { }

	// RVA: -1 Offset: -1
	public static int SafeLength<T>(List<T> values) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1998 Offset: 0xB9D998 VA: 0xBA1998
	|-NoAllocHelpers.SafeLength<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static T[] ExtractArrayFromListT<T>(List<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1824 Offset: 0xB9D824 VA: 0xBA1824
	|-NoAllocHelpers.ExtractArrayFromListT<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x138C8BC Offset: 0x13888BC VA: 0x138C8BC
	internal static void Internal_ResizeList(object list, int size) { }

	// RVA: 0x138C900 Offset: 0x1388900 VA: 0x138C900
	public static Array ExtractArrayFromList(object list) { }
}


// Namespace: UnityEngine
public struct RangeInt // TypeDefIndex: 5569
{
	// Fields
	public int start; // 0x0
	public int length; // 0x4

	// Properties
	public int end { get; }

	// Methods

	// RVA: 0x138C93C Offset: 0x138893C VA: 0x138C93C
	public int get_end() { }

	// RVA: 0x138C948 Offset: 0x1388948 VA: 0x138C948
	public void .ctor(int start, int length) { }
}


// Namespace: UnityEngine
public enum RuntimeInitializeLoadType // TypeDefIndex: 5570
{
	// Fields
	public int value__; // 0x0
	public const RuntimeInitializeLoadType AfterSceneLoad = 0;
	public const RuntimeInitializeLoadType BeforeSceneLoad = 1;
	public const RuntimeInitializeLoadType AfterAssembliesLoaded = 2;
	public const RuntimeInitializeLoadType BeforeSplashScreen = 3;
	public const RuntimeInitializeLoadType SubsystemRegistration = 4;
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Usage(64, AllowMultiple = False)]
public class RuntimeInitializeOnLoadMethodAttribute : PreserveAttribute // TypeDefIndex: 5571
{
	// Fields
	private RuntimeInitializeLoadType m_LoadType; // 0x10

	// Properties
	private RuntimeInitializeLoadType loadType { set; }

	// Methods

	// RVA: 0x138C950 Offset: 0x1388950 VA: 0x138C950
	public void .ctor() { }

	// RVA: 0x138C974 Offset: 0x1388974 VA: 0x138C974
	public void .ctor(RuntimeInitializeLoadType loadType) { }

	// RVA: 0x138C96C Offset: 0x138896C VA: 0x138C96C
	private void set_loadType(RuntimeInitializeLoadType value) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[ExtensionOfNativeClass]
public class ScriptableObject : Object // TypeDefIndex: 5572
{
	// Methods

	// RVA: 0x138C99C Offset: 0x138899C VA: 0x138C99C
	public void .ctor() { }

	// RVA: 0x138CA58 Offset: 0x1388A58 VA: 0x138CA58
	public static ScriptableObject CreateInstance(Type type) { }

	// RVA: -1 Offset: -1
	public static T CreateInstance<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA73F4 Offset: 0xBA33F4 VA: 0xBA73F4
	|-ScriptableObject.CreateInstance<object>
	*/

	// RVA: 0x138CA1C Offset: 0x1388A1C VA: 0x138CA1C
	private static void CreateScriptableObject(ScriptableObject self) { }

	// RVA: 0x138CA98 Offset: 0x1388A98 VA: 0x138CA98
	internal static ScriptableObject CreateScriptableObjectInstanceFromType(Type type, bool applyDefaultsAndReset) { }
}


// Namespace: UnityEngine
internal class ScriptingRuntime // TypeDefIndex: 5573
{
	// Methods

	// RVA: 0x138CADC Offset: 0x1388ADC VA: 0x138CADC
	public static string[] GetAllUserAssemblies() { }
}


// Namespace: 
private struct ScriptingUtility.TestClass // TypeDefIndex: 5574
{
	// Fields
	public int value; // 0x0
}


// Namespace: UnityEngine
internal class ScriptingUtility // TypeDefIndex: 5575
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x138CB04 Offset: 0x1388B04 VA: 0x138CB04
	private static bool IsManagedCodeWorking() { }
}


// Namespace: UnityEngine
public static class StackTraceUtility // TypeDefIndex: 5576
{
	// Fields
	private static string projectFolder; // 0x0

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x138CB0C Offset: 0x1388B0C VA: 0x138CB0C
	internal static void SetProjectFolder(string folder) { }

	[RequiredByNativeCode]
	// RVA: 0x138CBE8 Offset: 0x1388BE8 VA: 0x138CBE8
	public static string ExtractStackTrace() { }

	[RequiredByNativeCode]
	// RVA: 0x138D450 Offset: 0x1389450 VA: 0x138D450
	internal static void ExtractStringFromExceptionInternal(object exceptiono, out string message, out string stackTrace) { }

	// RVA: 0x138CD44 Offset: 0x1388D44 VA: 0x138CD44
	internal static string ExtractFormattedStackTrace(StackTrace stackTrace) { }

	// RVA: 0x138D7AC Offset: 0x13897AC VA: 0x138D7AC
	private static void .cctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Serializable]
public class UnityException : Exception // TypeDefIndex: 5577
{
	// Methods

	// RVA: 0x138D80C Offset: 0x138980C VA: 0x138D80C
	public void .ctor() { }

	// RVA: 0x138C184 Offset: 0x1388184 VA: 0x138C184
	public void .ctor(string message) { }

	// RVA: 0x138D88C Offset: 0x138988C VA: 0x138D88C
	protected void .ctor(SerializationInfo info, StreamingContext context) { }
}


// Namespace: UnityEngine
[Serializable]
public class MissingReferenceException : Exception // TypeDefIndex: 5578
{
	// Methods

	// RVA: 0x138D90C Offset: 0x138990C VA: 0x138D90C
	public void .ctor() { }

	// RVA: 0x138BE60 Offset: 0x1387E60 VA: 0x138BE60
	public void .ctor(string message) { }

	// RVA: 0x138D98C Offset: 0x138998C VA: 0x138D98C
	protected void .ctor(SerializationInfo info, StreamingContext context) { }
}


// Namespace: 
internal enum TextAsset.CreateOptions // TypeDefIndex: 5579
{
	// Fields
	public int value__; // 0x0
	public const TextAsset.CreateOptions None = 0;
	public const TextAsset.CreateOptions CreateNativeObject = 1;
}


// Namespace: 
private static class TextAsset.EncodingUtility // TypeDefIndex: 5580
{
	// Fields
	internal static readonly KeyValuePair<byte[], Encoding>[] encodingLookup; // 0x0
	internal static readonly Encoding targetEncoding; // 0x8

	// Methods

	// RVA: 0x138DE8C Offset: 0x1389E8C VA: 0x138DE8C
	private static void .cctor() { }
}


// Namespace: UnityEngine
public class TextAsset : Object // TypeDefIndex: 5581
{
	// Properties
	public byte[] bytes { get; }
	public string text { get; }

	// Methods

	// RVA: 0x138DA0C Offset: 0x1389A0C VA: 0x138DA0C
	public byte[] get_bytes() { }

	// RVA: 0x138DA48 Offset: 0x1389A48 VA: 0x138DA48
	private static void Internal_CreateInstance(TextAsset self, string text) { }

	// RVA: 0x138DA8C Offset: 0x1389A8C VA: 0x138DA8C
	public string get_text() { }

	// RVA: 0x138DDD0 Offset: 0x1389DD0 VA: 0x138DDD0 Slot: 3
	public override string ToString() { }

	// RVA: 0x138DDD4 Offset: 0x1389DD4 VA: 0x138DDD4
	public void .ctor() { }

	// RVA: 0x138DDE0 Offset: 0x1389DE0 VA: 0x138DDE0
	internal void .ctor(TextAsset.CreateOptions options, string text) { }

	// RVA: 0x138DB1C Offset: 0x1389B1C VA: 0x138DB1C
	internal static string DecodeString(byte[] bytes) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class TrackedReference // TypeDefIndex: 5582
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class UnhandledExceptionHandler.<>c // TypeDefIndex: 5583
{
	// Fields
	public static readonly UnhandledExceptionHandler.<>c <>9; // 0x0
	public static UnhandledExceptionEventHandler <>9__0_0; // 0x8

	// Methods

	// RVA: 0x138E2F8 Offset: 0x138A2F8 VA: 0x138E2F8
	private static void .cctor() { }

	// RVA: 0x138E354 Offset: 0x138A354 VA: 0x138E354
	public void .ctor() { }

	// RVA: 0x138E35C Offset: 0x138A35C VA: 0x138E35C
	internal void <RegisterUECatcher>b__0_0(object sender, UnhandledExceptionEventArgs e) { }
}


// Namespace: UnityEngine
internal sealed class UnhandledExceptionHandler // TypeDefIndex: 5584
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x138E204 Offset: 0x138A204 VA: 0x138E204
	private static void RegisterUECatcher() { }
}


// Namespace: UnityEngine
[Flags]
public enum HideFlags // TypeDefIndex: 5585
{
	// Fields
	public int value__; // 0x0
	public const HideFlags None = 0;
	public const HideFlags HideInHierarchy = 1;
	public const HideFlags HideInInspector = 2;
	public const HideFlags DontSaveInEditor = 4;
	public const HideFlags NotEditable = 8;
	public const HideFlags DontSaveInBuild = 16;
	public const HideFlags DontUnloadUnusedAsset = 32;
	public const HideFlags DontSave = 52;
	public const HideFlags HideAndDontSave = 61;
}


// Namespace: UnityEngine
[RequiredByNativeCode(GenerateProxy = True)]
public class Object // TypeDefIndex: 5586
{
	// Fields
	private IntPtr m_CachedPtr; // 0x10
	internal static int OffsetOfInstanceIDInCPlusPlusObject; // 0x0
	private const string objectIsNullMessage = "The Object you want to instantiate is null.";
	private const string cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";

	// Properties
	public string name { get; set; }
	public HideFlags hideFlags { get; set; }

	// Methods

	// RVA: 0x138E410 Offset: 0x138A410 VA: 0x138E410
	public int GetInstanceID() { }

	// RVA: 0x138E550 Offset: 0x138A550 VA: 0x138E550 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x138E558 Offset: 0x138A558 VA: 0x138E558 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x138E6FC Offset: 0x138A6FC VA: 0x138E6FC
	public static bool op_Implicit(Object exists) { }

	// RVA: 0x138E654 Offset: 0x138A654 VA: 0x138E654
	private static bool CompareBaseObjects(Object lhs, Object rhs) { }

	// RVA: 0x138E760 Offset: 0x138A760 VA: 0x138E760
	private static bool IsNativeObjectAlive(Object o) { }

	// RVA: 0x138E780 Offset: 0x138A780 VA: 0x138E780
	private IntPtr GetCachedPtr() { }

	// RVA: 0x138E788 Offset: 0x138A788 VA: 0x138E788
	public string get_name() { }

	// RVA: 0x138E838 Offset: 0x138A838 VA: 0x138E838
	public void set_name(string value) { }

	// RVA: 0x138E900 Offset: 0x138A900 VA: 0x138E900
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation) { }

	// RVA: 0x138EB94 Offset: 0x138AB94 VA: 0x138EB94
	public static Object Instantiate(Object original, Vector3 position, Quaternion rotation, Transform parent) { }

	// RVA: 0x138EDE0 Offset: 0x138ADE0 VA: 0x138EDE0
	public static Object Instantiate(Object original) { }

	// RVA: 0x138EF0C Offset: 0x138AF0C VA: 0x138EF0C
	public static Object Instantiate(Object original, Transform parent) { }

	// RVA: 0x138EF74 Offset: 0x138AF74 VA: 0x138EF74
	public static Object Instantiate(Object original, Transform parent, bool instantiateInWorldSpace) { }

	// RVA: -1 Offset: -1
	public static T Instantiate<T>(T original) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1B60 Offset: 0xB9DB60 VA: 0xBA1B60
	|-Object.Instantiate<object>
	*/

	// RVA: -1 Offset: -1
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1DBC Offset: 0xB9DDBC VA: 0xBA1DBC
	|-Object.Instantiate<object>
	*/

	// RVA: -1 Offset: -1
	public static T Instantiate<T>(T original, Vector3 position, Quaternion rotation, Transform parent) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1EBC Offset: 0xB9DEBC VA: 0xBA1EBC
	|-Object.Instantiate<object>
	*/

	// RVA: -1 Offset: -1
	public static T Instantiate<T>(T original, Transform parent) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1C8C Offset: 0xB9DC8C VA: 0xBA1C8C
	|-Object.Instantiate<object>
	*/

	// RVA: -1 Offset: -1
	public static T Instantiate<T>(T original, Transform parent, bool worldPositionStays) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1CFC Offset: 0xB9DCFC VA: 0xBA1CFC
	|-Object.Instantiate<object>
	*/

	// RVA: 0x138F110 Offset: 0x138B110 VA: 0x138F110
	public static void Destroy(Object obj, float t) { }

	// RVA: 0x138F15C Offset: 0x138B15C VA: 0x138F15C
	public static void Destroy(Object obj) { }

	// RVA: 0x138F1D4 Offset: 0x138B1D4 VA: 0x138F1D4
	public static void DestroyImmediate(Object obj, bool allowDestroyingAssets) { }

	// RVA: 0x138F218 Offset: 0x138B218 VA: 0x138F218
	public static void DestroyImmediate(Object obj) { }

	// RVA: 0x138F290 Offset: 0x138B290 VA: 0x138F290
	public static Object[] FindObjectsOfType(Type type) { }

	// RVA: 0x138F308 Offset: 0x138B308 VA: 0x138F308
	public static Object[] FindObjectsOfType(Type type, bool includeInactive) { }

	// RVA: 0x138F34C Offset: 0x138B34C VA: 0x138F34C
	public static void DontDestroyOnLoad(Object target) { }

	// RVA: 0x138F388 Offset: 0x138B388 VA: 0x138F388
	public HideFlags get_hideFlags() { }

	// RVA: 0x138F3C4 Offset: 0x138B3C4 VA: 0x138F3C4
	public void set_hideFlags(HideFlags value) { }

	// RVA: -1 Offset: -1
	public static T[] FindObjectsOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA1AB4 Offset: 0xB9DAB4 VA: 0xBA1AB4
	|-Object.FindObjectsOfType<object>
	*/

	// RVA: -1 Offset: -1
	public static T FindObjectOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA19CC Offset: 0xB9D9CC VA: 0xBA19CC
	|-Object.FindObjectOfType<object>
	*/

	// RVA: 0x138EAB0 Offset: 0x138AAB0 VA: 0x138EAB0
	private static void CheckNullArgument(object arg, string message) { }

	// RVA: 0x138F408 Offset: 0x138B408 VA: 0x138F408
	public static Object FindObjectOfType(Type type) { }

	// RVA: 0x138F4A0 Offset: 0x138B4A0 VA: 0x138F4A0
	public static Object FindObjectOfType(Type type, bool includeInactive) { }

	// RVA: 0x138F544 Offset: 0x138B544 VA: 0x138F544 Slot: 3
	public override string ToString() { }

	// RVA: 0x138BDFC Offset: 0x1387DFC VA: 0x138BDFC
	public static bool op_Equality(Object x, Object y) { }

	// RVA: 0x138B294 Offset: 0x1387294 VA: 0x138B294
	public static bool op_Inequality(Object x, Object y) { }

	// RVA: 0x138E528 Offset: 0x138A528 VA: 0x138E528
	private static int GetOffsetOfInstanceIDInCPlusPlusObject() { }

	// RVA: 0x138EED0 Offset: 0x138AED0 VA: 0x138EED0
	private static Object Internal_CloneSingle(Object data) { }

	// RVA: 0x138F0BC Offset: 0x138B0BC VA: 0x138F0BC
	private static Object Internal_CloneSingleWithParent(Object data, Transform parent, bool worldPositionStays) { }

	// RVA: 0x138EAFC Offset: 0x138AAFC VA: 0x138EAFC
	private static Object Internal_InstantiateSingle(Object data, Vector3 pos, Quaternion rot) { }

	// RVA: 0x138ED38 Offset: 0x138AD38 VA: 0x138ED38
	private static Object Internal_InstantiateSingleWithParent(Object data, Transform parent, Vector3 pos, Quaternion rot) { }

	// RVA: 0x138F5B8 Offset: 0x138B5B8 VA: 0x138F5B8
	private static string ToString(Object obj) { }

	// RVA: 0x138E7FC Offset: 0x138A7FC VA: 0x138E7FC
	private static string GetName(Object obj) { }

	// RVA: 0x138E8BC Offset: 0x138A8BC VA: 0x138E8BC
	private static void SetName(Object obj, string name) { }

	// RVA: 0x138F6A4 Offset: 0x138B6A4 VA: 0x138F6A4
	internal static Object FindObjectFromInstanceID(int instanceID) { }

	// RVA: 0x1389360 Offset: 0x1385360 VA: 0x1389360
	public void .ctor() { }

	// RVA: 0x138F6E0 Offset: 0x138B6E0 VA: 0x138F6E0
	private static void .cctor() { }

	// RVA: 0x138F5F4 Offset: 0x138B5F4 VA: 0x138F5F4
	private static Object Internal_InstantiateSingle_Injected(Object data, ref Vector3 pos, ref Quaternion rot) { }

	// RVA: 0x138F648 Offset: 0x138B648 VA: 0x138F648
	private static Object Internal_InstantiateSingleWithParent_Injected(Object data, Transform parent, ref Vector3 pos, ref Quaternion rot) { }
}


// Namespace: 
private struct UnitySynchronizationContext.WorkRequest // TypeDefIndex: 5587
{
	// Fields
	private readonly SendOrPostCallback m_DelagateCallback; // 0x0
	private readonly object m_DelagateState; // 0x8
	private readonly ManualResetEvent m_WaitHandle; // 0x10

	// Methods

	// RVA: 0x138FB40 Offset: 0x138BB40 VA: 0x138FB40
	public void .ctor(SendOrPostCallback callback, object state, ManualResetEvent waitHandle) { }

	// RVA: 0x138FEEC Offset: 0x138BEEC VA: 0x138FEEC
	public void Invoke() { }
}


// Namespace: UnityEngine
internal sealed class UnitySynchronizationContext : SynchronizationContext // TypeDefIndex: 5588
{
	// Fields
	private readonly List<UnitySynchronizationContext.WorkRequest> m_AsyncWorkQueue; // 0x18
	private readonly List<UnitySynchronizationContext.WorkRequest> m_CurrentFrameWork; // 0x20
	private readonly int m_MainThreadID; // 0x28
	private int m_TrackedCount; // 0x2C

	// Methods

	// RVA: 0x138F72C Offset: 0x138B72C VA: 0x138F72C
	private void .ctor(int mainThreadID) { }

	// RVA: 0x138F7D8 Offset: 0x138B7D8 VA: 0x138F7D8
	private void .ctor(List<UnitySynchronizationContext.WorkRequest> queue, int mainThreadID) { }

	// RVA: 0x138F878 Offset: 0x138B878 VA: 0x138F878 Slot: 4
	public override void Send(SendOrPostCallback callback, object state) { }

	// RVA: 0x138FB4C Offset: 0x138BB4C VA: 0x138FB4C Slot: 6
	public override void OperationStarted() { }

	// RVA: 0x138FB58 Offset: 0x138BB58 VA: 0x138FB58 Slot: 7
	public override void OperationCompleted() { }

	// RVA: 0x138FB64 Offset: 0x138BB64 VA: 0x138FB64 Slot: 5
	public override void Post(SendOrPostCallback callback, object state) { }

	// RVA: 0x138FC74 Offset: 0x138BC74 VA: 0x138FC74 Slot: 9
	public override SynchronizationContext CreateCopy() { }

	// RVA: 0x138FCD8 Offset: 0x138BCD8 VA: 0x138FCD8
	public void Exec() { }

	// RVA: 0x138FF98 Offset: 0x138BF98 VA: 0x138FF98
	private bool HasPendingTasks() { }

	[RequiredByNativeCode]
	// RVA: 0x138FFF8 Offset: 0x138BFF8 VA: 0x138FFF8
	private static void InitializeSynchronizationContext() { }

	[RequiredByNativeCode]
	// RVA: 0x1390070 Offset: 0x138C070 VA: 0x1390070
	private static void ExecuteTasks() { }

	[RequiredByNativeCode]
	// RVA: 0x13900C8 Offset: 0x138C0C8 VA: 0x13900C8
	private static bool ExecutePendingTasks(long millisecondsTimeout) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public sealed class WaitForEndOfFrame : YieldInstruction // TypeDefIndex: 5589
{
	// Methods

	// RVA: 0x13901B4 Offset: 0x138C1B4 VA: 0x13901B4
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public sealed class WaitForFixedUpdate : YieldInstruction // TypeDefIndex: 5590
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
public sealed class WaitForSeconds : YieldInstruction // TypeDefIndex: 5591
{
	// Fields
	internal float m_Seconds; // 0x10

	// Methods

	// RVA: 0x13901BC Offset: 0x138C1BC VA: 0x13901BC
	public void .ctor(float seconds) { }
}


// Namespace: UnityEngine
public class WaitForSecondsRealtime : CustomYieldInstruction // TypeDefIndex: 5592
{
	// Fields
	[CompilerGenerated]
	private float <waitTime>k__BackingField; // 0x10
	private float m_WaitUntilTime; // 0x14

	// Properties
	public float waitTime { get; set; }
	public override bool keepWaiting { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13901E4 Offset: 0x138C1E4 VA: 0x13901E4
	public float get_waitTime() { }

	[CompilerGenerated]
	// RVA: 0x13901EC Offset: 0x138C1EC VA: 0x13901EC
	public void set_waitTime(float value) { }

	// RVA: 0x13901F4 Offset: 0x138C1F4 VA: 0x13901F4 Slot: 7
	public override bool get_keepWaiting() { }

	// RVA: 0x13902B8 Offset: 0x138C2B8 VA: 0x13902B8
	public void .ctor(float time) { }

	// RVA: 0x13902E8 Offset: 0x138C2E8 VA: 0x13902E8 Slot: 8
	public override void Reset() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public class YieldInstruction // TypeDefIndex: 5593
{
	// Methods

	// RVA: 0x1387A20 Offset: 0x1383A20 VA: 0x1387A20
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public sealed class SerializeField : Attribute // TypeDefIndex: 5594
{
	// Methods

	// RVA: 0x13902F4 Offset: 0x138C2F4 VA: 0x13902F4
	public void .ctor() { }
}


// Namespace: UnityEngine
[Usage(256)]
[RequiredByNativeCode]
public sealed class SerializeReference : Attribute // TypeDefIndex: 5595
{}


// Namespace: UnityEngine
[Usage(4)]
[RequiredByNativeCode]
public sealed class PreferBinarySerialization : Attribute // TypeDefIndex: 5596
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
public interface ISerializationCallbackReceiver // TypeDefIndex: 5597
{
	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnBeforeSerialize();

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnAfterDeserialize();
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class ComputeBuffer : IDisposable // TypeDefIndex: 5598
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Properties
	public int count { get; }

	// Methods

	// RVA: 0x13902FC Offset: 0x138C2FC VA: 0x13902FC Slot: 1
	protected override void Finalize() { }

	// RVA: 0x1390450 Offset: 0x138C450 VA: 0x1390450 Slot: 4
	public void Dispose() { }

	// RVA: 0x1390394 Offset: 0x138C394 VA: 0x1390394
	private void Dispose(bool disposing) { }

	// RVA: 0x13904F0 Offset: 0x138C4F0 VA: 0x13904F0
	private static IntPtr InitBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage) { }

	// RVA: 0x13904B4 Offset: 0x138C4B4 VA: 0x13904B4
	private static void DestroyBuffer(ComputeBuffer buf) { }

	// RVA: 0x139054C Offset: 0x138C54C VA: 0x139054C
	public void .ctor(int count, int stride) { }

	// RVA: 0x1390558 Offset: 0x138C558 VA: 0x1390558
	private void .ctor(int count, int stride, ComputeBufferType type, ComputeBufferMode usage, int stackDepth) { }

	// RVA: 0x1390760 Offset: 0x138C760 VA: 0x1390760
	public void Release() { }

	// RVA: 0x1390764 Offset: 0x138C764 VA: 0x1390764
	public int get_count() { }

	// RVA: 0x13907A0 Offset: 0x138C7A0 VA: 0x13907A0
	public void SetData(Array data) { }

	// RVA: 0x13908FC Offset: 0x138C8FC VA: 0x13908FC
	private void InternalSetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize) { }

	// RVA: 0x1390970 Offset: 0x138C970 VA: 0x1390970
	public void GetData(Array data) { }

	// RVA: 0x1390B10 Offset: 0x138CB10 VA: 0x1390B10
	private void InternalGetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize) { }

	// RVA: 0x1390B84 Offset: 0x138CB84 VA: 0x1390B84
	public IntPtr GetNativeBufferPtr() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class ComputeShader : Object // TypeDefIndex: 5599
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1390BC0 Offset: 0x138CBC0 VA: 0x1390BC0
	public int FindKernel(string name) { }

	// RVA: 0x1390C04 Offset: 0x138CC04 VA: 0x1390C04
	private void Internal_SetBuffer(int kernelIndex, int nameID, ComputeBuffer buffer) { }

	// RVA: 0x1390C60 Offset: 0x138CC60 VA: 0x1390C60
	public void SetBuffer(int kernelIndex, int nameID, ComputeBuffer buffer) { }

	// RVA: 0x1390CBC Offset: 0x138CCBC VA: 0x1390CBC
	public void SetBuffer(int kernelIndex, string name, ComputeBuffer buffer) { }
}


// Namespace: UnityEngine
internal class LowerResBlitTexture : Object // TypeDefIndex: 5600
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1390D24 Offset: 0x138CD24 VA: 0x1390D24
	internal void LowerResBlitTextureDontStripMe() { }
}


// Namespace: UnityEngine
internal class PreloadData : Object // TypeDefIndex: 5601
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1390D28 Offset: 0x138CD28 VA: 0x1390D28
	internal void PreloadDataDontStripMe() { }
}


// Namespace: UnityEngine
public enum OperatingSystemFamily // TypeDefIndex: 5602
{
	// Fields
	public int value__; // 0x0
	public const OperatingSystemFamily Other = 0;
	public const OperatingSystemFamily MacOSX = 1;
	public const OperatingSystemFamily Windows = 2;
	public const OperatingSystemFamily Linux = 3;
}


// Namespace: UnityEngine
public enum DeviceType // TypeDefIndex: 5603
{
	// Fields
	public int value__; // 0x0
	public const DeviceType Unknown = 0;
	public const DeviceType Handheld = 1;
	public const DeviceType Console = 2;
	public const DeviceType Desktop = 3;
}


// Namespace: UnityEngine
public sealed class SystemInfo // TypeDefIndex: 5604
{
	// Properties
	public static float batteryLevel { get; }
	public static string operatingSystem { get; }
	public static OperatingSystemFamily operatingSystemFamily { get; }
	public static string processorType { get; }
	public static int processorCount { get; }
	public static int systemMemorySize { get; }
	public static string deviceUniqueIdentifier { get; }
	public static string deviceName { get; }
	public static string deviceModel { get; }
	public static DeviceType deviceType { get; }
	public static string graphicsDeviceName { get; }
	public static GraphicsDeviceType graphicsDeviceType { get; }
	public static string graphicsDeviceVersion { get; }
	public static bool graphicsMultiThreaded { get; }
	public static bool supportsComputeShaders { get; }
	public static int maxTextureSize { get; }
	internal static int maxRenderTextureSize { get; }
	public static bool supportsAsyncGPUReadback { get; }
	public static long maxGraphicsBufferSize { get; }

	// Methods

	// RVA: 0x1390D2C Offset: 0x138CD2C VA: 0x1390D2C
	public static float get_batteryLevel() { }

	// RVA: 0x1390D7C Offset: 0x138CD7C VA: 0x1390D7C
	public static string get_operatingSystem() { }

	// RVA: 0x1390DCC Offset: 0x138CDCC VA: 0x1390DCC
	public static OperatingSystemFamily get_operatingSystemFamily() { }

	// RVA: 0x1390E1C Offset: 0x138CE1C VA: 0x1390E1C
	public static string get_processorType() { }

	// RVA: 0x1390E6C Offset: 0x138CE6C VA: 0x1390E6C
	public static int get_processorCount() { }

	// RVA: 0x1390EBC Offset: 0x138CEBC VA: 0x1390EBC
	public static int get_systemMemorySize() { }

	// RVA: 0x1390F0C Offset: 0x138CF0C VA: 0x1390F0C
	public static string get_deviceUniqueIdentifier() { }

	// RVA: 0x1390F5C Offset: 0x138CF5C VA: 0x1390F5C
	public static string get_deviceName() { }

	// RVA: 0x1390FAC Offset: 0x138CFAC VA: 0x1390FAC
	public static string get_deviceModel() { }

	// RVA: 0x1390FFC Offset: 0x138CFFC VA: 0x1390FFC
	public static DeviceType get_deviceType() { }

	// RVA: 0x139104C Offset: 0x138D04C VA: 0x139104C
	public static string get_graphicsDeviceName() { }

	// RVA: 0x139109C Offset: 0x138D09C VA: 0x139109C
	public static GraphicsDeviceType get_graphicsDeviceType() { }

	// RVA: 0x13910EC Offset: 0x138D0EC VA: 0x13910EC
	public static string get_graphicsDeviceVersion() { }

	// RVA: 0x139113C Offset: 0x138D13C VA: 0x139113C
	public static bool get_graphicsMultiThreaded() { }

	// RVA: 0x139118C Offset: 0x138D18C VA: 0x139118C
	public static bool get_supportsComputeShaders() { }

	// RVA: 0x13911DC Offset: 0x138D1DC VA: 0x13911DC
	private static bool IsValidEnumValue(Enum value) { }

	// RVA: 0x1391254 Offset: 0x138D254 VA: 0x1391254
	public static bool SupportsTextureFormat(TextureFormat format) { }

	// RVA: 0x1391364 Offset: 0x138D364 VA: 0x1391364
	public static int get_maxTextureSize() { }

	// RVA: 0x13913B4 Offset: 0x138D3B4 VA: 0x13913B4
	internal static int get_maxRenderTextureSize() { }

	// RVA: 0x1391404 Offset: 0x138D404 VA: 0x1391404
	public static bool get_supportsAsyncGPUReadback() { }

	// RVA: 0x1390738 Offset: 0x138C738 VA: 0x1390738
	public static long get_maxGraphicsBufferSize() { }

	// RVA: 0x1390D54 Offset: 0x138CD54 VA: 0x1390D54
	private static float GetBatteryLevel() { }

	// RVA: 0x1390DA4 Offset: 0x138CDA4 VA: 0x1390DA4
	private static string GetOperatingSystem() { }

	// RVA: 0x1390DF4 Offset: 0x138CDF4 VA: 0x1390DF4
	private static OperatingSystemFamily GetOperatingSystemFamily() { }

	// RVA: 0x1390E44 Offset: 0x138CE44 VA: 0x1390E44
	private static string GetProcessorType() { }

	// RVA: 0x1390E94 Offset: 0x138CE94 VA: 0x1390E94
	private static int GetProcessorCount() { }

	// RVA: 0x1390EE4 Offset: 0x138CEE4 VA: 0x1390EE4
	private static int GetPhysicalMemoryMB() { }

	// RVA: 0x1390F34 Offset: 0x138CF34 VA: 0x1390F34
	private static string GetDeviceUniqueIdentifier() { }

	// RVA: 0x1390F84 Offset: 0x138CF84 VA: 0x1390F84
	private static string GetDeviceName() { }

	// RVA: 0x1390FD4 Offset: 0x138CFD4 VA: 0x1390FD4
	private static string GetDeviceModel() { }

	// RVA: 0x1391024 Offset: 0x138D024 VA: 0x1391024
	private static DeviceType GetDeviceType() { }

	// RVA: 0x1391074 Offset: 0x138D074 VA: 0x1391074
	private static string GetGraphicsDeviceName() { }

	// RVA: 0x13910C4 Offset: 0x138D0C4 VA: 0x13910C4
	private static GraphicsDeviceType GetGraphicsDeviceType() { }

	// RVA: 0x1391114 Offset: 0x138D114 VA: 0x1391114
	private static string GetGraphicsDeviceVersion() { }

	// RVA: 0x1391164 Offset: 0x138D164 VA: 0x1391164
	private static bool GetGraphicsMultiThreaded() { }

	// RVA: 0x13911B4 Offset: 0x138D1B4 VA: 0x13911B4
	private static bool SupportsComputeShaders() { }

	// RVA: 0x1391328 Offset: 0x138D328 VA: 0x1391328
	private static bool SupportsTextureFormatNative(TextureFormat format) { }

	// RVA: 0x139138C Offset: 0x138D38C VA: 0x139138C
	private static int GetMaxTextureSize() { }

	// RVA: 0x13913DC Offset: 0x138D3DC VA: 0x13913DC
	private static int GetMaxRenderTextureSize() { }

	// RVA: 0x139142C Offset: 0x138D42C VA: 0x139142C
	private static bool SupportsAsyncGPUReadback() { }

	// RVA: 0x1391454 Offset: 0x138D454 VA: 0x1391454
	private static long MaxGraphicsBufferSize() { }

	// RVA: 0x139147C Offset: 0x138D47C VA: 0x139147C
	public static bool IsFormatSupported(GraphicsFormat format, FormatUsage usage) { }

	// RVA: 0x13914C0 Offset: 0x138D4C0 VA: 0x13914C0
	public static GraphicsFormat GetCompatibleFormat(GraphicsFormat format, FormatUsage usage) { }

	// RVA: 0x1391504 Offset: 0x138D504 VA: 0x1391504
	public static GraphicsFormat GetGraphicsFormat(DefaultFormat format) { }
}


// Namespace: UnityEngine
internal class SystemClock // TypeDefIndex: 5605
{
	// Fields
	private static readonly DateTime s_Epoch; // 0x0

	// Properties
	public static DateTime now { get; }

	// Methods

	// RVA: 0x1391540 Offset: 0x138D540 VA: 0x1391540
	public static DateTime get_now() { }

	// RVA: 0x1391590 Offset: 0x138D590 VA: 0x1391590
	private static void .cctor() { }
}


// Namespace: UnityEngine
public class Time // TypeDefIndex: 5606
{
	// Properties
	public static float time { get; }
	public static float deltaTime { get; }
	public static float fixedTime { get; }
	public static float unscaledTime { get; }
	public static float unscaledDeltaTime { get; }
	public static float fixedDeltaTime { get; }
	public static float maximumDeltaTime { get; set; }
	public static float timeScale { get; set; }
	public static int frameCount { get; }
	public static float realtimeSinceStartup { get; }

	// Methods

	// RVA: 0x139160C Offset: 0x138D60C VA: 0x139160C
	public static float get_time() { }

	// RVA: 0x1391634 Offset: 0x138D634 VA: 0x1391634
	public static float get_deltaTime() { }

	// RVA: 0x139165C Offset: 0x138D65C VA: 0x139165C
	public static float get_fixedTime() { }

	// RVA: 0x1391684 Offset: 0x138D684 VA: 0x1391684
	public static float get_unscaledTime() { }

	// RVA: 0x13916AC Offset: 0x138D6AC VA: 0x13916AC
	public static float get_unscaledDeltaTime() { }

	// RVA: 0x13916D4 Offset: 0x138D6D4 VA: 0x13916D4
	public static float get_fixedDeltaTime() { }

	// RVA: 0x13916FC Offset: 0x138D6FC VA: 0x13916FC
	public static float get_maximumDeltaTime() { }

	// RVA: 0x1391724 Offset: 0x138D724 VA: 0x1391724
	public static void set_maximumDeltaTime(float value) { }

	// RVA: 0x139175C Offset: 0x138D75C VA: 0x139175C
	public static float get_timeScale() { }

	// RVA: 0x1391784 Offset: 0x138D784 VA: 0x1391784
	public static void set_timeScale(float value) { }

	// RVA: 0x13917BC Offset: 0x138D7BC VA: 0x13917BC
	public static int get_frameCount() { }

	// RVA: 0x1390290 Offset: 0x138C290 VA: 0x1390290
	public static float get_realtimeSinceStartup() { }
}


// Namespace: UnityEngine
internal struct TouchScreenKeyboard_InternalConstructorHelperArguments // TypeDefIndex: 5607
{
	// Fields
	public uint keyboardType; // 0x0
	public uint autocorrection; // 0x4
	public uint multiline; // 0x8
	public uint secure; // 0xC
	public uint alert; // 0x10
	public int characterLimit; // 0x14
}


// Namespace: 
public enum TouchScreenKeyboard.Status // TypeDefIndex: 5608
{
	// Fields
	public int value__; // 0x0
	public const TouchScreenKeyboard.Status Visible = 0;
	public const TouchScreenKeyboard.Status Done = 1;
	public const TouchScreenKeyboard.Status Canceled = 2;
	public const TouchScreenKeyboard.Status LostFocus = 3;
}


// Namespace: UnityEngine
public class TouchScreenKeyboard // TypeDefIndex: 5609
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	[CompilerGenerated]
	private static bool <disableInPlaceEditing>k__BackingField; // 0x0

	// Properties
	public static bool isSupported { get; }
	internal static bool disableInPlaceEditing { get; }
	public static bool isInPlaceEditingAllowed { get; }
	internal static bool isRequiredToForceOpen { get; }
	public string text { get; set; }
	public static bool hideInput { set; }
	public bool active { get; set; }
	public TouchScreenKeyboard.Status status { get; }
	public int characterLimit { set; }
	public bool canGetSelection { get; }
	public bool canSetSelection { get; }
	public RangeInt selection { get; set; }

	// Methods

	// RVA: 0x13917E4 Offset: 0x138D7E4 VA: 0x13917E4
	private static void Internal_Destroy(IntPtr ptr) { }

	// RVA: 0x1391820 Offset: 0x138D820 VA: 0x1391820
	private void Destroy() { }

	// RVA: 0x13918C4 Offset: 0x138D8C4 VA: 0x13918C4 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x1391958 Offset: 0x138D958 VA: 0x1391958
	public void .ctor(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit) { }

	// RVA: 0x1391AB4 Offset: 0x138DAB4 VA: 0x1391AB4
	private static IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, string text, string textPlaceholder) { }

	// RVA: 0x1391B08 Offset: 0x138DB08 VA: 0x1391B08
	public static bool get_isSupported() { }

	[CompilerGenerated]
	// RVA: 0x1391BB4 Offset: 0x138DBB4 VA: 0x1391BB4
	internal static bool get_disableInPlaceEditing() { }

	// RVA: 0x1391BFC Offset: 0x138DBFC VA: 0x1391BFC
	public static bool get_isInPlaceEditingAllowed() { }

	// RVA: 0x1391C68 Offset: 0x138DC68 VA: 0x1391C68
	private static bool IsInPlaceEditingAllowed() { }

	// RVA: 0x1391C90 Offset: 0x138DC90 VA: 0x1391C90
	internal static bool get_isRequiredToForceOpen() { }

	// RVA: 0x1391CB8 Offset: 0x138DCB8 VA: 0x1391CB8
	private static bool IsRequiredToForceOpen() { }

	// RVA: 0x1391CE0 Offset: 0x138DCE0 VA: 0x1391CE0
	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit) { }

	// RVA: 0x1391D98 Offset: 0x138DD98 VA: 0x1391D98
	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure) { }

	// RVA: 0x1391E24 Offset: 0x138DE24 VA: 0x1391E24
	public string get_text() { }

	// RVA: 0x1391E60 Offset: 0x138DE60 VA: 0x1391E60
	public void set_text(string value) { }

	// RVA: 0x1391EA4 Offset: 0x138DEA4 VA: 0x1391EA4
	public static void set_hideInput(bool value) { }

	// RVA: 0x1391EE0 Offset: 0x138DEE0 VA: 0x1391EE0
	public bool get_active() { }

	// RVA: 0x1391F1C Offset: 0x138DF1C VA: 0x1391F1C
	public void set_active(bool value) { }

	// RVA: 0x1391F60 Offset: 0x138DF60 VA: 0x1391F60
	public TouchScreenKeyboard.Status get_status() { }

	// RVA: 0x1391F9C Offset: 0x138DF9C VA: 0x1391F9C
	public void set_characterLimit(int value) { }

	// RVA: 0x1391FE0 Offset: 0x138DFE0 VA: 0x1391FE0
	public bool get_canGetSelection() { }

	// RVA: 0x139201C Offset: 0x138E01C VA: 0x139201C
	public bool get_canSetSelection() { }

	// RVA: 0x1392058 Offset: 0x138E058 VA: 0x1392058
	public RangeInt get_selection() { }

	// RVA: 0x13920E8 Offset: 0x138E0E8 VA: 0x13920E8
	public void set_selection(RangeInt value) { }

	// RVA: 0x13920A4 Offset: 0x138E0A4 VA: 0x13920A4
	private static void GetSelection(out int start, out int length) { }

	// RVA: 0x13921DC Offset: 0x138E1DC VA: 0x13921DC
	private static void SetSelection(int start, int length) { }
}


// Namespace: UnityEngine
public enum TouchScreenKeyboardType // TypeDefIndex: 5610
{
	// Fields
	public int value__; // 0x0
	public const TouchScreenKeyboardType Default = 0;
	public const TouchScreenKeyboardType ASCIICapable = 1;
	public const TouchScreenKeyboardType NumbersAndPunctuation = 2;
	public const TouchScreenKeyboardType URL = 3;
	public const TouchScreenKeyboardType NumberPad = 4;
	public const TouchScreenKeyboardType PhonePad = 5;
	public const TouchScreenKeyboardType NamePhonePad = 6;
	public const TouchScreenKeyboardType EmailAddress = 7;
	[Obsolete("Wii U is no longer supported as of Unity 2018.1.")]
	public const TouchScreenKeyboardType NintendoNetworkAccount = 8;
	public const TouchScreenKeyboardType Social = 9;
	public const TouchScreenKeyboardType Search = 10;
	public const TouchScreenKeyboardType DecimalPad = 11;
	public const TouchScreenKeyboardType OneTimeCode = 12;
}


// Namespace: UnityEngine
internal static class UINumericFieldsUtils // TypeDefIndex: 5611
{
	// Fields
	public static readonly string k_AllowedCharactersForFloat; // 0x0
	public static readonly string k_AllowedCharactersForInt; // 0x8
	public static readonly string k_DoubleFieldFormatString; // 0x10
	public static readonly string k_FloatFieldFormatString; // 0x18
	public static readonly string k_IntFieldFormatString; // 0x20

	// Methods

	// RVA: 0x1392220 Offset: 0x138E220 VA: 0x1392220
	public static bool TryConvertStringToDouble(string str, out double value, out ExpressionEvaluator.Expression expr) { }

	// RVA: 0x13923B0 Offset: 0x138E3B0 VA: 0x13923B0
	public static bool TryConvertStringToDouble(string str, string initialValueAsString, out double value, out ExpressionEvaluator.Expression expression) { }

	// RVA: 0x13924CC Offset: 0x138E4CC VA: 0x13924CC
	public static bool TryConvertStringToFloat(string str, string initialValueAsString, out float value, out ExpressionEvaluator.Expression expression) { }

	// RVA: 0x13925C4 Offset: 0x138E5C4 VA: 0x13925C4
	public static bool TryConvertStringToLong(string str, out long value, out ExpressionEvaluator.Expression expr) { }

	// RVA: 0x1392648 Offset: 0x138E648 VA: 0x1392648
	public static bool TryConvertStringToLong(string str, string initialValueAsString, out long value, out ExpressionEvaluator.Expression expression) { }

	// RVA: 0x1392764 Offset: 0x138E764 VA: 0x1392764
	public static bool TryConvertStringToULong(string str, out ulong value, out ExpressionEvaluator.Expression expr) { }

	// RVA: 0x13927E8 Offset: 0x138E7E8 VA: 0x13927E8
	public static bool TryConvertStringToULong(string str, string initialValueAsString, out ulong value, out ExpressionEvaluator.Expression expression) { }

	// RVA: 0x1392904 Offset: 0x138E904 VA: 0x1392904
	public static bool TryConvertStringToInt(string str, string initialValueAsString, out int value, out ExpressionEvaluator.Expression expression) { }

	// RVA: 0x13929B0 Offset: 0x138E9B0 VA: 0x13929B0
	public static bool TryConvertStringToUInt(string str, string initialValueAsString, out uint value, out ExpressionEvaluator.Expression expression) { }

	// RVA: 0x1392A54 Offset: 0x138EA54 VA: 0x1392A54
	private static void .cctor() { }
}


// Namespace: UnityEngine
[Flags]
public enum DrivenTransformProperties // TypeDefIndex: 5612
{
	// Fields
	public int value__; // 0x0
	public const DrivenTransformProperties None = 0;
	public const DrivenTransformProperties All = -1;
	public const DrivenTransformProperties AnchoredPositionX = 2;
	public const DrivenTransformProperties AnchoredPositionY = 4;
	public const DrivenTransformProperties AnchoredPositionZ = 8;
	public const DrivenTransformProperties Rotation = 16;
	public const DrivenTransformProperties ScaleX = 32;
	public const DrivenTransformProperties ScaleY = 64;
	public const DrivenTransformProperties ScaleZ = 128;
	public const DrivenTransformProperties AnchorMinX = 256;
	public const DrivenTransformProperties AnchorMinY = 512;
	public const DrivenTransformProperties AnchorMaxX = 1024;
	public const DrivenTransformProperties AnchorMaxY = 2048;
	public const DrivenTransformProperties SizeDeltaX = 4096;
	public const DrivenTransformProperties SizeDeltaY = 8192;
	public const DrivenTransformProperties PivotX = 16384;
	public const DrivenTransformProperties PivotY = 32768;
	public const DrivenTransformProperties AnchoredPosition = 6;
	public const DrivenTransformProperties AnchoredPosition3D = 14;
	public const DrivenTransformProperties Scale = 224;
	public const DrivenTransformProperties AnchorMin = 768;
	public const DrivenTransformProperties AnchorMax = 3072;
	public const DrivenTransformProperties Anchors = 3840;
	public const DrivenTransformProperties SizeDelta = 12288;
	public const DrivenTransformProperties Pivot = 49152;
}


// Namespace: UnityEngine
public struct DrivenRectTransformTracker // TypeDefIndex: 5613
{
	// Methods

	// RVA: 0x1392B34 Offset: 0x138EB34 VA: 0x1392B34
	public void Add(Object driver, RectTransform rectTransform, DrivenTransformProperties drivenProperties) { }

	// RVA: 0x1392B38 Offset: 0x138EB38 VA: 0x1392B38
	public void Clear() { }
}


// Namespace: 
public enum RectTransform.Axis // TypeDefIndex: 5614
{
	// Fields
	public int value__; // 0x0
	public const RectTransform.Axis Horizontal = 0;
	public const RectTransform.Axis Vertical = 1;
}


// Namespace: 
public sealed class RectTransform.ReapplyDrivenProperties : MulticastDelegate // TypeDefIndex: 5615
{
	// Methods

	// RVA: 0x1393A80 Offset: 0x138FA80 VA: 0x1393A80
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1393B1C Offset: 0x138FB1C VA: 0x1393B1C Slot: 12
	public virtual void Invoke(RectTransform driven) { }
}


// Namespace: UnityEngine
public sealed class RectTransform : Transform // TypeDefIndex: 5616
{
	// Fields
	[CompilerGenerated]
	private static RectTransform.ReapplyDrivenProperties reapplyDrivenProperties; // 0x0

	// Properties
	public Rect rect { get; }
	public Vector2 anchorMin { get; set; }
	public Vector2 anchorMax { get; set; }
	public Vector2 anchoredPosition { get; set; }
	public Vector2 sizeDelta { get; set; }
	public Vector2 pivot { get; set; }
	public Vector2 offsetMin { get; set; }
	public Vector2 offsetMax { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1392B3C Offset: 0x138EB3C VA: 0x1392B3C
	public static void add_reapplyDrivenProperties(RectTransform.ReapplyDrivenProperties value) { }

	[CompilerGenerated]
	// RVA: 0x1392BF4 Offset: 0x138EBF4 VA: 0x1392BF4
	public static void remove_reapplyDrivenProperties(RectTransform.ReapplyDrivenProperties value) { }

	// RVA: 0x1392CAC Offset: 0x138ECAC VA: 0x1392CAC
	public Rect get_rect() { }

	// RVA: 0x1392D48 Offset: 0x138ED48 VA: 0x1392D48
	public Vector2 get_anchorMin() { }

	// RVA: 0x1392DD8 Offset: 0x138EDD8 VA: 0x1392DD8
	public void set_anchorMin(Vector2 value) { }

	// RVA: 0x1392E64 Offset: 0x138EE64 VA: 0x1392E64
	public Vector2 get_anchorMax() { }

	// RVA: 0x1392EF4 Offset: 0x138EEF4 VA: 0x1392EF4
	public void set_anchorMax(Vector2 value) { }

	// RVA: 0x1392F80 Offset: 0x138EF80 VA: 0x1392F80
	public Vector2 get_anchoredPosition() { }

	// RVA: 0x1393010 Offset: 0x138F010 VA: 0x1393010
	public void set_anchoredPosition(Vector2 value) { }

	// RVA: 0x139309C Offset: 0x138F09C VA: 0x139309C
	public Vector2 get_sizeDelta() { }

	// RVA: 0x139312C Offset: 0x138F12C VA: 0x139312C
	public void set_sizeDelta(Vector2 value) { }

	// RVA: 0x13931B8 Offset: 0x138F1B8 VA: 0x13931B8
	public Vector2 get_pivot() { }

	// RVA: 0x1393248 Offset: 0x138F248 VA: 0x1393248
	public void set_pivot(Vector2 value) { }

	// RVA: 0x13932D4 Offset: 0x138F2D4 VA: 0x13932D4
	public Vector2 get_offsetMin() { }

	// RVA: 0x1393328 Offset: 0x138F328 VA: 0x1393328
	public void set_offsetMin(Vector2 value) { }

	// RVA: 0x139341C Offset: 0x138F41C VA: 0x139341C
	public void set_offsetMax(Vector2 value) { }

	// RVA: 0x1393518 Offset: 0x138F518 VA: 0x1393518
	public void GetLocalCorners(Vector3[] fourCornersArray) { }

	// RVA: 0x13935F8 Offset: 0x138F5F8 VA: 0x13935F8
	public void GetWorldCorners(Vector3[] fourCornersArray) { }

	// RVA: 0x13937D4 Offset: 0x138F7D4 VA: 0x13937D4
	public void SetSizeWithCurrentAnchors(RectTransform.Axis axis, float size) { }

	[RequiredByNativeCode]
	// RVA: 0x13939D0 Offset: 0x138F9D0 VA: 0x13939D0
	internal static void SendReapplyDrivenProperties(RectTransform driven) { }

	// RVA: 0x13938CC Offset: 0x138F8CC VA: 0x13938CC
	private Vector2 GetParentSize() { }

	// RVA: 0x1393A78 Offset: 0x138FA78 VA: 0x1393A78
	public void .ctor() { }

	// RVA: 0x1392D04 Offset: 0x138ED04 VA: 0x1392D04
	private void get_rect_Injected(out Rect ret) { }

	// RVA: 0x1392D94 Offset: 0x138ED94 VA: 0x1392D94
	private void get_anchorMin_Injected(out Vector2 ret) { }

	// RVA: 0x1392E20 Offset: 0x138EE20 VA: 0x1392E20
	private void set_anchorMin_Injected(ref Vector2 value) { }

	// RVA: 0x1392EB0 Offset: 0x138EEB0 VA: 0x1392EB0
	private void get_anchorMax_Injected(out Vector2 ret) { }

	// RVA: 0x1392F3C Offset: 0x138EF3C VA: 0x1392F3C
	private void set_anchorMax_Injected(ref Vector2 value) { }

	// RVA: 0x1392FCC Offset: 0x138EFCC VA: 0x1392FCC
	private void get_anchoredPosition_Injected(out Vector2 ret) { }

	// RVA: 0x1393058 Offset: 0x138F058 VA: 0x1393058
	private void set_anchoredPosition_Injected(ref Vector2 value) { }

	// RVA: 0x13930E8 Offset: 0x138F0E8 VA: 0x13930E8
	private void get_sizeDelta_Injected(out Vector2 ret) { }

	// RVA: 0x1393174 Offset: 0x138F174 VA: 0x1393174
	private void set_sizeDelta_Injected(ref Vector2 value) { }

	// RVA: 0x1393204 Offset: 0x138F204 VA: 0x1393204
	private void get_pivot_Injected(out Vector2 ret) { }

	// RVA: 0x1393290 Offset: 0x138F290 VA: 0x1393290
	private void set_pivot_Injected(ref Vector2 value) { }
}


// Namespace: 
private class Transform.Enumerator : IEnumerator // TypeDefIndex: 5617
{
	// Fields
	private Transform outer; // 0x10
	private int currentIndex; // 0x18

	// Properties
	public object Current { get; }

	// Methods

	// RVA: 0x1395008 Offset: 0x1391008 VA: 0x1395008
	internal void .ctor(Transform outer) { }

	// RVA: 0x139507C Offset: 0x139107C VA: 0x139507C Slot: 5
	public object get_Current() { }

	// RVA: 0x13950C8 Offset: 0x13910C8 VA: 0x13950C8 Slot: 4
	public bool MoveNext() { }

	// RVA: 0x1395128 Offset: 0x1391128 VA: 0x1395128 Slot: 6
	public void Reset() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class Transform : Component, IEnumerable // TypeDefIndex: 5618
{
	// Properties
	public Vector3 position { get; set; }
	public Vector3 localPosition { get; set; }
	public Vector3 eulerAngles { get; }
	public Vector3 localEulerAngles { get; set; }
	public Vector3 right { get; }
	public Vector3 up { get; set; }
	public Vector3 forward { get; set; }
	public Quaternion rotation { get; set; }
	public Quaternion localRotation { get; set; }
	public Vector3 localScale { get; set; }
	public Transform parent { get; set; }
	internal Transform parentInternal { get; set; }
	public Matrix4x4 worldToLocalMatrix { get; }
	public Matrix4x4 localToWorldMatrix { get; }
	public Transform root { get; }
	public int childCount { get; }
	public Vector3 lossyScale { get; }

	// Methods

	// RVA: 0x1393A7C Offset: 0x138FA7C VA: 0x1393A7C
	protected void .ctor() { }

	// RVA: 0x1393B30 Offset: 0x138FB30 VA: 0x1393B30
	public Vector3 get_position() { }

	// RVA: 0x1393BD0 Offset: 0x138FBD0 VA: 0x1393BD0
	public void set_position(Vector3 value) { }

	// RVA: 0x1393C68 Offset: 0x138FC68 VA: 0x1393C68
	public Vector3 get_localPosition() { }

	// RVA: 0x1393D08 Offset: 0x138FD08 VA: 0x1393D08
	public void set_localPosition(Vector3 value) { }

	// RVA: 0x1393DA0 Offset: 0x138FDA0 VA: 0x1393DA0
	public Vector3 get_eulerAngles() { }

	// RVA: 0x1393E20 Offset: 0x138FE20 VA: 0x1393E20
	public Vector3 get_localEulerAngles() { }

	// RVA: 0x1393EA0 Offset: 0x138FEA0 VA: 0x1393EA0
	public void set_localEulerAngles(Vector3 value) { }

	// RVA: 0x1393F20 Offset: 0x138FF20 VA: 0x1393F20
	public Vector3 get_right() { }

	// RVA: 0x1393F98 Offset: 0x138FF98 VA: 0x1393F98
	public Vector3 get_up() { }

	// RVA: 0x1394010 Offset: 0x1390010 VA: 0x1394010
	public void set_up(Vector3 value) { }

	// RVA: 0x13940E4 Offset: 0x13900E4 VA: 0x13940E4
	public Vector3 get_forward() { }

	// RVA: 0x139415C Offset: 0x139015C VA: 0x139415C
	public void set_forward(Vector3 value) { }

	// RVA: 0x1393DC8 Offset: 0x138FDC8 VA: 0x1393DC8
	public Quaternion get_rotation() { }

	// RVA: 0x1394090 Offset: 0x1390090 VA: 0x1394090
	public void set_rotation(Quaternion value) { }

	// RVA: 0x1393E48 Offset: 0x138FE48 VA: 0x1393E48
	public Quaternion get_localRotation() { }

	// RVA: 0x1393ECC Offset: 0x138FECC VA: 0x1393ECC
	public void set_localRotation(Quaternion value) { }

	// RVA: 0x1394284 Offset: 0x1390284 VA: 0x1394284
	public Vector3 get_localScale() { }

	// RVA: 0x1394324 Offset: 0x1390324 VA: 0x1394324
	public void set_localScale(Vector3 value) { }

	// RVA: 0x1393A3C Offset: 0x138FA3C VA: 0x1393A3C
	public Transform get_parent() { }

	// RVA: 0x13943F8 Offset: 0x13903F8 VA: 0x13943F8
	public void set_parent(Transform value) { }

	// RVA: 0x13943BC Offset: 0x13903BC VA: 0x13943BC
	internal Transform get_parentInternal() { }

	// RVA: 0x13944C4 Offset: 0x13904C4 VA: 0x13944C4
	internal void set_parentInternal(Transform value) { }

	// RVA: 0x139450C Offset: 0x139050C VA: 0x139450C
	private Transform GetParent() { }

	// RVA: 0x1394548 Offset: 0x1390548 VA: 0x1394548
	public void SetParent(Transform p) { }

	// RVA: 0x1394590 Offset: 0x1390590 VA: 0x1394590
	public void SetParent(Transform parent, bool worldPositionStays) { }

	// RVA: 0x13945E4 Offset: 0x13905E4 VA: 0x13945E4
	public Matrix4x4 get_worldToLocalMatrix() { }

	// RVA: 0x1393768 Offset: 0x138F768 VA: 0x1393768
	public Matrix4x4 get_localToWorldMatrix() { }

	// RVA: 0x13946D8 Offset: 0x13906D8 VA: 0x13946D8
	public void SetPositionAndRotation(Vector3 position, Quaternion rotation) { }

	// RVA: 0x139478C Offset: 0x139078C VA: 0x139478C
	public void Translate(Vector3 translation, Space relativeTo) { }

	// RVA: 0x139487C Offset: 0x139087C VA: 0x139487C
	public void Translate(Vector3 translation) { }

	// RVA: 0x1394884 Offset: 0x1390884 VA: 0x1394884
	public void Rotate(Vector3 eulers, Space relativeTo) { }

	// RVA: 0x1394B04 Offset: 0x1390B04 VA: 0x1394B04
	public void Rotate(Vector3 eulers) { }

	// RVA: 0x1394814 Offset: 0x1390814 VA: 0x1394814
	public Vector3 TransformDirection(Vector3 direction) { }

	// RVA: 0x1394B60 Offset: 0x1390B60 VA: 0x1394B60
	public Vector3 TransformVector(Vector3 vector) { }

	// RVA: 0x1394C1C Offset: 0x1390C1C VA: 0x1394C1C
	public Vector3 TransformPoint(Vector3 position) { }

	// RVA: 0x1394CD8 Offset: 0x1390CD8 VA: 0x1394CD8
	public Vector3 InverseTransformPoint(Vector3 position) { }

	// RVA: 0x1394D94 Offset: 0x1390D94 VA: 0x1394D94
	public Transform get_root() { }

	// RVA: 0x1394DD0 Offset: 0x1390DD0 VA: 0x1394DD0
	private Transform GetRoot() { }

	// RVA: 0x1394E0C Offset: 0x1390E0C VA: 0x1394E0C
	public int get_childCount() { }

	// RVA: 0x1394E48 Offset: 0x1390E48 VA: 0x1394E48
	public void SetAsFirstSibling() { }

	// RVA: 0x1394E84 Offset: 0x1390E84 VA: 0x1394E84
	public void SetAsLastSibling() { }

	// RVA: 0x1394EC0 Offset: 0x1390EC0 VA: 0x1394EC0
	public Vector3 get_lossyScale() { }

	// RVA: 0x1394F60 Offset: 0x1390F60 VA: 0x1394F60
	public bool IsChildOf(Transform parent) { }

	// RVA: 0x1394FA4 Offset: 0x1390FA4 VA: 0x1394FA4 Slot: 4
	public IEnumerator GetEnumerator() { }

	// RVA: 0x1395038 Offset: 0x1391038 VA: 0x1395038
	public Transform GetChild(int index) { }

	// RVA: 0x1393B8C Offset: 0x138FB8C VA: 0x1393B8C
	private void get_position_Injected(out Vector3 ret) { }

	// RVA: 0x1393C24 Offset: 0x138FC24 VA: 0x1393C24
	private void set_position_Injected(ref Vector3 value) { }

	// RVA: 0x1393CC4 Offset: 0x138FCC4 VA: 0x1393CC4
	private void get_localPosition_Injected(out Vector3 ret) { }

	// RVA: 0x1393D5C Offset: 0x138FD5C VA: 0x1393D5C
	private void set_localPosition_Injected(ref Vector3 value) { }

	// RVA: 0x1394174 Offset: 0x1390174 VA: 0x1394174
	private void get_rotation_Injected(out Quaternion ret) { }

	// RVA: 0x13941B8 Offset: 0x13901B8 VA: 0x13941B8
	private void set_rotation_Injected(ref Quaternion value) { }

	// RVA: 0x13941FC Offset: 0x13901FC VA: 0x13941FC
	private void get_localRotation_Injected(out Quaternion ret) { }

	// RVA: 0x1394240 Offset: 0x1390240 VA: 0x1394240
	private void set_localRotation_Injected(ref Quaternion value) { }

	// RVA: 0x13942E0 Offset: 0x13902E0 VA: 0x13942E0
	private void get_localScale_Injected(out Vector3 ret) { }

	// RVA: 0x1394378 Offset: 0x1390378 VA: 0x1394378
	private void set_localScale_Injected(ref Vector3 value) { }

	// RVA: 0x1394650 Offset: 0x1390650 VA: 0x1394650
	private void get_worldToLocalMatrix_Injected(out Matrix4x4 ret) { }

	// RVA: 0x1394694 Offset: 0x1390694 VA: 0x1394694
	private void get_localToWorldMatrix_Injected(out Matrix4x4 ret) { }

	// RVA: 0x1394738 Offset: 0x1390738 VA: 0x1394738
	private void SetPositionAndRotation_Injected(ref Vector3 position, ref Quaternion rotation) { }

	// RVA: 0x1394B0C Offset: 0x1390B0C VA: 0x1394B0C
	private void TransformDirection_Injected(ref Vector3 direction, out Vector3 ret) { }

	// RVA: 0x1394BC8 Offset: 0x1390BC8 VA: 0x1394BC8
	private void TransformVector_Injected(ref Vector3 vector, out Vector3 ret) { }

	// RVA: 0x1394C84 Offset: 0x1390C84 VA: 0x1394C84
	private void TransformPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	// RVA: 0x1394D40 Offset: 0x1390D40 VA: 0x1394D40
	private void InverseTransformPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	// RVA: 0x1394F1C Offset: 0x1390F1C VA: 0x1394F1C
	private void get_lossyScale_Injected(out Vector3 ret) { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public sealed class SpriteRenderer : Renderer // TypeDefIndex: 5619
{
	// Fields
	private UnityEvent<SpriteRenderer> m_SpriteChangeEvent; // 0x18

	// Properties
	public Sprite sprite { get; set; }

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1395134 Offset: 0x1391134 VA: 0x1395134
	private void InvokeSpriteChanged() { }

	// RVA: 0x1395228 Offset: 0x1391228 VA: 0x1395228
	public Sprite get_sprite() { }

	// RVA: 0x1395264 Offset: 0x1391264 VA: 0x1395264
	public void set_sprite(Sprite value) { }

	// RVA: 0x13952A8 Offset: 0x13912A8 VA: 0x13952A8
	public void .ctor() { }
}


// Namespace: UnityEngine
public enum SpriteMeshType // TypeDefIndex: 5620
{
	// Fields
	public int value__; // 0x0
	public const SpriteMeshType FullRect = 0;
	public const SpriteMeshType Tight = 1;
}


// Namespace: UnityEngine
public enum SpritePackingRotation // TypeDefIndex: 5621
{
	// Fields
	public int value__; // 0x0
	public const SpritePackingRotation None = 0;
	public const SpritePackingRotation FlipHorizontal = 1;
	public const SpritePackingRotation FlipVertical = 2;
	public const SpritePackingRotation Rotate180 = 3;
	public const SpritePackingRotation Any = 15;
}


// Namespace: UnityEngine
[Serializable]
public struct SecondarySpriteTexture // TypeDefIndex: 5622
{
	// Fields
	public string name; // 0x0
	public Texture2D texture; // 0x8
}


// Namespace: UnityEngine
public sealed class Sprite : Object // TypeDefIndex: 5623
{
	// Properties
	public Bounds bounds { get; }
	public Rect rect { get; }
	public Vector4 border { get; }
	public Texture2D texture { get; }
	public float pixelsPerUnit { get; }
	public Texture2D associatedAlphaSplitTexture { get; }
	public Vector2 pivot { get; }
	public bool packed { get; }
	public SpritePackingRotation packingRotation { get; }
	public Vector2[] vertices { get; }
	public ushort[] triangles { get; }
	public Vector2[] uv { get; }

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13952B0 Offset: 0x13912B0 VA: 0x13952B0
	private void .ctor() { }

	// RVA: 0x1395308 Offset: 0x1391308 VA: 0x1395308
	internal int GetPackingRotation() { }

	// RVA: 0x1395344 Offset: 0x1391344 VA: 0x1395344
	internal int GetPacked() { }

	// RVA: 0x1395380 Offset: 0x1391380 VA: 0x1395380
	internal Vector4 GetInnerUVs() { }

	// RVA: 0x139541C Offset: 0x139141C VA: 0x139541C
	internal Vector4 GetOuterUVs() { }

	// RVA: 0x13954B8 Offset: 0x13914B8 VA: 0x13954B8
	internal Vector4 GetPadding() { }

	// RVA: 0x1395554 Offset: 0x1391554 VA: 0x1395554
	internal static Sprite CreateSprite(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture) { }

	// RVA: 0x1395698 Offset: 0x1391698 VA: 0x1395698
	public Bounds get_bounds() { }

	// RVA: 0x1395744 Offset: 0x1391744 VA: 0x1395744
	public Rect get_rect() { }

	// RVA: 0x13957E0 Offset: 0x13917E0 VA: 0x13957E0
	public Vector4 get_border() { }

	// RVA: 0x139587C Offset: 0x139187C VA: 0x139587C
	public Texture2D get_texture() { }

	// RVA: 0x13958B8 Offset: 0x13918B8 VA: 0x13958B8
	public float get_pixelsPerUnit() { }

	// RVA: 0x13958F4 Offset: 0x13918F4 VA: 0x13958F4
	public Texture2D get_associatedAlphaSplitTexture() { }

	// RVA: 0x1395930 Offset: 0x1391930 VA: 0x1395930
	public Vector2 get_pivot() { }

	// RVA: 0x13959C0 Offset: 0x13919C0 VA: 0x13959C0
	public bool get_packed() { }

	// RVA: 0x1395A08 Offset: 0x1391A08 VA: 0x1395A08
	public SpritePackingRotation get_packingRotation() { }

	// RVA: 0x1395A44 Offset: 0x1391A44 VA: 0x1395A44
	public Vector2[] get_vertices() { }

	// RVA: 0x1395A80 Offset: 0x1391A80 VA: 0x1395A80
	public ushort[] get_triangles() { }

	// RVA: 0x1395ABC Offset: 0x1391ABC VA: 0x1395ABC
	public Vector2[] get_uv() { }

	// RVA: 0x1395AF8 Offset: 0x1391AF8 VA: 0x1395AF8
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape) { }

	// RVA: 0x1395B0C Offset: 0x1391B0C VA: 0x1395B0C
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTextures) { }

	// RVA: 0x1395F88 Offset: 0x1391F88 VA: 0x1395F88
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border) { }

	// RVA: 0x1395F9C Offset: 0x1391F9C VA: 0x1395F9C
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType) { }

	// RVA: 0x1396084 Offset: 0x1392084 VA: 0x1396084
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude) { }

	// RVA: 0x139608C Offset: 0x139208C VA: 0x139608C
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit) { }

	// RVA: 0x1396098 Offset: 0x1392098 VA: 0x1396098
	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot) { }

	// RVA: 0x13953D8 Offset: 0x13913D8 VA: 0x13953D8
	private void GetInnerUVs_Injected(out Vector4 ret) { }

	// RVA: 0x1395474 Offset: 0x1391474 VA: 0x1395474
	private void GetOuterUVs_Injected(out Vector4 ret) { }

	// RVA: 0x1395510 Offset: 0x1391510 VA: 0x1395510
	private void GetPadding_Injected(out Vector4 ret) { }

	// RVA: 0x13955FC Offset: 0x13915FC VA: 0x13955FC
	private static Sprite CreateSprite_Injected(Texture2D texture, ref Rect rect, ref Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, ref Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture) { }

	// RVA: 0x1395700 Offset: 0x1391700 VA: 0x1395700
	private void get_bounds_Injected(out Bounds ret) { }

	// RVA: 0x139579C Offset: 0x139179C VA: 0x139579C
	private void get_rect_Injected(out Rect ret) { }

	// RVA: 0x1395838 Offset: 0x1391838 VA: 0x1395838
	private void get_border_Injected(out Vector4 ret) { }

	// RVA: 0x139597C Offset: 0x139197C VA: 0x139597C
	private void get_pivot_Injected(out Vector2 ret) { }
}


// Namespace: UnityEngine._Scripting.APIUpdating
internal class APIUpdaterRuntimeHelpers // TypeDefIndex: 5624
{
	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13960AC Offset: 0x13920AC VA: 0x13960AC
	internal static bool GetMovedFromAttributeDataForType(Type sourceType, out string assembly, out string nsp, out string klass) { }

	[RequiredByNativeCode]
	// RVA: 0x13961E8 Offset: 0x13921E8 VA: 0x13961E8
	internal static bool GetObsoleteTypeRedirection(Type sourceType, out string assemblyName, out string nsp, out string className) { }
}


// Namespace: UnityEngine.Sprites
public sealed class DataUtility // TypeDefIndex: 5625
{
	// Methods

	// RVA: 0x13964A0 Offset: 0x13924A0 VA: 0x13964A0
	public static Vector4 GetInnerUV(Sprite sprite) { }

	// RVA: 0x13964B0 Offset: 0x13924B0 VA: 0x13964B0
	public static Vector4 GetOuterUV(Sprite sprite) { }

	// RVA: 0x13964C0 Offset: 0x13924C0 VA: 0x13964C0
	public static Vector4 GetPadding(Sprite sprite) { }

	// RVA: 0x13964D0 Offset: 0x13924D0 VA: 0x13964D0
	public static Vector2 GetMinSize(Sprite sprite) { }
}


// Namespace: UnityEngine.U2D
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.U2D")]
[Serializable]
public struct SpriteBone // TypeDefIndex: 5626
{
	// Fields
	[SerializeField]
	private string m_Name; // 0x0
	[SerializeField]
	private string m_Guid; // 0x8
	[SerializeField]
	private Vector3 m_Position; // 0x10
	[SerializeField]
	private Quaternion m_Rotation; // 0x1C
	[SerializeField]
	private float m_Length; // 0x2C
	[SerializeField]
	private int m_ParentId; // 0x30
	[SerializeField]
	private Color32 m_Color; // 0x34
}


// Namespace: UnityEngine.U2D
public class SpriteAtlasManager // TypeDefIndex: 5627
{
	// Fields
	[CompilerGenerated]
	private static Action<string, Action<SpriteAtlas>> atlasRequested; // 0x0
	[CompilerGenerated]
	private static Action<SpriteAtlas> atlasRegistered; // 0x8

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1396520 Offset: 0x1392520 VA: 0x1396520
	private static bool RequestAtlas(string tag) { }

	[CompilerGenerated]
	// RVA: 0x13965D4 Offset: 0x13925D4 VA: 0x13965D4
	public static void add_atlasRegistered(Action<SpriteAtlas> value) { }

	[CompilerGenerated]
	// RVA: 0x13966A4 Offset: 0x13926A4 VA: 0x13966A4
	public static void remove_atlasRegistered(Action<SpriteAtlas> value) { }

	[RequiredByNativeCode]
	// RVA: 0x1396774 Offset: 0x1392774 VA: 0x1396774
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas) { }

	// RVA: 0x13967E0 Offset: 0x13927E0 VA: 0x13967E0
	internal static void Register(SpriteAtlas spriteAtlas) { }
}


// Namespace: UnityEngine.U2D
public class SpriteAtlas : Object // TypeDefIndex: 5628
{
	// Methods

	// RVA: 0x139681C Offset: 0x139281C VA: 0x139681C
	public bool CanBindTo(Sprite sprite) { }
}


// Namespace: UnityEngine.Events
[Serializable]
public enum PersistentListenerMode // TypeDefIndex: 5629
{
	// Fields
	public int value__; // 0x0
	public const PersistentListenerMode EventDefined = 0;
	public const PersistentListenerMode Void = 1;
	public const PersistentListenerMode Object = 2;
	public const PersistentListenerMode Int = 3;
	public const PersistentListenerMode Float = 4;
	public const PersistentListenerMode String = 5;
	public const PersistentListenerMode Bool = 6;
}


// Namespace: UnityEngine.Events
internal class UnityEventTools // TypeDefIndex: 5630
{
	// Methods

	// RVA: 0x1396860 Offset: 0x1392860 VA: 0x1396860
	internal static string TidyAssemblyTypeName(string assemblyTypeName) { }
}


// Namespace: UnityEngine.Events
[Serializable]
internal class ArgumentCache : ISerializationCallbackReceiver // TypeDefIndex: 5631
{
	// Fields
	[SerializeField]
	[FormerlySerializedAs("objectArgument")]
	private Object m_ObjectArgument; // 0x10
	[SerializeField]
	[FormerlySerializedAs("objectArgumentAssemblyTypeName")]
	private string m_ObjectArgumentAssemblyTypeName; // 0x18
	[SerializeField]
	[FormerlySerializedAs("intArgument")]
	private int m_IntArgument; // 0x20
	[FormerlySerializedAs("floatArgument")]
	[SerializeField]
	private float m_FloatArgument; // 0x24
	[FormerlySerializedAs("stringArgument")]
	[SerializeField]
	private string m_StringArgument; // 0x28
	[SerializeField]
	private bool m_BoolArgument; // 0x30

	// Properties
	public Object unityObjectArgument { get; }
	public string unityObjectArgumentAssemblyTypeName { get; }
	public int intArgument { get; }
	public float floatArgument { get; }
	public string stringArgument { get; }
	public bool boolArgument { get; }

	// Methods

	// RVA: 0x1396A8C Offset: 0x1392A8C VA: 0x1396A8C
	public Object get_unityObjectArgument() { }

	// RVA: 0x1396A94 Offset: 0x1392A94 VA: 0x1396A94
	public string get_unityObjectArgumentAssemblyTypeName() { }

	// RVA: 0x1396A9C Offset: 0x1392A9C VA: 0x1396A9C
	public int get_intArgument() { }

	// RVA: 0x1396AA4 Offset: 0x1392AA4 VA: 0x1396AA4
	public float get_floatArgument() { }

	// RVA: 0x1396AAC Offset: 0x1392AAC VA: 0x1396AAC
	public string get_stringArgument() { }

	// RVA: 0x1396AB4 Offset: 0x1392AB4 VA: 0x1396AB4
	public bool get_boolArgument() { }

	// RVA: 0x1396ABC Offset: 0x1392ABC VA: 0x1396ABC Slot: 4
	public void OnBeforeSerialize() { }

	// RVA: 0x1396AD8 Offset: 0x1392AD8 VA: 0x1396AD8 Slot: 5
	public void OnAfterDeserialize() { }

	// RVA: 0x1396AF4 Offset: 0x1392AF4 VA: 0x1396AF4
	public void .ctor() { }
}


// Namespace: UnityEngine.Events
internal abstract class BaseInvokableCall // TypeDefIndex: 5632
{
	// Methods

	// RVA: 0x1396AFC Offset: 0x1392AFC VA: 0x1396AFC
	protected void .ctor() { }

	// RVA: 0x1396B04 Offset: 0x1392B04 VA: 0x1396B04
	protected void .ctor(object target, MethodInfo function) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Invoke(object[] args);

	// RVA: -1 Offset: -1
	protected static void ThrowOnInvalidArg<T>(object arg) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB78E64 Offset: 0xB74E64 VA: 0xB78E64
	|-BaseInvokableCall.ThrowOnInvalidArg<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1396BF8 Offset: 0x1392BF8 VA: 0x1396BF8
	protected static bool AllowInvoke(Delegate delegate) { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool Find(object targetObj, MethodInfo method);
}


// Namespace: UnityEngine.Events
internal class InvokableCall : BaseInvokableCall // TypeDefIndex: 5633
{
	// Fields
	[CompilerGenerated]
	private UnityAction Delegate; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x1396C9C Offset: 0x1392C9C VA: 0x1396C9C
	private void add_Delegate(UnityAction value) { }

	[CompilerGenerated]
	// RVA: 0x1396D38 Offset: 0x1392D38 VA: 0x1396D38
	private void remove_Delegate(UnityAction value) { }

	// RVA: 0x1396DD4 Offset: 0x1392DD4 VA: 0x1396DD4
	public void .ctor(object target, MethodInfo theFunction) { }

	// RVA: 0x1396EBC Offset: 0x1392EBC VA: 0x1396EBC
	public void .ctor(UnityAction action) { }

	// RVA: 0x1396EE8 Offset: 0x1392EE8 VA: 0x1396EE8 Slot: 4
	public override void Invoke(object[] args) { }

	// RVA: 0x1396F24 Offset: 0x1392F24 VA: 0x1396F24
	public void Invoke() { }

	// RVA: 0x1396F60 Offset: 0x1392F60 VA: 0x1396F60 Slot: 5
	public override bool Find(object targetObj, MethodInfo method) { }
}


// Namespace: UnityEngine.Events
internal class InvokableCall<T1> : BaseInvokableCall // TypeDefIndex: 5634
{
	// Fields
	[CompilerGenerated]
	private UnityAction<T1> Delegate; // 0x0

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected void add_Delegate(UnityAction<T1> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC252A0 Offset: 0xC212A0 VA: 0xC252A0
	|-InvokableCall<__Il2CppFullySharedGenericType>.add_Delegate
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	protected void remove_Delegate(UnityAction<T1> value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2534C Offset: 0xC2134C VA: 0xC2534C
	|-InvokableCall<__Il2CppFullySharedGenericType>.remove_Delegate
	*/

	// RVA: -1 Offset: -1
	public void .ctor(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC253F8 Offset: 0xC213F8 VA: 0xC253F8
	|-InvokableCall<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(UnityAction<T1> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC254FC Offset: 0xC214FC VA: 0xC254FC
	|-InvokableCall<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public override void Invoke(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC25538 Offset: 0xC21538 VA: 0xC25538
	|-InvokableCall<__Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public virtual void Invoke(T1 args0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC25694 Offset: 0xC21694 VA: 0xC25694
	|-InvokableCall<__Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public override bool Find(object targetObj, MethodInfo method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2578C Offset: 0xC2178C VA: 0xC2578C
	|-InvokableCall<__Il2CppFullySharedGenericType>.Find
	*/
}


// Namespace: UnityEngine.Events
internal class InvokableCall<T1, T2> : BaseInvokableCall // TypeDefIndex: 5635
{
	// Fields
	[CompilerGenerated]
	private UnityAction<T1, T2> Delegate; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC257D8 Offset: 0xC217D8 VA: 0xC257D8
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public override void Invoke(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2590C Offset: 0xC2190C VA: 0xC2590C
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1
	public void Invoke(T1 args0, T2 args1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC25B00 Offset: 0xC21B00 VA: 0xC25B00
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public override bool Find(object targetObj, MethodInfo method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC25C54 Offset: 0xC21C54 VA: 0xC25C54
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Find
	*/
}


// Namespace: UnityEngine.Events
internal class InvokableCall<T1, T2, T3> : BaseInvokableCall // TypeDefIndex: 5636
{
	// Fields
	[CompilerGenerated]
	private UnityAction<T1, T2, T3> Delegate; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC25CA0 Offset: 0xC21CA0 VA: 0xC25CA0
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public override void Invoke(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC25DD4 Offset: 0xC21DD4 VA: 0xC25DD4
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public override bool Find(object targetObj, MethodInfo method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC26058 Offset: 0xC22058 VA: 0xC26058
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Find
	*/
}


// Namespace: UnityEngine.Events
internal class InvokableCall<T1, T2, T3, T4> : BaseInvokableCall // TypeDefIndex: 5637
{
	// Fields
	[CompilerGenerated]
	private UnityAction<T1, T2, T3, T4> Delegate; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC260A4 Offset: 0xC220A4 VA: 0xC260A4
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public override void Invoke(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC261D8 Offset: 0xC221D8 VA: 0xC261D8
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public override bool Find(object targetObj, MethodInfo method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC264F4 Offset: 0xC224F4 VA: 0xC264F4
	|-InvokableCall<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Find
	*/
}


// Namespace: UnityEngine.Events
internal class CachedInvokableCall<T> : InvokableCall<T> // TypeDefIndex: 5638
{
	// Fields
	private readonly T m_Arg1; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(Object target, MethodInfo theFunction, T argument) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE14C0 Offset: 0xBDD4C0 VA: 0xBE14C0
	|-CachedInvokableCall<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public override void Invoke(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE1590 Offset: 0xBDD590 VA: 0xBE1590
	|-CachedInvokableCall<__Il2CppFullySharedGenericType>.Invoke
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public override void Invoke(T arg0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE1678 Offset: 0xBDD678 VA: 0xBE1678
	|-CachedInvokableCall<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
public enum UnityEventCallState // TypeDefIndex: 5639
{
	// Fields
	public int value__; // 0x0
	public const UnityEventCallState Off = 0;
	public const UnityEventCallState EditorAndRuntime = 1;
	public const UnityEventCallState RuntimeOnly = 2;
}


// Namespace: UnityEngine.Events
[Serializable]
internal class PersistentCall : ISerializationCallbackReceiver // TypeDefIndex: 5640
{
	// Fields
	[SerializeField]
	[FormerlySerializedAs("instance")]
	private Object m_Target; // 0x10
	[SerializeField]
	private string m_TargetAssemblyTypeName; // 0x18
	[FormerlySerializedAs("methodName")]
	[SerializeField]
	private string m_MethodName; // 0x20
	[SerializeField]
	[FormerlySerializedAs("mode")]
	private PersistentListenerMode m_Mode; // 0x28
	[SerializeField]
	[FormerlySerializedAs("arguments")]
	private ArgumentCache m_Arguments; // 0x30
	[FormerlySerializedAs("enabled")]
	[FormerlySerializedAs("m_Enabled")]
	[SerializeField]
	private UnityEventCallState m_CallState; // 0x38

	// Properties
	public Object target { get; }
	public string targetAssemblyTypeName { get; }
	public string methodName { get; }
	public PersistentListenerMode mode { get; }
	public ArgumentCache arguments { get; }

	// Methods

	// RVA: 0x1396FAC Offset: 0x1392FAC VA: 0x1396FAC
	public Object get_target() { }

	// RVA: 0x1396FB4 Offset: 0x1392FB4 VA: 0x1396FB4
	public string get_targetAssemblyTypeName() { }

	// RVA: 0x139705C Offset: 0x139305C VA: 0x139705C
	public string get_methodName() { }

	// RVA: 0x1397064 Offset: 0x1393064 VA: 0x1397064
	public PersistentListenerMode get_mode() { }

	// RVA: 0x139706C Offset: 0x139306C VA: 0x139706C
	public ArgumentCache get_arguments() { }

	// RVA: 0x1397074 Offset: 0x1393074 VA: 0x1397074
	public bool IsValid() { }

	// RVA: 0x13970B0 Offset: 0x13930B0 VA: 0x13970B0
	public BaseInvokableCall GetRuntimeCall(UnityEventBase theEvent) { }

	// RVA: 0x1397558 Offset: 0x1393558 VA: 0x1397558
	private static BaseInvokableCall GetObjectCall(Object target, MethodInfo method, ArgumentCache arguments) { }

	// RVA: 0x1397984 Offset: 0x1393984 VA: 0x1397984 Slot: 4
	public void OnBeforeSerialize() { }

	// RVA: 0x13979A0 Offset: 0x13939A0 VA: 0x13979A0 Slot: 5
	public void OnAfterDeserialize() { }

	// RVA: 0x13979BC Offset: 0x13939BC VA: 0x13979BC
	public void .ctor() { }
}


// Namespace: UnityEngine.Events
[Serializable]
internal class PersistentCallGroup // TypeDefIndex: 5641
{
	// Fields
	[SerializeField]
	[FormerlySerializedAs("m_Listeners")]
	private List<PersistentCall> m_Calls; // 0x10

	// Methods

	// RVA: 0x1397A28 Offset: 0x1393A28 VA: 0x1397A28
	public void .ctor() { }

	// RVA: 0x1397AA8 Offset: 0x1393AA8 VA: 0x1397AA8
	public void Initialize(InvokableCallList invokableList, UnityEventBase unityEventBase) { }
}


// Namespace: UnityEngine.Events
internal class InvokableCallList // TypeDefIndex: 5642
{
	// Fields
	private readonly List<BaseInvokableCall> m_PersistentCalls; // 0x10
	private readonly List<BaseInvokableCall> m_RuntimeCalls; // 0x18
	private List<BaseInvokableCall> m_ExecutingCalls; // 0x20
	private bool m_NeedsUpdate; // 0x28

	// Methods

	// RVA: 0x1397C5C Offset: 0x1393C5C VA: 0x1397C5C
	public void AddPersistentInvokableCall(BaseInvokableCall call) { }

	// RVA: 0x1397CC0 Offset: 0x1393CC0 VA: 0x1397CC0
	public void AddListener(BaseInvokableCall call) { }

	// RVA: 0x1397D24 Offset: 0x1393D24 VA: 0x1397D24
	public void RemoveListener(object targetObj, MethodInfo method) { }

	// RVA: 0x1397F64 Offset: 0x1393F64 VA: 0x1397F64
	public void ClearPersistent() { }

	// RVA: 0x1398050 Offset: 0x1394050 VA: 0x1398050
	public List<BaseInvokableCall> PrepareInvoke() { }

	// RVA: 0x1398134 Offset: 0x1394134 VA: 0x1398134
	public void .ctor() { }
}


// Namespace: UnityEngine.Events
[UsedByNativeCode]
[Serializable]
public abstract class UnityEventBase : ISerializationCallbackReceiver // TypeDefIndex: 5643
{
	// Fields
	private InvokableCallList m_Calls; // 0x10
	[SerializeField]
	[FormerlySerializedAs("m_PersistentListeners")]
	private PersistentCallGroup m_PersistentCalls; // 0x18
	private bool m_CallsDirty; // 0x20

	// Methods

	// RVA: 0x13981E8 Offset: 0x13941E8 VA: 0x13981E8
	protected void .ctor() { }

	// RVA: 0x1398280 Offset: 0x1394280 VA: 0x1398280 Slot: 4
	private void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize() { }

	// RVA: 0x13982AC Offset: 0x13942AC VA: 0x13982AC Slot: 5
	private void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize() { }

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract MethodInfo FindMethod_Impl(string name, Type targetObjType);

	// RVA: -1 Offset: -1 Slot: 7
	internal abstract BaseInvokableCall GetDelegate(object target, MethodInfo theFunction);

	// RVA: 0x139738C Offset: 0x139338C VA: 0x139738C
	internal MethodInfo FindMethod(PersistentCall call) { }

	// RVA: 0x13982B0 Offset: 0x13942B0 VA: 0x13982B0
	internal MethodInfo FindMethod(string name, Type listenerType, PersistentListenerMode mode, Type argumentType) { }

	// RVA: 0x1398284 Offset: 0x1394284 VA: 0x1398284
	private void DirtyPersistentCalls() { }

	// RVA: 0x1398764 Offset: 0x1394764 VA: 0x1398764
	private void RebuildPersistentCallsIfNeeded() { }

	// RVA: 0x1398798 Offset: 0x1394798 VA: 0x1398798
	internal void AddCall(BaseInvokableCall call) { }

	// RVA: 0x13987B0 Offset: 0x13947B0 VA: 0x13987B0
	protected void RemoveListener(object targetObj, MethodInfo method) { }

	// RVA: 0x13987C8 Offset: 0x13947C8 VA: 0x13987C8
	internal List<BaseInvokableCall> PrepareInvoke() { }

	// RVA: 0x13987E8 Offset: 0x13947E8 VA: 0x13987E8 Slot: 3
	public override string ToString() { }

	// RVA: 0x139857C Offset: 0x139457C VA: 0x139857C
	public static MethodInfo GetValidMethodInfo(Type objectType, string functionName, Type[] argumentTypes) { }
}


// Namespace: UnityEngine.Events
public sealed class UnityAction : MulticastDelegate // TypeDefIndex: 5644
{
	// Methods

	// RVA: 0x1398F84 Offset: 0x1394F84 VA: 0x1398F84
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x139900C Offset: 0x139500C VA: 0x139900C Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine.Events
[Serializable]
public class UnityEvent : UnityEventBase // TypeDefIndex: 5645
{
	// Fields
	private object[] m_InvokeArray; // 0x28

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x1399020 Offset: 0x1395020 VA: 0x1399020
	public void .ctor() { }

	// RVA: 0x139902C Offset: 0x139502C VA: 0x139902C
	public void AddListener(UnityAction call) { }

	// RVA: 0x13990AC Offset: 0x13950AC VA: 0x13990AC
	public void RemoveListener(UnityAction call) { }

	// RVA: 0x13990EC Offset: 0x13950EC VA: 0x13990EC Slot: 6
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType) { }

	// RVA: 0x1399154 Offset: 0x1395154 VA: 0x1399154 Slot: 7
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction) { }

	// RVA: 0x1399050 Offset: 0x1395050 VA: 0x1399050
	private static BaseInvokableCall GetDelegate(UnityAction action) { }

	// RVA: 0x13991C0 Offset: 0x13951C0 VA: 0x13991C0
	public void Invoke() { }
}


// Namespace: UnityEngine.Events
public sealed class UnityAction<T0> : MulticastDelegate // TypeDefIndex: 5646
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7A6F4 Offset: 0xC766F4 VA: 0xC7A6F4
	|-UnityAction<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(T0 arg0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7A7F4 Offset: 0xC767F4 VA: 0xC7A7F4
	|-UnityAction<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
[Serializable]
public class UnityEvent<T0> : UnityEventBase // TypeDefIndex: 5647
{
	// Fields
	private object[] m_InvokeArray; // 0x0

	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AB50 Offset: 0xC76B50 VA: 0xC7AB50
	|-UnityEvent<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void AddListener(UnityAction<T0> call) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AB5C Offset: 0xC76B5C VA: 0xC7AB5C
	|-UnityEvent<__Il2CppFullySharedGenericType>.AddListener
	*/

	// RVA: -1 Offset: -1
	public void RemoveListener(UnityAction<T0> call) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AB98 Offset: 0xC76B98 VA: 0xC7AB98
	|-UnityEvent<__Il2CppFullySharedGenericType>.RemoveListener
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7ABDC Offset: 0xC76BDC VA: 0xC7ABDC
	|-UnityEvent<__Il2CppFullySharedGenericType>.FindMethod_Impl
	*/

	// RVA: -1 Offset: -1 Slot: 7
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7ACD4 Offset: 0xC76CD4 VA: 0xC7ACD4
	|-UnityEvent<__Il2CppFullySharedGenericType>.GetDelegate
	*/

	// RVA: -1 Offset: -1
	private static BaseInvokableCall GetDelegate(UnityAction<T0> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AD30 Offset: 0xC76D30 VA: 0xC7AD30
	|-UnityEvent<__Il2CppFullySharedGenericType>.GetDelegate
	*/

	// RVA: -1 Offset: -1
	public void Invoke(T0 arg0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7ADB0 Offset: 0xC76DB0 VA: 0xC7ADB0
	|-UnityEvent<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
public sealed class UnityAction<T0, T1> : MulticastDelegate // TypeDefIndex: 5648
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7A808 Offset: 0xC76808 VA: 0xC7A808
	|-UnityAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(T0 arg0, T1 arg1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7A90C Offset: 0xC7690C VA: 0xC7A90C
	|-UnityAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
[Serializable]
public class UnityEvent<T0, T1> : UnityEventBase // TypeDefIndex: 5649
{
	// Fields
	private object[] m_InvokeArray; // 0x0

	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B0BC Offset: 0xC770BC VA: 0xC7B0BC
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B0C8 Offset: 0xC770C8 VA: 0xC7B0C8
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.FindMethod_Impl
	*/

	// RVA: -1 Offset: -1 Slot: 7
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B200 Offset: 0xC77200 VA: 0xC7B200
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.GetDelegate
	*/

	// RVA: -1 Offset: -1
	public void Invoke(T0 arg0, T1 arg1) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B25C Offset: 0xC7725C VA: 0xC7B25C
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
public sealed class UnityAction<T0, T1, T2> : MulticastDelegate // TypeDefIndex: 5650
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7A920 Offset: 0xC76920 VA: 0xC7A920
	|-UnityAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(T0 arg0, T1 arg1, T2 arg2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AA24 Offset: 0xC76A24 VA: 0xC7AA24
	|-UnityAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
[Serializable]
public class UnityEvent<T0, T1, T2> : UnityEventBase // TypeDefIndex: 5651
{
	// Fields
	private object[] m_InvokeArray; // 0x0

	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B61C Offset: 0xC7761C VA: 0xC7B61C
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B628 Offset: 0xC77628 VA: 0xC7B628
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.FindMethod_Impl
	*/

	// RVA: -1 Offset: -1 Slot: 7
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B7A0 Offset: 0xC777A0 VA: 0xC7B7A0
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.GetDelegate
	*/
}


// Namespace: UnityEngine.Events
public sealed class UnityAction<T0, T1, T2, T3> : MulticastDelegate // TypeDefIndex: 5652
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AA38 Offset: 0xC76A38 VA: 0xC7AA38
	|-UnityAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7AB3C Offset: 0xC76B3C VA: 0xC7AB3C
	|-UnityAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.Events
[Serializable]
public class UnityEvent<T0, T1, T2, T3> : UnityEventBase // TypeDefIndex: 5653
{
	// Fields
	private object[] m_InvokeArray; // 0x0

	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B7FC Offset: 0xC777FC VA: 0xC7B7FC
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 6
	protected override MethodInfo FindMethod_Impl(string name, Type targetObjType) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B808 Offset: 0xC77808 VA: 0xC7B808
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.FindMethod_Impl
	*/

	// RVA: -1 Offset: -1 Slot: 7
	internal override BaseInvokableCall GetDelegate(object target, MethodInfo theFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7B9C0 Offset: 0xC779C0 VA: 0xC7B9C0
	|-UnityEvent<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>.GetDelegate
	*/
}


// Namespace: UnityEngine.Serialization
[Usage(256, AllowMultiple = True, Inherited = False)]
[RequiredByNativeCode]
public class FormerlySerializedAsAttribute : Attribute // TypeDefIndex: 5654
{
	// Fields
	private string m_oldName; // 0x10

	// Methods

	// RVA: 0x1399364 Offset: 0x1395364 VA: 0x1399364
	public void .ctor(string oldName) { }
}


// Namespace: UnityEngine.Scripting
[Usage(6141, Inherited = False)]
[RequiredByNativeCode]
public class PreserveAttribute : Attribute // TypeDefIndex: 5655
{
	// Methods

	// RVA: 0x139938C Offset: 0x139538C VA: 0x139938C
	public void .ctor() { }
}


// Namespace: UnityEngine.Scripting.APIUpdating
internal struct MovedFromAttributeData // TypeDefIndex: 5656
{
	// Fields
	public string className; // 0x0
	public string nameSpace; // 0x8
	public string assembly; // 0x10
	public bool classHasChanged; // 0x18
	public bool nameSpaceHasChanged; // 0x19
	public bool assemblyHasChanged; // 0x1A
	public bool autoUdpateAPI; // 0x1B

	// Methods

	// RVA: 0x1399394 Offset: 0x1395394 VA: 0x1399394
	public void Set(bool autoUpdateAPI, string sourceNamespace, string sourceAssembly, string sourceClassName) { }
}


// Namespace: UnityEngine.Scripting.APIUpdating
[Usage(5148)]
public class MovedFromAttribute : Attribute // TypeDefIndex: 5657
{
	// Fields
	internal MovedFromAttributeData data; // 0x10

	// Methods

	// RVA: 0x13993CC Offset: 0x13953CC VA: 0x13993CC
	public void .ctor(bool autoUpdateAPI, string sourceNamespace, string sourceAssembly, string sourceClassName) { }

	// RVA: 0x1399438 Offset: 0x1395438 VA: 0x1399438
	public void .ctor(string sourceNamespace) { }
}


// Namespace: UnityEngine.SceneManagement
[Serializable]
public struct Scene // TypeDefIndex: 5658
{
	// Fields
	[SerializeField]
	private int m_Handle; // 0x0

	// Properties
	public int handle { get; }
	public string name { get; }
	public int buildIndex { get; }

	// Methods

	// RVA: 0x139947C Offset: 0x139547C VA: 0x139947C
	private static string GetNameInternal(int sceneHandle) { }

	// RVA: 0x13994B8 Offset: 0x13954B8 VA: 0x13994B8
	private static int GetBuildIndexInternal(int sceneHandle) { }

	// RVA: 0x13994F4 Offset: 0x13954F4 VA: 0x13994F4
	public int get_handle() { }

	// RVA: 0x13994FC Offset: 0x13954FC VA: 0x13994FC
	public string get_name() { }

	// RVA: 0x1399538 Offset: 0x1395538 VA: 0x1399538
	public int get_buildIndex() { }

	// RVA: 0x1399574 Offset: 0x1395574 VA: 0x1399574 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x139957C Offset: 0x139557C VA: 0x139957C Slot: 0
	public override bool Equals(object other) { }
}


// Namespace: UnityEngine.SceneManagement
internal static class SceneManagerAPIInternal // TypeDefIndex: 5659
{
	// Methods

	// RVA: 0x13995F4 Offset: 0x13955F4 VA: 0x13995F4
	public static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame) { }

	// RVA: 0x1399654 Offset: 0x1395654 VA: 0x1399654
	private static AsyncOperation LoadSceneAsyncNameIndexInternal_Injected(string sceneName, int sceneBuildIndex, ref LoadSceneParameters parameters, bool mustCompleteNextFrame) { }
}


// Namespace: UnityEngine.SceneManagement
public class SceneManagerAPI // TypeDefIndex: 5660
{
	// Fields
	private static SceneManagerAPI s_DefaultAPI; // 0x0
	[CompilerGenerated]
	private static SceneManagerAPI <overrideAPI>k__BackingField; // 0x8

	// Properties
	internal static SceneManagerAPI ActiveAPI { get; }
	public static SceneManagerAPI overrideAPI { get; }

	// Methods

	// RVA: 0x13996B0 Offset: 0x13956B0 VA: 0x13996B0
	internal static SceneManagerAPI get_ActiveAPI() { }

	[CompilerGenerated]
	// RVA: 0x1399758 Offset: 0x1395758 VA: 0x1399758
	public static SceneManagerAPI get_overrideAPI() { }

	// RVA: 0x13997B0 Offset: 0x13957B0 VA: 0x13997B0
	protected internal void .ctor() { }

	// RVA: 0x13997B8 Offset: 0x13957B8 VA: 0x13997B8 Slot: 4
	protected internal virtual AsyncOperation LoadSceneAsyncByNameOrIndex(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame) { }

	// RVA: 0x1399818 Offset: 0x1395818 VA: 0x1399818 Slot: 5
	protected internal virtual AsyncOperation LoadFirstScene(bool mustLoadAsync) { }

	// RVA: 0x1399820 Offset: 0x1395820 VA: 0x1399820
	private static void .cctor() { }
}


// Namespace: UnityEngine.SceneManagement
[RequiredByNativeCode]
public class SceneManager // TypeDefIndex: 5661
{
	// Fields
	internal static bool s_AllowLoadScene; // 0x0
	[CompilerGenerated]
	private static UnityAction<Scene, LoadSceneMode> sceneLoaded; // 0x8
	[CompilerGenerated]
	private static UnityAction<Scene> sceneUnloaded; // 0x10
	[CompilerGenerated]
	private static UnityAction<Scene, Scene> activeSceneChanged; // 0x18

	// Properties
	public static int sceneCount { get; }

	// Methods

	// RVA: 0x139987C Offset: 0x139587C VA: 0x139987C
	public static int get_sceneCount() { }

	// RVA: 0x13998A4 Offset: 0x13958A4 VA: 0x13998A4
	public static Scene GetActiveScene() { }

	// RVA: 0x139995C Offset: 0x139595C VA: 0x139995C
	public static Scene GetSceneAt(int index) { }

	// RVA: 0x1399A2C Offset: 0x1395A2C VA: 0x1399A2C
	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame) { }

	[RequiredByNativeCode]
	// RVA: 0x1399B08 Offset: 0x1395B08 VA: 0x1399B08
	internal static AsyncOperation LoadFirstScene_Internal(bool async) { }

	[CompilerGenerated]
	// RVA: 0x1399B70 Offset: 0x1395B70 VA: 0x1399B70
	public static void add_sceneLoaded(UnityAction<Scene, LoadSceneMode> value) { }

	[CompilerGenerated]
	// RVA: 0x1399C64 Offset: 0x1395C64 VA: 0x1399C64
	public static void remove_sceneLoaded(UnityAction<Scene, LoadSceneMode> value) { }

	[CompilerGenerated]
	// RVA: 0x1399D58 Offset: 0x1395D58 VA: 0x1399D58
	public static void add_sceneUnloaded(UnityAction<Scene> value) { }

	[CompilerGenerated]
	// RVA: 0x1399E4C Offset: 0x1395E4C VA: 0x1399E4C
	public static void remove_sceneUnloaded(UnityAction<Scene> value) { }

	[CompilerGenerated]
	// RVA: 0x1399F40 Offset: 0x1395F40 VA: 0x1399F40
	public static void add_activeSceneChanged(UnityAction<Scene, Scene> value) { }

	[CompilerGenerated]
	// RVA: 0x139A034 Offset: 0x1396034 VA: 0x139A034
	public static void remove_activeSceneChanged(UnityAction<Scene, Scene> value) { }

	// RVA: 0x139A128 Offset: 0x1396128 VA: 0x139A128
	public static void LoadScene(string sceneName) { }

	// RVA: 0x139A188 Offset: 0x1396188 VA: 0x139A188
	public static Scene LoadScene(string sceneName, LoadSceneParameters parameters) { }

	[RequiredByNativeCode]
	// RVA: 0x139A228 Offset: 0x1396228 VA: 0x139A228
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode) { }

	[RequiredByNativeCode]
	// RVA: 0x139A2D0 Offset: 0x13962D0 VA: 0x139A2D0
	private static void Internal_SceneUnloaded(Scene scene) { }

	[RequiredByNativeCode]
	// RVA: 0x139A370 Offset: 0x1396370 VA: 0x139A370
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene) { }

	// RVA: 0x139A424 Offset: 0x1396424 VA: 0x139A424
	private static void .cctor() { }

	// RVA: 0x1399920 Offset: 0x1395920 VA: 0x1399920
	private static void GetActiveScene_Injected(out Scene ret) { }

	// RVA: 0x13999E8 Offset: 0x13959E8 VA: 0x13999E8
	private static void GetSceneAt_Injected(int index, out Scene ret) { }
}


// Namespace: UnityEngine.SceneManagement
public enum LoadSceneMode // TypeDefIndex: 5662
{
	// Fields
	public int value__; // 0x0
	public const LoadSceneMode Single = 0;
	public const LoadSceneMode Additive = 1;
}


// Namespace: UnityEngine.SceneManagement
[Flags]
public enum LocalPhysicsMode // TypeDefIndex: 5663
{
	// Fields
	public int value__; // 0x0
	public const LocalPhysicsMode None = 0;
	public const LocalPhysicsMode Physics2D = 1;
	public const LocalPhysicsMode Physics3D = 2;
}


// Namespace: UnityEngine.SceneManagement
[Serializable]
public struct LoadSceneParameters // TypeDefIndex: 5664
{
	// Fields
	[SerializeField]
	private LoadSceneMode m_LoadSceneMode; // 0x0
	[SerializeField]
	private LocalPhysicsMode m_LocalPhysicsMode; // 0x4

	// Methods

	// RVA: 0x139A180 Offset: 0x1396180 VA: 0x139A180
	public void .ctor(LoadSceneMode mode) { }
}


// Namespace: UnityEngine.LowLevel
[MovedFrom("UnityEngine.Experimental.LowLevel")]
[RequiredByNativeCode]
internal struct PlayerLoopSystemInternal // TypeDefIndex: 5665
{
	// Fields
	public Type type; // 0x0
	public PlayerLoopSystem.UpdateFunction updateDelegate; // 0x8
	public IntPtr updateFunction; // 0x10
	public IntPtr loopConditionFunction; // 0x18
	public int numSubSystems; // 0x20
}


// Namespace: 
public sealed class PlayerLoopSystem.UpdateFunction : MulticastDelegate // TypeDefIndex: 5666
{
	// Methods

	// RVA: 0x139A490 Offset: 0x1396490 VA: 0x139A490
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x139A518 Offset: 0x1396518 VA: 0x139A518 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine.LowLevel
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public struct PlayerLoopSystem // TypeDefIndex: 5667
{
	// Fields
	public Type type; // 0x0
	public PlayerLoopSystem[] subSystemList; // 0x8
	public PlayerLoopSystem.UpdateFunction updateDelegate; // 0x10
	public IntPtr updateFunction; // 0x18
	public IntPtr loopConditionFunction; // 0x20

	// Methods

	// RVA: 0x139A470 Offset: 0x1396470 VA: 0x139A470 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.LowLevel
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public class PlayerLoop // TypeDefIndex: 5668
{
	// Methods

	// RVA: 0x139A52C Offset: 0x139652C VA: 0x139A52C
	public static PlayerLoopSystem GetCurrentPlayerLoop() { }

	// RVA: 0x139A754 Offset: 0x1396754 VA: 0x139A754
	public static void SetPlayerLoop(PlayerLoopSystem loop) { }

	// RVA: 0x139A83C Offset: 0x139683C VA: 0x139A83C
	private static int PlayerLoopSystemToInternal(PlayerLoopSystem sys, ref List<PlayerLoopSystemInternal> internalSys) { }

	// RVA: 0x139A5C4 Offset: 0x13965C4 VA: 0x139A5C4
	private static PlayerLoopSystem InternalToPlayerLoopSystem(PlayerLoopSystemInternal[] internalSys, ref int offset) { }

	// RVA: 0x139A59C Offset: 0x139659C VA: 0x139A59C
	private static PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal() { }

	// RVA: 0x139A98C Offset: 0x139698C VA: 0x139A98C
	private static void SetPlayerLoopInternal(PlayerLoopSystemInternal[] loop) { }
}


// Namespace: 
[RequiredByNativeCode]
public struct TimeUpdate.WaitForLastPresentationAndUpdateTime // TypeDefIndex: 5669
{}


// Namespace: UnityEngine.PlayerLoop
[RequiredByNativeCode]
public struct TimeUpdate // TypeDefIndex: 5670
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.ProfilerStartFrame // TypeDefIndex: 5671
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.UpdateCameraMotionVectors // TypeDefIndex: 5672
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.DirectorSampleTime // TypeDefIndex: 5673
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.AsyncUploadTimeSlicedUpdate // TypeDefIndex: 5674
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.SynchronizeState // TypeDefIndex: 5675
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.SynchronizeInputs // TypeDefIndex: 5676
{}


// Namespace: 
[RequiredByNativeCode]
public struct Initialization.XREarlyUpdate // TypeDefIndex: 5677
{}


// Namespace: UnityEngine.PlayerLoop
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
[RequiredByNativeCode]
public struct Initialization // TypeDefIndex: 5678
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.PollPlayerConnection // TypeDefIndex: 5679
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.PollHtcsPlayerConnection // TypeDefIndex: 5680
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.GpuTimestamp // TypeDefIndex: 5681
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.AnalyticsCoreStatsUpdate // TypeDefIndex: 5682
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UnityWebRequestUpdate // TypeDefIndex: 5683
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateStreamingManager // TypeDefIndex: 5684
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ExecuteMainThreadJobs // TypeDefIndex: 5685
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ProcessMouseInWindow // TypeDefIndex: 5686
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ClearIntermediateRenderers // TypeDefIndex: 5687
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ClearLines // TypeDefIndex: 5688
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.PresentBeforeUpdate // TypeDefIndex: 5689
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ResetFrameStatsAfterPresent // TypeDefIndex: 5690
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateAsyncReadbackManager // TypeDefIndex: 5691
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateTextureStreamingManager // TypeDefIndex: 5692
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdatePreloading // TypeDefIndex: 5693
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateContentLoading // TypeDefIndex: 5694
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateAsyncInstantiate // TypeDefIndex: 5695
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.RendererNotifyInvisible // TypeDefIndex: 5696
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.PlayerCleanupCachedData // TypeDefIndex: 5697
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateMainGameViewRect // TypeDefIndex: 5698
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateCanvasRectTransform // TypeDefIndex: 5699
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateInputManager // TypeDefIndex: 5700
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ProcessRemoteInput // TypeDefIndex: 5701
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.XRUpdate // TypeDefIndex: 5702
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ScriptRunDelayedStartupFrame // TypeDefIndex: 5703
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.UpdateKinect // TypeDefIndex: 5704
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.DeliverIosPlatformEvents // TypeDefIndex: 5705
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.DispatchEventQueueEvents // TypeDefIndex: 5706
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.Physics2DEarlyUpdate // TypeDefIndex: 5707
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.PhysicsResetInterpolatedTransformPosition // TypeDefIndex: 5708
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.SpriteAtlasManagerUpdate // TypeDefIndex: 5709
{}


// Namespace: 
[Obsolete("TangoUpdate has been deprecated. Use ARCoreUpdate instead (UnityUpgradable) -> UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate", False)]
[RequiredByNativeCode]
public struct EarlyUpdate.TangoUpdate // TypeDefIndex: 5710
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.ARCoreUpdate // TypeDefIndex: 5711
{}


// Namespace: 
[RequiredByNativeCode]
public struct EarlyUpdate.PerformanceAnalyticsUpdate // TypeDefIndex: 5712
{}


// Namespace: UnityEngine.PlayerLoop
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
public struct EarlyUpdate // TypeDefIndex: 5713
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.ClearLines // TypeDefIndex: 5714
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.DirectorFixedSampleTime // TypeDefIndex: 5715
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.AudioFixedUpdate // TypeDefIndex: 5716
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.ScriptRunBehaviourFixedUpdate // TypeDefIndex: 5717
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.DirectorFixedUpdate // TypeDefIndex: 5718
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.LegacyFixedAnimationUpdate // TypeDefIndex: 5719
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.XRFixedUpdate // TypeDefIndex: 5720
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.PhysicsFixedUpdate // TypeDefIndex: 5721
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.Physics2DFixedUpdate // TypeDefIndex: 5722
{}


// Namespace: 
[RequiredByNativeCode]
private struct FixedUpdate.PhysicsClothFixedUpdate // TypeDefIndex: 5723
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.DirectorFixedUpdatePostPhysics // TypeDefIndex: 5724
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.ScriptRunDelayedFixedFrameRate // TypeDefIndex: 5725
{}


// Namespace: 
[RequiredByNativeCode]
public struct FixedUpdate.NewInputFixedUpdate // TypeDefIndex: 5726
{}


// Namespace: UnityEngine.PlayerLoop
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
public struct FixedUpdate // TypeDefIndex: 5727
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.PhysicsUpdate // TypeDefIndex: 5728
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.Physics2DUpdate // TypeDefIndex: 5729
{}


// Namespace: 
[RequiredByNativeCode]
internal struct PreUpdate.PhysicsClothUpdate // TypeDefIndex: 5730
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.CheckTexFieldInput // TypeDefIndex: 5731
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.IMGUISendQueuedEvents // TypeDefIndex: 5732
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.SendMouseEvents // TypeDefIndex: 5733
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.AIUpdate // TypeDefIndex: 5734
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.WindUpdate // TypeDefIndex: 5735
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.UpdateVideo // TypeDefIndex: 5736
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreUpdate.NewInputUpdate // TypeDefIndex: 5737
{}


// Namespace: UnityEngine.PlayerLoop
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
public struct PreUpdate // TypeDefIndex: 5738
{}


// Namespace: 
[RequiredByNativeCode]
public struct Update.ScriptRunBehaviourUpdate // TypeDefIndex: 5739
{}


// Namespace: 
[RequiredByNativeCode]
public struct Update.DirectorUpdate // TypeDefIndex: 5740
{}


// Namespace: 
[RequiredByNativeCode]
public struct Update.ScriptRunDelayedDynamicFrameRate // TypeDefIndex: 5741
{}


// Namespace: 
[RequiredByNativeCode]
public struct Update.ScriptRunDelayedTasks // TypeDefIndex: 5742
{}


// Namespace: UnityEngine.PlayerLoop
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
[RequiredByNativeCode]
public struct Update // TypeDefIndex: 5743
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.Physics2DLateUpdate // TypeDefIndex: 5744
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.PhysicsLateUpdate // TypeDefIndex: 5745
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.AIUpdatePostScript // TypeDefIndex: 5746
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.DirectorUpdateAnimationBegin // TypeDefIndex: 5747
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.LegacyAnimationUpdate // TypeDefIndex: 5748
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.DirectorUpdateAnimationEnd // TypeDefIndex: 5749
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.DirectorDeferredEvaluate // TypeDefIndex: 5750
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.UIElementsUpdatePanels // TypeDefIndex: 5751
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.UpdateNetworkManager // TypeDefIndex: 5752
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.UpdateMasterServerInterface // TypeDefIndex: 5753
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.EndGraphicsJobsAfterScriptUpdate // TypeDefIndex: 5754
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.ParticleSystemBeginUpdateAll // TypeDefIndex: 5755
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.ScriptRunBehaviourLateUpdate // TypeDefIndex: 5756
{}


// Namespace: 
[RequiredByNativeCode]
public struct PreLateUpdate.ConstraintManagerUpdate // TypeDefIndex: 5757
{}


// Namespace: UnityEngine.PlayerLoop
[RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
public struct PreLateUpdate // TypeDefIndex: 5758
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PlayerSendFrameStarted // TypeDefIndex: 5759
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateRectTransform // TypeDefIndex: 5760
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateCanvasRectTransform // TypeDefIndex: 5761
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PlayerUpdateCanvases // TypeDefIndex: 5762
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateAudio // TypeDefIndex: 5763
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateVideo // TypeDefIndex: 5764
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.DirectorLateUpdate // TypeDefIndex: 5765
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ScriptRunDelayedDynamicFrameRate // TypeDefIndex: 5766
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.VFXUpdate // TypeDefIndex: 5767
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ParticleSystemEndUpdateAll // TypeDefIndex: 5768
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.EndGraphicsJobsAfterScriptLateUpdate // TypeDefIndex: 5769
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateSubstance // TypeDefIndex: 5770
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateCustomRenderTextures // TypeDefIndex: 5771
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.XRPostLateUpdate // TypeDefIndex: 5772
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateAllRenderers // TypeDefIndex: 5773
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateLightProbeProxyVolumes // TypeDefIndex: 5774
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.EnlightenRuntimeUpdate // TypeDefIndex: 5775
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateAllSkinnedMeshes // TypeDefIndex: 5776
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ProcessWebSendMessages // TypeDefIndex: 5777
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.SortingGroupsUpdate // TypeDefIndex: 5778
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateVideoTextures // TypeDefIndex: 5779
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.DirectorRenderImage // TypeDefIndex: 5780
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PlayerEmitCanvasGeometry // TypeDefIndex: 5781
{}


// Namespace: 
[RequiredByNativeCode]
internal struct PostLateUpdate.PlayerRenderUIEBatchModeOffscreen // TypeDefIndex: 5782
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.FinishFrameRendering // TypeDefIndex: 5783
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.BatchModeUpdate // TypeDefIndex: 5784
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PlayerSendFrameComplete // TypeDefIndex: 5785
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateCaptureScreenshot // TypeDefIndex: 5786
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PresentAfterDraw // TypeDefIndex: 5787
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ClearImmediateRenderers // TypeDefIndex: 5788
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.XRPostPresent // TypeDefIndex: 5789
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.UpdateResolution // TypeDefIndex: 5790
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.InputEndFrame // TypeDefIndex: 5791
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.GUIClearEvents // TypeDefIndex: 5792
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ShaderHandleErrors // TypeDefIndex: 5793
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ResetInputAxis // TypeDefIndex: 5794
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ThreadedLoadingDebug // TypeDefIndex: 5795
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ProfilerSynchronizeStats // TypeDefIndex: 5796
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.MemoryFrameMaintenance // TypeDefIndex: 5797
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ExecuteGameCenterCallbacks // TypeDefIndex: 5798
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.XRPreEndFrame // TypeDefIndex: 5799
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ProfilerEndFrame // TypeDefIndex: 5800
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.GraphicsWarmupPreloadedShaders // TypeDefIndex: 5801
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PlayerSendFramePostPresent // TypeDefIndex: 5802
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PhysicsSkinnedClothBeginUpdate // TypeDefIndex: 5803
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.PhysicsSkinnedClothFinishUpdate // TypeDefIndex: 5804
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.TriggerEndOfFrameCallbacks // TypeDefIndex: 5805
{}


// Namespace: 
[RequiredByNativeCode]
public struct PostLateUpdate.ObjectDispatcherPostLateUpdate // TypeDefIndex: 5806
{}


// Namespace: UnityEngine.PlayerLoop
[MovedFrom("UnityEngine.Experimental.PlayerLoop")]
[RequiredByNativeCode]
public struct PostLateUpdate // TypeDefIndex: 5807
{}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class CollectionPool.<>c<TCollection, TItem> // TypeDefIndex: 5808
{
	// Fields
	public static readonly CollectionPool.<>c<TCollection, TItem> <>9; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB804C Offset: 0xBB404C VA: 0xBB804C
	|-CollectionPool.<>c<object, __Il2CppFullySharedGenericType>..cctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8108 Offset: 0xBB4108 VA: 0xBB8108
	|-CollectionPool.<>c<object, __Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal TCollection <.cctor>b__5_0() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8110 Offset: 0xBB4110 VA: 0xBB8110
	|-CollectionPool.<>c<object, __Il2CppFullySharedGenericType>.<.cctor>b__5_0
	*/

	// RVA: -1 Offset: -1
	internal void <.cctor>b__5_1(TCollection l) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB8134 Offset: 0xBB4134 VA: 0xBB8134
	|-CollectionPool.<>c<object, __Il2CppFullySharedGenericType>.<.cctor>b__5_1
	*/
}


// Namespace: UnityEngine.Pool
public class CollectionPool<TCollection, TItem> // TypeDefIndex: 5809
{
	// Fields
	internal static readonly ObjectPool<TCollection> s_Pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static TCollection Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4270 Offset: 0xBE0270 VA: 0xBE4270
	|-CollectionPool<object, __Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	public static PooledObject<TCollection> Get(out TCollection value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4308 Offset: 0xBE0308 VA: 0xBE4308
	|-CollectionPool<object, __Il2CppFullySharedGenericType>.Get
	*/

	// RVA: -1 Offset: -1
	public static void Release(TCollection toRelease) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE43B0 Offset: 0xBE03B0 VA: 0xBE43B0
	|-CollectionPool<object, __Il2CppFullySharedGenericType>.Release
	*/

	// RVA: -1 Offset: -1
	private static void .cctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBE4458 Offset: 0xBE0458 VA: 0xBE4458
	|-CollectionPool<object, __Il2CppFullySharedGenericType>..cctor
	*/
}


// Namespace: UnityEngine.Pool
public interface IObjectPool<T> // TypeDefIndex: 5810
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Release(T element);
}


// Namespace: UnityEngine.Pool
internal interface IPool // TypeDefIndex: 5811
{}


// Namespace: UnityEngine.Pool
public class ObjectPool<T> : IDisposable, IPool, IObjectPool<T> // TypeDefIndex: 5812
{
	// Fields
	internal readonly List<T> m_List; // 0x0
	private readonly Func<T> m_CreateFunc; // 0x0
	private readonly Action<T> m_ActionOnGet; // 0x0
	private readonly Action<T> m_ActionOnRelease; // 0x0
	private readonly Action<T> m_ActionOnDestroy; // 0x0
	private readonly int m_MaxSize; // 0x0
	internal bool m_CollectionCheck; // 0x0
	[CompilerGenerated]
	private int <CountAll>k__BackingField; // 0x0

	// Properties
	public int CountAll { get; set; }
	public int CountInactive { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public int get_CountAll() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC40534 Offset: 0xC3C534 VA: 0xC40534
	|-ObjectPool<object>.get_CountAll
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void set_CountAll(int value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4053C Offset: 0xC3C53C VA: 0xC4053C
	|-ObjectPool<object>.set_CountAll
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public int get_CountInactive() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC40544 Offset: 0xC3C544 VA: 0xC40544
	|-ObjectPool<object>.get_CountInactive
	*/

	// RVA: -1 Offset: -1
	public void .ctor(Func<T> createFunc, Action<T> actionOnGet, Action<T> actionOnRelease, Action<T> actionOnDestroy, bool collectionCheck = True, int defaultCapacity = 10, int maxSize = 10000) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC40560 Offset: 0xC3C560 VA: 0xC40560
	|-ObjectPool<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public T Get() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC406E0 Offset: 0xC3C6E0 VA: 0xC406E0
	|-ObjectPool<object>.Get
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public PooledObject<T> Get(out T v) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC407A4 Offset: 0xC3C7A4 VA: 0xC407A4
	|-ObjectPool<object>.Get
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void Release(T element) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC407D8 Offset: 0xC3C7D8 VA: 0xC407D8
	|-ObjectPool<object>.Release
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC4087C Offset: 0xC3C87C VA: 0xC4087C
	|-ObjectPool<object>.Clear
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public void Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC40A38 Offset: 0xC3CA38 VA: 0xC40A38
	|-ObjectPool<object>.Dispose
	*/
}


// Namespace: UnityEngine.Pool
internal static class PoolManager // TypeDefIndex: 5813
{
	// Fields
	private static readonly List<WeakReference<IPool>> s_WeakPoolReferences; // 0x0

	// Methods

	// RVA: 0x139A9C8 Offset: 0x13969C8 VA: 0x139A9C8
	public static void Register(IPool pool) { }

	// RVA: 0x139AA94 Offset: 0x1396A94 VA: 0x139AA94
	private static void .cctor() { }
}


// Namespace: UnityEngine.Pool
public struct PooledObject<T> : IDisposable // TypeDefIndex: 5814
{
	// Fields
	private readonly T m_ToReturn; // 0x0
	private readonly IObjectPool<T> m_Pool; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(T value, IObjectPool<T> pool) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC44F24 Offset: 0xC40F24 VA: 0xC44F24
	|-PooledObject<object>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 4
	private void System.IDisposable.Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC44F2C Offset: 0xC40F2C VA: 0xC44F2C
	|-PooledObject<object>.System.IDisposable.Dispose
	*/
}


// Namespace: UnityEngine.Networking.PlayerConnection
[Serializable]
public class MessageEventArgs // TypeDefIndex: 5815
{
	// Fields
	public int playerId; // 0x10
	public byte[] data; // 0x18

	// Methods

	// RVA: 0x139AB20 Offset: 0x1396B20 VA: 0x139AB20
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayerConnection.<>c__DisplayClass12_0 // TypeDefIndex: 5816
{
	// Fields
	public Guid messageId; // 0x10

	// Methods

	// RVA: 0x139B054 Offset: 0x1397054 VA: 0x139B054
	public void .ctor() { }

	// RVA: 0x139C5B0 Offset: 0x13985B0 VA: 0x139C5B0
	internal bool <Register>b__0(PlayerEditorConnectionEvents.MessageTypeSubscribers x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayerConnection.<>c__DisplayClass13_0 // TypeDefIndex: 5817
{
	// Fields
	public Guid messageId; // 0x10

	// Methods

	// RVA: 0x139B390 Offset: 0x1397390 VA: 0x139B390
	public void .ctor() { }

	// RVA: 0x139C624 Offset: 0x1398624 VA: 0x139C624
	internal bool <Unregister>b__0(PlayerEditorConnectionEvents.MessageTypeSubscribers x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayerConnection.<>c__DisplayClass20_0 // TypeDefIndex: 5818
{
	// Fields
	public bool msgReceived; // 0x10

	// Methods

	// RVA: 0x139BCB4 Offset: 0x1397CB4 VA: 0x139BCB4
	public void .ctor() { }

	// RVA: 0x139C66C Offset: 0x139866C VA: 0x139C66C
	internal void <BlockUntilRecvMsg>b__0(MessageEventArgs args) { }
}


// Namespace: UnityEngine.Networking.PlayerConnection
[Serializable]
public class PlayerConnection : ScriptableObject // TypeDefIndex: 5819
{
	// Fields
	internal static IPlayerEditorConnectionNative connectionNative; // 0x0
	[SerializeField]
	private PlayerEditorConnectionEvents m_PlayerEditorConnectionEvents; // 0x18
	[SerializeField]
	private List<int> m_connectedPlayers; // 0x20
	private bool m_IsInitilized; // 0x28
	private static PlayerConnection s_Instance; // 0x8

	// Properties
	public static PlayerConnection instance { get; }
	public bool isConnected { get; }

	// Methods

	// RVA: 0x139AB28 Offset: 0x1396B28 VA: 0x139AB28
	public static PlayerConnection get_instance() { }

	// RVA: 0x139AC44 Offset: 0x1396C44 VA: 0x139AC44
	public bool get_isConnected() { }

	// RVA: 0x139ABC0 Offset: 0x1396BC0 VA: 0x139ABC0
	private static PlayerConnection CreateInstance() { }

	// RVA: 0x139AD58 Offset: 0x1396D58 VA: 0x139AD58
	public void OnEnable() { }

	// RVA: 0x139ACE0 Offset: 0x1396CE0 VA: 0x139ACE0
	private IPlayerEditorConnectionNative GetConnectionNativeApi() { }

	// RVA: 0x139AE18 Offset: 0x1396E18 VA: 0x139AE18 Slot: 4
	public void Register(Guid messageId, UnityAction<MessageEventArgs> callback) { }

	// RVA: 0x139B1EC Offset: 0x13971EC VA: 0x139B1EC Slot: 5
	public void Unregister(Guid messageId, UnityAction<MessageEventArgs> callback) { }

	// RVA: 0x139B4F4 Offset: 0x13974F4 VA: 0x139B4F4 Slot: 6
	public void RegisterConnection(UnityAction<int> callback) { }

	// RVA: 0x139B6B0 Offset: 0x13976B0 VA: 0x139B6B0 Slot: 7
	public void RegisterDisconnection(UnityAction<int> callback) { }

	// RVA: 0x139B710 Offset: 0x1397710 VA: 0x139B710 Slot: 8
	public void UnregisterConnection(UnityAction<int> callback) { }

	// RVA: 0x139B770 Offset: 0x1397770 VA: 0x139B770 Slot: 9
	public void UnregisterDisconnection(UnityAction<int> callback) { }

	// RVA: 0x139B7D0 Offset: 0x13977D0 VA: 0x139B7D0 Slot: 10
	public void Send(Guid messageId, byte[] data) { }

	// RVA: 0x139B928 Offset: 0x1397928 VA: 0x139B928 Slot: 11
	public bool TrySend(Guid messageId, byte[] data) { }

	// RVA: 0x139BA80 Offset: 0x1397A80 VA: 0x139BA80
	public bool BlockUntilRecvMsg(Guid messageId, int timeout) { }

	// RVA: 0x139BCBC Offset: 0x1397CBC VA: 0x139BCBC Slot: 12
	public void DisconnectAll() { }

	[RequiredByNativeCode]
	// RVA: 0x139BD58 Offset: 0x1397D58 VA: 0x139BD58
	private static void MessageCallbackInternal(IntPtr data, ulong size, ulong guid, string messageId) { }

	[RequiredByNativeCode]
	// RVA: 0x139C314 Offset: 0x1398314 VA: 0x139C314
	private static void ConnectedCallbackInternal(int playerId) { }

	[RequiredByNativeCode]
	// RVA: 0x139C3B4 Offset: 0x13983B4 VA: 0x139C3B4
	private static void DisconnectedCallback(int playerId) { }

	// RVA: 0x139C454 Offset: 0x1398454 VA: 0x139C454
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class PlayerEditorConnectionEvents.MessageEvent : UnityEvent<MessageEventArgs> // TypeDefIndex: 5820
{
	// Methods

	// RVA: 0x139C714 Offset: 0x1398714 VA: 0x139C714
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class PlayerEditorConnectionEvents.ConnectionChangeEvent : UnityEvent<int> // TypeDefIndex: 5821
{
	// Methods

	// RVA: 0x139C764 Offset: 0x1398764 VA: 0x139C764
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class PlayerEditorConnectionEvents.MessageTypeSubscribers // TypeDefIndex: 5822
{
	// Fields
	[SerializeField]
	private string m_messageTypeId; // 0x10
	public int subscriberCount; // 0x18
	public PlayerEditorConnectionEvents.MessageEvent messageCallback; // 0x20

	// Properties
	public Guid MessageTypeId { get; set; }

	// Methods

	// RVA: 0x139C5F8 Offset: 0x13985F8 VA: 0x139C5F8
	public Guid get_MessageTypeId() { }

	// RVA: 0x139C6E8 Offset: 0x13986E8 VA: 0x139C6E8
	public void set_MessageTypeId(Guid value) { }

	// RVA: 0x139C688 Offset: 0x1398688 VA: 0x139C688
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayerEditorConnectionEvents.<>c__DisplayClass6_0 // TypeDefIndex: 5823
{
	// Fields
	public Guid messageId; // 0x10

	// Methods

	// RVA: 0x139C678 Offset: 0x1398678 VA: 0x139C678
	public void .ctor() { }

	// RVA: 0x139C7AC Offset: 0x13987AC VA: 0x139C7AC
	internal bool <InvokeMessageIdSubscribers>b__0(PlayerEditorConnectionEvents.MessageTypeSubscribers x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayerEditorConnectionEvents.<>c__DisplayClass7_0 // TypeDefIndex: 5824
{
	// Fields
	public Guid messageId; // 0x10

	// Methods

	// RVA: 0x139C680 Offset: 0x1398680 VA: 0x139C680
	public void .ctor() { }

	// RVA: 0x139C7F4 Offset: 0x13987F4 VA: 0x139C7F4
	internal bool <AddAndCreate>b__0(PlayerEditorConnectionEvents.MessageTypeSubscribers x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class PlayerEditorConnectionEvents.<>c__DisplayClass8_0 // TypeDefIndex: 5825
{
	// Fields
	public Guid messageId; // 0x10

	// Methods

	// RVA: 0x139C75C Offset: 0x139875C VA: 0x139C75C
	public void .ctor() { }

	// RVA: 0x139C83C Offset: 0x139883C VA: 0x139C83C
	internal bool <UnregisterManagedCallback>b__0(PlayerEditorConnectionEvents.MessageTypeSubscribers x) { }
}


// Namespace: UnityEngine.Networking.PlayerConnection
[Serializable]
internal class PlayerEditorConnectionEvents // TypeDefIndex: 5826
{
	// Fields
	[SerializeField]
	public List<PlayerEditorConnectionEvents.MessageTypeSubscribers> messageTypeSubscribers; // 0x10
	[SerializeField]
	public PlayerEditorConnectionEvents.ConnectionChangeEvent connectionEvent; // 0x18
	[SerializeField]
	public PlayerEditorConnectionEvents.ConnectionChangeEvent disconnectionEvent; // 0x20

	// Methods

	// RVA: 0x139BE70 Offset: 0x1397E70 VA: 0x139BE70
	public void InvokeMessageIdSubscribers(Guid messageId, byte[] data, int playerId) { }

	// RVA: 0x139B05C Offset: 0x139705C VA: 0x139B05C
	public UnityEvent<MessageEventArgs> AddAndCreate(Guid messageId) { }

	// RVA: 0x139B398 Offset: 0x1397398 VA: 0x139B398
	public void UnregisterManagedCallback(Guid messageId, UnityAction<MessageEventArgs> callback) { }

	// RVA: 0x139C4F8 Offset: 0x13984F8 VA: 0x139C4F8
	public void .ctor() { }
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
public struct AsyncGPUReadbackRequest // TypeDefIndex: 5827
{
	// Fields
	internal IntPtr m_Ptr; // 0x0
	internal int m_Version; // 0x8

	// Properties
	public bool done { get; }
	public bool hasError { get; }
	public int layerCount { get; }
	public int layerDataSize { get; }

	// Methods

	// RVA: -1 Offset: -1
	public NativeArray<T> GetData<T>(int layer = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB78454 Offset: 0xB74454 VA: 0xB78454
	|-AsyncGPUReadbackRequest.GetData<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: 0x139C884 Offset: 0x1398884 VA: 0x139C884
	public bool get_done() { }

	// RVA: 0x139C8FC Offset: 0x13988FC VA: 0x139C8FC
	public bool get_hasError() { }

	// RVA: 0x139C974 Offset: 0x1398974 VA: 0x139C974
	public int get_layerCount() { }

	// RVA: 0x139C9EC Offset: 0x13989EC VA: 0x139C9EC
	public int get_layerDataSize() { }

	// RVA: 0x139C8C0 Offset: 0x13988C0 VA: 0x139C8C0
	private bool IsDone() { }

	// RVA: 0x139C938 Offset: 0x1398938 VA: 0x139C938
	private bool HasError() { }

	// RVA: 0x139C9B0 Offset: 0x13989B0 VA: 0x139C9B0
	private int GetLayerCount() { }

	// RVA: 0x139CA28 Offset: 0x1398A28 VA: 0x139CA28
	private int GetLayerDataSize() { }

	// RVA: 0x139CB54 Offset: 0x1398B54 VA: 0x139CB54
	internal void SetScriptingCallback(Action<AsyncGPUReadbackRequest> callback) { }

	// RVA: 0x139CBDC Offset: 0x1398BDC VA: 0x139CBDC
	private IntPtr GetDataRaw(int layer) { }

	// RVA: 0x139CA64 Offset: 0x1398A64 VA: 0x139CA64
	private static bool IsDone_Injected(ref AsyncGPUReadbackRequest _unity_self) { }

	// RVA: 0x139CAA0 Offset: 0x1398AA0 VA: 0x139CAA0
	private static bool HasError_Injected(ref AsyncGPUReadbackRequest _unity_self) { }

	// RVA: 0x139CADC Offset: 0x1398ADC VA: 0x139CADC
	private static int GetLayerCount_Injected(ref AsyncGPUReadbackRequest _unity_self) { }

	// RVA: 0x139CB18 Offset: 0x1398B18 VA: 0x139CB18
	private static int GetLayerDataSize_Injected(ref AsyncGPUReadbackRequest _unity_self) { }

	// RVA: 0x139CB98 Offset: 0x1398B98 VA: 0x139CB98
	private static void SetScriptingCallback_Injected(ref AsyncGPUReadbackRequest _unity_self, Action<AsyncGPUReadbackRequest> callback) { }

	// RVA: 0x139CC20 Offset: 0x1398C20 VA: 0x139CC20
	private static IntPtr GetDataRaw_Injected(ref AsyncGPUReadbackRequest _unity_self, int layer) { }
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
internal struct AsyncRequestNativeArrayData // TypeDefIndex: 5828
{
	// Fields
	public void* nativeArrayBuffer; // 0x0
	public long lengthInBytes; // 0x8
}


// Namespace: UnityEngine.Rendering
public static class AsyncGPUReadback // TypeDefIndex: 5829
{
	// Methods

	// RVA: 0x139CC64 Offset: 0x1398C64 VA: 0x139CC64
	public static AsyncGPUReadbackRequest Request(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback) { }

	// RVA: 0x139CCC0 Offset: 0x1398CC0 VA: 0x139CCC0
	private static AsyncGPUReadbackRequest Request_Internal_ComputeBuffer_1(ComputeBuffer buffer, AsyncRequestNativeArrayData* data) { }

	// RVA: 0x139CD1C Offset: 0x1398D1C VA: 0x139CD1C
	private static void Request_Internal_ComputeBuffer_1_Injected(ComputeBuffer buffer, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret) { }
}


// Namespace: UnityEngine.Rendering
public enum IndexFormat // TypeDefIndex: 5830
{
	// Fields
	public int value__; // 0x0
	public const IndexFormat UInt16 = 0;
	public const IndexFormat UInt32 = 1;
}


// Namespace: UnityEngine.Rendering
[Flags]
public enum MeshUpdateFlags // TypeDefIndex: 5831
{
	// Fields
	public int value__; // 0x0
	public const MeshUpdateFlags Default = 0;
	public const MeshUpdateFlags DontValidateIndices = 1;
	public const MeshUpdateFlags DontResetBoneBounds = 2;
	public const MeshUpdateFlags DontNotifyMeshUsers = 4;
	public const MeshUpdateFlags DontRecalculateBounds = 8;
}


// Namespace: UnityEngine.Rendering
public enum VertexAttributeFormat // TypeDefIndex: 5832
{
	// Fields
	public int value__; // 0x0
	public const VertexAttributeFormat Float32 = 0;
	public const VertexAttributeFormat Float16 = 1;
	public const VertexAttributeFormat UNorm8 = 2;
	public const VertexAttributeFormat SNorm8 = 3;
	public const VertexAttributeFormat UNorm16 = 4;
	public const VertexAttributeFormat SNorm16 = 5;
	public const VertexAttributeFormat UInt8 = 6;
	public const VertexAttributeFormat SInt8 = 7;
	public const VertexAttributeFormat UInt16 = 8;
	public const VertexAttributeFormat SInt16 = 9;
	public const VertexAttributeFormat UInt32 = 10;
	public const VertexAttributeFormat SInt32 = 11;
}


// Namespace: UnityEngine.Rendering
[MovedFrom("UnityEngine.Experimental.Rendering")]
public enum VertexAttribute // TypeDefIndex: 5833
{
	// Fields
	public int value__; // 0x0
	public const VertexAttribute Position = 0;
	public const VertexAttribute Normal = 1;
	public const VertexAttribute Tangent = 2;
	public const VertexAttribute Color = 3;
	public const VertexAttribute TexCoord0 = 4;
	public const VertexAttribute TexCoord1 = 5;
	public const VertexAttribute TexCoord2 = 6;
	public const VertexAttribute TexCoord3 = 7;
	public const VertexAttribute TexCoord4 = 8;
	public const VertexAttribute TexCoord5 = 9;
	public const VertexAttribute TexCoord6 = 10;
	public const VertexAttribute TexCoord7 = 11;
	public const VertexAttribute BlendWeight = 12;
	public const VertexAttribute BlendIndices = 13;
}


// Namespace: UnityEngine.Rendering
public enum CompareFunction // TypeDefIndex: 5834
{
	// Fields
	public int value__; // 0x0
	public const CompareFunction Disabled = 0;
	public const CompareFunction Never = 1;
	public const CompareFunction Less = 2;
	public const CompareFunction Equal = 3;
	public const CompareFunction LessEqual = 4;
	public const CompareFunction Greater = 5;
	public const CompareFunction NotEqual = 6;
	public const CompareFunction GreaterEqual = 7;
	public const CompareFunction Always = 8;
}


// Namespace: UnityEngine.Rendering
[Flags]
public enum ColorWriteMask // TypeDefIndex: 5835
{
	// Fields
	public int value__; // 0x0
	public const ColorWriteMask Alpha = 1;
	public const ColorWriteMask Blue = 2;
	public const ColorWriteMask Green = 4;
	public const ColorWriteMask Red = 8;
	public const ColorWriteMask All = 15;
}


// Namespace: UnityEngine.Rendering
public enum StencilOp // TypeDefIndex: 5836
{
	// Fields
	public int value__; // 0x0
	public const StencilOp Keep = 0;
	public const StencilOp Zero = 1;
	public const StencilOp Replace = 2;
	public const StencilOp IncrementSaturate = 3;
	public const StencilOp DecrementSaturate = 4;
	public const StencilOp Invert = 5;
	public const StencilOp IncrementWrap = 6;
	public const StencilOp DecrementWrap = 7;
}


// Namespace: UnityEngine.Rendering
public enum CameraEvent // TypeDefIndex: 5837
{
	// Fields
	public int value__; // 0x0
	public const CameraEvent BeforeDepthTexture = 0;
	public const CameraEvent AfterDepthTexture = 1;
	public const CameraEvent BeforeDepthNormalsTexture = 2;
	public const CameraEvent AfterDepthNormalsTexture = 3;
	public const CameraEvent BeforeGBuffer = 4;
	public const CameraEvent AfterGBuffer = 5;
	public const CameraEvent BeforeLighting = 6;
	public const CameraEvent AfterLighting = 7;
	public const CameraEvent BeforeFinalPass = 8;
	public const CameraEvent AfterFinalPass = 9;
	public const CameraEvent BeforeForwardOpaque = 10;
	public const CameraEvent AfterForwardOpaque = 11;
	public const CameraEvent BeforeImageEffectsOpaque = 12;
	public const CameraEvent AfterImageEffectsOpaque = 13;
	public const CameraEvent BeforeSkybox = 14;
	public const CameraEvent AfterSkybox = 15;
	public const CameraEvent BeforeForwardAlpha = 16;
	public const CameraEvent AfterForwardAlpha = 17;
	public const CameraEvent BeforeImageEffects = 18;
	public const CameraEvent AfterImageEffects = 19;
	public const CameraEvent AfterEverything = 20;
	public const CameraEvent BeforeReflections = 21;
	public const CameraEvent AfterReflections = 22;
	public const CameraEvent BeforeHaloAndLensFlares = 23;
	public const CameraEvent AfterHaloAndLensFlares = 24;
}


// Namespace: UnityEngine.Rendering
internal static class CameraEventUtils // TypeDefIndex: 5838
{
	// Methods

	// RVA: 0x139CD70 Offset: 0x1398D70 VA: 0x139CD70
	public static bool IsValid(CameraEvent value) { }
}


// Namespace: UnityEngine.Rendering
public enum BuiltinRenderTextureType // TypeDefIndex: 5839
{
	// Fields
	public int value__; // 0x0
	public const BuiltinRenderTextureType PropertyName = -4;
	public const BuiltinRenderTextureType BufferPtr = -3;
	public const BuiltinRenderTextureType RenderTexture = -2;
	public const BuiltinRenderTextureType BindableTexture = -1;
	public const BuiltinRenderTextureType None = 0;
	public const BuiltinRenderTextureType CurrentActive = 1;
	public const BuiltinRenderTextureType CameraTarget = 2;
	public const BuiltinRenderTextureType Depth = 3;
	public const BuiltinRenderTextureType DepthNormals = 4;
	public const BuiltinRenderTextureType ResolvedDepth = 5;
	[Obsolete("Deferred Lighting has been removed, so PrepassNormalsSpec built-in render texture type is never used now.", False)]
	public const BuiltinRenderTextureType PrepassNormalsSpec = 7;
	[Obsolete("Deferred Lighting has been removed, so PrepassLight built-in render texture type is never used now.", False)]
	public const BuiltinRenderTextureType PrepassLight = 8;
	[Obsolete("Deferred Lighting has been removed, so PrepassLightSpec built-in render texture type is never used now.", False)]
	public const BuiltinRenderTextureType PrepassLightSpec = 9;
	public const BuiltinRenderTextureType GBuffer0 = 10;
	public const BuiltinRenderTextureType GBuffer1 = 11;
	public const BuiltinRenderTextureType GBuffer2 = 12;
	public const BuiltinRenderTextureType GBuffer3 = 13;
	public const BuiltinRenderTextureType Reflections = 14;
	public const BuiltinRenderTextureType MotionVectors = 15;
	public const BuiltinRenderTextureType GBuffer4 = 16;
	public const BuiltinRenderTextureType GBuffer5 = 17;
	public const BuiltinRenderTextureType GBuffer6 = 18;
	public const BuiltinRenderTextureType GBuffer7 = 19;
}


// Namespace: UnityEngine.Rendering
public enum ShadowCastingMode // TypeDefIndex: 5840
{
	// Fields
	public int value__; // 0x0
	public const ShadowCastingMode Off = 0;
	public const ShadowCastingMode On = 1;
	public const ShadowCastingMode TwoSided = 2;
	public const ShadowCastingMode ShadowsOnly = 3;
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
public enum GraphicsDeviceType // TypeDefIndex: 5841
{
	// Fields
	public int value__; // 0x0
	[Obsolete("OpenGL2 is no longer supported in Unity 5.5+")]
	public const GraphicsDeviceType OpenGL2 = 0;
	[Obsolete("Direct3D 9 is no longer supported in Unity 2017.2+")]
	public const GraphicsDeviceType Direct3D9 = 1;
	public const GraphicsDeviceType Direct3D11 = 2;
	[Obsolete("PS3 is no longer supported in Unity 5.5+")]
	public const GraphicsDeviceType PlayStation3 = 3;
	public const GraphicsDeviceType Null = 4;
	[Obsolete("Xbox360 is no longer supported in Unity 5.5+")]
	public const GraphicsDeviceType Xbox360 = 6;
	public const GraphicsDeviceType OpenGLES2 = 8;
	public const GraphicsDeviceType OpenGLES3 = 11;
	[Obsolete("PVita is no longer supported as of Unity 2018")]
	public const GraphicsDeviceType PlayStationVita = 12;
	public const GraphicsDeviceType PlayStation4 = 13;
	public const GraphicsDeviceType XboxOne = 14;
	[Obsolete("PlayStationMobile is no longer supported in Unity 5.3+")]
	public const GraphicsDeviceType PlayStationMobile = 15;
	public const GraphicsDeviceType Metal = 16;
	public const GraphicsDeviceType OpenGLCore = 17;
	public const GraphicsDeviceType Direct3D12 = 18;
	[Obsolete("Nintendo 3DS support is unavailable since 2018.1")]
	public const GraphicsDeviceType N3DS = 19;
	public const GraphicsDeviceType Vulkan = 21;
	public const GraphicsDeviceType Switch = 22;
	public const GraphicsDeviceType XboxOneD3D12 = 23;
	public const GraphicsDeviceType GameCoreXboxOne = 24;
	[Obsolete("GameCoreScarlett is deprecated, please use GameCoreXboxSeries (UnityUpgradable) -> GameCoreXboxSeries", False)]
	public const GraphicsDeviceType GameCoreScarlett = -1;
	public const GraphicsDeviceType GameCoreXboxSeries = 25;
	public const GraphicsDeviceType PlayStation5 = 26;
	public const GraphicsDeviceType PlayStation5NGGC = 27;
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
public struct VertexAttributeDescriptor : IEquatable<VertexAttributeDescriptor> // TypeDefIndex: 5842
{
	// Fields
	[CompilerGenerated]
	private VertexAttribute <attribute>k__BackingField; // 0x0
	[CompilerGenerated]
	private VertexAttributeFormat <format>k__BackingField; // 0x4
	[CompilerGenerated]
	private int <dimension>k__BackingField; // 0x8
	[CompilerGenerated]
	private int <stream>k__BackingField; // 0xC

	// Properties
	public VertexAttribute attribute { get; set; }
	public VertexAttributeFormat format { get; set; }
	public int dimension { get; set; }
	public int stream { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x139CD7C Offset: 0x1398D7C VA: 0x139CD7C
	public VertexAttribute get_attribute() { }

	[CompilerGenerated]
	// RVA: 0x139CD84 Offset: 0x1398D84 VA: 0x139CD84
	public void set_attribute(VertexAttribute value) { }

	[CompilerGenerated]
	// RVA: 0x139CD8C Offset: 0x1398D8C VA: 0x139CD8C
	public VertexAttributeFormat get_format() { }

	[CompilerGenerated]
	// RVA: 0x139CD94 Offset: 0x1398D94 VA: 0x139CD94
	public void set_format(VertexAttributeFormat value) { }

	[CompilerGenerated]
	// RVA: 0x139CD9C Offset: 0x1398D9C VA: 0x139CD9C
	public int get_dimension() { }

	[CompilerGenerated]
	// RVA: 0x139CDA4 Offset: 0x1398DA4 VA: 0x139CDA4
	public void set_dimension(int value) { }

	[CompilerGenerated]
	// RVA: 0x139CDAC Offset: 0x1398DAC VA: 0x139CDAC
	public int get_stream() { }

	[CompilerGenerated]
	// RVA: 0x139CDB4 Offset: 0x1398DB4 VA: 0x139CDB4
	public void set_stream(int value) { }

	// RVA: 0x139CDBC Offset: 0x1398DBC VA: 0x139CDBC
	public void .ctor(VertexAttribute attribute = 0, VertexAttributeFormat format = 0, int dimension = 3, int stream = 0) { }

	// RVA: 0x139CDC8 Offset: 0x1398DC8 VA: 0x139CDC8 Slot: 3
	public override string ToString() { }

	// RVA: 0x139CF9C Offset: 0x1398F9C VA: 0x139CF9C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x139CFC4 Offset: 0x1398FC4 VA: 0x139CFC4 Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x139D06C Offset: 0x139906C VA: 0x139D06C Slot: 4
	public bool Equals(VertexAttributeDescriptor other) { }
}


// Namespace: UnityEngine.Rendering
public struct RenderTargetIdentifier : IEquatable<RenderTargetIdentifier> // TypeDefIndex: 5843
{
	// Fields
	private BuiltinRenderTextureType m_Type; // 0x0
	private int m_NameID; // 0x4
	private int m_InstanceID; // 0x8
	private IntPtr m_BufferPointer; // 0x10
	private int m_MipLevel; // 0x18
	private CubemapFace m_CubeFace; // 0x1C
	private int m_DepthSlice; // 0x20

	// Methods

	// RVA: 0x139D0B0 Offset: 0x13990B0 VA: 0x139D0B0
	public void .ctor(BuiltinRenderTextureType type) { }

	// RVA: 0x139D0D0 Offset: 0x13990D0 VA: 0x139D0D0
	public void .ctor(int nameID) { }

	// RVA: 0x139D0F0 Offset: 0x13990F0 VA: 0x139D0F0
	public void .ctor(Texture tex) { }

	// RVA: 0x139D210 Offset: 0x1399210 VA: 0x139D210
	public static RenderTargetIdentifier op_Implicit(BuiltinRenderTextureType type) { }

	// RVA: 0x139D234 Offset: 0x1399234 VA: 0x139D234
	public static RenderTargetIdentifier op_Implicit(int nameID) { }

	// RVA: 0x139D250 Offset: 0x1399250 VA: 0x139D250
	public static RenderTargetIdentifier op_Implicit(Texture tex) { }

	// RVA: 0x139D298 Offset: 0x1399298 VA: 0x139D298 Slot: 3
	public override string ToString() { }

	// RVA: 0x139D540 Offset: 0x1399540 VA: 0x139D540 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x139D58C Offset: 0x139958C VA: 0x139D58C Slot: 4
	public bool Equals(RenderTargetIdentifier rhs) { }

	// RVA: 0x139D624 Offset: 0x1399624 VA: 0x139D624 Slot: 0
	public override bool Equals(object obj) { }
}


// Namespace: UnityEngine.Rendering
public enum ShadowSamplingMode // TypeDefIndex: 5844
{
	// Fields
	public int value__; // 0x0
	public const ShadowSamplingMode CompareDepths = 0;
	public const ShadowSamplingMode RawDepth = 1;
	public const ShadowSamplingMode None = 2;
}


// Namespace: UnityEngine.Rendering
public enum TextureDimension // TypeDefIndex: 5845
{
	// Fields
	public int value__; // 0x0
	public const TextureDimension Unknown = -1;
	public const TextureDimension None = 0;
	public const TextureDimension Any = 1;
	public const TextureDimension Tex2D = 2;
	public const TextureDimension Tex3D = 3;
	public const TextureDimension Cube = 4;
	public const TextureDimension Tex2DArray = 5;
	public const TextureDimension CubeArray = 6;
}


// Namespace: UnityEngine.Rendering
public enum CommandBufferExecutionFlags // TypeDefIndex: 5846
{
	// Fields
	public int value__; // 0x0
	public const CommandBufferExecutionFlags None = 0;
	public const CommandBufferExecutionFlags AsyncCompute = 2;
}


// Namespace: UnityEngine.Rendering
public enum RenderTextureSubElement // TypeDefIndex: 5847
{
	// Fields
	public int value__; // 0x0
	public const RenderTextureSubElement Color = 0;
	public const RenderTextureSubElement Depth = 1;
	public const RenderTextureSubElement Stencil = 2;
	public const RenderTextureSubElement Default = 3;
}


// Namespace: UnityEngine.Rendering
public sealed class GraphicsSettings : Object // TypeDefIndex: 5848
{
	// Properties
	public static bool lightsUseLinearIntensity { get; }
	public static RenderPipelineAsset renderPipelineAsset { get; }
	private static ScriptableObject INTERNAL_defaultRenderPipeline { get; }
	public static RenderPipelineAsset defaultRenderPipeline { get; }

	// Methods

	// RVA: 0x139D6B4 Offset: 0x13996B4 VA: 0x139D6B4
	public static bool get_lightsUseLinearIntensity() { }

	// RVA: 0x139D6DC Offset: 0x13996DC VA: 0x139D6DC
	public static RenderPipelineAsset get_renderPipelineAsset() { }

	// RVA: 0x139D770 Offset: 0x1399770 VA: 0x139D770
	private static ScriptableObject get_INTERNAL_defaultRenderPipeline() { }

	// RVA: 0x139D6E0 Offset: 0x13996E0 VA: 0x139D6E0
	public static RenderPipelineAsset get_defaultRenderPipeline() { }
}


// Namespace: UnityEngine.Rendering
[RequiredByNativeCode]
public class OnDemandRendering // TypeDefIndex: 5849
{
	// Fields
	private static int m_RenderFrameInterval; // 0x0

	// Properties
	public static int renderFrameInterval { get; }

	// Methods

	// RVA: 0x139D798 Offset: 0x1399798 VA: 0x139D798
	public static int get_renderFrameInterval() { }

	[RequiredByNativeCode]
	// RVA: 0x139D7F0 Offset: 0x13997F0 VA: 0x139D7F0
	internal static void GetRenderFrameInterval(out int frameInterval) { }

	// RVA: 0x139D848 Offset: 0x1399848 VA: 0x139D848
	private static void .cctor() { }
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
public class CommandBuffer : IDisposable // TypeDefIndex: 5850
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Properties
	public string name { set; }

	// Methods

	// RVA: 0x139D894 Offset: 0x1399894 VA: 0x139D894
	private static IntPtr InitBuffer() { }

	// RVA: 0x139D8BC Offset: 0x13998BC VA: 0x139D8BC
	private void ReleaseBuffer() { }

	// RVA: 0x139D8F8 Offset: 0x13998F8 VA: 0x139D8F8
	private void Internal_SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, int nameID, ref RenderTargetIdentifier rt, int mipLevel, RenderTextureSubElement element) { }

	// RVA: 0x139D97C Offset: 0x139997C VA: 0x139D97C
	private void Internal_DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ) { }

	// RVA: 0x139D9F0 Offset: 0x13999F0 VA: 0x139D9F0
	public void set_name(string value) { }

	// RVA: 0x139DA34 Offset: 0x1399A34 VA: 0x139DA34
	public void Clear() { }

	// RVA: 0x139DA70 Offset: 0x1399A70 VA: 0x139DA70
	private void Internal_DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass) { }

	// RVA: 0x139DADC Offset: 0x1399ADC VA: 0x139DADC
	private void Blit_Texture(Texture source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice) { }

	// RVA: 0x139DC18 Offset: 0x1399C18 VA: 0x139DC18
	private void Blit_Identifier(ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, Material mat, int pass, Vector2 scale, Vector2 offset, int sourceDepthSlice, int destDepthSlice) { }

	// RVA: 0x139DD54 Offset: 0x1399D54 VA: 0x139DD54
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode, bool useDynamicScale) { }

	// RVA: 0x139DE10 Offset: 0x1399E10 VA: 0x139DE10
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing, bool enableRandomWrite, RenderTextureMemoryless memorylessMode) { }

	// RVA: 0x139DEBC Offset: 0x1399EBC VA: 0x139DEBC
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format, int antiAliasing) { }

	// RVA: 0x139DF60 Offset: 0x1399F60 VA: 0x139DF60
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter, GraphicsFormat format) { }

	// RVA: 0x139E000 Offset: 0x139A000 VA: 0x139E000
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer, FilterMode filter) { }

	// RVA: 0x139E0AC Offset: 0x139A0AC VA: 0x139E0AC
	public void GetTemporaryRT(int nameID, int width, int height, int depthBuffer) { }

	// RVA: 0x139E0B4 Offset: 0x139A0B4 VA: 0x139E0B4
	public void ReleaseTemporaryRT(int nameID) { }

	// RVA: 0x139E0F8 Offset: 0x139A0F8 VA: 0x139E0F8
	public void SetGlobalFloat(int nameID, float value) { }

	// RVA: 0x139E14C Offset: 0x139A14C VA: 0x139E14C
	private bool ValidateAgainstExecutionFlags(CommandBufferExecutionFlags requiredFlags, CommandBufferExecutionFlags invalidFlags) { }

	// RVA: 0x139E1A0 Offset: 0x139A1A0 VA: 0x139E1A0 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x139E2A0 Offset: 0x139A2A0 VA: 0x139E2A0 Slot: 4
	public void Dispose() { }

	// RVA: 0x139E25C Offset: 0x139A25C VA: 0x139E25C
	private void Dispose(bool disposing) { }

	// RVA: 0x139E324 Offset: 0x139A324 VA: 0x139E324
	public void .ctor() { }

	// RVA: 0x139E36C Offset: 0x139A36C VA: 0x139E36C
	public void SetComputeTextureParam(ComputeShader computeShader, int kernelIndex, string name, RenderTargetIdentifier rt) { }

	// RVA: 0x139E3EC Offset: 0x139A3EC VA: 0x139E3EC
	public void DispatchCompute(ComputeShader computeShader, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ) { }

	// RVA: 0x139E460 Offset: 0x139A460 VA: 0x139E460
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex, int shaderPass) { }

	// RVA: 0x139E66C Offset: 0x139A66C VA: 0x139E66C
	public void DrawRenderer(Renderer renderer, Material material, int submeshIndex) { }

	// RVA: 0x139E674 Offset: 0x139A674 VA: 0x139E674
	public void Blit(Texture source, RenderTargetIdentifier dest, Material mat) { }

	// RVA: 0x139E704 Offset: 0x139A704 VA: 0x139E704
	public void Blit(RenderTargetIdentifier source, RenderTargetIdentifier dest) { }

	// RVA: 0x139E790 Offset: 0x139A790 VA: 0x139E790
	public void Blit(RenderTargetIdentifier source, RenderTargetIdentifier dest, Material mat) { }

	// RVA: 0x139E820 Offset: 0x139A820 VA: 0x139E820
	public void SetGlobalFloat(string name, float value) { }

	// RVA: 0x139DB7C Offset: 0x1399B7C VA: 0x139DB7C
	private void Blit_Texture_Injected(Texture source, ref RenderTargetIdentifier dest, Material mat, int pass, ref Vector2 scale, ref Vector2 offset, int sourceDepthSlice, int destDepthSlice) { }

	// RVA: 0x139DCB8 Offset: 0x1399CB8 VA: 0x139DCB8
	private void Blit_Identifier_Injected(ref RenderTargetIdentifier source, ref RenderTargetIdentifier dest, Material mat, int pass, ref Vector2 scale, ref Vector2 offset, int sourceDepthSlice, int destDepthSlice) { }
}


// Namespace: UnityEngine.Rendering
public struct LODParameters : IEquatable<LODParameters> // TypeDefIndex: 5851
{
	// Fields
	private int m_IsOrthographic; // 0x0
	private Vector3 m_CameraPosition; // 0x4
	private float m_FieldOfView; // 0x10
	private float m_OrthoSize; // 0x14
	private int m_CameraPixelHeight; // 0x18

	// Methods

	// RVA: 0x139E880 Offset: 0x139A880 VA: 0x139E880 Slot: 4
	public bool Equals(LODParameters other) { }

	// RVA: 0x139E91C Offset: 0x139A91C VA: 0x139E91C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x139E9AC Offset: 0x139A9AC VA: 0x139E9AC Slot: 2
	public override int GetHashCode() { }
}


// Namespace: UnityEngine.Rendering
public abstract class RenderPipeline // TypeDefIndex: 5852
{
	// Fields
	[CompilerGenerated]
	private bool <disposed>k__BackingField; // 0x10

	// Properties
	public bool disposed { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void Render(ScriptableRenderContext context, Camera[] cameras);

	// RVA: -1 Offset: -1 Slot: 5
	protected virtual void ProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6EB0 Offset: 0xBA2EB0 VA: 0xBA6EB0
	|-RenderPipeline.ProcessRenderRequests<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x139EA40 Offset: 0x139AA40 VA: 0x139EA40 Slot: 6
	protected virtual void Render(ScriptableRenderContext context, List<Camera> cameras) { }

	// RVA: 0x139EAB8 Offset: 0x139AAB8 VA: 0x139EAB8
	internal void InternalRender(ScriptableRenderContext context, List<Camera> cameras) { }

	// RVA: -1 Offset: -1
	internal void InternalProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA6D5C Offset: 0xBA2D5C VA: 0xBA6D5C
	|-RenderPipeline.InternalProcessRenderRequests<__Il2CppFullySharedGenericType>
	*/

	[CompilerGenerated]
	// RVA: 0x139EB38 Offset: 0x139AB38 VA: 0x139EB38
	public bool get_disposed() { }

	[CompilerGenerated]
	// RVA: 0x139EB40 Offset: 0x139AB40 VA: 0x139EB40
	private void set_disposed(bool value) { }

	// RVA: 0x139EB4C Offset: 0x139AB4C VA: 0x139EB4C
	internal void Dispose() { }

	// RVA: 0x139EBC4 Offset: 0x139ABC4 VA: 0x139EBC4 Slot: 7
	protected virtual void Dispose(bool disposing) { }
}


// Namespace: UnityEngine.Rendering
public abstract class RenderPipelineAsset : ScriptableObject // TypeDefIndex: 5853
{
	// Properties
	public virtual string[] renderingLayerMaskNames { get; }
	public virtual string[] prefixedRenderingLayerMaskNames { get; }
	public virtual Material defaultMaterial { get; }
	public virtual Shader autodeskInteractiveShader { get; }
	public virtual Shader autodeskInteractiveTransparentShader { get; }
	public virtual Shader autodeskInteractiveMaskedShader { get; }
	public virtual Shader terrainDetailLitShader { get; }
	public virtual Shader terrainDetailGrassShader { get; }
	public virtual Shader terrainDetailGrassBillboardShader { get; }
	public virtual Material defaultParticleMaterial { get; }
	public virtual Material defaultLineMaterial { get; }
	public virtual Material defaultTerrainMaterial { get; }
	public virtual Material defaultUIMaterial { get; }
	public virtual Material defaultUIOverdrawMaterial { get; }
	public virtual Material defaultUIETC1SupportedMaterial { get; }
	public virtual Material default2DMaterial { get; }
	public virtual Material default2DMaskMaterial { get; }
	public virtual Shader defaultShader { get; }
	public virtual Shader defaultSpeedTree7Shader { get; }
	public virtual Shader defaultSpeedTree8Shader { get; }
	public virtual string renderPipelineShaderTag { get; }

	// Methods

	// RVA: 0x139EBC8 Offset: 0x139ABC8 VA: 0x139EBC8
	internal RenderPipeline InternalCreatePipeline() { }

	// RVA: 0x139EEC0 Offset: 0x139AEC0 VA: 0x139EEC0 Slot: 4
	public virtual string[] get_renderingLayerMaskNames() { }

	// RVA: 0x139EEC8 Offset: 0x139AEC8 VA: 0x139EEC8 Slot: 5
	public virtual string[] get_prefixedRenderingLayerMaskNames() { }

	// RVA: 0x139EED0 Offset: 0x139AED0 VA: 0x139EED0 Slot: 6
	public virtual Material get_defaultMaterial() { }

	// RVA: 0x139EED8 Offset: 0x139AED8 VA: 0x139EED8 Slot: 7
	public virtual Shader get_autodeskInteractiveShader() { }

	// RVA: 0x139EEE0 Offset: 0x139AEE0 VA: 0x139EEE0 Slot: 8
	public virtual Shader get_autodeskInteractiveTransparentShader() { }

	// RVA: 0x139EEE8 Offset: 0x139AEE8 VA: 0x139EEE8 Slot: 9
	public virtual Shader get_autodeskInteractiveMaskedShader() { }

	// RVA: 0x139EEF0 Offset: 0x139AEF0 VA: 0x139EEF0 Slot: 10
	public virtual Shader get_terrainDetailLitShader() { }

	// RVA: 0x139EEF8 Offset: 0x139AEF8 VA: 0x139EEF8 Slot: 11
	public virtual Shader get_terrainDetailGrassShader() { }

	// RVA: 0x139EF00 Offset: 0x139AF00 VA: 0x139EF00 Slot: 12
	public virtual Shader get_terrainDetailGrassBillboardShader() { }

	// RVA: 0x139EF08 Offset: 0x139AF08 VA: 0x139EF08 Slot: 13
	public virtual Material get_defaultParticleMaterial() { }

	// RVA: 0x139EF10 Offset: 0x139AF10 VA: 0x139EF10 Slot: 14
	public virtual Material get_defaultLineMaterial() { }

	// RVA: 0x139EF18 Offset: 0x139AF18 VA: 0x139EF18 Slot: 15
	public virtual Material get_defaultTerrainMaterial() { }

	// RVA: 0x139EF20 Offset: 0x139AF20 VA: 0x139EF20 Slot: 16
	public virtual Material get_defaultUIMaterial() { }

	// RVA: 0x139EF28 Offset: 0x139AF28 VA: 0x139EF28 Slot: 17
	public virtual Material get_defaultUIOverdrawMaterial() { }

	// RVA: 0x139EF30 Offset: 0x139AF30 VA: 0x139EF30 Slot: 18
	public virtual Material get_defaultUIETC1SupportedMaterial() { }

	// RVA: 0x139EF38 Offset: 0x139AF38 VA: 0x139EF38 Slot: 19
	public virtual Material get_default2DMaterial() { }

	// RVA: 0x139EF40 Offset: 0x139AF40 VA: 0x139EF40 Slot: 20
	public virtual Material get_default2DMaskMaterial() { }

	// RVA: 0x139EF48 Offset: 0x139AF48 VA: 0x139EF48 Slot: 21
	public virtual Shader get_defaultShader() { }

	// RVA: 0x139EF50 Offset: 0x139AF50 VA: 0x139EF50 Slot: 22
	public virtual Shader get_defaultSpeedTree7Shader() { }

	// RVA: 0x139EF58 Offset: 0x139AF58 VA: 0x139EF58 Slot: 23
	public virtual Shader get_defaultSpeedTree8Shader() { }

	// RVA: 0x139EF60 Offset: 0x139AF60 VA: 0x139EF60 Slot: 24
	public virtual string get_renderPipelineShaderTag() { }

	// RVA: -1 Offset: -1 Slot: 25
	protected abstract RenderPipeline CreatePipeline();

	// RVA: 0x139EFEC Offset: 0x139AFEC VA: 0x139EFEC Slot: 26
	protected virtual void OnValidate() { }

	// RVA: 0x139F310 Offset: 0x139B310 VA: 0x139F310 Slot: 27
	protected virtual void OnDisable() { }

	// RVA: 0x139F35C Offset: 0x139B35C VA: 0x139F35C
	protected void .ctor() { }
}


// Namespace: UnityEngine.Rendering
public static class RenderPipelineManager // TypeDefIndex: 5854
{
	// Fields
	internal static RenderPipelineAsset s_CurrentPipelineAsset; // 0x0
	private static List<Camera> s_Cameras; // 0x8
	private static string s_CurrentPipelineType; // 0x10
	private static RenderPipeline s_CurrentPipeline; // 0x18
	[CompilerGenerated]
	private static Action<ScriptableRenderContext, Camera> endCameraRendering; // 0x20
	[CompilerGenerated]
	private static Action activeRenderPipelineTypeChanged; // 0x28
	[CompilerGenerated]
	private static Action<RenderPipelineAsset, RenderPipelineAsset> activeRenderPipelineAssetChanged; // 0x30
	[CompilerGenerated]
	private static Action activeRenderPipelineCreated; // 0x38
	[CompilerGenerated]
	private static Action activeRenderPipelineDisposed; // 0x40

	// Properties
	public static RenderPipeline currentPipeline { get; set; }

	// Methods

	// RVA: 0x139F364 Offset: 0x139B364 VA: 0x139F364
	public static RenderPipeline get_currentPipeline() { }

	// RVA: 0x139F3BC Offset: 0x139B3BC VA: 0x139F3BC
	private static void set_currentPipeline(RenderPipeline value) { }

	[CompilerGenerated]
	// RVA: 0x139F45C Offset: 0x139B45C VA: 0x139F45C
	public static void add_endCameraRendering(Action<ScriptableRenderContext, Camera> value) { }

	[CompilerGenerated]
	// RVA: 0x139F550 Offset: 0x139B550 VA: 0x139F550
	public static void remove_endCameraRendering(Action<ScriptableRenderContext, Camera> value) { }

	[RequiredByNativeCode]
	// RVA: 0x139F644 Offset: 0x139B644 VA: 0x139F644
	internal static void OnActiveRenderPipelineTypeChanged() { }

	[RequiredByNativeCode]
	// RVA: 0x139F6B8 Offset: 0x139B6B8 VA: 0x139F6B8
	internal static void OnActiveRenderPipelineAssetChanged(ScriptableObject from, ScriptableObject to) { }

	[RequiredByNativeCode]
	// RVA: 0x139F7C4 Offset: 0x139B7C4 VA: 0x139F7C4
	internal static void HandleRenderPipelineChange(RenderPipelineAsset pipelineAsset) { }

	[RequiredByNativeCode]
	// RVA: 0x139F0A8 Offset: 0x139B0A8 VA: 0x139F0A8
	internal static void CleanupRenderPipeline() { }

	[RequiredByNativeCode]
	// RVA: 0x139F924 Offset: 0x139B924 VA: 0x139F924
	private static string GetCurrentPipelineAssetType() { }

	[RequiredByNativeCode]
	// RVA: 0x139F97C Offset: 0x139B97C VA: 0x139F97C
	private static void DoRenderLoop_Internal(RenderPipelineAsset pipe, IntPtr loopPtr, Object renderRequest) { }

	// RVA: 0x139F25C Offset: 0x139B25C VA: 0x139F25C
	internal static void PrepareRenderPipeline(RenderPipelineAsset pipelineAsset) { }

	// RVA: 0x139FD28 Offset: 0x139BD28 VA: 0x139FD28
	private static bool IsPipelineRequireCreation() { }

	// RVA: 0x139FE74 Offset: 0x139BE74 VA: 0x139FE74
	private static void .cctor() { }
}


// Namespace: UnityEngine.Rendering
public struct ScriptableRenderContext : IEquatable<ScriptableRenderContext> // TypeDefIndex: 5855
{
	// Fields
	private static readonly ShaderTagId kRenderTypeTag; // 0x0
	private IntPtr m_Ptr; // 0x0

	// Methods

	// RVA: 0x139FF1C Offset: 0x139BF1C VA: 0x139FF1C
	private void GetCameras_Internal(Type listType, object resultList) { }

	// RVA: 0x139FC68 Offset: 0x139BC68 VA: 0x139FC68
	internal void .ctor(IntPtr ptr) { }

	// RVA: 0x139FC70 Offset: 0x139BC70 VA: 0x139FC70
	internal void GetCameras(List<Camera> results) { }

	// RVA: 0x139FFFC Offset: 0x139BFFC VA: 0x139FFFC Slot: 4
	public bool Equals(ScriptableRenderContext other) { }

	// RVA: 0x13A006C Offset: 0x139C06C VA: 0x13A006C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A0114 Offset: 0x139C114 VA: 0x13A0114 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A011C Offset: 0x139C11C VA: 0x13A011C
	private static void .cctor() { }

	// RVA: 0x139FFA8 Offset: 0x139BFA8 VA: 0x139FFA8
	private static void GetCameras_Internal_Injected(ref ScriptableRenderContext _unity_self, Type listType, object resultList) { }
}


// Namespace: UnityEngine.Rendering
public struct ShaderTagId : IEquatable<ShaderTagId> // TypeDefIndex: 5856
{
	// Fields
	private int m_Id; // 0x0

	// Methods

	// RVA: 0x13A0184 Offset: 0x139C184 VA: 0x13A0184
	public void .ctor(string name) { }

	// RVA: 0x13A01A4 Offset: 0x139C1A4 VA: 0x13A01A4 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A021C Offset: 0x139C21C VA: 0x13A021C Slot: 4
	public bool Equals(ShaderTagId other) { }

	// RVA: 0x13A022C Offset: 0x139C22C VA: 0x13A022C Slot: 2
	public override int GetHashCode() { }
}


// Namespace: UnityEngine.Rendering
public struct StencilState : IEquatable<StencilState> // TypeDefIndex: 5857
{
	// Fields
	private byte m_Enabled; // 0x0
	private byte m_ReadMask; // 0x1
	private byte m_WriteMask; // 0x2
	private byte m_Padding; // 0x3
	private byte m_CompareFunctionFront; // 0x4
	private byte m_PassOperationFront; // 0x5
	private byte m_FailOperationFront; // 0x6
	private byte m_ZFailOperationFront; // 0x7
	private byte m_CompareFunctionBack; // 0x8
	private byte m_PassOperationBack; // 0x9
	private byte m_FailOperationBack; // 0xA
	private byte m_ZFailOperationBack; // 0xB

	// Properties
	public bool enabled { set; }
	public byte readMask { set; }
	public byte writeMask { set; }
	public CompareFunction compareFunctionFront { set; }
	public StencilOp passOperationFront { set; }
	public StencilOp failOperationFront { set; }
	public StencilOp zFailOperationFront { set; }
	public CompareFunction compareFunctionBack { set; }
	public StencilOp passOperationBack { set; }
	public StencilOp failOperationBack { set; }
	public StencilOp zFailOperationBack { set; }

	// Methods

	// RVA: 0x13A024C Offset: 0x139C24C VA: 0x13A024C
	public void set_enabled(bool value) { }

	// RVA: 0x13A02B8 Offset: 0x139C2B8 VA: 0x13A02B8
	public void set_readMask(byte value) { }

	// RVA: 0x13A02C0 Offset: 0x139C2C0 VA: 0x13A02C0
	public void set_writeMask(byte value) { }

	// RVA: 0x13A02C8 Offset: 0x139C2C8 VA: 0x13A02C8
	public void set_compareFunctionFront(CompareFunction value) { }

	// RVA: 0x13A02D0 Offset: 0x139C2D0 VA: 0x13A02D0
	public void set_passOperationFront(StencilOp value) { }

	// RVA: 0x13A02D8 Offset: 0x139C2D8 VA: 0x13A02D8
	public void set_failOperationFront(StencilOp value) { }

	// RVA: 0x13A02E0 Offset: 0x139C2E0 VA: 0x13A02E0
	public void set_zFailOperationFront(StencilOp value) { }

	// RVA: 0x13A02E8 Offset: 0x139C2E8 VA: 0x13A02E8
	public void set_compareFunctionBack(CompareFunction value) { }

	// RVA: 0x13A02F0 Offset: 0x139C2F0 VA: 0x13A02F0
	public void set_passOperationBack(StencilOp value) { }

	// RVA: 0x13A02F8 Offset: 0x139C2F8 VA: 0x13A02F8
	public void set_failOperationBack(StencilOp value) { }

	// RVA: 0x13A0300 Offset: 0x139C300 VA: 0x13A0300
	public void set_zFailOperationBack(StencilOp value) { }

	// RVA: 0x13A0308 Offset: 0x139C308 VA: 0x13A0308 Slot: 4
	public bool Equals(StencilState other) { }

	// RVA: 0x13A03B8 Offset: 0x139C3B8 VA: 0x13A03B8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A0434 Offset: 0x139C434 VA: 0x13A0434 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: 
[Flags]
public enum SupportedRenderingFeatures.ReflectionProbeModes // TypeDefIndex: 5858
{
	// Fields
	public int value__; // 0x0
	public const SupportedRenderingFeatures.ReflectionProbeModes None = 0;
	public const SupportedRenderingFeatures.ReflectionProbeModes Rotation = 1;
}


// Namespace: 
[Flags]
public enum SupportedRenderingFeatures.LightmapMixedBakeModes // TypeDefIndex: 5859
{
	// Fields
	public int value__; // 0x0
	public const SupportedRenderingFeatures.LightmapMixedBakeModes None = 0;
	public const SupportedRenderingFeatures.LightmapMixedBakeModes IndirectOnly = 1;
	public const SupportedRenderingFeatures.LightmapMixedBakeModes Subtractive = 2;
	public const SupportedRenderingFeatures.LightmapMixedBakeModes Shadowmask = 4;
}


// Namespace: UnityEngine.Rendering
public class SupportedRenderingFeatures // TypeDefIndex: 5860
{
	// Fields
	private static SupportedRenderingFeatures s_Active; // 0x0
	[CompilerGenerated]
	private SupportedRenderingFeatures.ReflectionProbeModes <reflectionProbeModes>k__BackingField; // 0x10
	[CompilerGenerated]
	private SupportedRenderingFeatures.LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField; // 0x14
	[CompilerGenerated]
	private SupportedRenderingFeatures.LightmapMixedBakeModes <mixedLightingModes>k__BackingField; // 0x18
	[CompilerGenerated]
	private LightmapBakeType <lightmapBakeTypes>k__BackingField; // 0x1C
	[CompilerGenerated]
	private LightmapsMode <lightmapsModes>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <enlightenLightmapper>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <enlighten>k__BackingField; // 0x25
	[CompilerGenerated]
	private bool <lightProbeProxyVolumes>k__BackingField; // 0x26
	[CompilerGenerated]
	private bool <motionVectors>k__BackingField; // 0x27
	[CompilerGenerated]
	private bool <receiveShadows>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <reflectionProbes>k__BackingField; // 0x29
	[CompilerGenerated]
	private bool <reflectionProbesBlendDistance>k__BackingField; // 0x2A
	[CompilerGenerated]
	private bool <rendererPriority>k__BackingField; // 0x2B
	[CompilerGenerated]
	private bool <rendersUIOverlay>k__BackingField; // 0x2C
	[CompilerGenerated]
	private bool <overridesEnvironmentLighting>k__BackingField; // 0x2D
	[CompilerGenerated]
	private bool <overridesFog>k__BackingField; // 0x2E
	[CompilerGenerated]
	private bool <overridesRealtimeReflectionProbes>k__BackingField; // 0x2F
	[CompilerGenerated]
	private bool <overridesOtherLightingSettings>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <editableMaterialRenderQueue>k__BackingField; // 0x31
	[CompilerGenerated]
	private bool <overridesLODBias>k__BackingField; // 0x32
	[CompilerGenerated]
	private bool <overridesMaximumLODLevel>k__BackingField; // 0x33
	[CompilerGenerated]
	private bool <overridesEnableLODCrossFade>k__BackingField; // 0x34
	[CompilerGenerated]
	private bool <rendererProbes>k__BackingField; // 0x35
	[CompilerGenerated]
	private bool <particleSystemInstancing>k__BackingField; // 0x36
	[CompilerGenerated]
	private bool <autoAmbientProbeBaking>k__BackingField; // 0x37
	[CompilerGenerated]
	private bool <autoDefaultReflectionProbeBaking>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <overridesShadowmask>k__BackingField; // 0x39
	[CompilerGenerated]
	private bool <overridesLightProbeSystem>k__BackingField; // 0x3A
	[CompilerGenerated]
	private bool <supportsHDR>k__BackingField; // 0x3B
	[CompilerGenerated]
	private string <overridesLightProbeSystemWarningMessage>k__BackingField; // 0x40

	// Properties
	public static SupportedRenderingFeatures active { get; set; }
	public SupportedRenderingFeatures.LightmapMixedBakeModes defaultMixedLightingModes { get; }
	public SupportedRenderingFeatures.LightmapMixedBakeModes mixedLightingModes { get; }
	public LightmapBakeType lightmapBakeTypes { get; }
	public LightmapsMode lightmapsModes { get; }
	[Obsolete("Bake with the Progressive Lightmapper. The backend that uses Enlighten to bake is deprecated.", False)]
	public bool enlightenLightmapper { get; }
	public bool enlighten { get; }
	public bool rendersUIOverlay { get; }
	public bool autoAmbientProbeBaking { get; }
	public bool autoDefaultReflectionProbeBaking { get; }
	public bool overridesLightProbeSystem { get; }

	// Methods

	// RVA: 0x13A0524 Offset: 0x139C524 VA: 0x13A0524
	public static SupportedRenderingFeatures get_active() { }

	// RVA: 0x139F8C8 Offset: 0x139B8C8 VA: 0x139F8C8
	public static void set_active(SupportedRenderingFeatures value) { }

	[CompilerGenerated]
	// RVA: 0x13A05C4 Offset: 0x139C5C4 VA: 0x13A05C4
	public SupportedRenderingFeatures.LightmapMixedBakeModes get_defaultMixedLightingModes() { }

	[CompilerGenerated]
	// RVA: 0x13A05CC Offset: 0x139C5CC VA: 0x13A05CC
	public SupportedRenderingFeatures.LightmapMixedBakeModes get_mixedLightingModes() { }

	[CompilerGenerated]
	// RVA: 0x13A05D4 Offset: 0x139C5D4 VA: 0x13A05D4
	public LightmapBakeType get_lightmapBakeTypes() { }

	[CompilerGenerated]
	// RVA: 0x13A05DC Offset: 0x139C5DC VA: 0x13A05DC
	public LightmapsMode get_lightmapsModes() { }

	[CompilerGenerated]
	// RVA: 0x13A05E4 Offset: 0x139C5E4 VA: 0x13A05E4
	public bool get_enlightenLightmapper() { }

	[CompilerGenerated]
	// RVA: 0x13A05EC Offset: 0x139C5EC VA: 0x13A05EC
	public bool get_enlighten() { }

	[CompilerGenerated]
	// RVA: 0x13A05F4 Offset: 0x139C5F4 VA: 0x13A05F4
	public bool get_rendersUIOverlay() { }

	[CompilerGenerated]
	// RVA: 0x13A05FC Offset: 0x139C5FC VA: 0x13A05FC
	public bool get_autoAmbientProbeBaking() { }

	[CompilerGenerated]
	// RVA: 0x13A0604 Offset: 0x139C604 VA: 0x13A0604
	public bool get_autoDefaultReflectionProbeBaking() { }

	[CompilerGenerated]
	// RVA: 0x13A060C Offset: 0x139C60C VA: 0x13A060C
	public bool get_overridesLightProbeSystem() { }

	[RequiredByNativeCode]
	// RVA: 0x13A0614 Offset: 0x139C614 VA: 0x13A0614
	internal static void FallbackMixedLightingModeByRef(IntPtr fallbackModePtr) { }

	// RVA: 0x13A0748 Offset: 0x139C748 VA: 0x13A0748
	internal static bool IsMixedLightingModeSupported(MixedLightingMode mixedMode) { }

	[RequiredByNativeCode]
	// RVA: 0x13A07B4 Offset: 0x139C7B4 VA: 0x13A07B4
	internal static void IsMixedLightingModeSupportedByRef(MixedLightingMode mixedMode, IntPtr isSupportedPtr) { }

	// RVA: 0x13A08BC Offset: 0x139C8BC VA: 0x13A08BC
	internal static bool IsLightmapBakeTypeSupported(LightmapBakeType bakeType) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0928 Offset: 0x139C928 VA: 0x13A0928
	internal static void IsLightmapBakeTypeSupportedByRef(LightmapBakeType bakeType, IntPtr isSupportedPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0A18 Offset: 0x139CA18 VA: 0x13A0A18
	internal static void IsLightmapsModeSupportedByRef(LightmapsMode mode, IntPtr isSupportedPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0AA4 Offset: 0x139CAA4 VA: 0x13A0AA4
	internal static void IsLightmapperSupportedByRef(int lightmapper, IntPtr isSupportedPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0B28 Offset: 0x139CB28 VA: 0x13A0B28
	internal static void IsUIOverlayRenderedBySRP(IntPtr isSupportedPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0BA0 Offset: 0x139CBA0 VA: 0x13A0BA0
	internal static void IsAutoAmbientProbeBakingSupported(IntPtr isSupportedPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0C18 Offset: 0x139CC18 VA: 0x13A0C18
	internal static void IsAutoDefaultReflectionProbeBakingSupported(IntPtr isSupportedPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0C90 Offset: 0x139CC90 VA: 0x13A0C90
	internal static void OverridesLightProbeSystem(IntPtr overridesPtr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A0D08 Offset: 0x139CD08 VA: 0x13A0D08
	internal static void FallbackLightmapperByRef(IntPtr lightmapperPtr) { }

	// RVA: 0x139F844 Offset: 0x139B844 VA: 0x139F844
	public void .ctor() { }

	// RVA: 0x13A0D24 Offset: 0x139CD24 VA: 0x13A0D24
	private static void .cctor() { }
}


// Namespace: UnityEngine.Rendering
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct BatchID : IEquatable<BatchID> // TypeDefIndex: 5861
{
	// Fields
	public static readonly BatchID Null; // 0x0
	public uint value; // 0x0

	// Methods

	// RVA: 0x13A0D7C Offset: 0x139CD7C VA: 0x13A0D7C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A0D84 Offset: 0x139CD84 VA: 0x13A0D84 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A0E2C Offset: 0x139CE2C VA: 0x13A0E2C Slot: 4
	public bool Equals(BatchID other) { }

	// RVA: 0x13A0E3C Offset: 0x139CE3C VA: 0x13A0E3C
	private static void .cctor() { }
}


// Namespace: UnityEngine.Rendering
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct BatchMaterialID : IEquatable<BatchMaterialID> // TypeDefIndex: 5862
{
	// Fields
	public static readonly BatchMaterialID Null; // 0x0
	public uint value; // 0x0

	// Methods

	// RVA: 0x13A0E84 Offset: 0x139CE84 VA: 0x13A0E84 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A0E8C Offset: 0x139CE8C VA: 0x13A0E8C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A0F34 Offset: 0x139CF34 VA: 0x13A0F34 Slot: 4
	public bool Equals(BatchMaterialID other) { }

	// RVA: 0x13A0F44 Offset: 0x139CF44 VA: 0x13A0F44
	private static void .cctor() { }
}


// Namespace: UnityEngine.Rendering
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct BatchMeshID : IEquatable<BatchMeshID> // TypeDefIndex: 5863
{
	// Fields
	public static readonly BatchMeshID Null; // 0x0
	public uint value; // 0x0

	// Methods

	// RVA: 0x13A0F8C Offset: 0x139CF8C VA: 0x13A0F8C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A0F94 Offset: 0x139CF94 VA: 0x13A0F94 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A103C Offset: 0x139D03C VA: 0x13A103C Slot: 4
	public bool Equals(BatchMeshID other) { }

	// RVA: 0x13A104C Offset: 0x139D04C VA: 0x13A104C
	private static void .cctor() { }
}


// Namespace: UnityEngine.Rendering
[Flags]
public enum BatchDrawCommandFlags // TypeDefIndex: 5864
{
	// Fields
	public int value__; // 0x0
	public const BatchDrawCommandFlags None = 0;
	public const BatchDrawCommandFlags FlipWinding = 1;
	public const BatchDrawCommandFlags HasMotion = 2;
	public const BatchDrawCommandFlags IsLightMapped = 4;
	public const BatchDrawCommandFlags HasSortingPosition = 8;
	public const BatchDrawCommandFlags LODCrossFade = 16;
}


// Namespace: UnityEngine.Rendering
[Flags]
public enum BatchCullingFlags // TypeDefIndex: 5865
{
	// Fields
	public int value__; // 0x0
	public const BatchCullingFlags None = 0;
	public const BatchCullingFlags CullLightmappedShadowCasters = 1;
}


// Namespace: UnityEngine.Rendering
public enum BatchCullingViewType // TypeDefIndex: 5866
{
	// Fields
	public int value__; // 0x0
	public const BatchCullingViewType Unknown = 0;
	public const BatchCullingViewType Camera = 1;
	public const BatchCullingViewType Light = 2;
	public const BatchCullingViewType Picking = 3;
	public const BatchCullingViewType SelectionOutline = 4;
}


// Namespace: UnityEngine.Rendering
public enum BatchCullingProjectionType // TypeDefIndex: 5867
{
	// Fields
	public int value__; // 0x0
	public const BatchCullingProjectionType Unknown = 0;
	public const BatchCullingProjectionType Perspective = 1;
	public const BatchCullingProjectionType Orthographic = 2;
}


// Namespace: UnityEngine.Rendering
public struct BatchPackedCullingViewID : IEquatable<BatchPackedCullingViewID> // TypeDefIndex: 5868
{
	// Fields
	internal ulong handle; // 0x0

	// Methods

	// RVA: 0x13A1094 Offset: 0x139D094 VA: 0x13A1094 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A109C Offset: 0x139D09C VA: 0x13A109C Slot: 4
	public bool Equals(BatchPackedCullingViewID other) { }

	// RVA: 0x13A10AC Offset: 0x139D0AC VA: 0x13A10AC Slot: 0
	public override bool Equals(object obj) { }
}


// Namespace: UnityEngine.Rendering
public struct BatchDrawCommand // TypeDefIndex: 5869
{
	// Fields
	public uint visibleOffset; // 0x0
	public uint visibleCount; // 0x4
	public BatchID batchID; // 0x8
	public BatchMaterialID materialID; // 0xC
	public BatchMeshID meshID; // 0x10
	public ushort submeshIndex; // 0x14
	public ushort splitVisibilityMask; // 0x16
	public BatchDrawCommandFlags flags; // 0x18
	public int sortingPosition; // 0x1C
}


// Namespace: UnityEngine.Rendering
public struct BatchFilterSettings // TypeDefIndex: 5870
{
	// Fields
	public uint renderingLayerMask; // 0x0
	public byte layer; // 0x4
	private byte m_motionMode; // 0x5
	private byte m_shadowMode; // 0x6
	private byte m_receiveShadows; // 0x7
	private byte m_staticShadowCaster; // 0x8
	private byte m_allDepthSorted; // 0x9
}


// Namespace: UnityEngine.Rendering
public struct BatchDrawRange // TypeDefIndex: 5871
{
	// Fields
	public uint drawCommandsBegin; // 0x0
	public uint drawCommandsCount; // 0x4
	public BatchFilterSettings filterSettings; // 0x8
}


// Namespace: UnityEngine.Rendering
public struct BatchCullingOutputDrawCommands // TypeDefIndex: 5872
{
	// Fields
	public BatchDrawCommand* drawCommands; // 0x0
	public int* visibleInstances; // 0x8
	public BatchDrawRange* drawRanges; // 0x10
	public float* instanceSortingPositions; // 0x18
	public int* drawCommandPickingInstanceIDs; // 0x20
	public int drawCommandCount; // 0x28
	public int visibleInstanceCount; // 0x2C
	public int drawRangeCount; // 0x30
	public int instanceSortingPositionFloatCount; // 0x34
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
public struct CullingSplit // TypeDefIndex: 5873
{
	// Fields
	public Vector3 sphereCenter; // 0x0
	public float sphereRadius; // 0xC
	public int cullingPlaneOffset; // 0x10
	public int cullingPlaneCount; // 0x14
	public float cascadeBlendCullingFactor; // 0x18
	public float nearPlane; // 0x1C
	public Matrix4x4 cullingMatrix; // 0x20
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
public struct BatchCullingContext // TypeDefIndex: 5874
{
	// Fields
	public readonly NativeArray<Plane> cullingPlanes; // 0x0
	public readonly NativeArray<CullingSplit> cullingSplits; // 0x10
	public readonly LODParameters lodParameters; // 0x20
	public readonly Matrix4x4 localToWorldMatrix; // 0x3C
	public readonly BatchCullingViewType viewType; // 0x7C
	public readonly BatchCullingProjectionType projectionType; // 0x80
	public readonly BatchCullingFlags cullingFlags; // 0x84
	public readonly BatchPackedCullingViewID viewID; // 0x88
	public readonly uint cullingLayerMask; // 0x90
	public readonly ulong sceneCullingMask; // 0x98
	[Obsolete("BatchCullingContext.isOrthographic is deprecated. Use BatchCullingContext.projectionType instead.")]
	public readonly byte isOrthographic; // 0xA0
	public readonly int receiverPlaneOffset; // 0xA4
	public readonly int receiverPlaneCount; // 0xA8

	// Methods

	// RVA: 0x13A1124 Offset: 0x139D124 VA: 0x13A1124
	internal void .ctor(NativeArray<Plane> inCullingPlanes, NativeArray<CullingSplit> inCullingSplits, LODParameters inLodParameters, Matrix4x4 inLocalToWorldMatrix, BatchCullingViewType inViewType, BatchCullingProjectionType inProjectionType, BatchCullingFlags inBatchCullingFlags, ulong inViewID, uint inCullingLayerMask, ulong inSceneCullingMask, int inReceiverPlaneOffset, int inReceiverPlaneCount) { }
}


// Namespace: UnityEngine.Rendering
public struct BatchCullingOutput // TypeDefIndex: 5875
{
	// Fields
	public NativeArray<BatchCullingOutputDrawCommands> drawCommands; // 0x0
}


// Namespace: UnityEngine.Rendering
[UsedByNativeCode]
internal struct BatchRendererCullingOutput // TypeDefIndex: 5876
{
	// Fields
	public JobHandle cullingJobsFence; // 0x0
	public Matrix4x4 localToWorldMatrix; // 0x10
	public Plane* cullingPlanes; // 0x50
	public int cullingPlaneCount; // 0x58
	public int receiverPlaneOffset; // 0x5C
	public int receiverPlaneCount; // 0x60
	public CullingSplit* cullingSplits; // 0x68
	public int cullingSplitCount; // 0x70
	public BatchCullingViewType viewType; // 0x74
	public BatchCullingProjectionType projectionType; // 0x78
	public BatchCullingFlags cullingFlags; // 0x7C
	public ulong viewID; // 0x80
	public uint cullingLayerMask; // 0x88
	public ulong sceneCullingMask; // 0x90
	public BatchCullingOutputDrawCommands* drawCommands; // 0x98
}


// Namespace: 
public sealed class BatchRendererGroup.OnPerformCulling : MulticastDelegate // TypeDefIndex: 5877
{
	// Methods

	// RVA: 0x13A13DC Offset: 0x139D3DC VA: 0x13A13DC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13A14E0 Offset: 0x139D4E0 VA: 0x13A14E0 Slot: 12
	public virtual JobHandle Invoke(BatchRendererGroup rendererGroup, BatchCullingContext cullingContext, BatchCullingOutput cullingOutput, IntPtr userContext) { }
}


// Namespace: UnityEngine.Rendering
[RequiredByNativeCode]
public class BatchRendererGroup // TypeDefIndex: 5878
{
	// Fields
	private IntPtr m_GroupHandle; // 0x10
	private BatchRendererGroup.OnPerformCulling m_PerformCulling; // 0x18

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13A1198 Offset: 0x139D198 VA: 0x13A1198
	private static void InvokeOnPerformCulling(BatchRendererGroup group, ref BatchRendererCullingOutput context, ref LODParameters lodParameters, IntPtr userContext) { }
}


// Namespace: UnityEngine.Rendering
[Flags]
public enum ShaderPropertyFlags // TypeDefIndex: 5879
{
	// Fields
	public int value__; // 0x0
	public const ShaderPropertyFlags None = 0;
	public const ShaderPropertyFlags HideInInspector = 1;
	public const ShaderPropertyFlags PerRendererData = 2;
	public const ShaderPropertyFlags NoScaleOffset = 4;
	public const ShaderPropertyFlags Normal = 8;
	public const ShaderPropertyFlags HDR = 16;
	public const ShaderPropertyFlags Gamma = 32;
	public const ShaderPropertyFlags NonModifiableTextureData = 64;
	public const ShaderPropertyFlags MainTexture = 128;
	public const ShaderPropertyFlags MainColor = 256;
}


// Namespace: UnityEngine.Rendering
[RequireComponent(typeof(Transform))]
public sealed class SortingGroup : Behaviour // TypeDefIndex: 5880
{
	// Properties
	internal static int invalidSortingGroupID { get; }
	public int sortingLayerID { get; }
	public int sortingOrder { get; }

	// Methods

	// RVA: 0x13A155C Offset: 0x139D55C VA: 0x13A155C
	internal static int get_invalidSortingGroupID() { }

	// RVA: 0x13A1584 Offset: 0x139D584 VA: 0x13A1584
	internal static SortingGroup GetSortingGroupByIndex(int index) { }

	// RVA: 0x13A15C0 Offset: 0x139D5C0 VA: 0x13A15C0
	public int get_sortingLayerID() { }

	// RVA: 0x13A15FC Offset: 0x139D5FC VA: 0x13A15FC
	public int get_sortingOrder() { }

	// RVA: 0x13A1638 Offset: 0x139D638 VA: 0x13A1638
	public void .ctor() { }
}


// Namespace: 
[Flags]
internal enum FrameData.Flags // TypeDefIndex: 5881
{
	// Fields
	public int value__; // 0x0
	public const FrameData.Flags Evaluate = 1;
	public const FrameData.Flags SeekOccured = 2;
	public const FrameData.Flags Loop = 4;
	public const FrameData.Flags Hold = 8;
	public const FrameData.Flags EffectivePlayStateDelayed = 16;
	public const FrameData.Flags EffectivePlayStatePlaying = 32;
}


// Namespace: UnityEngine.Playables
public struct FrameData // TypeDefIndex: 5882
{
	// Fields
	internal ulong m_FrameID; // 0x0
	internal double m_DeltaTime; // 0x8
	internal float m_Weight; // 0x10
	internal float m_EffectiveWeight; // 0x14
	internal double m_EffectiveParentDelay; // 0x18
	internal float m_EffectiveParentSpeed; // 0x20
	internal float m_EffectiveSpeed; // 0x24
	internal FrameData.Flags m_Flags; // 0x28
	internal PlayableOutput m_Output; // 0x30
}


// Namespace: UnityEngine.Playables
public interface INotification // TypeDefIndex: 5883
{}


// Namespace: UnityEngine.Playables
[RequiredByNativeCode]
public interface INotificationReceiver // TypeDefIndex: 5884
{
	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnNotify(Playable origin, INotification notification, object context);
}


// Namespace: UnityEngine.Playables
public interface IPlayableBehaviour // TypeDefIndex: 5885
{
	// Methods

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnGraphStart(Playable playable);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnGraphStop(Playable playable);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnPlayableCreate(Playable playable);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnPlayableDestroy(Playable playable);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract void OnBehaviourPlay(Playable playable, FrameData info);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 5
	public abstract void OnBehaviourPause(Playable playable, FrameData info);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract void PrepareFrame(Playable playable, FrameData info);

	[RequiredByNativeCode]
	// RVA: -1 Offset: -1 Slot: 7
	public abstract void ProcessFrame(Playable playable, FrameData info, object playerData);
}


// Namespace: UnityEngine.Playables
[RequiredByNativeCode]
public struct Playable : IEquatable<Playable> // TypeDefIndex: 5886
{
	// Fields
	private PlayableHandle m_Handle; // 0x0
	private static readonly Playable m_NullPlayable; // 0x0

	// Properties
	public static Playable Null { get; }

	// Methods

	// RVA: 0x13A1640 Offset: 0x139D640 VA: 0x13A1640
	public static Playable get_Null() { }

	// RVA: 0x13A1698 Offset: 0x139D698 VA: 0x13A1698
	internal void .ctor(PlayableHandle handle) { }

	// RVA: 0x13A16A0 Offset: 0x139D6A0 VA: 0x13A16A0 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x13A16AC Offset: 0x139D6AC VA: 0x13A16AC Slot: 4
	public bool Equals(Playable other) { }

	// RVA: 0x13A17CC Offset: 0x139D7CC VA: 0x13A17CC
	private static void .cctor() { }
}


// Namespace: UnityEngine.Playables
[RequiredByNativeCode]
[Serializable]
public abstract class PlayableAsset : ScriptableObject // TypeDefIndex: 5887
{
	// Properties
	public virtual double duration { get; }
	public virtual IEnumerable<PlayableBinding> outputs { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Playable CreatePlayable(PlayableGraph graph, GameObject owner);

	// RVA: 0x13A1894 Offset: 0x139D894 VA: 0x13A1894 Slot: 5
	public virtual double get_duration() { }

	// RVA: 0x13A18EC Offset: 0x139D8EC VA: 0x13A18EC Slot: 6
	public virtual IEnumerable<PlayableBinding> get_outputs() { }

	[RequiredByNativeCode]
	// RVA: 0x13A1944 Offset: 0x139D944 VA: 0x13A1944
	internal static void Internal_CreatePlayable(PlayableAsset asset, PlayableGraph graph, GameObject go, IntPtr ptr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A1A1C Offset: 0x139DA1C VA: 0x13A1A1C
	internal static void Internal_GetPlayableAssetDuration(PlayableAsset asset, IntPtr ptrToDouble) { }

	// RVA: 0x13A1A44 Offset: 0x139DA44 VA: 0x13A1A44
	protected void .ctor() { }
}


// Namespace: UnityEngine.Playables
[RequiredByNativeCode]
[Serializable]
public abstract class PlayableBehaviour : IPlayableBehaviour, ICloneable // TypeDefIndex: 5888
{
	// Methods

	// RVA: 0x13A1A4C Offset: 0x139DA4C VA: 0x13A1A4C
	public void .ctor() { }

	// RVA: 0x13A1A54 Offset: 0x139DA54 VA: 0x13A1A54 Slot: 13
	public virtual void OnGraphStart(Playable playable) { }

	// RVA: 0x13A1A58 Offset: 0x139DA58 VA: 0x13A1A58 Slot: 14
	public virtual void OnGraphStop(Playable playable) { }

	// RVA: 0x13A1A5C Offset: 0x139DA5C VA: 0x13A1A5C Slot: 15
	public virtual void OnPlayableCreate(Playable playable) { }

	// RVA: 0x13A1A60 Offset: 0x139DA60 VA: 0x13A1A60 Slot: 16
	public virtual void OnPlayableDestroy(Playable playable) { }

	// RVA: 0x13A1A64 Offset: 0x139DA64 VA: 0x13A1A64 Slot: 17
	public virtual void OnBehaviourPlay(Playable playable, FrameData info) { }

	// RVA: 0x13A1A68 Offset: 0x139DA68 VA: 0x13A1A68 Slot: 18
	public virtual void OnBehaviourPause(Playable playable, FrameData info) { }

	// RVA: 0x13A1A6C Offset: 0x139DA6C VA: 0x13A1A6C Slot: 19
	public virtual void PrepareFrame(Playable playable, FrameData info) { }

	// RVA: 0x13A1A70 Offset: 0x139DA70 VA: 0x13A1A70 Slot: 20
	public virtual void ProcessFrame(Playable playable, FrameData info, object playerData) { }

	// RVA: 0x13A1A74 Offset: 0x139DA74 VA: 0x13A1A74 Slot: 21
	public virtual object Clone() { }
}


// Namespace: 
internal sealed class PlayableBinding.CreateOutputMethod : MulticastDelegate // TypeDefIndex: 5889
{
	// Methods

	// RVA: 0x13A1AF4 Offset: 0x139DAF4 VA: 0x13A1AF4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13A1B80 Offset: 0x139DB80 VA: 0x13A1B80 Slot: 12
	public virtual PlayableOutput Invoke(PlayableGraph graph, string name) { }
}


// Namespace: UnityEngine.Playables
public struct PlayableBinding // TypeDefIndex: 5890
{
	// Fields
	private string m_StreamName; // 0x0
	private Object m_SourceObject; // 0x8
	private Type m_SourceBindingType; // 0x10
	private PlayableBinding.CreateOutputMethod m_CreateOutputMethod; // 0x18
	public static readonly PlayableBinding[] None; // 0x0
	public static readonly double DefaultDuration; // 0x8

	// Methods

	// RVA: 0x13A1A7C Offset: 0x139DA7C VA: 0x13A1A7C
	private static void .cctor() { }
}


// Namespace: UnityEngine.Playables
[UsedByNativeCode]
public struct PlayableGraph // TypeDefIndex: 5891
{
	// Fields
	internal IntPtr m_Handle; // 0x0
	internal uint m_Version; // 0x8
}


// Namespace: UnityEngine.Playables
[UsedByNativeCode]
public struct PlayableHandle : IEquatable<PlayableHandle> // TypeDefIndex: 5892
{
	// Fields
	internal IntPtr m_Handle; // 0x0
	internal uint m_Version; // 0x8
	private static readonly PlayableHandle m_Null; // 0x0

	// Properties
	public static PlayableHandle Null { get; }

	// Methods

	// RVA: -1 Offset: -1
	internal bool IsPlayableOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA362C Offset: 0xB9F62C VA: 0xBA362C
	|-PlayableHandle.IsPlayableOfType<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13A183C Offset: 0x139D83C VA: 0x13A183C
	public static PlayableHandle get_Null() { }

	// RVA: 0x13A1744 Offset: 0x139D744 VA: 0x13A1744
	public static bool op_Equality(PlayableHandle x, PlayableHandle y) { }

	// RVA: 0x13A1BC8 Offset: 0x139DBC8 VA: 0x13A1BC8 Slot: 0
	public override bool Equals(object p) { }

	// RVA: 0x13A1C70 Offset: 0x139DC70 VA: 0x13A1C70 Slot: 4
	public bool Equals(PlayableHandle other) { }

	// RVA: 0x13A1CF0 Offset: 0x139DCF0 VA: 0x13A1CF0 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A1B94 Offset: 0x139DB94 VA: 0x13A1B94
	internal static bool CompareVersion(PlayableHandle lhs, PlayableHandle rhs) { }

	// RVA: 0x13A1D24 Offset: 0x139DD24 VA: 0x13A1D24
	internal bool IsValid() { }

	// RVA: 0x13A1DD4 Offset: 0x139DDD4 VA: 0x13A1DD4
	internal Type GetPlayableType() { }

	// RVA: 0x13A1E84 Offset: 0x139DE84 VA: 0x13A1E84
	private static void .cctor() { }

	// RVA: 0x13A1D98 Offset: 0x139DD98 VA: 0x13A1D98
	private static bool IsValid_Injected(ref PlayableHandle _unity_self) { }

	// RVA: 0x13A1E48 Offset: 0x139DE48 VA: 0x13A1E48
	private static Type GetPlayableType_Injected(ref PlayableHandle _unity_self) { }
}


// Namespace: UnityEngine.Playables
[RequiredByNativeCode]
public struct PlayableOutput : IEquatable<PlayableOutput> // TypeDefIndex: 5893
{
	// Fields
	private PlayableOutputHandle m_Handle; // 0x0
	private static readonly PlayableOutput m_NullPlayableOutput; // 0x0

	// Methods

	// RVA: 0x13A1ECC Offset: 0x139DECC VA: 0x13A1ECC
	internal void .ctor(PlayableOutputHandle handle) { }

	// RVA: 0x13A1ED4 Offset: 0x139DED4 VA: 0x13A1ED4 Slot: 5
	public PlayableOutputHandle GetHandle() { }

	// RVA: 0x13A1EE0 Offset: 0x139DEE0 VA: 0x13A1EE0 Slot: 4
	public bool Equals(PlayableOutput other) { }

	// RVA: 0x13A2000 Offset: 0x139E000 VA: 0x13A2000
	private static void .cctor() { }
}


// Namespace: UnityEngine.Playables
[UsedByNativeCode]
public struct PlayableOutputHandle : IEquatable<PlayableOutputHandle> // TypeDefIndex: 5894
{
	// Fields
	internal IntPtr m_Handle; // 0x0
	internal uint m_Version; // 0x8
	private static readonly PlayableOutputHandle m_Null; // 0x0

	// Properties
	public static PlayableOutputHandle Null { get; }

	// Methods

	// RVA: 0x13A2070 Offset: 0x139E070 VA: 0x13A2070
	public static PlayableOutputHandle get_Null() { }

	// RVA: 0x13A20C8 Offset: 0x139E0C8 VA: 0x13A20C8 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A1F78 Offset: 0x139DF78 VA: 0x13A1F78
	public static bool op_Equality(PlayableOutputHandle lhs, PlayableOutputHandle rhs) { }

	// RVA: 0x13A2130 Offset: 0x139E130 VA: 0x13A2130 Slot: 0
	public override bool Equals(object p) { }

	// RVA: 0x13A21D8 Offset: 0x139E1D8 VA: 0x13A21D8 Slot: 4
	public bool Equals(PlayableOutputHandle other) { }

	// RVA: 0x13A20FC Offset: 0x139E0FC VA: 0x13A20FC
	internal static bool CompareVersion(PlayableOutputHandle lhs, PlayableOutputHandle rhs) { }

	// RVA: 0x13A2258 Offset: 0x139E258 VA: 0x13A2258
	private static void .cctor() { }
}


// Namespace: UnityEngine.Playables
[RequiredByNativeCode]
public struct ScriptPlayableOutput // TypeDefIndex: 5895
{
	// Fields
	private PlayableOutputHandle m_Handle; // 0x0
}


// Namespace: UnityEngine.Experimental.U2D
[RequiredByNativeCode]
internal struct SpriteIntermediateRendererInfo // TypeDefIndex: 5896
{
	// Fields
	public int SpriteID; // 0x0
	public int TextureID; // 0x4
	public int MaterialID; // 0x8
	public Color Color; // 0xC
	public Matrix4x4 Transform; // 0x1C
	public Bounds Bounds; // 0x5C
	public int Layer; // 0x74
	public int SortingLayer; // 0x78
	public int SortingOrder; // 0x7C
	public ulong SceneCullingMask; // 0x80
	public IntPtr IndexData; // 0x88
	public IntPtr VertexData; // 0x90
	public int IndexCount; // 0x98
	public int VertexCount; // 0x9C
	public int ShaderChannelMask; // 0xA0
}


// Namespace: UnityEngine.Experimental.U2D
[RequiredByNativeCode]
internal class SpriteRendererGroup // TypeDefIndex: 5897
{}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public enum LightType // TypeDefIndex: 5898
{
	// Fields
	public byte value__; // 0x0
	public const LightType Directional = 0;
	public const LightType Point = 1;
	public const LightType Spot = 2;
	public const LightType Rectangle = 3;
	public const LightType Disc = 4;
	public const LightType SpotPyramidShape = 5;
	public const LightType SpotBoxShape = 6;
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public enum LightMode // TypeDefIndex: 5899
{
	// Fields
	public byte value__; // 0x0
	public const LightMode Realtime = 0;
	public const LightMode Mixed = 1;
	public const LightMode Baked = 2;
	public const LightMode Unknown = 3;
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public enum FalloffType // TypeDefIndex: 5900
{
	// Fields
	public byte value__; // 0x0
	public const FalloffType InverseSquared = 0;
	public const FalloffType InverseSquaredNoRangeAttenuation = 1;
	public const FalloffType Linear = 2;
	public const FalloffType Legacy = 3;
	public const FalloffType Undefined = 4;
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public enum AngularFalloffType // TypeDefIndex: 5901
{
	// Fields
	public byte value__; // 0x0
	public const AngularFalloffType LUT = 0;
	public const AngularFalloffType AnalyticAndInnerAngle = 1;
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct LinearColor // TypeDefIndex: 5902
{
	// Fields
	private float m_red; // 0x0
	private float m_green; // 0x4
	private float m_blue; // 0x8
	private float m_intensity; // 0xC

	// Properties
	public float red { get; set; }
	public float green { get; set; }
	public float blue { get; set; }

	// Methods

	// RVA: 0x13A22A0 Offset: 0x139E2A0 VA: 0x13A22A0
	public float get_red() { }

	// RVA: 0x13A22A8 Offset: 0x139E2A8 VA: 0x13A22A8
	public void set_red(float value) { }

	// RVA: 0x13A2354 Offset: 0x139E354 VA: 0x13A2354
	public float get_green() { }

	// RVA: 0x13A235C Offset: 0x139E35C VA: 0x13A235C
	public void set_green(float value) { }

	// RVA: 0x13A2408 Offset: 0x139E408 VA: 0x13A2408
	public float get_blue() { }

	// RVA: 0x13A2410 Offset: 0x139E410 VA: 0x13A2410
	public void set_blue(float value) { }

	// RVA: 0x13A24BC Offset: 0x139E4BC VA: 0x13A24BC
	public static LinearColor Convert(Color color, float intensity) { }

	// RVA: 0x13A2780 Offset: 0x139E780 VA: 0x13A2780
	public static LinearColor Black() { }
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct DirectionalLight // TypeDefIndex: 5903
{
	// Fields
	public int instanceID; // 0x0
	public bool shadow; // 0x4
	public LightMode mode; // 0x5
	public Vector3 position; // 0x8
	public Quaternion orientation; // 0x14
	public LinearColor color; // 0x24
	public LinearColor indirectColor; // 0x34
	public float penumbraWidthRadian; // 0x44
	[Obsolete("Directional lights support cookies now. In order to position the cookie projection in the world, a position and full orientation are necessary. Use the position and orientation members instead of the direction parameter.", True)]
	public Vector3 direction; // 0x48
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct PointLight // TypeDefIndex: 5904
{
	// Fields
	public int instanceID; // 0x0
	public bool shadow; // 0x4
	public LightMode mode; // 0x5
	public Vector3 position; // 0x8
	public Quaternion orientation; // 0x14
	public LinearColor color; // 0x24
	public LinearColor indirectColor; // 0x34
	public float range; // 0x44
	public float sphereRadius; // 0x48
	public FalloffType falloff; // 0x4C
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct SpotLight // TypeDefIndex: 5905
{
	// Fields
	public int instanceID; // 0x0
	public bool shadow; // 0x4
	public LightMode mode; // 0x5
	public Vector3 position; // 0x8
	public Quaternion orientation; // 0x14
	public LinearColor color; // 0x24
	public LinearColor indirectColor; // 0x34
	public float range; // 0x44
	public float sphereRadius; // 0x48
	public float coneAngle; // 0x4C
	public float innerConeAngle; // 0x50
	public FalloffType falloff; // 0x54
	public AngularFalloffType angularFalloff; // 0x55
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct RectangleLight // TypeDefIndex: 5906
{
	// Fields
	public int instanceID; // 0x0
	public bool shadow; // 0x4
	public LightMode mode; // 0x5
	public Vector3 position; // 0x8
	public Quaternion orientation; // 0x14
	public LinearColor color; // 0x24
	public LinearColor indirectColor; // 0x34
	public float range; // 0x44
	public float width; // 0x48
	public float height; // 0x4C
	public FalloffType falloff; // 0x50
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct DiscLight // TypeDefIndex: 5907
{
	// Fields
	public int instanceID; // 0x0
	public bool shadow; // 0x4
	public LightMode mode; // 0x5
	public Vector3 position; // 0x8
	public Quaternion orientation; // 0x14
	public LinearColor color; // 0x24
	public LinearColor indirectColor; // 0x34
	public float range; // 0x44
	public float radius; // 0x48
	public FalloffType falloff; // 0x4C
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public struct Cookie // TypeDefIndex: 5908
{
	// Fields
	public int instanceID; // 0x0
	public float scale; // 0x4
	public Vector2 sizes; // 0x8
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
[UsedByNativeCode]
public struct LightDataGI // TypeDefIndex: 5909
{
	// Fields
	public int instanceID; // 0x0
	public int cookieID; // 0x4
	public float cookieScale; // 0x8
	public LinearColor color; // 0xC
	public LinearColor indirectColor; // 0x1C
	public Quaternion orientation; // 0x2C
	public Vector3 position; // 0x3C
	public float range; // 0x48
	public float coneAngle; // 0x4C
	public float innerConeAngle; // 0x50
	public float shape0; // 0x54
	public float shape1; // 0x58
	public LightType type; // 0x5C
	public LightMode mode; // 0x5D
	public byte shadow; // 0x5E
	public FalloffType falloff; // 0x5F

	// Methods

	// RVA: 0x13A2794 Offset: 0x139E794 VA: 0x13A2794
	public void Init(ref DirectionalLight light, ref Cookie cookie) { }

	// RVA: 0x13A2808 Offset: 0x139E808 VA: 0x13A2808
	public void Init(ref PointLight light, ref Cookie cookie) { }

	// RVA: 0x13A2884 Offset: 0x139E884 VA: 0x13A2884
	public void Init(ref SpotLight light, ref Cookie cookie) { }

	// RVA: 0x13A2904 Offset: 0x139E904 VA: 0x13A2904
	public void Init(ref RectangleLight light, ref Cookie cookie) { }

	// RVA: 0x13A297C Offset: 0x139E97C VA: 0x13A297C
	public void Init(ref DiscLight light, ref Cookie cookie) { }

	// RVA: 0x13A29F8 Offset: 0x139E9F8 VA: 0x13A29F8
	public void InitNoBake(int lightInstanceID) { }
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public static class LightmapperUtils // TypeDefIndex: 5910
{
	// Methods

	// RVA: 0x13A2A08 Offset: 0x139EA08 VA: 0x13A2A08
	public static LightMode Extract(LightmapBakeType baketype) { }

	// RVA: 0x13A2A28 Offset: 0x139EA28 VA: 0x13A2A28
	public static LinearColor ExtractIndirect(Light l) { }

	// RVA: 0x13A2AA0 Offset: 0x139EAA0 VA: 0x13A2AA0
	public static float ExtractInnerCone(Light l) { }

	// RVA: 0x13A2AF4 Offset: 0x139EAF4 VA: 0x13A2AF4
	private static Color ExtractColorTemperature(Light l) { }

	// RVA: 0x13A2B8C Offset: 0x139EB8C VA: 0x13A2B8C
	private static void ApplyColorTemperature(Color cct, ref LinearColor lightColor) { }

	// RVA: 0x13A2BD4 Offset: 0x139EBD4 VA: 0x13A2BD4
	public static void Extract(Light l, ref DirectionalLight dir) { }

	// RVA: 0x13A2D70 Offset: 0x139ED70 VA: 0x13A2D70
	public static void Extract(Light l, ref PointLight point) { }

	// RVA: 0x13A2F24 Offset: 0x139EF24 VA: 0x13A2F24
	public static void Extract(Light l, ref SpotLight spot) { }

	// RVA: 0x13A3100 Offset: 0x139F100 VA: 0x13A3100
	public static void Extract(Light l, ref RectangleLight rect) { }

	// RVA: 0x13A32B4 Offset: 0x139F2B4 VA: 0x13A32B4
	public static void Extract(Light l, ref DiscLight disc) { }

	// RVA: 0x13A3468 Offset: 0x139F468 VA: 0x13A3468
	public static void Extract(Light l, out Cookie cookie) { }
}


// Namespace: 
public sealed class Lightmapping.RequestLightsDelegate : MulticastDelegate // TypeDefIndex: 5911
{
	// Methods

	// RVA: 0x13A3874 Offset: 0x139F874 VA: 0x13A3874
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13A3914 Offset: 0x139F914 VA: 0x13A3914 Slot: 12
	public virtual void Invoke(Light[] requests, NativeArray<LightDataGI> lightsOutput) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class Lightmapping.<>c // TypeDefIndex: 5912
{
	// Fields
	public static readonly Lightmapping.<>c <>9; // 0x0

	// Methods

	// RVA: 0x13A3928 Offset: 0x139F928 VA: 0x13A3928
	private static void .cctor() { }

	// RVA: 0x13A3984 Offset: 0x139F984 VA: 0x13A3984
	public void .ctor() { }

	// RVA: 0x13A398C Offset: 0x139F98C VA: 0x13A398C
	internal void <.cctor>b__7_0(Light[] requests, NativeArray<LightDataGI> lightsOutput) { }
}


// Namespace: UnityEngine.Experimental.GlobalIllumination
public static class Lightmapping // TypeDefIndex: 5913
{
	// Fields
	[RequiredByNativeCode]
	private static readonly Lightmapping.RequestLightsDelegate s_DefaultDelegate; // 0x0
	[RequiredByNativeCode]
	private static Lightmapping.RequestLightsDelegate s_RequestLightsDelegate; // 0x8

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13A35AC Offset: 0x139F5AC VA: 0x13A35AC
	public static void SetDelegate(Lightmapping.RequestLightsDelegate del) { }

	[RequiredByNativeCode]
	// RVA: 0x13A3624 Offset: 0x139F624 VA: 0x13A3624
	public static Lightmapping.RequestLightsDelegate GetDelegate() { }

	[RequiredByNativeCode]
	// RVA: 0x13A367C Offset: 0x139F67C VA: 0x13A367C
	public static void ResetDelegate() { }

	[RequiredByNativeCode]
	// RVA: 0x13A36D8 Offset: 0x139F6D8 VA: 0x13A36D8
	internal static void RequestLights(Light[] lights, IntPtr outLightsPtr, int outLightsCount) { }

	// RVA: 0x13A37A4 Offset: 0x139F7A4 VA: 0x13A37A4
	private static void .cctor() { }
}


// Namespace: UnityEngine.Experimental.Playables
[RequiredByNativeCode]
public struct CameraPlayable : IEquatable<CameraPlayable> // TypeDefIndex: 5914
{
	// Fields
	private PlayableHandle m_Handle; // 0x0

	// Methods

	// RVA: 0x13A3E48 Offset: 0x139FE48 VA: 0x13A3E48 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x13A3E54 Offset: 0x139FE54 VA: 0x13A3E54 Slot: 4
	public bool Equals(CameraPlayable other) { }
}


// Namespace: UnityEngine.Experimental.Playables
[RequiredByNativeCode]
public struct MaterialEffectPlayable : IEquatable<MaterialEffectPlayable> // TypeDefIndex: 5915
{
	// Fields
	private PlayableHandle m_Handle; // 0x0

	// Methods

	// RVA: 0x13A3EC8 Offset: 0x139FEC8 VA: 0x13A3EC8 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x13A3ED4 Offset: 0x139FED4 VA: 0x13A3ED4 Slot: 4
	public bool Equals(MaterialEffectPlayable other) { }
}


// Namespace: UnityEngine.Experimental.Playables
[RequiredByNativeCode]
public struct TextureMixerPlayable : IEquatable<TextureMixerPlayable> // TypeDefIndex: 5916
{
	// Fields
	private PlayableHandle m_Handle; // 0x0

	// Methods

	// RVA: 0x13A3F48 Offset: 0x139FF48 VA: 0x13A3F48 Slot: 5
	public PlayableHandle GetHandle() { }

	// RVA: 0x13A3F54 Offset: 0x139FF54 VA: 0x13A3F54 Slot: 4
	public bool Equals(TextureMixerPlayable other) { }
}


// Namespace: UnityEngine.Experimental.Playables
[RequiredByNativeCode]
public struct TexturePlayableOutput // TypeDefIndex: 5917
{
	// Fields
	private PlayableOutputHandle m_Handle; // 0x0
}


// Namespace: UnityEngine.Experimental.Rendering
internal class BuiltinRuntimeReflectionSystem : IScriptableRuntimeReflectionSystem, IDisposable // TypeDefIndex: 5918
{
	// Methods

	// RVA: 0x13A3FC8 Offset: 0x139FFC8 VA: 0x13A3FC8 Slot: 4
	public bool TickRealtimeProbes() { }

	// RVA: 0x13A4018 Offset: 0x13A0018 VA: 0x13A4018 Slot: 5
	public void Dispose() { }

	// RVA: 0x13A401C Offset: 0x13A001C VA: 0x13A401C
	private void Dispose(bool disposing) { }

	// RVA: 0x13A3FF0 Offset: 0x139FFF0 VA: 0x13A3FF0
	private static bool BuiltinUpdate() { }

	[RequiredByNativeCode]
	// RVA: 0x13A4020 Offset: 0x13A0020 VA: 0x13A4020
	private static BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New() { }

	// RVA: 0x13A4074 Offset: 0x13A0074 VA: 0x13A4074
	public void .ctor() { }
}


// Namespace: UnityEngine.Experimental.Rendering
public interface IScriptableRuntimeReflectionSystem : IDisposable // TypeDefIndex: 5919
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool TickRealtimeProbes();
}


// Namespace: UnityEngine.Experimental.Rendering
[RequiredByNativeCode]
public static class ScriptableRuntimeReflectionSystemSettings // TypeDefIndex: 5920
{
	// Fields
	private static ScriptableRuntimeReflectionSystemWrapper s_Instance; // 0x0

	// Properties
	private static IScriptableRuntimeReflectionSystem Internal_ScriptableRuntimeReflectionSystemSettings_system { set; }
	private static ScriptableRuntimeReflectionSystemWrapper Internal_ScriptableRuntimeReflectionSystemSettings_instance { get; }

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13A407C Offset: 0x13A007C VA: 0x13A407C
	private static void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(IScriptableRuntimeReflectionSystem value) { }

	[RequiredByNativeCode]
	// RVA: 0x13A41C4 Offset: 0x13A01C4 VA: 0x13A41C4
	private static ScriptableRuntimeReflectionSystemWrapper get_Internal_ScriptableRuntimeReflectionSystemSettings_instance() { }

	[RuntimeInitializeOnLoadMethod(0)]
	// RVA: 0x13A421C Offset: 0x13A021C VA: 0x13A421C
	private static void ScriptingDirtyReflectionSystemInstance() { }

	// RVA: 0x13A4244 Offset: 0x13A0244 VA: 0x13A4244
	private static void .cctor() { }
}


// Namespace: UnityEngine.Experimental.Rendering
[RequiredByNativeCode]
internal class ScriptableRuntimeReflectionSystemWrapper // TypeDefIndex: 5921
{
	// Fields
	[CompilerGenerated]
	private IScriptableRuntimeReflectionSystem <implementation>k__BackingField; // 0x10

	// Properties
	internal IScriptableRuntimeReflectionSystem implementation { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13A42BC Offset: 0x13A02BC VA: 0x13A42BC
	internal IScriptableRuntimeReflectionSystem get_implementation() { }

	[CompilerGenerated]
	// RVA: 0x13A42C4 Offset: 0x13A02C4 VA: 0x13A42C4
	internal void set_implementation(IScriptableRuntimeReflectionSystem value) { }

	[RequiredByNativeCode]
	// RVA: 0x13A42CC Offset: 0x13A02CC VA: 0x13A42CC
	private void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(out bool result) { }

	// RVA: 0x13A42B4 Offset: 0x13A02B4 VA: 0x13A42B4
	public void .ctor() { }
}


// Namespace: UnityEngine.Experimental.Rendering
[Flags]
public enum TextureCreationFlags // TypeDefIndex: 5922
{
	// Fields
	public int value__; // 0x0
	public const TextureCreationFlags None = 0;
	public const TextureCreationFlags MipChain = 1;
	public const TextureCreationFlags DontInitializePixels = 4;
	public const TextureCreationFlags Crunch = 64;
	public const TextureCreationFlags DontUploadUponCreate = 1024;
	public const TextureCreationFlags IgnoreMipmapLimit = 2048;
}


// Namespace: UnityEngine.Experimental.Rendering
public enum FormatUsage // TypeDefIndex: 5923
{
	// Fields
	public int value__; // 0x0
	public const FormatUsage Sample = 0;
	public const FormatUsage Linear = 1;
	public const FormatUsage Sparse = 2;
	public const FormatUsage Render = 4;
	public const FormatUsage Blend = 5;
	public const FormatUsage GetPixels = 6;
	public const FormatUsage SetPixels = 7;
	public const FormatUsage SetPixels32 = 8;
	public const FormatUsage ReadPixels = 9;
	public const FormatUsage LoadStore = 10;
	public const FormatUsage MSAA2x = 11;
	public const FormatUsage MSAA4x = 12;
	public const FormatUsage MSAA8x = 13;
	public const FormatUsage StencilSampling = 16;
}


// Namespace: UnityEngine.Experimental.Rendering
public enum DefaultFormat // TypeDefIndex: 5924
{
	// Fields
	public int value__; // 0x0
	public const DefaultFormat LDR = 0;
	public const DefaultFormat HDR = 1;
	public const DefaultFormat DepthStencil = 2;
	public const DefaultFormat Shadow = 3;
	public const DefaultFormat Video = 4;
}


// Namespace: UnityEngine.Experimental.Rendering
public enum GraphicsFormat // TypeDefIndex: 5925
{
	// Fields
	public int value__; // 0x0
	public const GraphicsFormat None = 0;
	public const GraphicsFormat R8_SRGB = 1;
	public const GraphicsFormat R8G8_SRGB = 2;
	public const GraphicsFormat R8G8B8_SRGB = 3;
	public const GraphicsFormat R8G8B8A8_SRGB = 4;
	public const GraphicsFormat R8_UNorm = 5;
	public const GraphicsFormat R8G8_UNorm = 6;
	public const GraphicsFormat R8G8B8_UNorm = 7;
	public const GraphicsFormat R8G8B8A8_UNorm = 8;
	public const GraphicsFormat R8_SNorm = 9;
	public const GraphicsFormat R8G8_SNorm = 10;
	public const GraphicsFormat R8G8B8_SNorm = 11;
	public const GraphicsFormat R8G8B8A8_SNorm = 12;
	public const GraphicsFormat R8_UInt = 13;
	public const GraphicsFormat R8G8_UInt = 14;
	public const GraphicsFormat R8G8B8_UInt = 15;
	public const GraphicsFormat R8G8B8A8_UInt = 16;
	public const GraphicsFormat R8_SInt = 17;
	public const GraphicsFormat R8G8_SInt = 18;
	public const GraphicsFormat R8G8B8_SInt = 19;
	public const GraphicsFormat R8G8B8A8_SInt = 20;
	public const GraphicsFormat R16_UNorm = 21;
	public const GraphicsFormat R16G16_UNorm = 22;
	public const GraphicsFormat R16G16B16_UNorm = 23;
	public const GraphicsFormat R16G16B16A16_UNorm = 24;
	public const GraphicsFormat R16_SNorm = 25;
	public const GraphicsFormat R16G16_SNorm = 26;
	public const GraphicsFormat R16G16B16_SNorm = 27;
	public const GraphicsFormat R16G16B16A16_SNorm = 28;
	public const GraphicsFormat R16_UInt = 29;
	public const GraphicsFormat R16G16_UInt = 30;
	public const GraphicsFormat R16G16B16_UInt = 31;
	public const GraphicsFormat R16G16B16A16_UInt = 32;
	public const GraphicsFormat R16_SInt = 33;
	public const GraphicsFormat R16G16_SInt = 34;
	public const GraphicsFormat R16G16B16_SInt = 35;
	public const GraphicsFormat R16G16B16A16_SInt = 36;
	public const GraphicsFormat R32_UInt = 37;
	public const GraphicsFormat R32G32_UInt = 38;
	public const GraphicsFormat R32G32B32_UInt = 39;
	public const GraphicsFormat R32G32B32A32_UInt = 40;
	public const GraphicsFormat R32_SInt = 41;
	public const GraphicsFormat R32G32_SInt = 42;
	public const GraphicsFormat R32G32B32_SInt = 43;
	public const GraphicsFormat R32G32B32A32_SInt = 44;
	public const GraphicsFormat R16_SFloat = 45;
	public const GraphicsFormat R16G16_SFloat = 46;
	public const GraphicsFormat R16G16B16_SFloat = 47;
	public const GraphicsFormat R16G16B16A16_SFloat = 48;
	public const GraphicsFormat R32_SFloat = 49;
	public const GraphicsFormat R32G32_SFloat = 50;
	public const GraphicsFormat R32G32B32_SFloat = 51;
	public const GraphicsFormat R32G32B32A32_SFloat = 52;
	public const GraphicsFormat B8G8R8_SRGB = 56;
	public const GraphicsFormat B8G8R8A8_SRGB = 57;
	public const GraphicsFormat B8G8R8_UNorm = 58;
	public const GraphicsFormat B8G8R8A8_UNorm = 59;
	public const GraphicsFormat B8G8R8_SNorm = 60;
	public const GraphicsFormat B8G8R8A8_SNorm = 61;
	public const GraphicsFormat B8G8R8_UInt = 62;
	public const GraphicsFormat B8G8R8A8_UInt = 63;
	public const GraphicsFormat B8G8R8_SInt = 64;
	public const GraphicsFormat B8G8R8A8_SInt = 65;
	public const GraphicsFormat R4G4B4A4_UNormPack16 = 66;
	public const GraphicsFormat B4G4R4A4_UNormPack16 = 67;
	public const GraphicsFormat R5G6B5_UNormPack16 = 68;
	public const GraphicsFormat B5G6R5_UNormPack16 = 69;
	public const GraphicsFormat R5G5B5A1_UNormPack16 = 70;
	public const GraphicsFormat B5G5R5A1_UNormPack16 = 71;
	public const GraphicsFormat A1R5G5B5_UNormPack16 = 72;
	public const GraphicsFormat E5B9G9R9_UFloatPack32 = 73;
	public const GraphicsFormat B10G11R11_UFloatPack32 = 74;
	public const GraphicsFormat A2B10G10R10_UNormPack32 = 75;
	public const GraphicsFormat A2B10G10R10_UIntPack32 = 76;
	public const GraphicsFormat A2B10G10R10_SIntPack32 = 77;
	public const GraphicsFormat A2R10G10B10_UNormPack32 = 78;
	public const GraphicsFormat A2R10G10B10_UIntPack32 = 79;
	public const GraphicsFormat A2R10G10B10_SIntPack32 = 80;
	public const GraphicsFormat A2R10G10B10_XRSRGBPack32 = 81;
	public const GraphicsFormat A2R10G10B10_XRUNormPack32 = 82;
	public const GraphicsFormat R10G10B10_XRSRGBPack32 = 83;
	public const GraphicsFormat R10G10B10_XRUNormPack32 = 84;
	public const GraphicsFormat A10R10G10B10_XRSRGBPack32 = 85;
	public const GraphicsFormat A10R10G10B10_XRUNormPack32 = 86;
	public const GraphicsFormat D16_UNorm = 90;
	public const GraphicsFormat D24_UNorm = 91;
	public const GraphicsFormat D24_UNorm_S8_UInt = 92;
	public const GraphicsFormat D32_SFloat = 93;
	public const GraphicsFormat D32_SFloat_S8_UInt = 94;
	public const GraphicsFormat S8_UInt = 95;
	[Obsolete("Enum member GraphicsFormat.RGB_DXT1_SRGB has been deprecated. Use GraphicsFormat.RGBA_DXT1_SRGB instead (UnityUpgradable) -> RGBA_DXT1_SRGB", True)]
	public const GraphicsFormat RGB_DXT1_SRGB = 96;
	public const GraphicsFormat RGBA_DXT1_SRGB = 96;
	[Obsolete("Enum member GraphicsFormat.RGB_DXT1_UNorm has been deprecated. Use GraphicsFormat.RGBA_DXT1_UNorm instead (UnityUpgradable) -> RGBA_DXT1_UNorm", True)]
	public const GraphicsFormat RGB_DXT1_UNorm = 97;
	public const GraphicsFormat RGBA_DXT1_UNorm = 97;
	public const GraphicsFormat RGBA_DXT3_SRGB = 98;
	public const GraphicsFormat RGBA_DXT3_UNorm = 99;
	public const GraphicsFormat RGBA_DXT5_SRGB = 100;
	public const GraphicsFormat RGBA_DXT5_UNorm = 101;
	public const GraphicsFormat R_BC4_UNorm = 102;
	public const GraphicsFormat R_BC4_SNorm = 103;
	public const GraphicsFormat RG_BC5_UNorm = 104;
	public const GraphicsFormat RG_BC5_SNorm = 105;
	public const GraphicsFormat RGB_BC6H_UFloat = 106;
	public const GraphicsFormat RGB_BC6H_SFloat = 107;
	public const GraphicsFormat RGBA_BC7_SRGB = 108;
	public const GraphicsFormat RGBA_BC7_UNorm = 109;
	public const GraphicsFormat RGB_PVRTC_2Bpp_SRGB = 110;
	public const GraphicsFormat RGB_PVRTC_2Bpp_UNorm = 111;
	public const GraphicsFormat RGB_PVRTC_4Bpp_SRGB = 112;
	public const GraphicsFormat RGB_PVRTC_4Bpp_UNorm = 113;
	public const GraphicsFormat RGBA_PVRTC_2Bpp_SRGB = 114;
	public const GraphicsFormat RGBA_PVRTC_2Bpp_UNorm = 115;
	public const GraphicsFormat RGBA_PVRTC_4Bpp_SRGB = 116;
	public const GraphicsFormat RGBA_PVRTC_4Bpp_UNorm = 117;
	public const GraphicsFormat RGB_ETC_UNorm = 118;
	public const GraphicsFormat RGB_ETC2_SRGB = 119;
	public const GraphicsFormat RGB_ETC2_UNorm = 120;
	public const GraphicsFormat RGB_A1_ETC2_SRGB = 121;
	public const GraphicsFormat RGB_A1_ETC2_UNorm = 122;
	public const GraphicsFormat RGBA_ETC2_SRGB = 123;
	public const GraphicsFormat RGBA_ETC2_UNorm = 124;
	public const GraphicsFormat R_EAC_UNorm = 125;
	public const GraphicsFormat R_EAC_SNorm = 126;
	public const GraphicsFormat RG_EAC_UNorm = 127;
	public const GraphicsFormat RG_EAC_SNorm = 128;
	public const GraphicsFormat RGBA_ASTC4X4_SRGB = 129;
	public const GraphicsFormat RGBA_ASTC4X4_UNorm = 130;
	public const GraphicsFormat RGBA_ASTC5X5_SRGB = 131;
	public const GraphicsFormat RGBA_ASTC5X5_UNorm = 132;
	public const GraphicsFormat RGBA_ASTC6X6_SRGB = 133;
	public const GraphicsFormat RGBA_ASTC6X6_UNorm = 134;
	public const GraphicsFormat RGBA_ASTC8X8_SRGB = 135;
	public const GraphicsFormat RGBA_ASTC8X8_UNorm = 136;
	public const GraphicsFormat RGBA_ASTC10X10_SRGB = 137;
	public const GraphicsFormat RGBA_ASTC10X10_UNorm = 138;
	public const GraphicsFormat RGBA_ASTC12X12_SRGB = 139;
	public const GraphicsFormat RGBA_ASTC12X12_UNorm = 140;
	public const GraphicsFormat YUV2 = 141;
	[Obsolete("Enum member GraphicsFormat.DepthAuto has been deprecated. Use GraphicsFormat.None as a color format to indicate depth only rendering and DefaultFormat to get the default depth buffer format.", False)]
	public const GraphicsFormat DepthAuto = 142;
	[Obsolete("Enum member GraphicsFormat.ShadowAuto has been deprecated. Use GraphicsFormat.None as a color format to indicate depth only rendering and DefaultFormat to get the default shadow buffer format.", False)]
	public const GraphicsFormat ShadowAuto = 143;
	[Obsolete("Enum member GraphicsFormat.VideoAuto has been deprecated. Use DefaultFormat instead.", False)]
	public const GraphicsFormat VideoAuto = 144;
	public const GraphicsFormat RGBA_ASTC4X4_UFloat = 145;
	public const GraphicsFormat RGBA_ASTC5X5_UFloat = 146;
	public const GraphicsFormat RGBA_ASTC6X6_UFloat = 147;
	public const GraphicsFormat RGBA_ASTC8X8_UFloat = 148;
	public const GraphicsFormat RGBA_ASTC10X10_UFloat = 149;
	public const GraphicsFormat RGBA_ASTC12X12_UFloat = 150;
	public const GraphicsFormat D16_UNorm_S8_UInt = 151;
}


// Namespace: UnityEngine.Experimental.Rendering
public class GraphicsFormatUtility // TypeDefIndex: 5926
{
	// Fields
	private static readonly GraphicsFormat[] tableNoStencil; // 0x0
	private static readonly GraphicsFormat[] tableStencil; // 0x8

	// Methods

	// RVA: 0x13A438C Offset: 0x13A038C VA: 0x13A438C
	public static GraphicsFormat GetGraphicsFormat(TextureFormat format, bool isSRGB) { }

	// RVA: 0x13A4410 Offset: 0x13A0410 VA: 0x13A4410
	private static GraphicsFormat GetGraphicsFormat_Native_TextureFormat(TextureFormat format, bool isSRGB) { }

	// RVA: 0x13A4454 Offset: 0x13A0454 VA: 0x13A4454
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, bool isSRGB) { }

	// RVA: 0x13A44D8 Offset: 0x13A04D8 VA: 0x13A44D8
	private static GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(RenderTextureFormat format, bool isSRGB) { }

	// RVA: 0x13A451C Offset: 0x13A051C VA: 0x13A451C
	public static GraphicsFormat GetGraphicsFormat(RenderTextureFormat format, RenderTextureReadWrite readWrite) { }

	// RVA: 0x13A45A4 Offset: 0x13A05A4 VA: 0x13A45A4
	private static GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int minimumDepthBits) { }

	// RVA: 0x13A45E0 Offset: 0x13A05E0 VA: 0x13A45E0
	internal static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits) { }

	// RVA: 0x13A4654 Offset: 0x13A0654 VA: 0x13A4654
	public static int GetDepthBits(GraphicsFormat format) { }

	// RVA: 0x13A4690 Offset: 0x13A0690 VA: 0x13A4690
	public static GraphicsFormat GetDepthStencilFormat(int minimumDepthBits, int minimumStencilBits) { }

	// RVA: 0x13A4888 Offset: 0x13A0888 VA: 0x13A4888
	public static bool IsSRGBFormat(GraphicsFormat format) { }

	// RVA: 0x13A48C4 Offset: 0x13A08C4 VA: 0x13A48C4
	private static bool IsCompressedFormat_Native_TextureFormat(TextureFormat format) { }

	// RVA: 0x13A4900 Offset: 0x13A0900 VA: 0x13A4900
	public static bool IsCompressedFormat(TextureFormat format) { }

	// RVA: 0x13A4974 Offset: 0x13A0974 VA: 0x13A4974
	private static bool CanDecompressFormat(GraphicsFormat format, bool wholeImage) { }

	// RVA: 0x13A49B8 Offset: 0x13A09B8 VA: 0x13A49B8
	internal static bool CanDecompressFormat(GraphicsFormat format) { }

	// RVA: 0x13A4A30 Offset: 0x13A0A30 VA: 0x13A4A30
	public static bool IsDepthStencilFormat(GraphicsFormat format) { }

	// RVA: 0x13A4A6C Offset: 0x13A0A6C VA: 0x13A4A6C
	public static bool IsPVRTCFormat(GraphicsFormat format) { }

	// RVA: 0x13A4AA8 Offset: 0x13A0AA8 VA: 0x13A4AA8
	public static bool IsCrunchFormat(TextureFormat format) { }

	// RVA: 0x13A4AE4 Offset: 0x13A0AE4 VA: 0x13A4AE4
	private static void .cctor() { }
}


// Namespace: UnityEngine.Assertions
[DebuggerStepThrough]
public static class Assert // TypeDefIndex: 5927
{
	// Fields
	[Obsolete("Future versions of Unity are expected to always throw exceptions and not have this field.")]
	public static bool raiseExceptions; // 0x0

	// Methods

	// RVA: 0x13A4BB4 Offset: 0x13A0BB4 VA: 0x13A4BB4
	private static void Fail(string message, string userMessage) { }

	// RVA: 0x13A4D48 Offset: 0x13A0D48 VA: 0x13A4D48
	public static void IsTrue(bool condition) { }

	// RVA: 0x13A4DB4 Offset: 0x13A0DB4 VA: 0x13A4DB4
	public static void IsTrue(bool condition, string message) { }

	// RVA: 0x13A4EE8 Offset: 0x13A0EE8 VA: 0x13A4EE8
	public static void IsFalse(bool condition, string message) { }

	// RVA: -1 Offset: -1
	public static void AreEqual<T>(T expected, T actual) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB77780 Offset: 0xB73780 VA: 0xB77780
	|-Assert.AreEqual<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void AreEqual<T>(T expected, T actual, string message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB77904 Offset: 0xB73904 VA: 0xB77904
	|-Assert.AreEqual<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void AreEqual<T>(T expected, T actual, string message, IEqualityComparer<T> comparer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB77AA0 Offset: 0xB73AA0 VA: 0xB77AA0
	|-Assert.AreEqual<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13A4F68 Offset: 0x13A0F68 VA: 0x13A4F68
	public static void AreEqual(Object expected, Object actual, string message) { }

	// RVA: -1 Offset: -1
	public static void IsNull<T>(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB78098 Offset: 0xB74098 VA: 0xB78098
	|-Assert.IsNull<object>
	*/

	// RVA: -1 Offset: -1
	public static void IsNull<T>(T value, string message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB78100 Offset: 0xB74100 VA: 0xB78100
	|-Assert.IsNull<object>
	*/

	// RVA: 0x13A5224 Offset: 0x13A1224 VA: 0x13A5224
	public static void IsNull(Object value, string message) { }

	// RVA: -1 Offset: -1
	public static void IsNotNull<T>(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB77E8C Offset: 0xB73E8C VA: 0xB77E8C
	|-Assert.IsNotNull<object>
	*/

	// RVA: -1 Offset: -1
	public static void IsNotNull<T>(T value, string message) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB77EF4 Offset: 0xB73EF4 VA: 0xB77EF4
	|-Assert.IsNotNull<object>
	*/

	// RVA: 0x13A5448 Offset: 0x13A1448 VA: 0x13A5448
	public static void IsNotNull(Object value, string message) { }

	// RVA: 0x13A5504 Offset: 0x13A1504 VA: 0x13A5504
	public static void AreEqual(int expected, int actual) { }

	// RVA: 0x13A5594 Offset: 0x13A1594 VA: 0x13A5594
	private static void .cctor() { }
}


// Namespace: UnityEngine.Assertions
public class AssertionException : Exception // TypeDefIndex: 5928
{
	// Fields
	private string m_UserMessage; // 0x90

	// Properties
	public override string Message { get; }

	// Methods

	// RVA: 0x13A4CD4 Offset: 0x13A0CD4 VA: 0x13A4CD4
	public void .ctor(string message, string userMessage) { }

	// RVA: 0x13A55E0 Offset: 0x13A15E0 VA: 0x13A55E0 Slot: 5
	public override string get_Message() { }
}


// Namespace: UnityEngine.Assertions
internal class AssertionMessageUtil // TypeDefIndex: 5929
{
	// Methods

	// RVA: 0x13A5654 Offset: 0x13A1654 VA: 0x13A5654
	public static string GetMessage(string failureMessage) { }

	// RVA: 0x13A5740 Offset: 0x13A1740 VA: 0x13A5740
	public static string GetMessage(string failureMessage, string expected) { }

	// RVA: 0x13A5030 Offset: 0x13A1030 VA: 0x13A5030
	public static string GetEqualityMessage(object actual, object expected, bool expectEqual) { }

	// RVA: 0x13A52E0 Offset: 0x13A12E0 VA: 0x13A52E0
	public static string NullFailureMessage(object value, bool expectNull) { }

	// RVA: 0x13A4E34 Offset: 0x13A0E34 VA: 0x13A4E34
	public static string BooleanFailureMessage(bool expected) { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 // TypeDefIndex: 5930
{}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 // TypeDefIndex: 5931
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 5932
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=6 0EBBFED81071BF15F38AA1387D6D74E5788591B4AA6E85C7B739CF903789D438 /*Metadata offset 0x38B170*/; // 0x0
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83 /*Metadata offset 0x38B178*/; // 0x6
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=20 C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF /*Metadata offset 0x38B190*/; // 0x1A
}
