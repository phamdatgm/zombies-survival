using System;

namespace UnityEngine.UIElements;

public struct BackgroundRepeat(Repeat repeatX, Repeat repeatY) : IEquatable<BackgroundRepeat>
{
	public Repeat x = Repeat.NoRepeat;

	public Repeat y = Repeat.NoRepeat;

	internal static BackgroundRepeat Initial()
	{
		return default;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(BackgroundRepeat other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public static bool operator ==(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return false;
	}

	public static bool operator !=(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}
}
