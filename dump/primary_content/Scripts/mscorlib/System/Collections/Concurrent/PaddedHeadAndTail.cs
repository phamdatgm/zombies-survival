using System.Runtime.InteropServices;

namespace System.Collections.Concurrent;

[StructLayout((LayoutKind)2, Size = 384)]
internal struct PaddedHeadAndTail
{
	[FieldOffset(128)]
	public int Head;

	[FieldOffset(256)]
	public int Tail;
}
