using System;

namespace UnityEngine.UIElements;

public struct EasingFunction : IEquatable<EasingFunction>
{
	private EasingMode m_Mode = EasingMode.Ease;

	public EasingMode mode => EasingMode.Ease;

	public EasingFunction(EasingMode mode)
	{
	}

	public static implicit operator EasingFunction(EasingMode easingMode)
	{
		return default;
	}

	public static bool operator ==(EasingFunction lhs, EasingFunction rhs)
	{
		return false;
	}

	public bool Equals(EasingFunction other)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override string ToString()
	{
		return null;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
