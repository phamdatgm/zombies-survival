using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[StructLayout((LayoutKind)2, Size = 2)]
[UsedByNativeCode]
public struct ProfilerCategory
{
	[FieldOffset(0)]
	private readonly ushort m_CategoryId = 0;

	public string Name => null;

	public static ProfilerCategory Scripts => default;

	internal ProfilerCategory(ushort category)
	{
	}

	public override string ToString()
	{
		return null;
	}

	public static implicit operator ushort(ProfilerCategory category)
	{
		return 0;
	}
}
