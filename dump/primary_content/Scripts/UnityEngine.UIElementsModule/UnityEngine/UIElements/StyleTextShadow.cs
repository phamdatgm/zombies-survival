using System;

namespace UnityEngine.UIElements;

public struct StyleTextShadow : IStyleValue<TextShadow>, IEquatable<StyleTextShadow>
{
	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	private TextShadow m_Value = default;

	public TextShadow value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleTextShadow(StyleKeyword keyword)
	{
	}

	internal StyleTextShadow(TextShadow v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleTextShadow lhs, StyleTextShadow rhs)
	{
		return false;
	}

	public static implicit operator StyleTextShadow(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleTextShadow other)
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
