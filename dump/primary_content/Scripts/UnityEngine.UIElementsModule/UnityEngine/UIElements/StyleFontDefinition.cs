using System;

namespace UnityEngine.UIElements;

public struct StyleFontDefinition : IStyleValue<FontDefinition>, IEquatable<StyleFontDefinition>
{
	private StyleKeyword m_Keyword = StyleKeyword.Undefined;

	private FontDefinition m_Value = default;

	public FontDefinition value => default;

	public StyleKeyword keyword => StyleKeyword.Undefined;

	public StyleFontDefinition(FontDefinition f)
	{
	}

	internal StyleFontDefinition(FontDefinition f, StyleKeyword keyword)
	{
	}

	public static implicit operator StyleFontDefinition(FontDefinition f)
	{
		return default;
	}

	public bool Equals(StyleFontDefinition other)
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
}
