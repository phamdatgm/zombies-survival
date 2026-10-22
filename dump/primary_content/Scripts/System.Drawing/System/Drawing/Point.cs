namespace System.Drawing;

[Serializable]
public struct Point : IEquatable<Point>
{
	private int x;

	private int y;

	public static bool operator ==(Point left, Point right)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(Point other)
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
