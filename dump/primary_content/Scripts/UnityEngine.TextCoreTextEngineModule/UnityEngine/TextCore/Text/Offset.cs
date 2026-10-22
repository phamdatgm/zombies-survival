namespace UnityEngine.TextCore.Text;

internal struct Offset
{
	private float m_Left = 0f;

	private float m_Right = 0f;

	private float m_Top = 0f;

	private float m_Bottom = 0f;

	private static readonly Offset k_ZeroOffset;

	public float left => 0f;

	public float right => 0f;

	public float top => 0f;

	public float bottom => 0f;

	public static Offset zero => default;

	public Offset(float left, float right, float top, float bottom)
	{
	}

	public static bool operator ==(Offset lhs, Offset rhs)
	{
		return false;
	}

	public static Offset operator *(Offset a, float b)
	{
		return default;
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
