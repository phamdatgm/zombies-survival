using UnityEngine.Scripting;

namespace Unity.IO.Archive;

[RequiredByNativeCode]
public struct ArchiveFileInfo
{
	public string Filename;

	public ulong FileSize;
}
