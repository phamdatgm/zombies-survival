using System;

namespace UnityEngine.UIElements;

public struct StyleScale : IStyleValue<Scale>, IEquatable<StyleScale>
{
	private Scale m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Scale value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleScale(StyleKeyword keyword)
	{
	}

	internal StyleScale(Scale v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleScale lhs, StyleScale rhs)
	{
		return false;
	}

	public static implicit operator StyleScale(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleScale other)
	{
		return false;
	}

	public override bool Equals(object obj)
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
