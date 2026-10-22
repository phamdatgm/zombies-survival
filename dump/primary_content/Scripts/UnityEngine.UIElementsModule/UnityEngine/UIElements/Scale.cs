using System;

namespace UnityEngine.UIElements;

public struct Scale(Vector3 scale) : IEquatable<Scale>
{
	private Vector3 m_Scale = default;

	private bool m_IsNone = false;

	public Vector3 value => default;

	internal static Scale Initial()
	{
		return default;
	}

	public static Scale None()
	{
		return default;
	}

	public static bool operator ==(Scale lhs, Scale rhs)
	{
		return false;
	}

	public static bool operator !=(Scale lhs, Scale rhs)
	{
		return false;
	}

	public bool Equals(Scale other)
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
