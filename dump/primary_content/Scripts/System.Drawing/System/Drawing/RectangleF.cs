namespace System.Drawing;

[Serializable]
public struct RectangleF : IEquatable<RectangleF>
{
	private float x;

	private float y;

	private float width;

	private float height;

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(RectangleF other)
	{
		return false;
	}

	public static bool operator ==(RectangleF left, RectangleF right)
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
