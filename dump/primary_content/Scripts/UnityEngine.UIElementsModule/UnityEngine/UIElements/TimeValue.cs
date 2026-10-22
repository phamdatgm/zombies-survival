using System;

namespace UnityEngine.UIElements;

public struct TimeValue : IEquatable<TimeValue>
{
	private float m_Value = 0f;

	private TimeUnit m_Unit = TimeUnit.Second;

	public float value => 0f;

	public TimeUnit unit => TimeUnit.Second;

	public TimeValue(float value)
	{
	}

	public TimeValue(float value, TimeUnit unit)
	{
	}

	public static implicit operator TimeValue(float value)
	{
		return default;
	}

	public static bool operator ==(TimeValue lhs, TimeValue rhs)
	{
		return false;
	}

	public static bool operator !=(TimeValue lhs, TimeValue rhs)
	{
		return false;
	}

	public bool Equals(TimeValue other)
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
