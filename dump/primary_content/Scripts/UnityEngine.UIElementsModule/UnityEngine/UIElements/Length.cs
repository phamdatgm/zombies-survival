using System;

namespace UnityEngine.UIElements;

[Serializable]
public struct Length : IEquatable<Length>
{
	private enum Unit
	{
		Pixel = 0,
		Percent = 1,
		Auto = 2,
		None = 3
	}

	internal const float k_MaxValue = 8388608f;

	[SerializeField]
	private float m_Value = 0f;

	[SerializeField]
	private Unit m_Unit = Unit.Pixel;

	public float value
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	public LengthUnit unit => LengthUnit.Pixel;

	public static Length Percent(float value)
	{
		return default;
	}

	public static Length Auto()
	{
		return default;
	}

	public static Length None()
	{
		return default;
	}

	public bool IsAuto()
	{
		return false;
	}

	public bool IsNone()
	{
		return false;
	}

	public Length(float value)
	{
	}

	public Length(float value, LengthUnit unit)
	{
	}

	private Length(float value, Unit unit)
	{
	}

	public static implicit operator Length(float value)
	{
		return default;
	}

	public static bool operator ==(Length lhs, Length rhs)
	{
		return false;
	}

	public static bool operator !=(Length lhs, Length rhs)
	{
		return false;
	}

	public bool Equals(Length other)
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
