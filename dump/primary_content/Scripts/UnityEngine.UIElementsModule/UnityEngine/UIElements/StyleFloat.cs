using System;

namespace UnityEngine.UIElements;

public struct StyleFloat : IStyleValue<float>, IEquatable<StyleFloat>
{
	private float m_Value = 0f;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public float value => 0f;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleFloat(float v)
	{
	}

	public StyleFloat(StyleKeyword keyword)
	{
	}

	internal StyleFloat(float v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleFloat lhs, StyleFloat rhs)
	{
		return false;
	}

	public static implicit operator StyleFloat(StyleKeyword keyword)
	{
		return default;
	}

	public static implicit operator StyleFloat(float v)
	{
		return default;
	}

	public bool Equals(StyleFloat other)
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
