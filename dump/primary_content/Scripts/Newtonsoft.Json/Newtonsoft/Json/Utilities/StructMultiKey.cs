using System;

namespace Newtonsoft.Json.Utilities;

internal struct StructMultiKey<T1, T2>(T1 v1, T2 v2) : IEquatable<StructMultiKey<T1, T2>> where T1 : notnull where T2 : notnull
{
	public readonly T1 Value1 = default;

	public readonly T2 Value2 = default;

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object? obj)
	{
		return false;
	}

	public bool Equals(StructMultiKey<T1, T2> other)
	{
		return false;
	}
}
