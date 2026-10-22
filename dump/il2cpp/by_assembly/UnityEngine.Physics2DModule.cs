// Namespace: 
internal class <Module> // TypeDefIndex: 7801
{}


// Namespace: UnityEngine
public class Physics2D // TypeDefIndex: 7802
{
	// Fields
	private static List<Rigidbody2D> m_LastDisabledRigidbody2D; // 0x0

	// Methods

	// RVA: 0x13CAF94 Offset: 0x13C6F94 VA: 0x13CAF94
	private static void .cctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
public struct RaycastHit2D // TypeDefIndex: 7803
{
	// Fields
	private Vector2 m_Centroid; // 0x0
	private Vector2 m_Point; // 0x8
	private Vector2 m_Normal; // 0x10
	private float m_Distance; // 0x18
	private float m_Fraction; // 0x1C
	private int m_Collider; // 0x20

	// Properties
	public Vector2 point { get; }
	public Vector2 normal { get; }
	public float distance { get; }
	public Collider2D collider { get; }

	// Methods

	// RVA: 0x13CB020 Offset: 0x13C7020 VA: 0x13CB020
	public Vector2 get_point() { }

	// RVA: 0x13CB028 Offset: 0x13C7028 VA: 0x13CB028
	public Vector2 get_normal() { }

	// RVA: 0x13CB030 Offset: 0x13C7030 VA: 0x13CB030
	public float get_distance() { }

	// RVA: 0x13CB038 Offset: 0x13C7038 VA: 0x13CB038
	public Collider2D get_collider() { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public sealed class Rigidbody2D : Component // TypeDefIndex: 7804
{}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
[RequiredByNativeCode(Optional = True)]
public class Collider2D : Behaviour // TypeDefIndex: 7805
{}
