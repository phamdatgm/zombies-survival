using System;

namespace UnityEngine.UIElements;

public struct Translate(Length x, Length y, float z) : IEquatable<Translate>
{
	private Length m_X = default;

	private Length m_Y = default;

	private float m_Z = 0f;

	private bool m_isNone = false;

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

	public float z => 0f;

	public static Translate None()
	{
		return default;
	}

	public static bool operator ==(Translate lhs, Translate rhs)
	{
		return false;
	}

	public static bool operator !=(Translate lhs, Translate rhs)
	{
		return false;
	}

	public bool Equals(Translate other)
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
