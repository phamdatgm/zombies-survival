using System.Collections.Generic;
using System.Runtime.Serialization;

namespace System.IO;

/// <summary>Exposes instance methods for creating, moving, and enumerating through directories and subdirectories. This class cannot be inherited.</summary>
[Serializable]
public sealed class DirectoryInfo : FileSystemInfo
{
	/// <summary>Initializes a new instance of the <see cref="T:System.IO.DirectoryInfo" /> class on the specified path.</summary>
	/// <param name="path">A string specifying the path on which to create the <see langword="DirectoryInfo" />.</param>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="path" /> is <see langword="null" />.</exception>
	/// <exception cref="T:System.Security.SecurityException">The caller does not have the required permission.</exception>
	/// <exception cref="T:System.ArgumentException">
	///   <paramref name="path" /> contains invalid characters such as ", &lt;, &gt;, or |.</exception>
	/// <exception cref="T:System.IO.PathTooLongException">The specified path, file name, or both exceed the system-defined maximum length.</exception>
	public DirectoryInfo(string path)
	{
	}

	internal DirectoryInfo(string originalPath, string fullPath = null, string fileName = null, bool isNormalized = false)
	{
	}

	private void Init(string originalPath, string fullPath = null, string fileName = null, bool isNormalized = false)
	{
	}

	/// <summary>Returns a file list from the current directory.</summary>
	/// <returns>An array of type <see cref="T:System.IO.FileInfo" />.</returns>
	/// <exception cref="T:System.IO.DirectoryNotFoundException">The path is invalid, such as being on an unmapped drive.</exception>
	public FileInfo[] GetFiles()
	{
		return null;
	}

	/// <summary>Returns a file list from the current directory matching the given search pattern.</summary>
	/// <param name="searchPattern">The search string to match against the names of files.  This parameter can contain a combination of valid literal path and wildcard (* and ?) characters, but it doesn't support regular expressions.</param>
	/// <returns>An array of type <see cref="T:System.IO.FileInfo" />.</returns>
	/// <exception cref="T:System.ArgumentException">
	///   <paramref name="searchPattern" /> contains one or more invalid characters defined by the <see cref="M:System.IO.Path.GetInvalidPathChars" /> method.</exception>
	/// <exception cref="T:System.ArgumentNullException">
	///   <paramref name="searchPattern" /> is <see langword="null" />.</exception>
	/// <exception cref="T:System.IO.DirectoryNotFoundException">The path is invalid (for example, it is on an unmapped drive).</exception>
	/// <exception cref="T:System.Security.SecurityException">The caller does not have the required permission.</exception>
	public FileInfo[] GetFiles(string searchPattern)
	{
		return null;
	}

	public FileInfo[] GetFiles(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	internal static IEnumerable<FileSystemInfo> InternalEnumerateInfos(string path, string searchPattern, SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	/// <summary>Deletes this <see cref="T:System.IO.DirectoryInfo" /> if it is empty.</summary>
	/// <exception cref="T:System.UnauthorizedAccessException">The directory contains a read-only file.</exception>
	/// <exception cref="T:System.IO.DirectoryNotFoundException">The directory described by this <see cref="T:System.IO.DirectoryInfo" /> object does not exist or could not be found.</exception>
	/// <exception cref="T:System.IO.IOException">The directory is not empty.  
	///  -or-  
	///  The directory is the application's current working directory.  
	///  -or-  
	///  There is an open handle on the directory, and the operating system is Windows XP or earlier. This open handle can result from enumerating directories. For more information, see How to: Enumerate Directories and Files.</exception>
	/// <exception cref="T:System.Security.SecurityException">The caller does not have the required permission.</exception>
	public override void Delete()
	{
	}

	private DirectoryInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
