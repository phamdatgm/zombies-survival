using System;

namespace UnityEngine.UIElements;

public struct StyleColor : IStyleValue<Color>, IEquatable<StyleColor>
{
	private Color m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Color value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleColor(Color v)
	{
	}

	internal StyleColor(Color v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleColor lhs, StyleColor rhs)
	{
		return false;
	}

	public static implicit operator StyleColor(Color v)
	{
		return default;
	}

	public bool Equals(StyleColor other)
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
