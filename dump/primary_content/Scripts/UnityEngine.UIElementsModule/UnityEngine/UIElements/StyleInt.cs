using System;

namespace UnityEngine.UIElements;

public struct StyleInt : IStyleValue<int>, IEquatable<StyleInt>
{
	private int m_Value = 0;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public int value => 0;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleInt(StyleKeyword keyword)
	{
	}

	internal StyleInt(int v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleInt lhs, StyleInt rhs)
	{
		return false;
	}

	public static implicit operator StyleInt(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleInt other)
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
