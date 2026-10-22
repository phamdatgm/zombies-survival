using System.Runtime.CompilerServices;

namespace System;

/// <summary>Controls the system garbage collector, a service that automatically reclaims unused memory.</summary>
public static class GC
{
	internal static readonly object EPHEMERON_TOMBSTONE;

	private static int GetCollectionCount(int generation)
	{
		return 0;
	}

	internal static void register_ephemeron_array(Ephemeron[] array)
	{
	}

	private static object get_ephemeron_tombstone()
	{
		return null;
	}

	internal static void GetMemoryInfo(out uint highMemLoadThreshold, out ulong totalPhysicalMem, out uint lastRecordedMemLoad, out UIntPtr lastRecordedHeapSize, out UIntPtr lastRecordedFragmentation)
	{
		highMemLoadThreshold = default;
		totalPhysicalMem = default;
		lastRecordedMemLoad = default;
		lastRecordedHeapSize = default;
		lastRecordedFragmentation = default;
	}

	/// <summary>Returns the number of times garbage collection has occurred for the specified generation of objects.</summary>
	/// <param name="generation">The generation of objects for which the garbage collection count is to be determined.</param>
	/// <returns>The number of times garbage collection has occurred for the specified generation since the process was started.</returns>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="generation" /> is less than 0.</exception>
	public static int CollectionCount(int generation)
	{
		return 0;
	}

	/// <summary>References the specified object, which makes it ineligible for garbage collection from the start of the current routine to the point where this method is called.</summary>
	/// <param name="obj">The object to reference.</param>
	[MethodImpl(MethodImplOptions.NoInlining)]
	public static void KeepAlive(object obj)
	{
	}

	private static void _SuppressFinalize(object o)
	{
	}

	/// <summary>Requests that the common language runtime not call the finalizer for the specified object.</summary>
	/// <param name="obj">The object whose finalizer must not be executed.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="obj" /> is <see langword="null" />.</exception>
	public static void SuppressFinalize(object obj)
	{
	}

	private static void _ReRegisterForFinalize(object o)
	{
	}

	/// <summary>Requests that the system call the finalizer for the specified object for which <see cref="M:System.GC.SuppressFinalize(System.Object)" /> has previously been called.</summary>
	/// <param name="obj">The object that a finalizer must be called for.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="obj" /> is <see langword="null" />.</exception>
	public static void ReRegisterForFinalize(object obj)
	{
	}
}
