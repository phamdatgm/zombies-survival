using System;

namespace UnityEngine.UIElements;

public struct StyleLength : IStyleValue<Length>, IEquatable<StyleLength>
{
	private Length m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Length value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleLength(float v)
	{
	}

	public StyleLength(Length v)
	{
	}

	public StyleLength(StyleKeyword keyword)
	{
	}

	internal StyleLength(Length v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleLength lhs, StyleLength rhs)
	{
		return false;
	}

	public static implicit operator StyleLength(StyleKeyword keyword)
	{
		return default;
	}

	public static implicit operator StyleLength(float v)
	{
		return default;
	}

	public static implicit operator StyleLength(Length v)
	{
		return default;
	}

	public bool Equals(StyleLength other)
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
