namespace System.IO;

internal struct FileStatus
{
	private Interop.Sys.FileStatus _fileStatus;

	private int _fileStatusInitialized;

	private bool InitiallyDirectory;

	internal bool _isDirectory;

	private bool _exists;

	internal static void Initialize(ref FileStatus status, bool isDirectory)
	{
	}

	internal bool IsReadOnly(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return false;
	}

	public FileAttributes GetAttributes(ReadOnlySpan<char> path, ReadOnlySpan<char> fileName)
	{
		return (FileAttributes)0;
	}

	internal bool GetExists(ReadOnlySpan<char> path)
	{
		return false;
	}

	internal long GetLength(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return 0L;
	}

	public void Refresh(ReadOnlySpan<char> path)
	{
	}

	internal void EnsureStatInitialized(ReadOnlySpan<char> path, bool continueOnError = false)
	{
	}
}
