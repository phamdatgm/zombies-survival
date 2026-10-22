using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode(GenerateProxy = true)]
internal struct AssemblyVersion
{
	public ushort major;

	public ushort minor;

	public ushort build;

	public ushort revision;

	public static bool operator ==(AssemblyVersion lhs, AssemblyVersion rhs)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}

	public override bool Equals(object other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
