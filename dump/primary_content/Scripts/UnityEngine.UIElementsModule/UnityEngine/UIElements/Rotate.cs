using System;

namespace UnityEngine.UIElements;

public struct Rotate(Angle angle) : IEquatable<Rotate>
{
	private Angle m_Angle = default;

	private Vector3 m_Axis = default;

	private bool m_IsNone = false;

	public Angle angle
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	internal Vector3 axis => default;

	internal static Rotate Initial()
	{
		return default;
	}

	public static Rotate None()
	{
		return default;
	}

	public static bool operator ==(Rotate lhs, Rotate rhs)
	{
		return false;
	}

	public static bool operator !=(Rotate lhs, Rotate rhs)
	{
		return false;
	}

	public bool Equals(Rotate other)
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

	internal Quaternion ToQuaternion()
	{
		return default;
	}
}
