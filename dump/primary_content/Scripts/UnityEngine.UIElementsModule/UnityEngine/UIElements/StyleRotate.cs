using System;

namespace UnityEngine.UIElements;

public struct StyleRotate : IStyleValue<Rotate>, IEquatable<StyleRotate>
{
	private Rotate m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public Rotate value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleRotate(StyleKeyword keyword)
	{
	}

	internal StyleRotate(Rotate v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleRotate lhs, StyleRotate rhs)
	{
		return false;
	}

	public static implicit operator StyleRotate(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleRotate other)
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
