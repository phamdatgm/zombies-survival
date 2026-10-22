using System.Collections.Generic;
using System.Security;

namespace System.Runtime.InteropServices;

/// <summary>Provides a collection of methods for allocating unmanaged memory, copying unmanaged memory blocks, and converting managed to unmanaged types, as well as other miscellaneous methods used when interacting with unmanaged code.</summary>
public static class Marshal
{
	internal delegate IntPtr SecureStringAllocator(int len);

	internal class MarshalerInstanceKeyComparer : IEqualityComparer<ValueTuple<Type, string>>
	{
		public bool Equals(ValueTuple<Type, string> lhs, ValueTuple<Type, string> rhs)
		{
			return false;
		}

		public int GetHashCode(ValueTuple<Type, string> key)
		{
			return 0;
		}
	}

	/// <summary>Represents the maximum size of a double byte character set (DBCS) size, in bytes, for the current operating system. This field is read-only.</summary>
	public static readonly int SystemMaxDBCSCharSize;

	/// <summary>Represents the default character size on the system; the default is 2 for Unicode systems and 1 for ANSI systems. This field is read-only.</summary>
	public static readonly int SystemDefaultCharSize;

	internal static Dictionary<ValueTuple<Type, string>, ICustomMarshaler> MarshalerInstanceCache;

	internal static readonly object MarshalerInstanceCacheLock;

	/// <summary>Allocates memory from the unmanaged memory of the process by using the pointer to the specified number of bytes.</summary>
	/// <param name="cb">The required number of bytes in memory.</param>
	/// <returns>A pointer to the newly allocated memory. This memory must be released using the <see cref="M:System.Runtime.InteropServices.Marshal.FreeHGlobal(System.IntPtr)" /> method.</returns>
	/// <exception cref="T:System.OutOfMemoryException">There is insufficient memory to satisfy the request.</exception>
	public static IntPtr AllocHGlobal(IntPtr cb)
	{
		return (IntPtr)0;
	}

	/// <summary>Allocates memory from the unmanaged memory of the process by using the specified number of bytes.</summary>
	/// <param name="cb">The required number of bytes in memory.</param>
	/// <returns>A pointer to the newly allocated memory. This memory must be released using the <see cref="M:System.Runtime.InteropServices.Marshal.FreeHGlobal(System.IntPtr)" /> method.</returns>
	/// <exception cref="T:System.OutOfMemoryException">There is insufficient memory to satisfy the request.</exception>
	public static IntPtr AllocHGlobal(int cb)
	{
		return (IntPtr)0;
	}

	private unsafe static void copy_to_unmanaged_fixed(Array source, int startIndex, IntPtr destination, int length, void* fixed_source_element)
	{
	}

	private static bool skip_fixed(Array array, int startIndex)
	{
		return false;
	}

	internal static void copy_to_unmanaged(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	/// <summary>Copies data from a one-dimensional, managed 8-bit unsigned integer array to an unmanaged memory pointer.</summary>
	/// <param name="source">The one-dimensional array to copy from.</param>
	/// <param name="startIndex">The zero-based index in the source array where copying should start.</param>
	/// <param name="destination">The memory pointer to copy to.</param>
	/// <param name="length">The number of array elements to copy.</param>
	/// <exception cref="T:System.ArgumentOutOfRangeException">
	///   <paramref name="startIndex" /> and <paramref name="length" /> are not valid.</exception>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="source" />, <paramref name="startIndex" />, <paramref name="destination" />, or <paramref name="length" /> is <see langword="null" />.</exception>
	public static void Copy(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	internal static void copy_from_unmanaged(IntPtr source, int startIndex, Array destination, int length)
	{
	}

	private unsafe static void copy_from_unmanaged_fixed(IntPtr source, int startIndex, Array destination, int length, void* fixed_destination_element)
	{
	}

	/// <summary>Copies data from an unmanaged memory pointer to a managed 8-bit unsigned integer array.</summary>
	/// <param name="source">The memory pointer to copy from.</param>
	/// <param name="destination">The array to copy to.</param>
	/// <param name="startIndex">The zero-based index in the destination array where copying should start.</param>
	/// <param name="length">The number of array elements to copy.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="source" />, <paramref name="destination" />, <paramref name="startIndex" />, or <paramref name="length" /> is <see langword="null" />.</exception>
	public static void Copy(IntPtr source, byte[] destination, int startIndex, int length)
	{
	}

	/// <summary>Copies data from an unmanaged memory pointer to a managed character array.</summary>
	/// <param name="source">The memory pointer to copy from.</param>
	/// <param name="destination">The array to copy to.</param>
	/// <param name="startIndex">The zero-based index in the destination array where copying should start.</param>
	/// <param name="length">The number of array elements to copy.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="source" />, <paramref name="destination" />, <paramref name="startIndex" />, or <paramref name="length" /> is <see langword="null" />.</exception>
	public static void Copy(IntPtr source, char[] destination, int startIndex, int length)
	{
	}

	/// <summary>Copies data from an unmanaged memory pointer to a managed single-precision floating-point number array.</summary>
	/// <param name="source">The memory pointer to copy from.</param>
	/// <param name="destination">The array to copy to.</param>
	/// <param name="startIndex">The zero-based index in the destination array where copying should start.</param>
	/// <param name="length">The number of array elements to copy.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="source" />, <paramref name="destination" />, <paramref name="startIndex" />, or <paramref name="length" /> is <see langword="null" />.</exception>
	public static void Copy(IntPtr source, float[] destination, int startIndex, int length)
	{
	}

	/// <summary>Frees memory previously allocated from the unmanaged memory of the process.</summary>
	/// <param name="hglobal">The handle returned by the original matching call to <see cref="M:System.Runtime.InteropServices.Marshal.AllocHGlobal(System.IntPtr)" />.</param>
	public static void FreeHGlobal(IntPtr hglobal)
	{
	}

	private static void ClearAnsi(IntPtr ptr)
	{
	}

	private static void ClearUnicode(IntPtr ptr)
	{
	}

	/// <summary>Frees an unmanaged string pointer that was allocated using the <see cref="M:System.Runtime.InteropServices.Marshal.SecureStringToGlobalAllocAnsi(System.Security.SecureString)" /> method.</summary>
	/// <param name="s">The address of the unmanaged string to free.</param>
	public static void ZeroFreeGlobalAllocAnsi(IntPtr s)
	{
	}

	/// <summary>Frees an unmanaged string pointer that was allocated using the <see cref="M:System.Runtime.InteropServices.Marshal.SecureStringToGlobalAllocUnicode(System.Security.SecureString)" /> method.</summary>
	/// <param name="s">The address of the unmanaged string to free.</param>
	public static void ZeroFreeGlobalAllocUnicode(IntPtr s)
	{
	}

	/// <summary>Indicates whether a specified object represents a COM object.</summary>
	/// <param name="o">The object to check.</param>
	/// <returns>
	///   <see langword="true" /> if the <paramref name="o" /> parameter is a COM type; otherwise, <see langword="false" />.</returns>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="o" /> is <see langword="null" />.</exception>
	public static bool IsComObject(object o)
	{
		return false;
	}

	/// <summary>Returns the error code returned by the last unmanaged function that was called using platform invoke that has the <see cref="F:System.Runtime.InteropServices.DllImportAttribute.SetLastError" /> flag set.</summary>
	/// <returns>The last error code set by a call to the Win32 SetLastError function.</returns>
	public static int GetLastWin32Error()
	{
		return 0;
	}

	/// <summary>Copies all characters up to the first null character from an unmanaged ANSI string to a managed <see cref="T:System.String" />, and widens each ANSI character to Unicode.</summary>
	/// <param name="ptr">The address of the first character of the unmanaged string.</param>
	/// <returns>A managed string that holds a copy of the unmanaged ANSI string. If <paramref name="ptr" /> is <see langword="null" />, the method returns a null string.</returns>
	public static string PtrToStringAnsi(IntPtr ptr)
	{
		return null;
	}

	/// <summary>Allocates a managed <see cref="T:System.String" /> and copies all characters up to the first null character from an unmanaged Unicode string into it.</summary>
	/// <param name="ptr">The address of the first character of the unmanaged string.</param>
	/// <returns>A managed string that holds a copy of the unmanaged string if the value of the <paramref name="ptr" /> parameter is not <see langword="null" />; otherwise, this method returns <see langword="null" />.</returns>
	public static string PtrToStringUni(IntPtr ptr)
	{
		return null;
	}

	/// <summary>Marshals data from an unmanaged block of memory to a newly allocated managed object of the specified type.</summary>
	/// <param name="ptr">A pointer to an unmanaged block of memory.</param>
	/// <param name="structureType">The type of object to be created. This object must represent a formatted class or a structure.</param>
	/// <returns>A managed object containing the data pointed to by the <paramref name="ptr" /> parameter.</returns>
	/// <exception cref="T:System.ArgumentException">The <paramref name="structureType" /> parameter layout is not sequential or explicit.  
	///  -or-  
	///  The <paramref name="structureType" /> parameter is a generic type definition.</exception>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="structureType" /> is <see langword="null" />.</exception>
	/// <exception cref="T:System.MissingMethodException">The class specified by <paramref name="structureType" /> does not have an accessible default constructor.</exception>
	public static object PtrToStructure(IntPtr ptr, Type structureType)
	{
		return null;
	}

	/// <summary>[Supported in the .NET Framework 4.5.1 and later versions]  
	///  Marshals data from an unmanaged block of memory to a newly allocated managed object of the type specified by a generic type parameter.</summary>
	/// <param name="ptr">A pointer to an unmanaged block of memory.</param>
	/// <typeparam name="T">The type of the object to which the data is to be copied. This must be a formatted class or a structure.</typeparam>
	/// <returns>A managed object that contains the data that the <paramref name="ptr" /> parameter points to.</returns>
	/// <exception cref="T:System.ArgumentException">The layout of <typeparamref name="T" /> is not sequential or explicit.</exception>
	/// <exception cref="T:System.MissingMethodException">The class specified by <typeparamref name="T" /> does not have an accessible default constructor.</exception>
	public static T PtrToStructure<T>(IntPtr ptr)
	{
		return default;
	}

	/// <summary>Reads a single byte at a given offset (or index) from unmanaged memory.</summary>
	/// <param name="ptr">The base address in unmanaged memory from which to read.</param>
	/// <param name="ofs">An additional byte offset, which is added to the <paramref name="ptr" /> parameter before reading.</param>
	/// <returns>The byte read from unmanaged memory at the given offset.</returns>
	/// <exception cref="T:System.AccessViolationException">Base address (<paramref name="ptr" />) plus offset byte (<paramref name="ofs" />) produces a null or invalid address.</exception>
	public static byte ReadByte(IntPtr ptr, int ofs)
	{
		return 0;
	}

	/// <summary>Reads a 16-bit signed integer at a given offset from unmanaged memory.</summary>
	/// <param name="ptr">The base address in unmanaged memory from which to read.</param>
	/// <param name="ofs">An additional byte offset, which is added to the <paramref name="ptr" /> parameter before reading.</param>
	/// <returns>The 16-bit signed integer read from unmanaged memory at the given offset.</returns>
	/// <exception cref="T:System.AccessViolationException">Base address (<paramref name="ptr" />) plus offset byte (<paramref name="ofs" />) produces a null or invalid address.</exception>
	public static short ReadInt16(IntPtr ptr, int ofs)
	{
		return 0;
	}

	/// <summary>Returns the size of an unmanaged type in bytes.</summary>
	/// <param name="t">The type whose size is to be returned.</param>
	/// <returns>The size of the specified type in unmanaged code.</returns>
	/// <exception cref="T:System.ArgumentException">The <paramref name="t" /> parameter is a generic type definition.</exception>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="t" /> parameter is <see langword="null" />.</exception>
	public static int SizeOf(Type t)
	{
		return 0;
	}

	private unsafe static IntPtr StringToHGlobalAnsi(char* s, int length)
	{
		return (IntPtr)0;
	}

	/// <summary>Copies the contents of a managed <see cref="T:System.String" /> into unmanaged memory, converting into ANSI format as it copies.</summary>
	/// <param name="s">A managed string to be copied.</param>
	/// <returns>The address, in unmanaged memory, to where <paramref name="s" /> was copied, or 0 if <paramref name="s" /> is <see langword="null" />.</returns>
	/// <exception cref="T:System.OutOfMemoryException">There is insufficient memory available.</exception>
	/// <exception cref="T:System.ArgumentOutOfRangeException">The <paramref name="s" /> parameter exceeds the maximum length allowed by the operating system.</exception>
	public static IntPtr StringToHGlobalAnsi(string s)
	{
		return (IntPtr)0;
	}

	internal static IntPtr SecureStringGlobalAllocator(int len)
	{
		return (IntPtr)0;
	}

	internal static IntPtr SecureStringToUnicode(SecureString s, SecureStringAllocator allocator)
	{
		return (IntPtr)0;
	}

	/// <summary>Copies the contents of a managed <see cref="T:System.Security.SecureString" /> object into unmanaged memory.</summary>
	/// <param name="s">The managed object to copy.</param>
	/// <returns>The address, in unmanaged memory, where <paramref name="s" /> was copied, or 0 if <paramref name="s" /> is a <see cref="T:System.Security.SecureString" /> object whose length is 0.</returns>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="s" /> parameter is <see langword="null" />.</exception>
	/// <exception cref="T:System.NotSupportedException">The current computer is not running Windows 2000 Service Pack 3 or later.</exception>
	/// <exception cref="T:System.OutOfMemoryException">There is insufficient memory available.</exception>
	public static IntPtr SecureStringToGlobalAllocUnicode(SecureString s)
	{
		return (IntPtr)0;
	}

	/// <summary>Marshals data from a managed object to an unmanaged block of memory.</summary>
	/// <param name="structure">A managed object that holds the data to be marshaled. This object must be a structure or an instance of a formatted class.</param>
	/// <param name="ptr">A pointer to an unmanaged block of memory, which must be allocated before this method is called.</param>
	/// <param name="fDeleteOld">
	///   <see langword="true" /> to call the <see cref="M:System.Runtime.InteropServices.Marshal.DestroyStructure(System.IntPtr,System.Type)" /> method on the <paramref name="ptr" /> parameter before this method copies the data. The block must contain valid data. Note that passing <see langword="false" /> when the memory block already contains data can lead to a memory leak.</param>
	/// <exception cref="T:System.ArgumentException">
	///   <paramref name="structure" /> is a reference type that is not a formatted class.  
	/// -or-  
	/// <paramref name="structure" /> is an instance of a generic type (in the .NET Framework 4.5 and earlier versions only).</exception>
	public static void StructureToPtr(object structure, IntPtr ptr, bool fDeleteOld)
	{
	}

	/// <summary>[Supported in the .NET Framework 4.5.1 and later versions]  
	///  Marshals data from a managed object of a specified type to an unmanaged block of memory.</summary>
	/// <param name="structure">A managed object that holds the data to be marshaled. The object must be a structure or an instance of a formatted class.</param>
	/// <param name="ptr">A pointer to an unmanaged block of memory, which must be allocated before this method is called.</param>
	/// <param name="fDeleteOld">
	///   <see langword="true" /> to call the <see cref="M:System.Runtime.InteropServices.Marshal.DestroyStructure``1(System.IntPtr)" /> method on the <paramref name="ptr" /> parameter before this method copies the data. The block must contain valid data. Note that passing <see langword="false" /> when the memory block already contains data can lead to a memory leak.</param>
	/// <typeparam name="T">The type of the managed object.</typeparam>
	/// <exception cref="T:System.ArgumentException">
	///   <paramref name="structure" /> is a reference type that is not a formatted class.</exception>
	public static void StructureToPtr<T>(T structure, IntPtr ptr, bool fDeleteOld)
	{
	}

	/// <summary>Gets the address of the element at the specified index inside the specified array.</summary>
	/// <param name="arr">The array that contains the desired element.</param>
	/// <param name="index">The index in the <paramref name="arr" /> parameter of the desired element.</param>
	/// <returns>The address of <paramref name="index" /> inside <paramref name="arr" />.</returns>
	public static IntPtr UnsafeAddrOfPinnedArrayElement(Array arr, int index)
	{
		return (IntPtr)0;
	}

	/// <summary>[Supported in the .NET Framework 4.5.1 and later versions]  
	///  Gets the address of the element at the specified index in an array of a specified type.</summary>
	/// <param name="arr">The array that contains the desired element.</param>
	/// <param name="index">The index of the desired element in the <paramref name="arr" /> array.</param>
	/// <typeparam name="T">The type of the array.</typeparam>
	/// <returns>The address of <paramref name="index" /> in <paramref name="arr" />.</returns>
	public static IntPtr UnsafeAddrOfPinnedArrayElement<T>(T[] arr, int index)
	{
		return (IntPtr)0;
	}

	/// <summary>Writes a single byte value to unmanaged memory at a specified offset.</summary>
	/// <param name="ptr">The base address in unmanaged memory to write to.</param>
	/// <param name="ofs">An additional byte offset, which is added to the <paramref name="ptr" /> parameter before writing.</param>
	/// <param name="val">The value to write.</param>
	/// <exception cref="T:System.AccessViolationException">Base address (<paramref name="ptr" />) plus offset byte (<paramref name="ofs" />) produces a null or invalid address.</exception>
	public static void WriteByte(IntPtr ptr, int ofs, byte val)
	{
	}

	/// <summary>Writes a 16-bit signed integer value into unmanaged memory at a specified offset.</summary>
	/// <param name="ptr">The base address in unmanaged memory to write to.</param>
	/// <param name="ofs">An additional byte offset, which is added to the <paramref name="ptr" /> parameter before writing.</param>
	/// <param name="val">The value to write.</param>
	/// <exception cref="T:System.AccessViolationException">Base address (<paramref name="ptr" />) plus offset byte (<paramref name="ofs" />) produces a null or invalid address.</exception>
	public static void WriteInt16(IntPtr ptr, int ofs, short val)
	{
	}

	private static IntPtr GetFunctionPointerForDelegateInternal(Delegate d)
	{
		return (IntPtr)0;
	}

	/// <summary>Converts a delegate into a function pointer that is callable from unmanaged code.</summary>
	/// <param name="d">The delegate to be passed to unmanaged code.</param>
	/// <returns>A value that can be passed to unmanaged code, which, in turn, can use it to call the underlying managed delegate.</returns>
	/// <exception cref="T:System.ArgumentException">The <paramref name="d" /> parameter is a generic type definition.</exception>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="d" /> parameter is <see langword="null" />.</exception>
	public static IntPtr GetFunctionPointerForDelegate(Delegate d)
	{
		return (IntPtr)0;
	}

	/// <summary>[Supported in the .NET Framework 4.5.1 and later versions]  
	///  Converts a delegate of a specified type to a function pointer that is callable from unmanaged code.</summary>
	/// <param name="d">The delegate to be passed to unmanaged code.</param>
	/// <typeparam name="TDelegate">The type of delegate to convert.</typeparam>
	/// <returns>A value that can be passed to unmanaged code, which, in turn, can use it to call the underlying managed delegate.</returns>
	/// <exception cref="T:System.ArgumentException">The <paramref name="d" /> parameter is a generic type definition.</exception>
	/// <exception cref="T:System.ArgumentNullException">The <paramref name="d" /> parameter is <see langword="null" />.</exception>
	public static IntPtr GetFunctionPointerForDelegate<TDelegate>(TDelegate d)
	{
		return (IntPtr)0;
	}

	internal static ICustomMarshaler GetCustomMarshalerInstance(Type type, string cookie)
	{
		return null;
	}
}
