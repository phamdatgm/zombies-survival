using System;

namespace UnityEngine.UIElements;

public struct BackgroundSize : IEquatable<BackgroundSize>
{
	private BackgroundSizeType m_SizeType = BackgroundSizeType.Length;

	private Length m_X = default;

	private Length m_Y = default;

	public BackgroundSizeType sizeType
	{
		get
		{
			return BackgroundSizeType.Length;
		}
		set
		{
		}
	}

	public Length x
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Length y
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public BackgroundSize(Length sizeX, Length sizeY)
	{
	}

	public BackgroundSize(BackgroundSizeType sizeType)
	{
	}

	internal static BackgroundSize Initial()
	{
		return default;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(BackgroundSize other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public static bool operator ==(BackgroundSize style1, BackgroundSize style2)
	{
		return false;
	}

	public static bool operator !=(BackgroundSize style1, BackgroundSize style2)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}
}
