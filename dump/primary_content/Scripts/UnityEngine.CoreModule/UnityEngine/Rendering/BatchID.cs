using System;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct BatchID : IEquatable<BatchID>
{
	public static readonly BatchID Null;

	public uint value;

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(BatchID other)
	{
		return false;
	}
}
