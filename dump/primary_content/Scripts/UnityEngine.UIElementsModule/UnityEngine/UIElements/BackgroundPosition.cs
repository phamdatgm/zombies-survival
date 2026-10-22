using System;

namespace UnityEngine.UIElements;

public struct BackgroundPosition : IEquatable<BackgroundPosition>
{
	public BackgroundPositionKeyword keyword = BackgroundPositionKeyword.Center;

	public Length offset = default;

	public BackgroundPosition(BackgroundPositionKeyword keyword)
	{
	}

	public BackgroundPosition(BackgroundPositionKeyword keyword, Length offset)
	{
	}

	internal static BackgroundPosition Initial()
	{
		return default;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(BackgroundPosition other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public static bool operator ==(BackgroundPosition style1, BackgroundPosition style2)
	{
		return false;
	}

	public static bool operator !=(BackgroundPosition style1, BackgroundPosition style2)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}
}
