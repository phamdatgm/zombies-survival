namespace System.Drawing;

[Serializable]
public struct SizeF : IEquatable<SizeF>
{
	private float width;

	private float height;

	public static bool operator ==(SizeF sz1, SizeF sz2)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(SizeF other)
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
