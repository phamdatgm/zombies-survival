using System;

namespace UnityEngine.UIElements;

public struct TransformOrigin(Length x, Length y, float z) : IEquatable<TransformOrigin>
{
	private Length m_X = default;

	private Length m_Y = default;

	private float m_Z = 0f;

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

	public static TransformOrigin Initial()
	{
		return default;
	}

	public static bool operator ==(TransformOrigin lhs, TransformOrigin rhs)
	{
		return false;
	}

	public static bool operator !=(TransformOrigin lhs, TransformOrigin rhs)
	{
		return false;
	}

	public bool Equals(TransformOrigin other)
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
