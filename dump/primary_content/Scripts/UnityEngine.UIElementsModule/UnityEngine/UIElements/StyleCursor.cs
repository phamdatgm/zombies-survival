using System;

namespace UnityEngine.UIElements;

public struct StyleCursor : IStyleValue<Cursor>, IEquatable<StyleCursor>
{
	private Cursor m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Cursor value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleCursor(StyleKeyword keyword)
	{
	}

	internal StyleCursor(Cursor v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleCursor lhs, StyleCursor rhs)
	{
		return false;
	}

	public static implicit operator StyleCursor(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleCursor other)
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
