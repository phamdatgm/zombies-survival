namespace UnityEngine.UIElements;

internal struct Spacing
{
	public float left = 0f;

	public float top = 0f;

	public float right = 0f;

	public float bottom = 0f;

	public float horizontal => 0f;

	public float vertical => 0f;

	public Spacing(float left, float top, float right, float bottom)
	{
	}

	public static Rect operator -(Rect r, Spacing a)
	{
		return default;
	}
}
