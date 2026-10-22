namespace System.Drawing;

[Serializable]
public struct PointF : IEquatable<PointF>
{
	private float x;

	private float y;

	public static bool operator ==(PointF left, PointF right)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(PointF other)
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
