// Namespace: 
internal class <Module> // TypeDefIndex: 6858
{}


// Namespace: UnityEngine
public sealed class Event // TypeDefIndex: 6859
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private static Event s_Current; // 0x0
	private static Event s_MasterEvent; // 0x8

	// Properties
	public EventType rawType { get; }
	public Vector2 mousePosition { get; set; }
	public Vector2 delta { get; set; }
	public PointerType pointerType { get; }
	public int button { get; }
	public EventModifiers modifiers { get; set; }
	public float pressure { get; }
	public float twist { get; }
	public Vector2 tilt { get; }
	public PenStatus penStatus { get; }
	public int clickCount { get; }
	public char character { get; set; }
	public KeyCode keyCode { get; set; }
	public int displayIndex { get; set; }
	public EventType type { get; set; }
	public string commandName { get; set; }
	public bool shift { get; }
	public bool control { get; }
	public bool alt { get; }
	public bool command { get; }
	public static Event current { get; set; }
	public bool isKey { get; }
	public bool isMouse { get; }
	internal bool isDirectManipulationDevice { get; }

	// Methods

	// RVA: 0x13A6A88 Offset: 0x13A2A88 VA: 0x13A6A88
	public EventType get_rawType() { }

	// RVA: 0x13A6AC4 Offset: 0x13A2AC4 VA: 0x13A6AC4
	public Vector2 get_mousePosition() { }

	// RVA: 0x13A6B54 Offset: 0x13A2B54 VA: 0x13A6B54
	public void set_mousePosition(Vector2 value) { }

	// RVA: 0x13A6BE0 Offset: 0x13A2BE0 VA: 0x13A6BE0
	public Vector2 get_delta() { }

	// RVA: 0x13A6C70 Offset: 0x13A2C70 VA: 0x13A6C70
	public void set_delta(Vector2 value) { }

	// RVA: 0x13A6CFC Offset: 0x13A2CFC VA: 0x13A6CFC
	public PointerType get_pointerType() { }

	// RVA: 0x13A6D38 Offset: 0x13A2D38 VA: 0x13A6D38
	public int get_button() { }

	// RVA: 0x13A6D74 Offset: 0x13A2D74 VA: 0x13A6D74
	public EventModifiers get_modifiers() { }

	// RVA: 0x13A6DB0 Offset: 0x13A2DB0 VA: 0x13A6DB0
	public void set_modifiers(EventModifiers value) { }

	// RVA: 0x13A6DF4 Offset: 0x13A2DF4 VA: 0x13A6DF4
	public float get_pressure() { }

	// RVA: 0x13A6E30 Offset: 0x13A2E30 VA: 0x13A6E30
	public float get_twist() { }

	// RVA: 0x13A6E6C Offset: 0x13A2E6C VA: 0x13A6E6C
	public Vector2 get_tilt() { }

	// RVA: 0x13A6EFC Offset: 0x13A2EFC VA: 0x13A6EFC
	public PenStatus get_penStatus() { }

	// RVA: 0x13A6F38 Offset: 0x13A2F38 VA: 0x13A6F38
	public int get_clickCount() { }

	// RVA: 0x13A6F74 Offset: 0x13A2F74 VA: 0x13A6F74
	public char get_character() { }

	// RVA: 0x13A6FB0 Offset: 0x13A2FB0 VA: 0x13A6FB0
	public void set_character(char value) { }

	// RVA: 0x13A6FF4 Offset: 0x13A2FF4 VA: 0x13A6FF4
	public KeyCode get_keyCode() { }

	// RVA: 0x13A7030 Offset: 0x13A3030 VA: 0x13A7030
	public void set_keyCode(KeyCode value) { }

	// RVA: 0x13A7074 Offset: 0x13A3074 VA: 0x13A7074
	public int get_displayIndex() { }

	// RVA: 0x13A70B0 Offset: 0x13A30B0 VA: 0x13A70B0
	public void set_displayIndex(int value) { }

	// RVA: 0x13A70F4 Offset: 0x13A30F4 VA: 0x13A70F4
	public EventType get_type() { }

	// RVA: 0x13A7130 Offset: 0x13A3130 VA: 0x13A7130
	public void set_type(EventType value) { }

	// RVA: 0x13A7174 Offset: 0x13A3174 VA: 0x13A7174
	public string get_commandName() { }

	// RVA: 0x13A71B0 Offset: 0x13A31B0 VA: 0x13A71B0
	public void set_commandName(string value) { }

	// RVA: 0x13A71F4 Offset: 0x13A31F4 VA: 0x13A71F4
	private void Internal_Use() { }

	// RVA: 0x13A7230 Offset: 0x13A3230 VA: 0x13A7230
	private static IntPtr Internal_Create(int displayIndex) { }

	// RVA: 0x13A726C Offset: 0x13A326C VA: 0x13A726C
	private static void Internal_Destroy(IntPtr ptr) { }

	// RVA: 0x13A72A8 Offset: 0x13A32A8 VA: 0x13A72A8
	public EventType GetTypeForControl(int controlID) { }

	// RVA: 0x13A72EC Offset: 0x13A32EC VA: 0x13A72EC
	internal void CopyFromPtr(IntPtr ptr) { }

	// RVA: 0x13A7330 Offset: 0x13A3330 VA: 0x13A7330
	public static bool PopEvent(Event outEvent) { }

	// RVA: 0x13A736C Offset: 0x13A336C VA: 0x13A736C
	private static void Internal_SetNativeEvent(IntPtr ptr) { }

	[RequiredByNativeCode]
	// RVA: 0x13A73A8 Offset: 0x13A33A8 VA: 0x13A73A8
	internal static void Internal_MakeMasterEventCurrent(int displayIndex) { }

	// RVA: 0x13A74EC Offset: 0x13A34EC VA: 0x13A74EC
	internal static int GetDoubleClickTime() { }

	// RVA: 0x13A7514 Offset: 0x13A3514 VA: 0x13A7514
	public void .ctor() { }

	// RVA: 0x13A749C Offset: 0x13A349C VA: 0x13A749C
	public void .ctor(int displayIndex) { }

	// RVA: 0x13A7560 Offset: 0x13A3560 VA: 0x13A7560 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x13A7638 Offset: 0x13A3638 VA: 0x13A7638
	internal void CopyFrom(Event e) { }

	// RVA: 0x13A76A8 Offset: 0x13A36A8 VA: 0x13A76A8
	public bool get_shift() { }

	// RVA: 0x13A76EC Offset: 0x13A36EC VA: 0x13A76EC
	public bool get_control() { }

	// RVA: 0x13A7730 Offset: 0x13A3730 VA: 0x13A7730
	public bool get_alt() { }

	// RVA: 0x13A7774 Offset: 0x13A3774 VA: 0x13A7774
	public bool get_command() { }

	// RVA: 0x13A77B8 Offset: 0x13A37B8 VA: 0x13A77B8
	public static Event get_current() { }

	// RVA: 0x13A7800 Offset: 0x13A3800 VA: 0x13A7800
	public static void set_current(Event value) { }

	// RVA: 0x13A7894 Offset: 0x13A3894 VA: 0x13A7894
	public bool get_isKey() { }

	// RVA: 0x13A78E0 Offset: 0x13A38E0 VA: 0x13A78E0
	public bool get_isMouse() { }

	// RVA: 0x13A7944 Offset: 0x13A3944 VA: 0x13A7944
	internal bool get_isDirectManipulationDevice() { }

	// RVA: 0x13A79C0 Offset: 0x13A39C0 VA: 0x13A79C0
	public static Event KeyboardEvent(string key) { }

	// RVA: 0x13A9994 Offset: 0x13A5994 VA: 0x13A9994 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x13A9A94 Offset: 0x13A5A94 VA: 0x13A9A94 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x13A9D00 Offset: 0x13A5D00 VA: 0x13A9D00 Slot: 3
	public override string ToString() { }

	// RVA: 0x13AA4B4 Offset: 0x13A64B4 VA: 0x13AA4B4
	public void Use() { }

	// RVA: 0x13A6B10 Offset: 0x13A2B10 VA: 0x13A6B10
	private void get_mousePosition_Injected(out Vector2 ret) { }

	// RVA: 0x13A6B9C Offset: 0x13A2B9C VA: 0x13A6B9C
	private void set_mousePosition_Injected(ref Vector2 value) { }

	// RVA: 0x13A6C2C Offset: 0x13A2C2C VA: 0x13A6C2C
	private void get_delta_Injected(out Vector2 ret) { }

	// RVA: 0x13A6CB8 Offset: 0x13A2CB8 VA: 0x13A6CB8
	private void set_delta_Injected(ref Vector2 value) { }

	// RVA: 0x13A6EB8 Offset: 0x13A2EB8 VA: 0x13A6EB8
	private void get_tilt_Injected(out Vector2 ret) { }
}


// Namespace: UnityEngine
public enum EventType // TypeDefIndex: 6860
{
	// Fields
	public int value__; // 0x0
	public const EventType MouseDown = 0;
	public const EventType MouseUp = 1;
	public const EventType MouseMove = 2;
	public const EventType MouseDrag = 3;
	public const EventType KeyDown = 4;
	public const EventType KeyUp = 5;
	public const EventType ScrollWheel = 6;
	public const EventType Repaint = 7;
	public const EventType Layout = 8;
	public const EventType DragUpdated = 9;
	public const EventType DragPerform = 10;
	public const EventType DragExited = 15;
	public const EventType Ignore = 11;
	public const EventType Used = 12;
	public const EventType ValidateCommand = 13;
	public const EventType ExecuteCommand = 14;
	public const EventType ContextClick = 16;
	public const EventType MouseEnterWindow = 20;
	public const EventType MouseLeaveWindow = 21;
	public const EventType TouchDown = 30;
	public const EventType TouchUp = 31;
	public const EventType TouchMove = 32;
	public const EventType TouchEnter = 33;
	public const EventType TouchLeave = 34;
	public const EventType TouchStationary = 35;
	[Obsolete("Use MouseDown instead (UnityUpgradable) -> MouseDown", True)]
	public const EventType mouseDown = 0;
	[Obsolete("Use MouseUp instead (UnityUpgradable) -> MouseUp", True)]
	public const EventType mouseUp = 1;
	[Obsolete("Use MouseMove instead (UnityUpgradable) -> MouseMove", True)]
	public const EventType mouseMove = 2;
	[Obsolete("Use MouseDrag instead (UnityUpgradable) -> MouseDrag", True)]
	public const EventType mouseDrag = 3;
	[Obsolete("Use KeyDown instead (UnityUpgradable) -> KeyDown", True)]
	public const EventType keyDown = 4;
	[Obsolete("Use KeyUp instead (UnityUpgradable) -> KeyUp", True)]
	public const EventType keyUp = 5;
	[Obsolete("Use ScrollWheel instead (UnityUpgradable) -> ScrollWheel", True)]
	public const EventType scrollWheel = 6;
	[Obsolete("Use Repaint instead (UnityUpgradable) -> Repaint", True)]
	public const EventType repaint = 7;
	[Obsolete("Use Layout instead (UnityUpgradable) -> Layout", True)]
	public const EventType layout = 8;
	[Obsolete("Use DragUpdated instead (UnityUpgradable) -> DragUpdated", True)]
	public const EventType dragUpdated = 9;
	[Obsolete("Use DragPerform instead (UnityUpgradable) -> DragPerform", True)]
	public const EventType dragPerform = 10;
	[Obsolete("Use Ignore instead (UnityUpgradable) -> Ignore", True)]
	public const EventType ignore = 11;
	[Obsolete("Use Used instead (UnityUpgradable) -> Used", True)]
	public const EventType used = 12;
}


// Namespace: UnityEngine
[Flags]
public enum EventModifiers // TypeDefIndex: 6861
{
	// Fields
	public int value__; // 0x0
	public const EventModifiers None = 0;
	public const EventModifiers Shift = 1;
	public const EventModifiers Control = 2;
	public const EventModifiers Alt = 4;
	public const EventModifiers Command = 8;
	public const EventModifiers Numeric = 16;
	public const EventModifiers CapsLock = 32;
	public const EventModifiers FunctionKey = 64;
}


// Namespace: UnityEngine
public enum PointerType // TypeDefIndex: 6862
{
	// Fields
	public int value__; // 0x0
	public const PointerType Mouse = 0;
	public const PointerType Touch = 1;
	public const PointerType Pen = 2;
}


// Namespace: UnityEngine
internal struct EventInterests // TypeDefIndex: 6863
{
	// Fields
	[CompilerGenerated]
	private bool <wantsMouseMove>k__BackingField; // 0x0
	[CompilerGenerated]
	private bool <wantsMouseEnterLeaveWindow>k__BackingField; // 0x1
	[CompilerGenerated]
	private bool <wantsLessLayoutEvents>k__BackingField; // 0x2

	// Properties
	public bool wantsMouseMove { get; set; }
	public bool wantsMouseEnterLeaveWindow { get; set; }
	public bool wantsLessLayoutEvents { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13AA678 Offset: 0x13A6678 VA: 0x13AA678
	public bool get_wantsMouseMove() { }

	[CompilerGenerated]
	// RVA: 0x13AA680 Offset: 0x13A6680 VA: 0x13AA680
	public void set_wantsMouseMove(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13AA68C Offset: 0x13A668C VA: 0x13AA68C
	public bool get_wantsMouseEnterLeaveWindow() { }

	[CompilerGenerated]
	// RVA: 0x13AA694 Offset: 0x13A6694 VA: 0x13AA694
	public void set_wantsMouseEnterLeaveWindow(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13AA6A0 Offset: 0x13A66A0 VA: 0x13AA6A0
	public bool get_wantsLessLayoutEvents() { }

	// RVA: 0x13AA6A8 Offset: 0x13A66A8 VA: 0x13AA6A8
	public bool WantsEvent(EventType type) { }

	// RVA: 0x13AA6D8 Offset: 0x13A66D8 VA: 0x13AA6D8
	public bool WantsLayoutPass(EventType type) { }
}


// Namespace: 
public sealed class GUI.WindowFunction : MulticastDelegate // TypeDefIndex: 6864
{
	// Methods

	// RVA: 0x13B234C Offset: 0x13AE34C VA: 0x13B234C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13B23D8 Offset: 0x13AE3D8 VA: 0x13B23D8 Slot: 12
	public virtual void Invoke(int id) { }
}


// Namespace: UnityEngine
public class GUI // TypeDefIndex: 6865
{
	// Fields
	private static int s_ScrollControlId; // 0x0
	private static int s_HotTextField; // 0x4
	private static readonly int s_BoxHash; // 0x8
	private static readonly int s_ButonHash; // 0xC
	private static readonly int s_RepeatButtonHash; // 0x10
	private static readonly int s_ToggleHash; // 0x14
	private static readonly int s_ButtonGridHash; // 0x18
	private static readonly int s_SliderHash; // 0x1C
	private static readonly int s_BeginGroupHash; // 0x20
	private static readonly int s_ScrollviewHash; // 0x24
	[CompilerGenerated]
	private static int <scrollTroughSide>k__BackingField; // 0x28
	[CompilerGenerated]
	private static DateTime <nextScrollStepTime>k__BackingField; // 0x30
	private static GUISkin s_Skin; // 0x38
	internal static Rect s_ToolTipRect; // 0x40
	[CompilerGenerated]
	private static GenericStack <scrollViewStates>k__BackingField; // 0x50

	// Properties
	public static Color color { get; set; }
	public static Color backgroundColor { get; set; }
	public static Color contentColor { get; set; }
	public static bool changed { get; set; }
	public static bool enabled { get; set; }
	internal static bool usePageScrollbars { get; }
	internal static int scrollTroughSide { get; set; }
	internal static DateTime nextScrollStepTime { get; set; }
	public static GUISkin skin { get; set; }
	public static Matrix4x4 matrix { get; set; }
	internal static GenericStack scrollViewStates { get; }

	// Methods

	// RVA: 0x13AA7DC Offset: 0x13A67DC VA: 0x13AA7DC
	public static Color get_color() { }

	// RVA: 0x13AA8A0 Offset: 0x13A68A0 VA: 0x13AA8A0
	public static void set_color(Color value) { }

	// RVA: 0x13AA960 Offset: 0x13A6960 VA: 0x13AA960
	public static Color get_backgroundColor() { }

	// RVA: 0x13AAA24 Offset: 0x13A6A24 VA: 0x13AAA24
	public static void set_backgroundColor(Color value) { }

	// RVA: 0x13AAAE4 Offset: 0x13A6AE4 VA: 0x13AAAE4
	public static Color get_contentColor() { }

	// RVA: 0x13AABA8 Offset: 0x13A6BA8 VA: 0x13AABA8
	public static void set_contentColor(Color value) { }

	// RVA: 0x13AAC68 Offset: 0x13A6C68 VA: 0x13AAC68
	public static bool get_changed() { }

	// RVA: 0x13AAC90 Offset: 0x13A6C90 VA: 0x13AAC90
	public static void set_changed(bool value) { }

	// RVA: 0x13AACCC Offset: 0x13A6CCC VA: 0x13AACCC
	public static bool get_enabled() { }

	// RVA: 0x13AACF4 Offset: 0x13A6CF4 VA: 0x13AACF4
	public static void set_enabled(bool value) { }

	// RVA: 0x13AAD30 Offset: 0x13A6D30 VA: 0x13AAD30
	internal static bool get_usePageScrollbars() { }

	// RVA: 0x13AAD58 Offset: 0x13A6D58 VA: 0x13AAD58
	internal static void GrabMouseControl(int id) { }

	// RVA: 0x13AAD94 Offset: 0x13A6D94 VA: 0x13AAD94
	internal static bool HasMouseControl(int id) { }

	// RVA: 0x13AADD0 Offset: 0x13A6DD0 VA: 0x13AADD0
	internal static void ReleaseMouseControl() { }

	// RVA: 0x13AADF8 Offset: 0x13A6DF8 VA: 0x13AADF8
	internal static void InternalRepaintEditorWindow() { }

	// RVA: 0x13AAE20 Offset: 0x13A6E20 VA: 0x13AAE20
	private static Rect Internal_DoWindow(int id, int instanceID, Rect clientRect, GUI.WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout) { }

	// RVA: 0x13AAFA4 Offset: 0x13A6FA4 VA: 0x13AAFA4
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x13AB234 Offset: 0x13A7234 VA: 0x13AB234
	internal static int get_scrollTroughSide() { }

	[CompilerGenerated]
	// RVA: 0x13AB28C Offset: 0x13A728C VA: 0x13AB28C
	internal static void set_scrollTroughSide(int value) { }

	[CompilerGenerated]
	// RVA: 0x13AB2E8 Offset: 0x13A72E8 VA: 0x13AB2E8
	internal static DateTime get_nextScrollStepTime() { }

	[CompilerGenerated]
	// RVA: 0x13AB340 Offset: 0x13A7340 VA: 0x13AB340
	internal static void set_nextScrollStepTime(DateTime value) { }

	// RVA: 0x13AB39C Offset: 0x13A739C VA: 0x13AB39C
	public static void set_skin(GUISkin value) { }

	// RVA: 0x13AB5A0 Offset: 0x13A75A0 VA: 0x13AB5A0
	public static GUISkin get_skin() { }

	// RVA: 0x13AB4D8 Offset: 0x13A74D8 VA: 0x13AB4D8
	internal static void DoSetSkin(GUISkin newSkin) { }

	// RVA: 0x13AB798 Offset: 0x13A7798 VA: 0x13AB798
	public static Matrix4x4 get_matrix() { }

	// RVA: 0x13AB868 Offset: 0x13A7868 VA: 0x13AB868
	public static void set_matrix(Matrix4x4 value) { }

	// RVA: 0x13AB8F0 Offset: 0x13A78F0 VA: 0x13AB8F0
	public static void Label(Rect position, string text) { }

	// RVA: 0x13ABA54 Offset: 0x13A7A54 VA: 0x13ABA54
	public static void Label(Rect position, GUIContent content, GUIStyle style) { }

	// RVA: 0x13ABDDC Offset: 0x13A7DDC VA: 0x13ABDDC
	public static void Box(Rect position, string text) { }

	// RVA: 0x13ABEB4 Offset: 0x13A7EB4 VA: 0x13ABEB4
	public static void Box(Rect position, GUIContent content, GUIStyle style) { }

	// RVA: 0x13AC1EC Offset: 0x13A81EC VA: 0x13AC1EC
	public static bool Button(Rect position, string text) { }

	// RVA: 0x13AC2C4 Offset: 0x13A82C4 VA: 0x13AC2C4
	public static bool Button(Rect position, GUIContent content, GUIStyle style) { }

	// RVA: 0x13AC450 Offset: 0x13A8450 VA: 0x13AC450
	internal static bool Button(Rect position, int id, GUIContent content, GUIStyle style) { }

	// RVA: 0x13AC624 Offset: 0x13A8624 VA: 0x13AC624
	private static bool DoRepeatButton(Rect position, GUIContent content, GUIStyle style, FocusType focusType) { }

	// RVA: 0x13ACAC4 Offset: 0x13A8AC4 VA: 0x13ACAC4
	internal static string PasswordFieldGetStrToShow(string password, char maskChar) { }

	// RVA: 0x13ACC08 Offset: 0x13A8C08 VA: 0x13ACC08
	public static string TextArea(Rect position, string text) { }

	// RVA: 0x13ACDBC Offset: 0x13A8DBC VA: 0x13ACDBC
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style) { }

	// RVA: 0x13ACE7C Offset: 0x13A8E7C VA: 0x13ACE7C
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText) { }

	// RVA: 0x13ACF44 Offset: 0x13A8F44 VA: 0x13ACF44
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar) { }

	// RVA: 0x13AD6D4 Offset: 0x13A96D4 VA: 0x13AD6D4
	private static void HandleTextFieldEventForTouchscreen(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar, TextEditor editor) { }

	// RVA: 0x13ADB50 Offset: 0x13A9B50 VA: 0x13ADB50
	private static void HandleTextFieldEventForDesktop(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, TextEditor editor) { }

	// RVA: 0x13AD35C Offset: 0x13A935C VA: 0x13AD35C
	private static void HandleTextFieldEventForDesktopWithForcedKeyboard(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, TextEditor editor) { }

	// RVA: 0x13AE514 Offset: 0x13AA514 VA: 0x13AE514
	internal static bool DoControl(Rect position, int id, bool on, bool hover, GUIContent content, GUIStyle style) { }

	// RVA: 0x13ABB10 Offset: 0x13A7B10 VA: 0x13ABB10
	private static void DoLabel(Rect position, GUIContent content, GUIStyle style) { }

	// RVA: 0x13AC514 Offset: 0x13A8514 VA: 0x13AC514
	internal static bool DoButton(Rect position, int id, GUIContent content, GUIStyle style) { }

	// RVA: 0x13AEB6C Offset: 0x13AAB6C VA: 0x13AEB6C
	public static float Slider(Rect position, float value, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, GUIStyle thumbExtent) { }

	// RVA: 0x13AED0C Offset: 0x13AAD0C VA: 0x13AED0C
	public static float HorizontalScrollbar(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle style) { }

	// RVA: 0x13AF6E8 Offset: 0x13AB6E8 VA: 0x13AF6E8
	internal static bool ScrollerRepeatButton(int scrollerID, Rect rect, GUIStyle style) { }

	// RVA: 0x13AF9BC Offset: 0x13AB9BC VA: 0x13AF9BC
	public static float VerticalScrollbar(Rect position, float value, float size, float topValue, float bottomValue, GUIStyle style) { }

	// RVA: 0x13AF1A0 Offset: 0x13AB1A0 VA: 0x13AF1A0
	internal static float Scroller(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUIStyle leftButton, GUIStyle rightButton, bool horiz) { }

	[CompilerGenerated]
	// RVA: 0x13AFC6C Offset: 0x13ABC6C VA: 0x13AFC6C
	internal static GenericStack get_scrollViewStates() { }

	// RVA: 0x13AFCC4 Offset: 0x13ABCC4 VA: 0x13AFCC4
	public static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect) { }

	// RVA: 0x13AFDB8 Offset: 0x13ABDB8 VA: 0x13AFDB8
	internal static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background) { }

	// RVA: 0x13B0AF4 Offset: 0x13ACAF4 VA: 0x13B0AF4
	public static void EndScrollView() { }

	// RVA: 0x13B0B44 Offset: 0x13ACB44 VA: 0x13B0B44
	public static void EndScrollView(bool handleScrollWheel) { }

	// RVA: 0x13B1758 Offset: 0x13AD758 VA: 0x13B1758
	public static Rect Window(int id, Rect clientRect, GUI.WindowFunction func, string text) { }

	// RVA: 0x13B1878 Offset: 0x13AD878 VA: 0x13B1878
	private static Rect DoWindow(int id, Rect clientRect, GUI.WindowFunction func, GUIContent title, GUIStyle style, GUISkin skin, bool forceRectOnLayout) { }

	[RequiredByNativeCode]
	// RVA: 0x13B1974 Offset: 0x13AD974 VA: 0x13B1974
	internal static void CallWindowDelegate(GUI.WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style) { }

	// RVA: 0x13AA864 Offset: 0x13A6864 VA: 0x13AA864
	private static void get_color_Injected(out Color ret) { }

	// RVA: 0x13AA924 Offset: 0x13A6924 VA: 0x13AA924
	private static void set_color_Injected(ref Color value) { }

	// RVA: 0x13AA9E8 Offset: 0x13A69E8 VA: 0x13AA9E8
	private static void get_backgroundColor_Injected(out Color ret) { }

	// RVA: 0x13AAAA8 Offset: 0x13A6AA8 VA: 0x13AAAA8
	private static void set_backgroundColor_Injected(ref Color value) { }

	// RVA: 0x13AAB6C Offset: 0x13A6B6C VA: 0x13AAB6C
	private static void get_contentColor_Injected(out Color ret) { }

	// RVA: 0x13AAC2C Offset: 0x13A6C2C VA: 0x13AAC2C
	private static void set_contentColor_Injected(ref Color value) { }

	// RVA: 0x13AAF08 Offset: 0x13A6F08 VA: 0x13AAF08
	private static void Internal_DoWindow_Injected(int id, int instanceID, ref Rect clientRect, GUI.WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout, out Rect ret) { }
}


// Namespace: 
internal struct GUIClip.ParentClipScope : IDisposable // TypeDefIndex: 6866
{
	// Fields
	private bool m_Disposed; // 0x0

	// Methods

	// RVA: 0x13B275C Offset: 0x13AE75C VA: 0x13B275C
	public void .ctor(Matrix4x4 objectTransform, Rect clipRect) { }

	// RVA: 0x13B27B0 Offset: 0x13AE7B0 VA: 0x13B27B0 Slot: 4
	public void Dispose() { }
}


// Namespace: UnityEngine
internal sealed class GUIClip // TypeDefIndex: 6867
{
	// Properties
	internal static Rect visibleRect { get; }

	// Methods

	// RVA: 0x13AEA5C Offset: 0x13AAA5C VA: 0x13AEA5C
	internal static Rect get_visibleRect() { }

	// RVA: 0x13B2428 Offset: 0x13AE428 VA: 0x13B2428
	internal static void Internal_Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset) { }

	// RVA: 0x13B24E8 Offset: 0x13AE4E8 VA: 0x13B24E8
	internal static void Internal_Pop() { }

	// RVA: 0x13B2510 Offset: 0x13AE510 VA: 0x13B2510
	internal static int Internal_GetCount() { }

	// RVA: 0x13B2538 Offset: 0x13AE538 VA: 0x13B2538
	private static Vector2 UnclipToWindow_Vector2(Vector2 pos) { }

	// RVA: 0x13AB804 Offset: 0x13A7804 VA: 0x13AB804
	internal static Matrix4x4 GetMatrix() { }

	// RVA: 0x13AB8B4 Offset: 0x13A78B4 VA: 0x13AB8B4
	internal static void SetMatrix(Matrix4x4 m) { }

	// RVA: 0x13B2640 Offset: 0x13AE640 VA: 0x13B2640
	internal static void Internal_PushParentClip(Matrix4x4 objectTransform, Rect clipRect) { }

	// RVA: 0x13B2680 Offset: 0x13AE680 VA: 0x13B2680
	internal static void Internal_PushParentClip(Matrix4x4 renderTransform, Matrix4x4 inputTransform, Rect clipRect) { }

	// RVA: 0x13B2730 Offset: 0x13AE730 VA: 0x13B2730
	internal static void Internal_PopParentClip() { }

	// RVA: 0x13B0AEC Offset: 0x13ACAEC VA: 0x13B0AEC
	internal static void Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset) { }

	// RVA: 0x13B1730 Offset: 0x13AD730 VA: 0x13B1730
	internal static void Pop() { }

	// RVA: 0x13B2758 Offset: 0x13AE758 VA: 0x13B2758
	public static Vector2 UnclipToWindow(Vector2 pos) { }

	// RVA: 0x13B23EC Offset: 0x13AE3EC VA: 0x13B23EC
	private static void get_visibleRect_Injected(out Rect ret) { }

	// RVA: 0x13B248C Offset: 0x13AE48C VA: 0x13B248C
	private static void Internal_Push_Injected(ref Rect screenRect, ref Vector2 scrollOffset, ref Vector2 renderOffset, bool resetOffset) { }

	// RVA: 0x13B2584 Offset: 0x13AE584 VA: 0x13B2584
	private static void UnclipToWindow_Vector2_Injected(ref Vector2 pos, out Vector2 ret) { }

	// RVA: 0x13B25C8 Offset: 0x13AE5C8 VA: 0x13B25C8
	private static void GetMatrix_Injected(out Matrix4x4 ret) { }

	// RVA: 0x13B2604 Offset: 0x13AE604 VA: 0x13B2604
	private static void SetMatrix_Injected(ref Matrix4x4 m) { }

	// RVA: 0x13B26DC Offset: 0x13AE6DC VA: 0x13B26DC
	private static void Internal_PushParentClip_Injected(ref Matrix4x4 renderTransform, ref Matrix4x4 inputTransform, ref Rect clipRect) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode(Optional = True, GenerateProxy = True)]
[Serializable]
public class GUIContent // TypeDefIndex: 6868
{
	// Fields
	[SerializeField]
	private string m_Text; // 0x10
	[SerializeField]
	private Texture m_Image; // 0x18
	[SerializeField]
	private string m_Tooltip; // 0x20
	[CompilerGenerated]
	private Action OnTextChanged; // 0x28
	private static readonly GUIContent s_Text; // 0x0
	private static readonly GUIContent s_Image; // 0x8
	private static readonly GUIContent s_TextImage; // 0x10
	public static GUIContent none; // 0x18

	// Properties
	public string text { get; set; }
	public Texture image { set; }
	public string tooltip { get; set; }

	// Methods

	// RVA: 0x13ACE74 Offset: 0x13A8E74 VA: 0x13ACE74
	public string get_text() { }

	// RVA: 0x13AD2A0 Offset: 0x13A92A0 VA: 0x13AD2A0
	public void set_text(string value) { }

	// RVA: 0x13B27F0 Offset: 0x13AE7F0 VA: 0x13B27F0
	public void set_image(Texture value) { }

	// RVA: 0x13AEA54 Offset: 0x13AAA54 VA: 0x13AEA54
	public string get_tooltip() { }

	// RVA: 0x13B27F8 Offset: 0x13AE7F8 VA: 0x13B27F8
	public void set_tooltip(string value) { }

	// RVA: 0x13B2800 Offset: 0x13AE800 VA: 0x13B2800
	public void .ctor() { }

	// RVA: 0x13B285C Offset: 0x13AE85C VA: 0x13B285C
	public void .ctor(string text) { }

	// RVA: 0x13B28C0 Offset: 0x13AE8C0 VA: 0x13B28C0
	public void .ctor(string text, Texture image, string tooltip) { }

	// RVA: 0x13B294C Offset: 0x13AE94C VA: 0x13B294C
	public void .ctor(GUIContent src) { }

	// RVA: 0x13AB9C0 Offset: 0x13A79C0 VA: 0x13AB9C0
	internal static GUIContent Temp(string t) { }

	// RVA: 0x13B29DC Offset: 0x13AE9DC VA: 0x13B29DC
	internal static void ClearStaticCache() { }

	// RVA: 0x13B2A7C Offset: 0x13AEA7C VA: 0x13B2A7C Slot: 3
	public override string ToString() { }

	// RVA: 0x13B2A9C Offset: 0x13AEA9C VA: 0x13B2A9C
	private static void .cctor() { }
}


// Namespace: UnityEngine
public enum ScaleMode // TypeDefIndex: 6869
{
	// Fields
	public int value__; // 0x0
	public const ScaleMode StretchToFill = 0;
	public const ScaleMode ScaleAndCrop = 1;
	public const ScaleMode ScaleToFit = 2;
}


// Namespace: UnityEngine
public enum FocusType // TypeDefIndex: 6870
{
	// Fields
	public int value__; // 0x0
	[Obsolete("FocusType.Native now behaves the same as FocusType.Passive in all OS cases. (UnityUpgradable) -> Passive", False)]
	public const FocusType Native = 0;
	public const FocusType Keyboard = 1;
	public const FocusType Passive = 2;
}


// Namespace: UnityEngine
public class GUILayout // TypeDefIndex: 6871
{
	// Methods

	// RVA: 0x13B2B58 Offset: 0x13AEB58 VA: 0x13B2B58
	public static void Label(string text, GUILayoutOption[] options) { }

	// RVA: 0x13B2C00 Offset: 0x13AEC00 VA: 0x13B2C00
	private static void DoLabel(GUIContent content, GUIStyle style, GUILayoutOption[] options) { }

	// RVA: 0x13B2D38 Offset: 0x13AED38 VA: 0x13B2D38
	public static bool Button(string text, GUILayoutOption[] options) { }

	// RVA: 0x13B2DE0 Offset: 0x13AEDE0 VA: 0x13B2DE0
	private static bool DoButton(GUIContent content, GUIStyle style, GUILayoutOption[] options) { }

	// RVA: 0x13B2EAC Offset: 0x13AEEAC VA: 0x13B2EAC
	public static Vector2 BeginScrollView(Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background, GUILayoutOption[] options) { }

	// RVA: 0x13B3468 Offset: 0x13AF468 VA: 0x13B3468
	public static void EndScrollView() { }

	// RVA: 0x13B3470 Offset: 0x13AF470 VA: 0x13B3470
	internal static void EndScrollView(bool handleScrollWheel) { }

	// RVA: 0x13B1D8C Offset: 0x13ADD8C VA: 0x13B1D8C
	public static GUILayoutOption Width(float width) { }

	// RVA: 0x13B1E20 Offset: 0x13ADE20 VA: 0x13B1E20
	public static GUILayoutOption Height(float height) { }
}


// Namespace: 
internal enum GUILayoutOption.Type // TypeDefIndex: 6872
{
	// Fields
	public int value__; // 0x0
	public const GUILayoutOption.Type fixedWidth = 0;
	public const GUILayoutOption.Type fixedHeight = 1;
	public const GUILayoutOption.Type minWidth = 2;
	public const GUILayoutOption.Type maxWidth = 3;
	public const GUILayoutOption.Type minHeight = 4;
	public const GUILayoutOption.Type maxHeight = 5;
	public const GUILayoutOption.Type stretchWidth = 6;
	public const GUILayoutOption.Type stretchHeight = 7;
	public const GUILayoutOption.Type alignStart = 8;
	public const GUILayoutOption.Type alignMiddle = 9;
	public const GUILayoutOption.Type alignEnd = 10;
	public const GUILayoutOption.Type alignJustify = 11;
	public const GUILayoutOption.Type equalSize = 12;
	public const GUILayoutOption.Type spacing = 13;
}


// Namespace: UnityEngine
public sealed class GUILayoutOption // TypeDefIndex: 6873
{
	// Fields
	internal GUILayoutOption.Type type; // 0x10
	internal object value; // 0x18

	// Methods

	// RVA: 0x13B3758 Offset: 0x13AF758 VA: 0x13B3758
	internal void .ctor(GUILayoutOption.Type type, object value) { }
}


// Namespace: 
internal sealed class GUILayoutUtility.LayoutCache // TypeDefIndex: 6874
{
	// Fields
	[CompilerGenerated]
	private int <id>k__BackingField; // 0x10
	internal GUILayoutGroup topLevel; // 0x18
	internal GenericStack layoutGroups; // 0x20
	internal GUILayoutGroup windows; // 0x28

	// Properties
	private int id { set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x13B53A0 Offset: 0x13B13A0 VA: 0x13B53A0
	private void set_id(int value) { }

	// RVA: 0x13B3A90 Offset: 0x13AFA90 VA: 0x13B3A90
	internal void .ctor(int instanceID = -1) { }

	// RVA: 0x13B53A8 Offset: 0x13B13A8 VA: 0x13B53A8
	public void ResetCursor() { }
}


// Namespace: UnityEngine
public class GUILayoutUtility // TypeDefIndex: 6875
{
	// Fields
	private static readonly Dictionary<int, GUILayoutUtility.LayoutCache> s_StoredLayouts; // 0x0
	private static readonly Dictionary<int, GUILayoutUtility.LayoutCache> s_StoredWindows; // 0x8
	internal static GUILayoutUtility.LayoutCache current; // 0x10
	internal static readonly Rect kDummyRect; // 0x18
	[CompilerGenerated]
	private static int <unbalancedgroupscount>k__BackingField; // 0x28

	// Properties
	internal static int unbalancedgroupscount { get; set; }

	// Methods

	// RVA: 0x13B3788 Offset: 0x13AF788 VA: 0x13B3788
	private static Rect Internal_GetWindowRect(int windowID) { }

	// RVA: 0x13B385C Offset: 0x13AF85C VA: 0x13B385C
	private static void Internal_MoveWindow(int windowID, Rect r) { }

	[CompilerGenerated]
	// RVA: 0x13B392C Offset: 0x13AF92C VA: 0x13B392C
	internal static int get_unbalancedgroupscount() { }

	[CompilerGenerated]
	// RVA: 0x13B3984 Offset: 0x13AF984 VA: 0x13B3984
	internal static void set_unbalancedgroupscount(int value) { }

	// RVA: 0x13B39E0 Offset: 0x13AF9E0 VA: 0x13B39E0
	internal static GUILayoutUtility.LayoutCache GetLayoutCache(int instanceID, bool isWindow) { }

	// RVA: 0x13B1C44 Offset: 0x13ADC44 VA: 0x13B1C44
	internal static GUILayoutUtility.LayoutCache SelectIDList(int instanceID, bool isWindow) { }

	// RVA: 0x13B3B5C Offset: 0x13AFB5C VA: 0x13B3B5C
	internal static void RemoveSelectedIdList(int instanceID, bool isWindow) { }

	// RVA: 0x13B3C2C Offset: 0x13AFC2C VA: 0x13B3C2C
	internal static void Begin(int instanceID) { }

	// RVA: 0x13B3F04 Offset: 0x13AFF04 VA: 0x13B3F04
	internal static void BeginContainer(GUILayoutUtility.LayoutCache cache) { }

	// RVA: 0x13B1EB8 Offset: 0x13ADEB8 VA: 0x13B1EB8
	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options) { }

	// RVA: 0x13B2130 Offset: 0x13AE130 VA: 0x13B2130
	internal static void Layout() { }

	// RVA: 0x13B43EC Offset: 0x13B03EC VA: 0x13B43EC
	internal static void LayoutFromEditorWindow() { }

	// RVA: 0x13B45FC Offset: 0x13B05FC VA: 0x13B45FC
	internal static void LayoutFromContainer(float w, float h) { }

	// RVA: 0x13B4098 Offset: 0x13B0098 VA: 0x13B4098
	internal static void LayoutFreeGroup(GUILayoutGroup toplevel) { }

	// RVA: 0x13B4274 Offset: 0x13B0274 VA: 0x13B4274
	private static void LayoutSingleGroup(GUILayoutGroup i) { }

	// RVA: 0x13B478C Offset: 0x13B078C VA: 0x13B478C
	private static GUILayoutGroup CreateGUILayoutGroupInstanceOfType(Type LayoutType) { }

	// RVA: 0x13B3130 Offset: 0x13AF130 VA: 0x13B3130
	internal static GUILayoutGroup BeginLayoutGroup(GUIStyle style, GUILayoutOption[] options, Type layoutType) { }

	// RVA: 0x13B34EC Offset: 0x13AF4EC VA: 0x13B34EC
	internal static void EndLayoutGroup() { }

	// RVA: 0x13B2CCC Offset: 0x13AECCC VA: 0x13B2CCC
	public static Rect GetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options) { }

	// RVA: 0x13B4CF0 Offset: 0x13B0CF0 VA: 0x13B4CF0
	private static Rect DoGetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options) { }

	// RVA: 0x13B52B4 Offset: 0x13B12B4 VA: 0x13B52B4
	private static void .cctor() { }

	// RVA: 0x13B3818 Offset: 0x13AF818 VA: 0x13B3818
	private static void Internal_GetWindowRect_Injected(int windowID, out Rect ret) { }

	// RVA: 0x13B38E8 Offset: 0x13AF8E8 VA: 0x13B38E8
	private static void Internal_MoveWindow_Injected(int windowID, ref Rect r) { }
}


// Namespace: UnityEngine
[Serializable]
public sealed class GUISettings // TypeDefIndex: 6876
{
	// Fields
	[SerializeField]
	private bool m_DoubleClickSelectsWord; // 0x10
	[SerializeField]
	private bool m_TripleClickSelectsLine; // 0x11
	[SerializeField]
	private Color m_CursorColor; // 0x14
	[SerializeField]
	private float m_CursorFlashSpeed; // 0x24
	[SerializeField]
	private Color m_SelectionColor; // 0x28

	// Properties
	public bool doubleClickSelectsWord { get; }
	public bool tripleClickSelectsLine { get; }
	public Color cursorColor { get; }
	public float cursorFlashSpeed { get; }
	public Color selectionColor { get; }

	// Methods

	// RVA: 0x13B5684 Offset: 0x13B1684 VA: 0x13B5684
	private static float Internal_GetCursorFlashSpeed() { }

	// RVA: 0x13AE45C Offset: 0x13AA45C VA: 0x13AE45C
	public bool get_doubleClickSelectsWord() { }

	// RVA: 0x13AE464 Offset: 0x13AA464 VA: 0x13AE464
	public bool get_tripleClickSelectsLine() { }

	// RVA: 0x13B56AC Offset: 0x13B16AC VA: 0x13B56AC
	public Color get_cursorColor() { }

	// RVA: 0x13B56B8 Offset: 0x13B16B8 VA: 0x13B56B8
	public float get_cursorFlashSpeed() { }

	// RVA: 0x13B56F4 Offset: 0x13B16F4 VA: 0x13B56F4
	public Color get_selectionColor() { }

	// RVA: 0x13B5700 Offset: 0x13B1700 VA: 0x13B5700
	public void .ctor() { }
}


// Namespace: 
internal sealed class GUISkin.SkinChangedDelegate : MulticastDelegate // TypeDefIndex: 6877
{
	// Methods

	// RVA: 0x13B6DD8 Offset: 0x13B2DD8 VA: 0x13B6DD8
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x13B6E60 Offset: 0x13B2E60 VA: 0x13B6E60 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
[ExecuteInEditMode]
[RequiredByNativeCode]
[Serializable]
public sealed class GUISkin : ScriptableObject // TypeDefIndex: 6878
{
	// Fields
	[SerializeField]
	private Font m_Font; // 0x18
	[SerializeField]
	private GUIStyle m_box; // 0x20
	[SerializeField]
	private GUIStyle m_button; // 0x28
	[SerializeField]
	private GUIStyle m_toggle; // 0x30
	[SerializeField]
	private GUIStyle m_label; // 0x38
	[SerializeField]
	private GUIStyle m_textField; // 0x40
	[SerializeField]
	private GUIStyle m_textArea; // 0x48
	[SerializeField]
	private GUIStyle m_window; // 0x50
	[SerializeField]
	private GUIStyle m_horizontalSlider; // 0x58
	[SerializeField]
	private GUIStyle m_horizontalSliderThumb; // 0x60
	private GUIStyle m_horizontalSliderThumbExtent; // 0x68
	[SerializeField]
	private GUIStyle m_verticalSlider; // 0x70
	[SerializeField]
	private GUIStyle m_verticalSliderThumb; // 0x78
	private GUIStyle m_verticalSliderThumbExtent; // 0x80
	private GUIStyle m_SliderMixed; // 0x88
	[SerializeField]
	private GUIStyle m_horizontalScrollbar; // 0x90
	[SerializeField]
	private GUIStyle m_horizontalScrollbarThumb; // 0x98
	[SerializeField]
	private GUIStyle m_horizontalScrollbarLeftButton; // 0xA0
	[SerializeField]
	private GUIStyle m_horizontalScrollbarRightButton; // 0xA8
	[SerializeField]
	private GUIStyle m_verticalScrollbar; // 0xB0
	[SerializeField]
	private GUIStyle m_verticalScrollbarThumb; // 0xB8
	[SerializeField]
	private GUIStyle m_verticalScrollbarUpButton; // 0xC0
	[SerializeField]
	private GUIStyle m_verticalScrollbarDownButton; // 0xC8
	[SerializeField]
	private GUIStyle m_ScrollView; // 0xD0
	[SerializeField]
	internal GUIStyle[] m_CustomStyles; // 0xD8
	[SerializeField]
	private GUISettings m_Settings; // 0xE0
	internal static GUIStyle ms_Error; // 0x0
	private Dictionary<string, GUIStyle> m_Styles; // 0xE8
	internal static GUISkin.SkinChangedDelegate m_SkinChanged; // 0x8
	internal static GUISkin current; // 0x10

	// Properties
	public Font font { get; set; }
	public GUIStyle box { get; set; }
	public GUIStyle label { get; set; }
	public GUIStyle textField { get; set; }
	public GUIStyle textArea { get; set; }
	public GUIStyle button { get; set; }
	public GUIStyle toggle { get; set; }
	public GUIStyle window { get; set; }
	public GUIStyle horizontalSlider { get; set; }
	public GUIStyle horizontalSliderThumb { get; set; }
	internal GUIStyle horizontalSliderThumbExtent { get; set; }
	internal GUIStyle sliderMixed { get; set; }
	public GUIStyle verticalSlider { get; set; }
	public GUIStyle verticalSliderThumb { get; set; }
	internal GUIStyle verticalSliderThumbExtent { get; set; }
	public GUIStyle horizontalScrollbar { get; set; }
	public GUIStyle horizontalScrollbarThumb { get; set; }
	public GUIStyle horizontalScrollbarLeftButton { get; set; }
	public GUIStyle horizontalScrollbarRightButton { get; set; }
	public GUIStyle verticalScrollbar { get; set; }
	public GUIStyle verticalScrollbarThumb { get; set; }
	public GUIStyle verticalScrollbarUpButton { get; set; }
	public GUIStyle verticalScrollbarDownButton { get; set; }
	public GUIStyle scrollView { get; set; }
	public GUIStyle[] customStyles { get; set; }
	public GUISettings settings { get; }
	internal static GUIStyle error { get; }

	// Methods

	// RVA: 0x13B572C Offset: 0x13B172C VA: 0x13B572C
	public void .ctor() { }

	// RVA: 0x13B57E0 Offset: 0x13B17E0 VA: 0x13B57E0
	internal void OnEnable() { }

	// RVA: 0x13B5860 Offset: 0x13B1860 VA: 0x13B5860
	internal static void CleanupRoots() { }

	// RVA: 0x13AE4A8 Offset: 0x13AA4A8 VA: 0x13AE4A8
	public Font get_font() { }

	// RVA: 0x13B58AC Offset: 0x13B18AC VA: 0x13B58AC
	public void set_font(Font value) { }

	// RVA: 0x13ABEAC Offset: 0x13A7EAC VA: 0x13ABEAC
	public GUIStyle get_box() { }

	// RVA: 0x13B59D0 Offset: 0x13B19D0 VA: 0x13B59D0
	public void set_box(GUIStyle value) { }

	// RVA: 0x13ABA4C Offset: 0x13A7A4C VA: 0x13ABA4C
	public GUIStyle get_label() { }

	// RVA: 0x13B59D8 Offset: 0x13B19D8 VA: 0x13B59D8
	public void set_label(GUIStyle value) { }

	// RVA: 0x13B59E0 Offset: 0x13B19E0 VA: 0x13B59E0
	public GUIStyle get_textField() { }

	// RVA: 0x13B59E8 Offset: 0x13B19E8 VA: 0x13B59E8
	public void set_textField(GUIStyle value) { }

	// RVA: 0x13ACDB4 Offset: 0x13A8DB4 VA: 0x13ACDB4
	public GUIStyle get_textArea() { }

	// RVA: 0x13B59F0 Offset: 0x13B19F0 VA: 0x13B59F0
	public void set_textArea(GUIStyle value) { }

	// RVA: 0x13AC2BC Offset: 0x13A82BC VA: 0x13AC2BC
	public GUIStyle get_button() { }

	// RVA: 0x13B59F8 Offset: 0x13B19F8 VA: 0x13B59F8
	public void set_button(GUIStyle value) { }

	// RVA: 0x13B5A00 Offset: 0x13B1A00 VA: 0x13B5A00
	public GUIStyle get_toggle() { }

	// RVA: 0x13B5A08 Offset: 0x13B1A08 VA: 0x13B5A08
	public void set_toggle(GUIStyle value) { }

	// RVA: 0x13B1870 Offset: 0x13AD870 VA: 0x13B1870
	public GUIStyle get_window() { }

	// RVA: 0x13B5A10 Offset: 0x13B1A10 VA: 0x13B5A10
	public void set_window(GUIStyle value) { }

	// RVA: 0x13B5A18 Offset: 0x13B1A18 VA: 0x13B5A18
	public GUIStyle get_horizontalSlider() { }

	// RVA: 0x13B5A20 Offset: 0x13B1A20 VA: 0x13B5A20
	public void set_horizontalSlider(GUIStyle value) { }

	// RVA: 0x13B5A28 Offset: 0x13B1A28 VA: 0x13B5A28
	public GUIStyle get_horizontalSliderThumb() { }

	// RVA: 0x13B5A30 Offset: 0x13B1A30 VA: 0x13B5A30
	public void set_horizontalSliderThumb(GUIStyle value) { }

	// RVA: 0x13B5A38 Offset: 0x13B1A38 VA: 0x13B5A38
	internal GUIStyle get_horizontalSliderThumbExtent() { }

	// RVA: 0x13B5A40 Offset: 0x13B1A40 VA: 0x13B5A40
	internal void set_horizontalSliderThumbExtent(GUIStyle value) { }

	// RVA: 0x13B5A48 Offset: 0x13B1A48 VA: 0x13B5A48
	internal GUIStyle get_sliderMixed() { }

	// RVA: 0x13B5A50 Offset: 0x13B1A50 VA: 0x13B5A50
	internal void set_sliderMixed(GUIStyle value) { }

	// RVA: 0x13B5A58 Offset: 0x13B1A58 VA: 0x13B5A58
	public GUIStyle get_verticalSlider() { }

	// RVA: 0x13B5A60 Offset: 0x13B1A60 VA: 0x13B5A60
	public void set_verticalSlider(GUIStyle value) { }

	// RVA: 0x13B5A68 Offset: 0x13B1A68 VA: 0x13B5A68
	public GUIStyle get_verticalSliderThumb() { }

	// RVA: 0x13B5A70 Offset: 0x13B1A70 VA: 0x13B5A70
	public void set_verticalSliderThumb(GUIStyle value) { }

	// RVA: 0x13B5A78 Offset: 0x13B1A78 VA: 0x13B5A78
	internal GUIStyle get_verticalSliderThumbExtent() { }

	// RVA: 0x13B5A80 Offset: 0x13B1A80 VA: 0x13B5A80
	internal void set_verticalSliderThumbExtent(GUIStyle value) { }

	// RVA: 0x13AFDA0 Offset: 0x13ABDA0 VA: 0x13AFDA0
	public GUIStyle get_horizontalScrollbar() { }

	// RVA: 0x13B5A88 Offset: 0x13B1A88 VA: 0x13B5A88
	public void set_horizontalScrollbar(GUIStyle value) { }

	// RVA: 0x13B5A90 Offset: 0x13B1A90 VA: 0x13B5A90
	public GUIStyle get_horizontalScrollbarThumb() { }

	// RVA: 0x13B5A98 Offset: 0x13B1A98 VA: 0x13B5A98
	public void set_horizontalScrollbarThumb(GUIStyle value) { }

	// RVA: 0x13B5AA0 Offset: 0x13B1AA0 VA: 0x13B5AA0
	public GUIStyle get_horizontalScrollbarLeftButton() { }

	// RVA: 0x13B5AA8 Offset: 0x13B1AA8 VA: 0x13B5AA8
	public void set_horizontalScrollbarLeftButton(GUIStyle value) { }

	// RVA: 0x13B5AB0 Offset: 0x13B1AB0 VA: 0x13B5AB0
	public GUIStyle get_horizontalScrollbarRightButton() { }

	// RVA: 0x13B5AB8 Offset: 0x13B1AB8 VA: 0x13B5AB8
	public void set_horizontalScrollbarRightButton(GUIStyle value) { }

	// RVA: 0x13AFDA8 Offset: 0x13ABDA8 VA: 0x13AFDA8
	public GUIStyle get_verticalScrollbar() { }

	// RVA: 0x13B5AC0 Offset: 0x13B1AC0 VA: 0x13B5AC0
	public void set_verticalScrollbar(GUIStyle value) { }

	// RVA: 0x13B5AC8 Offset: 0x13B1AC8 VA: 0x13B5AC8
	public GUIStyle get_verticalScrollbarThumb() { }

	// RVA: 0x13B5AD0 Offset: 0x13B1AD0 VA: 0x13B5AD0
	public void set_verticalScrollbarThumb(GUIStyle value) { }

	// RVA: 0x13B5AD8 Offset: 0x13B1AD8 VA: 0x13B5AD8
	public GUIStyle get_verticalScrollbarUpButton() { }

	// RVA: 0x13B5AE0 Offset: 0x13B1AE0 VA: 0x13B5AE0
	public void set_verticalScrollbarUpButton(GUIStyle value) { }

	// RVA: 0x13B5AE8 Offset: 0x13B1AE8 VA: 0x13B5AE8
	public GUIStyle get_verticalScrollbarDownButton() { }

	// RVA: 0x13B5AF0 Offset: 0x13B1AF0 VA: 0x13B5AF0
	public void set_verticalScrollbarDownButton(GUIStyle value) { }

	// RVA: 0x13AFDB0 Offset: 0x13ABDB0 VA: 0x13AFDB0
	public GUIStyle get_scrollView() { }

	// RVA: 0x13B5AF8 Offset: 0x13B1AF8 VA: 0x13B5AF8
	public void set_scrollView(GUIStyle value) { }

	// RVA: 0x13B5B00 Offset: 0x13B1B00 VA: 0x13B5B00
	public GUIStyle[] get_customStyles() { }

	// RVA: 0x13B5B08 Offset: 0x13B1B08 VA: 0x13B5B08
	public void set_customStyles(GUIStyle[] value) { }

	// RVA: 0x13AE454 Offset: 0x13AA454 VA: 0x13AE454
	public GUISettings get_settings() { }

	// RVA: 0x13B5B10 Offset: 0x13B1B10 VA: 0x13B5B10
	internal static GUIStyle get_error() { }

	// RVA: 0x13B57E4 Offset: 0x13B17E4 VA: 0x13B57E4
	internal void Apply() { }

	// RVA: 0x13B5CCC Offset: 0x13B1CCC VA: 0x13B5CCC
	private void BuildStyleCache() { }

	// RVA: 0x13AEF90 Offset: 0x13AAF90 VA: 0x13AEF90
	public GUIStyle GetStyle(string styleName) { }

	// RVA: 0x13B6C90 Offset: 0x13B2C90 VA: 0x13B6C90
	public GUIStyle FindStyle(string styleName) { }

	// RVA: 0x13AB6C8 Offset: 0x13A76C8 VA: 0x13AB6C8
	internal void MakeCurrent() { }

	// RVA: 0x13B6D18 Offset: 0x13B2D18 VA: 0x13B6D18
	public IEnumerator GetEnumerator() { }
}


// Namespace: UnityEngine
internal class GUIStateObjects // TypeDefIndex: 6879
{
	// Fields
	private static Dictionary<int, object> s_StateCache; // 0x0

	// Methods

	// RVA: 0x13B6E74 Offset: 0x13B2E74 VA: 0x13B6E74
	internal static object GetStateObject(Type t, int controlID) { }

	// RVA: 0x13B6FC8 Offset: 0x13B2FC8 VA: 0x13B6FC8
	private static void .cctor() { }
}


// Namespace: UnityEngine
[Serializable]
public sealed class GUIStyleState // TypeDefIndex: 6880
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private readonly GUIStyle m_SourceStyle; // 0x18

	// Properties
	public Color textColor { set; }

	// Methods

	// RVA: 0x13B6C3C Offset: 0x13B2C3C VA: 0x13B6C3C
	public void set_textColor(Color value) { }

	// RVA: 0x13B7098 Offset: 0x13B3098 VA: 0x13B7098
	private static IntPtr Init() { }

	// RVA: 0x13B70C0 Offset: 0x13B30C0 VA: 0x13B70C0
	private void Cleanup() { }

	// RVA: 0x13B70FC Offset: 0x13B30FC VA: 0x13B70FC
	public void .ctor() { }

	// RVA: 0x13B7144 Offset: 0x13B3144 VA: 0x13B7144
	private void .ctor(GUIStyle sourceStyle, IntPtr source) { }

	// RVA: 0x13B7170 Offset: 0x13B3170 VA: 0x13B7170
	internal static GUIStyleState GetGUIStyleState(GUIStyle sourceStyle, IntPtr source) { }

	// RVA: 0x13B71D8 Offset: 0x13B31D8 VA: 0x13B71D8 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x13B7054 Offset: 0x13B3054 VA: 0x13B7054
	private void set_textColor_Injected(ref Color value) { }
}


// Namespace: UnityEngine
[RequiredByNativeCode]
[Serializable]
public sealed class GUIStyle // TypeDefIndex: 6881
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private GUIStyleState m_Normal; // 0x18
	private GUIStyleState m_Hover; // 0x20
	private GUIStyleState m_Active; // 0x28
	private GUIStyleState m_Focused; // 0x30
	private GUIStyleState m_OnNormal; // 0x38
	private GUIStyleState m_OnHover; // 0x40
	private GUIStyleState m_OnActive; // 0x48
	private GUIStyleState m_OnFocused; // 0x50
	private RectOffset m_Border; // 0x58
	private RectOffset m_Padding; // 0x60
	private RectOffset m_Margin; // 0x68
	private RectOffset m_Overflow; // 0x70
	private string m_Name; // 0x78
	internal static bool showKeyboardFocus; // 0x0
	private static GUIStyle s_None; // 0x8

	// Properties
	internal string rawName { get; set; }
	public Font font { get; }
	public ImagePosition imagePosition { get; }
	public bool wordWrap { get; }
	public Vector2 contentOffset { get; set; }
	public float fixedWidth { get; }
	public float fixedHeight { get; }
	public bool stretchWidth { get; }
	public bool stretchHeight { get; set; }
	internal Vector2 Internal_clipOffset { set; }
	public string name { get; set; }
	public GUIStyleState normal { get; }
	public RectOffset margin { get; }
	public RectOffset padding { get; }
	public float lineHeight { get; }
	public static GUIStyle none { get; }
	public bool isHeightDependantOnWidth { get; }

	// Methods

	// RVA: 0x13B729C Offset: 0x13B329C VA: 0x13B729C
	internal string get_rawName() { }

	// RVA: 0x13B72D8 Offset: 0x13B32D8 VA: 0x13B72D8
	internal void set_rawName(string value) { }

	// RVA: 0x13AE46C Offset: 0x13AA46C VA: 0x13AE46C
	public Font get_font() { }

	// RVA: 0x13B731C Offset: 0x13B331C VA: 0x13B731C
	public ImagePosition get_imagePosition() { }

	// RVA: 0x13B7358 Offset: 0x13B3358 VA: 0x13B7358
	public bool get_wordWrap() { }

	// RVA: 0x13B7394 Offset: 0x13B3394 VA: 0x13B7394
	public Vector2 get_contentOffset() { }

	// RVA: 0x13B7424 Offset: 0x13B3424 VA: 0x13B7424
	public void set_contentOffset(Vector2 value) { }

	// RVA: 0x13AFBF4 Offset: 0x13ABBF4 VA: 0x13AFBF4
	public float get_fixedWidth() { }

	// RVA: 0x13AFC30 Offset: 0x13ABC30 VA: 0x13AFC30
	public float get_fixedHeight() { }

	// RVA: 0x13B74B0 Offset: 0x13B34B0 VA: 0x13B74B0
	public bool get_stretchWidth() { }

	// RVA: 0x13B74EC Offset: 0x13B34EC VA: 0x13B74EC
	public bool get_stretchHeight() { }

	// RVA: 0x13B6B9C Offset: 0x13B2B9C VA: 0x13B6B9C
	public void set_stretchHeight(bool value) { }

	// RVA: 0x13B7528 Offset: 0x13B3528 VA: 0x13B7528
	internal void set_Internal_clipOffset(Vector2 value) { }

	// RVA: 0x13B75B4 Offset: 0x13B35B4 VA: 0x13B75B4
	private static IntPtr Internal_Create(GUIStyle self) { }

	// RVA: 0x13B75F0 Offset: 0x13B35F0 VA: 0x13B75F0
	private static void Internal_Destroy(IntPtr self) { }

	// RVA: 0x13B762C Offset: 0x13B362C VA: 0x13B762C
	private IntPtr GetStyleStatePtr(int idx) { }

	// RVA: 0x13B7670 Offset: 0x13B3670 VA: 0x13B7670
	private IntPtr GetRectOffsetPtr(int idx) { }

	// RVA: 0x13B76B4 Offset: 0x13B36B4 VA: 0x13B76B4
	private static float Internal_GetLineHeight(IntPtr target) { }

	// RVA: 0x13B76F0 Offset: 0x13B36F0 VA: 0x13B76F0
	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	// RVA: 0x13B7800 Offset: 0x13B3800 VA: 0x13B7800
	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on) { }

	// RVA: 0x13B78E0 Offset: 0x13B38E0 VA: 0x13B78E0
	private void Internal_DrawCursor(Rect position, GUIContent content, int pos, Color cursorColor) { }

	// RVA: 0x13B79C4 Offset: 0x13B39C4 VA: 0x13B79C4
	private void Internal_DrawWithTextSelection(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int cursorFirst, int cursorLast, Color cursorColor, Color selectionColor) { }

	// RVA: 0x13B7B50 Offset: 0x13B3B50 VA: 0x13B7B50
	internal Vector2 Internal_GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex) { }

	// RVA: 0x13B7C30 Offset: 0x13B3C30 VA: 0x13B7C30
	internal int Internal_GetCursorStringIndex(Rect position, GUIContent content, Vector2 cursorPixelPosition) { }

	// RVA: 0x13B7CF0 Offset: 0x13B3CF0 VA: 0x13B7CF0
	internal string Internal_GetSelectedRenderedText(Rect localPosition, GUIContent mContent, int selectIndex, int cursorIndex) { }

	// RVA: 0x13B7DD0 Offset: 0x13B3DD0 VA: 0x13B7DD0
	internal Vector2 Internal_CalcSize(GUIContent content) { }

	// RVA: 0x13B7E80 Offset: 0x13B3E80 VA: 0x13B7E80
	internal Vector2 Internal_CalcSizeWithConstraints(GUIContent content, Vector2 maxSize) { }

	// RVA: 0x13B7F40 Offset: 0x13B3F40 VA: 0x13B7F40
	private float Internal_CalcHeight(GUIContent content, float width) { }

	// RVA: 0x13B7F94 Offset: 0x13B3F94 VA: 0x13B7F94
	private Vector2 Internal_CalcMinMaxWidth(GUIContent content) { }

	// RVA: 0x13AEAE0 Offset: 0x13AAAE0 VA: 0x13AEAE0
	internal static void SetMouseTooltip(string tooltip, Rect screenRect) { }

	// RVA: 0x13AEAA4 Offset: 0x13AAAA4 VA: 0x13AEAA4
	internal static bool IsTooltipActive(string tooltip) { }

	// RVA: 0x13B8088 Offset: 0x13B4088 VA: 0x13B8088
	private static float Internal_GetCursorFlashOffset() { }

	// RVA: 0x13B5994 Offset: 0x13B1994 VA: 0x13B5994
	internal static void SetDefaultFont(Font font) { }

	// RVA: 0x13B5BFC Offset: 0x13B1BFC VA: 0x13B5BFC
	public void .ctor() { }

	// RVA: 0x13B80B0 Offset: 0x13B40B0 VA: 0x13B80B0 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x13AEF44 Offset: 0x13AAF44 VA: 0x13AEF44
	public string get_name() { }

	// RVA: 0x13B5C84 Offset: 0x13B1C84 VA: 0x13B5C84
	public void set_name(string value) { }

	// RVA: 0x13B6BE0 Offset: 0x13B2BE0 VA: 0x13B6BE0
	public GUIStyleState get_normal() { }

	// RVA: 0x13B0904 Offset: 0x13AC904 VA: 0x13B0904
	public RectOffset get_margin() { }

	// RVA: 0x13B81C0 Offset: 0x13B41C0 VA: 0x13B81C0
	public RectOffset get_padding() { }

	// RVA: 0x13B8260 Offset: 0x13B4260 VA: 0x13B8260
	public float get_lineHeight() { }

	// RVA: 0x13B0A2C Offset: 0x13ACA2C VA: 0x13B0A2C
	public void Draw(Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	// RVA: 0x13AEA40 Offset: 0x13AAA40 VA: 0x13AEA40
	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	// RVA: 0x13AE440 Offset: 0x13AA440 VA: 0x13AE440
	public void Draw(Rect position, GUIContent content, int controlID, bool on) { }

	// RVA: 0x13AC11C Offset: 0x13A811C VA: 0x13AC11C
	public void Draw(Rect position, GUIContent content, int controlID, bool on, bool hover) { }

	// RVA: 0x13B835C Offset: 0x13B435C VA: 0x13B835C
	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	// RVA: 0x13B8454 Offset: 0x13B4454 VA: 0x13B8454
	public void DrawCursor(Rect position, GUIContent content, int controlID, int character) { }

	// RVA: 0x13B866C Offset: 0x13B466C VA: 0x13B866C
	internal void DrawWithTextSelection(Rect position, GUIContent content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, Color selectionColor) { }

	// RVA: 0x13B88F0 Offset: 0x13B48F0 VA: 0x13B88F0
	internal void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition) { }

	// RVA: 0x13B8A54 Offset: 0x13B4A54 VA: 0x13B8A54
	public void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter) { }

	// RVA: 0x13B09A4 Offset: 0x13AC9A4 VA: 0x13B09A4
	public static GUIStyle get_none() { }

	// RVA: 0x13B8A5C Offset: 0x13B4A5C VA: 0x13B8A5C
	public Vector2 GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex) { }

	// RVA: 0x13B8A60 Offset: 0x13B4A60 VA: 0x13B8A60
	public int GetCursorStringIndex(Rect position, GUIContent content, Vector2 cursorPixelPosition) { }

	// RVA: 0x13B8A64 Offset: 0x13B4A64 VA: 0x13B8A64
	public Vector2 CalcSize(GUIContent content) { }

	// RVA: 0x13B51DC Offset: 0x13B11DC VA: 0x13B51DC
	internal Vector2 CalcSizeWithConstraints(GUIContent content, Vector2 constraints) { }

	// RVA: 0x13B8A68 Offset: 0x13B4A68 VA: 0x13B8A68
	public float CalcHeight(GUIContent content, float width) { }

	// RVA: 0x13B505C Offset: 0x13B105C VA: 0x13B505C
	public bool get_isHeightDependantOnWidth() { }

	// RVA: 0x13B8ABC Offset: 0x13B4ABC VA: 0x13B8ABC
	public void CalcMinMaxWidth(GUIContent content, out float minWidth, out float maxWidth) { }

	// RVA: 0x13B8AE4 Offset: 0x13B4AE4 VA: 0x13B8AE4 Slot: 3
	public override string ToString() { }

	// RVA: 0x13B8BC8 Offset: 0x13B4BC8 VA: 0x13B8BC8
	private static void .cctor() { }

	// RVA: 0x13B73E0 Offset: 0x13B33E0 VA: 0x13B73E0
	private void get_contentOffset_Injected(out Vector2 ret) { }

	// RVA: 0x13B746C Offset: 0x13B346C VA: 0x13B746C
	private void set_contentOffset_Injected(ref Vector2 value) { }

	// RVA: 0x13B7570 Offset: 0x13B3570 VA: 0x13B7570
	private void set_Internal_clipOffset_Injected(ref Vector2 value) { }

	// RVA: 0x13B777C Offset: 0x13B377C VA: 0x13B777C
	private void Internal_Draw_Injected(ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	// RVA: 0x13B7874 Offset: 0x13B3874 VA: 0x13B7874
	private void Internal_Draw2_Injected(ref Rect position, GUIContent content, int controlID, bool on) { }

	// RVA: 0x13B7958 Offset: 0x13B3958 VA: 0x13B7958
	private void Internal_DrawCursor_Injected(ref Rect position, GUIContent content, int pos, ref Color cursorColor) { }

	// RVA: 0x13B7A94 Offset: 0x13B3A94 VA: 0x13B7A94
	private void Internal_DrawWithTextSelection_Injected(ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int cursorFirst, int cursorLast, ref Color cursorColor, ref Color selectionColor) { }

	// RVA: 0x13B7BC4 Offset: 0x13B3BC4 VA: 0x13B7BC4
	private void Internal_GetCursorPixelPosition_Injected(ref Rect position, GUIContent content, int cursorStringIndex, out Vector2 ret) { }

	// RVA: 0x13B7C94 Offset: 0x13B3C94 VA: 0x13B7C94
	private int Internal_GetCursorStringIndex_Injected(ref Rect position, GUIContent content, ref Vector2 cursorPixelPosition) { }

	// RVA: 0x13B7D64 Offset: 0x13B3D64 VA: 0x13B7D64
	private string Internal_GetSelectedRenderedText_Injected(ref Rect localPosition, GUIContent mContent, int selectIndex, int cursorIndex) { }

	// RVA: 0x13B7E2C Offset: 0x13B3E2C VA: 0x13B7E2C
	private void Internal_CalcSize_Injected(GUIContent content, out Vector2 ret) { }

	// RVA: 0x13B7EE4 Offset: 0x13B3EE4 VA: 0x13B7EE4
	private void Internal_CalcSizeWithConstraints_Injected(GUIContent content, ref Vector2 maxSize, out Vector2 ret) { }

	// RVA: 0x13B7FF0 Offset: 0x13B3FF0 VA: 0x13B7FF0
	private void Internal_CalcMinMaxWidth_Injected(GUIContent content, out Vector2 ret) { }

	// RVA: 0x13B8044 Offset: 0x13B4044 VA: 0x13B8044
	private static void SetMouseTooltip_Injected(string tooltip, ref Rect screenRect) { }
}


// Namespace: UnityEngine
public enum ImagePosition // TypeDefIndex: 6882
{
	// Fields
	public int value__; // 0x0
	public const ImagePosition ImageLeft = 0;
	public const ImagePosition ImageAbove = 1;
	public const ImagePosition ImageOnly = 2;
	public const ImagePosition TextOnly = 3;
}


// Namespace: UnityEngine
[Usage(64)]
public class GUITargetAttribute : Attribute // TypeDefIndex: 6883
{
	// Fields
	internal int displayMask; // 0x10

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13B8C14 Offset: 0x13B4C14 VA: 0x13B8C14
	private static int GetGUITargetAttrValue(Type klass, string methodName) { }
}


// Namespace: UnityEngine
public class GUIUtility // TypeDefIndex: 6884
{
	// Fields
	internal static int s_ControlCount; // 0x0
	internal static int s_SkinMode; // 0x4
	internal static int s_OriginalID; // 0x8
	internal static Action takeCapture; // 0x10
	internal static Action releaseCapture; // 0x18
	internal static Func<int, IntPtr, bool> processEvent; // 0x20
	internal static Action cleanupRoots; // 0x28
	internal static Func<Exception, bool> endContainerGUIFromException; // 0x30
	internal static Action guiChanged; // 0x38
	internal static Action<EventType, KeyCode> beforeEventProcessed; // 0x40
	private static Event m_Event; // 0x48
	[CompilerGenerated]
	private static bool <guiIsExiting>k__BackingField; // 0x50
	internal static Func<bool> s_HasCurrentWindowKeyFocusFunc; // 0x58

	// Properties
	internal static float pixelsPerPoint { get; }
	internal static int guiDepth { get; }
	internal static bool textFieldInput { get; set; }
	public static string systemCopyBuffer { get; set; }
	internal static string compositionString { get; }
	internal static IMECompositionMode imeCompositionMode { set; }
	internal static Vector2 compositionCursorPos { set; }
	internal static bool guiIsExiting { set; }
	public static int hotControl { get; set; }
	public static int keyboardControl { get; set; }

	// Methods

	// RVA: 0x13B4070 Offset: 0x13B0070 VA: 0x13B4070
	internal static float get_pixelsPerPoint() { }

	// RVA: 0x13B8DB0 Offset: 0x13B4DB0 VA: 0x13B8DB0
	internal static int get_guiDepth() { }

	// RVA: 0x13AA7B4 Offset: 0x13A67B4 VA: 0x13AA7B4
	internal static bool get_textFieldInput() { }

	// RVA: 0x13AE4D8 Offset: 0x13AA4D8 VA: 0x13AE4D8
	internal static void set_textFieldInput(bool value) { }

	// RVA: 0x13B8DD8 Offset: 0x13B4DD8 VA: 0x13B8DD8
	public static string get_systemCopyBuffer() { }

	// RVA: 0x13B8E00 Offset: 0x13B4E00 VA: 0x13B8E00
	public static void set_systemCopyBuffer(string value) { }

	// RVA: 0x13B8E3C Offset: 0x13B4E3C VA: 0x13B8E3C
	private static int Internal_GetControlID(int hint, FocusType focusType, Rect rect) { }

	// RVA: 0x13AC3A8 Offset: 0x13A83A8 VA: 0x13AC3A8
	public static int GetControlID(int hint, FocusType focusType, Rect rect) { }

	// RVA: 0x13B8F2C Offset: 0x13B4F2C VA: 0x13B8F2C
	internal static void BeginContainerFromOwner(ScriptableObject owner) { }

	// RVA: 0x13B8F68 Offset: 0x13B4F68 VA: 0x13B8F68
	internal static void BeginContainer(ObjectGUIState objectGUIState) { }

	// RVA: 0x13B8FA4 Offset: 0x13B4FA4 VA: 0x13B8FA4
	internal static void Internal_EndContainer() { }

	// RVA: 0x13B8FCC Offset: 0x13B4FCC VA: 0x13B8FCC
	internal static int CheckForTabEvent(Event evt) { }

	// RVA: 0x13B9008 Offset: 0x13B5008 VA: 0x13B9008
	internal static void SetKeyboardControlToFirstControlId() { }

	// RVA: 0x13B9030 Offset: 0x13B5030 VA: 0x13B9030
	internal static void SetKeyboardControlToLastControlId() { }

	// RVA: 0x13B9058 Offset: 0x13B5058 VA: 0x13B9058
	internal static bool HasFocusableControls() { }

	// RVA: 0x13B9080 Offset: 0x13B5080 VA: 0x13B9080
	internal static bool OwnsId(int id) { }

	// RVA: 0x13B90BC Offset: 0x13B50BC VA: 0x13B90BC
	public static Rect AlignRectToDevice(Rect rect, out int widthInPixels, out int heightInPixels) { }

	// RVA: 0x13AE4B0 Offset: 0x13AA4B0 VA: 0x13AE4B0
	internal static string get_compositionString() { }

	// RVA: 0x13B91C4 Offset: 0x13B51C4 VA: 0x13B91C4
	internal static void set_imeCompositionMode(IMECompositionMode value) { }

	// RVA: 0x13B9200 Offset: 0x13B5200 VA: 0x13B9200
	internal static void set_compositionCursorPos(Vector2 value) { }

	// RVA: 0x13B92B4 Offset: 0x13B52B4 VA: 0x13B92B4
	private static int Internal_GetHotControl() { }

	// RVA: 0x13B92DC Offset: 0x13B52DC VA: 0x13B92DC
	private static int Internal_GetKeyboardControl() { }

	// RVA: 0x13B9304 Offset: 0x13B5304 VA: 0x13B9304
	private static void Internal_SetHotControl(int value) { }

	// RVA: 0x13B9340 Offset: 0x13B5340 VA: 0x13B9340
	private static void Internal_SetKeyboardControl(int value) { }

	// RVA: 0x13B937C Offset: 0x13B537C VA: 0x13B937C
	private static object Internal_GetDefaultSkin(int skinMode) { }

	// RVA: 0x13B93B8 Offset: 0x13B53B8 VA: 0x13B93B8
	private static void Internal_ExitGUI() { }

	[RequiredByNativeCode]
	// RVA: 0x13B93E0 Offset: 0x13B53E0 VA: 0x13B93E0
	private static void MarkGUIChanged() { }

	// RVA: 0x13ACD2C Offset: 0x13A8D2C VA: 0x13ACD2C
	public static int GetControlID(FocusType focus, Rect position) { }

	// RVA: 0x13AC080 Offset: 0x13A8080 VA: 0x13AC080
	public static int GetControlID(int hint, FocusType focus) { }

	// RVA: 0x13AD2F8 Offset: 0x13A92F8 VA: 0x13AD2F8
	public static object GetStateObject(Type t, int controlID) { }

	[CompilerGenerated]
	// RVA: 0x13B9454 Offset: 0x13B5454 VA: 0x13B9454
	internal static void set_guiIsExiting(bool value) { }

	// RVA: 0x13ACA5C Offset: 0x13A8A5C VA: 0x13ACA5C
	public static int get_hotControl() { }

	// RVA: 0x13AC9E8 Offset: 0x13A89E8 VA: 0x13AC9E8
	public static void set_hotControl(int value) { }

	[RequiredByNativeCode]
	// RVA: 0x13B94B4 Offset: 0x13B54B4 VA: 0x13B94B4
	internal static void TakeCapture() { }

	[RequiredByNativeCode]
	// RVA: 0x13B9528 Offset: 0x13B5528 VA: 0x13B9528
	internal static void RemoveCapture() { }

	// RVA: 0x13AE364 Offset: 0x13AA364 VA: 0x13AE364
	public static int get_keyboardControl() { }

	// RVA: 0x13AE3CC Offset: 0x13AA3CC VA: 0x13AE3CC
	public static void set_keyboardControl(int value) { }

	// RVA: 0x13B8380 Offset: 0x13B4380 VA: 0x13B8380
	internal static bool HasKeyFocus(int controlID) { }

	// RVA: 0x13B959C Offset: 0x13B559C VA: 0x13B959C
	public static void ExitGUI() { }

	// RVA: 0x13AB620 Offset: 0x13A7620 VA: 0x13AB620
	internal static GUISkin GetDefaultSkin() { }

	[RequiredByNativeCode]
	// RVA: 0x13B9690 Offset: 0x13B5690 VA: 0x13B9690
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result) { }

	// RVA: 0x13B986C Offset: 0x13B586C VA: 0x13B986C
	internal static void EndContainer() { }

	[RequiredByNativeCode]
	// RVA: 0x13B98F4 Offset: 0x13B58F4 VA: 0x13B98F4
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout) { }

	[RequiredByNativeCode]
	// RVA: 0x13B9ACC Offset: 0x13B5ACC VA: 0x13B9ACC
	internal static void DestroyGUI(int instanceID) { }

	[RequiredByNativeCode]
	// RVA: 0x13B9B24 Offset: 0x13B5B24 VA: 0x13B9B24
	internal static void EndGUI(int layoutType) { }

	[RequiredByNativeCode]
	// RVA: 0x13B9D50 Offset: 0x13B5D50 VA: 0x13B9D50
	internal static bool EndGUIFromException(Exception exception) { }

	[RequiredByNativeCode]
	// RVA: 0x13B9E18 Offset: 0x13B5E18 VA: 0x13B9E18
	internal static bool EndContainerGUIFromException(Exception exception) { }

	// RVA: 0x13B99A0 Offset: 0x13B59A0 VA: 0x13B99A0
	internal static void ResetGlobalState() { }

	// RVA: 0x13B9ECC Offset: 0x13B5ECC VA: 0x13B9ECC
	internal static bool IsExitGUIException(Exception exception) { }

	// RVA: 0x13B9DC4 Offset: 0x13B5DC4 VA: 0x13B9DC4
	internal static bool ShouldRethrowException(Exception exception) { }

	// RVA: 0x13AB418 Offset: 0x13A7418 VA: 0x13AB418
	internal static void CheckOnGUI() { }

	// RVA: 0x13B9F50 Offset: 0x13B5F50 VA: 0x13B9F50
	internal static float RoundToPixelGrid(float v) { }

	// RVA: 0x13BA000 Offset: 0x13B6000 VA: 0x13BA000
	public static Rect AlignRectToDevice(Rect rect) { }

	// RVA: 0x13BA08C Offset: 0x13B608C VA: 0x13BA08C
	internal static bool HitTest(Rect rect, Vector2 point, int offset) { }

	// RVA: 0x13BA0D8 Offset: 0x13B60D8 VA: 0x13BA0D8
	internal static bool HitTest(Rect rect, Vector2 point, bool isDirectManipulationDevice) { }

	// RVA: 0x13AE98C Offset: 0x13AA98C VA: 0x13AE98C
	internal static bool HitTest(Rect rect, Event evt) { }

	// RVA: 0x13BA198 Offset: 0x13B6198 VA: 0x13BA198
	private static void .cctor() { }

	// RVA: 0x13B8ED8 Offset: 0x13B4ED8 VA: 0x13B8ED8
	private static int Internal_GetControlID_Injected(int hint, FocusType focusType, ref Rect rect) { }

	// RVA: 0x13B9168 Offset: 0x13B5168 VA: 0x13B9168
	private static void AlignRectToDevice_Injected(ref Rect rect, out int widthInPixels, out int heightInPixels, out Rect ret) { }

	// RVA: 0x13B9278 Offset: 0x13B5278 VA: 0x13B9278
	private static void set_compositionCursorPos_Injected(ref Vector2 value) { }
}


// Namespace: UnityEngine
public sealed class ExitGUIException : Exception // TypeDefIndex: 6885
{
	// Methods

	// RVA: 0x13B95D0 Offset: 0x13B55D0 VA: 0x13B95D0
	public void .ctor() { }

	// RVA: 0x13B4C20 Offset: 0x13B0C20 VA: 0x13B4C20
	internal void .ctor(string message) { }
}


// Namespace: UnityEngine
internal class GUILayoutEntry // TypeDefIndex: 6886
{
	// Fields
	public float minWidth; // 0x10
	public float maxWidth; // 0x14
	public float minHeight; // 0x18
	public float maxHeight; // 0x1C
	public Rect rect; // 0x20
	public int stretchWidth; // 0x30
	public int stretchHeight; // 0x34
	public bool consideredForMargin; // 0x38
	private GUIStyle m_Style; // 0x40
	internal static Rect kDummyRect; // 0x0
	protected static int indent; // 0x10

	// Properties
	public GUIStyle style { get; set; }
	public virtual int marginLeft { get; }
	public virtual int marginRight { get; }
	public virtual int marginTop { get; }
	public virtual int marginBottom { get; }
	public int marginHorizontal { get; }
	public int marginVertical { get; }

	// Methods

	// RVA: 0x13BA210 Offset: 0x13B6210 VA: 0x13BA210
	public GUIStyle get_style() { }

	// RVA: 0x13B4060 Offset: 0x13B0060 VA: 0x13B4060
	public void set_style(GUIStyle value) { }

	// RVA: 0x13BA218 Offset: 0x13B6218 VA: 0x13BA218 Slot: 4
	public virtual int get_marginLeft() { }

	// RVA: 0x13BA23C Offset: 0x13B623C VA: 0x13BA23C Slot: 5
	public virtual int get_marginRight() { }

	// RVA: 0x13BA260 Offset: 0x13B6260 VA: 0x13BA260 Slot: 6
	public virtual int get_marginTop() { }

	// RVA: 0x13BA284 Offset: 0x13B6284 VA: 0x13BA284 Slot: 7
	public virtual int get_marginBottom() { }

	// RVA: 0x13BA2A8 Offset: 0x13B62A8 VA: 0x13BA2A8
	public int get_marginHorizontal() { }

	// RVA: 0x13BA2E4 Offset: 0x13B62E4 VA: 0x13BA2E4
	public int get_marginVertical() { }

	// RVA: 0x13BA320 Offset: 0x13B6320 VA: 0x13BA320
	public void .ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle _style) { }

	// RVA: 0x13B51E0 Offset: 0x13B11E0 VA: 0x13B51E0
	public void .ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle _style, GUILayoutOption[] options) { }

	// RVA: 0x13BA3F4 Offset: 0x13B63F4 VA: 0x13BA3F4 Slot: 8
	public virtual void CalcWidth() { }

	// RVA: 0x13BA3F8 Offset: 0x13B63F8 VA: 0x13BA3F8 Slot: 9
	public virtual void CalcHeight() { }

	// RVA: 0x13BA3FC Offset: 0x13B63FC VA: 0x13BA3FC Slot: 10
	public virtual void SetHorizontal(float x, float width) { }

	// RVA: 0x13BA408 Offset: 0x13B6408 VA: 0x13BA408 Slot: 11
	public virtual void SetVertical(float y, float height) { }

	// RVA: 0x13BA414 Offset: 0x13B6414 VA: 0x13BA414 Slot: 12
	protected virtual void ApplyStyleSettings(GUIStyle style) { }

	// RVA: 0x13BA510 Offset: 0x13B6510 VA: 0x13BA510 Slot: 13
	public virtual void ApplyOptions(GUILayoutOption[] options) { }

	// RVA: 0x13BA7E4 Offset: 0x13B67E4 VA: 0x13BA7E4 Slot: 3
	public override string ToString() { }

	// RVA: 0x13BAC84 Offset: 0x13B6C84 VA: 0x13BAC84
	private static void .cctor() { }
}


// Namespace: UnityEngine
internal sealed class GUIWordWrapSizer : GUILayoutEntry // TypeDefIndex: 6887
{
	// Fields
	private readonly GUIContent m_Content; // 0x48
	private readonly float m_ForcedMinHeight; // 0x50
	private readonly float m_ForcedMaxHeight; // 0x54

	// Methods

	// RVA: 0x13B5108 Offset: 0x13B1108 VA: 0x13B5108
	public void .ctor(GUIStyle style, GUIContent content, GUILayoutOption[] options) { }

	// RVA: 0x13BACE0 Offset: 0x13B6CE0 VA: 0x13BACE0 Slot: 8
	public override void CalcWidth() { }

	// RVA: 0x13BAD48 Offset: 0x13B6D48 VA: 0x13BAD48 Slot: 9
	public override void CalcHeight() { }
}


// Namespace: UnityEngine
internal class GUILayoutGroup : GUILayoutEntry // TypeDefIndex: 6888
{
	// Fields
	public List<GUILayoutEntry> entries; // 0x48
	public bool isVertical; // 0x50
	public bool resetCoords; // 0x51
	public float spacing; // 0x54
	public bool sameSize; // 0x58
	public bool isWindow; // 0x59
	public int windowID; // 0x5C
	private int m_Cursor; // 0x60
	protected int m_StretchableCountX; // 0x64
	protected int m_StretchableCountY; // 0x68
	protected bool m_UserSpecifiedWidth; // 0x6C
	protected bool m_UserSpecifiedHeight; // 0x6D
	protected float m_ChildMinWidth; // 0x70
	protected float m_ChildMaxWidth; // 0x74
	protected float m_ChildMinHeight; // 0x78
	protected float m_ChildMaxHeight; // 0x7C
	protected int m_MarginLeft; // 0x80
	protected int m_MarginRight; // 0x84
	protected int m_MarginTop; // 0x88
	protected int m_MarginBottom; // 0x8C
	private static readonly GUILayoutEntry none; // 0x0

	// Properties
	public override int marginLeft { get; }
	public override int marginRight { get; }
	public override int marginTop { get; }
	public override int marginBottom { get; }

	// Methods

	// RVA: 0x13BADE8 Offset: 0x13B6DE8 VA: 0x13BADE8 Slot: 4
	public override int get_marginLeft() { }

	// RVA: 0x13BADF0 Offset: 0x13B6DF0 VA: 0x13BADF0 Slot: 5
	public override int get_marginRight() { }

	// RVA: 0x13BADF8 Offset: 0x13B6DF8 VA: 0x13BADF8 Slot: 6
	public override int get_marginTop() { }

	// RVA: 0x13BAE00 Offset: 0x13B6E00 VA: 0x13BAE00 Slot: 7
	public override int get_marginBottom() { }

	// RVA: 0x13B3DF8 Offset: 0x13AFDF8 VA: 0x13B3DF8
	public void .ctor() { }

	// RVA: 0x13BAE08 Offset: 0x13B6E08 VA: 0x13BAE08 Slot: 13
	public override void ApplyOptions(GUILayoutOption[] options) { }

	// RVA: 0x13BAF28 Offset: 0x13B6F28 VA: 0x13BAF28 Slot: 12
	protected override void ApplyStyleSettings(GUIStyle style) { }

	// RVA: 0x13B4784 Offset: 0x13B0784 VA: 0x13B4784
	public void ResetCursor() { }

	// RVA: 0x13B4930 Offset: 0x13B0930 VA: 0x13B4930
	public GUILayoutEntry GetNext() { }

	// RVA: 0x13B48D8 Offset: 0x13B08D8 VA: 0x13B48D8
	public void Add(GUILayoutEntry e) { }

	// RVA: 0x13BAF9C Offset: 0x13B6F9C VA: 0x13BAF9C Slot: 8
	public override void CalcWidth() { }

	// RVA: 0x13BB690 Offset: 0x13B7690 VA: 0x13BB690 Slot: 10
	public override void SetHorizontal(float x, float width) { }

	// RVA: 0x13BBF38 Offset: 0x13B7F38 VA: 0x13BBF38 Slot: 9
	public override void CalcHeight() { }

	// RVA: 0x13BC57C Offset: 0x13B857C VA: 0x13BC57C Slot: 11
	public override void SetVertical(float y, float height) { }

	// RVA: 0x13BCE30 Offset: 0x13B8E30 VA: 0x13BCE30 Slot: 3
	public override string ToString() { }

	// RVA: 0x13BD1D8 Offset: 0x13B91D8 VA: 0x13BD1D8
	private static void .cctor() { }
}


// Namespace: UnityEngine
internal sealed class GUIScrollGroup : GUILayoutGroup // TypeDefIndex: 6889
{
	// Fields
	public float calcMinWidth; // 0x90
	public float calcMaxWidth; // 0x94
	public float calcMinHeight; // 0x98
	public float calcMaxHeight; // 0x9C
	public float clientWidth; // 0xA0
	public float clientHeight; // 0xA4
	public bool allowHorizontalScroll; // 0xA8
	public bool allowVerticalScroll; // 0xA9
	public bool needsHorizontalScrollbar; // 0xAA
	public bool needsVerticalScrollbar; // 0xAB
	public GUIStyle horizontalScrollbar; // 0xB0
	public GUIStyle verticalScrollbar; // 0xB8

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13BD2A0 Offset: 0x13B92A0 VA: 0x13BD2A0
	public void .ctor() { }

	// RVA: 0x13BD300 Offset: 0x13B9300 VA: 0x13BD300 Slot: 8
	public override void CalcWidth() { }

	// RVA: 0x13BD380 Offset: 0x13B9380 VA: 0x13BD380 Slot: 10
	public override void SetHorizontal(float x, float width) { }

	// RVA: 0x13BD460 Offset: 0x13B9460 VA: 0x13BD460 Slot: 9
	public override void CalcHeight() { }

	// RVA: 0x13BD53C Offset: 0x13B953C VA: 0x13BD53C Slot: 11
	public override void SetVertical(float y, float height) { }
}


// Namespace: UnityEngine
internal class ObjectGUIState : IDisposable // TypeDefIndex: 6890
{
	// Fields
	internal IntPtr m_Ptr; // 0x10

	// Methods

	// RVA: 0x13BD6A8 Offset: 0x13B96A8 VA: 0x13BD6A8
	public void .ctor() { }

	// RVA: 0x13BD718 Offset: 0x13B9718 VA: 0x13BD718 Slot: 4
	public void Dispose() { }

	// RVA: 0x13BD7D4 Offset: 0x13B97D4 VA: 0x13BD7D4 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x13BD778 Offset: 0x13B9778 VA: 0x13BD778
	private void Destroy() { }

	// RVA: 0x13BD6F0 Offset: 0x13B96F0 VA: 0x13BD6F0
	private static IntPtr Internal_Create() { }

	// RVA: 0x13BD868 Offset: 0x13B9868 VA: 0x13BD868
	private static void Internal_Destroy(IntPtr ptr) { }
}


// Namespace: UnityEngine
internal class ScrollViewState // TypeDefIndex: 6891
{
	// Fields
	public Rect position; // 0x10
	public Rect visibleRect; // 0x20
	public Rect viewRect; // 0x30
	public Vector2 scrollPosition; // 0x40
	public bool apply; // 0x48
	public bool isDuringTouchScroll; // 0x49
	public Vector2 touchScrollStartMousePosition; // 0x4C
	public Vector2 touchScrollStartPosition; // 0x54
	public Vector2 velocity; // 0x5C
	public float previousTimeSinceStartup; // 0x64

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13BD8A4 Offset: 0x13B98A4 VA: 0x13BD8A4
	public void .ctor() { }
}


// Namespace: UnityEngine
internal class SliderState // TypeDefIndex: 6892
{
	// Fields
	public float dragStartPos; // 0x10
	public float dragStartValue; // 0x14
	public bool isDragging; // 0x18

	// Methods

	[RequiredByNativeCode]
	// RVA: 0x13BD8AC Offset: 0x13B98AC VA: 0x13BD8AC
	public void .ctor() { }
}


// Namespace: UnityEngine
internal struct SliderHandler // TypeDefIndex: 6893
{
	// Fields
	private readonly Rect position; // 0x0
	private readonly float currentValue; // 0x10
	private readonly float size; // 0x14
	private readonly float start; // 0x18
	private readonly float end; // 0x1C
	private readonly GUIStyle slider; // 0x20
	private readonly GUIStyle thumb; // 0x28
	private readonly GUIStyle thumbExtent; // 0x30
	private readonly bool horiz; // 0x38
	private readonly int id; // 0x3C

	// Methods

	// RVA: 0x13BD8B4 Offset: 0x13B98B4 VA: 0x13BD8B4
	public void .ctor(Rect position, float currentValue, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, GUIStyle thumbExtent) { }

	// RVA: 0x13BD8DC Offset: 0x13B98DC VA: 0x13BD8DC
	public float Handle() { }

	// RVA: 0x13BD984 Offset: 0x13B9984 VA: 0x13BD984
	private float OnMouseDown() { }

	// RVA: 0x13BDD90 Offset: 0x13B9D90 VA: 0x13BDD90
	private float OnMouseDrag() { }

	// RVA: 0x13BDEAC Offset: 0x13B9EAC VA: 0x13BDEAC
	private float OnMouseUp() { }

	// RVA: 0x13BDF48 Offset: 0x13B9F48 VA: 0x13BDF48
	private float OnRepaint() { }

	// RVA: 0x13BD95C Offset: 0x13B995C VA: 0x13BD95C
	private EventType CurrentEventType() { }

	// RVA: 0x13BE6B0 Offset: 0x13BA6B0 VA: 0x13BE6B0
	private int CurrentScrollTroughSide() { }

	// RVA: 0x13BE4B8 Offset: 0x13BA4B8 VA: 0x13BE4B8
	private bool IsEmptySlider() { }

	// RVA: 0x13BE53C Offset: 0x13BA53C VA: 0x13BE53C
	private bool SupportsPageMovements() { }

	// RVA: 0x13BE714 Offset: 0x13BA714 VA: 0x13BE714
	private float PageMovementValue() { }

	// RVA: 0x13BE9B8 Offset: 0x13BA9B8 VA: 0x13BE9B8
	private float PageUpMovementBound() { }

	// RVA: 0x13BE4B0 Offset: 0x13BA4B0 VA: 0x13BE4B0
	private Event CurrentEvent() { }

	// RVA: 0x13BE79C Offset: 0x13BA79C VA: 0x13BE79C
	private float ValueForCurrentMousePosition() { }

	// RVA: 0x13BE810 Offset: 0x13BA810 VA: 0x13BE810
	private float Clamp(float value) { }

	// RVA: 0x13BE4AC Offset: 0x13BA4AC VA: 0x13BE4AC
	private Rect ThumbSelectionRect() { }

	// RVA: 0x13BE4F4 Offset: 0x13BA4F4 VA: 0x13BE4F4
	private void StartDraggingWithValue(float dragStartValue) { }

	// RVA: 0x13BE5AC Offset: 0x13BA5AC VA: 0x13BE5AC
	private SliderState SliderState() { }

	// RVA: 0x13BE930 Offset: 0x13BA930 VA: 0x13BE930
	private Rect ThumbExtRect() { }

	// RVA: 0x13BE9A8 Offset: 0x13BA9A8 VA: 0x13BE9A8
	private Rect ThumbRect() { }

	// RVA: 0x13BEA20 Offset: 0x13BAA20 VA: 0x13BEA20
	private Rect VerticalThumbRect() { }

	// RVA: 0x13BEB40 Offset: 0x13BAB40 VA: 0x13BEB40
	private Rect HorizontalThumbRect() { }

	// RVA: 0x13BE4C8 Offset: 0x13BA4C8 VA: 0x13BE4C8
	private float ClampedCurrentValue() { }

	// RVA: 0x13BE83C Offset: 0x13BA83C VA: 0x13BE83C
	private float MousePosition() { }

	// RVA: 0x13BE888 Offset: 0x13BA888 VA: 0x13BE888
	private float ValuesPerPixel() { }

	// RVA: 0x13BEC60 Offset: 0x13BAC60 VA: 0x13BEC60
	private float ThumbSize() { }

	// RVA: 0x13BEA08 Offset: 0x13BAA08 VA: 0x13BEA08
	private float MaxValue() { }

	// RVA: 0x13BE9F8 Offset: 0x13BA9F8 VA: 0x13BE9F8
	private float MinValue() { }
}


// Namespace: UnityEngine
internal enum TextEditOp // TypeDefIndex: 6894
{
	// Fields
	public int value__; // 0x0
	public const TextEditOp MoveLeft = 0;
	public const TextEditOp MoveRight = 1;
	public const TextEditOp MoveUp = 2;
	public const TextEditOp MoveDown = 3;
	public const TextEditOp MoveLineStart = 4;
	public const TextEditOp MoveLineEnd = 5;
	public const TextEditOp MoveTextStart = 6;
	public const TextEditOp MoveTextEnd = 7;
	public const TextEditOp MovePageUp = 8;
	public const TextEditOp MovePageDown = 9;
	public const TextEditOp MoveGraphicalLineStart = 10;
	public const TextEditOp MoveGraphicalLineEnd = 11;
	public const TextEditOp MoveWordLeft = 12;
	public const TextEditOp MoveWordRight = 13;
	public const TextEditOp MoveParagraphForward = 14;
	public const TextEditOp MoveParagraphBackward = 15;
	public const TextEditOp MoveToStartOfNextWord = 16;
	public const TextEditOp MoveToEndOfPreviousWord = 17;
	public const TextEditOp Delete = 18;
	public const TextEditOp Backspace = 19;
	public const TextEditOp DeleteWordBack = 20;
	public const TextEditOp DeleteWordForward = 21;
	public const TextEditOp DeleteLineBack = 22;
	public const TextEditOp Cut = 23;
	public const TextEditOp Paste = 24;
	public const TextEditOp ScrollStart = 25;
	public const TextEditOp ScrollEnd = 26;
	public const TextEditOp ScrollPageUp = 27;
	public const TextEditOp ScrollPageDown = 28;
}


// Namespace: UnityEngine
internal enum TextSelectOp // TypeDefIndex: 6895
{
	// Fields
	public int value__; // 0x0
	public const TextSelectOp SelectLeft = 0;
	public const TextSelectOp SelectRight = 1;
	public const TextSelectOp SelectUp = 2;
	public const TextSelectOp SelectDown = 3;
	public const TextSelectOp SelectTextStart = 4;
	public const TextSelectOp SelectTextEnd = 5;
	public const TextSelectOp SelectPageUp = 6;
	public const TextSelectOp SelectPageDown = 7;
	public const TextSelectOp ExpandSelectGraphicalLineStart = 8;
	public const TextSelectOp ExpandSelectGraphicalLineEnd = 9;
	public const TextSelectOp SelectGraphicalLineStart = 10;
	public const TextSelectOp SelectGraphicalLineEnd = 11;
	public const TextSelectOp SelectWordLeft = 12;
	public const TextSelectOp SelectWordRight = 13;
	public const TextSelectOp SelectToEndOfPreviousWord = 14;
	public const TextSelectOp SelectToStartOfNextWord = 15;
	public const TextSelectOp SelectParagraphBackward = 16;
	public const TextSelectOp SelectParagraphForward = 17;
	public const TextSelectOp Copy = 18;
	public const TextSelectOp SelectAll = 19;
	public const TextSelectOp SelectNone = 20;
}


// Namespace: UnityEngine
internal class TextEditingUtilities // TypeDefIndex: 6896
{
	// Fields
	private TextSelectingUtilities m_TextSelectingUtility; // 0x10
	private TextHandle m_TextHandle; // 0x18
	private int m_CursorIndexSavedState; // 0x20
	internal bool isCompositionActive; // 0x24
	private bool m_UpdateImeWindowPosition; // 0x25
	public bool multiline; // 0x26
	private string m_Text; // 0x28
	private static Dictionary<Event, TextEditOp> s_KeyEditOps; // 0x0

	// Properties
	private bool hasSelection { get; }
	internal bool revealCursor { set; }
	private int cursorIndex { get; set; }
	private int selectIndex { get; set; }
	public string text { get; set; }

	// Methods

	// RVA: 0x13BECF4 Offset: 0x13BACF4 VA: 0x13BECF4
	private bool get_hasSelection() { }

	// RVA: 0x13BED70 Offset: 0x13BAD70 VA: 0x13BED70
	internal void set_revealCursor(bool value) { }

	// RVA: 0x13BEDE8 Offset: 0x13BADE8 VA: 0x13BEDE8
	private int get_cursorIndex() { }

	// RVA: 0x13BEE0C Offset: 0x13BAE0C VA: 0x13BEE0C
	private void set_cursorIndex(int value) { }

	// RVA: 0x13BEE7C Offset: 0x13BAE7C VA: 0x13BEE7C
	private int get_selectIndex() { }

	// RVA: 0x13BEEA0 Offset: 0x13BAEA0 VA: 0x13BEEA0
	private void set_selectIndex(int value) { }

	// RVA: 0x13BEF10 Offset: 0x13BAF10 VA: 0x13BEF10
	public string get_text() { }

	// RVA: 0x13BEF18 Offset: 0x13BAF18 VA: 0x13BEF18
	public void set_text(string value) { }

	// RVA: 0x13BEF84 Offset: 0x13BAF84 VA: 0x13BEF84
	public void .ctor(TextSelectingUtilities selectingUtilities, TextHandle textHandle, string text) { }

	// RVA: 0x13BEFCC Offset: 0x13BAFCC VA: 0x13BEFCC
	public bool UpdateImeState() { }

	// RVA: 0x13BF10C Offset: 0x13BB10C VA: 0x13BF10C
	public bool ShouldUpdateImeWindowPosition() { }

	// RVA: 0x13BF114 Offset: 0x13BB114 VA: 0x13BF114
	public void SetImeWindowPosition(Vector2 worldPosition) { }

	// RVA: 0x13BF1B8 Offset: 0x13BB1B8 VA: 0x13BF1B8
	public string GeneratePreviewString(bool richText) { }

	// RVA: 0x13BF2F8 Offset: 0x13BB2F8 VA: 0x13BF2F8
	public void EnableCursorPreviewState() { }

	// RVA: 0x13BF2B8 Offset: 0x13BB2B8 VA: 0x13BF2B8
	public void RestoreCursorState() { }

	// RVA: 0x13BF3A4 Offset: 0x13BB3A4 VA: 0x13BF3A4
	internal bool HandleKeyEvent(Event e) { }

	// RVA: 0x13BFAFC Offset: 0x13BBAFC VA: 0x13BFAFC
	private void PerformOperation(TextEditOp operation) { }

	// RVA: 0x13C11E4 Offset: 0x13BD1E4 VA: 0x13C11E4
	private static void MapKey(string key, TextEditOp action) { }

	// RVA: 0x13BF4C4 Offset: 0x13BB4C4 VA: 0x13BF4C4
	private void InitKeyActions() { }

	// RVA: 0x13C1030 Offset: 0x13BD030 VA: 0x13C1030
	public bool DeleteLineBack() { }

	// RVA: 0x13C0F74 Offset: 0x13BCF74 VA: 0x13C0F74
	public bool DeleteWordBack() { }

	// RVA: 0x13C1128 Offset: 0x13BD128 VA: 0x13C1128
	public bool DeleteWordForward() { }

	// RVA: 0x13C0D28 Offset: 0x13BCD28 VA: 0x13C0D28
	public bool Delete() { }

	// RVA: 0x13C0DE4 Offset: 0x13BCDE4 VA: 0x13C0DE4
	public bool Backspace() { }

	// RVA: 0x13C127C Offset: 0x13BD27C VA: 0x13C127C
	public bool DeleteSelection() { }

	// RVA: 0x13BF084 Offset: 0x13BB084 VA: 0x13BF084
	public void ReplaceSelection(string replace) { }

	// RVA: 0x13C189C Offset: 0x13BD89C VA: 0x13C189C
	public void Insert(char c) { }

	// RVA: 0x13C1910 Offset: 0x13BD910 VA: 0x13C1910
	public bool CanPaste() { }

	// RVA: 0x13C0EA0 Offset: 0x13BCEA0 VA: 0x13C0EA0
	public bool Cut() { }

	// RVA: 0x13C0EC4 Offset: 0x13BCEC4 VA: 0x13C0EC4
	public bool Paste() { }

	// RVA: 0x13C1A10 Offset: 0x13BDA10 VA: 0x13C1A10
	private static string ReplaceNewlinesWithSpaces(string value) { }

	// RVA: 0x13C1AA4 Offset: 0x13BDAA4 VA: 0x13C1AA4
	internal void OnBlur() { }

	// RVA: 0x13C1B14 Offset: 0x13BDB14 VA: 0x13C1B14
	internal bool TouchScreenKeyboardShouldBeUsed() { }
}


// Namespace: 
public enum TextEditor.DblClickSnapping // TypeDefIndex: 6897
{
	// Fields
	public byte value__; // 0x0
	public const TextEditor.DblClickSnapping WORDS = 0;
	public const TextEditor.DblClickSnapping PARAGRAPHS = 1;
}


// Namespace: 
private enum TextEditor.CharacterType // TypeDefIndex: 6898
{
	// Fields
	public int value__; // 0x0
	public const TextEditor.CharacterType LetterLike = 0;
	public const TextEditor.CharacterType Symbol = 1;
	public const TextEditor.CharacterType Symbol2 = 2;
	public const TextEditor.CharacterType WhiteSpace = 3;
}


// Namespace: 
private enum TextEditor.Direction // TypeDefIndex: 6899
{
	// Fields
	public int value__; // 0x0
	public const TextEditor.Direction Forward = 0;
	public const TextEditor.Direction Backward = 1;
}


// Namespace: 
private enum TextEditor.TextEditOp // TypeDefIndex: 6900
{
	// Fields
	public int value__; // 0x0
	public const TextEditor.TextEditOp MoveLeft = 0;
	public const TextEditor.TextEditOp MoveRight = 1;
	public const TextEditor.TextEditOp MoveUp = 2;
	public const TextEditor.TextEditOp MoveDown = 3;
	public const TextEditor.TextEditOp MoveLineStart = 4;
	public const TextEditor.TextEditOp MoveLineEnd = 5;
	public const TextEditor.TextEditOp MoveTextStart = 6;
	public const TextEditor.TextEditOp MoveTextEnd = 7;
	public const TextEditor.TextEditOp MovePageUp = 8;
	public const TextEditor.TextEditOp MovePageDown = 9;
	public const TextEditor.TextEditOp MoveGraphicalLineStart = 10;
	public const TextEditor.TextEditOp MoveGraphicalLineEnd = 11;
	public const TextEditor.TextEditOp MoveWordLeft = 12;
	public const TextEditor.TextEditOp MoveWordRight = 13;
	public const TextEditor.TextEditOp MoveParagraphForward = 14;
	public const TextEditor.TextEditOp MoveParagraphBackward = 15;
	public const TextEditor.TextEditOp MoveToStartOfNextWord = 16;
	public const TextEditor.TextEditOp MoveToEndOfPreviousWord = 17;
	public const TextEditor.TextEditOp SelectLeft = 18;
	public const TextEditor.TextEditOp SelectRight = 19;
	public const TextEditor.TextEditOp SelectUp = 20;
	public const TextEditor.TextEditOp SelectDown = 21;
	public const TextEditor.TextEditOp SelectTextStart = 22;
	public const TextEditor.TextEditOp SelectTextEnd = 23;
	public const TextEditor.TextEditOp SelectPageUp = 24;
	public const TextEditor.TextEditOp SelectPageDown = 25;
	public const TextEditor.TextEditOp ExpandSelectGraphicalLineStart = 26;
	public const TextEditor.TextEditOp ExpandSelectGraphicalLineEnd = 27;
	public const TextEditor.TextEditOp SelectGraphicalLineStart = 28;
	public const TextEditor.TextEditOp SelectGraphicalLineEnd = 29;
	public const TextEditor.TextEditOp SelectWordLeft = 30;
	public const TextEditor.TextEditOp SelectWordRight = 31;
	public const TextEditor.TextEditOp SelectToEndOfPreviousWord = 32;
	public const TextEditor.TextEditOp SelectToStartOfNextWord = 33;
	public const TextEditor.TextEditOp SelectParagraphBackward = 34;
	public const TextEditor.TextEditOp SelectParagraphForward = 35;
	public const TextEditor.TextEditOp Delete = 36;
	public const TextEditor.TextEditOp Backspace = 37;
	public const TextEditor.TextEditOp DeleteWordBack = 38;
	public const TextEditor.TextEditOp DeleteWordForward = 39;
	public const TextEditor.TextEditOp DeleteLineBack = 40;
	public const TextEditor.TextEditOp Cut = 41;
	public const TextEditor.TextEditOp Copy = 42;
	public const TextEditor.TextEditOp Paste = 43;
	public const TextEditor.TextEditOp SelectAll = 44;
	public const TextEditor.TextEditOp SelectNone = 45;
	public const TextEditor.TextEditOp ScrollStart = 46;
	public const TextEditor.TextEditOp ScrollEnd = 47;
	public const TextEditor.TextEditOp ScrollPageUp = 48;
	public const TextEditor.TextEditOp ScrollPageDown = 49;
}


// Namespace: UnityEngine
public class TextEditor // TypeDefIndex: 6901
{
	// Fields
	public TouchScreenKeyboard keyboardOnScreen; // 0x10
	public int controlID; // 0x18
	public GUIStyle style; // 0x20
	public bool multiline; // 0x28
	public bool hasHorizontalCursorPos; // 0x29
	public bool isPasswordField; // 0x2A
	internal bool m_HasFocus; // 0x2B
	public Vector2 scrollOffset; // 0x2C
	private GUIContent m_Content; // 0x38
	private Rect m_Position; // 0x40
	private int m_CursorIndex; // 0x50
	private int m_SelectIndex; // 0x54
	private bool m_RevealCursor; // 0x58
	public Vector2 graphicalCursorPos; // 0x5C
	public Vector2 graphicalSelectCursorPos; // 0x64
	private bool m_MouseDragSelectsWholeWords; // 0x6C
	private int m_DblClickInitPos; // 0x70
	private TextEditor.DblClickSnapping m_DblClickSnap; // 0x74
	private bool m_bJustSelected; // 0x75
	private int m_iAltCursorPos; // 0x78
	private string oldText; // 0x80
	private int oldPos; // 0x88
	private int oldSelectPos; // 0x8C
	private static Dictionary<Event, TextEditor.TextEditOp> s_Keyactions; // 0x0

	// Properties
	public string text { get; set; }
	public Rect position { get; set; }
	internal virtual Rect localPosition { get; }
	public int cursorIndex { get; set; }
	public int selectIndex { get; set; }
	public bool hasSelection { get; }

	// Methods

	// RVA: 0x13C1B9C Offset: 0x13BDB9C VA: 0x13C1B9C
	public string get_text() { }

	// RVA: 0x13C1BB8 Offset: 0x13BDBB8 VA: 0x13C1BB8
	public void set_text(string value) { }

	// RVA: 0x13C1C78 Offset: 0x13BDC78 VA: 0x13C1C78
	public Rect get_position() { }

	// RVA: 0x13C1C84 Offset: 0x13BDC84 VA: 0x13C1C84
	public void set_position(Rect value) { }

	// RVA: 0x13C1FE8 Offset: 0x13BDFE8 VA: 0x13C1FE8 Slot: 4
	internal virtual Rect get_localPosition() { }

	// RVA: 0x13C1FF4 Offset: 0x13BDFF4 VA: 0x13C1FF4
	public int get_cursorIndex() { }

	// RVA: 0x13C1FFC Offset: 0x13BDFFC VA: 0x13C1FFC
	public void set_cursorIndex(int value) { }

	// RVA: 0x13C2054 Offset: 0x13BE054 VA: 0x13C2054
	public int get_selectIndex() { }

	// RVA: 0x13C205C Offset: 0x13BE05C VA: 0x13C205C
	public void set_selectIndex(int value) { }

	// RVA: 0x13C20AC Offset: 0x13BE0AC VA: 0x13C20AC
	private void ClearCursorPos() { }

	[RequiredByNativeCode]
	// RVA: 0x13C20BC Offset: 0x13BE0BC VA: 0x13C20BC
	public void .ctor() { }

	// RVA: 0x13C21B0 Offset: 0x13BE1B0 VA: 0x13C21B0
	public void OnFocus() { }

	// RVA: 0x13C223C Offset: 0x13BE23C VA: 0x13C223C
	public void OnLostFocus() { }

	// RVA: 0x13C2290 Offset: 0x13BE290 VA: 0x13C2290
	private void GrabGraphicalCursorPos() { }

	// RVA: 0x13C2314 Offset: 0x13BE314 VA: 0x13C2314
	public bool HandleKeyEvent(Event e) { }

	// RVA: 0x13C231C Offset: 0x13BE31C VA: 0x13C231C
	internal bool HandleKeyEvent(Event e, bool textIsReadOnly) { }

	// RVA: 0x13C3234 Offset: 0x13BF234 VA: 0x13C3234
	public bool DeleteLineBack() { }

	// RVA: 0x13C34B8 Offset: 0x13BF4B8 VA: 0x13C34B8
	public bool DeleteWordBack() { }

	// RVA: 0x13C3630 Offset: 0x13BF630 VA: 0x13C3630
	public bool DeleteWordForward() { }

	// RVA: 0x13C38A8 Offset: 0x13BF8A8 VA: 0x13C38A8
	public bool Delete() { }

	// RVA: 0x13C3A50 Offset: 0x13BFA50 VA: 0x13C3A50
	public bool Backspace() { }

	// RVA: 0x13C21F4 Offset: 0x13BE1F4 VA: 0x13C21F4
	public void SelectAll() { }

	// RVA: 0x13C3BC4 Offset: 0x13BFBC4 VA: 0x13C3BC4
	public void SelectNone() { }

	// RVA: 0x13C330C Offset: 0x13BF30C VA: 0x13C330C
	public bool get_hasSelection() { }

	// RVA: 0x13C331C Offset: 0x13BF31C VA: 0x13C331C
	public bool DeleteSelection() { }

	// RVA: 0x13C3BE8 Offset: 0x13BFBE8 VA: 0x13C3BE8
	public void ReplaceSelection(string replace) { }

	// RVA: 0x13C3C78 Offset: 0x13BFC78 VA: 0x13C3C78
	public void Insert(char c) { }

	// RVA: 0x13C3CEC Offset: 0x13BFCEC VA: 0x13C3CEC
	public void MoveRight() { }

	// RVA: 0x13C3D64 Offset: 0x13BFD64 VA: 0x13C3D64
	public void MoveLeft() { }

	// RVA: 0x13C3DBC Offset: 0x13BFDBC VA: 0x13C3DBC
	public void MoveUp() { }

	// RVA: 0x13C3E6C Offset: 0x13BFE6C VA: 0x13C3E6C
	public void MoveDown() { }

	// RVA: 0x13C3F50 Offset: 0x13BFF50 VA: 0x13C3F50
	public void MoveLineStart() { }

	// RVA: 0x13C3FC8 Offset: 0x13BFFC8 VA: 0x13C3FC8
	public void MoveLineEnd() { }

	// RVA: 0x13C4064 Offset: 0x13C0064 VA: 0x13C4064
	public void MoveGraphicalLineStart() { }

	// RVA: 0x13C417C Offset: 0x13C017C VA: 0x13C417C
	public void MoveGraphicalLineEnd() { }

	// RVA: 0x13C42A8 Offset: 0x13C02A8 VA: 0x13C42A8
	public void MoveTextStart() { }

	// RVA: 0x13C42C8 Offset: 0x13C02C8 VA: 0x13C42C8
	public void MoveTextEnd() { }

	// RVA: 0x13C4310 Offset: 0x13C0310 VA: 0x13C4310
	private int IndexOfEndOfLine(int startIndex) { }

	// RVA: 0x13C4374 Offset: 0x13C0374 VA: 0x13C4374
	public void MoveParagraphForward() { }

	// RVA: 0x13C43F8 Offset: 0x13C03F8 VA: 0x13C43F8
	public void MoveParagraphBackward() { }

	// RVA: 0x13C4478 Offset: 0x13C0478 VA: 0x13C4478
	public void MoveCursorToPosition(Vector2 cursorPosition) { }

	// RVA: 0x13C44C0 Offset: 0x13C04C0 VA: 0x13C44C0
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift) { }

	// RVA: 0x13C4548 Offset: 0x13C0548 VA: 0x13C4548
	public void SelectToPosition(Vector2 cursorPosition) { }

	// RVA: 0x13C490C Offset: 0x13C090C VA: 0x13C490C
	public void SelectLeft() { }

	// RVA: 0x13C4964 Offset: 0x13C0964 VA: 0x13C4964
	public void SelectRight() { }

	// RVA: 0x13C49BC Offset: 0x13C09BC VA: 0x13C49BC
	public void SelectUp() { }

	// RVA: 0x13C4A20 Offset: 0x13C0A20 VA: 0x13C4A20
	public void SelectDown() { }

	// RVA: 0x13C4AA0 Offset: 0x13C0AA0 VA: 0x13C4AA0
	public void SelectTextEnd() { }

	// RVA: 0x13C4AD0 Offset: 0x13C0AD0 VA: 0x13C4AD0
	public void SelectTextStart() { }

	// RVA: 0x13C4AD8 Offset: 0x13C0AD8 VA: 0x13C4AD8
	public void MouseDragSelectsWholeWords(bool on) { }

	// RVA: 0x13C4AEC Offset: 0x13C0AEC VA: 0x13C4AEC
	public void DblClickSnap(TextEditor.DblClickSnapping snapping) { }

	// RVA: 0x13C40A4 Offset: 0x13C00A4 VA: 0x13C40A4
	private int GetGraphicalLineStart(int p) { }

	// RVA: 0x13C41BC Offset: 0x13C01BC VA: 0x13C41BC
	private int GetGraphicalLineEnd(int p) { }

	// RVA: 0x13C4AF4 Offset: 0x13C0AF4 VA: 0x13C4AF4
	private int FindNextSeperator(int startPos) { }

	// RVA: 0x13C4C94 Offset: 0x13C0C94 VA: 0x13C4C94
	private int FindPrevSeperator(int startPos) { }

	// RVA: 0x13C4D30 Offset: 0x13C0D30 VA: 0x13C4D30
	public void MoveWordRight() { }

	// RVA: 0x13C4D8C Offset: 0x13C0D8C VA: 0x13C4D8C
	public void MoveToStartOfNextWord() { }

	// RVA: 0x13C4DEC Offset: 0x13C0DEC VA: 0x13C4DEC
	public void MoveToEndOfPreviousWord() { }

	// RVA: 0x13C4E4C Offset: 0x13C0E4C VA: 0x13C4E4C
	public void SelectToStartOfNextWord() { }

	// RVA: 0x13C4E78 Offset: 0x13C0E78 VA: 0x13C4E78
	public void SelectToEndOfPreviousWord() { }

	// RVA: 0x13C4B8C Offset: 0x13C0B8C VA: 0x13C4B8C
	private TextEditor.CharacterType ClassifyChar(int index) { }

	// RVA: 0x13C36DC Offset: 0x13BF6DC VA: 0x13C36DC
	public int FindStartOfNextWord(int p) { }

	// RVA: 0x13C3564 Offset: 0x13BF564 VA: 0x13C3564
	private int FindEndOfPreviousWord(int p) { }

	// RVA: 0x13C4EA4 Offset: 0x13C0EA4 VA: 0x13C4EA4
	public void MoveWordLeft() { }

	// RVA: 0x13C4EE4 Offset: 0x13C0EE4 VA: 0x13C4EE4
	public void SelectWordRight() { }

	// RVA: 0x13C4F4C Offset: 0x13C0F4C VA: 0x13C4F4C
	public void SelectWordLeft() { }

	// RVA: 0x13C4FB4 Offset: 0x13C0FB4 VA: 0x13C4FB4
	public void ExpandSelectGraphicalLineStart() { }

	// RVA: 0x13C5018 Offset: 0x13C1018 VA: 0x13C5018
	public void ExpandSelectGraphicalLineEnd() { }

	// RVA: 0x13C507C Offset: 0x13C107C VA: 0x13C507C
	public void SelectGraphicalLineStart() { }

	// RVA: 0x13C50A8 Offset: 0x13C10A8 VA: 0x13C50A8
	public void SelectGraphicalLineEnd() { }

	// RVA: 0x13C50D4 Offset: 0x13C10D4 VA: 0x13C50D4
	public void SelectParagraphForward() { }

	// RVA: 0x13C5160 Offset: 0x13C1160 VA: 0x13C5160
	public void SelectParagraphBackward() { }

	// RVA: 0x13C5210 Offset: 0x13C1210 VA: 0x13C5210
	public void SelectCurrentWord() { }

	// RVA: 0x13C4790 Offset: 0x13C0790 VA: 0x13C4790
	private int FindEndOfClassification(int p, TextEditor.Direction dir) { }

	// RVA: 0x13C527C Offset: 0x13C127C VA: 0x13C527C
	public void SelectCurrentParagraph() { }

	// RVA: 0x13C5314 Offset: 0x13C1314 VA: 0x13C5314
	public void UpdateScrollOffsetIfNeeded(Event evt) { }

	// RVA: 0x13C1D44 Offset: 0x13BDD44 VA: 0x13C1D44
	internal void UpdateScrollOffset() { }

	// RVA: 0x13C5370 Offset: 0x13C1370 VA: 0x13C5370
	public void DrawCursor(string newText) { }

	// RVA: 0x13C2E5C Offset: 0x13BEE5C VA: 0x13C2E5C
	private bool PerformOperation(TextEditor.TextEditOp operation, bool textIsReadOnly) { }

	// RVA: 0x13C5888 Offset: 0x13C1888 VA: 0x13C5888
	public void SaveBackup() { }

	// RVA: 0x13C5704 Offset: 0x13C1704 VA: 0x13C5704
	public bool Cut() { }

	// RVA: 0x13C5730 Offset: 0x13C1730 VA: 0x13C5730
	public void Copy() { }

	// RVA: 0x13C58B8 Offset: 0x13C18B8 VA: 0x13C58B8
	private static string ReplaceNewlinesWithSpaces(string value) { }

	// RVA: 0x13C57E0 Offset: 0x13C17E0 VA: 0x13C57E0
	public bool Paste() { }

	// RVA: 0x13C594C Offset: 0x13C194C VA: 0x13C594C
	private static void MapKey(string key, TextEditor.TextEditOp action) { }

	// RVA: 0x13C243C Offset: 0x13BE43C VA: 0x13C243C
	private void InitKeyActions() { }

	// RVA: 0x13C3D58 Offset: 0x13BFD58 VA: 0x13C3D58
	public void DetectFocusChange() { }

	// RVA: 0x13C59E4 Offset: 0x13C19E4 VA: 0x13C59E4 Slot: 5
	internal virtual void OnDetectFocusChange() { }

	// RVA: 0x13C5A94 Offset: 0x13C1A94 VA: 0x13C5A94 Slot: 6
	internal virtual void OnCursorIndexChange() { }

	// RVA: 0x13C5A98 Offset: 0x13C1A98 VA: 0x13C5A98 Slot: 7
	internal virtual void OnSelectIndexChange() { }

	// RVA: 0x13C5A9C Offset: 0x13C1A9C VA: 0x13C5A9C
	private void ClampTextIndex(ref int index) { }

	// RVA: 0x13C1C38 Offset: 0x13BDC38 VA: 0x13C1C38
	private void EnsureValidCodePointIndex(ref int index) { }

	// RVA: 0x13C5AE8 Offset: 0x13C1AE8 VA: 0x13C5AE8
	private bool IsValidCodePointIndex(int index) { }

	// RVA: 0x13C3B04 Offset: 0x13BFB04 VA: 0x13C3B04
	private int PreviousCodePointIndex(int index) { }

	// RVA: 0x13C3964 Offset: 0x13BF964 VA: 0x13C3964
	private int NextCodePointIndex(int index) { }
}


// Namespace: 
private enum TextSelectingUtilities.CharacterType // TypeDefIndex: 6902
{
	// Fields
	public int value__; // 0x0
	public const TextSelectingUtilities.CharacterType LetterLike = 0;
	public const TextSelectingUtilities.CharacterType Symbol = 1;
	public const TextSelectingUtilities.CharacterType Symbol2 = 2;
	public const TextSelectingUtilities.CharacterType WhiteSpace = 3;
	public const TextSelectingUtilities.CharacterType NewLine = 4;
}


// Namespace: 
private enum TextSelectingUtilities.Direction // TypeDefIndex: 6903
{
	// Fields
	public int value__; // 0x0
	public const TextSelectingUtilities.Direction Forward = 0;
	public const TextSelectingUtilities.Direction Backward = 1;
}


// Namespace: UnityEngine
internal class TextSelectingUtilities // TypeDefIndex: 6904
{
	// Fields
	public TextEditor.DblClickSnapping dblClickSnap; // 0x10
	public int iAltCursorPos; // 0x14
	public bool hasHorizontalCursorPos; // 0x18
	private bool m_bJustSelected; // 0x19
	private bool m_MouseDragSelectsWholeWords; // 0x1A
	private int m_DblClickInitPosStart; // 0x1C
	private int m_DblClickInitPosEnd; // 0x20
	private TextHandle m_TextHandle; // 0x28
	private const int kMoveDownHeight = 5;
	private const char kNewLineChar = '\xa';
	private bool m_RevealCursor; // 0x30
	private int m_CursorIndex; // 0x34
	internal int m_SelectIndex; // 0x38
	private static Dictionary<Event, TextSelectOp> s_KeySelectOps; // 0x0
	internal Action OnCursorIndexChange; // 0x40
	internal Action OnSelectIndexChange; // 0x48
	internal Action OnRevealCursorChange; // 0x50

	// Properties
	public bool hasSelection { get; }
	public bool revealCursor { get; set; }
	private int m_CharacterCount { get; }
	private int characterCount { get; }
	private TextElementInfo[] m_TextElementInfos { get; }
	public int cursorIndex { get; set; }
	public int selectIndex { get; set; }
	public string selectedText { get; }

	// Methods

	// RVA: 0x13BED38 Offset: 0x13BAD38 VA: 0x13BED38
	public bool get_hasSelection() { }

	// RVA: 0x13C5BD4 Offset: 0x13C1BD4 VA: 0x13C5BD4
	public bool get_revealCursor() { }

	// RVA: 0x13BEDB8 Offset: 0x13BADB8 VA: 0x13BEDB8
	public void set_revealCursor(bool value) { }

	// RVA: 0x13C5BDC Offset: 0x13C1BDC VA: 0x13C5BDC
	private int get_m_CharacterCount() { }

	// RVA: 0x13C5C04 Offset: 0x13C1C04 VA: 0x13C5C04
	private int get_characterCount() { }

	// RVA: 0x13C5C98 Offset: 0x13C1C98 VA: 0x13C5C98
	private TextElementInfo[] get_m_TextElementInfos() { }

	// RVA: 0x13BEE04 Offset: 0x13BAE04 VA: 0x13BEE04
	public int get_cursorIndex() { }

	// RVA: 0x13BEE50 Offset: 0x13BAE50 VA: 0x13BEE50
	public void set_cursorIndex(int value) { }

	// RVA: 0x13C187C Offset: 0x13BD87C VA: 0x13C187C
	internal void SetCursorIndexWithoutNotify(int index) { }

	// RVA: 0x13BEE98 Offset: 0x13BAE98 VA: 0x13BEE98
	public int get_selectIndex() { }

	// RVA: 0x13BEEE4 Offset: 0x13BAEE4 VA: 0x13BEEE4
	public void set_selectIndex(int value) { }

	// RVA: 0x13C1884 Offset: 0x13BD884 VA: 0x13C1884
	internal void SetSelectIndexWithoutNotify(int index) { }

	// RVA: 0x13C5D18 Offset: 0x13C1D18 VA: 0x13C5D18
	public string get_selectedText() { }

	// RVA: 0x13C5E28 Offset: 0x13C1E28 VA: 0x13C5E28
	public void .ctor(TextHandle textHandle) { }

	// RVA: 0x13C5E70 Offset: 0x13C1E70 VA: 0x13C5E70
	internal bool HandleKeyEvent(Event e) { }

	// RVA: 0x13C638C Offset: 0x13C238C VA: 0x13C638C
	private bool PerformOperation(TextSelectOp operation) { }

	// RVA: 0x13C7140 Offset: 0x13C3140 VA: 0x13C7140
	private static void MapKey(string key, TextSelectOp action) { }

	// RVA: 0x13C5F88 Offset: 0x13C1F88 VA: 0x13C5F88
	private void InitKeyActions() { }

	// RVA: 0x13C188C Offset: 0x13BD88C VA: 0x13C188C
	public void ClearCursorPos() { }

	// RVA: 0x13C71D8 Offset: 0x13C31D8 VA: 0x13C71D8
	public void OnFocus(bool selectAll = True) { }

	// RVA: 0x13C70D4 Offset: 0x13C30D4 VA: 0x13C70D4
	public void SelectAll() { }

	// RVA: 0x13C1AC8 Offset: 0x13BDAC8 VA: 0x13C1AC8
	public void SelectNone() { }

	// RVA: 0x13C657C Offset: 0x13C257C VA: 0x13C657C
	public void SelectLeft() { }

	// RVA: 0x13C6678 Offset: 0x13C2678 VA: 0x13C6678
	public void SelectRight() { }

	// RVA: 0x13C6774 Offset: 0x13C2774 VA: 0x13C6774
	public void SelectUp() { }

	// RVA: 0x13C67E0 Offset: 0x13C27E0 VA: 0x13C67E0
	public void SelectDown() { }

	// RVA: 0x13C6B8C Offset: 0x13C2B8C VA: 0x13C6B8C
	public void SelectTextEnd() { }

	// RVA: 0x13C6B64 Offset: 0x13C2B64 VA: 0x13C6B64
	public void SelectTextStart() { }

	// RVA: 0x13C6B08 Offset: 0x13C2B08 VA: 0x13C6B08
	public void SelectToStartOfNextWord() { }

	// RVA: 0x13C6AAC Offset: 0x13C2AAC VA: 0x13C6AAC
	public void SelectToEndOfPreviousWord() { }

	// RVA: 0x13C684C Offset: 0x13C284C VA: 0x13C684C
	public void SelectWordRight() { }

	// RVA: 0x13C697C Offset: 0x13C297C VA: 0x13C697C
	public void SelectWordLeft() { }

	// RVA: 0x13C701C Offset: 0x13C301C VA: 0x13C701C
	public void SelectGraphicalLineStart() { }

	// RVA: 0x13C7078 Offset: 0x13C3078 VA: 0x13C7078
	public void SelectGraphicalLineEnd() { }

	// RVA: 0x13C6DAC Offset: 0x13C2DAC VA: 0x13C6DAC
	public void SelectParagraphForward() { }

	// RVA: 0x13C6EC0 Offset: 0x13C2EC0 VA: 0x13C6EC0
	public void SelectParagraphBackward() { }

	// RVA: 0x13C73C4 Offset: 0x13C33C4 VA: 0x13C73C4
	public void SelectCurrentWord() { }

	// RVA: 0x13C7618 Offset: 0x13C3618 VA: 0x13C7618
	public void SelectCurrentParagraph() { }

	// RVA: 0x13BFF10 Offset: 0x13BBF10 VA: 0x13BFF10
	public void MoveRight() { }

	// RVA: 0x13BFE04 Offset: 0x13BBE04 VA: 0x13BFE04
	public void MoveLeft() { }

	// RVA: 0x13C0024 Offset: 0x13BC024 VA: 0x13C0024
	public void MoveUp() { }

	// RVA: 0x13C0158 Offset: 0x13BC158 VA: 0x13C0158
	public void MoveDown() { }

	// RVA: 0x13C0298 Offset: 0x13BC298 VA: 0x13C0298
	public void MoveLineStart() { }

	// RVA: 0x13C03CC Offset: 0x13BC3CC VA: 0x13C03CC
	public void MoveLineEnd() { }

	// RVA: 0x13C0BC0 Offset: 0x13BCBC0 VA: 0x13C0BC0
	public void MoveGraphicalLineStart() { }

	// RVA: 0x13C0C74 Offset: 0x13BCC74 VA: 0x13C0C74
	public void MoveGraphicalLineEnd() { }

	// RVA: 0x13C0890 Offset: 0x13BC890 VA: 0x13C0890
	public void MoveTextStart() { }

	// RVA: 0x13C08EC Offset: 0x13BC8EC VA: 0x13C08EC
	public void MoveTextEnd() { }

	// RVA: 0x13C0964 Offset: 0x13BC964 VA: 0x13C0964
	public void MoveParagraphForward() { }

	// RVA: 0x13C0A70 Offset: 0x13BCA70 VA: 0x13C0A70
	public void MoveParagraphBackward() { }

	// RVA: 0x13C0518 Offset: 0x13BC518 VA: 0x13C0518
	public void MoveWordRight() { }

	// RVA: 0x13C0608 Offset: 0x13BC608 VA: 0x13C0608
	public void MoveToStartOfNextWord() { }

	// RVA: 0x13C06D0 Offset: 0x13BC6D0 VA: 0x13C06D0
	public void MoveToEndOfPreviousWord() { }

	// RVA: 0x13C0798 Offset: 0x13BC798 VA: 0x13C0798
	public void MoveWordLeft() { }

	// RVA: 0x13C7828 Offset: 0x13C3828 VA: 0x13C7828
	public void MouseDragSelectsWholeWords(bool on) { }

	// RVA: 0x13C6BCC Offset: 0x13C2BCC VA: 0x13C6BCC
	public void ExpandSelectGraphicalLineStart() { }

	// RVA: 0x13C6CBC Offset: 0x13C2CBC VA: 0x13C6CBC
	public void ExpandSelectGraphicalLineEnd() { }

	// RVA: 0x13C78C0 Offset: 0x13C38C0 VA: 0x13C78C0
	public void DblClickSnap(TextEditor.DblClickSnapping snapping) { }

	// RVA: 0x13C78C8 Offset: 0x13C38C8 VA: 0x13C78C8
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift) { }

	// RVA: 0x13C7964 Offset: 0x13C3964 VA: 0x13C7964
	public void SelectToPosition(Vector2 cursorPosition) { }

	// RVA: 0x13C7708 Offset: 0x13C3708 VA: 0x13C7708
	private int FindNextSeperator(int startPos) { }

	// RVA: 0x13C778C Offset: 0x13C378C VA: 0x13C778C
	private int FindPrevSeperator(int startPos) { }

	// RVA: 0x13C1500 Offset: 0x13BD500 VA: 0x13C1500
	public int FindStartOfNextWord(int p) { }

	// RVA: 0x13C1424 Offset: 0x13BD424 VA: 0x13C1424
	public int FindEndOfPreviousWord(int p) { }

	// RVA: 0x13C74D4 Offset: 0x13C34D4 VA: 0x13C74D4
	private int FindEndOfClassification(int p, TextSelectingUtilities.Direction dir) { }

	// RVA: 0x13C7D7C Offset: 0x13C3D7C VA: 0x13C7D7C
	private int ClampTextIndex(int index) { }

	// RVA: 0x13C5CC0 Offset: 0x13C1CC0 VA: 0x13C5CC0
	internal int EnsureValidCodePointIndex(int index) { }

	// RVA: 0x13C7DA0 Offset: 0x13C3DA0 VA: 0x13C7DA0
	private bool IsValidCodePointIndex(int index) { }

	// RVA: 0x13C7384 Offset: 0x13C3384 VA: 0x13C7384
	private int IndexOfEndOfLine(int startIndex) { }

	// RVA: 0x13C17A4 Offset: 0x13BD7A4 VA: 0x13C17A4
	public int PreviousCodePointIndex(int index) { }

	// RVA: 0x13C16C4 Offset: 0x13BD6C4 VA: 0x13C16C4
	public int NextCodePointIndex(int index) { }

	// RVA: 0x13C7224 Offset: 0x13C3224 VA: 0x13C7224
	private int GetGraphicalLineStart(int p) { }

	// RVA: 0x13C72D0 Offset: 0x13C32D0 VA: 0x13C72D0
	private int GetGraphicalLineEnd(int p) { }

	// RVA: 0x13C1978 Offset: 0x13BD978 VA: 0x13C1978
	public void Copy() { }

	// RVA: 0x13C7C70 Offset: 0x13C3C70 VA: 0x13C7C70
	private TextSelectingUtilities.CharacterType ClassifyChar(int index) { }
}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 6905
{
	// Methods

	// RVA: 0x13C7E70 Offset: 0x13C3E70 VA: 0x13C7E70
	internal static uint ComputeStringHash(string s) { }
}
