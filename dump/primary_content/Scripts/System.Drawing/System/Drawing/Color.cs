namespace System.Drawing;

[Serializable]
public struct Color : IEquatable<Color>
{
	private readonly string name;

	private readonly long value;

	private readonly short knownColor;

	private readonly short state;

	public byte R => 0;

	public byte G => 0;

	public byte B => 0;

	public byte A => 0;

	public bool IsKnownColor => false;

	public string Name => null;

	private long Value => 0L;

	public override string ToString()
	{
		return null;
	}

	public static bool operator ==(Color left, Color right)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(Color other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
