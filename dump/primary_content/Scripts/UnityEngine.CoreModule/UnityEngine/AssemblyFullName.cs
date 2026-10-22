using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode(GenerateProxy = true)]
internal struct AssemblyFullName
{
	public string Name;

	public AssemblyVersion Version;

	public string PublicKeyToken;

	public string Culture;

	public override bool Equals(object other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}
}
