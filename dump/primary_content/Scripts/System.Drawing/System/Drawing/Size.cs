namespace System.Drawing;

[Serializable]
public struct Size : IEquatable<Size>
{
	private int width;

	private int height;

	public static bool operator ==(Size sz1, Size sz2)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(Size other)
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
