using System;

namespace UnityEngine.UIElements;

public struct StyleEnum<T> : IStyleValue<T>, IEquatable<StyleEnum<T>> where T : struct, IConvertible
{
	private T m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public T value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleEnum(T v)
	{
	}

	public StyleEnum(StyleKeyword keyword)
	{
	}

	internal StyleEnum(T v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleEnum<T> lhs, StyleEnum<T> rhs)
	{
		return false;
	}

	public static bool operator !=(StyleEnum<T> lhs, StyleEnum<T> rhs)
	{
		return false;
	}

	public static implicit operator StyleEnum<T>(StyleKeyword keyword)
	{
		return default;
	}

	public static implicit operator StyleEnum<T>(T v)
	{
		return default;
	}

	public bool Equals(StyleEnum<T> other)
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
