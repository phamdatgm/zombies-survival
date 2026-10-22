using UnityEngine.Scripting;

namespace UnityEngine;

[RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct RaycastHit2D
{
	private Vector2 m_Centroid;

	private Vector2 m_Point;

	private Vector2 m_Normal;

	private float m_Distance;

	private float m_Fraction;

	private int m_Collider;

	public Vector2 point => default;

	public Vector2 normal => default;

	public float distance => 0f;

	public Collider2D collider => null;
}
