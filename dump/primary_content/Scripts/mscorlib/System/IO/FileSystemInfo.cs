using System.Runtime.Serialization;

namespace System.IO;

/// <summary>Provides the base class for both <see cref="T:System.IO.FileInfo" /> and <see cref="T:System.IO.DirectoryInfo" /> objects.</summary>
[Serializable]
public abstract class FileSystemInfo : MarshalByRefObject, ISerializable
{
	private FileStatus _fileStatus;

	/// <summary>Represents the fully qualified path of the directory or file.</summary>
	/// <exception cref="T:System.IO.PathTooLongException">The fully qualified path exceeds the system-defined maximum length.</exception>
	protected string FullPath;

	/// <summary>The path originally specified by the user, whether relative or absolute.</summary>
	protected string OriginalPath;

	internal string _name;

	/// <summary>Gets or sets the attributes for the current file or directory.</summary>
	/// <returns>
	///   <see cref="T:System.IO.FileAttributes" /> of the current <see cref="T:System.IO.FileSystemInfo" />.</returns>
	/// <exception cref="T:System.IO.FileNotFoundException">The specified file doesn't exist. Only thrown when setting the property value.</exception>
	/// <exception cref="T:System.IO.DirectoryNotFoundException">The specified path is invalid. For example, it's on an unmapped drive. Only thrown when setting the property value.</exception>
	/// <exception cref="T:System.Security.SecurityException">The caller doesn't have the required permission.</exception>
	/// <exception cref="T:System.ArgumentException">The caller attempts to set an invalid file attribute.  
	///  -or-  
	///  The user attempts to set an attribute value but doesn't have write permission.</exception>
	/// <exception cref="T:System.IO.IOException">
	///   <see cref="M:System.IO.FileSystemInfo.Refresh" /> cannot initialize the data.</exception>
	public FileAttributes Attributes => (FileAttributes)0;

	internal bool ExistsCore => false;

	internal long LengthCore => 0L;

	/// <summary>Gets the full path of the directory or file.</summary>
	/// <returns>A string containing the full path.</returns>
	/// <exception cref="T:System.IO.PathTooLongException">The fully qualified path and file name exceed the system-defined maximum length.</exception>
	/// <exception cref="T:System.Security.SecurityException">The caller does not have the required permission.</exception>
	public virtual string FullName => null;

	/// <summary>Gets the string representing the extension part of the file.</summary>
	/// <returns>A string containing the <see cref="T:System.IO.FileSystemInfo" /> extension.</returns>
	public string Extension => null;

	/// <summary>For files, gets the name of the file. For directories, gets the name of the last directory in the hierarchy if a hierarchy exists. Otherwise, the <see langword="Name" /> property gets the name of the directory.</summary>
	/// <returns>A string that is the name of the parent directory, the name of the last directory in the hierarchy, or the name of a file, including the file name extension.</returns>
	public virtual string Name => null;

	/// <summary>Gets a value indicating whether the file or directory exists.</summary>
	/// <returns>
	///   <see langword="true" /> if the file or directory exists; otherwise, <see langword="false" />.</returns>
	public virtual bool Exists => false;

	/// <summary>Initializes a new instance of the <see cref="T:System.IO.FileSystemInfo" /> class.</summary>
	protected FileSystemInfo()
	{
	}

	internal static FileSystemInfo Create(string fullPath, string fileName, ref FileStatus fileStatus)
	{
		return null;
	}

	internal void Init(ref FileStatus fileStatus)
	{
	}

	/// <summary>Initializes a new instance of the <see cref="T:System.IO.FileSystemInfo" /> class with serialized data.</summary>
	/// <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo" /> that holds the serialized object data about the exception being thrown.</param>
	/// <param name="context">The <see cref="T:System.Runtime.Serialization.StreamingContext" /> that contains contextual information about the source or destination.</param>
	/// <exception cref="T:System.ArgumentNullException">The specified <see cref="T:System.Runtime.Serialization.SerializationInfo" /> is null.</exception>
	protected FileSystemInfo(SerializationInfo info, StreamingContext context)
	{
	}

	/// <summary>Sets the <see cref="T:System.Runtime.Serialization.SerializationInfo" /> object with the file name and additional exception information.</summary>
	/// <param name="info">The <see cref="T:System.Runtime.Serialization.SerializationInfo" /> that holds the serialized object data about the exception being thrown.</param>
	/// <param name="context">The <see cref="T:System.Runtime.Serialization.StreamingContext" /> that contains contextual information about the source or destination.</param>
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	/// <summary>Deletes a file or directory.</summary>
	/// <exception cref="T:System.IO.DirectoryNotFoundException">The specified path is invalid; for example, it is on an unmapped drive.</exception>
	/// <exception cref="T:System.IO.IOException">There is an open handle on the file or directory, and the operating system is Windows XP or earlier. This open handle can result from enumerating directories and files. For more information, see How to: Enumerate Directories and Files.</exception>
	public abstract void Delete();

	public override string ToString()
	{
		return null;
	}
}
