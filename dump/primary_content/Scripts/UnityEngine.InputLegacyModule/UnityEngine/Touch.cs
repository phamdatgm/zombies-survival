namespace UnityEngine;

public struct Touch
{
	private int m_FingerId;

	private Vector2 m_Position;

	private Vector2 m_RawPosition;

	private Vector2 m_PositionDelta;

	private float m_TimeDelta;

	private int m_TapCount;

	private TouchPhase m_Phase;

	private TouchType m_Type;

	private float m_Pressure;

	private float m_maximumPossiblePressure;

	private float m_Radius;

	private float m_RadiusVariance;

	private float m_AltitudeAngle;

	private float m_AzimuthAngle;

	public int fingerId => 0;

	public Vector2 position
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector2 rawPosition
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Vector2 deltaPosition
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public float deltaTime => 0f;

	public int tapCount => 0;

	public TouchPhase phase => TouchPhase.Began;

	public float pressure => 0f;

	public float maximumPossiblePressure => 0f;

	public TouchType type => TouchType.Direct;

	public float altitudeAngle => 0f;

	public float azimuthAngle => 0f;

	public float radius => 0f;

	public float radiusVariance => 0f;
}
