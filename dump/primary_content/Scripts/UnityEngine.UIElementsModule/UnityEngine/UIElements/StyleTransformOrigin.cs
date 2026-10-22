using System;

namespace UnityEngine.UIElements;

public struct StyleTransformOrigin : IStyleValue<TransformOrigin>, IEquatable<StyleTransformOrigin>
{
	private TransformOrigin m_Value = default;

	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	public TransformOrigin value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleTransformOrigin(StyleKeyword keyword)
	{
	}

	internal StyleTransformOrigin(TransformOrigin v, StyleKeyword keyword)
	{
	}

	public static bool operator ==(StyleTransformOrigin lhs, StyleTransformOrigin rhs)
	{
		return false;
	}

	public static implicit operator StyleTransformOrigin(StyleKeyword keyword)
	{
		return default;
	}

	public bool Equals(StyleTransformOrigin other)
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
