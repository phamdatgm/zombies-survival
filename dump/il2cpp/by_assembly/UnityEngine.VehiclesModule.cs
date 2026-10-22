// Namespace: 
internal class <Module> // TypeDefIndex: 7796
{}


// Namespace: UnityEngine
public struct WheelHit // TypeDefIndex: 7797
{
	// Fields
	private Vector3 m_Point; // 0x0
	private Vector3 m_Normal; // 0xC
	private Vector3 m_ForwardDir; // 0x18
	private Vector3 m_SidewaysDir; // 0x24
	private float m_Force; // 0x30
	private float m_ForwardSlip; // 0x34
	private float m_SidewaysSlip; // 0x38
	private Collider m_Collider; // 0x40

	// Properties
	public Vector3 point { get; }
	public float forwardSlip { get; }

	// Methods

	// RVA: 0x15DE308 Offset: 0x15DA308 VA: 0x15DE308
	public Vector3 get_point() { }

	// RVA: 0x15DE314 Offset: 0x15DA314 VA: 0x15DE314
	public float get_forwardSlip() { }
}


// Namespace: UnityEngine
public class WheelCollider : Collider // TypeDefIndex: 7798
{
	// Properties
	public float radius { get; set; }
	public float suspensionDistance { set; }
	public JointSpring suspensionSpring { get; set; }
	public float mass { set; }
	public float wheelDampingRate { set; }
	public WheelFrictionCurve forwardFriction { get; set; }
	public float motorTorque { set; }
	public float brakeTorque { set; }
	public float rpm { get; }

	// Methods

	// RVA: 0x15DE31C Offset: 0x15DA31C VA: 0x15DE31C
	public float get_radius() { }

	// RVA: 0x15DE358 Offset: 0x15DA358 VA: 0x15DE358
	public void set_radius(float value) { }

	// RVA: 0x15DE3A4 Offset: 0x15DA3A4 VA: 0x15DE3A4
	public void set_suspensionDistance(float value) { }

	// RVA: 0x15DE3F0 Offset: 0x15DA3F0 VA: 0x15DE3F0
	public JointSpring get_suspensionSpring() { }

	// RVA: 0x15DE490 Offset: 0x15DA490 VA: 0x15DE490
	public void set_suspensionSpring(JointSpring value) { }

	// RVA: 0x15DE528 Offset: 0x15DA528 VA: 0x15DE528
	public void set_mass(float value) { }

	// RVA: 0x15DE574 Offset: 0x15DA574 VA: 0x15DE574
	public void set_wheelDampingRate(float value) { }

	// RVA: 0x15DE5C0 Offset: 0x15DA5C0 VA: 0x15DE5C0
	public WheelFrictionCurve get_forwardFriction() { }

	// RVA: 0x15DE66C Offset: 0x15DA66C VA: 0x15DE66C
	public void set_forwardFriction(WheelFrictionCurve value) { }

	// RVA: 0x15DE6F4 Offset: 0x15DA6F4 VA: 0x15DE6F4
	public void set_motorTorque(float value) { }

	// RVA: 0x15DE740 Offset: 0x15DA740 VA: 0x15DE740
	public void set_brakeTorque(float value) { }

	// RVA: 0x15DE78C Offset: 0x15DA78C VA: 0x15DE78C
	public float get_rpm() { }

	// RVA: 0x15DE7C8 Offset: 0x15DA7C8 VA: 0x15DE7C8
	public void GetWorldPose(out Vector3 pos, out Quaternion quat) { }

	// RVA: 0x15DE81C Offset: 0x15DA81C VA: 0x15DE81C
	public bool GetGroundHit(out WheelHit hit) { }

	// RVA: 0x15DE860 Offset: 0x15DA860 VA: 0x15DE860
	public void .ctor() { }

	// RVA: 0x15DE44C Offset: 0x15DA44C VA: 0x15DE44C
	private void get_suspensionSpring_Injected(out JointSpring ret) { }

	// RVA: 0x15DE4E4 Offset: 0x15DA4E4 VA: 0x15DE4E4
	private void set_suspensionSpring_Injected(ref JointSpring value) { }

	// RVA: 0x15DE628 Offset: 0x15DA628 VA: 0x15DE628
	private void get_forwardFriction_Injected(out WheelFrictionCurve ret) { }

	// RVA: 0x15DE6B0 Offset: 0x15DA6B0 VA: 0x15DE6B0
	private void set_forwardFriction_Injected(ref WheelFrictionCurve value) { }
}
