using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public struct RaycastHit
{
	internal Vector3 m_Point;

	internal Vector3 m_Normal;

	internal uint m_FaceID;

	internal float m_Distance;

	internal Vector2 m_UV;

	internal int m_Collider;

	public Collider collider => null;

	public Vector3 point => default;

	public Vector3 normal => default;

	public float distance => 0f;
}
