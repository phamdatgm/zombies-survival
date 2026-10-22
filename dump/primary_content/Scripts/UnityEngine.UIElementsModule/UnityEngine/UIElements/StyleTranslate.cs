using System;

namespace UnityEngine.UIElements;

public struct StyleTranslate : IStyleValue<Translate>, IEquatable<StyleTranslate>
{
	private Translate m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Translate value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleTranslate(Translate v)
	{
	}

	public StyleTranslate(StyleKeyword keyword)
	{
	}

	internal StyleTranslate(Translate v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleTranslate lhs, StyleTranslate rhs)
	{
		return false;
	}

	public static implicit operator StyleTranslate(StyleKeyword keyword)
	{
		return default;
	}

	public static implicit operator StyleTranslate(Translate v)
	{
		return default;
	}

	public bool Equals(StyleTranslate other)
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
