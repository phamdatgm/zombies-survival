using System;

namespace UnityEngine.UIElements;

public struct StyleFont : IStyleValue<Font>, IEquatable<StyleFont>
{
	private Font m_Value = null;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Font value => null;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleFont(Font v)
	{
	}

	internal StyleFont(Font v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleFont lhs, StyleFont rhs)
	{
		return false;
	}

	public static implicit operator StyleFont(Font v)
	{
		return default;
	}

	public bool Equals(StyleFont other)
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
