namespace UnityEngine.TextCore.Text;

internal struct HighlightState(Color32 color, Offset padding)
{
	public Color32 color = default;

	public Offset padding = default;

	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return false;
	}

	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override bool Equals(object obj)
	{
		return false;
	}
}
