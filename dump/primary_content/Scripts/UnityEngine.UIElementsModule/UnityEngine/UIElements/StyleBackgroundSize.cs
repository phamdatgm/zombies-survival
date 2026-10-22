using System;

namespace UnityEngine.UIElements;

public struct StyleBackgroundSize : IStyleValue<BackgroundSize>, IEquatable<StyleBackgroundSize>
{
	private BackgroundSize m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public BackgroundSize value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleBackgroundSize(StyleKeyword keyword)
	{
	}

	internal StyleBackgroundSize(BackgroundSize v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleBackgroundSize lhs, StyleBackgroundSize rhs)
	{
		return false;
	}

	public static implicit operator StyleBackgroundSize(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleBackgroundSize other)
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
