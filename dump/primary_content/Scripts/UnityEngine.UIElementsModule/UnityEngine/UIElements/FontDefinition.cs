using System;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements;

public struct FontDefinition : IEquatable<FontDefinition>
{
	private Font m_Font;

	private FontAsset m_FontAsset;

	public Font font => null;

	public FontAsset fontAsset => null;

	public static FontDefinition FromFont(Font f)
	{
		return default;
	}

	public static FontDefinition FromSDFFont(FontAsset f)
	{
		return default;
	}

	internal static FontDefinition FromObject(object obj)
	{
		return default;
	}

	internal bool IsEmpty()
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}

	public bool Equals(FontDefinition other)
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

	public static bool operator ==(FontDefinition left, FontDefinition right)
	{
		return false;
	}

	public static bool operator !=(FontDefinition left, FontDefinition right)
	{
		return false;
	}
}
