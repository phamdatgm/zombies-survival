using System;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

public struct StylePropertyName : IEquatable<StylePropertyName>
{
	internal StylePropertyId id { get; } = StylePropertyId.Unknown;

	private string name { get; } = null;

	internal static StylePropertyId StylePropertyIdFromString(string name)
	{
		return StylePropertyId.Unknown;
	}

	internal StylePropertyName(StylePropertyId stylePropertyId)
	{
	}

	public StylePropertyName(string name)
	{
	}

	public static bool operator ==(StylePropertyName lhs, StylePropertyName rhs)
	{
		return false;
	}

	public static bool operator !=(StylePropertyName lhs, StylePropertyName rhs)
	{
		return false;
	}

	public static implicit operator StylePropertyName(string name)
	{
		return default;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object other)
	{
		return false;
	}

	public bool Equals(StylePropertyName other)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}
}
