namespace System.Drawing;

[Serializable]
public struct Rectangle : IEquatable<Rectangle>
{
	private int x;

	private int y;

	private int width;

	private int height;

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(Rectangle other)
	{
		return false;
	}

	public static bool operator ==(Rectangle left, Rectangle right)
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
