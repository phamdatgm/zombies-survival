// Namespace: 
internal class <Module> // TypeDefIndex: 7587
{}


// Namespace: UnityEngine
public enum ForceMode // TypeDefIndex: 7588
{
	// Fields
	public int value__; // 0x0
	public const ForceMode Force = 0;
	public const ForceMode Acceleration = 5;
	public const ForceMode Impulse = 1;
	public const ForceMode VelocityChange = 2;
}


// Namespace: UnityEngine
public struct WheelFrictionCurve // TypeDefIndex: 7589
{
	// Fields
	private float m_ExtremumSlip; // 0x0
	private float m_ExtremumValue; // 0x4
	private float m_AsymptoteSlip; // 0x8
	private float m_AsymptoteValue; // 0xC
	private float m_Stiffness; // 0x10

	// Properties
	public float stiffness { set; }

	// Methods

	// RVA: 0x13CB0E4 Offset: 0x13C70E4 VA: 0x13CB0E4
	public void set_stiffness(float value) { }
}


// Namespace: UnityEngine
public enum RigidbodyInterpolation // TypeDefIndex: 7590
{
	// Fields
	public int value__; // 0x0
	public const RigidbodyInterpolation None = 0;
	public const RigidbodyInterpolation Interpolate = 1;
	public const RigidbodyInterpolation Extrapolate = 2;
}


// Namespace: UnityEngine
public struct JointSpring // TypeDefIndex: 7591
{
	// Fields
	public float spring; // 0x0
	public float damper; // 0x4
	public float targetPosition; // 0x8
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class ControllerColliderHit // TypeDefIndex: 7592
{
	// Fields
	internal CharacterController m_Controller; // 0x10
	internal Collider m_Collider; // 0x18
	internal Vector3 m_Point; // 0x20
	internal Vector3 m_Normal; // 0x2C
	internal Vector3 m_MoveDirection; // 0x38
	internal float m_MoveLength; // 0x44
	internal int m_Push; // 0x48
}


// Namespace: UnityEngine
public class Collision // TypeDefIndex: 7593
{
	// Fields
	private ContactPairHeader m_Header; // 0x10
	private ContactPair m_Pair; // 0x38
	private bool m_Flipped; // 0x60
	private ContactPoint[] m_LegacyContacts; // 0x68

	// Properties
	public Rigidbody rigidbody { get; }
	public Component body { get; }
	public Collider collider { get; }
	public Transform transform { get; }
	public GameObject gameObject { get; }
	internal bool Flipped { set; }
	public ContactPoint[] contacts { get; }

	// Methods

	// RVA: 0x13CB0EC Offset: 0x13C70EC VA: 0x13CB0EC
	public Rigidbody get_rigidbody() { }

	// RVA: 0x13CB16C Offset: 0x13C716C VA: 0x13CB16C
	public Component get_body() { }

	// RVA: 0x13CB270 Offset: 0x13C7270 VA: 0x13CB270
	public Collider get_collider() { }

	// RVA: 0x13CB39C Offset: 0x13C739C VA: 0x13CB39C
	public Transform get_transform() { }

	// RVA: 0x13CB430 Offset: 0x13C7430 VA: 0x13CB430
	public GameObject get_gameObject() { }

	// RVA: 0x13CB4C4 Offset: 0x13C74C4 VA: 0x13CB4C4
	internal void set_Flipped(bool value) { }

	// RVA: 0x13CB4D0 Offset: 0x13C74D0 VA: 0x13CB4D0
	public ContactPoint[] get_contacts() { }

	// RVA: 0x13CB5C8 Offset: 0x13C75C8 VA: 0x13CB5C8
	public void .ctor() { }

	// RVA: 0x13CB5FC Offset: 0x13C75FC VA: 0x13CB5FC
	internal void .ctor(in ContactPairHeader header, in ContactPair pair, bool flipped) { }

	// RVA: 0x13CB6D8 Offset: 0x13C76D8 VA: 0x13CB6D8
	internal void Reuse(in ContactPairHeader header, in ContactPair pair) { }
}


// Namespace: UnityEngine
public enum QueryTriggerInteraction // TypeDefIndex: 7594
{
	// Fields
	public int value__; // 0x0
	public const QueryTriggerInteraction UseGlobal = 0;
	public const QueryTriggerInteraction Ignore = 1;
	public const QueryTriggerInteraction Collide = 2;
}


// Namespace: 
public sealed class Physics.ContactEventDelegate : MulticastDelegate // TypeDefIndex: 7595
{
	// Methods

	// RVA: 0x13CE1E0 Offset: 0x13CA1E0 VA: 0x13CE1E0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13CE26C Offset: 0x13CA26C VA: 0x13CE26C Slot: 12
	public virtual void Invoke(PhysicsScene scene, NativeArray.ReadOnly<ContactPairHeader> headerArray) { }
}


// Namespace: UnityEngine
public class Physics // TypeDefIndex: 7596
{
	// Fields
	[CompilerGenerated]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEvent; // 0x0
	[CompilerGenerated]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEventCCD; // 0x8
	[CompilerGenerated]
	private static Physics.ContactEventDelegate ContactEvent; // 0x10
	private static readonly Collision s_ReusableCollision; // 0x18

	// Properties
	public static bool invokeCollisionCallbacks { get; }
	public static PhysicsScene defaultPhysicsScene { get; }
	public static bool reuseCollisionCallbacks { get; }

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13CB708 Offset: 0x13C7708 VA: 0x13CB708
	private static void OnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD) { }

	// RVA: 0x13CB7EC Offset: 0x13C77EC VA: 0x13CB7EC
	public static bool get_invokeCollisionCallbacks() { }

	// RVA: 0x13CB814 Offset: 0x13C7814 VA: 0x13CB814
	public static PhysicsScene get_defaultPhysicsScene() { }

	// RVA: 0x13CB8CC Offset: 0x13C78CC VA: 0x13CB8CC
	public static void IgnoreLayerCollision(int layer1, int layer2, bool ignore) { }

	// RVA: 0x13CB920 Offset: 0x13C7920 VA: 0x13CB920
	public static void IgnoreLayerCollision(int layer1, int layer2) { }

	// RVA: 0x13CB9A8 Offset: 0x13C79A8 VA: 0x13CB9A8
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CBC50 Offset: 0x13C7C50 VA: 0x13CBC50
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask) { }

	// RVA: 0x13CBD14 Offset: 0x13C7D14 VA: 0x13CBD14
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance) { }

	// RVA: 0x13CBDDC Offset: 0x13C7DDC VA: 0x13CBDDC
	public static bool Raycast(Vector3 origin, Vector3 direction) { }

	// RVA: 0x13CBE94 Offset: 0x13C7E94 VA: 0x13CBE94
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	[RequiredByNativeCode]
	// RVA: 0x13CC158 Offset: 0x13C8158 VA: 0x13CC158
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask) { }

	// RVA: 0x13CC234 Offset: 0x13C8234 VA: 0x13CC234
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance) { }

	// RVA: 0x13CC2FC Offset: 0x13C82FC VA: 0x13CC2FC
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo) { }

	// RVA: 0x13CC3C4 Offset: 0x13C83C4 VA: 0x13CC3C4
	public static bool Raycast(Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CC45C Offset: 0x13C845C VA: 0x13CC45C
	public static bool Raycast(Ray ray, float maxDistance, int layerMask) { }

	// RVA: 0x13CC4F8 Offset: 0x13C84F8 VA: 0x13CC4F8
	public static bool Raycast(Ray ray, float maxDistance) { }

	// RVA: 0x13CC580 Offset: 0x13C8580 VA: 0x13CC580
	public static bool Raycast(Ray ray) { }

	// RVA: 0x13CC608 Offset: 0x13C8608 VA: 0x13CC608
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CC6B8 Offset: 0x13C86B8 VA: 0x13CC6B8
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask) { }

	// RVA: 0x13CC770 Offset: 0x13C8770 VA: 0x13CC770
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance) { }

	// RVA: 0x13CC810 Offset: 0x13C8810 VA: 0x13CC810
	public static bool Raycast(Ray ray, out RaycastHit hitInfo) { }

	// RVA: 0x13CC8A0 Offset: 0x13C88A0 VA: 0x13CC8A0
	private static RaycastHit[] Internal_RaycastAll(PhysicsScene physicsScene, Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CC9B4 Offset: 0x13C89B4 VA: 0x13CC9B4
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CCBD8 Offset: 0x13C8BD8 VA: 0x13CCBD8
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask) { }

	// RVA: 0x13CCC88 Offset: 0x13C8C88 VA: 0x13CCC88
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance) { }

	// RVA: 0x13CCD34 Offset: 0x13C8D34 VA: 0x13CCD34
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction) { }

	// RVA: 0x13CCDD8 Offset: 0x13C8DD8 VA: 0x13CCDD8
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	[RequiredByNativeCode]
	// RVA: 0x13CCE8C Offset: 0x13C8E8C VA: 0x13CCE8C
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask) { }

	// RVA: 0x13CCF3C Offset: 0x13C8F3C VA: 0x13CCF3C
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance) { }

	// RVA: 0x13CCFE0 Offset: 0x13C8FE0 VA: 0x13CCFE0
	public static RaycastHit[] RaycastAll(Ray ray) { }

	// RVA: 0x13CD07C Offset: 0x13C907C VA: 0x13CD07C
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	[RequiredByNativeCode]
	// RVA: 0x13CD37C Offset: 0x13C937C VA: 0x13CD37C
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask) { }

	// RVA: 0x13CD414 Offset: 0x13C9414 VA: 0x13CD414
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance) { }

	// RVA: 0x13CD4B0 Offset: 0x13C94B0 VA: 0x13CD4B0
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results) { }

	// RVA: 0x13CD53C Offset: 0x13C953C VA: 0x13CD53C
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CD610 Offset: 0x13C9610 VA: 0x13CD610
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask) { }

	// RVA: 0x13CD6E8 Offset: 0x13C96E8 VA: 0x13CD6E8
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance) { }

	// RVA: 0x13CD7AC Offset: 0x13C97AC VA: 0x13CD7AC
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results) { }

	// RVA: 0x13CD870 Offset: 0x13C9870 VA: 0x13CD870
	public static bool get_reuseCollisionCallbacks() { }

	// RVA: 0x13CD898 Offset: 0x13C9898 VA: 0x13CD898
	internal static Collider GetColliderByInstanceID(int instanceID) { }

	// RVA: 0x13CD8D4 Offset: 0x13C98D4 VA: 0x13CD8D4
	internal static Component GetBodyByInstanceID(int instanceID) { }

	// RVA: 0x13CD910 Offset: 0x13C9910 VA: 0x13CD910
	private static void SendOnCollisionEnter(Component component, Collision collision) { }

	// RVA: 0x13CD954 Offset: 0x13C9954 VA: 0x13CD954
	private static void SendOnCollisionStay(Component component, Collision collision) { }

	// RVA: 0x13CD998 Offset: 0x13C9998 VA: 0x13CD998
	private static void SendOnCollisionExit(Component component, Collision collision) { }

	[RequiredByNativeCode]
	// RVA: 0x13CD9DC Offset: 0x13C99DC VA: 0x13CD9DC
	private static void OnSceneContact(PhysicsScene scene, IntPtr buffer, int count) { }

	// RVA: 0x13CDC34 Offset: 0x13C9C34 VA: 0x13CDC34
	private static void ReportContacts(NativeArray.ReadOnly<ContactPairHeader> array) { }

	// RVA: 0x13CE018 Offset: 0x13CA018 VA: 0x13CE018
	private static Collision GetCollisionToReport(in ContactPairHeader header, in ContactPair pair, bool flipped) { }

	// RVA: 0x13CE154 Offset: 0x13CA154 VA: 0x13CE154
	private static void .cctor() { }

	// RVA: 0x13CB890 Offset: 0x13C7890 VA: 0x13CB890
	private static void get_defaultPhysicsScene_Injected(out PhysicsScene ret) { }

	// RVA: 0x13CC948 Offset: 0x13C8948 VA: 0x13CC948
	private static RaycastHit[] Internal_RaycastAll_Injected(ref PhysicsScene physicsScene, ref Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction) { }
}


// Namespace: UnityEngine
public struct ModifiableContactPair // TypeDefIndex: 7597
{
	// Fields
	private IntPtr actor; // 0x0
	private IntPtr otherActor; // 0x8
	private IntPtr shape; // 0x10
	private IntPtr otherShape; // 0x18
	public Quaternion rotation; // 0x20
	public Vector3 position; // 0x30
	public Quaternion otherRotation; // 0x3C
	public Vector3 otherPosition; // 0x4C
	private int numContacts; // 0x58
	private IntPtr contacts; // 0x60
}


// Namespace: UnityEngine
public class PhysicMaterial : Object // TypeDefIndex: 7598
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct RaycastHit // TypeDefIndex: 7599
{
	// Fields
	internal Vector3 m_Point; // 0x0
	internal Vector3 m_Normal; // 0xC
	internal uint m_FaceID; // 0x18
	internal float m_Distance; // 0x1C
	internal Vector2 m_UV; // 0x20
	internal int m_Collider; // 0x28

	// Properties
	public Collider collider { get; }
	public Vector3 point { get; }
	public Vector3 normal { get; }
	public float distance { get; }

	// Methods

	// RVA: 0x13CE284 Offset: 0x13CA284 VA: 0x13CE284
	public Collider get_collider() { }

	// RVA: 0x13CE330 Offset: 0x13CA330 VA: 0x13CE330
	public Vector3 get_point() { }

	// RVA: 0x13CE33C Offset: 0x13CA33C VA: 0x13CE33C
	public Vector3 get_normal() { }

	// RVA: 0x13CE348 Offset: 0x13CA348 VA: 0x13CE348
	public float get_distance() { }
}


// Namespace: UnityEngine
[RequireComponent(typeof(Transform))]
public class Rigidbody : Component // TypeDefIndex: 7600
{
	// Properties
	public Vector3 velocity { get; set; }
	public Vector3 angularVelocity { get; set; }
	public float mass { set; }
	public bool isKinematic { set; }
	public Vector3 centerOfMass { get; set; }
	public Vector3 position { get; set; }
	public Quaternion rotation { get; set; }
	public RigidbodyInterpolation interpolation { set; }

	// Methods

	// RVA: 0x13CE350 Offset: 0x13CA350 VA: 0x13CE350
	public Vector3 get_velocity() { }

	// RVA: 0x13CE3F0 Offset: 0x13CA3F0 VA: 0x13CE3F0
	public void set_velocity(Vector3 value) { }

	// RVA: 0x13CE488 Offset: 0x13CA488 VA: 0x13CE488
	public Vector3 get_angularVelocity() { }

	// RVA: 0x13CE528 Offset: 0x13CA528 VA: 0x13CE528
	public void set_angularVelocity(Vector3 value) { }

	// RVA: 0x13CE5C0 Offset: 0x13CA5C0 VA: 0x13CE5C0
	public void set_mass(float value) { }

	// RVA: 0x13CE60C Offset: 0x13CA60C VA: 0x13CE60C
	public void set_isKinematic(bool value) { }

	// RVA: 0x13CE650 Offset: 0x13CA650 VA: 0x13CE650
	public Vector3 get_centerOfMass() { }

	// RVA: 0x13CE6F0 Offset: 0x13CA6F0 VA: 0x13CE6F0
	public void set_centerOfMass(Vector3 value) { }

	// RVA: 0x13CE788 Offset: 0x13CA788 VA: 0x13CE788
	public Vector3 get_position() { }

	// RVA: 0x13CE828 Offset: 0x13CA828 VA: 0x13CE828
	public void set_position(Vector3 value) { }

	// RVA: 0x13CE8C0 Offset: 0x13CA8C0 VA: 0x13CE8C0
	public Quaternion get_rotation() { }

	// RVA: 0x13CE95C Offset: 0x13CA95C VA: 0x13CE95C
	public void set_rotation(Quaternion value) { }

	// RVA: 0x13CE9F4 Offset: 0x13CA9F4 VA: 0x13CE9F4
	public void set_interpolation(RigidbodyInterpolation value) { }

	// RVA: 0x13CEA38 Offset: 0x13CAA38 VA: 0x13CEA38
	public void MovePosition(Vector3 position) { }

	// RVA: 0x13CEAD0 Offset: 0x13CAAD0 VA: 0x13CEAD0
	public void Sleep() { }

	// RVA: 0x13CEB0C Offset: 0x13CAB0C VA: 0x13CEB0C
	public void WakeUp() { }

	// RVA: 0x13CEB48 Offset: 0x13CAB48 VA: 0x13CEB48
	public void AddForce(Vector3 force, ForceMode mode) { }

	// RVA: 0x13CEBF8 Offset: 0x13CABF8 VA: 0x13CEBF8
	public void AddForce(Vector3 force) { }

	// RVA: 0x13CEC00 Offset: 0x13CAC00 VA: 0x13CEC00
	public void AddTorque(Vector3 torque, ForceMode mode) { }

	// RVA: 0x13CECB0 Offset: 0x13CACB0 VA: 0x13CECB0
	public void AddForceAtPosition(Vector3 force, Vector3 position, ForceMode mode) { }

	// RVA: 0x13CED74 Offset: 0x13CAD74 VA: 0x13CED74
	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, float upwardsModifier, ForceMode mode) { }

	// RVA: 0x13CEE74 Offset: 0x13CAE74 VA: 0x13CEE74
	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius) { }

	// RVA: 0x13CEE80 Offset: 0x13CAE80 VA: 0x13CEE80
	public void .ctor() { }

	// RVA: 0x13CE3AC Offset: 0x13CA3AC VA: 0x13CE3AC
	private void get_velocity_Injected(out Vector3 ret) { }

	// RVA: 0x13CE444 Offset: 0x13CA444 VA: 0x13CE444
	private void set_velocity_Injected(ref Vector3 value) { }

	// RVA: 0x13CE4E4 Offset: 0x13CA4E4 VA: 0x13CE4E4
	private void get_angularVelocity_Injected(out Vector3 ret) { }

	// RVA: 0x13CE57C Offset: 0x13CA57C VA: 0x13CE57C
	private void set_angularVelocity_Injected(ref Vector3 value) { }

	// RVA: 0x13CE6AC Offset: 0x13CA6AC VA: 0x13CE6AC
	private void get_centerOfMass_Injected(out Vector3 ret) { }

	// RVA: 0x13CE744 Offset: 0x13CA744 VA: 0x13CE744
	private void set_centerOfMass_Injected(ref Vector3 value) { }

	// RVA: 0x13CE7E4 Offset: 0x13CA7E4 VA: 0x13CE7E4
	private void get_position_Injected(out Vector3 ret) { }

	// RVA: 0x13CE87C Offset: 0x13CA87C VA: 0x13CE87C
	private void set_position_Injected(ref Vector3 value) { }

	// RVA: 0x13CE918 Offset: 0x13CA918 VA: 0x13CE918
	private void get_rotation_Injected(out Quaternion ret) { }

	// RVA: 0x13CE9B0 Offset: 0x13CA9B0 VA: 0x13CE9B0
	private void set_rotation_Injected(ref Quaternion value) { }

	// RVA: 0x13CEA8C Offset: 0x13CAA8C VA: 0x13CEA8C
	private void MovePosition_Injected(ref Vector3 position) { }

	// RVA: 0x13CEBA4 Offset: 0x13CABA4 VA: 0x13CEBA4
	private void AddForce_Injected(ref Vector3 force, ForceMode mode) { }

	// RVA: 0x13CEC5C Offset: 0x13CAC5C VA: 0x13CEC5C
	private void AddTorque_Injected(ref Vector3 torque, ForceMode mode) { }

	// RVA: 0x13CED18 Offset: 0x13CAD18 VA: 0x13CED18
	private void AddForceAtPosition_Injected(ref Vector3 force, ref Vector3 position, ForceMode mode) { }

	// RVA: 0x13CEDF8 Offset: 0x13CADF8 VA: 0x13CEDF8
	private void AddExplosionForce_Injected(float explosionForce, ref Vector3 explosionPosition, float explosionRadius, float upwardsModifier, ForceMode mode) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[RequireComponent(typeof(Transform))]
public class Collider : Component // TypeDefIndex: 7601
{
	// Properties
	public bool enabled { set; }
	public bool isTrigger { set; }

	// Methods

	// RVA: 0x13CEE88 Offset: 0x13CAE88 VA: 0x13CEE88
	public void set_enabled(bool value) { }

	// RVA: 0x13CEECC Offset: 0x13CAECC VA: 0x13CEECC
	public void set_isTrigger(bool value) { }

	// RVA: 0x13CEF10 Offset: 0x13CAF10 VA: 0x13CEF10
	private RaycastHit Raycast(Ray ray, float maxDistance, ref bool hasHit) { }

	// RVA: 0x13CF010 Offset: 0x13CB010 VA: 0x13CF010
	public bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance) { }

	// RVA: 0x13CF0BC Offset: 0x13CB0BC VA: 0x13CF0BC
	public void .ctor() { }

	// RVA: 0x13CEFA4 Offset: 0x13CAFA4 VA: 0x13CEFA4
	private void Raycast_Injected(ref Ray ray, float maxDistance, ref bool hasHit, out RaycastHit ret) { }
}


// Namespace: UnityEngine
public class CharacterController : Collider // TypeDefIndex: 7602
{}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class MeshCollider : Collider // TypeDefIndex: 7603
{
	// Properties
	public Mesh sharedMesh { get; }

	// Methods

	// RVA: 0x13CF0C4 Offset: 0x13CB0C4 VA: 0x13CF0C4
	public Mesh get_sharedMesh() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class CapsuleCollider : Collider // TypeDefIndex: 7604
{
	// Properties
	public float radius { set; }

	// Methods

	// RVA: 0x13CF100 Offset: 0x13CB100 VA: 0x13CF100
	public void set_radius(float value) { }

	// RVA: 0x13CF14C Offset: 0x13CB14C VA: 0x13CF14C
	public void .ctor() { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class BoxCollider : Collider // TypeDefIndex: 7605
{
	// Properties
	public Vector3 center { get; set; }
	public Vector3 size { get; set; }

	// Methods

	// RVA: 0x13CF154 Offset: 0x13CB154 VA: 0x13CF154
	public Vector3 get_center() { }

	// RVA: 0x13CF1F4 Offset: 0x13CB1F4 VA: 0x13CF1F4
	public void set_center(Vector3 value) { }

	// RVA: 0x13CF28C Offset: 0x13CB28C VA: 0x13CF28C
	public Vector3 get_size() { }

	// RVA: 0x13CF32C Offset: 0x13CB32C VA: 0x13CF32C
	public void set_size(Vector3 value) { }

	// RVA: 0x13CF1B0 Offset: 0x13CB1B0 VA: 0x13CF1B0
	private void get_center_Injected(out Vector3 ret) { }

	// RVA: 0x13CF248 Offset: 0x13CB248 VA: 0x13CF248
	private void set_center_Injected(ref Vector3 value) { }

	// RVA: 0x13CF2E8 Offset: 0x13CB2E8 VA: 0x13CF2E8
	private void get_size_Injected(out Vector3 ret) { }

	// RVA: 0x13CF380 Offset: 0x13CB380 VA: 0x13CF380
	private void set_size_Injected(ref Vector3 value) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
public class SphereCollider : Collider // TypeDefIndex: 7606
{}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct ContactPoint // TypeDefIndex: 7607
{
	// Fields
	internal Vector3 m_Point; // 0x0
	internal Vector3 m_Normal; // 0xC
	internal Vector3 m_Impulse; // 0x18
	internal int m_ThisColliderInstanceID; // 0x24
	internal int m_OtherColliderInstanceID; // 0x28
	internal float m_Separation; // 0x2C

	// Properties
	public Vector3 point { get; }

	// Methods

	// RVA: 0x13CF3C4 Offset: 0x13CB3C4 VA: 0x13CF3C4
	public Vector3 get_point() { }
}


// Namespace: UnityEngine
public struct PhysicsScene : IEquatable<PhysicsScene> // TypeDefIndex: 7608
{
	// Fields
	private int m_Handle; // 0x0

	// Methods

	// RVA: 0x13CF3D0 Offset: 0x13CB3D0 VA: 0x13CF3D0 Slot: 3
	public override string ToString() { }

	// RVA: 0x13CF4B4 Offset: 0x13CB4B4 VA: 0x13CF4B4 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13CF4BC Offset: 0x13CB4BC VA: 0x13CF4BC Slot: 0
	public override bool Equals(object other) { }

	// RVA: 0x13CF534 Offset: 0x13CB534 VA: 0x13CF534 Slot: 4
	public bool Equals(PhysicsScene other) { }

	// RVA: 0x13CBA80 Offset: 0x13C7A80 VA: 0x13CBA80
	public bool Raycast(Vector3 origin, Vector3 direction, float maxDistance = ∞, int layerMask = -5, QueryTriggerInteraction queryTriggerInteraction = 0) { }

	// RVA: 0x13CF544 Offset: 0x13CB544 VA: 0x13CF544
	private static bool Internal_RaycastTest(PhysicsScene physicsScene, Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CBF6C Offset: 0x13C7F6C VA: 0x13CBF6C
	public bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance = ∞, int layerMask = -5, QueryTriggerInteraction queryTriggerInteraction = 0) { }

	// RVA: 0x13CF62C Offset: 0x13CB62C VA: 0x13CF62C
	private static bool Internal_Raycast(PhysicsScene physicsScene, Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CD128 Offset: 0x13C9128 VA: 0x13CD128
	public int Raycast(Vector3 origin, Vector3 direction, RaycastHit[] raycastHits, float maxDistance = ∞, int layerMask = -5, QueryTriggerInteraction queryTriggerInteraction = 0) { }

	// RVA: 0x13CF724 Offset: 0x13CB724 VA: 0x13CF724
	private static int Internal_RaycastNonAlloc(PhysicsScene physicsScene, Ray ray, RaycastHit[] raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CF5C0 Offset: 0x13CB5C0 VA: 0x13CF5C0
	private static bool Internal_RaycastTest_Injected(ref PhysicsScene physicsScene, ref Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CF6A8 Offset: 0x13CB6A8 VA: 0x13CF6A8
	private static bool Internal_Raycast_Injected(ref PhysicsScene physicsScene, ref Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction) { }

	// RVA: 0x13CF79C Offset: 0x13CB79C VA: 0x13CF79C
	private static int Internal_RaycastNonAlloc_Injected(ref PhysicsScene physicsScene, ref Ray ray, RaycastHit[] raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction) { }
}


// Namespace: UnityEngine
public struct ContactPairHeader // TypeDefIndex: 7609
{
	// Fields
	internal readonly int m_BodyID; // 0x0
	internal readonly int m_OtherBodyID; // 0x4
	internal readonly IntPtr m_StartPtr; // 0x8
	internal readonly uint m_NbPairs; // 0x10
	internal readonly CollisionPairHeaderFlags m_Flags; // 0x14
	internal readonly Vector3 m_RelativeVelocity; // 0x18

	// Properties
	public Component Body { get; }
	public Component OtherBody { get; }
	internal bool HasRemovedBody { get; }

	// Methods

	// RVA: 0x13CB1F8 Offset: 0x13C71F8 VA: 0x13CB1F8
	public Component get_Body() { }

	// RVA: 0x13CB180 Offset: 0x13C7180 VA: 0x13CB180
	public Component get_OtherBody() { }

	// RVA: 0x13CDFE8 Offset: 0x13C9FE8 VA: 0x13CDFE8
	internal bool get_HasRemovedBody() { }

	// RVA: 0x13CDFF8 Offset: 0x13C9FF8 VA: 0x13CDFF8
	public ref ContactPair GetContactPair(int index) { }

	// RVA: 0x13CF818 Offset: 0x13CB818 VA: 0x13CF818
	internal ContactPair* GetContactPair_Internal(int index) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct ContactPair // TypeDefIndex: 7610
{
	// Fields
	internal readonly int m_ColliderID; // 0x0
	internal readonly int m_OtherColliderID; // 0x4
	internal readonly IntPtr m_StartPtr; // 0x8
	internal readonly uint m_NbPoints; // 0x10
	internal readonly CollisionPairFlags m_Flags; // 0x14
	internal readonly CollisionPairEventFlags m_Events; // 0x16
	internal readonly Vector3 m_ImpulseSum; // 0x18

	// Properties
	public Collider Collider { get; }
	public Collider OtherCollider { get; }
	public bool IsCollisionEnter { get; }
	public bool IsCollisionExit { get; }
	public bool IsCollisionStay { get; }
	internal bool HasRemovedCollider { get; }

	// Methods

	// RVA: 0x13CB310 Offset: 0x13C7310 VA: 0x13CB310
	public Collider get_Collider() { }

	// RVA: 0x13CB284 Offset: 0x13C7284 VA: 0x13CB284
	public Collider get_OtherCollider() { }

	// RVA: 0x13CE00C Offset: 0x13CA00C VA: 0x13CE00C
	public bool get_IsCollisionEnter() { }

	// RVA: 0x13CE148 Offset: 0x13CA148 VA: 0x13CE148
	public bool get_IsCollisionExit() { }

	// RVA: 0x13CE13C Offset: 0x13CA13C VA: 0x13CE13C
	public bool get_IsCollisionStay() { }

	// RVA: 0x13CDFFC Offset: 0x13C9FFC VA: 0x13CDFFC
	internal bool get_HasRemovedCollider() { }

	// RVA: 0x13CB574 Offset: 0x13C7574 VA: 0x13CB574
	internal int ExtractContactsArray(ContactPoint[] managedContainer, bool flipped) { }

	// RVA: 0x13CF898 Offset: 0x13CB898 VA: 0x13CF898
	private static int ExtractContactsArray_Injected(ref ContactPair _unity_self, ContactPoint[] managedContainer, bool flipped) { }
}


// Namespace: UnityEngine
internal enum CollisionPairHeaderFlags // TypeDefIndex: 7611
{
	// Fields
	public ushort value__; // 0x0
	public const CollisionPairHeaderFlags RemovedActor = 1;
	public const CollisionPairHeaderFlags RemovedOtherActor = 2;
}


// Namespace: UnityEngine
internal enum CollisionPairFlags // TypeDefIndex: 7612
{
	// Fields
	public ushort value__; // 0x0
	public const CollisionPairFlags RemovedShape = 1;
	public const CollisionPairFlags RemovedOtherShape = 2;
	public const CollisionPairFlags ActorPairHasFirstTouch = 4;
	public const CollisionPairFlags ActorPairLostTouch = 8;
	public const CollisionPairFlags InternalHasImpulses = 16;
	public const CollisionPairFlags InternalContactsAreFlipped = 32;
}


// Namespace: UnityEngine
internal enum CollisionPairEventFlags // TypeDefIndex: 7613
{
	// Fields
	public ushort value__; // 0x0
	public const CollisionPairEventFlags SolveContacts = 1;
	public const CollisionPairEventFlags ModifyContacts = 2;
	public const CollisionPairEventFlags NotifyTouchFound = 4;
	public const CollisionPairEventFlags NotifyTouchPersists = 8;
	public const CollisionPairEventFlags NotifyTouchLost = 16;
	public const CollisionPairEventFlags NotifyTouchCCD = 32;
	public const CollisionPairEventFlags NotifyThresholdForceFound = 64;
	public const CollisionPairEventFlags NotifyThresholdForcePersists = 128;
	public const CollisionPairEventFlags NotifyThresholdForceLost = 256;
	public const CollisionPairEventFlags NotifyContactPoint = 512;
	public const CollisionPairEventFlags DetectDiscreteContact = 1024;
	public const CollisionPairEventFlags DetectCCDContact = 2048;
	public const CollisionPairEventFlags PreSolverVelocity = 4096;
	public const CollisionPairEventFlags PostSolverVelocity = 8192;
	public const CollisionPairEventFlags ContactEventPose = 16384;
	public const CollisionPairEventFlags NextFree = 32768;
	public const CollisionPairEventFlags ContactDefault = 1025;
	public const CollisionPairEventFlags TriggerDefault = 1044;
}
