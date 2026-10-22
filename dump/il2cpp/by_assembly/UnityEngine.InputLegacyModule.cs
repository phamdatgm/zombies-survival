// Namespace: 
internal class <Module> // TypeDefIndex: 7687
{}


// Namespace: UnityEngine
public enum TouchPhase // TypeDefIndex: 7688
{
	// Fields
	public int value__; // 0x0
	public const TouchPhase Began = 0;
	public const TouchPhase Moved = 1;
	public const TouchPhase Stationary = 2;
	public const TouchPhase Ended = 3;
	public const TouchPhase Canceled = 4;
}


// Namespace: UnityEngine
public enum IMECompositionMode // TypeDefIndex: 7689
{
	// Fields
	public int value__; // 0x0
	public const IMECompositionMode Auto = 0;
	public const IMECompositionMode On = 1;
	public const IMECompositionMode Off = 2;
}


// Namespace: UnityEngine
public enum TouchType // TypeDefIndex: 7690
{
	// Fields
	public int value__; // 0x0
	public const TouchType Direct = 0;
	public const TouchType Indirect = 1;
	public const TouchType Stylus = 2;
}


// Namespace: UnityEngine
public struct Touch // TypeDefIndex: 7691
{
	// Fields
	private int m_FingerId; // 0x0
	private Vector2 m_Position; // 0x4
	private Vector2 m_RawPosition; // 0xC
	private Vector2 m_PositionDelta; // 0x14
	private float m_TimeDelta; // 0x1C
	private int m_TapCount; // 0x20
	private TouchPhase m_Phase; // 0x24
	private TouchType m_Type; // 0x28
	private float m_Pressure; // 0x2C
	private float m_maximumPossiblePressure; // 0x30
	private float m_Radius; // 0x34
	private float m_RadiusVariance; // 0x38
	private float m_AltitudeAngle; // 0x3C
	private float m_AzimuthAngle; // 0x40

	// Properties
	public int fingerId { get; }
	public Vector2 position { get; set; }
	public Vector2 rawPosition { get; set; }
	public Vector2 deltaPosition { get; set; }
	public float deltaTime { get; }
	public int tapCount { get; }
	public TouchPhase phase { get; }
	public float pressure { get; }
	public float maximumPossiblePressure { get; }
	public TouchType type { get; }
	public float altitudeAngle { get; }
	public float azimuthAngle { get; }
	public float radius { get; }
	public float radiusVariance { get; }

	// Methods

	// RVA: 0x13C7EEC Offset: 0x13C3EEC VA: 0x13C7EEC
	public int get_fingerId() { }

	// RVA: 0x13C7EF4 Offset: 0x13C3EF4 VA: 0x13C7EF4
	public Vector2 get_position() { }

	// RVA: 0x13C7EFC Offset: 0x13C3EFC VA: 0x13C7EFC
	public void set_position(Vector2 value) { }

	// RVA: 0x13C7F04 Offset: 0x13C3F04 VA: 0x13C7F04
	public Vector2 get_rawPosition() { }

	// RVA: 0x13C7F0C Offset: 0x13C3F0C VA: 0x13C7F0C
	public void set_rawPosition(Vector2 value) { }

	// RVA: 0x13C7F14 Offset: 0x13C3F14 VA: 0x13C7F14
	public Vector2 get_deltaPosition() { }

	// RVA: 0x13C7F1C Offset: 0x13C3F1C VA: 0x13C7F1C
	public void set_deltaPosition(Vector2 value) { }

	// RVA: 0x13C7F24 Offset: 0x13C3F24 VA: 0x13C7F24
	public float get_deltaTime() { }

	// RVA: 0x13C7F2C Offset: 0x13C3F2C VA: 0x13C7F2C
	public int get_tapCount() { }

	// RVA: 0x13C7F34 Offset: 0x13C3F34 VA: 0x13C7F34
	public TouchPhase get_phase() { }

	// RVA: 0x13C7F3C Offset: 0x13C3F3C VA: 0x13C7F3C
	public float get_pressure() { }

	// RVA: 0x13C7F44 Offset: 0x13C3F44 VA: 0x13C7F44
	public float get_maximumPossiblePressure() { }

	// RVA: 0x13C7F4C Offset: 0x13C3F4C VA: 0x13C7F4C
	public TouchType get_type() { }

	// RVA: 0x13C7F54 Offset: 0x13C3F54 VA: 0x13C7F54
	public float get_altitudeAngle() { }

	// RVA: 0x13C7F5C Offset: 0x13C3F5C VA: 0x13C7F5C
	public float get_azimuthAngle() { }

	// RVA: 0x13C7F64 Offset: 0x13C3F64 VA: 0x13C7F64
	public float get_radius() { }

	// RVA: 0x13C7F6C Offset: 0x13C3F6C VA: 0x13C7F6C
	public float get_radiusVariance() { }
}


// Namespace: UnityEngine
[Flags]
public enum PenStatus // TypeDefIndex: 7692
{
	// Fields
	public int value__; // 0x0
	public const PenStatus None = 0;
	public const PenStatus Contact = 1;
	public const PenStatus Barrel = 2;
	public const PenStatus Inverted = 4;
	public const PenStatus Eraser = 8;
}


// Namespace: UnityEngine
public enum PenEventType // TypeDefIndex: 7693
{
	// Fields
	public int value__; // 0x0
	public const PenEventType NoContact = 0;
	public const PenEventType PenDown = 1;
	public const PenEventType PenUp = 2;
}


// Namespace: UnityEngine
public struct PenData // TypeDefIndex: 7694
{
	// Fields
	public Vector2 position; // 0x0
	public Vector2 tilt; // 0x8
	public PenStatus penStatus; // 0x10
	public float twist; // 0x14
	public float pressure; // 0x18
	public PenEventType contactType; // 0x1C
	public Vector2 deltaPos; // 0x20
}


// Namespace: UnityEngine
internal class CameraRaycastHelper // TypeDefIndex: 7695
{
	// Methods

	// RVA: 0x13C7F74 Offset: 0x13C3F74 VA: 0x13C7F74
	internal static GameObject RaycastTry(Camera cam, Ray ray, float distance, int layerMask) { }

	// RVA: 0x13C803C Offset: 0x13C403C VA: 0x13C803C
	internal static GameObject RaycastTry2D(Camera cam, Ray ray, float distance, int layerMask) { }

	// RVA: 0x13C7FD8 Offset: 0x13C3FD8 VA: 0x13C7FD8
	private static GameObject RaycastTry_Injected(Camera cam, ref Ray ray, float distance, int layerMask) { }

	// RVA: 0x13C80A0 Offset: 0x13C40A0 VA: 0x13C80A0
	private static GameObject RaycastTry2D_Injected(Camera cam, ref Ray ray, float distance, int layerMask) { }
}


// Namespace: UnityEngine
public class Input // TypeDefIndex: 7696
{
	// Properties
	public static bool anyKey { get; }
	public static Vector3 mousePosition { get; }
	public static Vector2 mouseScrollDelta { get; }
	public static IMECompositionMode imeCompositionMode { get; set; }
	public static string compositionString { get; }
	public static Vector2 compositionCursorPos { get; set; }
	public static bool mousePresent { get; }
	public static int touchCount { get; }
	public static bool touchSupported { get; }
	public static Vector3 acceleration { get; }
	public static int accelerationEventCount { get; }

	// Methods

	// RVA: 0x13C8104 Offset: 0x13C4104 VA: 0x13C8104
	public static float GetAxis(string axisName) { }

	// RVA: 0x13C817C Offset: 0x13C417C VA: 0x13C817C
	public static float GetAxisRaw(string axisName) { }

	// RVA: 0x13C81F4 Offset: 0x13C41F4 VA: 0x13C81F4
	public static bool GetButton(string buttonName) { }

	// RVA: 0x13C826C Offset: 0x13C426C VA: 0x13C826C
	public static bool GetButtonDown(string buttonName) { }

	// RVA: 0x13C82E4 Offset: 0x13C42E4 VA: 0x13C82E4
	private static bool GetKeyInt(KeyCode key) { }

	// RVA: 0x13C8320 Offset: 0x13C4320 VA: 0x13C8320
	private static bool GetKeyDownInt(KeyCode key) { }

	// RVA: 0x13C835C Offset: 0x13C435C VA: 0x13C835C
	public static bool GetMouseButton(int button) { }

	// RVA: 0x13C8398 Offset: 0x13C4398 VA: 0x13C8398
	public static bool GetMouseButtonDown(int button) { }

	// RVA: 0x13C83D4 Offset: 0x13C43D4 VA: 0x13C83D4
	public static bool GetMouseButtonUp(int button) { }

	// RVA: 0x13C8410 Offset: 0x13C4410 VA: 0x13C8410
	public static Touch GetTouch(int index) { }

	// RVA: 0x13C84C4 Offset: 0x13C44C4 VA: 0x13C84C4
	public static PenData GetLastPenContactEvent() { }

	// RVA: 0x13C8564 Offset: 0x13C4564 VA: 0x13C8564
	public static void ClearLastPenContactEvent() { }

	// RVA: 0x13C858C Offset: 0x13C458C VA: 0x13C858C
	public static bool GetKey(KeyCode key) { }

	// RVA: 0x13C85C8 Offset: 0x13C45C8 VA: 0x13C85C8
	public static bool GetKeyDown(KeyCode key) { }

	// RVA: 0x13C8604 Offset: 0x13C4604 VA: 0x13C8604
	public static bool get_anyKey() { }

	// RVA: 0x13C862C Offset: 0x13C462C VA: 0x13C862C
	public static Vector3 get_mousePosition() { }

	// RVA: 0x13C86B4 Offset: 0x13C46B4 VA: 0x13C86B4
	public static Vector2 get_mouseScrollDelta() { }

	// RVA: 0x13C8734 Offset: 0x13C4734 VA: 0x13C8734
	public static IMECompositionMode get_imeCompositionMode() { }

	// RVA: 0x13C875C Offset: 0x13C475C VA: 0x13C875C
	public static void set_imeCompositionMode(IMECompositionMode value) { }

	// RVA: 0x13C8798 Offset: 0x13C4798 VA: 0x13C8798
	public static string get_compositionString() { }

	// RVA: 0x13C87C0 Offset: 0x13C47C0 VA: 0x13C87C0
	public static Vector2 get_compositionCursorPos() { }

	// RVA: 0x13C8840 Offset: 0x13C4840 VA: 0x13C8840
	public static void set_compositionCursorPos(Vector2 value) { }

	// RVA: 0x13C88BC Offset: 0x13C48BC VA: 0x13C88BC
	public static bool get_mousePresent() { }

	// RVA: 0x13C88E4 Offset: 0x13C48E4 VA: 0x13C88E4
	public static int get_touchCount() { }

	// RVA: 0x13C890C Offset: 0x13C490C VA: 0x13C890C
	public static bool get_touchSupported() { }

	// RVA: 0x13C8934 Offset: 0x13C4934 VA: 0x13C8934
	public static Vector3 get_acceleration() { }

	// RVA: 0x13C89BC Offset: 0x13C49BC VA: 0x13C89BC
	public static int get_accelerationEventCount() { }

	// RVA: 0x13C89E4 Offset: 0x13C49E4 VA: 0x13C89E4
	internal static bool CheckDisabled() { }

	// RVA: 0x13C8480 Offset: 0x13C4480 VA: 0x13C8480
	private static void GetTouch_Injected(int index, out Touch ret) { }

	// RVA: 0x13C8528 Offset: 0x13C4528 VA: 0x13C8528
	private static void GetLastPenContactEvent_Injected(out PenData ret) { }

	// RVA: 0x13C8678 Offset: 0x13C4678 VA: 0x13C8678
	private static void get_mousePosition_Injected(out Vector3 ret) { }

	// RVA: 0x13C86F8 Offset: 0x13C46F8 VA: 0x13C86F8
	private static void get_mouseScrollDelta_Injected(out Vector2 ret) { }

	// RVA: 0x13C8804 Offset: 0x13C4804 VA: 0x13C8804
	private static void get_compositionCursorPos_Injected(out Vector2 ret) { }

	// RVA: 0x13C8880 Offset: 0x13C4880 VA: 0x13C8880
	private static void set_compositionCursorPos_Injected(ref Vector2 value) { }

	// RVA: 0x13C8980 Offset: 0x13C4980 VA: 0x13C8980
	private static void get_acceleration_Injected(out Vector3 ret) { }
}


// Namespace: 
private struct SendMouseEvents.HitInfo // TypeDefIndex: 7697
{
	// Fields
	public GameObject target; // 0x0
	public Camera camera; // 0x8

	// Methods

	// RVA: 0x13C9AD0 Offset: 0x13C5AD0 VA: 0x13C9AD0
	public void SendMessage(string name) { }

	// RVA: 0x13C9A30 Offset: 0x13C5A30 VA: 0x13C9A30
	public static bool op_Implicit(SendMouseEvents.HitInfo exists) { }

	// RVA: 0x13C9AF4 Offset: 0x13C5AF4 VA: 0x13C9AF4
	public static bool Compare(SendMouseEvents.HitInfo lhs, SendMouseEvents.HitInfo rhs) { }
}


// Namespace: UnityEngine
internal class SendMouseEvents // TypeDefIndex: 7698
{
	// Fields
	private static bool s_MouseUsed; // 0x0
	private static readonly SendMouseEvents.HitInfo[] m_LastHit; // 0x8
	private static readonly SendMouseEvents.HitInfo[] m_MouseDownHit; // 0x10
	private static readonly SendMouseEvents.HitInfo[] m_CurrentHit; // 0x18
	private static Camera[] m_Cameras; // 0x20
	public static Func<KeyValuePair<int, Vector2>> s_GetMouseState; // 0x28
	private static Vector2 s_MousePosition; // 0x30
	private static bool s_MouseButtonPressedThisFrame; // 0x38
	private static bool s_MouseButtonIsPressed; // 0x39

	// Methods

	// RVA: 0x13C8A0C Offset: 0x13C4A0C VA: 0x13C8A0C
	private static void UpdateMouse() { }

	[RequiredByNativeCode]
	// RVA: 0x13C8C44 Offset: 0x13C4C44 VA: 0x13C8C44
	private static void SetMouseMoved() { }

	[RequiredByNativeCode]
	// RVA: 0x13C8CA0 Offset: 0x13C4CA0 VA: 0x13C8CA0
	private static void DoSendMouseEvents(int skipRTCameras) { }

	// RVA: 0x13C9608 Offset: 0x13C5608 VA: 0x13C9608
	private static void SendEvents(int i, SendMouseEvents.HitInfo hit) { }

	// RVA: 0x13C9BA8 Offset: 0x13C5BA8 VA: 0x13C9BA8
	private static void .cctor() { }
}


// Namespace: UnityEngine.Internal
internal static class InputUnsafeUtility // TypeDefIndex: 7699
{
	// Methods

	// RVA: 0x13C9C4C Offset: 0x13C5C4C VA: 0x13C9C4C
	internal static bool GetKeyString__Unmanaged(byte* name, int nameLen) { }

	// RVA: 0x13C9C90 Offset: 0x13C5C90 VA: 0x13C9C90
	internal static bool GetKeyUpString__Unmanaged(byte* name, int nameLen) { }

	// RVA: 0x13C9CD4 Offset: 0x13C5CD4 VA: 0x13C9CD4
	internal static bool GetKeyDownString__Unmanaged(byte* name, int nameLen) { }

	// RVA: 0x13C8140 Offset: 0x13C4140 VA: 0x13C8140
	internal static float GetAxis(string axisName) { }

	// RVA: 0x13C9D18 Offset: 0x13C5D18 VA: 0x13C9D18
	internal static float GetAxis__Unmanaged(byte* axisName, int axisNameLen) { }

	// RVA: 0x13C81B8 Offset: 0x13C41B8 VA: 0x13C81B8
	internal static float GetAxisRaw(string axisName) { }

	// RVA: 0x13C9D5C Offset: 0x13C5D5C VA: 0x13C9D5C
	internal static float GetAxisRaw__Unmanaged(byte* axisName, int axisNameLen) { }

	// RVA: 0x13C8230 Offset: 0x13C4230 VA: 0x13C8230
	internal static bool GetButton(string buttonName) { }

	// RVA: 0x13C9DA0 Offset: 0x13C5DA0 VA: 0x13C9DA0
	internal static bool GetButton__Unmanaged(byte* buttonName, int buttonNameLen) { }

	// RVA: 0x13C82A8 Offset: 0x13C42A8 VA: 0x13C82A8
	internal static bool GetButtonDown(string buttonName) { }

	// RVA: 0x13C9DE4 Offset: 0x13C5DE4 VA: 0x13C9DE4
	internal static byte GetButtonDown__Unmanaged(byte* buttonName, int buttonNameLen) { }

	// RVA: 0x13C9E28 Offset: 0x13C5E28 VA: 0x13C9E28
	internal static bool GetButtonUp__Unmanaged(byte* buttonName, int buttonNameLen) { }
}
