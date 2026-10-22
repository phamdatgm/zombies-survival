// Namespace: 
internal class <Module> // TypeDefIndex: 7850
{}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal class ActionScheduler : IActionScheduler, IServiceComponent // TypeDefIndex: 7851
{
	// Fields
	internal readonly PlayerLoopSystem SchedulerLoopSystem; // 0x10
	private readonly ITimeProvider m_TimeProvider; // 0x38
	private readonly object m_Lock; // 0x40
	private readonly MinimumBinaryHeap<ScheduledInvocation> m_ScheduledActions; // 0x48
	private readonly Dictionary<long, ScheduledInvocation> m_IdScheduledInvocationMap; // 0x50
	private readonly List<ScheduledInvocation> m_ExpiredActions; // 0x58
	private long m_NextId; // 0x60

	// Methods

	// RVA: 0x134E6A4 Offset: 0x134A6A4 VA: 0x134E6A4
	public void .ctor() { }

	// RVA: 0x134E708 Offset: 0x134A708 VA: 0x134E708
	public void .ctor(ITimeProvider timeProvider) { }

	// RVA: 0x134E940 Offset: 0x134A940 VA: 0x134E940
	internal void ExecuteExpiredActions() { }

	// RVA: 0x134EF6C Offset: 0x134AF6C VA: 0x134EF6C
	internal static void UpdateCurrentPlayerLoopWith(List<PlayerLoopSystem> subSystemList, PlayerLoopSystem currentPlayerLoop) { }

	// RVA: 0x134EFEC Offset: 0x134AFEC VA: 0x134EFEC
	public void JoinPlayerLoopSystem() { }
}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal abstract class MinimumBinaryHeap // TypeDefIndex: 7852
{
	// Methods

	// RVA: 0x134F13C Offset: 0x134B13C VA: 0x134F13C
	protected void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private struct MinimumBinaryHeap.<>c__DisplayClass21_0<T> // TypeDefIndex: 7853
{
	// Fields
	public int smallest; // 0x0
	public int currentIndex; // 0x0
	public MinimumBinaryHeap<T> <>4__this; // 0x0
}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal class MinimumBinaryHeap<T> : MinimumBinaryHeap // TypeDefIndex: 7854
{
	// Fields
	private readonly object m_Lock; // 0x0
	private readonly IComparer<T> m_Comparer; // 0x0
	private readonly int m_MinimumCapacity; // 0x0
	private T[] m_HeapArray; // 0x0
	[CompilerGenerated]
	private int <Count>k__BackingField; // 0x0

	// Properties
	public int Count { get; set; }
	public T Min { get; }

	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC38814 Offset: 0xC34814 VA: 0xC38814
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.get_Count
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void set_Count(int value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC3881C Offset: 0xC3481C VA: 0xC3881C
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.set_Count
	*/

	// RVA: -1 Offset: -1
	public T get_Min() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC38824 Offset: 0xC34824 VA: 0xC38824
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.get_Min
	*/

	// RVA: -1 Offset: -1
	public void .ctor(IComparer<T> comparer, int minimumCapacity = 10) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC388CC Offset: 0xC348CC VA: 0xC388CC
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	internal void .ctor(ICollection<T> collection, IComparer<T> comparer, int minimumCapacity = 10) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC388EC Offset: 0xC348EC VA: 0xC388EC
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void Insert(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC38F1C Offset: 0xC34F1C VA: 0xC38F1C
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.Insert
	*/

	// RVA: -1 Offset: -1
	private void IncreaseHeapCapacityWhenFull() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC392F0 Offset: 0xC352F0 VA: 0xC392F0
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.IncreaseHeapCapacityWhenFull
	*/

	// RVA: -1 Offset: -1
	public void Remove(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC393CC Offset: 0xC353CC VA: 0xC393CC
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1
	private int IndexOf(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC395FC Offset: 0xC355FC VA: 0xC395FC
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.IndexOf
	*/

	// RVA: -1 Offset: -1
	public T ExtractMin() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC397AC Offset: 0xC357AC VA: 0xC397AC
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.ExtractMin
	*/

	// RVA: -1 Offset: -1
	private void DecreaseHeapCapacityWhenSpare() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39BE4 Offset: 0xC35BE4 VA: 0xC39BE4
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.DecreaseHeapCapacityWhenSpare
	*/

	// RVA: -1 Offset: -1
	private void MinHeapify() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39CD0 Offset: 0xC35CD0 VA: 0xC39CD0
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.MinHeapify
	*/

	// RVA: -1 Offset: -1
	private static void Swap(ref T lhs, ref T rhs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39D84 Offset: 0xC35D84 VA: 0xC39D84
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.Swap
	*/

	// RVA: -1 Offset: -1
	private static int GetParentIndex(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39F54 Offset: 0xC35F54 VA: 0xC39F54
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.GetParentIndex
	*/

	// RVA: -1 Offset: -1
	private static int GetLeftChildIndex(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39F68 Offset: 0xC35F68 VA: 0xC39F68
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.GetLeftChildIndex
	*/

	// RVA: -1 Offset: -1
	private static int GetRightChildIndex(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39F78 Offset: 0xC35F78 VA: 0xC39F78
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.GetRightChildIndex
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void <MinHeapify>g__UpdateSmallestIndex|21_0(ref MinimumBinaryHeap.<>c__DisplayClass21_0<T> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39F84 Offset: 0xC35F84 VA: 0xC39F84
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.<MinHeapify>g__UpdateSmallestIndex|21_0
	*/

	[CompilerGenerated]
	// RVA: -1 Offset: -1
	private void <MinHeapify>g__UpdateSmallestIfCandidateIsSmaller|21_1(int candidate, ref MinimumBinaryHeap.<>c__DisplayClass21_0<T> ) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC39FF0 Offset: 0xC35FF0 VA: 0xC39FF0
	|-MinimumBinaryHeap<__Il2CppFullySharedGenericType>.<MinHeapify>g__UpdateSmallestIfCandidateIsSmaller|21_1
	*/
}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal class ScheduledInvocation // TypeDefIndex: 7855
{
	// Fields
	public Action Action; // 0x10
	public DateTime InvocationTime; // 0x18
	public long ActionId; // 0x20
}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal class ScheduledInvocationComparer : IComparer<ScheduledInvocation> // TypeDefIndex: 7856
{
	// Methods

	// RVA: 0x134F144 Offset: 0x134B144 VA: 0x134F144 Slot: 4
	public int Compare(ScheduledInvocation x, ScheduledInvocation y) { }

	// RVA: 0x134E938 Offset: 0x134A938 VA: 0x134E938
	public void .ctor() { }
}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal interface ITimeProvider // TypeDefIndex: 7857
{
	// Properties
	public abstract DateTime Now { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract DateTime get_Now();
}


// Namespace: Unity.Services.Core.Scheduler.Internal
internal class UtcTimeProvider : ITimeProvider // TypeDefIndex: 7858
{
	// Properties
	public DateTime Now { get; }

	// Methods

	// RVA: 0x134F1FC Offset: 0x134B1FC VA: 0x134F1FC Slot: 4
	public DateTime get_Now() { }

	// RVA: 0x134E700 Offset: 0x134A700 VA: 0x134E700
	public void .ctor() { }
}
