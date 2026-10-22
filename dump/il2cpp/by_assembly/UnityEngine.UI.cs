// Namespace: 
internal class <Module> // TypeDefIndex: 6362
{}


// Namespace: UnityEngine.UI
[Serializable]
public class AnimationTriggers // TypeDefIndex: 6363
{
	// Fields
	private const string kDefaultNormalAnimName = "Normal";
	private const string kDefaultHighlightedAnimName = "Highlighted";
	private const string kDefaultPressedAnimName = "Pressed";
	private const string kDefaultSelectedAnimName = "Selected";
	private const string kDefaultDisabledAnimName = "Disabled";
	[FormerlySerializedAs("normalTrigger")]
	[SerializeField]
	private string m_NormalTrigger; // 0x10
	[FormerlySerializedAs("highlightedTrigger")]
	[SerializeField]
	private string m_HighlightedTrigger; // 0x18
	[SerializeField]
	[FormerlySerializedAs("pressedTrigger")]
	private string m_PressedTrigger; // 0x20
	[FormerlySerializedAs("m_HighlightedTrigger")]
	[SerializeField]
	private string m_SelectedTrigger; // 0x28
	[FormerlySerializedAs("disabledTrigger")]
	[SerializeField]
	private string m_DisabledTrigger; // 0x30

	// Properties
	public string normalTrigger { get; }
	public string highlightedTrigger { get; }
	public string pressedTrigger { get; }
	public string selectedTrigger { get; }
	public string disabledTrigger { get; }

	// Methods

	// RVA: 0x144D4F8 Offset: 0x14494F8 VA: 0x144D4F8
	public string get_normalTrigger() { }

	// RVA: 0x144D500 Offset: 0x1449500 VA: 0x144D500
	public string get_highlightedTrigger() { }

	// RVA: 0x144D508 Offset: 0x1449508 VA: 0x144D508
	public string get_pressedTrigger() { }

	// RVA: 0x144D510 Offset: 0x1449510 VA: 0x144D510
	public string get_selectedTrigger() { }

	// RVA: 0x144D518 Offset: 0x1449518 VA: 0x144D518
	public string get_disabledTrigger() { }

	// RVA: 0x144D520 Offset: 0x1449520 VA: 0x144D520
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class Button.ButtonClickedEvent : UnityEvent // TypeDefIndex: 6364
{
	// Methods

	// RVA: 0x144D674 Offset: 0x1449674 VA: 0x144D674
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Button.<OnFinishSubmit>d__9 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6365
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public Button <>4__this; // 0x20
	private float <fadeTime>5__2; // 0x28
	private float <elapsedTime>5__3; // 0x2C

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x144D820 Offset: 0x1449820 VA: 0x144D820
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x144D848 Offset: 0x1449848 VA: 0x144D848 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x144D84C Offset: 0x144984C VA: 0x144D84C Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x144D940 Offset: 0x1449940 VA: 0x144D940 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x144D948 Offset: 0x1449948 VA: 0x144D948 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x144D980 Offset: 0x1449980 VA: 0x144D980 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: UnityEngine.UI
public class Button : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler // TypeDefIndex: 6366
{
	// Fields
	[FormerlySerializedAs("onClick")]
	[SerializeField]
	private Button.ButtonClickedEvent m_OnClick; // 0x100

	// Properties
	public Button.ButtonClickedEvent onClick { get; set; }

	// Methods

	// RVA: 0x144D5E8 Offset: 0x14495E8 VA: 0x144D5E8
	protected void .ctor() { }

	// RVA: 0x144D67C Offset: 0x144967C VA: 0x144D67C
	public Button.ButtonClickedEvent get_onClick() { }

	// RVA: 0x144D684 Offset: 0x1449684 VA: 0x144D684
	public void set_onClick(Button.ButtonClickedEvent value) { }

	// RVA: 0x144D68C Offset: 0x144968C VA: 0x144D68C
	private void Press() { }

	// RVA: 0x144D724 Offset: 0x1449724 VA: 0x144D724 Slot: 41
	public virtual void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x144D748 Offset: 0x1449748 VA: 0x144D748 Slot: 42
	public virtual void OnSubmit(BaseEventData eventData) { }

	// RVA: 0x144D7C0 Offset: 0x14497C0 VA: 0x144D7C0
	private IEnumerator OnFinishSubmit() { }
}


// Namespace: UnityEngine.UI
public enum CanvasUpdate // TypeDefIndex: 6367
{
	// Fields
	public int value__; // 0x0
	public const CanvasUpdate Prelayout = 0;
	public const CanvasUpdate Layout = 1;
	public const CanvasUpdate PostLayout = 2;
	public const CanvasUpdate PreRender = 3;
	public const CanvasUpdate LatePreRender = 4;
	public const CanvasUpdate MaxUpdateValue = 5;
}


// Namespace: UnityEngine.UI
public interface ICanvasElement // TypeDefIndex: 6368
{
	// Properties
	public abstract Transform transform { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Rebuild(CanvasUpdate executing);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Transform get_transform();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void LayoutComplete();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void GraphicUpdateComplete();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool IsDestroyed();
}


// Namespace: UnityEngine.UI
public class CanvasUpdateRegistry // TypeDefIndex: 6369
{
	// Fields
	private static CanvasUpdateRegistry s_Instance; // 0x0
	private bool m_PerformingLayoutUpdate; // 0x10
	private bool m_PerformingGraphicUpdate; // 0x11
	private string[] m_CanvasUpdateProfilerStrings; // 0x18
	private readonly IndexedSet<ICanvasElement> m_LayoutRebuildQueue; // 0x20
	private readonly IndexedSet<ICanvasElement> m_GraphicRebuildQueue; // 0x28
	private static readonly Comparison<ICanvasElement> s_SortLayoutFunction; // 0x8

	// Properties
	public static CanvasUpdateRegistry instance { get; }

	// Methods

	// RVA: 0x144D988 Offset: 0x1449988 VA: 0x144D988
	protected void .ctor() { }

	// RVA: 0x144DB58 Offset: 0x1449B58 VA: 0x144DB58
	public static CanvasUpdateRegistry get_instance() { }

	// RVA: 0x144DBF8 Offset: 0x1449BF8 VA: 0x144DBF8
	private bool ObjectValidForUpdate(ICanvasElement element) { }

	// RVA: 0x144DCC8 Offset: 0x1449CC8 VA: 0x144DCC8
	private void CleanInvalidItems() { }

	// RVA: 0x144DFB4 Offset: 0x1449FB4 VA: 0x144DFB4
	private void PerformUpdate() { }

	// RVA: 0x144E798 Offset: 0x144A798 VA: 0x144E798
	private static int ParentCount(Transform child) { }

	// RVA: 0x144E854 Offset: 0x144A854 VA: 0x144E854
	private static int SortLayoutList(ICanvasElement x, ICanvasElement y) { }

	// RVA: 0x144E9A4 Offset: 0x144A9A4 VA: 0x144E9A4
	public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element) { }

	// RVA: 0x144EA9C Offset: 0x144AA9C VA: 0x144EA9C
	public static bool TryRegisterCanvasElementForLayoutRebuild(ICanvasElement element) { }

	// RVA: 0x144EA04 Offset: 0x144AA04 VA: 0x144EA04
	private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element) { }

	// RVA: 0x144EAFC Offset: 0x144AAFC VA: 0x144EAFC
	public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element) { }

	// RVA: 0x144EB5C Offset: 0x144AB5C VA: 0x144EB5C
	private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element) { }

	// RVA: 0x144EC2C Offset: 0x144AC2C VA: 0x144EC2C
	public static void UnRegisterCanvasElementForRebuild(ICanvasElement element) { }

	// RVA: 0x144EF64 Offset: 0x144AF64 VA: 0x144EF64
	public static void DisableCanvasElementForRebuild(ICanvasElement element) { }

	// RVA: 0x144EC9C Offset: 0x144AC9C VA: 0x144EC9C
	private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element) { }

	// RVA: 0x144EE00 Offset: 0x144AE00 VA: 0x144EE00
	private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element) { }

	// RVA: 0x144EFD4 Offset: 0x144AFD4 VA: 0x144EFD4
	private void InternalDisableCanvasElementForLayoutRebuild(ICanvasElement element) { }

	// RVA: 0x144F138 Offset: 0x144B138 VA: 0x144F138
	private void InternalDisableCanvasElementForGraphicRebuild(ICanvasElement element) { }

	// RVA: 0x144F29C Offset: 0x144B29C VA: 0x144F29C
	public static bool IsRebuildingLayout() { }

	// RVA: 0x144F2F8 Offset: 0x144B2F8 VA: 0x144F2F8
	public static bool IsRebuildingGraphics() { }

	// RVA: 0x144F354 Offset: 0x144B354 VA: 0x144F354
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
[Serializable]
public struct ColorBlock : IEquatable<ColorBlock> // TypeDefIndex: 6370
{
	// Fields
	[FormerlySerializedAs("normalColor")]
	[SerializeField]
	private Color m_NormalColor; // 0x0
	[FormerlySerializedAs("highlightedColor")]
	[SerializeField]
	private Color m_HighlightedColor; // 0x10
	[FormerlySerializedAs("pressedColor")]
	[SerializeField]
	private Color m_PressedColor; // 0x20
	[FormerlySerializedAs("m_HighlightedColor")]
	[SerializeField]
	private Color m_SelectedColor; // 0x30
	[FormerlySerializedAs("disabledColor")]
	[SerializeField]
	private Color m_DisabledColor; // 0x40
	[SerializeField]
	private float m_ColorMultiplier; // 0x50
	[FormerlySerializedAs("fadeDuration")]
	[SerializeField]
	private float m_FadeDuration; // 0x54
	public static ColorBlock defaultColorBlock; // 0x0

	// Properties
	public Color normalColor { get; set; }
	public Color highlightedColor { get; }
	public Color pressedColor { get; }
	public Color selectedColor { get; }
	public Color disabledColor { get; }
	public float colorMultiplier { get; set; }
	public float fadeDuration { get; set; }

	// Methods

	// RVA: 0x144F3E8 Offset: 0x144B3E8 VA: 0x144F3E8
	public Color get_normalColor() { }

	// RVA: 0x144F3F4 Offset: 0x144B3F4 VA: 0x144F3F4
	public void set_normalColor(Color value) { }

	// RVA: 0x144F400 Offset: 0x144B400 VA: 0x144F400
	public Color get_highlightedColor() { }

	// RVA: 0x144F40C Offset: 0x144B40C VA: 0x144F40C
	public Color get_pressedColor() { }

	// RVA: 0x144F418 Offset: 0x144B418 VA: 0x144F418
	public Color get_selectedColor() { }

	// RVA: 0x144F424 Offset: 0x144B424 VA: 0x144F424
	public Color get_disabledColor() { }

	// RVA: 0x144F430 Offset: 0x144B430 VA: 0x144F430
	public float get_colorMultiplier() { }

	// RVA: 0x144F438 Offset: 0x144B438 VA: 0x144F438
	public void set_colorMultiplier(float value) { }

	// RVA: 0x144F440 Offset: 0x144B440 VA: 0x144F440
	public float get_fadeDuration() { }

	// RVA: 0x144F448 Offset: 0x144B448 VA: 0x144F448
	public void set_fadeDuration(float value) { }

	// RVA: 0x144F450 Offset: 0x144B450 VA: 0x144F450
	private static void .cctor() { }

	// RVA: 0x144F4C8 Offset: 0x144B4C8 VA: 0x144F4C8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x144F588 Offset: 0x144B588 VA: 0x144F588 Slot: 4
	public bool Equals(ColorBlock other) { }

	// RVA: 0x144F780 Offset: 0x144B780 VA: 0x144F780 Slot: 2
	public override int GetHashCode() { }
}


// Namespace: UnityEngine.UI
public class ClipperRegistry // TypeDefIndex: 6371
{
	// Fields
	private static ClipperRegistry s_Instance; // 0x0
	private readonly IndexedSet<IClipper> m_Clippers; // 0x10

	// Properties
	public static ClipperRegistry instance { get; }

	// Methods

	// RVA: 0x144F7EC Offset: 0x144B7EC VA: 0x144F7EC
	protected void .ctor() { }

	// RVA: 0x144E614 Offset: 0x144A614 VA: 0x144E614
	public static ClipperRegistry get_instance() { }

	// RVA: 0x144E688 Offset: 0x144A688 VA: 0x144E688
	public void Cull() { }

	// RVA: 0x144F868 Offset: 0x144B868 VA: 0x144F868
	public static void Register(IClipper c) { }

	// RVA: 0x144F8D8 Offset: 0x144B8D8 VA: 0x144F8D8
	public static void Unregister(IClipper c) { }

	// RVA: 0x144F934 Offset: 0x144B934 VA: 0x144F934
	public static void Disable(IClipper c) { }
}


// Namespace: UnityEngine.UI
public static class Clipping // TypeDefIndex: 6372
{
	// Methods

	// RVA: 0x144F990 Offset: 0x144B990 VA: 0x144F990
	public static Rect FindCullAndClipWorldRect(List<RectMask2D> rectMaskParents, out bool validRect) { }
}


// Namespace: UnityEngine.UI
public interface IClipper // TypeDefIndex: 6373
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void PerformClipping();
}


// Namespace: UnityEngine.UI
public interface IClippable // TypeDefIndex: 6374
{
	// Properties
	public abstract GameObject gameObject { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract GameObject get_gameObject();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RecalculateClipping();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SetClipRect(Rect value, bool validRect);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void SetClipSoftness(Vector2 clipSoftness);
}


// Namespace: UnityEngine.UI
internal class RectangularVertexClipper // TypeDefIndex: 6375
{
	// Fields
	private readonly Vector3[] m_WorldCorners; // 0x10
	private readonly Vector3[] m_CanvasCorners; // 0x18

	// Methods

	// RVA: 0x144FB90 Offset: 0x144BB90 VA: 0x144FB90
	public Rect GetCanvasRect(RectTransform t, Canvas c) { }

	// RVA: 0x144FCF4 Offset: 0x144BCF4 VA: 0x144FCF4
	public void .ctor() { }
}


// Namespace: 
protected internal class Dropdown.DropdownItem : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, ICancelHandler // TypeDefIndex: 6376
{
	// Fields
	[SerializeField]
	private Text m_Text; // 0x20
	[SerializeField]
	private Image m_Image; // 0x28
	[SerializeField]
	private RectTransform m_RectTransform; // 0x30
	[SerializeField]
	private Toggle m_Toggle; // 0x38

	// Properties
	public Text text { get; set; }
	public Image image { get; set; }
	public RectTransform rectTransform { get; set; }
	public Toggle toggle { get; set; }

	// Methods

	// RVA: 0x1452EB8 Offset: 0x144EEB8 VA: 0x1452EB8
	public Text get_text() { }

	// RVA: 0x1452EC0 Offset: 0x144EEC0 VA: 0x1452EC0
	public void set_text(Text value) { }

	// RVA: 0x1452EC8 Offset: 0x144EEC8 VA: 0x1452EC8
	public Image get_image() { }

	// RVA: 0x1452ED0 Offset: 0x144EED0 VA: 0x1452ED0
	public void set_image(Image value) { }

	// RVA: 0x1452ED8 Offset: 0x144EED8 VA: 0x1452ED8
	public RectTransform get_rectTransform() { }

	// RVA: 0x1452EE0 Offset: 0x144EEE0 VA: 0x1452EE0
	public void set_rectTransform(RectTransform value) { }

	// RVA: 0x1452EE8 Offset: 0x144EEE8 VA: 0x1452EE8
	public Toggle get_toggle() { }

	// RVA: 0x1452EF0 Offset: 0x144EEF0 VA: 0x1452EF0
	public void set_toggle(Toggle value) { }

	// RVA: 0x1452EF8 Offset: 0x144EEF8 VA: 0x1452EF8 Slot: 6
	public virtual void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x1452F74 Offset: 0x144EF74 VA: 0x1452F74 Slot: 7
	public virtual void OnCancel(BaseEventData eventData) { }

	// RVA: 0x1453014 Offset: 0x144F014 VA: 0x1453014
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class Dropdown.OptionData // TypeDefIndex: 6377
{
	// Fields
	[SerializeField]
	private string m_Text; // 0x10
	[SerializeField]
	private Sprite m_Image; // 0x18

	// Properties
	public string text { get; set; }
	public Sprite image { get; set; }

	// Methods

	// RVA: 0x145301C Offset: 0x144F01C VA: 0x145301C
	public string get_text() { }

	// RVA: 0x1453024 Offset: 0x144F024 VA: 0x1453024
	public void set_text(string value) { }

	// RVA: 0x145302C Offset: 0x144F02C VA: 0x145302C
	public Sprite get_image() { }

	// RVA: 0x1453034 Offset: 0x144F034 VA: 0x1453034
	public void set_image(Sprite value) { }

	// RVA: 0x1452EB0 Offset: 0x144EEB0 VA: 0x1452EB0
	public void .ctor() { }

	// RVA: 0x1450B04 Offset: 0x144CB04 VA: 0x1450B04
	public void .ctor(string text) { }

	// RVA: 0x1450C40 Offset: 0x144CC40 VA: 0x1450C40
	public void .ctor(Sprite image) { }
}


// Namespace: 
[Serializable]
public class Dropdown.OptionDataList // TypeDefIndex: 6378
{
	// Fields
	[SerializeField]
	private List<Dropdown.OptionData> m_Options; // 0x10

	// Properties
	public List<Dropdown.OptionData> options { get; set; }

	// Methods

	// RVA: 0x145303C Offset: 0x144F03C VA: 0x145303C
	public List<Dropdown.OptionData> get_options() { }

	// RVA: 0x1453044 Offset: 0x144F044 VA: 0x1453044
	public void set_options(List<Dropdown.OptionData> value) { }

	// RVA: 0x145022C Offset: 0x144C22C VA: 0x145022C
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class Dropdown.DropdownEvent : UnityEvent<int> // TypeDefIndex: 6379
{
	// Methods

	// RVA: 0x14502AC Offset: 0x144C2AC VA: 0x14502AC
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Dropdown.<>c__DisplayClass63_0 // TypeDefIndex: 6380
{
	// Fields
	public Dropdown.DropdownItem item; // 0x10
	public Dropdown <>4__this; // 0x18

	// Methods

	// RVA: 0x1452098 Offset: 0x144E098 VA: 0x1452098
	public void .ctor() { }

	// RVA: 0x145304C Offset: 0x144F04C VA: 0x145304C
	internal void <Show>b__0(bool x) { }
}


// Namespace: 
[CompilerGenerated]
private sealed class Dropdown.<DelayedDestroyDropdownList>d__75 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6381
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public float delay; // 0x20
	public Dropdown <>4__this; // 0x28

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x1452CE4 Offset: 0x144ECE4 VA: 0x1452CE4
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x1453070 Offset: 0x144F070 VA: 0x1453070 Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x1453074 Offset: 0x144F074 VA: 0x1453074 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x145311C Offset: 0x144F11C VA: 0x145311C Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x1453124 Offset: 0x144F124 VA: 0x1453124 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x145315C Offset: 0x144F15C VA: 0x145315C Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(RectTransform))]
public class Dropdown : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICancelHandler // TypeDefIndex: 6382
{
	// Fields
	[SerializeField]
	private RectTransform m_Template; // 0x100
	[SerializeField]
	private Text m_CaptionText; // 0x108
	[SerializeField]
	private Image m_CaptionImage; // 0x110
	[SerializeField]
	private Text m_ItemText; // 0x118
	[SerializeField]
	private Image m_ItemImage; // 0x120
	[SerializeField]
	private int m_Value; // 0x128
	[SerializeField]
	private Dropdown.OptionDataList m_Options; // 0x130
	[SerializeField]
	private Dropdown.DropdownEvent m_OnValueChanged; // 0x138
	[SerializeField]
	private float m_AlphaFadeSpeed; // 0x140
	private GameObject m_Dropdown; // 0x148
	private GameObject m_Blocker; // 0x150
	private List<Dropdown.DropdownItem> m_Items; // 0x158
	private TweenRunner<FloatTween> m_AlphaTweenRunner; // 0x160
	private bool validTemplate; // 0x168
	private const int kHighSortingLayer = 30000;
	private static Dropdown.OptionData s_NoOptionData; // 0x0

	// Properties
	public RectTransform template { get; set; }
	public Text captionText { get; set; }
	public Image captionImage { get; set; }
	public Text itemText { get; set; }
	public Image itemImage { get; set; }
	public List<Dropdown.OptionData> options { get; set; }
	public Dropdown.DropdownEvent onValueChanged { get; set; }
	public float alphaFadeSpeed { get; set; }
	public int value { get; set; }

	// Methods

	// RVA: 0x144FD5C Offset: 0x144BD5C VA: 0x144FD5C
	public RectTransform get_template() { }

	// RVA: 0x144FD64 Offset: 0x144BD64 VA: 0x144FD64
	public void set_template(RectTransform value) { }

	// RVA: 0x144FF40 Offset: 0x144BF40 VA: 0x144FF40
	public Text get_captionText() { }

	// RVA: 0x144FF48 Offset: 0x144BF48 VA: 0x144FF48
	public void set_captionText(Text value) { }

	// RVA: 0x144FF50 Offset: 0x144BF50 VA: 0x144FF50
	public Image get_captionImage() { }

	// RVA: 0x144FF58 Offset: 0x144BF58 VA: 0x144FF58
	public void set_captionImage(Image value) { }

	// RVA: 0x144FF60 Offset: 0x144BF60 VA: 0x144FF60
	public Text get_itemText() { }

	// RVA: 0x144FF68 Offset: 0x144BF68 VA: 0x144FF68
	public void set_itemText(Text value) { }

	// RVA: 0x144FF70 Offset: 0x144BF70 VA: 0x144FF70
	public Image get_itemImage() { }

	// RVA: 0x144FF78 Offset: 0x144BF78 VA: 0x144FF78
	public void set_itemImage(Image value) { }

	// RVA: 0x144FF80 Offset: 0x144BF80 VA: 0x144FF80
	public List<Dropdown.OptionData> get_options() { }

	// RVA: 0x144FF9C Offset: 0x144BF9C VA: 0x144FF9C
	public void set_options(List<Dropdown.OptionData> value) { }

	// RVA: 0x144FFB8 Offset: 0x144BFB8 VA: 0x144FFB8
	public Dropdown.DropdownEvent get_onValueChanged() { }

	// RVA: 0x144FFC0 Offset: 0x144BFC0 VA: 0x144FFC0
	public void set_onValueChanged(Dropdown.DropdownEvent value) { }

	// RVA: 0x144FFC8 Offset: 0x144BFC8 VA: 0x144FFC8
	public float get_alphaFadeSpeed() { }

	// RVA: 0x144FFD0 Offset: 0x144BFD0 VA: 0x144FFD0
	public void set_alphaFadeSpeed(float value) { }

	// RVA: 0x144FFD8 Offset: 0x144BFD8 VA: 0x144FFD8
	public int get_value() { }

	// RVA: 0x144FFE0 Offset: 0x144BFE0 VA: 0x144FFE0
	public void set_value(int value) { }

	// RVA: 0x1450120 Offset: 0x144C120 VA: 0x1450120
	public void SetValueWithoutNotify(int input) { }

	// RVA: 0x144FFE8 Offset: 0x144BFE8 VA: 0x144FFE8
	private void Set(int value, bool sendCallback = True) { }

	// RVA: 0x1450128 Offset: 0x144C128 VA: 0x1450128
	protected void .ctor() { }

	// RVA: 0x14502F4 Offset: 0x144C2F4 VA: 0x14502F4 Slot: 4
	protected override void Awake() { }

	// RVA: 0x14503F0 Offset: 0x144C3F0 VA: 0x14503F0 Slot: 6
	protected override void Start() { }

	// RVA: 0x145048C Offset: 0x144C48C VA: 0x145048C Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x144FD6C Offset: 0x144BD6C VA: 0x144FD6C
	public void RefreshShownValue() { }

	// RVA: 0x1450988 Offset: 0x144C988 VA: 0x1450988
	public void AddOptions(List<Dropdown.OptionData> options) { }

	// RVA: 0x14509F0 Offset: 0x144C9F0 VA: 0x14509F0
	public void AddOptions(List<string> options) { }

	// RVA: 0x1450B2C Offset: 0x144CB2C VA: 0x1450B2C
	public void AddOptions(List<Sprite> options) { }

	// RVA: 0x1450C68 Offset: 0x144CC68 VA: 0x1450C68
	public void ClearOptions() { }

	// RVA: 0x1450D10 Offset: 0x144CD10 VA: 0x1450D10
	private void SetupTemplate(Canvas rootCanvas) { }

	// RVA: -1 Offset: -1
	private static T GetOrAddComponent<T>(GameObject go) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7F218 Offset: 0xB7B218 VA: 0xB7F218
	|-Dropdown.GetOrAddComponent<object>
	*/

	// RVA: 0x14513B0 Offset: 0x144D3B0 VA: 0x14513B0 Slot: 42
	public virtual void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x1451F94 Offset: 0x144DF94 VA: 0x1451F94 Slot: 43
	public virtual void OnSubmit(BaseEventData eventData) { }

	// RVA: 0x1451F98 Offset: 0x144DF98 VA: 0x1451F98 Slot: 44
	public virtual void OnCancel(BaseEventData eventData) { }

	// RVA: 0x14513B4 Offset: 0x144D3B4 VA: 0x14513B4
	public void Show() { }

	// RVA: 0x1452460 Offset: 0x144E460 VA: 0x1452460 Slot: 45
	protected virtual GameObject CreateBlocker(Canvas rootCanvas) { }

	// RVA: 0x14529AC Offset: 0x144E9AC VA: 0x14529AC Slot: 46
	protected virtual void DestroyBlocker(GameObject blocker) { }

	// RVA: 0x1452A04 Offset: 0x144EA04 VA: 0x1452A04 Slot: 47
	protected virtual GameObject CreateDropdownList(GameObject template) { }

	// RVA: 0x1452A70 Offset: 0x144EA70 VA: 0x1452A70 Slot: 48
	protected virtual void DestroyDropdownList(GameObject dropdownList) { }

	// RVA: 0x1452AC8 Offset: 0x144EAC8 VA: 0x1452AC8 Slot: 49
	protected virtual Dropdown.DropdownItem CreateItem(Dropdown.DropdownItem itemTemplate) { }

	// RVA: 0x1452B34 Offset: 0x144EB34 VA: 0x1452B34 Slot: 50
	protected virtual void DestroyItem(Dropdown.DropdownItem item) { }

	// RVA: 0x14520A0 Offset: 0x144E0A0 VA: 0x14520A0
	private Dropdown.DropdownItem AddItem(Dropdown.OptionData data, bool selected, Dropdown.DropdownItem itemTemplate, List<Dropdown.DropdownItem> items) { }

	// RVA: 0x1452B38 Offset: 0x144EB38 VA: 0x1452B38
	private void AlphaFadeList(float duration, float alpha) { }

	// RVA: 0x1452340 Offset: 0x144E340 VA: 0x1452340
	private void AlphaFadeList(float duration, float start, float end) { }

	// RVA: 0x1452BC4 Offset: 0x144EBC4 VA: 0x1452BC4
	private void SetAlpha(float alpha) { }

	// RVA: 0x1451F9C Offset: 0x144DF9C VA: 0x1451F9C
	public void Hide() { }

	// RVA: 0x1452C74 Offset: 0x144EC74 VA: 0x1452C74
	private IEnumerator DelayedDestroyDropdownList(float delay) { }

	// RVA: 0x1450520 Offset: 0x144C520 VA: 0x1450520
	private void ImmediateDestroyDropdownList() { }

	// RVA: 0x1452D0C Offset: 0x144ED0C VA: 0x1452D0C
	private void OnSelectItem(Toggle toggle) { }

	// RVA: 0x1452E40 Offset: 0x144EE40 VA: 0x1452E40
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
[Serializable]
public class FontData : ISerializationCallbackReceiver // TypeDefIndex: 6383
{
	// Fields
	[FormerlySerializedAs("font")]
	[SerializeField]
	private Font m_Font; // 0x10
	[FormerlySerializedAs("fontSize")]
	[SerializeField]
	private int m_FontSize; // 0x18
	[SerializeField]
	[FormerlySerializedAs("fontStyle")]
	private FontStyle m_FontStyle; // 0x1C
	[SerializeField]
	private bool m_BestFit; // 0x20
	[SerializeField]
	private int m_MinSize; // 0x24
	[SerializeField]
	private int m_MaxSize; // 0x28
	[SerializeField]
	[FormerlySerializedAs("alignment")]
	private TextAnchor m_Alignment; // 0x2C
	[SerializeField]
	private bool m_AlignByGeometry; // 0x30
	[FormerlySerializedAs("richText")]
	[SerializeField]
	private bool m_RichText; // 0x31
	[SerializeField]
	private HorizontalWrapMode m_HorizontalOverflow; // 0x34
	[SerializeField]
	private VerticalWrapMode m_VerticalOverflow; // 0x38
	[SerializeField]
	private float m_LineSpacing; // 0x3C

	// Properties
	public static FontData defaultFontData { get; }
	public Font font { get; set; }
	public int fontSize { get; set; }
	public FontStyle fontStyle { get; set; }
	public bool bestFit { get; set; }
	public int minSize { get; set; }
	public int maxSize { get; set; }
	public TextAnchor alignment { get; set; }
	public bool alignByGeometry { get; set; }
	public bool richText { get; set; }
	public HorizontalWrapMode horizontalOverflow { get; set; }
	public VerticalWrapMode verticalOverflow { get; set; }
	public float lineSpacing { get; set; }

	// Methods

	// RVA: 0x1453164 Offset: 0x144F164 VA: 0x1453164
	public static FontData get_defaultFontData() { }

	// RVA: 0x14531FC Offset: 0x144F1FC VA: 0x14531FC
	public Font get_font() { }

	// RVA: 0x1453204 Offset: 0x144F204 VA: 0x1453204
	public void set_font(Font value) { }

	// RVA: 0x145320C Offset: 0x144F20C VA: 0x145320C
	public int get_fontSize() { }

	// RVA: 0x1453214 Offset: 0x144F214 VA: 0x1453214
	public void set_fontSize(int value) { }

	// RVA: 0x145321C Offset: 0x144F21C VA: 0x145321C
	public FontStyle get_fontStyle() { }

	// RVA: 0x1453224 Offset: 0x144F224 VA: 0x1453224
	public void set_fontStyle(FontStyle value) { }

	// RVA: 0x145322C Offset: 0x144F22C VA: 0x145322C
	public bool get_bestFit() { }

	// RVA: 0x1453234 Offset: 0x144F234 VA: 0x1453234
	public void set_bestFit(bool value) { }

	// RVA: 0x1453240 Offset: 0x144F240 VA: 0x1453240
	public int get_minSize() { }

	// RVA: 0x1453248 Offset: 0x144F248 VA: 0x1453248
	public void set_minSize(int value) { }

	// RVA: 0x1453250 Offset: 0x144F250 VA: 0x1453250
	public int get_maxSize() { }

	// RVA: 0x1453258 Offset: 0x144F258 VA: 0x1453258
	public void set_maxSize(int value) { }

	// RVA: 0x1453260 Offset: 0x144F260 VA: 0x1453260
	public TextAnchor get_alignment() { }

	// RVA: 0x1453268 Offset: 0x144F268 VA: 0x1453268
	public void set_alignment(TextAnchor value) { }

	// RVA: 0x1453270 Offset: 0x144F270 VA: 0x1453270
	public bool get_alignByGeometry() { }

	// RVA: 0x1453278 Offset: 0x144F278 VA: 0x1453278
	public void set_alignByGeometry(bool value) { }

	// RVA: 0x1453284 Offset: 0x144F284 VA: 0x1453284
	public bool get_richText() { }

	// RVA: 0x145328C Offset: 0x144F28C VA: 0x145328C
	public void set_richText(bool value) { }

	// RVA: 0x1453298 Offset: 0x144F298 VA: 0x1453298
	public HorizontalWrapMode get_horizontalOverflow() { }

	// RVA: 0x14532A0 Offset: 0x144F2A0 VA: 0x14532A0
	public void set_horizontalOverflow(HorizontalWrapMode value) { }

	// RVA: 0x14532A8 Offset: 0x144F2A8 VA: 0x14532A8
	public VerticalWrapMode get_verticalOverflow() { }

	// RVA: 0x14532B0 Offset: 0x144F2B0 VA: 0x14532B0
	public void set_verticalOverflow(VerticalWrapMode value) { }

	// RVA: 0x14532B8 Offset: 0x144F2B8 VA: 0x14532B8
	public float get_lineSpacing() { }

	// RVA: 0x14532C0 Offset: 0x144F2C0 VA: 0x14532C0
	public void set_lineSpacing(float value) { }

	// RVA: 0x14532C8 Offset: 0x144F2C8 VA: 0x14532C8 Slot: 4
	private void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize() { }

	// RVA: 0x14532CC Offset: 0x144F2CC VA: 0x14532CC Slot: 5
	private void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize() { }

	// RVA: 0x14531F4 Offset: 0x144F1F4 VA: 0x14531F4
	public void .ctor() { }
}


// Namespace: UnityEngine.UI
public static class FontUpdateTracker // TypeDefIndex: 6384
{
	// Fields
	private static Dictionary<Font, HashSet<Text>> m_Tracked; // 0x0

	// Methods

	// RVA: 0x1453310 Offset: 0x144F310 VA: 0x1453310
	public static void TrackText(Text t) { }

	// RVA: 0x1453558 Offset: 0x144F558 VA: 0x1453558
	private static void RebuildForFont(Font f) { }

	// RVA: 0x1453714 Offset: 0x144F714 VA: 0x1453714
	public static void UntrackText(Text t) { }

	// RVA: 0x145391C Offset: 0x144F91C VA: 0x145391C
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
public abstract class Graphic : UIBehaviour, ICanvasElement // TypeDefIndex: 6385
{
	// Fields
	protected static Material s_DefaultUI; // 0x0
	protected static Texture2D s_WhiteTexture; // 0x8
	[FormerlySerializedAs("m_Mat")]
	[SerializeField]
	protected Material m_Material; // 0x20
	[SerializeField]
	private Color m_Color; // 0x28
	protected bool m_SkipLayoutUpdate; // 0x38
	protected bool m_SkipMaterialUpdate; // 0x39
	[SerializeField]
	private bool m_RaycastTarget; // 0x3A
	private bool m_RaycastTargetCache; // 0x3B
	[SerializeField]
	private Vector4 m_RaycastPadding; // 0x3C
	private RectTransform m_RectTransform; // 0x50
	private CanvasRenderer m_CanvasRenderer; // 0x58
	private Canvas m_Canvas; // 0x60
	private bool m_VertsDirty; // 0x68
	private bool m_MaterialDirty; // 0x69
	protected UnityAction m_OnDirtyLayoutCallback; // 0x70
	protected UnityAction m_OnDirtyVertsCallback; // 0x78
	protected UnityAction m_OnDirtyMaterialCallback; // 0x80
	protected static Mesh s_Mesh; // 0x10
	private static readonly VertexHelper s_VertexHelper; // 0x18
	protected Mesh m_CachedMesh; // 0x88
	protected Vector2[] m_CachedUvs; // 0x90
	private readonly TweenRunner<ColorTween> m_ColorTweenRunner; // 0x98
	[CompilerGenerated]
	private bool <useLegacyMeshGeneration>k__BackingField; // 0xA0

	// Properties
	public static Material defaultGraphicMaterial { get; }
	public virtual Color color { get; set; }
	public virtual bool raycastTarget { get; set; }
	public Vector4 raycastPadding { get; set; }
	protected bool useLegacyMeshGeneration { get; set; }
	public int depth { get; }
	public RectTransform rectTransform { get; }
	public Canvas canvas { get; }
	public CanvasRenderer canvasRenderer { get; }
	public virtual Material defaultMaterial { get; }
	public virtual Material material { get; set; }
	public virtual Material materialForRendering { get; }
	public virtual Texture mainTexture { get; }
	protected static Mesh workerMesh { get; }

	// Methods

	// RVA: 0x14539A8 Offset: 0x144F9A8 VA: 0x14539A8
	public static Material get_defaultGraphicMaterial() { }

	// RVA: 0x1453A84 Offset: 0x144FA84 VA: 0x1453A84 Slot: 22
	public virtual Color get_color() { }

	// RVA: 0x1453A90 Offset: 0x144FA90 VA: 0x1453A90 Slot: 23
	public virtual void set_color(Color value) { }

	// RVA: 0x1453AC8 Offset: 0x144FAC8 VA: 0x1453AC8 Slot: 24
	public virtual bool get_raycastTarget() { }

	// RVA: 0x1453AD0 Offset: 0x144FAD0 VA: 0x1453AD0 Slot: 25
	public virtual void set_raycastTarget(bool value) { }

	// RVA: 0x1453F88 Offset: 0x144FF88 VA: 0x1453F88
	public Vector4 get_raycastPadding() { }

	// RVA: 0x1453F94 Offset: 0x144FF94 VA: 0x1453F94
	public void set_raycastPadding(Vector4 value) { }

	[CompilerGenerated]
	// RVA: 0x1453FA0 Offset: 0x144FFA0 VA: 0x1453FA0
	protected bool get_useLegacyMeshGeneration() { }

	[CompilerGenerated]
	// RVA: 0x1453FA8 Offset: 0x144FFA8 VA: 0x1453FA8
	protected void set_useLegacyMeshGeneration(bool value) { }

	// RVA: 0x1453FB4 Offset: 0x144FFB4 VA: 0x1453FB4
	protected void .ctor() { }

	// RVA: 0x1454064 Offset: 0x1450064 VA: 0x1454064 Slot: 26
	public virtual void SetAllDirty() { }

	// RVA: 0x14541AC Offset: 0x14501AC VA: 0x14541AC Slot: 27
	public virtual void SetLayoutDirty() { }

	// RVA: 0x14542AC Offset: 0x14502AC VA: 0x14542AC Slot: 28
	public virtual void SetVerticesDirty() { }

	// RVA: 0x1454340 Offset: 0x1450340 VA: 0x1454340 Slot: 29
	public virtual void SetMaterialDirty() { }

	// RVA: 0x14540D4 Offset: 0x14500D4 VA: 0x14540D4
	public void SetRaycastDirty() { }

	// RVA: 0x14543D4 Offset: 0x14503D4 VA: 0x14543D4 Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x1454480 Offset: 0x1450480 VA: 0x1454480 Slot: 11
	protected override void OnBeforeTransformParentChanged() { }

	// RVA: 0x14546CC Offset: 0x14506CC VA: 0x14546CC Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x1454AF8 Offset: 0x1450AF8 VA: 0x1454AF8
	public int get_depth() { }

	// RVA: 0x145424C Offset: 0x145024C VA: 0x145424C Slot: 30
	public RectTransform get_rectTransform() { }

	// RVA: 0x1453BAC Offset: 0x144FBAC VA: 0x1453BAC
	public Canvas get_canvas() { }

	// RVA: 0x1454780 Offset: 0x1450780 VA: 0x1454780
	private void CacheCanvas() { }

	// RVA: 0x1454B14 Offset: 0x1450B14 VA: 0x1454B14
	public CanvasRenderer get_canvasRenderer() { }

	// RVA: 0x1454BAC Offset: 0x1450BAC VA: 0x1454BAC Slot: 31
	public virtual Material get_defaultMaterial() { }

	// RVA: 0x1454BF8 Offset: 0x1450BF8 VA: 0x1454BF8 Slot: 32
	public virtual Material get_material() { }

	// RVA: 0x1454C80 Offset: 0x1450C80 VA: 0x1454C80 Slot: 33
	public virtual void set_material(Material value) { }

	// RVA: 0x1454D18 Offset: 0x1450D18 VA: 0x1454D18 Slot: 34
	public virtual Material get_materialForRendering() { }

	// RVA: 0x1454EE8 Offset: 0x1450EE8 VA: 0x1454EE8 Slot: 35
	public virtual Texture get_mainTexture() { }

	// RVA: 0x1454F40 Offset: 0x1450F40 VA: 0x1454F40 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x1455070 Offset: 0x1451070 VA: 0x1455070 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x1455338 Offset: 0x1451338 VA: 0x1455338 Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x145543C Offset: 0x145143C VA: 0x145543C Slot: 15
	protected override void OnCanvasHierarchyChanged() { }

	// RVA: 0x1455574 Offset: 0x1451574 VA: 0x1455574 Slot: 36
	public virtual void OnCullingChanged() { }

	// RVA: 0x1455600 Offset: 0x1451600 VA: 0x1455600 Slot: 37
	public virtual void Rebuild(CanvasUpdate update) { }

	// RVA: 0x14556E4 Offset: 0x14516E4 VA: 0x14556E4 Slot: 38
	public virtual void LayoutComplete() { }

	// RVA: 0x14556E8 Offset: 0x14516E8 VA: 0x14556E8 Slot: 39
	public virtual void GraphicUpdateComplete() { }

	// RVA: 0x14556EC Offset: 0x14516EC VA: 0x14556EC Slot: 40
	protected virtual void UpdateMaterial() { }

	// RVA: 0x14557A4 Offset: 0x14517A4 VA: 0x14557A4 Slot: 41
	protected virtual void UpdateGeometry() { }

	// RVA: 0x1455B28 Offset: 0x1451B28 VA: 0x1455B28
	private void DoMeshGeneration() { }

	// RVA: 0x14557B4 Offset: 0x14517B4 VA: 0x14557B4
	private void DoLegacyMeshGeneration() { }

	// RVA: 0x1455ED0 Offset: 0x1451ED0 VA: 0x1455ED0
	protected static Mesh get_workerMesh() { }

	[Obsolete("Use OnPopulateMesh(VertexHelper vh) instead.", False)]
	// RVA: 0x1455FF0 Offset: 0x1451FF0 VA: 0x1455FF0 Slot: 42
	protected virtual void OnPopulateMesh(Mesh m) { }

	// RVA: 0x1456088 Offset: 0x1452088 VA: 0x1456088 Slot: 43
	protected virtual void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x1456310 Offset: 0x1452310 VA: 0x1456310 Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x1456320 Offset: 0x1452320 VA: 0x1456320 Slot: 44
	public virtual void SetNativeSize() { }

	// RVA: 0x1456324 Offset: 0x1452324 VA: 0x1456324 Slot: 45
	public virtual bool Raycast(Vector2 sp, Camera eventCamera) { }

	// RVA: 0x14567D0 Offset: 0x14527D0 VA: 0x14567D0
	public Vector2 PixelAdjustPoint(Vector2 point) { }

	// RVA: 0x14561E4 Offset: 0x14521E4 VA: 0x14561E4
	public Rect GetPixelAdjustedRect() { }

	// RVA: 0x1456910 Offset: 0x1452910 VA: 0x1456910 Slot: 46
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha) { }

	// RVA: 0x145692C Offset: 0x145292C VA: 0x145692C Slot: 47
	public virtual void CrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB) { }

	// RVA: 0x1456BB8 Offset: 0x1452BB8 VA: 0x1456BB8
	private static Color CreateColorFromAlpha(float alpha) { }

	// RVA: 0x1456BCC Offset: 0x1452BCC VA: 0x1456BCC Slot: 48
	public virtual void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale) { }

	// RVA: 0x1456C68 Offset: 0x1452C68 VA: 0x1456C68
	public void RegisterDirtyLayoutCallback(UnityAction action) { }

	// RVA: 0x1456CE8 Offset: 0x1452CE8 VA: 0x1456CE8
	public void UnregisterDirtyLayoutCallback(UnityAction action) { }

	// RVA: 0x1456D68 Offset: 0x1452D68 VA: 0x1456D68
	public void RegisterDirtyVerticesCallback(UnityAction action) { }

	// RVA: 0x1456DE8 Offset: 0x1452DE8 VA: 0x1456DE8
	public void UnregisterDirtyVerticesCallback(UnityAction action) { }

	// RVA: 0x1456E68 Offset: 0x1452E68 VA: 0x1456E68
	public void RegisterDirtyMaterialCallback(UnityAction action) { }

	// RVA: 0x1456EE8 Offset: 0x1452EE8 VA: 0x1456EE8
	public void UnregisterDirtyMaterialCallback(UnityAction action) { }

	// RVA: 0x1456F68 Offset: 0x1452F68 VA: 0x1456F68
	private static void .cctor() { }

	// RVA: 0x1456FF0 Offset: 0x1452FF0 VA: 0x1456FF0 Slot: 18
	private Transform UnityEngine.UI.ICanvasElement.get_transform() { }
}


// Namespace: 
public enum GraphicRaycaster.BlockingObjects // TypeDefIndex: 6386
{
	// Fields
	public int value__; // 0x0
	public const GraphicRaycaster.BlockingObjects None = 0;
	public const GraphicRaycaster.BlockingObjects TwoD = 1;
	public const GraphicRaycaster.BlockingObjects ThreeD = 2;
	public const GraphicRaycaster.BlockingObjects All = 3;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class GraphicRaycaster.<>c // TypeDefIndex: 6387
{
	// Fields
	public static readonly GraphicRaycaster.<>c <>9; // 0x0
	public static Comparison<Graphic> <>9__27_0; // 0x8

	// Methods

	// RVA: 0x14584D8 Offset: 0x14544D8 VA: 0x14584D8
	private static void .cctor() { }

	// RVA: 0x1458534 Offset: 0x1454534 VA: 0x1458534
	public void .ctor() { }

	// RVA: 0x145853C Offset: 0x145453C VA: 0x145853C
	internal int <Raycast>b__27_0(Graphic g1, Graphic g2) { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(Canvas))]
public class GraphicRaycaster : BaseRaycaster // TypeDefIndex: 6388
{
	// Fields
	protected const int kNoEventMaskSet = -1;
	[FormerlySerializedAs("ignoreReversedGraphics")]
	[SerializeField]
	private bool m_IgnoreReversedGraphics; // 0x28
	[FormerlySerializedAs("blockingObjects")]
	[SerializeField]
	private GraphicRaycaster.BlockingObjects m_BlockingObjects; // 0x2C
	[SerializeField]
	protected LayerMask m_BlockingMask; // 0x30
	private Canvas m_Canvas; // 0x38
	private List<Graphic> m_RaycastResults; // 0x40
	private static readonly List<Graphic> s_SortedGraphics; // 0x0

	// Properties
	public override int sortOrderPriority { get; }
	public override int renderOrderPriority { get; }
	public bool ignoreReversedGraphics { get; set; }
	public GraphicRaycaster.BlockingObjects blockingObjects { get; set; }
	public LayerMask blockingMask { get; set; }
	private Canvas canvas { get; }
	public override Camera eventCamera { get; }

	// Methods

	// RVA: 0x1456FF8 Offset: 0x1452FF8 VA: 0x1456FF8 Slot: 20
	public override int get_sortOrderPriority() { }

	// RVA: 0x14570E4 Offset: 0x14530E4 VA: 0x14570E4 Slot: 21
	public override int get_renderOrderPriority() { }

	// RVA: 0x1457138 Offset: 0x1453138 VA: 0x1457138
	public bool get_ignoreReversedGraphics() { }

	// RVA: 0x1457140 Offset: 0x1453140 VA: 0x1457140
	public void set_ignoreReversedGraphics(bool value) { }

	// RVA: 0x145714C Offset: 0x145314C VA: 0x145714C
	public GraphicRaycaster.BlockingObjects get_blockingObjects() { }

	// RVA: 0x1457154 Offset: 0x1453154 VA: 0x1457154
	public void set_blockingObjects(GraphicRaycaster.BlockingObjects value) { }

	// RVA: 0x145715C Offset: 0x145315C VA: 0x145715C
	public LayerMask get_blockingMask() { }

	// RVA: 0x1457164 Offset: 0x1453164 VA: 0x1457164
	public void set_blockingMask(LayerMask value) { }

	// RVA: 0x145716C Offset: 0x145316C VA: 0x145716C
	protected void .ctor() { }

	// RVA: 0x1457040 Offset: 0x1453040 VA: 0x1457040
	private Canvas get_canvas() { }

	// RVA: 0x1457200 Offset: 0x1453200 VA: 0x1457200 Slot: 17
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList) { }

	// RVA: 0x1458384 Offset: 0x1454384 VA: 0x1458384 Slot: 18
	public override Camera get_eventCamera() { }

	// RVA: 0x1457E88 Offset: 0x1453E88 VA: 0x1457E88
	private static void Raycast(Canvas canvas, Camera eventCamera, Vector2 pointerPosition, IList<Graphic> foundGraphics, List<Graphic> results) { }

	// RVA: 0x145844C Offset: 0x145444C VA: 0x145844C
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
public class GraphicRegistry // TypeDefIndex: 6389
{
	// Fields
	private static GraphicRegistry s_Instance; // 0x0
	private readonly Dictionary<Canvas, IndexedSet<Graphic>> m_Graphics; // 0x10
	private readonly Dictionary<Canvas, IndexedSet<Graphic>> m_RaycastableGraphics; // 0x18
	private static readonly List<Graphic> s_EmptyList; // 0x8

	// Properties
	public static GraphicRegistry instance { get; }

	// Methods

	// RVA: 0x1458584 Offset: 0x1454584 VA: 0x1458584
	protected void .ctor() { }

	// RVA: 0x145872C Offset: 0x145472C VA: 0x145872C
	public static GraphicRegistry get_instance() { }

	// RVA: 0x145490C Offset: 0x145090C VA: 0x145490C
	public static void RegisterGraphicForCanvas(Canvas c, Graphic graphic) { }

	// RVA: 0x1453D9C Offset: 0x144FD9C VA: 0x1453D9C
	public static void RegisterRaycastGraphicForCanvas(Canvas c, Graphic graphic) { }

	// RVA: 0x1454528 Offset: 0x1450528 VA: 0x1454528
	public static void UnregisterGraphicForCanvas(Canvas c, Graphic graphic) { }

	// RVA: 0x1453C20 Offset: 0x144FC20 VA: 0x1453C20
	public static void UnregisterRaycastGraphicForCanvas(Canvas c, Graphic graphic) { }

	// RVA: 0x14551B8 Offset: 0x14511B8 VA: 0x14551B8
	public static void DisableGraphicForCanvas(Canvas c, Graphic graphic) { }

	// RVA: 0x14587CC Offset: 0x14547CC VA: 0x14587CC
	public static void DisableRaycastGraphicForCanvas(Canvas c, Graphic graphic) { }

	// RVA: 0x1457DC8 Offset: 0x1453DC8 VA: 0x1457DC8
	public static IList<Graphic> GetRaycastableGraphicsForCanvas(Canvas canvas) { }

	// RVA: 0x145894C Offset: 0x145494C VA: 0x145894C
	private static void .cctor() { }
}


// Namespace: 
public enum Image.Type // TypeDefIndex: 6390
{
	// Fields
	public int value__; // 0x0
	public const Image.Type Simple = 0;
	public const Image.Type Sliced = 1;
	public const Image.Type Tiled = 2;
	public const Image.Type Filled = 3;
}


// Namespace: 
public enum Image.FillMethod // TypeDefIndex: 6391
{
	// Fields
	public int value__; // 0x0
	public const Image.FillMethod Horizontal = 0;
	public const Image.FillMethod Vertical = 1;
	public const Image.FillMethod Radial90 = 2;
	public const Image.FillMethod Radial180 = 3;
	public const Image.FillMethod Radial360 = 4;
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(CanvasRenderer))]
public class Image : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter // TypeDefIndex: 6392
{
	// Fields
	protected static Material s_ETC1DefaultUI; // 0x0
	[SerializeField]
	[FormerlySerializedAs("m_Frame")]
	private Sprite m_Sprite; // 0xD8
	private Sprite m_OverrideSprite; // 0xE0
	[SerializeField]
	private Image.Type m_Type; // 0xE8
	[SerializeField]
	private bool m_PreserveAspect; // 0xEC
	[SerializeField]
	private bool m_FillCenter; // 0xED
	[SerializeField]
	private Image.FillMethod m_FillMethod; // 0xF0
	[SerializeField]
	private float m_FillAmount; // 0xF4
	[SerializeField]
	private bool m_FillClockwise; // 0xF8
	[SerializeField]
	private int m_FillOrigin; // 0xFC
	private float m_AlphaHitTestMinimumThreshold; // 0x100
	private bool m_Tracked; // 0x104
	[SerializeField]
	private bool m_UseSpriteMesh; // 0x105
	[SerializeField]
	private float m_PixelsPerUnitMultiplier; // 0x108
	private float m_CachedReferencePixelsPerUnit; // 0x10C
	private static readonly Vector2[] s_VertScratch; // 0x8
	private static readonly Vector2[] s_UVScratch; // 0x10
	private static readonly Vector3[] s_Xy; // 0x18
	private static readonly Vector3[] s_Uv; // 0x20
	private static List<Image> m_TrackedTexturelessImages; // 0x28
	private static bool s_Initialized; // 0x30

	// Properties
	public Sprite sprite { get; set; }
	public Sprite overrideSprite { get; set; }
	private Sprite activeSprite { get; }
	public Image.Type type { get; set; }
	public bool preserveAspect { get; set; }
	public bool fillCenter { get; set; }
	public Image.FillMethod fillMethod { get; set; }
	public float fillAmount { get; set; }
	public bool fillClockwise { get; set; }
	public int fillOrigin { get; set; }
	[Obsolete("eventAlphaThreshold has been deprecated. Use eventMinimumAlphaThreshold instead (UnityUpgradable) -> alphaHitTestMinimumThreshold")]
	public float eventAlphaThreshold { get; set; }
	public float alphaHitTestMinimumThreshold { get; set; }
	public bool useSpriteMesh { get; set; }
	public static Material defaultETC1GraphicMaterial { get; }
	public override Texture mainTexture { get; }
	public bool hasBorder { get; }
	public float pixelsPerUnitMultiplier { get; set; }
	public float pixelsPerUnit { get; }
	protected float multipliedPixelsPerUnit { get; }
	public override Material material { get; set; }
	public virtual float minWidth { get; }
	public virtual float preferredWidth { get; }
	public virtual float flexibleWidth { get; }
	public virtual float minHeight { get; }
	public virtual float preferredHeight { get; }
	public virtual float flexibleHeight { get; }
	public virtual int layoutPriority { get; }

	// Methods

	// RVA: 0x14589D8 Offset: 0x14549D8 VA: 0x14589D8
	public Sprite get_sprite() { }

	// RVA: 0x14506D4 Offset: 0x144C6D4 VA: 0x14506D4
	public void set_sprite(Sprite value) { }

	// RVA: 0x1458B5C Offset: 0x1454B5C VA: 0x1458B5C
	public void DisableSpriteOptimizations() { }

	// RVA: 0x1458B64 Offset: 0x1454B64 VA: 0x1458B64
	public Sprite get_overrideSprite() { }

	// RVA: 0x1458BE0 Offset: 0x1454BE0 VA: 0x1458BE0
	public void set_overrideSprite(Sprite value) { }

	// RVA: 0x1458B68 Offset: 0x1454B68 VA: 0x1458B68
	private Sprite get_activeSprite() { }

	// RVA: 0x1458C68 Offset: 0x1454C68 VA: 0x1458C68
	public Image.Type get_type() { }

	// RVA: 0x1458C70 Offset: 0x1454C70 VA: 0x1458C70
	public void set_type(Image.Type value) { }

	// RVA: 0x1458CE8 Offset: 0x1454CE8 VA: 0x1458CE8
	public bool get_preserveAspect() { }

	// RVA: 0x1458CF0 Offset: 0x1454CF0 VA: 0x1458CF0
	public void set_preserveAspect(bool value) { }

	// RVA: 0x1458D6C Offset: 0x1454D6C VA: 0x1458D6C
	public bool get_fillCenter() { }

	// RVA: 0x1458D74 Offset: 0x1454D74 VA: 0x1458D74
	public void set_fillCenter(bool value) { }

	// RVA: 0x1458DF0 Offset: 0x1454DF0 VA: 0x1458DF0
	public Image.FillMethod get_fillMethod() { }

	// RVA: 0x1458DF8 Offset: 0x1454DF8 VA: 0x1458DF8
	public void set_fillMethod(Image.FillMethod value) { }

	// RVA: 0x1458E74 Offset: 0x1454E74 VA: 0x1458E74
	public float get_fillAmount() { }

	// RVA: 0x1458E7C Offset: 0x1454E7C VA: 0x1458E7C
	public void set_fillAmount(float value) { }

	// RVA: 0x1458F08 Offset: 0x1454F08 VA: 0x1458F08
	public bool get_fillClockwise() { }

	// RVA: 0x1458F10 Offset: 0x1454F10 VA: 0x1458F10
	public void set_fillClockwise(bool value) { }

	// RVA: 0x1458F8C Offset: 0x1454F8C VA: 0x1458F8C
	public int get_fillOrigin() { }

	// RVA: 0x1458F94 Offset: 0x1454F94 VA: 0x1458F94
	public void set_fillOrigin(int value) { }

	// RVA: 0x145900C Offset: 0x145500C VA: 0x145900C
	public float get_eventAlphaThreshold() { }

	// RVA: 0x145901C Offset: 0x145501C VA: 0x145901C
	public void set_eventAlphaThreshold(float value) { }

	// RVA: 0x1459168 Offset: 0x1455168 VA: 0x1459168
	public float get_alphaHitTestMinimumThreshold() { }

	// RVA: 0x1459028 Offset: 0x1455028 VA: 0x1459028
	public void set_alphaHitTestMinimumThreshold(float value) { }

	// RVA: 0x1459170 Offset: 0x1455170 VA: 0x1459170
	public bool get_useSpriteMesh() { }

	// RVA: 0x1459178 Offset: 0x1455178 VA: 0x1459178
	public void set_useSpriteMesh(bool value) { }

	// RVA: 0x14591F4 Offset: 0x14551F4 VA: 0x14591F4
	protected void .ctor() { }

	// RVA: 0x1459234 Offset: 0x1455234 VA: 0x1459234
	public static Material get_defaultETC1GraphicMaterial() { }

	// RVA: 0x1459310 Offset: 0x1455310 VA: 0x1459310 Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x1459488 Offset: 0x1455488 VA: 0x1459488
	public bool get_hasBorder() { }

	// RVA: 0x1459540 Offset: 0x1455540 VA: 0x1459540
	public float get_pixelsPerUnitMultiplier() { }

	// RVA: 0x1459548 Offset: 0x1455548 VA: 0x1459548
	public void set_pixelsPerUnitMultiplier(float value) { }

	// RVA: 0x1459568 Offset: 0x1455568 VA: 0x1459568
	public float get_pixelsPerUnit() { }

	// RVA: 0x145965C Offset: 0x145565C VA: 0x145965C
	protected float get_multipliedPixelsPerUnit() { }

	// RVA: 0x1459678 Offset: 0x1455678 VA: 0x1459678 Slot: 32
	public override Material get_material() { }

	// RVA: 0x14597A4 Offset: 0x14557A4 VA: 0x14597A4 Slot: 33
	public override void set_material(Material value) { }

	// RVA: 0x14597A8 Offset: 0x14557A8 VA: 0x14597A8 Slot: 73
	public virtual void OnBeforeSerialize() { }

	// RVA: 0x14597AC Offset: 0x14557AC VA: 0x14597AC Slot: 74
	public virtual void OnAfterDeserialize() { }

	// RVA: 0x14597FC Offset: 0x14557FC VA: 0x14597FC
	private void PreserveSpriteAspectRatio(ref Rect rect, Vector2 spriteSize) { }

	// RVA: 0x1459890 Offset: 0x1455890 VA: 0x1459890
	private Vector4 GetDrawingDimensions(bool shouldPreserveAspect) { }

	// RVA: 0x1459C40 Offset: 0x1455C40 VA: 0x1459C40 Slot: 44
	public override void SetNativeSize() { }

	// RVA: 0x1459D80 Offset: 0x1455D80 VA: 0x1459D80 Slot: 43
	protected override void OnPopulateMesh(VertexHelper toFill) { }

	// RVA: 0x1458A70 Offset: 0x1454A70 VA: 0x1458A70
	private void TrackSprite() { }

	// RVA: 0x145C174 Offset: 0x1458174 VA: 0x145C174 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x145C190 Offset: 0x1458190 VA: 0x145C190 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x145C284 Offset: 0x1458284 VA: 0x145C284 Slot: 40
	protected override void UpdateMaterial() { }

	// RVA: 0x145C378 Offset: 0x1458378 VA: 0x145C378 Slot: 15
	protected override void OnCanvasHierarchyChanged() { }

	// RVA: 0x1459EC4 Offset: 0x1455EC4 VA: 0x1459EC4
	private void GenerateSimpleSprite(VertexHelper vh, bool lPreserveAspect) { }

	// RVA: 0x145A188 Offset: 0x1456188 VA: 0x145A188
	private void GenerateSprite(VertexHelper vh, bool lPreserveAspect) { }

	// RVA: 0x145A468 Offset: 0x1456468 VA: 0x145A468
	private void GenerateSlicedSprite(VertexHelper toFill) { }

	// RVA: 0x145AA28 Offset: 0x1456A28 VA: 0x145AA28
	private void GenerateTiledSprite(VertexHelper toFill) { }

	// RVA: 0x145C694 Offset: 0x1458694 VA: 0x145C694
	private static void AddQuad(VertexHelper vertexHelper, Vector3[] quadPositions, Color32 color, Vector3[] quadUVs) { }

	// RVA: 0x145C540 Offset: 0x1458540 VA: 0x145C540
	private static void AddQuad(VertexHelper vertexHelper, Vector2 posMin, Vector2 posMax, Color32 color, Vector2 uvMin, Vector2 uvMax) { }

	// RVA: 0x145C480 Offset: 0x1458480 VA: 0x145C480
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect) { }

	// RVA: 0x145B780 Offset: 0x1457780 VA: 0x145B780
	private void GenerateFilledSprite(VertexHelper toFill, bool preserveAspect) { }

	// RVA: 0x145C778 Offset: 0x1458778 VA: 0x145C778
	private static bool RadialCut(Vector3[] xy, Vector3[] uv, float fill, bool invert, int corner) { }

	// RVA: 0x145C898 Offset: 0x1458898 VA: 0x145C898
	private static void RadialCut(Vector3[] xy, float cos, float sin, bool invert, int corner) { }

	// RVA: 0x145CCC4 Offset: 0x1458CC4 VA: 0x145CCC4 Slot: 75
	public virtual void CalculateLayoutInputHorizontal() { }

	// RVA: 0x145CCC8 Offset: 0x1458CC8 VA: 0x145CCC8 Slot: 76
	public virtual void CalculateLayoutInputVertical() { }

	// RVA: 0x145CCCC Offset: 0x1458CCC VA: 0x145CCCC Slot: 77
	public virtual float get_minWidth() { }

	// RVA: 0x145CCD4 Offset: 0x1458CD4 VA: 0x145CCD4 Slot: 78
	public virtual float get_preferredWidth() { }

	// RVA: 0x145CD9C Offset: 0x1458D9C VA: 0x145CD9C Slot: 79
	public virtual float get_flexibleWidth() { }

	// RVA: 0x145CDA4 Offset: 0x1458DA4 VA: 0x145CDA4 Slot: 80
	public virtual float get_minHeight() { }

	// RVA: 0x145CDAC Offset: 0x1458DAC VA: 0x145CDAC Slot: 81
	public virtual float get_preferredHeight() { }

	// RVA: 0x145CE74 Offset: 0x1458E74 VA: 0x145CE74 Slot: 82
	public virtual float get_flexibleHeight() { }

	// RVA: 0x145CE7C Offset: 0x1458E7C VA: 0x145CE7C Slot: 83
	public virtual int get_layoutPriority() { }

	// RVA: 0x145CE84 Offset: 0x1458E84 VA: 0x145CE84 Slot: 84
	public virtual bool IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera) { }

	// RVA: 0x145D210 Offset: 0x1459210 VA: 0x145D210
	private Vector2 MapCoordinate(Vector2 local, Rect rect) { }

	// RVA: 0x145D468 Offset: 0x1459468 VA: 0x145D468
	private static void RebuildImage(SpriteAtlas spriteAtlas) { }

	// RVA: 0x145C068 Offset: 0x1458068 VA: 0x145C068
	private static void TrackImage(Image g) { }

	// RVA: 0x145C204 Offset: 0x1458204 VA: 0x145C204
	private static void UnTrackImage(Image g) { }

	// RVA: 0x145D620 Offset: 0x1459620 VA: 0x145D620 Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x145D658 Offset: 0x1459658 VA: 0x145D658
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x14589E0 Offset: 0x14549E0 VA: 0x14589E0
	private void <set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0() { }

	[CompilerGenerated]
	// RVA: 0x145D780 Offset: 0x1459780 VA: 0x145D780
	private bool <set_sprite>g__SpriteSupportsAlphaHitTest|11_1() { }
}


// Namespace: UnityEngine.UI
public interface IMaskable // TypeDefIndex: 6393
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void RecalculateMasking();
}


// Namespace: 
public enum InputField.ContentType // TypeDefIndex: 6394
{
	// Fields
	public int value__; // 0x0
	public const InputField.ContentType Standard = 0;
	public const InputField.ContentType Autocorrected = 1;
	public const InputField.ContentType IntegerNumber = 2;
	public const InputField.ContentType DecimalNumber = 3;
	public const InputField.ContentType Alphanumeric = 4;
	public const InputField.ContentType Name = 5;
	public const InputField.ContentType EmailAddress = 6;
	public const InputField.ContentType Password = 7;
	public const InputField.ContentType Pin = 8;
	public const InputField.ContentType Custom = 9;
}


// Namespace: 
public enum InputField.InputType // TypeDefIndex: 6395
{
	// Fields
	public int value__; // 0x0
	public const InputField.InputType Standard = 0;
	public const InputField.InputType AutoCorrect = 1;
	public const InputField.InputType Password = 2;
}


// Namespace: 
public enum InputField.CharacterValidation // TypeDefIndex: 6396
{
	// Fields
	public int value__; // 0x0
	public const InputField.CharacterValidation None = 0;
	public const InputField.CharacterValidation Integer = 1;
	public const InputField.CharacterValidation Decimal = 2;
	public const InputField.CharacterValidation Alphanumeric = 3;
	public const InputField.CharacterValidation Name = 4;
	public const InputField.CharacterValidation EmailAddress = 5;
}


// Namespace: 
public enum InputField.LineType // TypeDefIndex: 6397
{
	// Fields
	public int value__; // 0x0
	public const InputField.LineType SingleLine = 0;
	public const InputField.LineType MultiLineSubmit = 1;
	public const InputField.LineType MultiLineNewline = 2;
}


// Namespace: 
public sealed class InputField.OnValidateInput : MulticastDelegate // TypeDefIndex: 6398
{
	// Methods

	// RVA: 0x15ABA28 Offset: 0x15A7A28 VA: 0x15ABA28
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15ABAC8 Offset: 0x15A7AC8 VA: 0x15ABAC8 Slot: 12
	public virtual char Invoke(string text, int charIndex, char addedChar) { }
}


// Namespace: 
[Serializable]
public class InputField.SubmitEvent : UnityEvent<string> // TypeDefIndex: 6399
{
	// Methods

	// RVA: 0x15ABADC Offset: 0x15A7ADC VA: 0x15ABADC
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class InputField.EndEditEvent : UnityEvent<string> // TypeDefIndex: 6400
{
	// Methods

	// RVA: 0x15ABB24 Offset: 0x15A7B24 VA: 0x15ABB24
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class InputField.OnChangeEvent : UnityEvent<string> // TypeDefIndex: 6401
{
	// Methods

	// RVA: 0x15ABB6C Offset: 0x15A7B6C VA: 0x15ABB6C
	public void .ctor() { }
}


// Namespace: 
protected enum InputField.EditState // TypeDefIndex: 6402
{
	// Fields
	public int value__; // 0x0
	public const InputField.EditState Continue = 0;
	public const InputField.EditState Finish = 1;
}


// Namespace: 
[CompilerGenerated]
private sealed class InputField.<CaretBlink>d__172 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6403
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public InputField <>4__this; // 0x20

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x15ABBB4 Offset: 0x15A7BB4 VA: 0x15ABBB4
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x15ABBDC Offset: 0x15A7BDC VA: 0x15ABBDC Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x15ABBE0 Offset: 0x15A7BE0 VA: 0x15ABBE0 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x15ABCDC Offset: 0x15A7CDC VA: 0x15ABCDC Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x15ABCE4 Offset: 0x15A7CE4 VA: 0x15ABCE4 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x15ABD1C Offset: 0x15A7D1C VA: 0x15ABD1C Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class InputField.<MouseDragOutsideRect>d__196 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6404
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public PointerEventData eventData; // 0x20
	public InputField <>4__this; // 0x28

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x15ABD24 Offset: 0x15A7D24 VA: 0x15ABD24
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x15ABD4C Offset: 0x15A7D4C VA: 0x15ABD4C Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x15ABD50 Offset: 0x15A7D50 VA: 0x15ABD50 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x15AC050 Offset: 0x15A8050 VA: 0x15AC050 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x15AC058 Offset: 0x15A8058 VA: 0x15AC058 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x15AC090 Offset: 0x15A8090 VA: 0x15AC090 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: UnityEngine.UI
public class InputField : Selectable, IUpdateSelectedHandler, IEventSystemHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler, ISubmitHandler, ICanvasElement, ILayoutElement // TypeDefIndex: 6405
{
	// Fields
	protected TouchScreenKeyboard m_Keyboard; // 0x100
	private static readonly char[] kSeparators; // 0x0
	private static bool s_IsQuestDeviceEvaluated; // 0x8
	private static bool s_IsQuestDevice; // 0x9
	[FormerlySerializedAs("text")]
	[SerializeField]
	protected Text m_TextComponent; // 0x108
	[SerializeField]
	protected Graphic m_Placeholder; // 0x110
	[SerializeField]
	private InputField.ContentType m_ContentType; // 0x118
	[SerializeField]
	[FormerlySerializedAs("inputType")]
	private InputField.InputType m_InputType; // 0x11C
	[FormerlySerializedAs("asteriskChar")]
	[SerializeField]
	private char m_AsteriskChar; // 0x120
	[FormerlySerializedAs("keyboardType")]
	[SerializeField]
	private TouchScreenKeyboardType m_KeyboardType; // 0x124
	[SerializeField]
	private InputField.LineType m_LineType; // 0x128
	[FormerlySerializedAs("hideMobileInput")]
	[SerializeField]
	private bool m_HideMobileInput; // 0x12C
	[FormerlySerializedAs("validation")]
	[SerializeField]
	private InputField.CharacterValidation m_CharacterValidation; // 0x130
	[FormerlySerializedAs("characterLimit")]
	[SerializeField]
	private int m_CharacterLimit; // 0x134
	[FormerlySerializedAs("onSubmit")]
	[FormerlySerializedAs("m_OnSubmit")]
	[FormerlySerializedAs("m_EndEdit")]
	[FormerlySerializedAs("m_OnEndEdit")]
	[SerializeField]
	private InputField.SubmitEvent m_OnSubmit; // 0x138
	[SerializeField]
	private InputField.EndEditEvent m_OnDidEndEdit; // 0x140
	[FormerlySerializedAs("onValueChange")]
	[SerializeField]
	[FormerlySerializedAs("m_OnValueChange")]
	private InputField.OnChangeEvent m_OnValueChanged; // 0x148
	[FormerlySerializedAs("onValidateInput")]
	[SerializeField]
	private InputField.OnValidateInput m_OnValidateInput; // 0x150
	[FormerlySerializedAs("selectionColor")]
	[SerializeField]
	private Color m_CaretColor; // 0x158
	[SerializeField]
	private bool m_CustomCaretColor; // 0x168
	[SerializeField]
	private Color m_SelectionColor; // 0x16C
	[SerializeField]
	[FormerlySerializedAs("mValue")]
	protected string m_Text; // 0x180
	[SerializeField]
	private float m_CaretBlinkRate; // 0x188
	[SerializeField]
	private int m_CaretWidth; // 0x18C
	[SerializeField]
	private bool m_ReadOnly; // 0x190
	[SerializeField]
	private bool m_ShouldActivateOnSelect; // 0x191
	protected int m_CaretPosition; // 0x194
	protected int m_CaretSelectPosition; // 0x198
	private RectTransform caretRectTrans; // 0x1A0
	protected UIVertex[] m_CursorVerts; // 0x1A8
	private TextGenerator m_InputTextCache; // 0x1B0
	private CanvasRenderer m_CachedInputRenderer; // 0x1B8
	private bool m_PreventFontCallback; // 0x1C0
	protected Mesh m_Mesh; // 0x1C8
	private bool m_AllowInput; // 0x1D0
	private bool m_ShouldActivateNextUpdate; // 0x1D1
	private bool m_UpdateDrag; // 0x1D2
	private bool m_DragPositionOutOfBounds; // 0x1D3
	private const float kHScrollSpeed = 0.05;
	private const float kVScrollSpeed = 0.1;
	protected bool m_CaretVisible; // 0x1D4
	private Coroutine m_BlinkCoroutine; // 0x1D8
	private float m_BlinkStartTime; // 0x1E0
	protected int m_DrawStart; // 0x1E4
	protected int m_DrawEnd; // 0x1E8
	private Coroutine m_DragCoroutine; // 0x1F0
	private string m_OriginalText; // 0x1F8
	private bool m_WasCanceled; // 0x200
	private bool m_HasDoneFocusTransition; // 0x201
	private WaitForSecondsRealtime m_WaitForSecondsRealtime; // 0x208
	private bool m_TouchKeyboardAllowsInPlaceEditing; // 0x210
	private bool m_IsCompositionActive; // 0x211
	private const string kEmailSpecialCharacters = "!#$%&\'*+-/=?^_`{|}~";
	private const string kOculusQuestDeviceModel = "Oculus Quest";
	private Event m_ProcessingEvent; // 0x218
	private const int k_MaxTextLength = 16382;

	// Properties
	private BaseInput input { get; }
	private string compositionString { get; }
	protected Mesh mesh { get; }
	protected TextGenerator cachedInputTextGenerator { get; }
	public bool shouldHideMobileInput { get; set; }
	public virtual bool shouldActivateOnSelect { get; set; }
	public string text { get; set; }
	public bool isFocused { get; }
	public float caretBlinkRate { get; set; }
	public int caretWidth { get; set; }
	public Text textComponent { get; set; }
	public Graphic placeholder { get; set; }
	public Color caretColor { get; set; }
	public bool customCaretColor { get; set; }
	public Color selectionColor { get; set; }
	public InputField.EndEditEvent onEndEdit { get; set; }
	public InputField.SubmitEvent onSubmit { get; set; }
	[Obsolete("onValueChange has been renamed to onValueChanged")]
	public InputField.OnChangeEvent onValueChange { get; set; }
	public InputField.OnChangeEvent onValueChanged { get; set; }
	public InputField.OnValidateInput onValidateInput { get; set; }
	public int characterLimit { get; set; }
	public InputField.ContentType contentType { get; set; }
	public InputField.LineType lineType { get; set; }
	public InputField.InputType inputType { get; set; }
	public TouchScreenKeyboard touchScreenKeyboard { get; }
	public TouchScreenKeyboardType keyboardType { get; set; }
	public InputField.CharacterValidation characterValidation { get; set; }
	public bool readOnly { get; set; }
	public bool multiLine { get; }
	public char asteriskChar { get; set; }
	public bool wasCanceled { get; }
	protected int caretPositionInternal { get; set; }
	protected int caretSelectPositionInternal { get; set; }
	private bool hasSelection { get; }
	public int caretPosition { get; set; }
	public int selectionAnchorPosition { get; set; }
	public int selectionFocusPosition { get; set; }
	private static string clipboard { get; set; }
	public virtual float minWidth { get; }
	public virtual float preferredWidth { get; }
	public virtual float flexibleWidth { get; }
	public virtual float minHeight { get; }
	public virtual float preferredHeight { get; }
	public virtual float flexibleHeight { get; }
	public virtual int layoutPriority { get; }

	// Methods

	// RVA: 0x145D8AC Offset: 0x14598AC VA: 0x145D8AC
	private BaseInput get_input() { }

	// RVA: 0x145D9BC Offset: 0x14599BC VA: 0x145D9BC
	private string get_compositionString() { }

	// RVA: 0x145DA50 Offset: 0x1459A50 VA: 0x145DA50
	protected void .ctor() { }

	// RVA: 0x145DC8C Offset: 0x1459C8C VA: 0x145DC8C
	protected Mesh get_mesh() { }

	// RVA: 0x145DD2C Offset: 0x1459D2C VA: 0x145DD2C
	protected TextGenerator get_cachedInputTextGenerator() { }

	// RVA: 0x145DD90 Offset: 0x1459D90 VA: 0x145DD90
	public void set_shouldHideMobileInput(bool value) { }

	// RVA: 0x145DDF4 Offset: 0x1459DF4 VA: 0x145DDF4
	public bool get_shouldHideMobileInput() { }

	// RVA: 0x145DE7C Offset: 0x1459E7C VA: 0x145DE7C Slot: 59
	public virtual void set_shouldActivateOnSelect(bool value) { }

	// RVA: 0x145DE88 Offset: 0x1459E88 VA: 0x145DE88 Slot: 60
	public virtual bool get_shouldActivateOnSelect() { }

	// RVA: 0x145DEF8 Offset: 0x1459EF8 VA: 0x145DEF8
	public string get_text() { }

	// RVA: 0x145DF00 Offset: 0x1459F00 VA: 0x145DF00
	public void set_text(string value) { }

	// RVA: 0x145E23C Offset: 0x145A23C VA: 0x145E23C
	public void SetTextWithoutNotify(string input) { }

	// RVA: 0x145DF08 Offset: 0x1459F08 VA: 0x145DF08
	private void SetText(string value, bool sendCallback = True) { }

	// RVA: 0x145E6B8 Offset: 0x145A6B8 VA: 0x145E6B8
	public bool get_isFocused() { }

	// RVA: 0x145E6C0 Offset: 0x145A6C0 VA: 0x145E6C0
	public float get_caretBlinkRate() { }

	// RVA: 0x145E6C8 Offset: 0x145A6C8 VA: 0x145E6C8
	public void set_caretBlinkRate(float value) { }

	// RVA: 0x145E790 Offset: 0x145A790 VA: 0x145E790
	public int get_caretWidth() { }

	// RVA: 0x145E798 Offset: 0x145A798 VA: 0x145E798
	public void set_caretWidth(int value) { }

	// RVA: 0x145E858 Offset: 0x145A858 VA: 0x145E858
	public Text get_textComponent() { }

	// RVA: 0x145E860 Offset: 0x145A860 VA: 0x145E860
	public void set_textComponent(Text value) { }

	// RVA: 0x145EAC8 Offset: 0x145AAC8 VA: 0x145EAC8
	public Graphic get_placeholder() { }

	// RVA: 0x145EAD0 Offset: 0x145AAD0 VA: 0x145EAD0
	public void set_placeholder(Graphic value) { }

	// RVA: 0x145EB28 Offset: 0x145AB28 VA: 0x145EB28
	public Color get_caretColor() { }

	// RVA: 0x145EB6C Offset: 0x145AB6C VA: 0x145EB6C
	public void set_caretColor(Color value) { }

	// RVA: 0x145EB98 Offset: 0x145AB98 VA: 0x145EB98
	public bool get_customCaretColor() { }

	// RVA: 0x145EBA0 Offset: 0x145ABA0 VA: 0x145EBA0
	public void set_customCaretColor(bool value) { }

	// RVA: 0x145EBBC Offset: 0x145ABBC VA: 0x145EBBC
	public Color get_selectionColor() { }

	// RVA: 0x145EBD0 Offset: 0x145ABD0 VA: 0x145EBD0
	public void set_selectionColor(Color value) { }

	// RVA: 0x145EBFC Offset: 0x145ABFC VA: 0x145EBFC
	public InputField.EndEditEvent get_onEndEdit() { }

	// RVA: 0x145EC04 Offset: 0x145AC04 VA: 0x145EC04
	public void set_onEndEdit(InputField.EndEditEvent value) { }

	// RVA: 0x145EC5C Offset: 0x145AC5C VA: 0x145EC5C
	public InputField.SubmitEvent get_onSubmit() { }

	// RVA: 0x145EC64 Offset: 0x145AC64 VA: 0x145EC64
	public void set_onSubmit(InputField.SubmitEvent value) { }

	// RVA: 0x145ECBC Offset: 0x145ACBC VA: 0x145ECBC
	public InputField.OnChangeEvent get_onValueChange() { }

	// RVA: 0x145ECC4 Offset: 0x145ACC4 VA: 0x145ECC4
	public void set_onValueChange(InputField.OnChangeEvent value) { }

	// RVA: 0x145ED20 Offset: 0x145AD20 VA: 0x145ED20
	public InputField.OnChangeEvent get_onValueChanged() { }

	// RVA: 0x145ECC8 Offset: 0x145ACC8 VA: 0x145ECC8
	public void set_onValueChanged(InputField.OnChangeEvent value) { }

	// RVA: 0x145ED28 Offset: 0x145AD28 VA: 0x145ED28
	public InputField.OnValidateInput get_onValidateInput() { }

	// RVA: 0x145ED30 Offset: 0x145AD30 VA: 0x145ED30
	public void set_onValidateInput(InputField.OnValidateInput value) { }

	// RVA: 0x145ED88 Offset: 0x145AD88 VA: 0x145ED88
	public int get_characterLimit() { }

	// RVA: 0x145ED90 Offset: 0x145AD90 VA: 0x145ED90
	public void set_characterLimit(int value) { }

	// RVA: 0x145EE48 Offset: 0x145AE48 VA: 0x145EE48
	public InputField.ContentType get_contentType() { }

	// RVA: 0x145EE50 Offset: 0x145AE50 VA: 0x145EE50
	public void set_contentType(InputField.ContentType value) { }

	// RVA: 0x145EF78 Offset: 0x145AF78 VA: 0x145EF78
	public InputField.LineType get_lineType() { }

	// RVA: 0x145EF80 Offset: 0x145AF80 VA: 0x145EF80
	public void set_lineType(InputField.LineType value) { }

	// RVA: 0x145F09C Offset: 0x145B09C VA: 0x145F09C
	public InputField.InputType get_inputType() { }

	// RVA: 0x145F0A4 Offset: 0x145B0A4 VA: 0x145F0A4
	public void set_inputType(InputField.InputType value) { }

	// RVA: 0x145F138 Offset: 0x145B138 VA: 0x145F138
	public TouchScreenKeyboard get_touchScreenKeyboard() { }

	// RVA: 0x145F140 Offset: 0x145B140 VA: 0x145F140
	public TouchScreenKeyboardType get_keyboardType() { }

	// RVA: 0x145F148 Offset: 0x145B148 VA: 0x145F148
	public void set_keyboardType(TouchScreenKeyboardType value) { }

	// RVA: 0x145F1C4 Offset: 0x145B1C4 VA: 0x145F1C4
	public InputField.CharacterValidation get_characterValidation() { }

	// RVA: 0x145F1CC Offset: 0x145B1CC VA: 0x145F1CC
	public void set_characterValidation(InputField.CharacterValidation value) { }

	// RVA: 0x145F248 Offset: 0x145B248 VA: 0x145F248
	public bool get_readOnly() { }

	// RVA: 0x145F250 Offset: 0x145B250 VA: 0x145F250
	public void set_readOnly(bool value) { }

	// RVA: 0x145F25C Offset: 0x145B25C VA: 0x145F25C
	public bool get_multiLine() { }

	// RVA: 0x145F270 Offset: 0x145B270 VA: 0x145F270
	public char get_asteriskChar() { }

	// RVA: 0x145F278 Offset: 0x145B278 VA: 0x145F278
	public void set_asteriskChar(char value) { }

	// RVA: 0x145F2E4 Offset: 0x145B2E4 VA: 0x145F2E4
	public bool get_wasCanceled() { }

	// RVA: 0x145F2EC Offset: 0x145B2EC VA: 0x145F2EC
	protected void ClampPos(ref int pos) { }

	// RVA: 0x145F324 Offset: 0x145B324 VA: 0x145F324
	protected int get_caretPositionInternal() { }

	// RVA: 0x145F348 Offset: 0x145B348 VA: 0x145F348
	protected void set_caretPositionInternal(int value) { }

	// RVA: 0x145F380 Offset: 0x145B380 VA: 0x145F380
	protected int get_caretSelectPositionInternal() { }

	// RVA: 0x145F3A4 Offset: 0x145B3A4 VA: 0x145F3A4
	protected void set_caretSelectPositionInternal(int value) { }

	// RVA: 0x145F3DC Offset: 0x145B3DC VA: 0x145F3DC
	private bool get_hasSelection() { }

	// RVA: 0x145F40C Offset: 0x145B40C VA: 0x145F40C
	public int get_caretPosition() { }

	// RVA: 0x145F430 Offset: 0x145B430 VA: 0x145F430
	public void set_caretPosition(int value) { }

	// RVA: 0x145F510 Offset: 0x145B510 VA: 0x145F510
	public int get_selectionAnchorPosition() { }

	// RVA: 0x145F458 Offset: 0x145B458 VA: 0x145F458
	public void set_selectionAnchorPosition(int value) { }

	// RVA: 0x145F534 Offset: 0x145B534 VA: 0x145F534
	public int get_selectionFocusPosition() { }

	// RVA: 0x145F4B4 Offset: 0x145B4B4 VA: 0x145F4B4
	public void set_selectionFocusPosition(int value) { }

	// RVA: 0x145F558 Offset: 0x145B558 VA: 0x145F558 Slot: 4
	protected override void Awake() { }

	// RVA: 0x145F618 Offset: 0x145B618 VA: 0x145F618 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x145F868 Offset: 0x145B868 VA: 0x145F868 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x145FBFC Offset: 0x145BBFC VA: 0x145FBFC Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x145FC5C Offset: 0x145BC5C VA: 0x145FC5C
	private IEnumerator CaretBlink() { }

	// RVA: 0x145FCC4 Offset: 0x145BCC4 VA: 0x145FCC4
	private void SetCaretVisible() { }

	// RVA: 0x145E73C Offset: 0x145A73C VA: 0x145E73C
	private void SetCaretActive() { }

	// RVA: 0x145FCFC Offset: 0x145BCFC VA: 0x145FCFC
	private void UpdateCaretMaterial() { }

	// RVA: 0x145FE08 Offset: 0x145BE08 VA: 0x145FE08
	protected void OnFocus() { }

	// RVA: 0x145FE38 Offset: 0x145BE38 VA: 0x145FE38
	protected void SelectAll() { }

	// RVA: 0x145FE68 Offset: 0x145BE68 VA: 0x145FE68
	public void MoveTextEnd(bool shift) { }

	// RVA: 0x145FEC8 Offset: 0x145BEC8 VA: 0x145FEC8
	public void MoveTextStart(bool shift) { }

	// RVA: 0x145FF44 Offset: 0x145BF44 VA: 0x145FF44
	private static string get_clipboard() { }

	// RVA: 0x145FF94 Offset: 0x145BF94 VA: 0x145FF94
	private static void set_clipboard(string value) { }

	// RVA: 0x145FFEC Offset: 0x145BFEC VA: 0x145FFEC
	private bool TouchScreenKeyboardShouldBeUsed() { }

	// RVA: 0x14600A4 Offset: 0x145C0A4 VA: 0x14600A4
	private bool InPlaceEditing() { }

	// RVA: 0x14600D4 Offset: 0x145C0D4 VA: 0x14600D4
	private bool InPlaceEditingChanged() { }

	// RVA: 0x1460154 Offset: 0x145C154 VA: 0x1460154
	private RangeInt GetInternalSelection() { }

	// RVA: 0x1460208 Offset: 0x145C208 VA: 0x1460208
	private void UpdateKeyboardCaret() { }

	// RVA: 0x14602D0 Offset: 0x145C2D0 VA: 0x14602D0
	private void UpdateCaretFromKeyboard() { }

	// RVA: 0x14603B4 Offset: 0x145C3B4 VA: 0x14603B4 Slot: 61
	protected virtual void LateUpdate() { }

	[Obsolete("This function is no longer used. Please use RectTransformUtility.ScreenPointToLocalPointInRectangle() instead.")]
	// RVA: 0x146198C Offset: 0x145D98C VA: 0x146198C
	public Vector2 ScreenToLocal(Vector2 screen) { }

	// RVA: 0x1461D20 Offset: 0x145DD20 VA: 0x1461D20
	private int GetUnclampedCharacterLineFromPosition(Vector2 pos, TextGenerator generator) { }

	// RVA: 0x1461F30 Offset: 0x145DF30 VA: 0x1461F30
	protected int GetCharacterIndexFromPosition(Vector2 pos) { }

	// RVA: 0x1462328 Offset: 0x145E328 VA: 0x1462328
	private bool MayDrag(PointerEventData eventData) { }

	// RVA: 0x1462400 Offset: 0x145E400 VA: 0x1462400 Slot: 62
	public virtual void OnBeginDrag(PointerEventData eventData) { }

	// RVA: 0x1462420 Offset: 0x145E420 VA: 0x1462420 Slot: 63
	public virtual void OnDrag(PointerEventData eventData) { }

	// RVA: 0x146260C Offset: 0x145E60C VA: 0x146260C
	private IEnumerator MouseDragOutsideRect(PointerEventData eventData) { }

	// RVA: 0x1462680 Offset: 0x145E680 VA: 0x1462680 Slot: 64
	public virtual void OnEndDrag(PointerEventData eventData) { }

	// RVA: 0x146269C Offset: 0x145E69C VA: 0x146269C Slot: 32
	public override void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x1462888 Offset: 0x145E888 VA: 0x1462888
	protected InputField.EditState KeyPressed(Event evt) { }

	// RVA: 0x1463348 Offset: 0x145F348 VA: 0x1463348
	private bool IsValidChar(char c) { }

	// RVA: 0x14633B8 Offset: 0x145F3B8 VA: 0x14633B8
	public void ProcessEvent(Event e) { }

	// RVA: 0x14633BC Offset: 0x145F3BC VA: 0x14633BC Slot: 65
	public virtual void OnUpdateSelected(BaseEventData eventData) { }

	// RVA: 0x1462E34 Offset: 0x145EE34 VA: 0x1462E34
	private string GetSelectedString() { }

	// RVA: 0x146355C Offset: 0x145F55C VA: 0x146355C
	private int FindtNextWordBegin() { }

	// RVA: 0x1463204 Offset: 0x145F204 VA: 0x1463204
	private void MoveRight(bool shift, bool ctrl) { }

	// RVA: 0x1463618 Offset: 0x145F618 VA: 0x1463618
	private int FindtPrevWordBegin() { }

	// RVA: 0x14630D8 Offset: 0x145F0D8 VA: 0x14630D8
	private void MoveLeft(bool shift, bool ctrl) { }

	// RVA: 0x14636B8 Offset: 0x145F6B8 VA: 0x14636B8
	private int DetermineCharacterLine(int charPos, TextGenerator generator) { }

	// RVA: 0x14637C8 Offset: 0x145F7C8 VA: 0x14637C8
	private int LineUpCharacterPosition(int originalPos, bool goToFirstChar) { }

	// RVA: 0x1463B20 Offset: 0x145FB20 VA: 0x1463B20
	private int LineDownCharacterPosition(int originalPos, bool goToLastChar) { }

	// RVA: 0x146333C Offset: 0x145F33C VA: 0x146333C
	private void MoveDown(bool shift) { }

	// RVA: 0x1463DD4 Offset: 0x145FDD4 VA: 0x1463DD4
	private void MoveDown(bool shift, bool goToLastChar) { }

	// RVA: 0x1463330 Offset: 0x145F330 VA: 0x1463330
	private void MoveUp(bool shift) { }

	// RVA: 0x1463EF8 Offset: 0x145FEF8 VA: 0x1463EF8
	private void MoveUp(bool shift, bool goToFirstChar) { }

	// RVA: 0x1462EDC Offset: 0x145EEDC VA: 0x1462EDC
	private void Delete() { }

	// RVA: 0x1462D90 Offset: 0x145ED90 VA: 0x1462D90
	private void ForwardSpace() { }

	// RVA: 0x1462C8C Offset: 0x145EC8C VA: 0x1462C8C
	private void Backspace() { }

	// RVA: 0x1464050 Offset: 0x1460050 VA: 0x1464050
	private void Insert(char c) { }

	// RVA: 0x1463090 Offset: 0x145F090 VA: 0x1463090
	private void UpdateTouchKeyboardFromEditChanges() { }

	// RVA: 0x1461974 Offset: 0x145D974 VA: 0x1461974
	private void SendOnValueChangedAndUpdateLabel() { }

	// RVA: 0x145E244 Offset: 0x145A244 VA: 0x145E244
	private void SendOnValueChanged() { }

	// RVA: 0x1464168 Offset: 0x1460168 VA: 0x1464168
	protected void SendOnEndEdit() { }

	// RVA: 0x14611D8 Offset: 0x145D1D8 VA: 0x14611D8
	protected void SendOnSubmit() { }

	// RVA: 0x14641E8 Offset: 0x14601E8 VA: 0x14641E8 Slot: 66
	protected virtual void Append(string input) { }

	// RVA: 0x14642A4 Offset: 0x14602A4 VA: 0x14642A4 Slot: 67
	protected virtual void Append(char input) { }

	// RVA: 0x145E2C4 Offset: 0x145A2C4 VA: 0x145E2C4
	protected void UpdateLabel() { }

	// RVA: 0x1465050 Offset: 0x1461050 VA: 0x1465050
	private bool IsSelectionVisible() { }

	// RVA: 0x14650BC Offset: 0x14610BC VA: 0x14650BC
	private static int GetLineStartPosition(TextGenerator gen, int line) { }

	// RVA: 0x14621C4 Offset: 0x145E1C4 VA: 0x14621C4
	private static int GetLineEndPosition(TextGenerator gen, int line) { }

	// RVA: 0x1464514 Offset: 0x1460514 VA: 0x1464514
	private void SetDrawRangeToContainCaretPosition(int caretPos) { }

	// RVA: 0x146520C Offset: 0x146120C VA: 0x146520C
	public void ForceLabelUpdate() { }

	// RVA: 0x145E804 Offset: 0x145A804 VA: 0x145E804
	private void MarkGeometryAsDirty() { }

	// RVA: 0x1465210 Offset: 0x1461210 VA: 0x1465210 Slot: 68
	public virtual void Rebuild(CanvasUpdate update) { }

	// RVA: 0x1465644 Offset: 0x1461644 VA: 0x1465644 Slot: 69
	public virtual void LayoutComplete() { }

	// RVA: 0x1465648 Offset: 0x1461648 VA: 0x1465648 Slot: 70
	public virtual void GraphicUpdateComplete() { }

	// RVA: 0x1465220 Offset: 0x1461220 VA: 0x1465220
	private void UpdateGeometry() { }

	// RVA: 0x1460D18 Offset: 0x145CD18 VA: 0x1460D18
	private void AssignPositioningIfNeeded() { }

	// RVA: 0x146564C Offset: 0x146164C VA: 0x146564C
	private void OnFillVBO(Mesh vbo) { }

	// RVA: 0x14658D0 Offset: 0x14618D0 VA: 0x14658D0
	private void GenerateCaret(VertexHelper vbo, Vector2 roundingOffset) { }

	// RVA: 0x1466730 Offset: 0x1462730 VA: 0x1466730
	private void CreateCursorVerts() { }

	// RVA: 0x1465FD4 Offset: 0x1461FD4 VA: 0x1465FD4
	private void GenerateHighlight(VertexHelper vbo, Vector2 roundingOffset) { }

	// RVA: 0x1461258 Offset: 0x145D258 VA: 0x1461258
	protected char Validate(string text, int pos, char ch) { }

	// RVA: 0x1466880 Offset: 0x1462880 VA: 0x1466880
	public void ActivateInputField() { }

	// RVA: 0x14609D0 Offset: 0x145C9D0 VA: 0x14609D0
	private void ActivateInputFieldInternal() { }

	// RVA: 0x14669A0 Offset: 0x14629A0 VA: 0x14669A0 Slot: 36
	public override void OnSelect(BaseEventData eventData) { }

	// RVA: 0x14669DC Offset: 0x14629DC VA: 0x14669DC Slot: 71
	public virtual void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x145FA80 Offset: 0x145BA80 VA: 0x145FA80
	public void DeactivateInputField() { }

	// RVA: 0x1466A00 Offset: 0x1462A00 VA: 0x1466A00 Slot: 37
	public override void OnDeselect(BaseEventData eventData) { }

	// RVA: 0x1466A2C Offset: 0x1462A2C VA: 0x1466A2C Slot: 72
	public virtual void OnSubmit(BaseEventData eventData) { }

	// RVA: 0x145EEBC Offset: 0x145AEBC VA: 0x145EEBC
	private void EnforceContentType() { }

	// RVA: 0x145DBF8 Offset: 0x1459BF8 VA: 0x145DBF8
	private void EnforceTextHOverflow() { }

	// RVA: 0x145F038 Offset: 0x145B038 VA: 0x145F038
	private void SetToCustomIfContentTypeIsNot(InputField.ContentType[] allowedContentTypes) { }

	// RVA: 0x145F120 Offset: 0x145B120 VA: 0x145F120
	private void SetToCustom() { }

	// RVA: 0x1466A74 Offset: 0x1462A74 VA: 0x1466A74 Slot: 26
	protected override void DoStateTransition(Selectable.SelectionState state, bool instant) { }

	// RVA: 0x1466AA0 Offset: 0x1462AA0 VA: 0x1466AA0 Slot: 73
	public virtual void CalculateLayoutInputHorizontal() { }

	// RVA: 0x1466AA4 Offset: 0x1462AA4 VA: 0x1466AA4 Slot: 74
	public virtual void CalculateLayoutInputVertical() { }

	// RVA: 0x1466AA8 Offset: 0x1462AA8 VA: 0x1466AA8 Slot: 75
	public virtual float get_minWidth() { }

	// RVA: 0x1466AB0 Offset: 0x1462AB0 VA: 0x1466AB0 Slot: 76
	public virtual float get_preferredWidth() { }

	// RVA: 0x1466BFC Offset: 0x1462BFC VA: 0x1466BFC Slot: 77
	public virtual float get_flexibleWidth() { }

	// RVA: 0x1466C04 Offset: 0x1462C04 VA: 0x1466C04 Slot: 78
	public virtual float get_minHeight() { }

	// RVA: 0x1466C0C Offset: 0x1462C0C VA: 0x1466C0C Slot: 79
	public virtual float get_preferredHeight() { }

	// RVA: 0x1466D40 Offset: 0x1462D40 VA: 0x1466D40 Slot: 80
	public virtual float get_flexibleHeight() { }

	// RVA: 0x1466D48 Offset: 0x1462D48 VA: 0x1466D48 Slot: 81
	public virtual int get_layoutPriority() { }

	// RVA: 0x1466D50 Offset: 0x1462D50 VA: 0x1466D50
	private static void .cctor() { }

	// RVA: 0x1466DF0 Offset: 0x1462DF0 VA: 0x1466DF0 Slot: 46
	private Transform UnityEngine.UI.ICanvasElement.get_transform() { }
}


// Namespace: 
public enum AspectRatioFitter.AspectMode // TypeDefIndex: 6406
{
	// Fields
	public int value__; // 0x0
	public const AspectRatioFitter.AspectMode None = 0;
	public const AspectRatioFitter.AspectMode WidthControlsHeight = 1;
	public const AspectRatioFitter.AspectMode HeightControlsWidth = 2;
	public const AspectRatioFitter.AspectMode FitInParent = 3;
	public const AspectRatioFitter.AspectMode EnvelopeParent = 4;
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(RectTransform))]
[ExecuteAlways]
[DisallowMultipleComponent]
public class AspectRatioFitter : UIBehaviour, ILayoutSelfController, ILayoutController // TypeDefIndex: 6407
{
	// Fields
	[SerializeField]
	private AspectRatioFitter.AspectMode m_AspectMode; // 0x20
	[SerializeField]
	private float m_AspectRatio; // 0x24
	private RectTransform m_Rect; // 0x28
	private bool m_DelayedSetDirty; // 0x30
	private bool m_DoesParentExist; // 0x31
	private DrivenRectTransformTracker m_Tracker; // 0x32

	// Properties
	public AspectRatioFitter.AspectMode aspectMode { get; set; }
	public float aspectRatio { get; set; }
	private RectTransform rectTransform { get; }

	// Methods

	// RVA: 0x15AC098 Offset: 0x15A8098 VA: 0x15AC098
	public AspectRatioFitter.AspectMode get_aspectMode() { }

	// RVA: 0x15AC0A0 Offset: 0x15A80A0 VA: 0x15AC0A0
	public void set_aspectMode(AspectRatioFitter.AspectMode value) { }

	// RVA: 0x15AC110 Offset: 0x15A8110 VA: 0x15AC110
	public float get_aspectRatio() { }

	// RVA: 0x15AC118 Offset: 0x15A8118 VA: 0x15AC118
	public void set_aspectRatio(float value) { }

	// RVA: 0x15AC184 Offset: 0x15A8184 VA: 0x15AC184
	private RectTransform get_rectTransform() { }

	// RVA: 0x15AC228 Offset: 0x15A8228 VA: 0x15AC228
	protected void .ctor() { }

	// RVA: 0x15AC238 Offset: 0x15A8238 VA: 0x15AC238 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15AC2D0 Offset: 0x15A82D0 VA: 0x15AC2D0 Slot: 6
	protected override void Start() { }

	// RVA: 0x15AC414 Offset: 0x15A8414 VA: 0x15AC414 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15AC874 Offset: 0x15A8874 VA: 0x15AC874 Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x15AC90C Offset: 0x15A890C VA: 0x15AC90C Slot: 19
	protected virtual void Update() { }

	// RVA: 0x15AC920 Offset: 0x15A8920 VA: 0x15AC920 Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x15AC924 Offset: 0x15A8924 VA: 0x15AC924
	private void UpdateRect() { }

	// RVA: 0x15ACD08 Offset: 0x15A8D08 VA: 0x15ACD08
	private float GetSizeDeltaToProduceSize(float size, int axis) { }

	// RVA: 0x15ACC10 Offset: 0x15A8C10 VA: 0x15ACC10
	private Vector2 GetParentSize() { }

	// RVA: 0x15ACDFC Offset: 0x15A8DFC VA: 0x15ACDFC Slot: 20
	public virtual void SetLayoutHorizontal() { }

	// RVA: 0x15ACE00 Offset: 0x15A8E00 VA: 0x15ACE00 Slot: 21
	public virtual void SetLayoutVertical() { }

	// RVA: 0x15AC10C Offset: 0x15A810C VA: 0x15AC10C
	protected void SetDirty() { }

	// RVA: 0x15AC320 Offset: 0x15A8320 VA: 0x15AC320
	public bool IsComponentValidOnObject() { }

	// RVA: 0x15AC3EC Offset: 0x15A83EC VA: 0x15AC3EC
	public bool IsAspectModeValid() { }

	// RVA: 0x15ACE04 Offset: 0x15A8E04 VA: 0x15ACE04
	private bool DoesParentExists() { }
}


// Namespace: 
public enum CanvasScaler.ScaleMode // TypeDefIndex: 6408
{
	// Fields
	public int value__; // 0x0
	public const CanvasScaler.ScaleMode ConstantPixelSize = 0;
	public const CanvasScaler.ScaleMode ScaleWithScreenSize = 1;
	public const CanvasScaler.ScaleMode ConstantPhysicalSize = 2;
}


// Namespace: 
public enum CanvasScaler.ScreenMatchMode // TypeDefIndex: 6409
{
	// Fields
	public int value__; // 0x0
	public const CanvasScaler.ScreenMatchMode MatchWidthOrHeight = 0;
	public const CanvasScaler.ScreenMatchMode Expand = 1;
	public const CanvasScaler.ScreenMatchMode Shrink = 2;
}


// Namespace: 
public enum CanvasScaler.Unit // TypeDefIndex: 6410
{
	// Fields
	public int value__; // 0x0
	public const CanvasScaler.Unit Centimeters = 0;
	public const CanvasScaler.Unit Millimeters = 1;
	public const CanvasScaler.Unit Inches = 2;
	public const CanvasScaler.Unit Points = 3;
	public const CanvasScaler.Unit Picas = 4;
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(Canvas))]
[DisallowMultipleComponent]
[ExecuteAlways]
public class CanvasScaler : UIBehaviour // TypeDefIndex: 6411
{
	// Fields
	[Tooltip("Determines how UI elements in the Canvas are scaled.")]
	[SerializeField]
	private CanvasScaler.ScaleMode m_UiScaleMode; // 0x20
	[SerializeField]
	[Tooltip("If a sprite has this 'Pixels Per Unit' setting, then one pixel in the sprite will cover one unit in the UI.")]
	protected float m_ReferencePixelsPerUnit; // 0x24
	[Tooltip("Scales all UI elements in the Canvas by this factor.")]
	[SerializeField]
	protected float m_ScaleFactor; // 0x28
	[Tooltip("The resolution the UI layout is designed for. If the screen resolution is larger, the UI will be scaled up, and if it's smaller, the UI will be scaled down. This is done in accordance with the Screen Match Mode.")]
	[SerializeField]
	protected Vector2 m_ReferenceResolution; // 0x2C
	[SerializeField]
	[Tooltip("A mode used to scale the canvas area if the aspect ratio of the current resolution doesn't fit the reference resolution.")]
	protected CanvasScaler.ScreenMatchMode m_ScreenMatchMode; // 0x34
	[SerializeField]
	[Tooltip("Determines if the scaling is using the width or height as reference, or a mix in between.")]
	protected float m_MatchWidthOrHeight; // 0x38
	private const float kLogBase = 2;
	[SerializeField]
	[Tooltip("The physical unit to specify positions and sizes in.")]
	protected CanvasScaler.Unit m_PhysicalUnit; // 0x3C
	[Tooltip("The DPI to assume if the screen DPI is not known.")]
	[SerializeField]
	protected float m_FallbackScreenDPI; // 0x40
	[SerializeField]
	[Tooltip("The pixels per inch to use for sprites that have a 'Pixels Per Unit' setting that matches the 'Reference Pixels Per Unit' setting.")]
	protected float m_DefaultSpriteDPI; // 0x44
	[Tooltip("The amount of pixels per unit to use for dynamically created bitmaps in the UI, such as Text.")]
	[SerializeField]
	protected float m_DynamicPixelsPerUnit; // 0x48
	private Canvas m_Canvas; // 0x50
	private float m_PrevScaleFactor; // 0x58
	private float m_PrevReferencePixelsPerUnit; // 0x5C
	[SerializeField]
	protected bool m_PresetInfoIsWorld; // 0x60

	// Properties
	public CanvasScaler.ScaleMode uiScaleMode { get; set; }
	public float referencePixelsPerUnit { get; set; }
	public float scaleFactor { get; set; }
	public Vector2 referenceResolution { get; set; }
	public CanvasScaler.ScreenMatchMode screenMatchMode { get; set; }
	public float matchWidthOrHeight { get; set; }
	public CanvasScaler.Unit physicalUnit { get; set; }
	public float fallbackScreenDPI { get; set; }
	public float defaultSpriteDPI { get; set; }
	public float dynamicPixelsPerUnit { get; set; }

	// Methods

	// RVA: 0x15ACE0C Offset: 0x15A8E0C VA: 0x15ACE0C
	public CanvasScaler.ScaleMode get_uiScaleMode() { }

	// RVA: 0x15ACE14 Offset: 0x15A8E14 VA: 0x15ACE14
	public void set_uiScaleMode(CanvasScaler.ScaleMode value) { }

	// RVA: 0x15ACE1C Offset: 0x15A8E1C VA: 0x15ACE1C
	public float get_referencePixelsPerUnit() { }

	// RVA: 0x15ACE24 Offset: 0x15A8E24 VA: 0x15ACE24
	public void set_referencePixelsPerUnit(float value) { }

	// RVA: 0x15ACE2C Offset: 0x15A8E2C VA: 0x15ACE2C
	public float get_scaleFactor() { }

	// RVA: 0x15ACE34 Offset: 0x15A8E34 VA: 0x15ACE34
	public void set_scaleFactor(float value) { }

	// RVA: 0x15ACE48 Offset: 0x15A8E48 VA: 0x15ACE48
	public Vector2 get_referenceResolution() { }

	// RVA: 0x15ACE50 Offset: 0x15A8E50 VA: 0x15ACE50
	public void set_referenceResolution(Vector2 value) { }

	// RVA: 0x15ACEB4 Offset: 0x15A8EB4 VA: 0x15ACEB4
	public CanvasScaler.ScreenMatchMode get_screenMatchMode() { }

	// RVA: 0x15ACEBC Offset: 0x15A8EBC VA: 0x15ACEBC
	public void set_screenMatchMode(CanvasScaler.ScreenMatchMode value) { }

	// RVA: 0x15ACEC4 Offset: 0x15A8EC4 VA: 0x15ACEC4
	public float get_matchWidthOrHeight() { }

	// RVA: 0x15ACECC Offset: 0x15A8ECC VA: 0x15ACECC
	public void set_matchWidthOrHeight(float value) { }

	// RVA: 0x15ACED4 Offset: 0x15A8ED4 VA: 0x15ACED4
	public CanvasScaler.Unit get_physicalUnit() { }

	// RVA: 0x15ACEDC Offset: 0x15A8EDC VA: 0x15ACEDC
	public void set_physicalUnit(CanvasScaler.Unit value) { }

	// RVA: 0x15ACEE4 Offset: 0x15A8EE4 VA: 0x15ACEE4
	public float get_fallbackScreenDPI() { }

	// RVA: 0x15ACEEC Offset: 0x15A8EEC VA: 0x15ACEEC
	public void set_fallbackScreenDPI(float value) { }

	// RVA: 0x15ACEF4 Offset: 0x15A8EF4 VA: 0x15ACEF4
	public float get_defaultSpriteDPI() { }

	// RVA: 0x15ACEFC Offset: 0x15A8EFC VA: 0x15ACEFC
	public void set_defaultSpriteDPI(float value) { }

	// RVA: 0x15ACF0C Offset: 0x15A8F0C VA: 0x15ACF0C
	public float get_dynamicPixelsPerUnit() { }

	// RVA: 0x15ACF14 Offset: 0x15A8F14 VA: 0x15ACF14
	public void set_dynamicPixelsPerUnit(float value) { }

	// RVA: 0x15ACF1C Offset: 0x15A8F1C VA: 0x15ACF1C
	protected void .ctor() { }

	// RVA: 0x15ACF64 Offset: 0x15A8F64 VA: 0x15ACF64 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15AD03C Offset: 0x15A903C VA: 0x15AD03C
	private void Canvas_preWillRenderCanvases() { }

	// RVA: 0x15AD04C Offset: 0x15A904C VA: 0x15AD04C Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15AD174 Offset: 0x15A9174 VA: 0x15AD174 Slot: 17
	protected virtual void Handle() { }

	// RVA: 0x15AD270 Offset: 0x15A9270 VA: 0x15AD270 Slot: 18
	protected virtual void HandleWorldCanvas() { }

	// RVA: 0x15AD290 Offset: 0x15A9290 VA: 0x15AD290 Slot: 19
	protected virtual void HandleConstantPixelSize() { }

	// RVA: 0x15AD2B0 Offset: 0x15A92B0 VA: 0x15AD2B0 Slot: 20
	protected virtual void HandleScaleWithScreenSize() { }

	// RVA: 0x15AD4E4 Offset: 0x15A94E4 VA: 0x15AD4E4 Slot: 21
	protected virtual void HandleConstantPhysicalSize() { }

	// RVA: 0x15AD0F4 Offset: 0x15A90F4 VA: 0x15AD0F4
	protected void SetScaleFactor(float scaleFactor) { }

	// RVA: 0x15AD134 Offset: 0x15A9134 VA: 0x15AD134
	protected void SetReferencePixelsPerUnit(float referencePixelsPerUnit) { }
}


// Namespace: 
public enum ContentSizeFitter.FitMode // TypeDefIndex: 6412
{
	// Fields
	public int value__; // 0x0
	public const ContentSizeFitter.FitMode Unconstrained = 0;
	public const ContentSizeFitter.FitMode MinSize = 1;
	public const ContentSizeFitter.FitMode PreferredSize = 2;
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class ContentSizeFitter : UIBehaviour, ILayoutSelfController, ILayoutController // TypeDefIndex: 6413
{
	// Fields
	[SerializeField]
	protected ContentSizeFitter.FitMode m_HorizontalFit; // 0x20
	[SerializeField]
	protected ContentSizeFitter.FitMode m_VerticalFit; // 0x24
	private RectTransform m_Rect; // 0x28
	private DrivenRectTransformTracker m_Tracker; // 0x30

	// Properties
	public ContentSizeFitter.FitMode horizontalFit { get; set; }
	public ContentSizeFitter.FitMode verticalFit { get; set; }
	private RectTransform rectTransform { get; }

	// Methods

	// RVA: 0x15AD54C Offset: 0x15A954C VA: 0x15AD54C
	public ContentSizeFitter.FitMode get_horizontalFit() { }

	// RVA: 0x15AD554 Offset: 0x15A9554 VA: 0x15AD554
	public void set_horizontalFit(ContentSizeFitter.FitMode value) { }

	// RVA: 0x15AD644 Offset: 0x15A9644 VA: 0x15AD644
	public ContentSizeFitter.FitMode get_verticalFit() { }

	// RVA: 0x15AD64C Offset: 0x15A964C VA: 0x15AD64C
	public void set_verticalFit(ContentSizeFitter.FitMode value) { }

	// RVA: 0x15AD6B8 Offset: 0x15A96B8 VA: 0x15AD6B8
	private RectTransform get_rectTransform() { }

	// RVA: 0x15AD75C Offset: 0x15A975C VA: 0x15AD75C
	protected void .ctor() { }

	// RVA: 0x15AD764 Offset: 0x15A9764 VA: 0x15AD764 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15AD780 Offset: 0x15A9780 VA: 0x15AD780 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15AD7FC Offset: 0x15A97FC VA: 0x15AD7FC Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x15AD800 Offset: 0x15A9800 VA: 0x15AD800
	private void HandleSelfFittingAlongAxis(int axis) { }

	// RVA: 0x15AD8FC Offset: 0x15A98FC VA: 0x15AD8FC Slot: 19
	public virtual void SetLayoutHorizontal() { }

	// RVA: 0x15AD920 Offset: 0x15A9920 VA: 0x15AD920 Slot: 20
	public virtual void SetLayoutVertical() { }

	// RVA: 0x15AD5C0 Offset: 0x15A95C0 VA: 0x15AD5C0
	protected void SetDirty() { }
}


// Namespace: 
public enum GridLayoutGroup.Corner // TypeDefIndex: 6414
{
	// Fields
	public int value__; // 0x0
	public const GridLayoutGroup.Corner UpperLeft = 0;
	public const GridLayoutGroup.Corner UpperRight = 1;
	public const GridLayoutGroup.Corner LowerLeft = 2;
	public const GridLayoutGroup.Corner LowerRight = 3;
}


// Namespace: 
public enum GridLayoutGroup.Axis // TypeDefIndex: 6415
{
	// Fields
	public int value__; // 0x0
	public const GridLayoutGroup.Axis Horizontal = 0;
	public const GridLayoutGroup.Axis Vertical = 1;
}


// Namespace: 
public enum GridLayoutGroup.Constraint // TypeDefIndex: 6416
{
	// Fields
	public int value__; // 0x0
	public const GridLayoutGroup.Constraint Flexible = 0;
	public const GridLayoutGroup.Constraint FixedColumnCount = 1;
	public const GridLayoutGroup.Constraint FixedRowCount = 2;
}


// Namespace: UnityEngine.UI
public class GridLayoutGroup : LayoutGroup // TypeDefIndex: 6417
{
	// Fields
	[SerializeField]
	protected GridLayoutGroup.Corner m_StartCorner; // 0x60
	[SerializeField]
	protected GridLayoutGroup.Axis m_StartAxis; // 0x64
	[SerializeField]
	protected Vector2 m_CellSize; // 0x68
	[SerializeField]
	protected Vector2 m_Spacing; // 0x70
	[SerializeField]
	protected GridLayoutGroup.Constraint m_Constraint; // 0x78
	[SerializeField]
	protected int m_ConstraintCount; // 0x7C

	// Properties
	public GridLayoutGroup.Corner startCorner { get; set; }
	public GridLayoutGroup.Axis startAxis { get; set; }
	public Vector2 cellSize { get; set; }
	public Vector2 spacing { get; set; }
	public GridLayoutGroup.Constraint constraint { get; set; }
	public int constraintCount { get; set; }

	// Methods

	// RVA: 0x15AD928 Offset: 0x15A9928 VA: 0x15AD928
	public GridLayoutGroup.Corner get_startCorner() { }

	// RVA: 0x15AD930 Offset: 0x15A9930 VA: 0x15AD930
	public void set_startCorner(GridLayoutGroup.Corner value) { }

	// RVA: 0x15AD994 Offset: 0x15A9994 VA: 0x15AD994
	public GridLayoutGroup.Axis get_startAxis() { }

	// RVA: 0x15AD99C Offset: 0x15A999C VA: 0x15AD99C
	public void set_startAxis(GridLayoutGroup.Axis value) { }

	// RVA: 0x15ADA00 Offset: 0x15A9A00 VA: 0x15ADA00
	public Vector2 get_cellSize() { }

	// RVA: 0x15ADA08 Offset: 0x15A9A08 VA: 0x15ADA08
	public void set_cellSize(Vector2 value) { }

	// RVA: 0x15ADA78 Offset: 0x15A9A78 VA: 0x15ADA78
	public Vector2 get_spacing() { }

	// RVA: 0x15ADA80 Offset: 0x15A9A80 VA: 0x15ADA80
	public void set_spacing(Vector2 value) { }

	// RVA: 0x15ADAF0 Offset: 0x15A9AF0 VA: 0x15ADAF0
	public GridLayoutGroup.Constraint get_constraint() { }

	// RVA: 0x15ADAF8 Offset: 0x15A9AF8 VA: 0x15ADAF8
	public void set_constraint(GridLayoutGroup.Constraint value) { }

	// RVA: 0x15ADB5C Offset: 0x15A9B5C VA: 0x15ADB5C
	public int get_constraintCount() { }

	// RVA: 0x15ADB64 Offset: 0x15A9B64 VA: 0x15ADB64
	public void set_constraintCount(int value) { }

	// RVA: 0x15ADBD0 Offset: 0x15A9BD0 VA: 0x15ADBD0
	protected void .ctor() { }

	// RVA: 0x15ADD54 Offset: 0x15A9D54 VA: 0x15ADD54 Slot: 28
	public override void CalculateLayoutInputHorizontal() { }

	// RVA: 0x15AE358 Offset: 0x15AA358 VA: 0x15AE358 Slot: 29
	public override void CalculateLayoutInputVertical() { }

	// RVA: 0x15AE604 Offset: 0x15AA604 VA: 0x15AE604 Slot: 37
	public override void SetLayoutHorizontal() { }

	// RVA: 0x15AEDA4 Offset: 0x15AADA4 VA: 0x15AEDA4 Slot: 38
	public override void SetLayoutVertical() { }

	// RVA: 0x15AE60C Offset: 0x15AA60C VA: 0x15AE60C
	private void SetCellsAlongAxis(int axis) { }
}


// Namespace: UnityEngine.UI
public class HorizontalLayoutGroup : HorizontalOrVerticalLayoutGroup // TypeDefIndex: 6418
{
	// Methods

	// RVA: 0x15AEFA4 Offset: 0x15AAFA4 VA: 0x15AEFA4
	protected void .ctor() { }

	// RVA: 0x15AEFBC Offset: 0x15AAFBC VA: 0x15AEFBC Slot: 28
	public override void CalculateLayoutInputHorizontal() { }

	// RVA: 0x15AF284 Offset: 0x15AB284 VA: 0x15AF284 Slot: 29
	public override void CalculateLayoutInputVertical() { }

	// RVA: 0x15AF290 Offset: 0x15AB290 VA: 0x15AF290 Slot: 37
	public override void SetLayoutHorizontal() { }

	// RVA: 0x15AF8F4 Offset: 0x15AB8F4 VA: 0x15AF8F4 Slot: 38
	public override void SetLayoutVertical() { }
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
public abstract class HorizontalOrVerticalLayoutGroup : LayoutGroup // TypeDefIndex: 6419
{
	// Fields
	[SerializeField]
	protected float m_Spacing; // 0x60
	[SerializeField]
	protected bool m_ChildForceExpandWidth; // 0x64
	[SerializeField]
	protected bool m_ChildForceExpandHeight; // 0x65
	[SerializeField]
	protected bool m_ChildControlWidth; // 0x66
	[SerializeField]
	protected bool m_ChildControlHeight; // 0x67
	[SerializeField]
	protected bool m_ChildScaleWidth; // 0x68
	[SerializeField]
	protected bool m_ChildScaleHeight; // 0x69
	[SerializeField]
	protected bool m_ReverseArrangement; // 0x6A

	// Properties
	public float spacing { get; set; }
	public bool childForceExpandWidth { get; set; }
	public bool childForceExpandHeight { get; set; }
	public bool childControlWidth { get; set; }
	public bool childControlHeight { get; set; }
	public bool childScaleWidth { get; set; }
	public bool childScaleHeight { get; set; }
	public bool reverseArrangement { get; set; }

	// Methods

	// RVA: 0x15AF900 Offset: 0x15AB900 VA: 0x15AF900
	public float get_spacing() { }

	// RVA: 0x15AF908 Offset: 0x15AB908 VA: 0x15AF908
	public void set_spacing(float value) { }

	// RVA: 0x15AF96C Offset: 0x15AB96C VA: 0x15AF96C
	public bool get_childForceExpandWidth() { }

	// RVA: 0x15AF974 Offset: 0x15AB974 VA: 0x15AF974
	public void set_childForceExpandWidth(bool value) { }

	// RVA: 0x15AF9DC Offset: 0x15AB9DC VA: 0x15AF9DC
	public bool get_childForceExpandHeight() { }

	// RVA: 0x15AF9E4 Offset: 0x15AB9E4 VA: 0x15AF9E4
	public void set_childForceExpandHeight(bool value) { }

	// RVA: 0x15AFA4C Offset: 0x15ABA4C VA: 0x15AFA4C
	public bool get_childControlWidth() { }

	// RVA: 0x15AFA54 Offset: 0x15ABA54 VA: 0x15AFA54
	public void set_childControlWidth(bool value) { }

	// RVA: 0x15AFABC Offset: 0x15ABABC VA: 0x15AFABC
	public bool get_childControlHeight() { }

	// RVA: 0x15AFAC4 Offset: 0x15ABAC4 VA: 0x15AFAC4
	public void set_childControlHeight(bool value) { }

	// RVA: 0x15AFB2C Offset: 0x15ABB2C VA: 0x15AFB2C
	public bool get_childScaleWidth() { }

	// RVA: 0x15AFB34 Offset: 0x15ABB34 VA: 0x15AFB34
	public void set_childScaleWidth(bool value) { }

	// RVA: 0x15AFB9C Offset: 0x15ABB9C VA: 0x15AFB9C
	public bool get_childScaleHeight() { }

	// RVA: 0x15AFBA4 Offset: 0x15ABBA4 VA: 0x15AFBA4
	public void set_childScaleHeight(bool value) { }

	// RVA: 0x15AFC0C Offset: 0x15ABC0C VA: 0x15AFC0C
	public bool get_reverseArrangement() { }

	// RVA: 0x15AFC14 Offset: 0x15ABC14 VA: 0x15AFC14
	public void set_reverseArrangement(bool value) { }

	// RVA: 0x15AEFDC Offset: 0x15AAFDC VA: 0x15AEFDC
	protected void CalcAlongAxis(int axis, bool isVertical) { }

	// RVA: 0x15AF29C Offset: 0x15AB29C VA: 0x15AF29C
	protected void SetChildrenAlongAxis(int axis, bool isVertical) { }

	// RVA: 0x15AFC7C Offset: 0x15ABC7C VA: 0x15AFC7C
	private void GetChildSizes(RectTransform child, int axis, bool controlSize, bool childForceExpand, out float min, out float preferred, out float flexible) { }

	// RVA: 0x15AEFB0 Offset: 0x15AAFB0 VA: 0x15AEFB0
	protected void .ctor() { }
}


// Namespace: UnityEngine.UI
public interface ILayoutElement // TypeDefIndex: 6420
{
	// Properties
	public abstract float minWidth { get; }
	public abstract float preferredWidth { get; }
	public abstract float flexibleWidth { get; }
	public abstract float minHeight { get; }
	public abstract float preferredHeight { get; }
	public abstract float flexibleHeight { get; }
	public abstract int layoutPriority { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void CalculateLayoutInputHorizontal();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void CalculateLayoutInputVertical();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract float get_minWidth();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract float get_preferredWidth();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract float get_flexibleWidth();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract float get_minHeight();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract float get_preferredHeight();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract float get_flexibleHeight();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract int get_layoutPriority();
}


// Namespace: UnityEngine.UI
public interface ILayoutController // TypeDefIndex: 6421
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void SetLayoutHorizontal();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetLayoutVertical();
}


// Namespace: UnityEngine.UI
public interface ILayoutGroup : ILayoutController // TypeDefIndex: 6422
{}


// Namespace: UnityEngine.UI
public interface ILayoutSelfController : ILayoutController // TypeDefIndex: 6423
{}


// Namespace: UnityEngine.UI
public interface ILayoutIgnorer // TypeDefIndex: 6424
{
	// Properties
	public abstract bool ignoreLayout { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_ignoreLayout();
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(RectTransform))]
[ExecuteAlways]
public class LayoutElement : UIBehaviour, ILayoutElement, ILayoutIgnorer // TypeDefIndex: 6425
{
	// Fields
	[SerializeField]
	private bool m_IgnoreLayout; // 0x20
	[SerializeField]
	private float m_MinWidth; // 0x24
	[SerializeField]
	private float m_MinHeight; // 0x28
	[SerializeField]
	private float m_PreferredWidth; // 0x2C
	[SerializeField]
	private float m_PreferredHeight; // 0x30
	[SerializeField]
	private float m_FlexibleWidth; // 0x34
	[SerializeField]
	private float m_FlexibleHeight; // 0x38
	[SerializeField]
	private int m_LayoutPriority; // 0x3C

	// Properties
	public virtual bool ignoreLayout { get; set; }
	public virtual float minWidth { get; set; }
	public virtual float minHeight { get; set; }
	public virtual float preferredWidth { get; set; }
	public virtual float preferredHeight { get; set; }
	public virtual float flexibleWidth { get; set; }
	public virtual float flexibleHeight { get; set; }
	public virtual int layoutPriority { get; set; }

	// Methods

	// RVA: 0x15B03D8 Offset: 0x15AC3D8 VA: 0x15B03D8 Slot: 27
	public virtual bool get_ignoreLayout() { }

	// RVA: 0x15B03E0 Offset: 0x15AC3E0 VA: 0x15B03E0 Slot: 28
	public virtual void set_ignoreLayout(bool value) { }

	// RVA: 0x15B0508 Offset: 0x15AC508 VA: 0x15B0508 Slot: 29
	public virtual void CalculateLayoutInputHorizontal() { }

	// RVA: 0x15B050C Offset: 0x15AC50C VA: 0x15B050C Slot: 30
	public virtual void CalculateLayoutInputVertical() { }

	// RVA: 0x15B0510 Offset: 0x15AC510 VA: 0x15B0510 Slot: 31
	public virtual float get_minWidth() { }

	// RVA: 0x15B0518 Offset: 0x15AC518 VA: 0x15B0518 Slot: 32
	public virtual void set_minWidth(float value) { }

	// RVA: 0x15B0584 Offset: 0x15AC584 VA: 0x15B0584 Slot: 33
	public virtual float get_minHeight() { }

	// RVA: 0x15B058C Offset: 0x15AC58C VA: 0x15B058C Slot: 34
	public virtual void set_minHeight(float value) { }

	// RVA: 0x15B05F8 Offset: 0x15AC5F8 VA: 0x15B05F8 Slot: 35
	public virtual float get_preferredWidth() { }

	// RVA: 0x15B0600 Offset: 0x15AC600 VA: 0x15B0600 Slot: 36
	public virtual void set_preferredWidth(float value) { }

	// RVA: 0x15B066C Offset: 0x15AC66C VA: 0x15B066C Slot: 37
	public virtual float get_preferredHeight() { }

	// RVA: 0x15B0674 Offset: 0x15AC674 VA: 0x15B0674 Slot: 38
	public virtual void set_preferredHeight(float value) { }

	// RVA: 0x15B06E0 Offset: 0x15AC6E0 VA: 0x15B06E0 Slot: 39
	public virtual float get_flexibleWidth() { }

	// RVA: 0x15B06E8 Offset: 0x15AC6E8 VA: 0x15B06E8 Slot: 40
	public virtual void set_flexibleWidth(float value) { }

	// RVA: 0x15B0754 Offset: 0x15AC754 VA: 0x15B0754 Slot: 41
	public virtual float get_flexibleHeight() { }

	// RVA: 0x15B075C Offset: 0x15AC75C VA: 0x15B075C Slot: 42
	public virtual void set_flexibleHeight(float value) { }

	// RVA: 0x15B07C8 Offset: 0x15AC7C8 VA: 0x15B07C8 Slot: 43
	public virtual int get_layoutPriority() { }

	// RVA: 0x15B07D0 Offset: 0x15AC7D0 VA: 0x15B07D0 Slot: 44
	public virtual void set_layoutPriority(int value) { }

	// RVA: 0x15B083C Offset: 0x15AC83C VA: 0x15B083C
	protected void .ctor() { }

	// RVA: 0x15B085C Offset: 0x15AC85C VA: 0x15B085C Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15B0878 Offset: 0x15AC878 VA: 0x15B0878 Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x15B087C Offset: 0x15AC87C VA: 0x15B087C Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15B0898 Offset: 0x15AC898 VA: 0x15B0898 Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x15B089C Offset: 0x15AC89C VA: 0x15B089C Slot: 11
	protected override void OnBeforeTransformParentChanged() { }

	// RVA: 0x15B0450 Offset: 0x15AC450 VA: 0x15B0450
	protected void SetDirty() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class LayoutGroup.<DelayedSetDirty>d__56 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6426
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public RectTransform rectTransform; // 0x20

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x15B0D94 Offset: 0x15ACD94 VA: 0x15B0D94
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x15B0DBC Offset: 0x15ACDBC VA: 0x15B0DBC Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x15B0DC0 Offset: 0x15ACDC0 VA: 0x15B0DC0 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x15B0E48 Offset: 0x15ACE48 VA: 0x15B0E48 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x15B0E50 Offset: 0x15ACE50 VA: 0x15B0E50 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x15B0E88 Offset: 0x15ACE88 VA: 0x15B0E88 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
public abstract class LayoutGroup : UIBehaviour, ILayoutElement, ILayoutGroup, ILayoutController // TypeDefIndex: 6427
{
	// Fields
	[SerializeField]
	protected RectOffset m_Padding; // 0x20
	[SerializeField]
	protected TextAnchor m_ChildAlignment; // 0x28
	private RectTransform m_Rect; // 0x30
	protected DrivenRectTransformTracker m_Tracker; // 0x38
	private Vector2 m_TotalMinSize; // 0x3C
	private Vector2 m_TotalPreferredSize; // 0x44
	private Vector2 m_TotalFlexibleSize; // 0x4C
	private List<RectTransform> m_RectChildren; // 0x58

	// Properties
	public RectOffset padding { get; set; }
	public TextAnchor childAlignment { get; set; }
	protected RectTransform rectTransform { get; }
	protected List<RectTransform> rectChildren { get; }
	public virtual float minWidth { get; }
	public virtual float preferredWidth { get; }
	public virtual float flexibleWidth { get; }
	public virtual float minHeight { get; }
	public virtual float preferredHeight { get; }
	public virtual float flexibleHeight { get; }
	public virtual int layoutPriority { get; }
	private bool isRootLayoutGroup { get; }

	// Methods

	// RVA: 0x15B08A0 Offset: 0x15AC8A0 VA: 0x15B08A0
	public RectOffset get_padding() { }

	// RVA: 0x15B08A8 Offset: 0x15AC8A8 VA: 0x15B08A8
	public void set_padding(RectOffset value) { }

	// RVA: 0x15B0904 Offset: 0x15AC904 VA: 0x15B0904
	public TextAnchor get_childAlignment() { }

	// RVA: 0x15B090C Offset: 0x15AC90C VA: 0x15B090C
	public void set_childAlignment(TextAnchor value) { }

	// RVA: 0x15AE560 Offset: 0x15AA560 VA: 0x15AE560
	protected RectTransform get_rectTransform() { }

	// RVA: 0x15B0970 Offset: 0x15AC970 VA: 0x15B0970
	protected List<RectTransform> get_rectChildren() { }

	// RVA: 0x15ADF20 Offset: 0x15A9F20 VA: 0x15ADF20 Slot: 28
	public virtual void CalculateLayoutInputHorizontal() { }

	// RVA: -1 Offset: -1 Slot: 29
	public abstract void CalculateLayoutInputVertical();

	// RVA: 0x15B0978 Offset: 0x15AC978 VA: 0x15B0978 Slot: 30
	public virtual float get_minWidth() { }

	// RVA: 0x15B0980 Offset: 0x15AC980 VA: 0x15B0980 Slot: 31
	public virtual float get_preferredWidth() { }

	// RVA: 0x15B0988 Offset: 0x15AC988 VA: 0x15B0988 Slot: 32
	public virtual float get_flexibleWidth() { }

	// RVA: 0x15B0990 Offset: 0x15AC990 VA: 0x15B0990 Slot: 33
	public virtual float get_minHeight() { }

	// RVA: 0x15B0998 Offset: 0x15AC998 VA: 0x15B0998 Slot: 34
	public virtual float get_preferredHeight() { }

	// RVA: 0x15B09A0 Offset: 0x15AC9A0 VA: 0x15B09A0 Slot: 35
	public virtual float get_flexibleHeight() { }

	// RVA: 0x15B09A8 Offset: 0x15AC9A8 VA: 0x15B09A8 Slot: 36
	public virtual int get_layoutPriority() { }

	// RVA: -1 Offset: -1 Slot: 37
	public abstract void SetLayoutHorizontal();

	// RVA: -1 Offset: -1 Slot: 38
	public abstract void SetLayoutVertical();

	// RVA: 0x15ADC38 Offset: 0x15A9C38 VA: 0x15ADC38
	protected void .ctor() { }

	// RVA: 0x15B09B0 Offset: 0x15AC9B0 VA: 0x15B09B0 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15B0AA0 Offset: 0x15ACAA0 VA: 0x15B0AA0 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15B0B1C Offset: 0x15ACB1C VA: 0x15B0B1C Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x15B035C Offset: 0x15AC35C VA: 0x15B035C
	protected float GetTotalMinSize(int axis) { }

	// RVA: 0x15B027C Offset: 0x15AC27C VA: 0x15B027C
	protected float GetTotalPreferredSize(int axis) { }

	// RVA: 0x15B02EC Offset: 0x15AC2EC VA: 0x15B02EC
	protected float GetTotalFlexibleSize(int axis) { }

	// RVA: 0x15AEDAC Offset: 0x15AADAC VA: 0x15AEDAC
	protected float GetStartOffset(int axis, float requiredSpaceWithoutPadding) { }

	// RVA: 0x15AFD90 Offset: 0x15ABD90 VA: 0x15AFD90
	protected float GetAlignmentOnAxis(int axis) { }

	// RVA: 0x15AE2D8 Offset: 0x15AA2D8 VA: 0x15AE2D8
	protected void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis) { }

	// RVA: 0x15B0B20 Offset: 0x15ACB20 VA: 0x15B0B20
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos) { }

	// RVA: 0x15B0050 Offset: 0x15AC050 VA: 0x15B0050
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float scaleFactor) { }

	// RVA: 0x15AEEF4 Offset: 0x15AAEF4 VA: 0x15AEEF4
	protected void SetChildAlongAxis(RectTransform rect, int axis, float pos, float size) { }

	// RVA: 0x15AFDDC Offset: 0x15ABDDC VA: 0x15AFDDC
	protected void SetChildAlongAxisWithScale(RectTransform rect, int axis, float pos, float size, float scaleFactor) { }

	// RVA: 0x15B0BC8 Offset: 0x15ACBC8 VA: 0x15B0BC8
	private bool get_isRootLayoutGroup() { }

	// RVA: 0x15B0D00 Offset: 0x15ACD00 VA: 0x15B0D00 Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x15B0D30 Offset: 0x15ACD30 VA: 0x15B0D30 Slot: 39
	protected virtual void OnTransformChildrenChanged() { }

	// RVA: -1 Offset: -1
	protected void SetProperty<T>(ref T currentValue, T newValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8EF20 Offset: 0xB8AF20 VA: 0xB8EF20
	|-LayoutGroup.SetProperty<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x15B09CC Offset: 0x15AC9CC VA: 0x15B09CC
	protected void SetDirty() { }

	// RVA: 0x15B0D34 Offset: 0x15ACD34 VA: 0x15B0D34
	private IEnumerator DelayedSetDirty(RectTransform rectTransform) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class LayoutRebuilder.<>c // TypeDefIndex: 6428
{
	// Fields
	public static readonly LayoutRebuilder.<>c <>9; // 0x0
	public static Predicate<Component> <>9__10_0; // 0x8
	public static UnityAction<Component> <>9__12_0; // 0x10
	public static UnityAction<Component> <>9__12_1; // 0x18
	public static UnityAction<Component> <>9__12_2; // 0x20
	public static UnityAction<Component> <>9__12_3; // 0x28

	// Methods

	// RVA: 0x15B2128 Offset: 0x15AE128 VA: 0x15B2128
	private static void .cctor() { }

	// RVA: 0x15B2184 Offset: 0x15AE184 VA: 0x15B2184
	public void .ctor() { }

	// RVA: 0x15B218C Offset: 0x15AE18C VA: 0x15B218C
	internal LayoutRebuilder <.cctor>b__5_0() { }

	// RVA: 0x15B21E0 Offset: 0x15AE1E0 VA: 0x15B21E0
	internal void <.cctor>b__5_1(LayoutRebuilder x) { }

	// RVA: 0x15B21FC Offset: 0x15AE1FC VA: 0x15B21FC
	internal bool <StripDisabledBehavioursFromList>b__10_0(Component e) { }

	// RVA: 0x15B2288 Offset: 0x15AE288 VA: 0x15B2288
	internal void <Rebuild>b__12_0(Component e) { }

	// RVA: 0x15B2344 Offset: 0x15AE344 VA: 0x15B2344
	internal void <Rebuild>b__12_1(Component e) { }

	// RVA: 0x15B2400 Offset: 0x15AE400 VA: 0x15B2400
	internal void <Rebuild>b__12_2(Component e) { }

	// RVA: 0x15B24C0 Offset: 0x15AE4C0 VA: 0x15B24C0
	internal void <Rebuild>b__12_3(Component e) { }
}


// Namespace: UnityEngine.UI
public class LayoutRebuilder : ICanvasElement // TypeDefIndex: 6429
{
	// Fields
	private RectTransform m_ToRebuild; // 0x10
	private int m_CachedHashFromTransform; // 0x18
	private static ObjectPool<LayoutRebuilder> s_Rebuilders; // 0x0

	// Properties
	public Transform transform { get; }

	// Methods

	// RVA: 0x15B0E90 Offset: 0x15ACE90 VA: 0x15B0E90
	private void Initialize(RectTransform controller) { }

	// RVA: 0x15B0EC4 Offset: 0x15ACEC4 VA: 0x15B0EC4
	private void Clear() { }

	// RVA: 0x15B0ED0 Offset: 0x15ACED0 VA: 0x15B0ED0
	private static void .cctor() { }

	// RVA: 0x15B10AC Offset: 0x15AD0AC VA: 0x15B10AC
	private static void ReapplyDrivenProperties(RectTransform driven) { }

	// RVA: 0x15B1100 Offset: 0x15AD100 VA: 0x15B1100 Slot: 5
	public Transform get_transform() { }

	// RVA: 0x15B1108 Offset: 0x15AD108 VA: 0x15B1108 Slot: 8
	public bool IsDestroyed() { }

	// RVA: 0x15B1168 Offset: 0x15AD168 VA: 0x15B1168
	private static void StripDisabledBehavioursFromList(List<Component> components) { }

	// RVA: 0x15B1260 Offset: 0x15AD260 VA: 0x15B1260
	public static void ForceRebuildLayoutImmediate(RectTransform layoutRoot) { }

	// RVA: 0x15B133C Offset: 0x15AD33C VA: 0x15B133C Slot: 4
	public void Rebuild(CanvasUpdate executing) { }

	// RVA: 0x15B18BC Offset: 0x15AD8BC VA: 0x15B18BC
	private void PerformLayoutControl(RectTransform rect, UnityAction<Component> action) { }

	// RVA: 0x15B15E8 Offset: 0x15AD5E8 VA: 0x15B15E8
	private void PerformLayoutCalculation(RectTransform rect, UnityAction<Component> action) { }

	// RVA: 0x15AC490 Offset: 0x15A8490 VA: 0x15AC490
	public static void MarkLayoutForRebuild(RectTransform rect) { }

	// RVA: 0x15B1C8C Offset: 0x15ADC8C VA: 0x15B1C8C
	private static bool ValidController(RectTransform layoutRoot, List<Component> comps) { }

	// RVA: 0x15B1E80 Offset: 0x15ADE80 VA: 0x15B1E80
	private static void MarkLayoutRootForRebuild(RectTransform controller) { }

	// RVA: 0x15B1FD8 Offset: 0x15ADFD8 VA: 0x15B1FD8 Slot: 6
	public void LayoutComplete() { }

	// RVA: 0x15B2058 Offset: 0x15AE058 VA: 0x15B2058 Slot: 7
	public void GraphicUpdateComplete() { }

	// RVA: 0x15B205C Offset: 0x15AE05C VA: 0x15B205C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x15B2064 Offset: 0x15AE064 VA: 0x15B2064 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x15B20B4 Offset: 0x15AE0B4 VA: 0x15B20B4 Slot: 3
	public override string ToString() { }

	// RVA: 0x15B2120 Offset: 0x15AE120 VA: 0x15B2120
	public void .ctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class LayoutUtility.<>c // TypeDefIndex: 6430
{
	// Fields
	public static readonly LayoutUtility.<>c <>9; // 0x0
	public static Func<ILayoutElement, float> <>9__3_0; // 0x8
	public static Func<ILayoutElement, float> <>9__4_0; // 0x10
	public static Func<ILayoutElement, float> <>9__4_1; // 0x18
	public static Func<ILayoutElement, float> <>9__5_0; // 0x20
	public static Func<ILayoutElement, float> <>9__6_0; // 0x28
	public static Func<ILayoutElement, float> <>9__7_0; // 0x30
	public static Func<ILayoutElement, float> <>9__7_1; // 0x38
	public static Func<ILayoutElement, float> <>9__8_0; // 0x40

	// Methods

	// RVA: 0x15B2F8C Offset: 0x15AEF8C VA: 0x15B2F8C
	private static void .cctor() { }

	// RVA: 0x15B2FE8 Offset: 0x15AEFE8 VA: 0x15B2FE8
	public void .ctor() { }

	// RVA: 0x15B2FF0 Offset: 0x15AEFF0 VA: 0x15B2FF0
	internal float <GetMinWidth>b__3_0(ILayoutElement e) { }

	// RVA: 0x15B3090 Offset: 0x15AF090 VA: 0x15B3090
	internal float <GetPreferredWidth>b__4_0(ILayoutElement e) { }

	// RVA: 0x15B3130 Offset: 0x15AF130 VA: 0x15B3130
	internal float <GetPreferredWidth>b__4_1(ILayoutElement e) { }

	// RVA: 0x15B31D0 Offset: 0x15AF1D0 VA: 0x15B31D0
	internal float <GetFlexibleWidth>b__5_0(ILayoutElement e) { }

	// RVA: 0x15B3270 Offset: 0x15AF270 VA: 0x15B3270
	internal float <GetMinHeight>b__6_0(ILayoutElement e) { }

	// RVA: 0x15B3310 Offset: 0x15AF310 VA: 0x15B3310
	internal float <GetPreferredHeight>b__7_0(ILayoutElement e) { }

	// RVA: 0x15B33B0 Offset: 0x15AF3B0 VA: 0x15B33B0
	internal float <GetPreferredHeight>b__7_1(ILayoutElement e) { }

	// RVA: 0x15B3450 Offset: 0x15AF450 VA: 0x15B3450
	internal float <GetFlexibleHeight>b__8_0(ILayoutElement e) { }
}


// Namespace: UnityEngine.UI
public static class LayoutUtility // TypeDefIndex: 6431
{
	// Methods

	// RVA: 0x15AD8E4 Offset: 0x15A98E4 VA: 0x15AD8E4
	public static float GetMinSize(RectTransform rect, int axis) { }

	// RVA: 0x15AD8F0 Offset: 0x15A98F0 VA: 0x15AD8F0
	public static float GetPreferredSize(RectTransform rect, int axis) { }

	// RVA: 0x15B03CC Offset: 0x15AC3CC VA: 0x15B03CC
	public static float GetFlexibleSize(RectTransform rect, int axis) { }

	// RVA: 0x15B2668 Offset: 0x15AE668 VA: 0x15B2668
	public static float GetMinWidth(RectTransform rect) { }

	// RVA: 0x15B28E8 Offset: 0x15AE8E8 VA: 0x15B28E8
	public static float GetPreferredWidth(RectTransform rect) { }

	// RVA: 0x15B2B68 Offset: 0x15AEB68 VA: 0x15B2B68
	public static float GetFlexibleWidth(RectTransform rect) { }

	// RVA: 0x15B2580 Offset: 0x15AE580 VA: 0x15B2580
	public static float GetMinHeight(RectTransform rect) { }

	// RVA: 0x15B2750 Offset: 0x15AE750 VA: 0x15B2750
	public static float GetPreferredHeight(RectTransform rect) { }

	// RVA: 0x15B2A80 Offset: 0x15AEA80 VA: 0x15B2A80
	public static float GetFlexibleHeight(RectTransform rect) { }

	// RVA: 0x15B2C50 Offset: 0x15AEC50 VA: 0x15B2C50
	public static float GetLayoutProperty(RectTransform rect, Func<ILayoutElement, float> property, float defaultValue) { }

	// RVA: 0x15B2C68 Offset: 0x15AEC68 VA: 0x15B2C68
	public static float GetLayoutProperty(RectTransform rect, Func<ILayoutElement, float> property, float defaultValue, out ILayoutElement source) { }
}


// Namespace: UnityEngine.UI
public class VerticalLayoutGroup : HorizontalOrVerticalLayoutGroup // TypeDefIndex: 6432
{
	// Methods

	// RVA: 0x15B34F0 Offset: 0x15AF4F0 VA: 0x15B34F0
	protected void .ctor() { }

	// RVA: 0x15B34FC Offset: 0x15AF4FC VA: 0x15B34FC Slot: 28
	public override void CalculateLayoutInputHorizontal() { }

	// RVA: 0x15B351C Offset: 0x15AF51C VA: 0x15B351C Slot: 29
	public override void CalculateLayoutInputVertical() { }

	// RVA: 0x15B3528 Offset: 0x15AF528 VA: 0x15B3528 Slot: 37
	public override void SetLayoutHorizontal() { }

	// RVA: 0x15B3534 Offset: 0x15AF534 VA: 0x15B3534 Slot: 38
	public override void SetLayoutVertical() { }
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
public class Mask : UIBehaviour, ICanvasRaycastFilter, IMaterialModifier // TypeDefIndex: 6433
{
	// Fields
	private RectTransform m_RectTransform; // 0x20
	[SerializeField]
	private bool m_ShowMaskGraphic; // 0x28
	private Graphic m_Graphic; // 0x30
	private Material m_MaskMaterial; // 0x38
	private Material m_UnmaskMaterial; // 0x40

	// Properties
	public RectTransform rectTransform { get; }
	public bool showMaskGraphic { get; set; }
	public Graphic graphic { get; }

	// Methods

	// RVA: 0x15B3540 Offset: 0x15AF540 VA: 0x15B3540
	public RectTransform get_rectTransform() { }

	// RVA: 0x15B35A0 Offset: 0x15AF5A0 VA: 0x15B35A0
	public bool get_showMaskGraphic() { }

	// RVA: 0x15B35A8 Offset: 0x15AF5A8 VA: 0x15B35A8
	public void set_showMaskGraphic(bool value) { }

	// RVA: 0x15B3658 Offset: 0x15AF658 VA: 0x15B3658
	public Graphic get_graphic() { }

	// RVA: 0x15B36B8 Offset: 0x15AF6B8 VA: 0x15B36B8
	protected void .ctor() { }

	// RVA: 0x15B36C8 Offset: 0x15AF6C8 VA: 0x15B36C8 Slot: 19
	public virtual bool MaskEnabled() { }

	// RVA: 0x15B3758 Offset: 0x15AF758 VA: 0x15B3758 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15B3B44 Offset: 0x15AFB44 VA: 0x15B3B44 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15B3D08 Offset: 0x15AFD08 VA: 0x15B3D08 Slot: 20
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera) { }

	// RVA: 0x15B3DB4 Offset: 0x15AFDB4 VA: 0x15B3DB4 Slot: 21
	public virtual Material GetModifiedMaterial(Material baseMaterial) { }
}


// Namespace: 
[Serializable]
public class MaskableGraphic.CullStateChangedEvent : UnityEvent<bool> // TypeDefIndex: 6434
{
	// Methods

	// RVA: 0x15B54F8 Offset: 0x15B14F8 VA: 0x15B54F8
	public void .ctor() { }
}


// Namespace: UnityEngine.UI
public abstract class MaskableGraphic : Graphic, IClippable, IMaskable, IMaterialModifier // TypeDefIndex: 6435
{
	// Fields
	protected bool m_ShouldRecalculateStencil; // 0xA1
	protected Material m_MaskMaterial; // 0xA8
	private RectMask2D m_ParentMask; // 0xB0
	[SerializeField]
	private bool m_Maskable; // 0xB8
	private bool m_IsMaskingGraphic; // 0xB9
	[Obsolete("Not used anymore.", True)]
	protected bool m_IncludeForMasking; // 0xBA
	[SerializeField]
	private MaskableGraphic.CullStateChangedEvent m_OnCullStateChanged; // 0xC0
	[Obsolete("Not used anymore", True)]
	protected bool m_ShouldRecalculate; // 0xC8
	protected int m_StencilValue; // 0xCC
	private readonly Vector3[] m_Corners; // 0xD0

	// Properties
	public MaskableGraphic.CullStateChangedEvent onCullStateChanged { get; set; }
	public bool maskable { get; set; }
	public bool isMaskingGraphic { get; set; }
	private Rect rootCanvasRect { get; }

	// Methods

	// RVA: 0x15B4488 Offset: 0x15B0488 VA: 0x15B4488
	public MaskableGraphic.CullStateChangedEvent get_onCullStateChanged() { }

	// RVA: 0x15B4490 Offset: 0x15B0490 VA: 0x15B4490
	public void set_onCullStateChanged(MaskableGraphic.CullStateChangedEvent value) { }

	// RVA: 0x15B4498 Offset: 0x15B0498 VA: 0x15B4498
	public bool get_maskable() { }

	// RVA: 0x15B44A0 Offset: 0x15B04A0 VA: 0x15B44A0
	public void set_maskable(bool value) { }

	// RVA: 0x15B44D0 Offset: 0x15B04D0 VA: 0x15B44D0
	public bool get_isMaskingGraphic() { }

	// RVA: 0x15B38B8 Offset: 0x15AF8B8 VA: 0x15B38B8
	public void set_isMaskingGraphic(bool value) { }

	// RVA: 0x15B44D8 Offset: 0x15B04D8 VA: 0x15B44D8 Slot: 55
	public virtual Material GetModifiedMaterial(Material baseMaterial) { }

	// RVA: 0x15B45D8 Offset: 0x15B05D8 VA: 0x15B45D8 Slot: 56
	public virtual void Cull(Rect clipRect, bool validRect) { }

	// RVA: 0x15B4860 Offset: 0x15B0860 VA: 0x15B4860
	private void UpdateCull(bool cull) { }

	// RVA: 0x15B4948 Offset: 0x15B0948 VA: 0x15B4948 Slot: 57
	public virtual void SetClipRect(Rect clipRect, bool validRect) { }

	// RVA: 0x15B49B4 Offset: 0x15B09B4 VA: 0x15B49B4 Slot: 58
	public virtual void SetClipSoftness(Vector2 clipSoftness) { }

	// RVA: 0x15B49EC Offset: 0x15B09EC VA: 0x15B49EC Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15B4B88 Offset: 0x15B0B88 VA: 0x15B4B88 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15B4C34 Offset: 0x15B0C34 VA: 0x15B4C34 Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x15B4C84 Offset: 0x15B0C84 VA: 0x15B4C84 Slot: 15
	protected override void OnCanvasHierarchyChanged() { }

	// RVA: 0x15B46A8 Offset: 0x15B06A8 VA: 0x15B46A8
	private Rect get_rootCanvasRect() { }

	// RVA: 0x15B4A3C Offset: 0x15B0A3C VA: 0x15B4A3C
	private void UpdateClipParent() { }

	// RVA: 0x15B53BC Offset: 0x15B13BC VA: 0x15B53BC Slot: 59
	public virtual void RecalculateClipping() { }

	// RVA: 0x15B53C0 Offset: 0x15B13C0 VA: 0x15B53C0 Slot: 60
	public virtual void RecalculateMasking() { }

	// RVA: 0x15B543C Offset: 0x15B143C VA: 0x15B543C
	protected void .ctor() { }

	// RVA: 0x15B5540 Offset: 0x15B1540 VA: 0x15B5540 Slot: 49
	private GameObject UnityEngine.UI.IClippable.get_gameObject() { }
}


// Namespace: UnityEngine.UI
public class MaskUtilities // TypeDefIndex: 6436
{
	// Methods

	// RVA: 0x15B5548 Offset: 0x15B1548 VA: 0x15B5548
	public static void Notify2DMaskStateChanged(Component mask) { }

	// RVA: 0x15B38D0 Offset: 0x15AF8D0 VA: 0x15B38D0
	public static void NotifyStencilStateChanged(Component mask) { }

	// RVA: 0x15B4048 Offset: 0x15B0048 VA: 0x15B4048
	public static Transform FindRootSortOverrideCanvas(Transform start) { }

	// RVA: 0x15B41F0 Offset: 0x15B01F0 VA: 0x15B41F0
	public static int GetStencilDepth(Transform transform, Transform stopAfter) { }

	// RVA: 0x15B57C0 Offset: 0x15B17C0 VA: 0x15B57C0
	public static bool IsDescendantOrSelf(Transform father, Transform child) { }

	// RVA: 0x15B4CD4 Offset: 0x15B0CD4 VA: 0x15B4CD4
	public static RectMask2D GetRectMaskForClippable(IClippable clippable) { }

	// RVA: 0x15B5918 Offset: 0x15B1918 VA: 0x15B5918
	public static void GetRectMasksForClip(RectMask2D clipper, List<RectMask2D> masks) { }
}


// Namespace: UnityEngine.UI
public interface IMaterialModifier // TypeDefIndex: 6437
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Material GetModifiedMaterial(Material baseMaterial);
}


// Namespace: UnityEngine.UI
internal static class Misc // TypeDefIndex: 6438
{
	// Methods

	// RVA: 0x15B5C94 Offset: 0x15B1C94 VA: 0x15B5C94
	public static void DestroyImmediate(Object obj) { }
}


// Namespace: UnityEngine.UI
internal static class MultipleDisplayUtilities // TypeDefIndex: 6439
{
	// Methods

	// RVA: 0x15ABFE4 Offset: 0x15A7FE4 VA: 0x15ABFE4
	public static bool GetRelativeMousePositionForDrag(PointerEventData eventData, ref Vector2 position) { }

	// RVA: 0x15B60BC Offset: 0x15B20BC VA: 0x15B60BC
	internal static Vector3 GetRelativeMousePositionForRaycast(PointerEventData eventData) { }

	// RVA: 0x15B5D60 Offset: 0x15B1D60 VA: 0x15B5D60
	public static Vector3 RelativeMouseAtScaled(Vector2 position, int displayIndex) { }
}


// Namespace: 
[Flags]
public enum Navigation.Mode // TypeDefIndex: 6440
{
	// Fields
	public int value__; // 0x0
	public const Navigation.Mode None = 0;
	public const Navigation.Mode Horizontal = 1;
	public const Navigation.Mode Vertical = 2;
	public const Navigation.Mode Automatic = 3;
	public const Navigation.Mode Explicit = 4;
}


// Namespace: UnityEngine.UI
[Serializable]
public struct Navigation : IEquatable<Navigation> // TypeDefIndex: 6441
{
	// Fields
	[SerializeField]
	private Navigation.Mode m_Mode; // 0x0
	[SerializeField]
	[Tooltip("Enables navigation to wrap around from last to first or first to last element. Does not work for automatic grid navigation")]
	private bool m_WrapAround; // 0x4
	[SerializeField]
	private Selectable m_SelectOnUp; // 0x8
	[SerializeField]
	private Selectable m_SelectOnDown; // 0x10
	[SerializeField]
	private Selectable m_SelectOnLeft; // 0x18
	[SerializeField]
	private Selectable m_SelectOnRight; // 0x20

	// Properties
	public Navigation.Mode mode { get; set; }
	public bool wrapAround { get; }
	public Selectable selectOnUp { get; set; }
	public Selectable selectOnDown { get; set; }
	public Selectable selectOnLeft { get; set; }
	public Selectable selectOnRight { get; set; }
	public static Navigation defaultNavigation { get; }

	// Methods

	// RVA: 0x15B6184 Offset: 0x15B2184 VA: 0x15B6184
	public Navigation.Mode get_mode() { }

	// RVA: 0x15B618C Offset: 0x15B218C VA: 0x15B618C
	public void set_mode(Navigation.Mode value) { }

	// RVA: 0x15B6194 Offset: 0x15B2194 VA: 0x15B6194
	public bool get_wrapAround() { }

	// RVA: 0x15B619C Offset: 0x15B219C VA: 0x15B619C
	public Selectable get_selectOnUp() { }

	// RVA: 0x15B61A4 Offset: 0x15B21A4 VA: 0x15B61A4
	public void set_selectOnUp(Selectable value) { }

	// RVA: 0x15B61AC Offset: 0x15B21AC VA: 0x15B61AC
	public Selectable get_selectOnDown() { }

	// RVA: 0x15B61B4 Offset: 0x15B21B4 VA: 0x15B61B4
	public void set_selectOnDown(Selectable value) { }

	// RVA: 0x15B61BC Offset: 0x15B21BC VA: 0x15B61BC
	public Selectable get_selectOnLeft() { }

	// RVA: 0x15B61C4 Offset: 0x15B21C4 VA: 0x15B61C4
	public void set_selectOnLeft(Selectable value) { }

	// RVA: 0x15B61CC Offset: 0x15B21CC VA: 0x15B61CC
	public Selectable get_selectOnRight() { }

	// RVA: 0x15B61D4 Offset: 0x15B21D4 VA: 0x15B61D4
	public void set_selectOnRight(Selectable value) { }

	// RVA: 0x15B61DC Offset: 0x15B21DC VA: 0x15B61DC
	public static Navigation get_defaultNavigation() { }

	// RVA: 0x15B61FC Offset: 0x15B21FC VA: 0x15B61FC Slot: 4
	public bool Equals(Navigation other) { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(CanvasRenderer))]
public class RawImage : MaskableGraphic // TypeDefIndex: 6442
{
	// Fields
	[FormerlySerializedAs("m_Tex")]
	[SerializeField]
	private Texture m_Texture; // 0xD8
	[SerializeField]
	private Rect m_UVRect; // 0xE0

	// Properties
	public override Texture mainTexture { get; }
	public Texture texture { get; set; }
	public Rect uvRect { get; set; }

	// Methods

	// RVA: 0x15B6314 Offset: 0x15B2314 VA: 0x15B6314
	protected void .ctor() { }

	// RVA: 0x15B6338 Offset: 0x15B2338 VA: 0x15B6338 Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x15B6490 Offset: 0x15B2490 VA: 0x15B6490
	public Texture get_texture() { }

	// RVA: 0x15B6498 Offset: 0x15B2498 VA: 0x15B6498
	public void set_texture(Texture value) { }

	// RVA: 0x15B6544 Offset: 0x15B2544 VA: 0x15B6544
	public Rect get_uvRect() { }

	// RVA: 0x15B6550 Offset: 0x15B2550 VA: 0x15B6550
	public void set_uvRect(Rect value) { }

	// RVA: 0x15B659C Offset: 0x15B259C VA: 0x15B659C Slot: 44
	public override void SetNativeSize() { }

	// RVA: 0x15B6850 Offset: 0x15B2850 VA: 0x15B6850 Slot: 43
	protected override void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x15B6B34 Offset: 0x15B2B34 VA: 0x15B6B34 Slot: 13
	protected override void OnDidApplyAnimationProperties() { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
[ExecuteAlways]
public class RectMask2D : UIBehaviour, IClipper, ICanvasRaycastFilter // TypeDefIndex: 6443
{
	// Fields
	private readonly RectangularVertexClipper m_VertexClipper; // 0x20
	private RectTransform m_RectTransform; // 0x28
	private HashSet<MaskableGraphic> m_MaskableTargets; // 0x30
	private HashSet<IClippable> m_ClipTargets; // 0x38
	private bool m_ShouldRecalculateClipRects; // 0x40
	private List<RectMask2D> m_Clippers; // 0x48
	private Rect m_LastClipRectCanvasSpace; // 0x50
	private bool m_ForceClip; // 0x60
	[SerializeField]
	private Vector4 m_Padding; // 0x64
	[SerializeField]
	private Vector2Int m_Softness; // 0x74
	private Canvas m_Canvas; // 0x80
	private Vector3[] m_Corners; // 0x88

	// Properties
	public Vector4 padding { get; set; }
	public Vector2Int softness { get; set; }
	internal Canvas Canvas { get; }
	public Rect canvasRect { get; }
	public RectTransform rectTransform { get; }
	private Rect rootCanvasRect { get; }

	// Methods

	// RVA: 0x15B6B70 Offset: 0x15B2B70 VA: 0x15B6B70
	public Vector4 get_padding() { }

	// RVA: 0x15B6B7C Offset: 0x15B2B7C VA: 0x15B6B7C
	public void set_padding(Vector4 value) { }

	// RVA: 0x15B6B88 Offset: 0x15B2B88 VA: 0x15B6B88
	public Vector2Int get_softness() { }

	// RVA: 0x15B6B90 Offset: 0x15B2B90 VA: 0x15B6B90
	public void set_softness(Vector2Int value) { }

	// RVA: 0x15B6BA4 Offset: 0x15B2BA4 VA: 0x15B6BA4
	internal Canvas get_Canvas() { }

	// RVA: 0x15B6D14 Offset: 0x15B2D14 VA: 0x15B6D14
	public Rect get_canvasRect() { }

	// RVA: 0x15B6D58 Offset: 0x15B2D58 VA: 0x15B6D58
	public RectTransform get_rectTransform() { }

	// RVA: 0x15B6DB8 Offset: 0x15B2DB8 VA: 0x15B6DB8
	protected void .ctor() { }

	// RVA: 0x15B6F1C Offset: 0x15B2F1C VA: 0x15B6F1C Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15B6F4C Offset: 0x15B2F4C VA: 0x15B6F4C Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15B7048 Offset: 0x15B3048 VA: 0x15B7048 Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x15B7068 Offset: 0x15B3068 VA: 0x15B7068 Slot: 19
	public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera) { }

	// RVA: 0x15B7144 Offset: 0x15B3144 VA: 0x15B7144
	private Rect get_rootCanvasRect() { }

	// RVA: 0x15B7240 Offset: 0x15B3240 VA: 0x15B7240 Slot: 20
	public virtual void PerformClipping() { }

	// RVA: 0x15B7AE4 Offset: 0x15B3AE4 VA: 0x15B7AE4 Slot: 21
	public virtual void UpdateClipSoftness() { }

	// RVA: 0x15B52A8 Offset: 0x15B12A8 VA: 0x15B52A8
	public void AddClippable(IClippable clippable) { }

	// RVA: 0x15B5108 Offset: 0x15B1108 VA: 0x15B5108
	public void RemoveClippable(IClippable clippable) { }

	// RVA: 0x15B7E1C Offset: 0x15B3E1C VA: 0x15B7E1C Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x15B7E40 Offset: 0x15B3E40 VA: 0x15B7E40 Slot: 15
	protected override void OnCanvasHierarchyChanged() { }
}


// Namespace: 
public enum Scrollbar.Direction // TypeDefIndex: 6444
{
	// Fields
	public int value__; // 0x0
	public const Scrollbar.Direction LeftToRight = 0;
	public const Scrollbar.Direction RightToLeft = 1;
	public const Scrollbar.Direction BottomToTop = 2;
	public const Scrollbar.Direction TopToBottom = 3;
}


// Namespace: 
[Serializable]
public class Scrollbar.ScrollEvent : UnityEvent<float> // TypeDefIndex: 6445
{
	// Methods

	// RVA: 0x15B82C4 Offset: 0x15B42C4 VA: 0x15B82C4
	public void .ctor() { }
}


// Namespace: 
private enum Scrollbar.Axis // TypeDefIndex: 6446
{
	// Fields
	public int value__; // 0x0
	public const Scrollbar.Axis Horizontal = 0;
	public const Scrollbar.Axis Vertical = 1;
}


// Namespace: 
[CompilerGenerated]
private sealed class Scrollbar.<ClickRepeat>d__58 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6447
{
	// Fields
	private int <>1__state; // 0x10
	private object <>2__current; // 0x18
	public Scrollbar <>4__this; // 0x20
	public Vector2 screenPosition; // 0x28
	public Camera camera; // 0x30

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x15B9338 Offset: 0x15B5338 VA: 0x15B9338
	public void .ctor(int <>1__state) { }

	[DebuggerHidden]
	// RVA: 0x15B9C0C Offset: 0x15B5C0C VA: 0x15B9C0C Slot: 5
	private void System.IDisposable.Dispose() { }

	// RVA: 0x15B9C10 Offset: 0x15B5C10 VA: 0x15B9C10 Slot: 6
	private bool MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x15B9E68 Offset: 0x15B5E68 VA: 0x15B9E68 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

	[DebuggerHidden]
	// RVA: 0x15B9E70 Offset: 0x15B5E70 VA: 0x15B9E70 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }

	[DebuggerHidden]
	// RVA: 0x15B9EA8 Offset: 0x15B5EA8 VA: 0x15B9EA8 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class Scrollbar : Selectable, IBeginDragHandler, IEventSystemHandler, IDragHandler, IInitializePotentialDragHandler, ICanvasElement // TypeDefIndex: 6448
{
	// Fields
	[SerializeField]
	private RectTransform m_HandleRect; // 0x100
	[SerializeField]
	private Scrollbar.Direction m_Direction; // 0x108
	[SerializeField]
	private float m_Value; // 0x10C
	[SerializeField]
	private float m_Size; // 0x110
	[SerializeField]
	private int m_NumberOfSteps; // 0x114
	[SerializeField]
	private Scrollbar.ScrollEvent m_OnValueChanged; // 0x118
	private RectTransform m_ContainerRect; // 0x120
	private Vector2 m_Offset; // 0x128
	private DrivenRectTransformTracker m_Tracker; // 0x130
	private Coroutine m_PointerDownRepeat; // 0x138
	private bool isPointerDownAndNotDragging; // 0x140
	private bool m_DelayedUpdateVisuals; // 0x141

	// Properties
	public RectTransform handleRect { get; set; }
	public Scrollbar.Direction direction { get; set; }
	public float value { get; set; }
	public float size { get; set; }
	public int numberOfSteps { get; set; }
	public Scrollbar.ScrollEvent onValueChanged { get; set; }
	private float stepSize { get; }
	private Scrollbar.Axis axis { get; }
	private bool reverseValue { get; }

	// Methods

	// RVA: 0x15B7E64 Offset: 0x15B3E64 VA: 0x15B7E64
	public RectTransform get_handleRect() { }

	// RVA: 0x15B7E6C Offset: 0x15B3E6C VA: 0x15B7E6C
	public void set_handleRect(RectTransform value) { }

	// RVA: 0x15B8190 Offset: 0x15B4190 VA: 0x15B8190
	public Scrollbar.Direction get_direction() { }

	// RVA: 0x15B8198 Offset: 0x15B4198 VA: 0x15B8198
	public void set_direction(Scrollbar.Direction value) { }

	// RVA: 0x15B8204 Offset: 0x15B4204 VA: 0x15B8204
	protected void .ctor() { }

	// RVA: 0x15B8420 Offset: 0x15B4420 VA: 0x15B8420
	public float get_value() { }

	// RVA: 0x15B84D8 Offset: 0x15B44D8 VA: 0x15B84D8
	public void set_value(float value) { }

	// RVA: 0x15B85A8 Offset: 0x15B45A8 VA: 0x15B85A8 Slot: 47
	public virtual void SetValueWithoutNotify(float input) { }

	// RVA: 0x15B85B0 Offset: 0x15B45B0 VA: 0x15B85B0
	public float get_size() { }

	// RVA: 0x15B85B8 Offset: 0x15B45B8 VA: 0x15B85B8
	public void set_size(float value) { }

	// RVA: 0x15B8638 Offset: 0x15B4638 VA: 0x15B8638
	public int get_numberOfSteps() { }

	// RVA: 0x15B8640 Offset: 0x15B4640 VA: 0x15B8640
	public void set_numberOfSteps(int value) { }

	// RVA: 0x15B86BC Offset: 0x15B46BC VA: 0x15B86BC
	public Scrollbar.ScrollEvent get_onValueChanged() { }

	// RVA: 0x15B86C4 Offset: 0x15B46C4 VA: 0x15B86C4
	public void set_onValueChanged(Scrollbar.ScrollEvent value) { }

	// RVA: 0x15B86CC Offset: 0x15B46CC VA: 0x15B86CC
	private float get_stepSize() { }

	// RVA: 0x15B86F8 Offset: 0x15B46F8 VA: 0x15B86F8 Slot: 48
	public virtual void Rebuild(CanvasUpdate executing) { }

	// RVA: 0x15B86FC Offset: 0x15B46FC VA: 0x15B86FC Slot: 49
	public virtual void LayoutComplete() { }

	// RVA: 0x15B8700 Offset: 0x15B4700 VA: 0x15B8700 Slot: 50
	public virtual void GraphicUpdateComplete() { }

	// RVA: 0x15B8704 Offset: 0x15B4704 VA: 0x15B8704 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15B89EC Offset: 0x15B49EC VA: 0x15B89EC Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15B8B34 Offset: 0x15B4B34 VA: 0x15B8B34 Slot: 51
	protected virtual void Update() { }

	// RVA: 0x15B7EE8 Offset: 0x15B3EE8 VA: 0x15B7EE8
	private void UpdateCachedReferences() { }

	// RVA: 0x15B84E0 Offset: 0x15B44E0 VA: 0x15B84E0
	private void Set(float input, bool sendCallback = True) { }

	// RVA: 0x15B8B48 Offset: 0x15B4B48 VA: 0x15B8B48 Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x15B8B80 Offset: 0x15B4B80 VA: 0x15B8B80
	private Scrollbar.Axis get_axis() { }

	// RVA: 0x15B8B90 Offset: 0x15B4B90 VA: 0x15B8B90
	private bool get_reverseValue() { }

	// RVA: 0x15B7FD8 Offset: 0x15B3FD8 VA: 0x15B7FD8
	private void UpdateVisuals() { }

	// RVA: 0x15B8BA4 Offset: 0x15B4BA4 VA: 0x15B8BA4
	private void UpdateDrag(PointerEventData eventData) { }

	// RVA: 0x15B8DB4 Offset: 0x15B4DB4 VA: 0x15B8DB4
	private void DoUpdateDrag(Vector2 handleCorner, float remainingSize) { }

	// RVA: 0x15B8E1C Offset: 0x15B4E1C VA: 0x15B8E1C
	private bool MayDrag(PointerEventData eventData) { }

	// RVA: 0x15B8E80 Offset: 0x15B4E80 VA: 0x15B8E80 Slot: 52
	public virtual void OnBeginDrag(PointerEventData eventData) { }

	// RVA: 0x15B9034 Offset: 0x15B5034 VA: 0x15B9034 Slot: 53
	public virtual void OnDrag(PointerEventData eventData) { }

	// RVA: 0x15B90C4 Offset: 0x15B50C4 VA: 0x15B90C4 Slot: 32
	public override void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x15B92F8 Offset: 0x15B52F8 VA: 0x15B92F8
	protected IEnumerator ClickRepeat(PointerEventData eventData) { }

	// RVA: 0x15B9274 Offset: 0x15B5274 VA: 0x15B9274
	protected IEnumerator ClickRepeat(Vector2 screenPosition, Camera camera) { }

	// RVA: 0x15B9360 Offset: 0x15B5360 VA: 0x15B9360 Slot: 33
	public override void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x15B93A0 Offset: 0x15B53A0 VA: 0x15B93A0 Slot: 31
	public override void OnMove(AxisEventData eventData) { }

	// RVA: 0x15B9674 Offset: 0x15B5674 VA: 0x15B9674 Slot: 27
	public override Selectable FindSelectableOnLeft() { }

	// RVA: 0x15B9770 Offset: 0x15B5770 VA: 0x15B9770 Slot: 28
	public override Selectable FindSelectableOnRight() { }

	// RVA: 0x15B986C Offset: 0x15B586C VA: 0x15B986C Slot: 29
	public override Selectable FindSelectableOnUp() { }

	// RVA: 0x15B9968 Offset: 0x15B5968 VA: 0x15B9968 Slot: 30
	public override Selectable FindSelectableOnDown() { }

	// RVA: 0x15B9A64 Offset: 0x15B5A64 VA: 0x15B9A64 Slot: 54
	public virtual void OnInitializePotentialDrag(PointerEventData eventData) { }

	// RVA: 0x15B9A7C Offset: 0x15B5A7C VA: 0x15B9A7C
	public void SetDirection(Scrollbar.Direction direction, bool includeRectLayouts) { }

	// RVA: 0x15B9C04 Offset: 0x15B5C04 VA: 0x15B9C04 Slot: 43
	private Transform UnityEngine.UI.ICanvasElement.get_transform() { }
}


// Namespace: 
public enum ScrollRect.MovementType // TypeDefIndex: 6449
{
	// Fields
	public int value__; // 0x0
	public const ScrollRect.MovementType Unrestricted = 0;
	public const ScrollRect.MovementType Elastic = 1;
	public const ScrollRect.MovementType Clamped = 2;
}


// Namespace: 
public enum ScrollRect.ScrollbarVisibility // TypeDefIndex: 6450
{
	// Fields
	public int value__; // 0x0
	public const ScrollRect.ScrollbarVisibility Permanent = 0;
	public const ScrollRect.ScrollbarVisibility AutoHide = 1;
	public const ScrollRect.ScrollbarVisibility AutoHideAndExpandViewport = 2;
}


// Namespace: 
[Serializable]
public class ScrollRect.ScrollRectEvent : UnityEvent<Vector2> // TypeDefIndex: 6451
{
	// Methods

	// RVA: 0x15BA67C Offset: 0x15B667C VA: 0x15BA67C
	public void .ctor() { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(RectTransform))]
[DisallowMultipleComponent]
[ExecuteAlways]
public class ScrollRect : UIBehaviour, IInitializePotentialDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IScrollHandler, ICanvasElement, ILayoutElement, ILayoutGroup, ILayoutController // TypeDefIndex: 6452
{
	// Fields
	[SerializeField]
	private RectTransform m_Content; // 0x20
	[SerializeField]
	private bool m_Horizontal; // 0x28
	[SerializeField]
	private bool m_Vertical; // 0x29
	[SerializeField]
	private ScrollRect.MovementType m_MovementType; // 0x2C
	[SerializeField]
	private float m_Elasticity; // 0x30
	[SerializeField]
	private bool m_Inertia; // 0x34
	[SerializeField]
	private float m_DecelerationRate; // 0x38
	[SerializeField]
	private float m_ScrollSensitivity; // 0x3C
	[SerializeField]
	private RectTransform m_Viewport; // 0x40
	[SerializeField]
	private Scrollbar m_HorizontalScrollbar; // 0x48
	[SerializeField]
	private Scrollbar m_VerticalScrollbar; // 0x50
	[SerializeField]
	private ScrollRect.ScrollbarVisibility m_HorizontalScrollbarVisibility; // 0x58
	[SerializeField]
	private ScrollRect.ScrollbarVisibility m_VerticalScrollbarVisibility; // 0x5C
	[SerializeField]
	private float m_HorizontalScrollbarSpacing; // 0x60
	[SerializeField]
	private float m_VerticalScrollbarSpacing; // 0x64
	[SerializeField]
	private ScrollRect.ScrollRectEvent m_OnValueChanged; // 0x68
	private Vector2 m_PointerStartLocalCursor; // 0x70
	protected Vector2 m_ContentStartPosition; // 0x78
	private RectTransform m_ViewRect; // 0x80
	protected Bounds m_ContentBounds; // 0x88
	private Bounds m_ViewBounds; // 0xA0
	private Vector2 m_Velocity; // 0xB8
	private bool m_Dragging; // 0xC0
	private bool m_Scrolling; // 0xC1
	private Vector2 m_PrevPosition; // 0xC4
	private Bounds m_PrevContentBounds; // 0xCC
	private Bounds m_PrevViewBounds; // 0xE4
	private bool m_HasRebuiltLayout; // 0xFC
	private bool m_HSliderExpand; // 0xFD
	private bool m_VSliderExpand; // 0xFE
	private float m_HSliderHeight; // 0x100
	private float m_VSliderWidth; // 0x104
	private RectTransform m_Rect; // 0x108
	private RectTransform m_HorizontalScrollbarRect; // 0x110
	private RectTransform m_VerticalScrollbarRect; // 0x118
	private DrivenRectTransformTracker m_Tracker; // 0x120
	private readonly Vector3[] m_Corners; // 0x128

	// Properties
	public RectTransform content { get; set; }
	public bool horizontal { get; set; }
	public bool vertical { get; set; }
	public ScrollRect.MovementType movementType { get; set; }
	public float elasticity { get; set; }
	public bool inertia { get; set; }
	public float decelerationRate { get; set; }
	public float scrollSensitivity { get; set; }
	public RectTransform viewport { get; set; }
	public Scrollbar horizontalScrollbar { get; set; }
	public Scrollbar verticalScrollbar { get; set; }
	public ScrollRect.ScrollbarVisibility horizontalScrollbarVisibility { get; set; }
	public ScrollRect.ScrollbarVisibility verticalScrollbarVisibility { get; set; }
	public float horizontalScrollbarSpacing { get; set; }
	public float verticalScrollbarSpacing { get; set; }
	public ScrollRect.ScrollRectEvent onValueChanged { get; set; }
	protected RectTransform viewRect { get; }
	public Vector2 velocity { get; set; }
	private RectTransform rectTransform { get; }
	public Vector2 normalizedPosition { get; set; }
	public float horizontalNormalizedPosition { get; set; }
	public float verticalNormalizedPosition { get; set; }
	private bool hScrollingNeeded { get; }
	private bool vScrollingNeeded { get; }
	public virtual float minWidth { get; }
	public virtual float preferredWidth { get; }
	public virtual float flexibleWidth { get; }
	public virtual float minHeight { get; }
	public virtual float preferredHeight { get; }
	public virtual float flexibleHeight { get; }
	public virtual int layoutPriority { get; }

	// Methods

	// RVA: 0x15B9EB0 Offset: 0x15B5EB0 VA: 0x15B9EB0
	public RectTransform get_content() { }

	// RVA: 0x15B9EB8 Offset: 0x15B5EB8 VA: 0x15B9EB8
	public void set_content(RectTransform value) { }

	// RVA: 0x15B9EC0 Offset: 0x15B5EC0 VA: 0x15B9EC0
	public bool get_horizontal() { }

	// RVA: 0x15B9EC8 Offset: 0x15B5EC8 VA: 0x15B9EC8
	public void set_horizontal(bool value) { }

	// RVA: 0x15B9ED4 Offset: 0x15B5ED4 VA: 0x15B9ED4
	public bool get_vertical() { }

	// RVA: 0x15B9EDC Offset: 0x15B5EDC VA: 0x15B9EDC
	public void set_vertical(bool value) { }

	// RVA: 0x15B9EE8 Offset: 0x15B5EE8 VA: 0x15B9EE8
	public ScrollRect.MovementType get_movementType() { }

	// RVA: 0x15B9EF0 Offset: 0x15B5EF0 VA: 0x15B9EF0
	public void set_movementType(ScrollRect.MovementType value) { }

	// RVA: 0x15B9EF8 Offset: 0x15B5EF8 VA: 0x15B9EF8
	public float get_elasticity() { }

	// RVA: 0x15B9F00 Offset: 0x15B5F00 VA: 0x15B9F00
	public void set_elasticity(float value) { }

	// RVA: 0x15B9F08 Offset: 0x15B5F08 VA: 0x15B9F08
	public bool get_inertia() { }

	// RVA: 0x15B9F10 Offset: 0x15B5F10 VA: 0x15B9F10
	public void set_inertia(bool value) { }

	// RVA: 0x15B9F1C Offset: 0x15B5F1C VA: 0x15B9F1C
	public float get_decelerationRate() { }

	// RVA: 0x15B9F24 Offset: 0x15B5F24 VA: 0x15B9F24
	public void set_decelerationRate(float value) { }

	// RVA: 0x15B9F2C Offset: 0x15B5F2C VA: 0x15B9F2C
	public float get_scrollSensitivity() { }

	// RVA: 0x15B9F34 Offset: 0x15B5F34 VA: 0x15B9F34
	public void set_scrollSensitivity(float value) { }

	// RVA: 0x15B9F3C Offset: 0x15B5F3C VA: 0x15B9F3C
	public RectTransform get_viewport() { }

	// RVA: 0x15B9F44 Offset: 0x15B5F44 VA: 0x15B9F44
	public void set_viewport(RectTransform value) { }

	// RVA: 0x15B9FFC Offset: 0x15B5FFC VA: 0x15B9FFC
	public Scrollbar get_horizontalScrollbar() { }

	// RVA: 0x15BA004 Offset: 0x15B6004 VA: 0x15BA004
	public void set_horizontalScrollbar(Scrollbar value) { }

	// RVA: 0x15BA180 Offset: 0x15B6180 VA: 0x15BA180
	public Scrollbar get_verticalScrollbar() { }

	// RVA: 0x15BA188 Offset: 0x15B6188 VA: 0x15BA188
	public void set_verticalScrollbar(Scrollbar value) { }

	// RVA: 0x15BA304 Offset: 0x15B6304 VA: 0x15BA304
	public ScrollRect.ScrollbarVisibility get_horizontalScrollbarVisibility() { }

	// RVA: 0x15BA30C Offset: 0x15B630C VA: 0x15BA30C
	public void set_horizontalScrollbarVisibility(ScrollRect.ScrollbarVisibility value) { }

	// RVA: 0x15BA314 Offset: 0x15B6314 VA: 0x15BA314
	public ScrollRect.ScrollbarVisibility get_verticalScrollbarVisibility() { }

	// RVA: 0x15BA31C Offset: 0x15B631C VA: 0x15BA31C
	public void set_verticalScrollbarVisibility(ScrollRect.ScrollbarVisibility value) { }

	// RVA: 0x15BA324 Offset: 0x15B6324 VA: 0x15BA324
	public float get_horizontalScrollbarSpacing() { }

	// RVA: 0x15BA32C Offset: 0x15B632C VA: 0x15BA32C
	public void set_horizontalScrollbarSpacing(float value) { }

	// RVA: 0x15BA3B8 Offset: 0x15B63B8 VA: 0x15BA3B8
	public float get_verticalScrollbarSpacing() { }

	// RVA: 0x15BA3C0 Offset: 0x15B63C0 VA: 0x15BA3C0
	public void set_verticalScrollbarSpacing(float value) { }

	// RVA: 0x15BA3C8 Offset: 0x15B63C8 VA: 0x15BA3C8
	public ScrollRect.ScrollRectEvent get_onValueChanged() { }

	// RVA: 0x15BA3D0 Offset: 0x15B63D0 VA: 0x15BA3D0
	public void set_onValueChanged(ScrollRect.ScrollRectEvent value) { }

	// RVA: 0x15BA3D8 Offset: 0x15B63D8 VA: 0x15BA3D8
	protected RectTransform get_viewRect() { }

	// RVA: 0x15BA4C8 Offset: 0x15B64C8 VA: 0x15BA4C8
	public Vector2 get_velocity() { }

	// RVA: 0x15BA4D0 Offset: 0x15B64D0 VA: 0x15BA4D0
	public void set_velocity(Vector2 value) { }

	// RVA: 0x15BA4D8 Offset: 0x15B64D8 VA: 0x15BA4D8
	private RectTransform get_rectTransform() { }

	// RVA: 0x15BA57C Offset: 0x15B657C VA: 0x15BA57C
	protected void .ctor() { }

	// RVA: 0x15BA6C4 Offset: 0x15B66C4 VA: 0x15BA6C4 Slot: 38
	public virtual void Rebuild(CanvasUpdate executing) { }

	// RVA: 0x15BB054 Offset: 0x15B7054 VA: 0x15BB054 Slot: 39
	public virtual void LayoutComplete() { }

	// RVA: 0x15BB058 Offset: 0x15B7058 VA: 0x15BB058 Slot: 40
	public virtual void GraphicUpdateComplete() { }

	// RVA: 0x15BA74C Offset: 0x15B674C VA: 0x15BA74C
	private void UpdateCachedData() { }

	// RVA: 0x15BB05C Offset: 0x15B705C VA: 0x15BB05C Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15BB218 Offset: 0x15B7218 VA: 0x15BB218 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15BB444 Offset: 0x15B7444 VA: 0x15BB444 Slot: 9
	public override bool IsActive() { }

	// RVA: 0x15BB4C4 Offset: 0x15B74C4 VA: 0x15BB4C4
	private void EnsureLayoutHasRebuilt() { }

	// RVA: 0x15BB538 Offset: 0x15B7538 VA: 0x15BB538 Slot: 41
	public virtual void StopMovement() { }

	// RVA: 0x15BB588 Offset: 0x15B7588 VA: 0x15BB588 Slot: 42
	public virtual void OnScroll(PointerEventData data) { }

	// RVA: 0x15BB724 Offset: 0x15B7724 VA: 0x15BB724 Slot: 43
	public virtual void OnInitializePotentialDrag(PointerEventData eventData) { }

	// RVA: 0x15BB784 Offset: 0x15B7784 VA: 0x15BB784 Slot: 44
	public virtual void OnBeginDrag(PointerEventData eventData) { }

	// RVA: 0x15BB8B0 Offset: 0x15B78B0 VA: 0x15BB8B0 Slot: 45
	public virtual void OnEndDrag(PointerEventData eventData) { }

	// RVA: 0x15BB8D0 Offset: 0x15B78D0 VA: 0x15BB8D0 Slot: 46
	public virtual void OnDrag(PointerEventData eventData) { }

	// RVA: 0x15BBB04 Offset: 0x15B7B04 VA: 0x15BBB04 Slot: 47
	protected virtual void SetContentAnchoredPosition(Vector2 position) { }

	// RVA: 0x15BBBB8 Offset: 0x15B7BB8 VA: 0x15BBBB8 Slot: 48
	protected virtual void LateUpdate() { }

	// RVA: 0x15BAF7C Offset: 0x15B6F7C VA: 0x15BAF7C
	protected void UpdatePrevData() { }

	// RVA: 0x15BADFC Offset: 0x15B6DFC VA: 0x15BADFC
	private void UpdateScrollbars(Vector2 offset) { }

	// RVA: 0x15BC190 Offset: 0x15B8190 VA: 0x15BC190
	public Vector2 get_normalizedPosition() { }

	// RVA: 0x15BC400 Offset: 0x15B8400 VA: 0x15BC400
	public void set_normalizedPosition(Vector2 value) { }

	// RVA: 0x15BC200 Offset: 0x15B8200 VA: 0x15BC200
	public float get_horizontalNormalizedPosition() { }

	// RVA: 0x15BC448 Offset: 0x15B8448 VA: 0x15BC448
	public void set_horizontalNormalizedPosition(float value) { }

	// RVA: 0x15BC300 Offset: 0x15B8300 VA: 0x15BC300
	public float get_verticalNormalizedPosition() { }

	// RVA: 0x15BC45C Offset: 0x15B845C VA: 0x15BC45C
	public void set_verticalNormalizedPosition(float value) { }

	// RVA: 0x15BC470 Offset: 0x15B8470 VA: 0x15BC470
	private void SetHorizontalNormalizedPosition(float value) { }

	// RVA: 0x15BC484 Offset: 0x15B8484 VA: 0x15BC484
	private void SetVerticalNormalizedPosition(float value) { }

	// RVA: 0x15BC498 Offset: 0x15B8498 VA: 0x15BC498 Slot: 49
	protected virtual void SetNormalizedPosition(float value, int axis) { }

	// RVA: 0x15BBACC Offset: 0x15B7ACC VA: 0x15BBACC
	private static float RubberDelta(float overStretching, float viewSize) { }

	// RVA: 0x15BC730 Offset: 0x15B8730 VA: 0x15BC730 Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x15BC734 Offset: 0x15B8734 VA: 0x15BC734
	private bool get_hScrollingNeeded() { }

	// RVA: 0x15BC7BC Offset: 0x15B87BC VA: 0x15BC7BC
	private bool get_vScrollingNeeded() { }

	// RVA: 0x15BC844 Offset: 0x15B8844 VA: 0x15BC844 Slot: 50
	public virtual void CalculateLayoutInputHorizontal() { }

	// RVA: 0x15BC848 Offset: 0x15B8848 VA: 0x15BC848 Slot: 51
	public virtual void CalculateLayoutInputVertical() { }

	// RVA: 0x15BC84C Offset: 0x15B884C VA: 0x15BC84C Slot: 52
	public virtual float get_minWidth() { }

	// RVA: 0x15BC854 Offset: 0x15B8854 VA: 0x15BC854 Slot: 53
	public virtual float get_preferredWidth() { }

	// RVA: 0x15BC85C Offset: 0x15B885C VA: 0x15BC85C Slot: 54
	public virtual float get_flexibleWidth() { }

	// RVA: 0x15BC864 Offset: 0x15B8864 VA: 0x15BC864 Slot: 55
	public virtual float get_minHeight() { }

	// RVA: 0x15BC86C Offset: 0x15B886C VA: 0x15BC86C Slot: 56
	public virtual float get_preferredHeight() { }

	// RVA: 0x15BC874 Offset: 0x15B8874 VA: 0x15BC874 Slot: 57
	public virtual float get_flexibleHeight() { }

	// RVA: 0x15BC87C Offset: 0x15B887C VA: 0x15BC87C Slot: 58
	public virtual int get_layoutPriority() { }

	// RVA: 0x15BC884 Offset: 0x15B8884 VA: 0x15BC884 Slot: 59
	public virtual void SetLayoutHorizontal() { }

	// RVA: 0x15BCE54 Offset: 0x15B8E54 VA: 0x15BCE54 Slot: 60
	public virtual void SetLayoutVertical() { }

	// RVA: 0x15BC1C0 Offset: 0x15B81C0 VA: 0x15BC1C0
	private void UpdateScrollbarVisibility() { }

	// RVA: 0x15BD160 Offset: 0x15B9160 VA: 0x15BD160
	private static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ScrollRect.ScrollbarVisibility scrollbarVisibility, Scrollbar scrollbar) { }

	// RVA: 0x15BCF0C Offset: 0x15B8F0C VA: 0x15BCF0C
	private void UpdateScrollbarLayout() { }

	// RVA: 0x15BAAA4 Offset: 0x15B6AA4 VA: 0x15BAAA4
	protected void UpdateBounds() { }

	// RVA: 0x15BD264 Offset: 0x15B9264 VA: 0x15BD264
	internal static void AdjustBounds(ref Bounds viewBounds, ref Vector2 contentPivot, ref Vector3 contentSize, ref Vector3 contentPos) { }

	// RVA: 0x15BCD60 Offset: 0x15B8D60 VA: 0x15BCD60
	private Bounds GetBounds() { }

	// RVA: 0x15BD2E0 Offset: 0x15B92E0 VA: 0x15BD2E0
	internal static Bounds InternalGetBounds(Vector3[] corners, ref Matrix4x4 viewWorldToLocalMatrix) { }

	// RVA: 0x15BB6F4 Offset: 0x15B76F4 VA: 0x15BB6F4
	private Vector2 CalculateOffset(Vector2 delta) { }

	// RVA: 0x15BD470 Offset: 0x15B9470 VA: 0x15BD470
	internal static Vector2 InternalCalculateOffset(ref Bounds viewBounds, ref Bounds contentBounds, bool horizontal, bool vertical, ScrollRect.MovementType movementType, ref Vector2 delta) { }

	// RVA: 0x15BA334 Offset: 0x15B6334 VA: 0x15BA334
	protected void SetDirty() { }

	// RVA: 0x15B9F4C Offset: 0x15B5F4C VA: 0x15B9F4C
	protected void SetDirtyCaching() { }

	// RVA: 0x15BD5B4 Offset: 0x15B95B4 VA: 0x15BD5B4 Slot: 23
	private Transform UnityEngine.UI.ICanvasElement.get_transform() { }
}


// Namespace: 
public enum Selectable.Transition // TypeDefIndex: 6453
{
	// Fields
	public int value__; // 0x0
	public const Selectable.Transition None = 0;
	public const Selectable.Transition ColorTint = 1;
	public const Selectable.Transition SpriteSwap = 2;
	public const Selectable.Transition Animation = 3;
}


// Namespace: 
protected enum Selectable.SelectionState // TypeDefIndex: 6454
{
	// Fields
	public int value__; // 0x0
	public const Selectable.SelectionState Normal = 0;
	public const Selectable.SelectionState Highlighted = 1;
	public const Selectable.SelectionState Pressed = 2;
	public const Selectable.SelectionState Selected = 3;
	public const Selectable.SelectionState Disabled = 4;
}


// Namespace: UnityEngine.UI
[DisallowMultipleComponent]
[ExecuteAlways]
public class Selectable : UIBehaviour, IMoveHandler, IEventSystemHandler, IPointerDownHandler, IPointerUpHandler, IPointerEnterHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler // TypeDefIndex: 6455
{
	// Fields
	protected static Selectable[] s_Selectables; // 0x0
	protected static int s_SelectableCount; // 0x8
	private bool m_EnableCalled; // 0x20
	[FormerlySerializedAs("navigation")]
	[SerializeField]
	private Navigation m_Navigation; // 0x28
	[SerializeField]
	[FormerlySerializedAs("transition")]
	private Selectable.Transition m_Transition; // 0x50
	[FormerlySerializedAs("colors")]
	[SerializeField]
	private ColorBlock m_Colors; // 0x54
	[FormerlySerializedAs("spriteState")]
	[SerializeField]
	private SpriteState m_SpriteState; // 0xB0
	[SerializeField]
	[FormerlySerializedAs("animationTriggers")]
	private AnimationTriggers m_AnimationTriggers; // 0xD0
	[Tooltip("Can the Selectable be interacted with?")]
	[SerializeField]
	private bool m_Interactable; // 0xD8
	[SerializeField]
	[FormerlySerializedAs("m_HighlightGraphic")]
	[FormerlySerializedAs("highlightGraphic")]
	private Graphic m_TargetGraphic; // 0xE0
	private bool m_GroupsAllowInteraction; // 0xE8
	protected int m_CurrentIndex; // 0xEC
	[CompilerGenerated]
	private bool <isPointerInside>k__BackingField; // 0xF0
	[CompilerGenerated]
	private bool <isPointerDown>k__BackingField; // 0xF1
	[CompilerGenerated]
	private bool <hasSelection>k__BackingField; // 0xF2
	private readonly List<CanvasGroup> m_CanvasGroupCache; // 0xF8

	// Properties
	public static Selectable[] allSelectablesArray { get; }
	public static int allSelectableCount { get; }
	[Obsolete("Replaced with allSelectablesArray to have better performance when disabling a element", False)]
	public static List<Selectable> allSelectables { get; }
	public Navigation navigation { get; set; }
	public Selectable.Transition transition { get; set; }
	public ColorBlock colors { get; set; }
	public SpriteState spriteState { get; set; }
	public AnimationTriggers animationTriggers { get; set; }
	public Graphic targetGraphic { get; set; }
	public bool interactable { get; set; }
	private bool isPointerInside { get; set; }
	private bool isPointerDown { get; set; }
	private bool hasSelection { get; set; }
	public Image image { get; set; }
	public Animator animator { get; }
	protected Selectable.SelectionState currentSelectionState { get; }

	// Methods

	// RVA: 0x15BD5BC Offset: 0x15B95BC VA: 0x15BD5BC
	public static Selectable[] get_allSelectablesArray() { }

	// RVA: 0x15BD658 Offset: 0x15B9658 VA: 0x15BD658
	public static int get_allSelectableCount() { }

	// RVA: 0x15BD6B0 Offset: 0x15B96B0 VA: 0x15BD6B0
	public static List<Selectable> get_allSelectables() { }

	// RVA: 0x15BD74C Offset: 0x15B974C VA: 0x15BD74C
	public static int AllSelectablesNoAlloc(Selectable[] selectables) { }

	// RVA: 0x15BD808 Offset: 0x15B9808 VA: 0x15BD808
	public Navigation get_navigation() { }

	// RVA: 0x15BD820 Offset: 0x15B9820 VA: 0x15BD820
	public void set_navigation(Navigation value) { }

	// RVA: 0x15BD904 Offset: 0x15B9904 VA: 0x15BD904
	public Selectable.Transition get_transition() { }

	// RVA: 0x15BD90C Offset: 0x15B990C VA: 0x15BD90C
	public void set_transition(Selectable.Transition value) { }

	// RVA: 0x15BD978 Offset: 0x15B9978 VA: 0x15BD978
	public ColorBlock get_colors() { }

	// RVA: 0x15BD988 Offset: 0x15B9988 VA: 0x15BD988
	public void set_colors(ColorBlock value) { }

	// RVA: 0x15BDA0C Offset: 0x15B9A0C VA: 0x15BDA0C
	public SpriteState get_spriteState() { }

	// RVA: 0x15BDA18 Offset: 0x15B9A18 VA: 0x15BDA18
	public void set_spriteState(SpriteState value) { }

	// RVA: 0x15BDA90 Offset: 0x15B9A90 VA: 0x15BDA90
	public AnimationTriggers get_animationTriggers() { }

	// RVA: 0x15BDA98 Offset: 0x15B9A98 VA: 0x15BDA98
	public void set_animationTriggers(AnimationTriggers value) { }

	// RVA: 0x15BDB0C Offset: 0x15B9B0C VA: 0x15BDB0C
	public Graphic get_targetGraphic() { }

	// RVA: 0x15BDB14 Offset: 0x15B9B14 VA: 0x15BDB14
	public void set_targetGraphic(Graphic value) { }

	// RVA: 0x15BDB88 Offset: 0x15B9B88 VA: 0x15BDB88
	public bool get_interactable() { }

	// RVA: 0x15BDB90 Offset: 0x15B9B90 VA: 0x15BDB90
	public void set_interactable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15BDCFC Offset: 0x15B9CFC VA: 0x15BDCFC
	private bool get_isPointerInside() { }

	[CompilerGenerated]
	// RVA: 0x15BDD04 Offset: 0x15B9D04 VA: 0x15BDD04
	private void set_isPointerInside(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15BDD10 Offset: 0x15B9D10 VA: 0x15BDD10
	private bool get_isPointerDown() { }

	[CompilerGenerated]
	// RVA: 0x15BDD18 Offset: 0x15B9D18 VA: 0x15BDD18
	private void set_isPointerDown(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15BDD24 Offset: 0x15B9D24 VA: 0x15BDD24
	private bool get_hasSelection() { }

	[CompilerGenerated]
	// RVA: 0x15BDD2C Offset: 0x15B9D2C VA: 0x15BDD2C
	private void set_hasSelection(bool value) { }

	// RVA: 0x15B830C Offset: 0x15B430C VA: 0x15B830C
	protected void .ctor() { }

	// RVA: 0x15BDD38 Offset: 0x15B9D38 VA: 0x15BDD38
	public Image get_image() { }

	// RVA: 0x15BDDB4 Offset: 0x15B9DB4 VA: 0x15BDDB4
	public void set_image(Image value) { }

	// RVA: 0x15BDDBC Offset: 0x15B9DBC VA: 0x15BDDBC
	public Animator get_animator() { }

	// RVA: 0x15BDE18 Offset: 0x15B9E18 VA: 0x15BDE18 Slot: 4
	protected override void Awake() { }

	// RVA: 0x15BDEB4 Offset: 0x15B9EB4 VA: 0x15BDEB4 Slot: 14
	protected override void OnCanvasGroupChanged() { }

	// RVA: 0x15BDEE8 Offset: 0x15B9EE8 VA: 0x15BDEE8
	private bool ParentGroupAllowsInteraction() { }

	// RVA: 0x15BE078 Offset: 0x15BA078 VA: 0x15BE078 Slot: 24
	public virtual bool IsInteractable() { }

	// RVA: 0x15BE098 Offset: 0x15BA098 VA: 0x15BE098 Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x15B8734 Offset: 0x15B4734 VA: 0x15B8734 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15BE0EC Offset: 0x15BA0EC VA: 0x15BE0EC Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x15BD8A0 Offset: 0x15B98A0 VA: 0x15BD8A0
	private void OnSetProperty() { }

	// RVA: 0x15B8A0C Offset: 0x15B4A0C VA: 0x15B8A0C Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15BE114 Offset: 0x15BA114 VA: 0x15BE114
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x15BE09C Offset: 0x15BA09C VA: 0x15BE09C
	protected Selectable.SelectionState get_currentSelectionState() { }

	// RVA: 0x15BE1BC Offset: 0x15BA1BC VA: 0x15BE1BC Slot: 25
	protected virtual void InstantClearState() { }

	// RVA: 0x15BE56C Offset: 0x15BA56C VA: 0x15BE56C Slot: 26
	protected virtual void DoStateTransition(Selectable.SelectionState state, bool instant) { }

	// RVA: 0x15BE7E0 Offset: 0x15BA7E0 VA: 0x15BE7E0
	public Selectable FindSelectable(Vector3 dir) { }

	// RVA: 0x15BEC94 Offset: 0x15BAC94 VA: 0x15BEC94
	private static Vector3 GetPointOnRectEdge(RectTransform rect, Vector2 dir) { }

	// RVA: 0x15BEE14 Offset: 0x15BAE14 VA: 0x15BEE14
	private void Navigate(AxisEventData eventData, Selectable sel) { }

	// RVA: 0x15B9698 Offset: 0x15B5698 VA: 0x15B9698 Slot: 27
	public virtual Selectable FindSelectableOnLeft() { }

	// RVA: 0x15B9794 Offset: 0x15B5794 VA: 0x15B9794 Slot: 28
	public virtual Selectable FindSelectableOnRight() { }

	// RVA: 0x15B9890 Offset: 0x15B5890 VA: 0x15B9890 Slot: 29
	public virtual Selectable FindSelectableOnUp() { }

	// RVA: 0x15B998C Offset: 0x15B598C VA: 0x15B998C Slot: 30
	public virtual Selectable FindSelectableOnDown() { }

	// RVA: 0x15B95E8 Offset: 0x15B55E8 VA: 0x15B95E8 Slot: 31
	public virtual void OnMove(AxisEventData eventData) { }

	// RVA: 0x15BE22C Offset: 0x15BA22C VA: 0x15BE22C
	private void StartColorTween(Color targetColor, bool instant) { }

	// RVA: 0x15BE33C Offset: 0x15BA33C VA: 0x15BE33C
	private void DoSpriteSwap(Sprite newSprite) { }

	// RVA: 0x15BE3E4 Offset: 0x15BA3E4 VA: 0x15BE3E4
	private void TriggerAnimation(string triggername) { }

	// RVA: 0x15BEECC Offset: 0x15BAECC VA: 0x15BEECC
	protected bool IsHighlighted() { }

	// RVA: 0x15BE170 Offset: 0x15BA170 VA: 0x15BE170
	protected bool IsPressed() { }

	// RVA: 0x15BEF28 Offset: 0x15BAF28 VA: 0x15BEF28
	private void EvaluateAndTransitionToSelectionState() { }

	// RVA: 0x15B9144 Offset: 0x15B5144 VA: 0x15B9144 Slot: 32
	public virtual void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x15B9378 Offset: 0x15B5378 VA: 0x15B9378 Slot: 33
	public virtual void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x15BEFC0 Offset: 0x15BAFC0 VA: 0x15BEFC0 Slot: 34
	public virtual void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x15BEFCC Offset: 0x15BAFCC VA: 0x15BEFCC Slot: 35
	public virtual void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x15BEFD4 Offset: 0x15BAFD4 VA: 0x15BEFD4 Slot: 36
	public virtual void OnSelect(BaseEventData eventData) { }

	// RVA: 0x15BEFE0 Offset: 0x15BAFE0 VA: 0x15BEFE0 Slot: 37
	public virtual void OnDeselect(BaseEventData eventData) { }

	// RVA: 0x15BEFE8 Offset: 0x15BAFE8 VA: 0x15BEFE8 Slot: 38
	public virtual void Select() { }

	// RVA: 0x15BF0EC Offset: 0x15BB0EC VA: 0x15BF0EC
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
internal static class SetPropertyUtility // TypeDefIndex: 6456
{
	// Methods

	// RVA: 0x15BF160 Offset: 0x15BB160 VA: 0x15BF160
	public static bool SetColor(ref Color currentValue, Color newValue) { }

	// RVA: -1 Offset: -1
	public static bool SetStruct<T>(ref T currentValue, T newValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA74F8 Offset: 0xBA34F8 VA: 0xBA74F8
	|-SetPropertyUtility.SetStruct<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: -1 Offset: -1
	public static bool SetClass<T>(ref T currentValue, T newValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBA74A8 Offset: 0xBA34A8 VA: 0xBA74A8
	|-SetPropertyUtility.SetClass<object>
	*/
}


// Namespace: 
public enum Slider.Direction // TypeDefIndex: 6457
{
	// Fields
	public int value__; // 0x0
	public const Slider.Direction LeftToRight = 0;
	public const Slider.Direction RightToLeft = 1;
	public const Slider.Direction BottomToTop = 2;
	public const Slider.Direction TopToBottom = 3;
}


// Namespace: 
[Serializable]
public class Slider.SliderEvent : UnityEvent<float> // TypeDefIndex: 6458
{
	// Methods

	// RVA: 0x15BFD5C Offset: 0x15BBD5C VA: 0x15BFD5C
	public void .ctor() { }
}


// Namespace: 
private enum Slider.Axis // TypeDefIndex: 6459
{
	// Fields
	public int value__; // 0x0
	public const Slider.Axis Horizontal = 0;
	public const Slider.Axis Vertical = 1;
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class Slider : Selectable, IDragHandler, IEventSystemHandler, IInitializePotentialDragHandler, ICanvasElement // TypeDefIndex: 6460
{
	// Fields
	[SerializeField]
	private RectTransform m_FillRect; // 0x100
	[SerializeField]
	private RectTransform m_HandleRect; // 0x108
	[SerializeField]
	private Slider.Direction m_Direction; // 0x110
	[SerializeField]
	private float m_MinValue; // 0x114
	[SerializeField]
	private float m_MaxValue; // 0x118
	[SerializeField]
	private bool m_WholeNumbers; // 0x11C
	[SerializeField]
	protected float m_Value; // 0x120
	[SerializeField]
	private Slider.SliderEvent m_OnValueChanged; // 0x128
	private Image m_FillImage; // 0x130
	private Transform m_FillTransform; // 0x138
	private RectTransform m_FillContainerRect; // 0x140
	private Transform m_HandleTransform; // 0x148
	private RectTransform m_HandleContainerRect; // 0x150
	private Vector2 m_Offset; // 0x158
	private DrivenRectTransformTracker m_Tracker; // 0x160
	private bool m_DelayedUpdateVisuals; // 0x161

	// Properties
	public RectTransform fillRect { get; set; }
	public RectTransform handleRect { get; set; }
	public Slider.Direction direction { get; set; }
	public float minValue { get; set; }
	public float maxValue { get; set; }
	public bool wholeNumbers { get; set; }
	public virtual float value { get; set; }
	public float normalizedValue { get; set; }
	public Slider.SliderEvent onValueChanged { get; set; }
	private float stepSize { get; }
	private Slider.Axis axis { get; }
	private bool reverseValue { get; }

	// Methods

	// RVA: 0x15BF1A8 Offset: 0x15BB1A8 VA: 0x15BF1A8
	public RectTransform get_fillRect() { }

	// RVA: 0x15BF1B0 Offset: 0x15BB1B0 VA: 0x15BF1B0
	public void set_fillRect(RectTransform value) { }

	// RVA: 0x15BF7D0 Offset: 0x15BB7D0 VA: 0x15BF7D0
	public RectTransform get_handleRect() { }

	// RVA: 0x15BF7D8 Offset: 0x15BB7D8 VA: 0x15BF7D8
	public void set_handleRect(RectTransform value) { }

	// RVA: 0x15BF854 Offset: 0x15BB854 VA: 0x15BF854
	public Slider.Direction get_direction() { }

	// RVA: 0x15BF85C Offset: 0x15BB85C VA: 0x15BF85C
	public void set_direction(Slider.Direction value) { }

	// RVA: 0x15BF8C8 Offset: 0x15BB8C8 VA: 0x15BF8C8
	public float get_minValue() { }

	// RVA: 0x15BF8D0 Offset: 0x15BB8D0 VA: 0x15BF8D0
	public void set_minValue(float value) { }

	// RVA: 0x15BF958 Offset: 0x15BB958 VA: 0x15BF958
	public float get_maxValue() { }

	// RVA: 0x15BF960 Offset: 0x15BB960 VA: 0x15BF960
	public void set_maxValue(float value) { }

	// RVA: 0x15BF9E8 Offset: 0x15BB9E8 VA: 0x15BF9E8
	public bool get_wholeNumbers() { }

	// RVA: 0x15BF9F0 Offset: 0x15BB9F0 VA: 0x15BF9F0
	public void set_wholeNumbers(bool value) { }

	// RVA: 0x15BFA7C Offset: 0x15BBA7C VA: 0x15BFA7C Slot: 46
	public virtual float get_value() { }

	// RVA: 0x15BFB1C Offset: 0x15BBB1C VA: 0x15BFB1C Slot: 47
	public virtual void set_value(float value) { }

	// RVA: 0x15BFB30 Offset: 0x15BBB30 VA: 0x15BFB30 Slot: 48
	public virtual void SetValueWithoutNotify(float input) { }

	// RVA: 0x15BFB44 Offset: 0x15BBB44 VA: 0x15BFB44
	public float get_normalizedValue() { }

	// RVA: 0x15BFC28 Offset: 0x15BBC28 VA: 0x15BFC28
	public void set_normalizedValue(float value) { }

	// RVA: 0x15BFC60 Offset: 0x15BBC60 VA: 0x15BFC60
	public Slider.SliderEvent get_onValueChanged() { }

	// RVA: 0x15BFC68 Offset: 0x15BBC68 VA: 0x15BFC68
	public void set_onValueChanged(Slider.SliderEvent value) { }

	// RVA: 0x15BFC70 Offset: 0x15BBC70 VA: 0x15BFC70
	private float get_stepSize() { }

	// RVA: 0x15BFC9C Offset: 0x15BBC9C VA: 0x15BFC9C
	protected void .ctor() { }

	// RVA: 0x15BFDA4 Offset: 0x15BBDA4 VA: 0x15BFDA4 Slot: 49
	public virtual void Rebuild(CanvasUpdate executing) { }

	// RVA: 0x15BFDA8 Offset: 0x15BBDA8 VA: 0x15BFDA8 Slot: 50
	public virtual void LayoutComplete() { }

	// RVA: 0x15BFDAC Offset: 0x15BBDAC VA: 0x15BFDAC Slot: 51
	public virtual void GraphicUpdateComplete() { }

	// RVA: 0x15BFDB0 Offset: 0x15BBDB0 VA: 0x15BFDB0 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15BFDF0 Offset: 0x15BBDF0 VA: 0x15BFDF0 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15BFE14 Offset: 0x15BBE14 VA: 0x15BFE14 Slot: 52
	protected virtual void Update() { }

	// RVA: 0x15BFE54 Offset: 0x15BBE54 VA: 0x15BFE54 Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x15BF22C Offset: 0x15BB22C VA: 0x15BF22C
	private void UpdateCachedReferences() { }

	// RVA: 0x15C004C Offset: 0x15BC04C VA: 0x15C004C
	private float ClampValue(float input) { }

	// RVA: 0x15C0124 Offset: 0x15BC124 VA: 0x15C0124 Slot: 53
	protected virtual void Set(float input, bool sendCallback = True) { }

	// RVA: 0x15C01E0 Offset: 0x15BC1E0 VA: 0x15C01E0 Slot: 10
	protected override void OnRectTransformDimensionsChange() { }

	// RVA: 0x15C0114 Offset: 0x15BC114 VA: 0x15C0114
	private Slider.Axis get_axis() { }

	// RVA: 0x15C0100 Offset: 0x15BC100 VA: 0x15C0100
	private bool get_reverseValue() { }

	// RVA: 0x15BF4EC Offset: 0x15BB4EC VA: 0x15BF4EC
	private void UpdateVisuals() { }

	// RVA: 0x15C0218 Offset: 0x15BC218 VA: 0x15C0218
	private void UpdateDrag(PointerEventData eventData, Camera cam) { }

	// RVA: 0x15C0414 Offset: 0x15BC414 VA: 0x15C0414
	private bool MayDrag(PointerEventData eventData) { }

	// RVA: 0x15C0478 Offset: 0x15BC478 VA: 0x15C0478 Slot: 32
	public override void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x15C0748 Offset: 0x15BC748 VA: 0x15C0748 Slot: 54
	public virtual void OnDrag(PointerEventData eventData) { }

	// RVA: 0x15C0794 Offset: 0x15BC794 VA: 0x15C0794 Slot: 31
	public override void OnMove(AxisEventData eventData) { }

	// RVA: 0x15C09E4 Offset: 0x15BC9E4 VA: 0x15C09E4 Slot: 27
	public override Selectable FindSelectableOnLeft() { }

	// RVA: 0x15C0A0C Offset: 0x15BCA0C VA: 0x15C0A0C Slot: 28
	public override Selectable FindSelectableOnRight() { }

	// RVA: 0x15C0A34 Offset: 0x15BCA34 VA: 0x15C0A34 Slot: 29
	public override Selectable FindSelectableOnUp() { }

	// RVA: 0x15C0A5C Offset: 0x15BCA5C VA: 0x15C0A5C Slot: 30
	public override Selectable FindSelectableOnDown() { }

	// RVA: 0x15C0A84 Offset: 0x15BCA84 VA: 0x15C0A84 Slot: 55
	public virtual void OnInitializePotentialDrag(PointerEventData eventData) { }

	// RVA: 0x15C0A9C Offset: 0x15BCA9C VA: 0x15C0A9C
	public void SetDirection(Slider.Direction direction, bool includeRectLayouts) { }

	// RVA: 0x15C0C24 Offset: 0x15BCC24 VA: 0x15C0C24 Slot: 42
	private Transform UnityEngine.UI.ICanvasElement.get_transform() { }
}


// Namespace: UnityEngine.UI
[Serializable]
public struct SpriteState : IEquatable<SpriteState> // TypeDefIndex: 6461
{
	// Fields
	[SerializeField]
	private Sprite m_HighlightedSprite; // 0x0
	[SerializeField]
	private Sprite m_PressedSprite; // 0x8
	[FormerlySerializedAs("m_HighlightedSprite")]
	[SerializeField]
	private Sprite m_SelectedSprite; // 0x10
	[SerializeField]
	private Sprite m_DisabledSprite; // 0x18

	// Properties
	public Sprite highlightedSprite { get; }
	public Sprite pressedSprite { get; }
	public Sprite selectedSprite { get; }
	public Sprite disabledSprite { get; }

	// Methods

	// RVA: 0x15C0C2C Offset: 0x15BCC2C VA: 0x15C0C2C
	public Sprite get_highlightedSprite() { }

	// RVA: 0x15C0C34 Offset: 0x15BCC34 VA: 0x15C0C34
	public Sprite get_pressedSprite() { }

	// RVA: 0x15C0C3C Offset: 0x15BCC3C VA: 0x15C0C3C
	public Sprite get_selectedSprite() { }

	// RVA: 0x15C0C44 Offset: 0x15BCC44 VA: 0x15C0C44
	public Sprite get_disabledSprite() { }

	// RVA: 0x15C0C4C Offset: 0x15BCC4C VA: 0x15C0C4C Slot: 4
	public bool Equals(SpriteState other) { }
}


// Namespace: 
private class StencilMaterial.MatEntry // TypeDefIndex: 6462
{
	// Fields
	public Material baseMat; // 0x10
	public Material customMat; // 0x18
	public int count; // 0x20
	public int stencilId; // 0x24
	public StencilOp operation; // 0x28
	public CompareFunction compareFunction; // 0x2C
	public int readMask; // 0x30
	public int writeMask; // 0x34
	public bool useAlphaClip; // 0x38
	public ColorWriteMask colorMask; // 0x3C

	// Methods

	// RVA: 0x15C17C8 Offset: 0x15BD7C8 VA: 0x15C17C8
	public void .ctor() { }
}


// Namespace: UnityEngine.UI
public static class StencilMaterial // TypeDefIndex: 6463
{
	// Fields
	private static List<StencilMaterial.MatEntry> m_List; // 0x0

	// Methods

	// RVA: 0x15C0D54 Offset: 0x15BCD54 VA: 0x15C0D54
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask) { }

	// RVA: 0x15C1720 Offset: 0x15BD720 VA: 0x15C1720
	private static void LogWarningWhenNotInBatchmode(string warning, Object context) { }

	// RVA: 0x15C0DE0 Offset: 0x15BCDE0 VA: 0x15C0DE0
	public static Material Add(Material baseMat, int stencilID, StencilOp operation, CompareFunction compareFunction, ColorWriteMask colorWriteMask, int readMask, int writeMask) { }

	// RVA: 0x15C17D8 Offset: 0x15BD7D8 VA: 0x15C17D8
	public static void Remove(Material customMat) { }

	// RVA: 0x15C198C Offset: 0x15BD98C VA: 0x15C198C
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(CanvasRenderer))]
public class Text : MaskableGraphic, ILayoutElement // TypeDefIndex: 6464
{
	// Fields
	[SerializeField]
	private FontData m_FontData; // 0xD8
	[SerializeField]
	protected string m_Text; // 0xE0
	private TextGenerator m_TextCache; // 0xE8
	private TextGenerator m_TextCacheForLayout; // 0xF0
	protected static Material s_DefaultText; // 0x0
	protected bool m_DisableFontTextureRebuiltCallback; // 0xF8
	private readonly UIVertex[] m_TempVerts; // 0x100

	// Properties
	public TextGenerator cachedTextGenerator { get; }
	public TextGenerator cachedTextGeneratorForLayout { get; }
	public override Texture mainTexture { get; }
	public Font font { get; set; }
	public virtual string text { get; set; }
	public bool supportRichText { get; set; }
	public bool resizeTextForBestFit { get; set; }
	public int resizeTextMinSize { get; set; }
	public int resizeTextMaxSize { get; set; }
	public TextAnchor alignment { get; set; }
	public bool alignByGeometry { get; set; }
	public int fontSize { get; set; }
	public HorizontalWrapMode horizontalOverflow { get; set; }
	public VerticalWrapMode verticalOverflow { get; set; }
	public float lineSpacing { get; set; }
	public FontStyle fontStyle { get; set; }
	public float pixelsPerUnit { get; }
	public virtual float minWidth { get; }
	public virtual float preferredWidth { get; }
	public virtual float flexibleWidth { get; }
	public virtual float minHeight { get; }
	public virtual float preferredHeight { get; }
	public virtual float flexibleHeight { get; }
	public virtual int layoutPriority { get; }

	// Methods

	// RVA: 0x15C1A18 Offset: 0x15BDA18 VA: 0x15C1A18
	protected void .ctor() { }

	// RVA: 0x15C1AB0 Offset: 0x15BDAB0 VA: 0x15C1AB0
	public TextGenerator get_cachedTextGenerator() { }

	// RVA: 0x15C1B38 Offset: 0x15BDB38 VA: 0x15C1B38
	public TextGenerator get_cachedTextGeneratorForLayout() { }

	// RVA: 0x15C1B9C Offset: 0x15BDB9C VA: 0x15C1B9C Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x15C1D60 Offset: 0x15BDD60 VA: 0x15C1D60
	public void FontTextureChanged() { }

	// RVA: 0x15C1D44 Offset: 0x15BDD44 VA: 0x15C1D44
	public Font get_font() { }

	// RVA: 0x15C1E6C Offset: 0x15BDE6C VA: 0x15C1E6C
	public void set_font(Font value) { }

	// RVA: 0x15C1F80 Offset: 0x15BDF80 VA: 0x15C1F80 Slot: 70
	public virtual string get_text() { }

	// RVA: 0x15C1F88 Offset: 0x15BDF88 VA: 0x15C1F88 Slot: 71
	public virtual void set_text(string value) { }

	// RVA: 0x15C2050 Offset: 0x15BE050 VA: 0x15C2050
	public bool get_supportRichText() { }

	// RVA: 0x15C206C Offset: 0x15BE06C VA: 0x15C206C
	public void set_supportRichText(bool value) { }

	// RVA: 0x15C20CC Offset: 0x15BE0CC VA: 0x15C20CC
	public bool get_resizeTextForBestFit() { }

	// RVA: 0x15C20E8 Offset: 0x15BE0E8 VA: 0x15C20E8
	public void set_resizeTextForBestFit(bool value) { }

	// RVA: 0x15C2148 Offset: 0x15BE148 VA: 0x15C2148
	public int get_resizeTextMinSize() { }

	// RVA: 0x15C2164 Offset: 0x15BE164 VA: 0x15C2164
	public void set_resizeTextMinSize(int value) { }

	// RVA: 0x15C21B8 Offset: 0x15BE1B8 VA: 0x15C21B8
	public int get_resizeTextMaxSize() { }

	// RVA: 0x15C21D4 Offset: 0x15BE1D4 VA: 0x15C21D4
	public void set_resizeTextMaxSize(int value) { }

	// RVA: 0x15C2228 Offset: 0x15BE228 VA: 0x15C2228
	public TextAnchor get_alignment() { }

	// RVA: 0x15C2244 Offset: 0x15BE244 VA: 0x15C2244
	public void set_alignment(TextAnchor value) { }

	// RVA: 0x15C2298 Offset: 0x15BE298 VA: 0x15C2298
	public bool get_alignByGeometry() { }

	// RVA: 0x15C22B4 Offset: 0x15BE2B4 VA: 0x15C22B4
	public void set_alignByGeometry(bool value) { }

	// RVA: 0x15C22FC Offset: 0x15BE2FC VA: 0x15C22FC
	public int get_fontSize() { }

	// RVA: 0x15C2318 Offset: 0x15BE318 VA: 0x15C2318
	public void set_fontSize(int value) { }

	// RVA: 0x15C236C Offset: 0x15BE36C VA: 0x15C236C
	public HorizontalWrapMode get_horizontalOverflow() { }

	// RVA: 0x15C2388 Offset: 0x15BE388 VA: 0x15C2388
	public void set_horizontalOverflow(HorizontalWrapMode value) { }

	// RVA: 0x15C23DC Offset: 0x15BE3DC VA: 0x15C23DC
	public VerticalWrapMode get_verticalOverflow() { }

	// RVA: 0x15C23F8 Offset: 0x15BE3F8 VA: 0x15C23F8
	public void set_verticalOverflow(VerticalWrapMode value) { }

	// RVA: 0x15C244C Offset: 0x15BE44C VA: 0x15C244C
	public float get_lineSpacing() { }

	// RVA: 0x15C2468 Offset: 0x15BE468 VA: 0x15C2468
	public void set_lineSpacing(float value) { }

	// RVA: 0x15C24BC Offset: 0x15BE4BC VA: 0x15C24BC
	public FontStyle get_fontStyle() { }

	// RVA: 0x15C24D8 Offset: 0x15BE4D8 VA: 0x15C24D8
	public void set_fontStyle(FontStyle value) { }

	// RVA: 0x15C252C Offset: 0x15BE52C VA: 0x15C252C
	public float get_pixelsPerUnit() { }

	// RVA: 0x15C2674 Offset: 0x15BE674 VA: 0x15C2674 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15C26F0 Offset: 0x15BE6F0 VA: 0x15C26F0 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15C2754 Offset: 0x15BE754 VA: 0x15C2754 Slot: 41
	protected override void UpdateGeometry() { }

	// RVA: 0x15C27DC Offset: 0x15BE7DC VA: 0x15C27DC
	internal void AssignDefaultFont() { }

	// RVA: 0x15C284C Offset: 0x15BE84C VA: 0x15C284C
	internal void AssignDefaultFontIfNecessary() { }

	// RVA: 0x15C2908 Offset: 0x15BE908 VA: 0x15C2908
	public TextGenerationSettings GetGenerationSettings(Vector2 extents) { }

	// RVA: 0x15C2AF8 Offset: 0x15BEAF8 VA: 0x15C2AF8
	public static Vector2 GetTextAnchorPivot(TextAnchor anchor) { }

	// RVA: 0x15C2B64 Offset: 0x15BEB64 VA: 0x15C2B64 Slot: 43
	protected override void OnPopulateMesh(VertexHelper toFill) { }

	// RVA: 0x15C35DC Offset: 0x15BF5DC VA: 0x15C35DC Slot: 72
	public virtual void CalculateLayoutInputHorizontal() { }

	// RVA: 0x15C35E0 Offset: 0x15BF5E0 VA: 0x15C35E0 Slot: 73
	public virtual void CalculateLayoutInputVertical() { }

	// RVA: 0x15C35E4 Offset: 0x15BF5E4 VA: 0x15C35E4 Slot: 74
	public virtual float get_minWidth() { }

	// RVA: 0x15C35EC Offset: 0x15BF5EC VA: 0x15C35EC Slot: 75
	public virtual float get_preferredWidth() { }

	// RVA: 0x15C36C8 Offset: 0x15BF6C8 VA: 0x15C36C8 Slot: 76
	public virtual float get_flexibleWidth() { }

	// RVA: 0x15C36D0 Offset: 0x15BF6D0 VA: 0x15C36D0 Slot: 77
	public virtual float get_minHeight() { }

	// RVA: 0x15C36D8 Offset: 0x15BF6D8 VA: 0x15C36D8 Slot: 78
	public virtual float get_preferredHeight() { }

	// RVA: 0x15C3790 Offset: 0x15BF790 VA: 0x15C3790 Slot: 79
	public virtual float get_flexibleHeight() { }

	// RVA: 0x15C3798 Offset: 0x15BF798 VA: 0x15C3798 Slot: 80
	public virtual int get_layoutPriority() { }
}


// Namespace: 
public enum Toggle.ToggleTransition // TypeDefIndex: 6465
{
	// Fields
	public int value__; // 0x0
	public const Toggle.ToggleTransition None = 0;
	public const Toggle.ToggleTransition Fade = 1;
}


// Namespace: 
[Serializable]
public class Toggle.ToggleEvent : UnityEvent<bool> // TypeDefIndex: 6466
{
	// Methods

	// RVA: 0x15C3A58 Offset: 0x15BFA58 VA: 0x15C3A58
	public void .ctor() { }
}


// Namespace: UnityEngine.UI
[RequireComponent(typeof(RectTransform))]
public class Toggle : Selectable, IPointerClickHandler, IEventSystemHandler, ISubmitHandler, ICanvasElement // TypeDefIndex: 6467
{
	// Fields
	public Toggle.ToggleTransition toggleTransition; // 0x100
	public Graphic graphic; // 0x108
	[SerializeField]
	private ToggleGroup m_Group; // 0x110
	public Toggle.ToggleEvent onValueChanged; // 0x118
	[Tooltip("Is the toggle currently on or off?")]
	[SerializeField]
	private bool m_IsOn; // 0x120

	// Properties
	public ToggleGroup group { get; set; }
	public bool isOn { get; set; }

	// Methods

	// RVA: 0x15C37A0 Offset: 0x15BF7A0 VA: 0x15C37A0
	public ToggleGroup get_group() { }

	// RVA: 0x15C37A8 Offset: 0x15BF7A8 VA: 0x15C37A8
	public void set_group(ToggleGroup value) { }

	// RVA: 0x15C39C8 Offset: 0x15BF9C8 VA: 0x15C39C8
	protected void .ctor() { }

	// RVA: 0x15C3AA0 Offset: 0x15BFAA0 VA: 0x15C3AA0 Slot: 46
	public virtual void Rebuild(CanvasUpdate executing) { }

	// RVA: 0x15C3AA4 Offset: 0x15BFAA4 VA: 0x15C3AA4 Slot: 47
	public virtual void LayoutComplete() { }

	// RVA: 0x15C3AA8 Offset: 0x15BFAA8 VA: 0x15C3AA8 Slot: 48
	public virtual void GraphicUpdateComplete() { }

	// RVA: 0x15C3AAC Offset: 0x15BFAAC VA: 0x15C3AAC Slot: 8
	protected override void OnDestroy() { }

	// RVA: 0x15C3F28 Offset: 0x15BFF28 VA: 0x15C3F28 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15C3F58 Offset: 0x15BFF58 VA: 0x15C3F58 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15C3F7C Offset: 0x15BFF7C VA: 0x15C3F7C Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x15C37C8 Offset: 0x15BF7C8 VA: 0x15C37C8
	private void SetToggleGroup(ToggleGroup newGroup, bool setMemberValue) { }

	// RVA: 0x15C4450 Offset: 0x15C0450 VA: 0x15C4450
	public bool get_isOn() { }

	// RVA: 0x15C4458 Offset: 0x15C0458 VA: 0x15C4458
	public void set_isOn(bool value) { }

	// RVA: 0x15C4464 Offset: 0x15C0464 VA: 0x15C4464
	public void SetIsOnWithoutNotify(bool value) { }

	// RVA: 0x15C40A4 Offset: 0x15C00A4 VA: 0x15C40A4
	private void Set(bool value, bool sendCallback = True) { }

	// RVA: 0x15C3904 Offset: 0x15BF904 VA: 0x15C3904
	private void PlayEffect(bool instant) { }

	// RVA: 0x15C45B0 Offset: 0x15C05B0 VA: 0x15C45B0 Slot: 6
	protected override void Start() { }

	// RVA: 0x15C45B8 Offset: 0x15C05B8 VA: 0x15C45B8
	private void InternalToggle() { }

	// RVA: 0x15C460C Offset: 0x15C060C VA: 0x15C460C Slot: 49
	public virtual void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x15C4630 Offset: 0x15C0630 VA: 0x15C4630 Slot: 50
	public virtual void OnSubmit(BaseEventData eventData) { }

	// RVA: 0x15C4634 Offset: 0x15C0634 VA: 0x15C4634 Slot: 42
	private Transform UnityEngine.UI.ICanvasElement.get_transform() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class ToggleGroup.<>c // TypeDefIndex: 6468
{
	// Fields
	public static readonly ToggleGroup.<>c <>9; // 0x0
	public static Predicate<Toggle> <>9__13_0; // 0x8
	public static Func<Toggle, bool> <>9__14_0; // 0x10

	// Methods

	// RVA: 0x15C4AE4 Offset: 0x15C0AE4 VA: 0x15C4AE4
	private static void .cctor() { }

	// RVA: 0x15C4B40 Offset: 0x15C0B40 VA: 0x15C4B40
	public void .ctor() { }

	// RVA: 0x15C4B48 Offset: 0x15C0B48 VA: 0x15C4B48
	internal bool <AnyTogglesOn>b__13_0(Toggle x) { }

	// RVA: 0x15C4B60 Offset: 0x15C0B60 VA: 0x15C4B60
	internal bool <ActiveToggles>b__14_0(Toggle x) { }
}


// Namespace: UnityEngine.UI
[DisallowMultipleComponent]
public class ToggleGroup : UIBehaviour // TypeDefIndex: 6469
{
	// Fields
	[SerializeField]
	private bool m_AllowSwitchOff; // 0x20
	protected List<Toggle> m_Toggles; // 0x28

	// Properties
	public bool allowSwitchOff { get; set; }

	// Methods

	// RVA: 0x15C463C Offset: 0x15C063C VA: 0x15C463C
	public bool get_allowSwitchOff() { }

	// RVA: 0x15C4644 Offset: 0x15C0644 VA: 0x15C4644
	public void set_allowSwitchOff(bool value) { }

	// RVA: 0x15C4650 Offset: 0x15C0650 VA: 0x15C4650
	protected void .ctor() { }

	// RVA: 0x15C46CC Offset: 0x15C06CC VA: 0x15C46CC Slot: 6
	protected override void Start() { }

	// RVA: 0x15C46E8 Offset: 0x15C06E8 VA: 0x15C46E8 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15C4704 Offset: 0x15C0704 VA: 0x15C4704
	private void ValidateToggleIsInGroup(Toggle toggle) { }

	// RVA: 0x15C4334 Offset: 0x15C0334 VA: 0x15C4334
	public void NotifyToggleOn(Toggle toggle, bool sendCallback = True) { }

	// RVA: 0x15C4214 Offset: 0x15C0214 VA: 0x15C4214
	public void UnregisterToggle(Toggle toggle) { }

	// RVA: 0x15C42A4 Offset: 0x15C02A4 VA: 0x15C42A4
	public void RegisterToggle(Toggle toggle) { }

	// RVA: 0x15C3B2C Offset: 0x15BFB2C VA: 0x15C3B2C
	public void EnsureValidState() { }

	// RVA: 0x15C4470 Offset: 0x15C0470 VA: 0x15C4470
	public bool AnyTogglesOn() { }

	// RVA: 0x15C4854 Offset: 0x15C0854 VA: 0x15C4854
	public IEnumerable<Toggle> ActiveToggles() { }

	// RVA: 0x15C4948 Offset: 0x15C0948 VA: 0x15C4948
	public Toggle GetFirstActiveToggle() { }

	// RVA: 0x15C49DC Offset: 0x15C09DC VA: 0x15C49DC
	public void SetAllTogglesOff(bool sendCallback = True) { }
}


// Namespace: 
public sealed class ReflectionMethodsCache.Raycast3DCallback : MulticastDelegate // TypeDefIndex: 6470
{
	// Methods

	// RVA: 0x15C5800 Offset: 0x15C1800 VA: 0x15C5800
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15C588C Offset: 0x15C188C VA: 0x15C588C Slot: 12
	public virtual bool Invoke(Ray r, out RaycastHit hit, float f, int i) { }
}


// Namespace: 
public sealed class ReflectionMethodsCache.RaycastAllCallback : MulticastDelegate // TypeDefIndex: 6471
{
	// Methods

	// RVA: 0x15C58CC Offset: 0x15C18CC VA: 0x15C58CC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15C5958 Offset: 0x15C1958 VA: 0x15C5958 Slot: 12
	public virtual RaycastHit[] Invoke(Ray r, float f, int i) { }
}


// Namespace: 
public sealed class ReflectionMethodsCache.GetRaycastNonAllocCallback : MulticastDelegate // TypeDefIndex: 6472
{
	// Methods

	// RVA: 0x15C5994 Offset: 0x15C1994 VA: 0x15C5994
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15C5A20 Offset: 0x15C1A20 VA: 0x15C5A20 Slot: 12
	public virtual int Invoke(Ray r, RaycastHit[] results, float f, int i) { }
}


// Namespace: 
public sealed class ReflectionMethodsCache.Raycast2DCallback : MulticastDelegate // TypeDefIndex: 6473
{
	// Methods

	// RVA: 0x15C5A5C Offset: 0x15C1A5C VA: 0x15C5A5C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15C5AE8 Offset: 0x15C1AE8 VA: 0x15C5AE8 Slot: 12
	public virtual RaycastHit2D Invoke(Vector2 p1, Vector2 p2, float f, int i) { }
}


// Namespace: 
public sealed class ReflectionMethodsCache.GetRayIntersectionAllCallback : MulticastDelegate // TypeDefIndex: 6474
{
	// Methods

	// RVA: 0x15C5AFC Offset: 0x15C1AFC VA: 0x15C5AFC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15C5B88 Offset: 0x15C1B88 VA: 0x15C5B88 Slot: 12
	public virtual RaycastHit2D[] Invoke(Ray r, float f, int i) { }
}


// Namespace: 
public sealed class ReflectionMethodsCache.GetRayIntersectionAllNonAllocCallback : MulticastDelegate // TypeDefIndex: 6475
{
	// Methods

	// RVA: 0x15C5BC4 Offset: 0x15C1BC4 VA: 0x15C5BC4
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x15C5C50 Offset: 0x15C1C50 VA: 0x15C5C50 Slot: 12
	public virtual int Invoke(Ray r, RaycastHit2D[] results, float f, int i) { }
}


// Namespace: UnityEngine.UI
internal class ReflectionMethodsCache // TypeDefIndex: 6476
{
	// Fields
	public ReflectionMethodsCache.Raycast3DCallback raycast3D; // 0x10
	public ReflectionMethodsCache.RaycastAllCallback raycast3DAll; // 0x18
	public ReflectionMethodsCache.GetRaycastNonAllocCallback getRaycastNonAlloc; // 0x20
	public ReflectionMethodsCache.Raycast2DCallback raycast2D; // 0x28
	public ReflectionMethodsCache.GetRayIntersectionAllCallback getRayIntersectionAll; // 0x30
	public ReflectionMethodsCache.GetRayIntersectionAllNonAllocCallback getRayIntersectionAllNonAlloc; // 0x38
	private static ReflectionMethodsCache s_ReflectionMethodsCache; // 0x0

	// Properties
	public static ReflectionMethodsCache Singleton { get; }

	// Methods

	// RVA: 0x15C4B78 Offset: 0x15C0B78 VA: 0x15C4B78
	public void .ctor() { }

	// RVA: 0x15C578C Offset: 0x15C178C VA: 0x15C578C
	public static ReflectionMethodsCache get_Singleton() { }
}


// Namespace: UnityEngine.UI
public class VertexHelper : IDisposable // TypeDefIndex: 6477
{
	// Fields
	private List<Vector3> m_Positions; // 0x10
	private List<Color32> m_Colors; // 0x18
	private List<Vector4> m_Uv0S; // 0x20
	private List<Vector4> m_Uv1S; // 0x28
	private List<Vector4> m_Uv2S; // 0x30
	private List<Vector4> m_Uv3S; // 0x38
	private List<Vector3> m_Normals; // 0x40
	private List<Vector4> m_Tangents; // 0x48
	private List<int> m_Indices; // 0x50
	private static readonly Vector4 s_DefaultTangent; // 0x0
	private static readonly Vector3 s_DefaultNormal; // 0x10
	private bool m_ListsInitalized; // 0x58

	// Properties
	public int currentVertCount { get; }

	// Methods

	// RVA: 0x15C5C8C Offset: 0x15C1C8C VA: 0x15C5C8C
	public void .ctor() { }

	// RVA: 0x15C5C94 Offset: 0x15C1C94 VA: 0x15C5C94
	public void .ctor(Mesh m) { }

	// RVA: 0x15C5ED0 Offset: 0x15C1ED0 VA: 0x15C5ED0
	private void InitializeListIfRequired() { }

	// RVA: 0x15C6058 Offset: 0x15C2058 VA: 0x15C6058 Slot: 4
	public void Dispose() { }

	// RVA: 0x15C3140 Offset: 0x15BF140 VA: 0x15C3140
	public void Clear() { }

	// RVA: 0x15C620C Offset: 0x15C220C VA: 0x15C620C
	public int get_currentVertCount() { }

	// RVA: 0x15C6258 Offset: 0x15C2258 VA: 0x15C6258
	public void PopulateUIVertex(ref UIVertex vertex, int i) { }

	// RVA: 0x15C63F4 Offset: 0x15C23F4 VA: 0x15C63F4
	public void SetUIVertex(UIVertex vertex, int i) { }

	// RVA: 0x15C6590 Offset: 0x15C2590 VA: 0x15C6590
	public void FillMesh(Mesh mesh) { }

	// RVA: 0x15C66F0 Offset: 0x15C26F0 VA: 0x15C66F0
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector4 uv2, Vector4 uv3, Vector3 normal, Vector4 tangent) { }

	// RVA: 0x15C68B0 Offset: 0x15C28B0 VA: 0x15C68B0
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector3 normal, Vector4 tangent) { }

	// RVA: 0x15C69A8 Offset: 0x15C29A8 VA: 0x15C69A8
	public void AddVert(Vector3 position, Color32 color, Vector4 uv0) { }

	// RVA: 0x15C6AD8 Offset: 0x15C2AD8 VA: 0x15C6AD8
	public void AddVert(UIVertex v) { }

	// RVA: 0x15C6B6C Offset: 0x15C2B6C VA: 0x15C6B6C
	public void AddTriangle(int idx0, int idx1, int idx2) { }

	// RVA: 0x15C34CC Offset: 0x15BF4CC VA: 0x15C34CC
	public void AddUIVertexQuad(UIVertex[] verts) { }

	// RVA: 0x15C6C1C Offset: 0x15C2C1C VA: 0x15C6C1C
	public void AddUIVertexTriangleStream(List<UIVertex> verts) { }

	// RVA: 0x15C6C6C Offset: 0x15C2C6C VA: 0x15C6C6C
	public void GetUIVertexStream(List<UIVertex> stream) { }

	// RVA: 0x15C6CBC Offset: 0x15C2CBC VA: 0x15C6CBC
	private static void .cctor() { }
}


// Namespace: UnityEngine.UI
[ExecuteAlways]
public abstract class BaseMeshEffect : UIBehaviour, IMeshModifier // TypeDefIndex: 6478
{
	// Fields
	private Graphic m_Graphic; // 0x20

	// Properties
	protected Graphic graphic { get; }

	// Methods

	// RVA: 0x15C6D54 Offset: 0x15C2D54 VA: 0x15C6D54
	protected Graphic get_graphic() { }

	// RVA: 0x15C6DF8 Offset: 0x15C2DF8 VA: 0x15C6DF8 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15C6EA0 Offset: 0x15C2EA0 VA: 0x15C6EA0 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15C6F3C Offset: 0x15C2F3C VA: 0x15C6F3C Slot: 13
	protected override void OnDidApplyAnimationProperties() { }

	// RVA: 0x15C6FD8 Offset: 0x15C2FD8 VA: 0x15C6FD8 Slot: 19
	public virtual void ModifyMesh(Mesh mesh) { }

	// RVA: -1 Offset: -1 Slot: 20
	public abstract void ModifyMesh(VertexHelper vh);

	// RVA: 0x15C7188 Offset: 0x15C3188 VA: 0x15C7188
	protected void .ctor() { }
}


// Namespace: UnityEngine.UI
public interface IMeshModifier // TypeDefIndex: 6479
{
	// Methods

	[Obsolete("use IMeshModifier.ModifyMesh (VertexHelper verts) instead", False)]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void ModifyMesh(Mesh mesh);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ModifyMesh(VertexHelper verts);
}


// Namespace: UnityEngine.UI
public class Outline : Shadow // TypeDefIndex: 6480
{
	// Methods

	// RVA: 0x15C7190 Offset: 0x15C3190 VA: 0x15C7190
	protected void .ctor() { }

	// RVA: 0x15C71E0 Offset: 0x15C31E0 VA: 0x15C71E0 Slot: 20
	public override void ModifyMesh(VertexHelper vh) { }
}


// Namespace: UnityEngine.UI
public class PositionAsUV1 : BaseMeshEffect // TypeDefIndex: 6481
{
	// Methods

	// RVA: 0x15C76A4 Offset: 0x15C36A4 VA: 0x15C76A4
	protected void .ctor() { }

	// RVA: 0x15C76AC Offset: 0x15C36AC VA: 0x15C76AC Slot: 20
	public override void ModifyMesh(VertexHelper vh) { }
}


// Namespace: UnityEngine.UI
public class Shadow : BaseMeshEffect // TypeDefIndex: 6482
{
	// Fields
	[SerializeField]
	private Color m_EffectColor; // 0x28
	[SerializeField]
	private Vector2 m_EffectDistance; // 0x38
	[SerializeField]
	private bool m_UseGraphicAlpha; // 0x40
	private const float kMaxEffectDistance = 600;

	// Properties
	public Color effectColor { get; set; }
	public Vector2 effectDistance { get; set; }
	public bool useGraphicAlpha { get; set; }

	// Methods

	// RVA: 0x15C71B8 Offset: 0x15C31B8 VA: 0x15C71B8
	protected void .ctor() { }

	// RVA: 0x15C777C Offset: 0x15C377C VA: 0x15C777C
	public Color get_effectColor() { }

	// RVA: 0x15C7788 Offset: 0x15C3788 VA: 0x15C7788
	public void set_effectColor(Color value) { }

	// RVA: 0x15C7854 Offset: 0x15C3854 VA: 0x15C7854
	public Vector2 get_effectDistance() { }

	// RVA: 0x15C785C Offset: 0x15C385C VA: 0x15C785C
	public void set_effectDistance(Vector2 value) { }

	// RVA: 0x15C7958 Offset: 0x15C3958 VA: 0x15C7958
	public bool get_useGraphicAlpha() { }

	// RVA: 0x15C7960 Offset: 0x15C3960 VA: 0x15C7960
	public void set_useGraphicAlpha(bool value) { }

	// RVA: 0x15C7410 Offset: 0x15C3410 VA: 0x15C7410
	protected void ApplyShadowZeroAlloc(List<UIVertex> verts, Color32 color, int start, int end, float x, float y) { }

	// RVA: 0x15C7A10 Offset: 0x15C3A10 VA: 0x15C7A10
	protected void ApplyShadow(List<UIVertex> verts, Color32 color, int start, int end, float x, float y) { }

	// RVA: 0x15C7A18 Offset: 0x15C3A18 VA: 0x15C7A18 Slot: 20
	public override void ModifyMesh(VertexHelper vh) { }
}


// Namespace: UnityEngine.UI.Collections
[DefaultMember("Item")]
internal class IndexedSet<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable // TypeDefIndex: 6483
{
	// Fields
	private readonly List<T> m_List; // 0x0
	private Dictionary<T, int> m_Dictionary; // 0x0
	private int m_EnabledObjectCount; // 0x0

	// Properties
	public int Count { get; }
	public int Capacity { get; }
	public bool IsReadOnly { get; }
	public T Item { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 11
	public void Add(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC23A78 Offset: 0xC1FA78 VA: 0xC23A78
	|-IndexedSet<__Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1
	public void Add(T item, bool isActive) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC23B58 Offset: 0xC1FB58 VA: 0xC23B58
	|-IndexedSet<__Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1
	public bool AddUnique(T item, bool isActive = True) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC23D1C Offset: 0xC1FD1C VA: 0xC23D1C
	|-IndexedSet<__Il2CppFullySharedGenericType>.AddUnique
	*/

	// RVA: -1 Offset: -1
	public bool EnableItem(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC23EF0 Offset: 0xC1FEF0 VA: 0xC23EF0
	|-IndexedSet<__Il2CppFullySharedGenericType>.EnableItem
	*/

	// RVA: -1 Offset: -1
	public bool DisableItem(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24004 Offset: 0xC20004 VA: 0xC24004
	|-IndexedSet<__Il2CppFullySharedGenericType>.DisableItem
	*/

	// RVA: -1 Offset: -1 Slot: 15
	public bool Remove(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24120 Offset: 0xC20120 VA: 0xC24120
	|-IndexedSet<__Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1 Slot: 16
	public IEnumerator<T> GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24218 Offset: 0xC20218 VA: 0xC24218
	|-IndexedSet<__Il2CppFullySharedGenericType>.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 17
	private IEnumerator System.Collections.IEnumerable.GetEnumerator() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2424C Offset: 0xC2024C VA: 0xC2424C
	|-IndexedSet<__Il2CppFullySharedGenericType>.System.Collections.IEnumerable.GetEnumerator
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24260 Offset: 0xC20260 VA: 0xC24260
	|-IndexedSet<__Il2CppFullySharedGenericType>.Clear
	*/

	// RVA: -1 Offset: -1 Slot: 13
	public bool Contains(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC242F8 Offset: 0xC202F8 VA: 0xC242F8
	|-IndexedSet<__Il2CppFullySharedGenericType>.Contains
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public void CopyTo(T[] array, int arrayIndex) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC243B4 Offset: 0xC203B4 VA: 0xC243B4
	|-IndexedSet<__Il2CppFullySharedGenericType>.CopyTo
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC243D8 Offset: 0xC203D8 VA: 0xC243D8
	|-IndexedSet<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1
	public int get_Capacity() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC243E0 Offset: 0xC203E0 VA: 0xC243E0
	|-IndexedSet<__Il2CppFullySharedGenericType>.get_Capacity
	*/

	// RVA: -1 Offset: -1 Slot: 10
	public bool get_IsReadOnly() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC243FC Offset: 0xC203FC VA: 0xC243FC
	|-IndexedSet<__Il2CppFullySharedGenericType>.get_IsReadOnly
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public int IndexOf(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24404 Offset: 0xC20404 VA: 0xC24404
	|-IndexedSet<__Il2CppFullySharedGenericType>.IndexOf
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public void Insert(int index, T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC244D4 Offset: 0xC204D4 VA: 0xC244D4
	|-IndexedSet<__Il2CppFullySharedGenericType>.Insert
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void RemoveAt(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2451C Offset: 0xC2051C VA: 0xC2451C
	|-IndexedSet<__Il2CppFullySharedGenericType>.RemoveAt
	*/

	// RVA: -1 Offset: -1
	private void Swap(int index1, int index2) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC246D0 Offset: 0xC206D0 VA: 0xC246D0
	|-IndexedSet<__Il2CppFullySharedGenericType>.Swap
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public T get_Item(int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC2499C Offset: 0xC2099C VA: 0xC2499C
	|-IndexedSet<__Il2CppFullySharedGenericType>.get_Item
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void set_Item(int index, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24A6C Offset: 0xC20A6C VA: 0xC24A6C
	|-IndexedSet<__Il2CppFullySharedGenericType>.set_Item
	*/

	// RVA: -1 Offset: -1
	public void Sort(Comparison<T> sortLayoutFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24C74 Offset: 0xC20C74 VA: 0xC24C74
	|-IndexedSet<__Il2CppFullySharedGenericType>.Sort
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC24DD8 Offset: 0xC20DD8 VA: 0xC24DD8
	|-IndexedSet<__Il2CppFullySharedGenericType>..ctor
	*/
}


// Namespace: UnityEngine.UI.CoroutineTween
internal interface ITweenValue // TypeDefIndex: 6484
{
	// Properties
	public abstract bool ignoreTimeScale { get; }
	public abstract float duration { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void TweenValue(float floatPercentage);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_ignoreTimeScale();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract float get_duration();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool ValidTarget();
}


// Namespace: 
public enum ColorTween.ColorTweenMode // TypeDefIndex: 6485
{
	// Fields
	public int value__; // 0x0
	public const ColorTween.ColorTweenMode All = 0;
	public const ColorTween.ColorTweenMode RGB = 1;
	public const ColorTween.ColorTweenMode Alpha = 2;
}


// Namespace: 
public class ColorTween.ColorTweenCallback : UnityEvent<Color> // TypeDefIndex: 6486
{
	// Methods

	// RVA: 0x15C7CDC Offset: 0x15C3CDC VA: 0x15C7CDC
	public void .ctor() { }
}


// Namespace: UnityEngine.UI.CoroutineTween
internal struct ColorTween : ITweenValue // TypeDefIndex: 6487
{
	// Fields
	private ColorTween.ColorTweenCallback m_Target; // 0x0
	private Color m_StartColor; // 0x8
	private Color m_TargetColor; // 0x18
	private ColorTween.ColorTweenMode m_TweenMode; // 0x28
	private float m_Duration; // 0x2C
	private bool m_IgnoreTimeScale; // 0x30

	// Properties
	public Color startColor { set; }
	public Color targetColor { set; }
	public ColorTween.ColorTweenMode tweenMode { set; }
	public float duration { get; set; }
	public bool ignoreTimeScale { get; set; }

	// Methods

	// RVA: 0x15C7B2C Offset: 0x15C3B2C VA: 0x15C7B2C
	public void set_startColor(Color value) { }

	// RVA: 0x15C7B38 Offset: 0x15C3B38 VA: 0x15C7B38
	public void set_targetColor(Color value) { }

	// RVA: 0x15C7B44 Offset: 0x15C3B44 VA: 0x15C7B44
	public void set_tweenMode(ColorTween.ColorTweenMode value) { }

	// RVA: 0x15C7B4C Offset: 0x15C3B4C VA: 0x15C7B4C Slot: 6
	public float get_duration() { }

	// RVA: 0x15C7B54 Offset: 0x15C3B54 VA: 0x15C7B54
	public void set_duration(float value) { }

	// RVA: 0x15C7B5C Offset: 0x15C3B5C VA: 0x15C7B5C Slot: 5
	public bool get_ignoreTimeScale() { }

	// RVA: 0x15C7B64 Offset: 0x15C3B64 VA: 0x15C7B64
	public void set_ignoreTimeScale(bool value) { }

	// RVA: 0x15C7B70 Offset: 0x15C3B70 VA: 0x15C7B70 Slot: 4
	public void TweenValue(float floatPercentage) { }

	// RVA: 0x15C7C54 Offset: 0x15C3C54 VA: 0x15C7C54
	public void AddOnChangedCallback(UnityAction<Color> callback) { }

	// RVA: 0x15C7C44 Offset: 0x15C3C44 VA: 0x15C7C44 Slot: 7
	public bool ValidTarget() { }
}


// Namespace: 
public class FloatTween.FloatTweenCallback : UnityEvent<float> // TypeDefIndex: 6488
{
	// Methods

	// RVA: 0x15C7E80 Offset: 0x15C3E80 VA: 0x15C7E80
	public void .ctor() { }
}


// Namespace: UnityEngine.UI.CoroutineTween
internal struct FloatTween : ITweenValue // TypeDefIndex: 6489
{
	// Fields
	private FloatTween.FloatTweenCallback m_Target; // 0x0
	private float m_StartValue; // 0x8
	private float m_TargetValue; // 0xC
	private float m_Duration; // 0x10
	private bool m_IgnoreTimeScale; // 0x14

	// Properties
	public float startValue { set; }
	public float targetValue { set; }
	public float duration { get; set; }
	public bool ignoreTimeScale { get; set; }

	// Methods

	// RVA: 0x15C7D24 Offset: 0x15C3D24 VA: 0x15C7D24
	public void set_startValue(float value) { }

	// RVA: 0x15C7D2C Offset: 0x15C3D2C VA: 0x15C7D2C
	public void set_targetValue(float value) { }

	// RVA: 0x15C7D34 Offset: 0x15C3D34 VA: 0x15C7D34 Slot: 6
	public float get_duration() { }

	// RVA: 0x15C7D3C Offset: 0x15C3D3C VA: 0x15C7D3C
	public void set_duration(float value) { }

	// RVA: 0x15C7D44 Offset: 0x15C3D44 VA: 0x15C7D44 Slot: 5
	public bool get_ignoreTimeScale() { }

	// RVA: 0x15C7D4C Offset: 0x15C3D4C VA: 0x15C7D4C
	public void set_ignoreTimeScale(bool value) { }

	// RVA: 0x15C7D58 Offset: 0x15C3D58 VA: 0x15C7D58 Slot: 4
	public void TweenValue(float floatPercentage) { }

	// RVA: 0x15C7DF8 Offset: 0x15C3DF8 VA: 0x15C7DF8
	public void AddOnChangedCallback(UnityAction<float> callback) { }

	// RVA: 0x15C7DE8 Offset: 0x15C3DE8 VA: 0x15C7DE8 Slot: 7
	public bool ValidTarget() { }
}


// Namespace: 
[CompilerGenerated]
private sealed class TweenRunner.<Start>d__2<T> : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 6490
{
	// Fields
	private int <>1__state; // 0x0
	private object <>2__current; // 0x0
	public T tweenInfo; // 0x0
	private float <elapsedTime>5__2; // 0x0

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: -1 Offset: -1
	public void .ctor(int <>1__state) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC3748 Offset: 0xBBF748 VA: 0xBC3748
	|-TweenRunner.<Start>d__2<__Il2CppFullySharedGenericStructType>..ctor
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 5
	private void System.IDisposable.Dispose() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC379C Offset: 0xBBF79C VA: 0xBC379C
	|-TweenRunner.<Start>d__2<__Il2CppFullySharedGenericStructType>.System.IDisposable.Dispose
	*/

	// RVA: -1 Offset: -1 Slot: 6
	private bool MoveNext() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC37A0 Offset: 0xBBF7A0 VA: 0xBC37A0
	|-TweenRunner.<Start>d__2<__Il2CppFullySharedGenericStructType>.MoveNext
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC3E1C Offset: 0xBBFE1C VA: 0xBC3E1C
	|-TweenRunner.<Start>d__2<__Il2CppFullySharedGenericStructType>.System.Collections.Generic.IEnumerator<System.Object>.get_Current
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 8
	private void System.Collections.IEnumerator.Reset() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC3E44 Offset: 0xBBFE44 VA: 0xBC3E44
	|-TweenRunner.<Start>d__2<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerator.Reset
	*/

	[DebuggerHidden]
	// RVA: -1 Offset: -1 Slot: 7
	private object System.Collections.IEnumerator.get_Current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBC3E78 Offset: 0xBBFE78 VA: 0xBC3E78
	|-TweenRunner.<Start>d__2<__Il2CppFullySharedGenericStructType>.System.Collections.IEnumerator.get_Current
	*/
}


// Namespace: UnityEngine.UI.CoroutineTween
internal class TweenRunner<T> // TypeDefIndex: 6491
{
	// Fields
	protected MonoBehaviour m_CoroutineContainer; // 0x0
	protected IEnumerator m_Tween; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	private static IEnumerator Start(T tweenInfo) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC76DD0 Offset: 0xC72DD0 VA: 0xC76DD0
	|-TweenRunner<__Il2CppFullySharedGenericStructType>.Start
	*/

	// RVA: -1 Offset: -1
	public void Init(MonoBehaviour coroutineContainer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC76F18 Offset: 0xC72F18 VA: 0xC76F18
	|-TweenRunner<__Il2CppFullySharedGenericStructType>.Init
	*/

	// RVA: -1 Offset: -1
	public void StartTween(T info) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC76F20 Offset: 0xC72F20 VA: 0xC76F20
	|-TweenRunner<__Il2CppFullySharedGenericStructType>.StartTween
	*/

	// RVA: -1 Offset: -1
	public void StopTween() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7715C Offset: 0xC7315C VA: 0xC7715C
	|-TweenRunner<__Il2CppFullySharedGenericStructType>.StopTween
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC7718C Offset: 0xC7318C VA: 0xC7718C
	|-TweenRunner<__Il2CppFullySharedGenericStructType>..ctor
	*/
}


// Namespace: 
private enum PanelEventHandler.PointerEventType // TypeDefIndex: 6492
{
	// Fields
	public int value__; // 0x0
	public const PanelEventHandler.PointerEventType Default = 0;
	public const PanelEventHandler.PointerEventType Down = 1;
	public const PanelEventHandler.PointerEventType Up = 2;
}


// Namespace: 
private class PanelEventHandler.PointerEvent : IPointerEvent // TypeDefIndex: 6493
{
	// Fields
	[CompilerGenerated]
	private int <pointerId>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <pointerType>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <isPrimary>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <button>k__BackingField; // 0x24
	[CompilerGenerated]
	private int <pressedButtons>k__BackingField; // 0x28
	[CompilerGenerated]
	private Vector3 <position>k__BackingField; // 0x2C
	[CompilerGenerated]
	private Vector3 <localPosition>k__BackingField; // 0x38
	[CompilerGenerated]
	private Vector3 <deltaPosition>k__BackingField; // 0x44
	[CompilerGenerated]
	private float <deltaTime>k__BackingField; // 0x50
	[CompilerGenerated]
	private int <clickCount>k__BackingField; // 0x54
	[CompilerGenerated]
	private float <pressure>k__BackingField; // 0x58
	[CompilerGenerated]
	private float <tangentialPressure>k__BackingField; // 0x5C
	[CompilerGenerated]
	private float <altitudeAngle>k__BackingField; // 0x60
	[CompilerGenerated]
	private float <azimuthAngle>k__BackingField; // 0x64
	[CompilerGenerated]
	private float <twist>k__BackingField; // 0x68
	[CompilerGenerated]
	private Vector2 <tilt>k__BackingField; // 0x6C
	[CompilerGenerated]
	private PenStatus <penStatus>k__BackingField; // 0x74
	[CompilerGenerated]
	private Vector2 <radius>k__BackingField; // 0x78
	[CompilerGenerated]
	private Vector2 <radiusVariance>k__BackingField; // 0x80
	[CompilerGenerated]
	private EventModifiers <modifiers>k__BackingField; // 0x88

	// Properties
	public int pointerId { get; set; }
	public string pointerType { get; set; }
	public bool isPrimary { get; set; }
	public int button { get; set; }
	public int pressedButtons { get; set; }
	public Vector3 position { get; set; }
	public Vector3 localPosition { get; set; }
	public Vector3 deltaPosition { get; set; }
	public float deltaTime { get; set; }
	public int clickCount { get; set; }
	public float pressure { get; set; }
	public float tangentialPressure { get; set; }
	public float altitudeAngle { get; set; }
	public float azimuthAngle { get; set; }
	public float twist { get; set; }
	public Vector2 tilt { get; set; }
	public PenStatus penStatus { get; set; }
	public Vector2 radius { get; set; }
	public Vector2 radiusVariance { get; set; }
	public EventModifiers modifiers { get; set; }
	public bool shiftKey { get; }
	public bool ctrlKey { get; }
	public bool commandKey { get; }
	public bool altKey { get; }
	public bool actionKey { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x15CA898 Offset: 0x15C6898 VA: 0x15CA898 Slot: 4
	public int get_pointerId() { }

	[CompilerGenerated]
	// RVA: 0x15CA8A0 Offset: 0x15C68A0 VA: 0x15CA8A0
	private void set_pointerId(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CA8A8 Offset: 0x15C68A8 VA: 0x15CA8A8 Slot: 5
	public string get_pointerType() { }

	[CompilerGenerated]
	// RVA: 0x15CA8B0 Offset: 0x15C68B0 VA: 0x15CA8B0
	private void set_pointerType(string value) { }

	[CompilerGenerated]
	// RVA: 0x15CA8B8 Offset: 0x15C68B8 VA: 0x15CA8B8 Slot: 6
	public bool get_isPrimary() { }

	[CompilerGenerated]
	// RVA: 0x15CA8C0 Offset: 0x15C68C0 VA: 0x15CA8C0
	private void set_isPrimary(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15CA8CC Offset: 0x15C68CC VA: 0x15CA8CC Slot: 7
	public int get_button() { }

	[CompilerGenerated]
	// RVA: 0x15CA8D4 Offset: 0x15C68D4 VA: 0x15CA8D4
	private void set_button(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CA8DC Offset: 0x15C68DC VA: 0x15CA8DC Slot: 8
	public int get_pressedButtons() { }

	[CompilerGenerated]
	// RVA: 0x15CA8E4 Offset: 0x15C68E4 VA: 0x15CA8E4
	private void set_pressedButtons(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CA8EC Offset: 0x15C68EC VA: 0x15CA8EC Slot: 9
	public Vector3 get_position() { }

	[CompilerGenerated]
	// RVA: 0x15CA8F8 Offset: 0x15C68F8 VA: 0x15CA8F8
	private void set_position(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x15CA904 Offset: 0x15C6904 VA: 0x15CA904 Slot: 10
	public Vector3 get_localPosition() { }

	[CompilerGenerated]
	// RVA: 0x15CA910 Offset: 0x15C6910 VA: 0x15CA910
	private void set_localPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x15CA91C Offset: 0x15C691C VA: 0x15CA91C Slot: 11
	public Vector3 get_deltaPosition() { }

	[CompilerGenerated]
	// RVA: 0x15CA928 Offset: 0x15C6928 VA: 0x15CA928
	private void set_deltaPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x15CA934 Offset: 0x15C6934 VA: 0x15CA934 Slot: 12
	public float get_deltaTime() { }

	[CompilerGenerated]
	// RVA: 0x15CA93C Offset: 0x15C693C VA: 0x15CA93C
	private void set_deltaTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CA944 Offset: 0x15C6944 VA: 0x15CA944 Slot: 13
	public int get_clickCount() { }

	[CompilerGenerated]
	// RVA: 0x15CA94C Offset: 0x15C694C VA: 0x15CA94C
	private void set_clickCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CA954 Offset: 0x15C6954 VA: 0x15CA954 Slot: 14
	public float get_pressure() { }

	[CompilerGenerated]
	// RVA: 0x15CA95C Offset: 0x15C695C VA: 0x15CA95C
	private void set_pressure(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CA964 Offset: 0x15C6964 VA: 0x15CA964 Slot: 15
	public float get_tangentialPressure() { }

	[CompilerGenerated]
	// RVA: 0x15CA96C Offset: 0x15C696C VA: 0x15CA96C
	private void set_tangentialPressure(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CA974 Offset: 0x15C6974 VA: 0x15CA974 Slot: 16
	public float get_altitudeAngle() { }

	[CompilerGenerated]
	// RVA: 0x15CA97C Offset: 0x15C697C VA: 0x15CA97C
	private void set_altitudeAngle(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CA984 Offset: 0x15C6984 VA: 0x15CA984 Slot: 17
	public float get_azimuthAngle() { }

	[CompilerGenerated]
	// RVA: 0x15CA98C Offset: 0x15C698C VA: 0x15CA98C
	private void set_azimuthAngle(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CA994 Offset: 0x15C6994 VA: 0x15CA994 Slot: 18
	public float get_twist() { }

	[CompilerGenerated]
	// RVA: 0x15CA99C Offset: 0x15C699C VA: 0x15CA99C
	private void set_twist(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CA9A4 Offset: 0x15C69A4 VA: 0x15CA9A4 Slot: 19
	public Vector2 get_tilt() { }

	[CompilerGenerated]
	// RVA: 0x15CA9AC Offset: 0x15C69AC VA: 0x15CA9AC
	private void set_tilt(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CA9B4 Offset: 0x15C69B4 VA: 0x15CA9B4 Slot: 20
	public PenStatus get_penStatus() { }

	[CompilerGenerated]
	// RVA: 0x15CA9BC Offset: 0x15C69BC VA: 0x15CA9BC
	private void set_penStatus(PenStatus value) { }

	[CompilerGenerated]
	// RVA: 0x15CA9C4 Offset: 0x15C69C4 VA: 0x15CA9C4 Slot: 21
	public Vector2 get_radius() { }

	[CompilerGenerated]
	// RVA: 0x15CA9CC Offset: 0x15C69CC VA: 0x15CA9CC
	private void set_radius(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CA9D4 Offset: 0x15C69D4 VA: 0x15CA9D4 Slot: 22
	public Vector2 get_radiusVariance() { }

	[CompilerGenerated]
	// RVA: 0x15CA9DC Offset: 0x15C69DC VA: 0x15CA9DC
	private void set_radiusVariance(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CA9E4 Offset: 0x15C69E4 VA: 0x15CA9E4 Slot: 23
	public EventModifiers get_modifiers() { }

	[CompilerGenerated]
	// RVA: 0x15CA9EC Offset: 0x15C69EC VA: 0x15CA9EC
	private void set_modifiers(EventModifiers value) { }

	// RVA: 0x15CA9F4 Offset: 0x15C69F4 VA: 0x15CA9F4 Slot: 24
	public bool get_shiftKey() { }

	// RVA: 0x15CAA00 Offset: 0x15C6A00 VA: 0x15CAA00 Slot: 25
	public bool get_ctrlKey() { }

	// RVA: 0x15CAA0C Offset: 0x15C6A0C VA: 0x15CAA0C Slot: 26
	public bool get_commandKey() { }

	// RVA: 0x15CAA18 Offset: 0x15C6A18 VA: 0x15CAA18 Slot: 27
	public bool get_altKey() { }

	// RVA: 0x15CAA24 Offset: 0x15C6A24 VA: 0x15CAA24 Slot: 28
	public bool get_actionKey() { }

	// RVA: 0x15CA320 Offset: 0x15C6320 VA: 0x15CA320
	public void Read(PanelEventHandler self, PointerEventData eventData, PanelEventHandler.PointerEventType eventType) { }

	// RVA: 0x15CA7E4 Offset: 0x15C67E4 VA: 0x15CA7E4
	public void SetPosition(Vector3 positionOverride, Vector3 deltaOverride) { }

	// RVA: 0x15CA890 Offset: 0x15C6890 VA: 0x15CA890
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x15CAAB8 Offset: 0x15C6AB8 VA: 0x15CAAB8
	internal static bool <Read>g__InRange|90_0(int i, int start, int count) { }
}


// Namespace: UnityEngine.UIElements
public class PanelEventHandler : UIBehaviour, IPointerMoveHandler, IEventSystemHandler, IPointerUpHandler, IPointerDownHandler, ISubmitHandler, ICancelHandler, IMoveHandler, IScrollHandler, ISelectHandler, IDeselectHandler, IPointerExitHandler, IPointerEnterHandler, IRuntimePanelComponent, IPointerClickHandler // TypeDefIndex: 6494
{
	// Fields
	private BaseRuntimePanel m_Panel; // 0x20
	private readonly PanelEventHandler.PointerEvent m_PointerEvent; // 0x28
	private float m_LastClickTime; // 0x30
	private bool m_Selecting; // 0x34
	private Event m_Event; // 0x38
	private static EventModifiers s_Modifiers; // 0x0

	// Properties
	public IPanel panel { get; set; }
	private GameObject selectableGameObject { get; }
	private EventSystem eventSystem { get; }
	private bool isCurrentFocusedPanel { get; }
	private Focusable currentFocusedElement { get; }

	// Methods

	// RVA: 0x15C7EC8 Offset: 0x15C3EC8 VA: 0x15C7EC8 Slot: 30
	public IPanel get_panel() { }

	// RVA: 0x15C7ED0 Offset: 0x15C3ED0 VA: 0x15C7ED0 Slot: 28
	public void set_panel(IPanel value) { }

	// RVA: 0x15C82DC Offset: 0x15C42DC VA: 0x15C82DC
	private GameObject get_selectableGameObject() { }

	// RVA: 0x15C82F4 Offset: 0x15C42F4 VA: 0x15C82F4
	private EventSystem get_eventSystem() { }

	// RVA: 0x15C83C8 Offset: 0x15C43C8 VA: 0x15C83C8
	private bool get_isCurrentFocusedPanel() { }

	// RVA: 0x15C8490 Offset: 0x15C4490 VA: 0x15C8490
	private Focusable get_currentFocusedElement() { }

	// RVA: 0x15C84C8 Offset: 0x15C44C8 VA: 0x15C84C8 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15C84E4 Offset: 0x15C44E4 VA: 0x15C84E4 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15C8128 Offset: 0x15C4128 VA: 0x15C8128
	private void RegisterCallbacks() { }

	// RVA: 0x15C7F74 Offset: 0x15C3F74 VA: 0x15C7F74
	private void UnregisterCallbacks() { }

	// RVA: 0x15C8500 Offset: 0x15C4500 VA: 0x15C8500
	private void OnPanelDestroyed() { }

	// RVA: 0x15C8508 Offset: 0x15C4508 VA: 0x15C8508
	private void OnElementFocus(FocusEvent e) { }

	// RVA: 0x15C85F0 Offset: 0x15C45F0 VA: 0x15C85F0
	private void OnElementBlur(BlurEvent e) { }

	// RVA: 0x15C85F4 Offset: 0x15C45F4 VA: 0x15C85F4 Slot: 24
	public void OnSelect(BaseEventData eventData) { }

	// RVA: 0x15C866C Offset: 0x15C466C VA: 0x15C866C Slot: 25
	public void OnDeselect(BaseEventData eventData) { }

	// RVA: 0x15C8680 Offset: 0x15C4680 VA: 0x15C8680 Slot: 17
	public void OnPointerMove(PointerEventData eventData) { }

	// RVA: 0x15C89D0 Offset: 0x15C49D0 VA: 0x15C89D0 Slot: 18
	public void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x15C8BEC Offset: 0x15C4BEC VA: 0x15C8BEC Slot: 19
	public void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x15C8E78 Offset: 0x15C4E78 VA: 0x15C8E78 Slot: 26
	public void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x15C91A0 Offset: 0x15C51A0 VA: 0x15C91A0 Slot: 27
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x15C91F4 Offset: 0x15C51F4 VA: 0x15C91F4 Slot: 29
	public void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x15C9210 Offset: 0x15C5210 VA: 0x15C9210 Slot: 20
	public void OnSubmit(BaseEventData eventData) { }

	// RVA: 0x15C9568 Offset: 0x15C5568 VA: 0x15C9568 Slot: 21
	public void OnCancel(BaseEventData eventData) { }

	// RVA: 0x15C9778 Offset: 0x15C5778 VA: 0x15C9778 Slot: 22
	public void OnMove(AxisEventData eventData) { }

	// RVA: 0x15C99AC Offset: 0x15C59AC VA: 0x15C99AC Slot: 23
	public void OnScroll(PointerEventData eventData) { }

	// RVA: 0x15C896C Offset: 0x15C496C VA: 0x15C896C
	private void SendEvent(EventBase e, BaseEventData sourceEventData) { }

	// RVA: 0x15C9BA0 Offset: 0x15C5BA0 VA: 0x15C9BA0
	private void SendEvent(EventBase e, Event sourceEvent) { }

	// RVA: 0x15C9BC0 Offset: 0x15C5BC0 VA: 0x15C9BC0
	internal void Update() { }

	// RVA: 0x15C9C1C Offset: 0x15C5C1C VA: 0x15C9C1C
	private void LateUpdate() { }

	// RVA: 0x15C9420 Offset: 0x15C5420 VA: 0x15C9420
	private void ProcessImguiEvents(Focusable target) { }

	// RVA: 0x15C9C24 Offset: 0x15C5C24 VA: 0x15C9C24
	private void ProcessKeyboardEvent(Event e, Focusable target) { }

	// RVA: 0x15C9CA4 Offset: 0x15C5CA4 VA: 0x15C9CA4
	private void ProcessTabEvent(Event e, Focusable target) { }

	// RVA: 0x15CA12C Offset: 0x15C612C VA: 0x15CA12C
	private void SendTabEvent(Event e, NavigationMoveEvent.Direction direction, Focusable target) { }

	// RVA: 0x15C9D0C Offset: 0x15C5D0C VA: 0x15C9D0C
	private void SendKeyUpEvent(Event e, Focusable target) { }

	// RVA: 0x15C9F1C Offset: 0x15C5F1C VA: 0x15C9F1C
	private void SendKeyDownEvent(Event e, Focusable target) { }

	// RVA: 0x15C882C Offset: 0x15C482C VA: 0x15C882C
	private bool ReadPointerData(PanelEventHandler.PointerEvent pe, PointerEventData eventData, PanelEventHandler.PointerEventType eventType = 0) { }

	// RVA: 0x15CA7FC Offset: 0x15C67FC VA: 0x15CA7FC
	public void .ctor() { }
}


// Namespace: UnityEngine.UIElements
public class PanelRaycaster : BaseRaycaster, IRuntimePanelComponent // TypeDefIndex: 6495
{
	// Fields
	private BaseRuntimePanel m_Panel; // 0x28

	// Properties
	public IPanel panel { get; set; }
	private GameObject selectableGameObject { get; }
	public override int sortOrderPriority { get; }
	public override int renderOrderPriority { get; }
	public override Camera eventCamera { get; }

	// Methods

	// RVA: 0x15CAAD4 Offset: 0x15C6AD4 VA: 0x15CAAD4 Slot: 23
	public IPanel get_panel() { }

	// RVA: 0x15CAADC Offset: 0x15C6ADC VA: 0x15CAADC Slot: 22
	public void set_panel(IPanel value) { }

	// RVA: 0x15CAC10 Offset: 0x15C6C10 VA: 0x15CAC10
	private void RegisterCallbacks() { }

	// RVA: 0x15CAB80 Offset: 0x15C6B80 VA: 0x15CAB80
	private void UnregisterCallbacks() { }

	// RVA: 0x15CACA0 Offset: 0x15C6CA0 VA: 0x15CACA0
	private void OnPanelDestroyed() { }

	// RVA: 0x15CACA8 Offset: 0x15C6CA8 VA: 0x15CACA8
	private GameObject get_selectableGameObject() { }

	// RVA: 0x15CACC0 Offset: 0x15C6CC0 VA: 0x15CACC0 Slot: 20
	public override int get_sortOrderPriority() { }

	// RVA: 0x15CAD3C Offset: 0x15C6D3C VA: 0x15CAD3C Slot: 21
	public override int get_renderOrderPriority() { }

	// RVA: 0x15CADB0 Offset: 0x15C6DB0 VA: 0x15CADB0 Slot: 17
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList) { }

	// RVA: 0x15CB1C4 Offset: 0x15C71C4 VA: 0x15CB1C4 Slot: 18
	public override Camera get_eventCamera() { }

	// RVA: 0x15CB1CC Offset: 0x15C71CC VA: 0x15CB1CC
	public void .ctor() { }
}


// Namespace: UnityEngine.EventSystems
public class AxisEventData : BaseEventData // TypeDefIndex: 6496
{
	// Fields
	[CompilerGenerated]
	private Vector2 <moveVector>k__BackingField; // 0x20
	[CompilerGenerated]
	private MoveDirection <moveDir>k__BackingField; // 0x28

	// Properties
	public Vector2 moveVector { get; set; }
	public MoveDirection moveDir { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x15CB1D4 Offset: 0x15C71D4 VA: 0x15CB1D4
	public Vector2 get_moveVector() { }

	[CompilerGenerated]
	// RVA: 0x15CB1DC Offset: 0x15C71DC VA: 0x15CB1DC
	public void set_moveVector(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB1E4 Offset: 0x15C71E4 VA: 0x15CB1E4
	public MoveDirection get_moveDir() { }

	[CompilerGenerated]
	// RVA: 0x15CB1EC Offset: 0x15C71EC VA: 0x15CB1EC
	public void set_moveDir(MoveDirection value) { }

	// RVA: 0x15CB1F4 Offset: 0x15C71F4 VA: 0x15CB1F4
	public void .ctor(EventSystem eventSystem) { }
}


// Namespace: UnityEngine.EventSystems
public abstract class AbstractEventData // TypeDefIndex: 6497
{
	// Fields
	protected bool m_Used; // 0x10

	// Properties
	public virtual bool used { get; }

	// Methods

	// RVA: 0x15CB284 Offset: 0x15C7284 VA: 0x15CB284 Slot: 4
	public virtual void Reset() { }

	// RVA: 0x15CB28C Offset: 0x15C728C VA: 0x15CB28C Slot: 5
	public virtual void Use() { }

	// RVA: 0x15CB298 Offset: 0x15C7298 VA: 0x15CB298 Slot: 6
	public virtual bool get_used() { }

	// RVA: 0x15CB2A0 Offset: 0x15C72A0 VA: 0x15CB2A0
	protected void .ctor() { }
}


// Namespace: UnityEngine.EventSystems
public class BaseEventData : AbstractEventData // TypeDefIndex: 6498
{
	// Fields
	private readonly EventSystem m_EventSystem; // 0x18

	// Properties
	public GameObject selectedObject { set; }

	// Methods

	// RVA: 0x15CB25C Offset: 0x15C725C VA: 0x15CB25C
	public void .ctor(EventSystem eventSystem) { }

	// RVA: 0x15CB2A8 Offset: 0x15C72A8 VA: 0x15CB2A8
	public void set_selectedObject(GameObject value) { }
}


// Namespace: 
public enum PointerEventData.InputButton // TypeDefIndex: 6499
{
	// Fields
	public int value__; // 0x0
	public const PointerEventData.InputButton Left = 0;
	public const PointerEventData.InputButton Right = 1;
	public const PointerEventData.InputButton Middle = 2;
}


// Namespace: 
public enum PointerEventData.FramePressState // TypeDefIndex: 6500
{
	// Fields
	public int value__; // 0x0
	public const PointerEventData.FramePressState Pressed = 0;
	public const PointerEventData.FramePressState Released = 1;
	public const PointerEventData.FramePressState PressedAndReleased = 2;
	public const PointerEventData.FramePressState NotChanged = 3;
}


// Namespace: UnityEngine.EventSystems
public class PointerEventData : BaseEventData // TypeDefIndex: 6501
{
	// Fields
	[CompilerGenerated]
	private GameObject <pointerEnter>k__BackingField; // 0x20
	private GameObject m_PointerPress; // 0x28
	[CompilerGenerated]
	private GameObject <lastPress>k__BackingField; // 0x30
	[CompilerGenerated]
	private GameObject <rawPointerPress>k__BackingField; // 0x38
	[CompilerGenerated]
	private GameObject <pointerDrag>k__BackingField; // 0x40
	[CompilerGenerated]
	private GameObject <pointerClick>k__BackingField; // 0x48
	[CompilerGenerated]
	private RaycastResult <pointerCurrentRaycast>k__BackingField; // 0x50
	[CompilerGenerated]
	private RaycastResult <pointerPressRaycast>k__BackingField; // 0xA0
	public List<GameObject> hovered; // 0xF0
	[CompilerGenerated]
	private bool <eligibleForClick>k__BackingField; // 0xF8
	[CompilerGenerated]
	private int <displayIndex>k__BackingField; // 0xFC
	[CompilerGenerated]
	private int <pointerId>k__BackingField; // 0x100
	[CompilerGenerated]
	private Vector2 <position>k__BackingField; // 0x104
	[CompilerGenerated]
	private Vector2 <delta>k__BackingField; // 0x10C
	[CompilerGenerated]
	private Vector2 <pressPosition>k__BackingField; // 0x114
	[CompilerGenerated]
	private Vector3 <worldPosition>k__BackingField; // 0x11C
	[CompilerGenerated]
	private Vector3 <worldNormal>k__BackingField; // 0x128
	[CompilerGenerated]
	private float <clickTime>k__BackingField; // 0x134
	[CompilerGenerated]
	private int <clickCount>k__BackingField; // 0x138
	[CompilerGenerated]
	private Vector2 <scrollDelta>k__BackingField; // 0x13C
	[CompilerGenerated]
	private bool <useDragThreshold>k__BackingField; // 0x144
	[CompilerGenerated]
	private bool <dragging>k__BackingField; // 0x145
	[CompilerGenerated]
	private PointerEventData.InputButton <button>k__BackingField; // 0x148
	[CompilerGenerated]
	private float <pressure>k__BackingField; // 0x14C
	[CompilerGenerated]
	private float <tangentialPressure>k__BackingField; // 0x150
	[CompilerGenerated]
	private float <altitudeAngle>k__BackingField; // 0x154
	[CompilerGenerated]
	private float <azimuthAngle>k__BackingField; // 0x158
	[CompilerGenerated]
	private float <twist>k__BackingField; // 0x15C
	[CompilerGenerated]
	private Vector2 <tilt>k__BackingField; // 0x160
	[CompilerGenerated]
	private PenStatus <penStatus>k__BackingField; // 0x168
	[CompilerGenerated]
	private Vector2 <radius>k__BackingField; // 0x16C
	[CompilerGenerated]
	private Vector2 <radiusVariance>k__BackingField; // 0x174
	[CompilerGenerated]
	private bool <fullyExited>k__BackingField; // 0x17C
	[CompilerGenerated]
	private bool <reentered>k__BackingField; // 0x17D

	// Properties
	public GameObject pointerEnter { get; set; }
	public GameObject lastPress { get; set; }
	public GameObject rawPointerPress { set; }
	public GameObject pointerDrag { get; set; }
	public GameObject pointerClick { get; set; }
	public RaycastResult pointerCurrentRaycast { get; set; }
	public RaycastResult pointerPressRaycast { get; set; }
	public bool eligibleForClick { get; set; }
	public int displayIndex { get; set; }
	public int pointerId { get; set; }
	public Vector2 position { get; set; }
	public Vector2 delta { get; set; }
	public Vector2 pressPosition { get; set; }
	public float clickTime { get; set; }
	public int clickCount { get; set; }
	public Vector2 scrollDelta { get; set; }
	public bool useDragThreshold { get; set; }
	public bool dragging { get; set; }
	public PointerEventData.InputButton button { get; set; }
	public float pressure { get; set; }
	public float tangentialPressure { get; set; }
	public float altitudeAngle { get; set; }
	public float azimuthAngle { get; set; }
	public float twist { get; set; }
	public Vector2 tilt { get; set; }
	public PenStatus penStatus { get; set; }
	public Vector2 radius { get; set; }
	public Vector2 radiusVariance { get; set; }
	public bool fullyExited { set; }
	public bool reentered { get; set; }
	public Camera enterEventCamera { get; }
	public Camera pressEventCamera { get; }
	public GameObject pointerPress { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x15CB4E8 Offset: 0x15C74E8 VA: 0x15CB4E8
	public GameObject get_pointerEnter() { }

	[CompilerGenerated]
	// RVA: 0x15CB4F0 Offset: 0x15C74F0 VA: 0x15CB4F0
	public void set_pointerEnter(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x15CB4F8 Offset: 0x15C74F8 VA: 0x15CB4F8
	public GameObject get_lastPress() { }

	[CompilerGenerated]
	// RVA: 0x15CB500 Offset: 0x15C7500 VA: 0x15CB500
	private void set_lastPress(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x15CB508 Offset: 0x15C7508 VA: 0x15CB508
	public void set_rawPointerPress(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x15CB510 Offset: 0x15C7510 VA: 0x15CB510
	public GameObject get_pointerDrag() { }

	[CompilerGenerated]
	// RVA: 0x15CB518 Offset: 0x15C7518 VA: 0x15CB518
	public void set_pointerDrag(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x15CB520 Offset: 0x15C7520 VA: 0x15CB520
	public GameObject get_pointerClick() { }

	[CompilerGenerated]
	// RVA: 0x15CB528 Offset: 0x15C7528 VA: 0x15CB528
	public void set_pointerClick(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x15CB530 Offset: 0x15C7530 VA: 0x15CB530
	public RaycastResult get_pointerCurrentRaycast() { }

	[CompilerGenerated]
	// RVA: 0x15CB540 Offset: 0x15C7540 VA: 0x15CB540
	public void set_pointerCurrentRaycast(RaycastResult value) { }

	[CompilerGenerated]
	// RVA: 0x15CB558 Offset: 0x15C7558 VA: 0x15CB558
	public RaycastResult get_pointerPressRaycast() { }

	[CompilerGenerated]
	// RVA: 0x15CB568 Offset: 0x15C7568 VA: 0x15CB568
	public void set_pointerPressRaycast(RaycastResult value) { }

	[CompilerGenerated]
	// RVA: 0x15CB580 Offset: 0x15C7580 VA: 0x15CB580
	public bool get_eligibleForClick() { }

	[CompilerGenerated]
	// RVA: 0x15CB588 Offset: 0x15C7588 VA: 0x15CB588
	public void set_eligibleForClick(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15CB594 Offset: 0x15C7594 VA: 0x15CB594
	public int get_displayIndex() { }

	[CompilerGenerated]
	// RVA: 0x15CB59C Offset: 0x15C759C VA: 0x15CB59C
	public void set_displayIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CB5A4 Offset: 0x15C75A4 VA: 0x15CB5A4
	public int get_pointerId() { }

	[CompilerGenerated]
	// RVA: 0x15CB5AC Offset: 0x15C75AC VA: 0x15CB5AC
	public void set_pointerId(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CB5B4 Offset: 0x15C75B4 VA: 0x15CB5B4
	public Vector2 get_position() { }

	[CompilerGenerated]
	// RVA: 0x15CB5C0 Offset: 0x15C75C0 VA: 0x15CB5C0
	public void set_position(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB5CC Offset: 0x15C75CC VA: 0x15CB5CC
	public Vector2 get_delta() { }

	[CompilerGenerated]
	// RVA: 0x15CB5D8 Offset: 0x15C75D8 VA: 0x15CB5D8
	public void set_delta(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB5E4 Offset: 0x15C75E4 VA: 0x15CB5E4
	public Vector2 get_pressPosition() { }

	[CompilerGenerated]
	// RVA: 0x15CB5F0 Offset: 0x15C75F0 VA: 0x15CB5F0
	public void set_pressPosition(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB5FC Offset: 0x15C75FC VA: 0x15CB5FC
	public float get_clickTime() { }

	[CompilerGenerated]
	// RVA: 0x15CB604 Offset: 0x15C7604 VA: 0x15CB604
	public void set_clickTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CB60C Offset: 0x15C760C VA: 0x15CB60C
	public int get_clickCount() { }

	[CompilerGenerated]
	// RVA: 0x15CB614 Offset: 0x15C7614 VA: 0x15CB614
	public void set_clickCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x15CB61C Offset: 0x15C761C VA: 0x15CB61C
	public Vector2 get_scrollDelta() { }

	[CompilerGenerated]
	// RVA: 0x15CB628 Offset: 0x15C7628 VA: 0x15CB628
	public void set_scrollDelta(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB634 Offset: 0x15C7634 VA: 0x15CB634
	public bool get_useDragThreshold() { }

	[CompilerGenerated]
	// RVA: 0x15CB63C Offset: 0x15C763C VA: 0x15CB63C
	public void set_useDragThreshold(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15CB648 Offset: 0x15C7648 VA: 0x15CB648
	public bool get_dragging() { }

	[CompilerGenerated]
	// RVA: 0x15CB650 Offset: 0x15C7650 VA: 0x15CB650
	public void set_dragging(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15CB65C Offset: 0x15C765C VA: 0x15CB65C
	public PointerEventData.InputButton get_button() { }

	[CompilerGenerated]
	// RVA: 0x15CB664 Offset: 0x15C7664 VA: 0x15CB664
	public void set_button(PointerEventData.InputButton value) { }

	[CompilerGenerated]
	// RVA: 0x15CB66C Offset: 0x15C766C VA: 0x15CB66C
	public float get_pressure() { }

	[CompilerGenerated]
	// RVA: 0x15CB674 Offset: 0x15C7674 VA: 0x15CB674
	public void set_pressure(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CB67C Offset: 0x15C767C VA: 0x15CB67C
	public float get_tangentialPressure() { }

	[CompilerGenerated]
	// RVA: 0x15CB684 Offset: 0x15C7684 VA: 0x15CB684
	public void set_tangentialPressure(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CB68C Offset: 0x15C768C VA: 0x15CB68C
	public float get_altitudeAngle() { }

	[CompilerGenerated]
	// RVA: 0x15CB694 Offset: 0x15C7694 VA: 0x15CB694
	public void set_altitudeAngle(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CB69C Offset: 0x15C769C VA: 0x15CB69C
	public float get_azimuthAngle() { }

	[CompilerGenerated]
	// RVA: 0x15CB6A4 Offset: 0x15C76A4 VA: 0x15CB6A4
	public void set_azimuthAngle(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CB6AC Offset: 0x15C76AC VA: 0x15CB6AC
	public float get_twist() { }

	[CompilerGenerated]
	// RVA: 0x15CB6B4 Offset: 0x15C76B4 VA: 0x15CB6B4
	public void set_twist(float value) { }

	[CompilerGenerated]
	// RVA: 0x15CB6BC Offset: 0x15C76BC VA: 0x15CB6BC
	public Vector2 get_tilt() { }

	[CompilerGenerated]
	// RVA: 0x15CB6C8 Offset: 0x15C76C8 VA: 0x15CB6C8
	public void set_tilt(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB6D4 Offset: 0x15C76D4 VA: 0x15CB6D4
	public PenStatus get_penStatus() { }

	[CompilerGenerated]
	// RVA: 0x15CB6DC Offset: 0x15C76DC VA: 0x15CB6DC
	public void set_penStatus(PenStatus value) { }

	[CompilerGenerated]
	// RVA: 0x15CB6E4 Offset: 0x15C76E4 VA: 0x15CB6E4
	public Vector2 get_radius() { }

	[CompilerGenerated]
	// RVA: 0x15CB6F0 Offset: 0x15C76F0 VA: 0x15CB6F0
	public void set_radius(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB6FC Offset: 0x15C76FC VA: 0x15CB6FC
	public Vector2 get_radiusVariance() { }

	[CompilerGenerated]
	// RVA: 0x15CB708 Offset: 0x15C7708 VA: 0x15CB708
	public void set_radiusVariance(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x15CB714 Offset: 0x15C7714 VA: 0x15CB714
	public void set_fullyExited(bool value) { }

	[CompilerGenerated]
	// RVA: 0x15CB720 Offset: 0x15C7720 VA: 0x15CB720
	public bool get_reentered() { }

	[CompilerGenerated]
	// RVA: 0x15CB728 Offset: 0x15C7728 VA: 0x15CB728
	public void set_reentered(bool value) { }

	// RVA: 0x15CB734 Offset: 0x15C7734 VA: 0x15CB734
	public void .ctor(EventSystem eventSystem) { }

	// RVA: 0x15CB860 Offset: 0x15C7860 VA: 0x15CB860
	public bool IsPointerMoving() { }

	// RVA: 0x15CB880 Offset: 0x15C7880 VA: 0x15CB880
	public bool IsScrolling() { }

	// RVA: 0x15C0628 Offset: 0x15BC628 VA: 0x15C0628
	public Camera get_enterEventCamera() { }

	// RVA: 0x15C06B8 Offset: 0x15BC6B8 VA: 0x15C06B8
	public Camera get_pressEventCamera() { }

	// RVA: 0x15CB8A0 Offset: 0x15C78A0 VA: 0x15CB8A0
	public GameObject get_pointerPress() { }

	// RVA: 0x15CB8A8 Offset: 0x15C78A8 VA: 0x15CB8A8
	public void set_pointerPress(GameObject value) { }

	// RVA: 0x15CB924 Offset: 0x15C7924 VA: 0x15CB924 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.EventSystems
public interface IEventSystemHandler // TypeDefIndex: 6502
{}


// Namespace: UnityEngine.EventSystems
public interface IPointerMoveHandler : IEventSystemHandler // TypeDefIndex: 6503
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPointerMove(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IPointerEnterHandler : IEventSystemHandler // TypeDefIndex: 6504
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPointerEnter(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IPointerExitHandler : IEventSystemHandler // TypeDefIndex: 6505
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPointerExit(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IPointerDownHandler : IEventSystemHandler // TypeDefIndex: 6506
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPointerDown(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IPointerUpHandler : IEventSystemHandler // TypeDefIndex: 6507
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPointerUp(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IPointerClickHandler : IEventSystemHandler // TypeDefIndex: 6508
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnPointerClick(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IBeginDragHandler : IEventSystemHandler // TypeDefIndex: 6509
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnBeginDrag(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IInitializePotentialDragHandler : IEventSystemHandler // TypeDefIndex: 6510
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnInitializePotentialDrag(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IDragHandler : IEventSystemHandler // TypeDefIndex: 6511
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnDrag(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IEndDragHandler : IEventSystemHandler // TypeDefIndex: 6512
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnEndDrag(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IDropHandler : IEventSystemHandler // TypeDefIndex: 6513
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnDrop(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IScrollHandler : IEventSystemHandler // TypeDefIndex: 6514
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnScroll(PointerEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IUpdateSelectedHandler : IEventSystemHandler // TypeDefIndex: 6515
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnUpdateSelected(BaseEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface ISelectHandler : IEventSystemHandler // TypeDefIndex: 6516
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnSelect(BaseEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IDeselectHandler : IEventSystemHandler // TypeDefIndex: 6517
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnDeselect(BaseEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface IMoveHandler : IEventSystemHandler // TypeDefIndex: 6518
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnMove(AxisEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface ISubmitHandler : IEventSystemHandler // TypeDefIndex: 6519
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnSubmit(BaseEventData eventData);
}


// Namespace: UnityEngine.EventSystems
public interface ICancelHandler : IEventSystemHandler // TypeDefIndex: 6520
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnCancel(BaseEventData eventData);
}


// Namespace: 
private struct EventSystem.UIToolkitOverrideConfig // TypeDefIndex: 6521
{
	// Fields
	public EventSystem activeEventSystem; // 0x0
	public bool sendEvents; // 0x8
	public bool createPanelGameObjectsOnStart; // 0x9
}


// Namespace: 
[CompilerGenerated]
private sealed class EventSystem.<>c__DisplayClass56_0 // TypeDefIndex: 6522
{
	// Fields
	public GameObject go; // 0x10

	// Methods

	// RVA: 0x15CD4F8 Offset: 0x15C94F8 VA: 0x15CD4F8
	public void .ctor() { }

	// RVA: 0x15CDDF0 Offset: 0x15C9DF0 VA: 0x15CDDF0
	internal void <CreateUIToolkitPanelGameObject>b__0() { }
}


// Namespace: UnityEngine.EventSystems
[DisallowMultipleComponent]
public class EventSystem : UIBehaviour // TypeDefIndex: 6523
{
	// Fields
	private List<BaseInputModule> m_SystemInputModules; // 0x20
	private BaseInputModule m_CurrentInputModule; // 0x28
	private static List<EventSystem> m_EventSystems; // 0x0
	[SerializeField]
	[FormerlySerializedAs("m_Selected")]
	private GameObject m_FirstSelected; // 0x30
	[SerializeField]
	private bool m_sendNavigationEvents; // 0x38
	[SerializeField]
	private int m_DragThreshold; // 0x3C
	private GameObject m_CurrentSelected; // 0x40
	private bool m_HasFocus; // 0x48
	private bool m_SelectionGuard; // 0x49
	private BaseEventData m_DummyData; // 0x50
	private static readonly Comparison<RaycastResult> s_RaycastComparer; // 0x8
	private static EventSystem.UIToolkitOverrideConfig s_UIToolkitOverride; // 0x10
	private bool m_Started; // 0x58
	private bool m_IsTrackingUIToolkitPanels; // 0x59

	// Properties
	public static EventSystem current { get; set; }
	public bool sendNavigationEvents { get; set; }
	public int pixelDragThreshold { get; set; }
	public BaseInputModule currentInputModule { get; }
	public GameObject firstSelectedGameObject { get; set; }
	public GameObject currentSelectedGameObject { get; }
	[Obsolete("lastSelectedGameObject is no longer supported")]
	public GameObject lastSelectedGameObject { get; }
	public bool isFocused { get; }
	public bool alreadySelecting { get; }
	private BaseEventData baseEventDataCache { get; }
	private bool isUIToolkitActiveEventSystem { get; }
	private bool sendUIToolkitEvents { get; }
	private bool createUIToolkitPanelGameObjectsOnStart { get; }

	// Methods

	// RVA: 0x15CC064 Offset: 0x15C8064 VA: 0x15CC064
	public static EventSystem get_current() { }

	// RVA: 0x15CC12C Offset: 0x15C812C VA: 0x15CC12C
	public static void set_current(EventSystem value) { }

	// RVA: 0x15CC2C0 Offset: 0x15C82C0 VA: 0x15CC2C0
	public bool get_sendNavigationEvents() { }

	// RVA: 0x15CC2C8 Offset: 0x15C82C8 VA: 0x15CC2C8
	public void set_sendNavigationEvents(bool value) { }

	// RVA: 0x15CC2D4 Offset: 0x15C82D4 VA: 0x15CC2D4
	public int get_pixelDragThreshold() { }

	// RVA: 0x15CC2DC Offset: 0x15C82DC VA: 0x15CC2DC
	public void set_pixelDragThreshold(int value) { }

	// RVA: 0x15CC2E4 Offset: 0x15C82E4 VA: 0x15CC2E4
	public BaseInputModule get_currentInputModule() { }

	// RVA: 0x15CC2EC Offset: 0x15C82EC VA: 0x15CC2EC
	public GameObject get_firstSelectedGameObject() { }

	// RVA: 0x15CC2F4 Offset: 0x15C82F4 VA: 0x15CC2F4
	public void set_firstSelectedGameObject(GameObject value) { }

	// RVA: 0x15CC2FC Offset: 0x15C82FC VA: 0x15CC2FC
	public GameObject get_currentSelectedGameObject() { }

	// RVA: 0x15CC304 Offset: 0x15C8304 VA: 0x15CC304
	public GameObject get_lastSelectedGameObject() { }

	// RVA: 0x15CC30C Offset: 0x15C830C VA: 0x15CC30C
	public bool get_isFocused() { }

	// RVA: 0x15CC314 Offset: 0x15C8314 VA: 0x15CC314
	protected void .ctor() { }

	// RVA: 0x15CC3A4 Offset: 0x15C83A4 VA: 0x15CC3A4
	public void UpdateModules() { }

	// RVA: 0x15CC4EC Offset: 0x15C84EC VA: 0x15CC4EC
	public bool get_alreadySelecting() { }

	// RVA: 0x15CB2C4 Offset: 0x15C72C4 VA: 0x15CB2C4
	public void SetSelectedGameObject(GameObject selected, BaseEventData pointer) { }

	// RVA: 0x15CC4F4 Offset: 0x15C84F4 VA: 0x15CC4F4
	private BaseEventData get_baseEventDataCache() { }

	// RVA: 0x15C85C4 Offset: 0x15C45C4 VA: 0x15C85C4
	public void SetSelectedGameObject(GameObject selected) { }

	// RVA: 0x15CC55C Offset: 0x15C855C VA: 0x15CC55C
	private static int RaycastComparer(RaycastResult lhs, RaycastResult rhs) { }

	// RVA: 0x15CC91C Offset: 0x15C891C VA: 0x15CC91C
	public void RaycastAll(PointerEventData eventData, List<RaycastResult> raycastResults) { }

	// RVA: 0x15CCB40 Offset: 0x15C8B40 VA: 0x15CCB40
	public bool IsPointerOverGameObject() { }

	// RVA: 0x15CCB48 Offset: 0x15C8B48 VA: 0x15CCB48
	public bool IsPointerOverGameObject(int pointerId) { }

	// RVA: 0x15CCBEC Offset: 0x15C8BEC VA: 0x15CCBEC
	private bool get_isUIToolkitActiveEventSystem() { }

	// RVA: 0x15CCCDC Offset: 0x15C8CDC VA: 0x15CCCDC
	private bool get_sendUIToolkitEvents() { }

	// RVA: 0x15CCD50 Offset: 0x15C8D50 VA: 0x15CCD50
	private bool get_createUIToolkitPanelGameObjectsOnStart() { }

	// RVA: 0x15CCDC4 Offset: 0x15C8DC4 VA: 0x15CCDC4
	public static void SetUITookitEventSystemOverride(EventSystem activeEventSystem, bool sendEvents = True, bool createPanelGameObjectsOnStart = True) { }

	// RVA: 0x15CCF60 Offset: 0x15C8F60 VA: 0x15CCF60
	private void StartTrackingUIToolkitPanels() { }

	// RVA: 0x15CD44C Offset: 0x15C944C VA: 0x15CD44C
	private void StopTrackingUIToolkitPanels() { }

	// RVA: 0x15CD1B4 Offset: 0x15C91B4 VA: 0x15CD1B4
	private void CreateUIToolkitPanelGameObject(BaseRuntimePanel panel) { }

	// RVA: 0x15CD500 Offset: 0x15C9500 VA: 0x15CD500 Slot: 6
	protected override void Start() { }

	// RVA: 0x15CD524 Offset: 0x15C9524 VA: 0x15CD524 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15CD610 Offset: 0x15C9610 VA: 0x15CD610 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15CD72C Offset: 0x15C972C VA: 0x15CD72C
	private void TickModules() { }

	// RVA: 0x15CD834 Offset: 0x15C9834 VA: 0x15CD834 Slot: 17
	protected virtual void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x15CD848 Offset: 0x15C9848 VA: 0x15CD848 Slot: 18
	protected virtual void Update() { }

	// RVA: 0x15CDAAC Offset: 0x15C9AAC VA: 0x15CDAAC
	private void ChangeEventModule(BaseInputModule module) { }

	// RVA: 0x15CDBA4 Offset: 0x15C9BA4 VA: 0x15CDBA4 Slot: 3
	public override string ToString() { }

	// RVA: 0x15CDCFC Offset: 0x15C9CFC VA: 0x15CDCFC
	private static void .cctor() { }
}


// Namespace: 
[Serializable]
public class EventTrigger.TriggerEvent : UnityEvent<BaseEventData> // TypeDefIndex: 6524
{
	// Methods

	// RVA: 0x15CE098 Offset: 0x15CA098 VA: 0x15CE098
	public void .ctor() { }
}


// Namespace: 
[Serializable]
public class EventTrigger.Entry // TypeDefIndex: 6525
{
	// Fields
	public EventTriggerType eventID; // 0x10
	public EventTrigger.TriggerEvent callback; // 0x18

	// Methods

	// RVA: 0x15CE0E0 Offset: 0x15CA0E0 VA: 0x15CE0E0
	public void .ctor() { }
}


// Namespace: UnityEngine.EventSystems
public class EventTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler, IInitializePotentialDragHandler, IBeginDragHandler, IDragHandler, IEndDragHandler, IDropHandler, IScrollHandler, IUpdateSelectedHandler, ISelectHandler, IDeselectHandler, IMoveHandler, ISubmitHandler, ICancelHandler // TypeDefIndex: 6526
{
	// Fields
	[FormerlySerializedAs("delegates")]
	[SerializeField]
	private List<EventTrigger.Entry> m_Delegates; // 0x20

	// Properties
	[Obsolete("Please use triggers instead (UnityUpgradable) -> triggers", True)]
	public List<EventTrigger.Entry> delegates { get; set; }
	public List<EventTrigger.Entry> triggers { get; set; }

	// Methods

	// RVA: 0x15CDE4C Offset: 0x15C9E4C VA: 0x15CDE4C
	public List<EventTrigger.Entry> get_delegates() { }

	// RVA: 0x15CDEC8 Offset: 0x15C9EC8 VA: 0x15CDEC8
	public void set_delegates(List<EventTrigger.Entry> value) { }

	// RVA: 0x15CDED0 Offset: 0x15C9ED0 VA: 0x15CDED0
	protected void .ctor() { }

	// RVA: 0x15CDE50 Offset: 0x15C9E50 VA: 0x15CDE50
	public List<EventTrigger.Entry> get_triggers() { }

	// RVA: 0x15CDED8 Offset: 0x15C9ED8 VA: 0x15CDED8
	public void set_triggers(List<EventTrigger.Entry> value) { }

	// RVA: 0x15CDEE0 Offset: 0x15C9EE0 VA: 0x15CDEE0
	private void Execute(EventTriggerType id, BaseEventData eventData) { }

	// RVA: 0x15CDFCC Offset: 0x15C9FCC VA: 0x15CDFCC Slot: 21
	public virtual void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x15CDFD8 Offset: 0x15C9FD8 VA: 0x15CDFD8 Slot: 22
	public virtual void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x15CDFE4 Offset: 0x15C9FE4 VA: 0x15CDFE4 Slot: 23
	public virtual void OnDrag(PointerEventData eventData) { }

	// RVA: 0x15CDFF0 Offset: 0x15C9FF0 VA: 0x15CDFF0 Slot: 24
	public virtual void OnDrop(PointerEventData eventData) { }

	// RVA: 0x15CDFFC Offset: 0x15C9FFC VA: 0x15CDFFC Slot: 25
	public virtual void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x15CE008 Offset: 0x15CA008 VA: 0x15CE008 Slot: 26
	public virtual void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x15CE014 Offset: 0x15CA014 VA: 0x15CE014 Slot: 27
	public virtual void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x15CE020 Offset: 0x15CA020 VA: 0x15CE020 Slot: 28
	public virtual void OnSelect(BaseEventData eventData) { }

	// RVA: 0x15CE02C Offset: 0x15CA02C VA: 0x15CE02C Slot: 29
	public virtual void OnDeselect(BaseEventData eventData) { }

	// RVA: 0x15CE038 Offset: 0x15CA038 VA: 0x15CE038 Slot: 30
	public virtual void OnScroll(PointerEventData eventData) { }

	// RVA: 0x15CE044 Offset: 0x15CA044 VA: 0x15CE044 Slot: 31
	public virtual void OnMove(AxisEventData eventData) { }

	// RVA: 0x15CE050 Offset: 0x15CA050 VA: 0x15CE050 Slot: 32
	public virtual void OnUpdateSelected(BaseEventData eventData) { }

	// RVA: 0x15CE05C Offset: 0x15CA05C VA: 0x15CE05C Slot: 33
	public virtual void OnInitializePotentialDrag(PointerEventData eventData) { }

	// RVA: 0x15CE068 Offset: 0x15CA068 VA: 0x15CE068 Slot: 34
	public virtual void OnBeginDrag(PointerEventData eventData) { }

	// RVA: 0x15CE074 Offset: 0x15CA074 VA: 0x15CE074 Slot: 35
	public virtual void OnEndDrag(PointerEventData eventData) { }

	// RVA: 0x15CE080 Offset: 0x15CA080 VA: 0x15CE080 Slot: 36
	public virtual void OnSubmit(BaseEventData eventData) { }

	// RVA: 0x15CE08C Offset: 0x15CA08C VA: 0x15CE08C Slot: 37
	public virtual void OnCancel(BaseEventData eventData) { }
}


// Namespace: UnityEngine.EventSystems
public enum EventTriggerType // TypeDefIndex: 6527
{
	// Fields
	public int value__; // 0x0
	public const EventTriggerType PointerEnter = 0;
	public const EventTriggerType PointerExit = 1;
	public const EventTriggerType PointerDown = 2;
	public const EventTriggerType PointerUp = 3;
	public const EventTriggerType PointerClick = 4;
	public const EventTriggerType Drag = 5;
	public const EventTriggerType Drop = 6;
	public const EventTriggerType Scroll = 7;
	public const EventTriggerType UpdateSelected = 8;
	public const EventTriggerType Select = 9;
	public const EventTriggerType Deselect = 10;
	public const EventTriggerType Move = 11;
	public const EventTriggerType InitializePotentialDrag = 12;
	public const EventTriggerType BeginDrag = 13;
	public const EventTriggerType EndDrag = 14;
	public const EventTriggerType Submit = 15;
	public const EventTriggerType Cancel = 16;
}


// Namespace: 
public sealed class ExecuteEvents.EventFunction<T1> : MulticastDelegate // TypeDefIndex: 6528
{
	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(object object, IntPtr method) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC15C04 Offset: 0xC11C04 VA: 0xC15C04
	|-ExecuteEvents.EventFunction<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1 Slot: 12
	public virtual void Invoke(T1 handler, BaseEventData eventData) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC15D08 Offset: 0xC11D08 VA: 0xC15D08
	|-ExecuteEvents.EventFunction<__Il2CppFullySharedGenericType>.Invoke
	*/
}


// Namespace: UnityEngine.EventSystems
public static class ExecuteEvents // TypeDefIndex: 6529
{
	// Fields
	private static readonly ExecuteEvents.EventFunction<IPointerMoveHandler> s_PointerMoveHandler; // 0x0
	private static readonly ExecuteEvents.EventFunction<IPointerEnterHandler> s_PointerEnterHandler; // 0x8
	private static readonly ExecuteEvents.EventFunction<IPointerExitHandler> s_PointerExitHandler; // 0x10
	private static readonly ExecuteEvents.EventFunction<IPointerDownHandler> s_PointerDownHandler; // 0x18
	private static readonly ExecuteEvents.EventFunction<IPointerUpHandler> s_PointerUpHandler; // 0x20
	private static readonly ExecuteEvents.EventFunction<IPointerClickHandler> s_PointerClickHandler; // 0x28
	private static readonly ExecuteEvents.EventFunction<IInitializePotentialDragHandler> s_InitializePotentialDragHandler; // 0x30
	private static readonly ExecuteEvents.EventFunction<IBeginDragHandler> s_BeginDragHandler; // 0x38
	private static readonly ExecuteEvents.EventFunction<IDragHandler> s_DragHandler; // 0x40
	private static readonly ExecuteEvents.EventFunction<IEndDragHandler> s_EndDragHandler; // 0x48
	private static readonly ExecuteEvents.EventFunction<IDropHandler> s_DropHandler; // 0x50
	private static readonly ExecuteEvents.EventFunction<IScrollHandler> s_ScrollHandler; // 0x58
	private static readonly ExecuteEvents.EventFunction<IUpdateSelectedHandler> s_UpdateSelectedHandler; // 0x60
	private static readonly ExecuteEvents.EventFunction<ISelectHandler> s_SelectHandler; // 0x68
	private static readonly ExecuteEvents.EventFunction<IDeselectHandler> s_DeselectHandler; // 0x70
	private static readonly ExecuteEvents.EventFunction<IMoveHandler> s_MoveHandler; // 0x78
	private static readonly ExecuteEvents.EventFunction<ISubmitHandler> s_SubmitHandler; // 0x80
	private static readonly ExecuteEvents.EventFunction<ICancelHandler> s_CancelHandler; // 0x88
	private static readonly List<Transform> s_InternalTransformList; // 0x90

	// Properties
	public static ExecuteEvents.EventFunction<IPointerMoveHandler> pointerMoveHandler { get; }
	public static ExecuteEvents.EventFunction<IPointerEnterHandler> pointerEnterHandler { get; }
	public static ExecuteEvents.EventFunction<IPointerExitHandler> pointerExitHandler { get; }
	public static ExecuteEvents.EventFunction<IPointerDownHandler> pointerDownHandler { get; }
	public static ExecuteEvents.EventFunction<IPointerUpHandler> pointerUpHandler { get; }
	public static ExecuteEvents.EventFunction<IPointerClickHandler> pointerClickHandler { get; }
	public static ExecuteEvents.EventFunction<IInitializePotentialDragHandler> initializePotentialDrag { get; }
	public static ExecuteEvents.EventFunction<IBeginDragHandler> beginDragHandler { get; }
	public static ExecuteEvents.EventFunction<IDragHandler> dragHandler { get; }
	public static ExecuteEvents.EventFunction<IEndDragHandler> endDragHandler { get; }
	public static ExecuteEvents.EventFunction<IDropHandler> dropHandler { get; }
	public static ExecuteEvents.EventFunction<IScrollHandler> scrollHandler { get; }
	public static ExecuteEvents.EventFunction<IUpdateSelectedHandler> updateSelectedHandler { get; }
	public static ExecuteEvents.EventFunction<ISelectHandler> selectHandler { get; }
	public static ExecuteEvents.EventFunction<IDeselectHandler> deselectHandler { get; }
	public static ExecuteEvents.EventFunction<IMoveHandler> moveHandler { get; }
	public static ExecuteEvents.EventFunction<ISubmitHandler> submitHandler { get; }
	public static ExecuteEvents.EventFunction<ICancelHandler> cancelHandler { get; }

	// Methods

	// RVA: -1 Offset: -1
	public static T ValidateEventData<T>(BaseEventData data) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB88294 Offset: 0xB84294 VA: 0xB88294
	|-ExecuteEvents.ValidateEventData<object>
	*/

	// RVA: 0x15CE144 Offset: 0x15CA144 VA: 0x15CE144
	private static void Execute(IPointerMoveHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE238 Offset: 0x15CA238 VA: 0x15CE238
	private static void Execute(IPointerEnterHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE32C Offset: 0x15CA32C VA: 0x15CE32C
	private static void Execute(IPointerExitHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE420 Offset: 0x15CA420 VA: 0x15CE420
	private static void Execute(IPointerDownHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE514 Offset: 0x15CA514 VA: 0x15CE514
	private static void Execute(IPointerUpHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE608 Offset: 0x15CA608 VA: 0x15CE608
	private static void Execute(IPointerClickHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE6FC Offset: 0x15CA6FC VA: 0x15CE6FC
	private static void Execute(IInitializePotentialDragHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE7F0 Offset: 0x15CA7F0 VA: 0x15CE7F0
	private static void Execute(IBeginDragHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE8E4 Offset: 0x15CA8E4 VA: 0x15CE8E4
	private static void Execute(IDragHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CE9D8 Offset: 0x15CA9D8 VA: 0x15CE9D8
	private static void Execute(IEndDragHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CEACC Offset: 0x15CAACC VA: 0x15CEACC
	private static void Execute(IDropHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CEBC0 Offset: 0x15CABC0 VA: 0x15CEBC0
	private static void Execute(IScrollHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CECB4 Offset: 0x15CACB4 VA: 0x15CECB4
	private static void Execute(IUpdateSelectedHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CED58 Offset: 0x15CAD58 VA: 0x15CED58
	private static void Execute(ISelectHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CEDFC Offset: 0x15CADFC VA: 0x15CEDFC
	private static void Execute(IDeselectHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CEEA0 Offset: 0x15CAEA0 VA: 0x15CEEA0
	private static void Execute(IMoveHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CEF94 Offset: 0x15CAF94 VA: 0x15CEF94
	private static void Execute(ISubmitHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CF038 Offset: 0x15CB038 VA: 0x15CF038
	private static void Execute(ICancelHandler handler, BaseEventData eventData) { }

	// RVA: 0x15CF0DC Offset: 0x15CB0DC VA: 0x15CF0DC
	public static ExecuteEvents.EventFunction<IPointerMoveHandler> get_pointerMoveHandler() { }

	// RVA: 0x15CF134 Offset: 0x15CB134 VA: 0x15CF134
	public static ExecuteEvents.EventFunction<IPointerEnterHandler> get_pointerEnterHandler() { }

	// RVA: 0x15CF18C Offset: 0x15CB18C VA: 0x15CF18C
	public static ExecuteEvents.EventFunction<IPointerExitHandler> get_pointerExitHandler() { }

	// RVA: 0x15CF1E4 Offset: 0x15CB1E4 VA: 0x15CF1E4
	public static ExecuteEvents.EventFunction<IPointerDownHandler> get_pointerDownHandler() { }

	// RVA: 0x15CF23C Offset: 0x15CB23C VA: 0x15CF23C
	public static ExecuteEvents.EventFunction<IPointerUpHandler> get_pointerUpHandler() { }

	// RVA: 0x15CF294 Offset: 0x15CB294 VA: 0x15CF294
	public static ExecuteEvents.EventFunction<IPointerClickHandler> get_pointerClickHandler() { }

	// RVA: 0x15CF2EC Offset: 0x15CB2EC VA: 0x15CF2EC
	public static ExecuteEvents.EventFunction<IInitializePotentialDragHandler> get_initializePotentialDrag() { }

	// RVA: 0x15CF344 Offset: 0x15CB344 VA: 0x15CF344
	public static ExecuteEvents.EventFunction<IBeginDragHandler> get_beginDragHandler() { }

	// RVA: 0x15CF39C Offset: 0x15CB39C VA: 0x15CF39C
	public static ExecuteEvents.EventFunction<IDragHandler> get_dragHandler() { }

	// RVA: 0x15CF3F4 Offset: 0x15CB3F4 VA: 0x15CF3F4
	public static ExecuteEvents.EventFunction<IEndDragHandler> get_endDragHandler() { }

	// RVA: 0x15CF44C Offset: 0x15CB44C VA: 0x15CF44C
	public static ExecuteEvents.EventFunction<IDropHandler> get_dropHandler() { }

	// RVA: 0x15CF4A4 Offset: 0x15CB4A4 VA: 0x15CF4A4
	public static ExecuteEvents.EventFunction<IScrollHandler> get_scrollHandler() { }

	// RVA: 0x15CF4FC Offset: 0x15CB4FC VA: 0x15CF4FC
	public static ExecuteEvents.EventFunction<IUpdateSelectedHandler> get_updateSelectedHandler() { }

	// RVA: 0x15CF554 Offset: 0x15CB554 VA: 0x15CF554
	public static ExecuteEvents.EventFunction<ISelectHandler> get_selectHandler() { }

	// RVA: 0x15CF5AC Offset: 0x15CB5AC VA: 0x15CF5AC
	public static ExecuteEvents.EventFunction<IDeselectHandler> get_deselectHandler() { }

	// RVA: 0x15CF604 Offset: 0x15CB604 VA: 0x15CF604
	public static ExecuteEvents.EventFunction<IMoveHandler> get_moveHandler() { }

	// RVA: 0x15CF65C Offset: 0x15CB65C VA: 0x15CF65C
	public static ExecuteEvents.EventFunction<ISubmitHandler> get_submitHandler() { }

	// RVA: 0x15CF6B4 Offset: 0x15CB6B4 VA: 0x15CF6B4
	public static ExecuteEvents.EventFunction<ICancelHandler> get_cancelHandler() { }

	// RVA: 0x15CF70C Offset: 0x15CB70C VA: 0x15CF70C
	private static void GetEventChain(GameObject root, IList<Transform> eventChain) { }

	// RVA: -1 Offset: -1
	public static bool Execute<T>(GameObject target, BaseEventData eventData, ExecuteEvents.EventFunction<T> functor) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB877B4 Offset: 0xB837B4 VA: 0xB877B4
	|-ExecuteEvents.Execute<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static GameObject ExecuteHierarchy<T>(GameObject root, BaseEventData eventData, ExecuteEvents.EventFunction<T> callbackFunction) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB87C2C Offset: 0xB83C2C VA: 0xB87C2C
	|-ExecuteEvents.ExecuteHierarchy<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static bool ShouldSendToComponent<T>(Component component) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB88194 Offset: 0xB84194 VA: 0xB88194
	|-ExecuteEvents.ShouldSendToComponent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static void GetEventList<T>(GameObject go, IList<IEventSystemHandler> results) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB87EB0 Offset: 0xB83EB0 VA: 0xB87EB0
	|-ExecuteEvents.GetEventList<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static bool CanHandleEvent<T>(GameObject go) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB876C0 Offset: 0xB836C0 VA: 0xB876C0
	|-ExecuteEvents.CanHandleEvent<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static GameObject GetEventHandler<T>(GameObject root) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB87D80 Offset: 0xB83D80 VA: 0xB87D80
	|-ExecuteEvents.GetEventHandler<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x15CF8A0 Offset: 0x15CB8A0 VA: 0x15CF8A0
	private static void .cctor() { }
}


// Namespace: UnityEngine.EventSystems
public class BaseInput : UIBehaviour // TypeDefIndex: 6530
{
	// Properties
	public virtual string compositionString { get; }
	public virtual IMECompositionMode imeCompositionMode { get; set; }
	public virtual Vector2 compositionCursorPos { get; set; }
	public virtual bool mousePresent { get; }
	public virtual Vector2 mousePosition { get; }
	public virtual Vector2 mouseScrollDelta { get; }
	public virtual bool touchSupported { get; }
	public virtual int touchCount { get; }

	// Methods

	// RVA: 0x15CFEE8 Offset: 0x15CBEE8 VA: 0x15CFEE8 Slot: 17
	public virtual string get_compositionString() { }

	// RVA: 0x15CFEF0 Offset: 0x15CBEF0 VA: 0x15CFEF0 Slot: 18
	public virtual IMECompositionMode get_imeCompositionMode() { }

	// RVA: 0x15CFEF8 Offset: 0x15CBEF8 VA: 0x15CFEF8 Slot: 19
	public virtual void set_imeCompositionMode(IMECompositionMode value) { }

	// RVA: 0x15CFF04 Offset: 0x15CBF04 VA: 0x15CFF04 Slot: 20
	public virtual Vector2 get_compositionCursorPos() { }

	// RVA: 0x15CFF0C Offset: 0x15CBF0C VA: 0x15CFF0C Slot: 21
	public virtual void set_compositionCursorPos(Vector2 value) { }

	// RVA: 0x15CFF14 Offset: 0x15CBF14 VA: 0x15CFF14 Slot: 22
	public virtual bool get_mousePresent() { }

	// RVA: 0x15CFF1C Offset: 0x15CBF1C VA: 0x15CFF1C Slot: 23
	public virtual bool GetMouseButtonDown(int button) { }

	// RVA: 0x15CFF28 Offset: 0x15CBF28 VA: 0x15CFF28 Slot: 24
	public virtual bool GetMouseButtonUp(int button) { }

	// RVA: 0x15CFF34 Offset: 0x15CBF34 VA: 0x15CFF34 Slot: 25
	public virtual bool GetMouseButton(int button) { }

	// RVA: 0x15CFF40 Offset: 0x15CBF40 VA: 0x15CFF40 Slot: 26
	public virtual Vector2 get_mousePosition() { }

	// RVA: 0x15CFF48 Offset: 0x15CBF48 VA: 0x15CFF48 Slot: 27
	public virtual Vector2 get_mouseScrollDelta() { }

	// RVA: 0x15CFF50 Offset: 0x15CBF50 VA: 0x15CFF50 Slot: 28
	public virtual bool get_touchSupported() { }

	// RVA: 0x15CFF58 Offset: 0x15CBF58 VA: 0x15CFF58 Slot: 29
	public virtual int get_touchCount() { }

	// RVA: 0x15CFF60 Offset: 0x15CBF60 VA: 0x15CFF60 Slot: 30
	public virtual Touch GetTouch(int index) { }

	// RVA: 0x15CFF98 Offset: 0x15CBF98 VA: 0x15CFF98 Slot: 31
	public virtual float GetAxisRaw(string axisName) { }

	// RVA: 0x15CFFA4 Offset: 0x15CBFA4 VA: 0x15CFFA4 Slot: 32
	public virtual bool GetButtonDown(string buttonName) { }

	// RVA: 0x15CFFB0 Offset: 0x15CBFB0 VA: 0x15CFFB0
	public void .ctor() { }
}


// Namespace: UnityEngine.EventSystems
[RequireComponent(typeof(EventSystem))]
public abstract class BaseInputModule : UIBehaviour // TypeDefIndex: 6531
{
	// Fields
	protected List<RaycastResult> m_RaycastResultCache; // 0x20
	[SerializeField]
	private bool m_SendPointerHoverToParent; // 0x28
	private AxisEventData m_AxisEventData; // 0x30
	private EventSystem m_EventSystem; // 0x38
	private BaseEventData m_BaseEventData; // 0x40
	protected BaseInput m_InputOverride; // 0x48
	private BaseInput m_DefaultInput; // 0x50

	// Properties
	internal bool sendPointerHoverToParent { get; set; }
	public BaseInput input { get; }
	public BaseInput inputOverride { get; set; }
	protected EventSystem eventSystem { get; }

	// Methods

	// RVA: 0x15CFFB8 Offset: 0x15CBFB8 VA: 0x15CFFB8
	internal bool get_sendPointerHoverToParent() { }

	// RVA: 0x15CFFC0 Offset: 0x15CBFC0 VA: 0x15CFFC0
	internal void set_sendPointerHoverToParent(bool value) { }

	// RVA: 0x15CFFCC Offset: 0x15CBFCC VA: 0x15CFFCC
	public BaseInput get_input() { }

	// RVA: 0x15D01E4 Offset: 0x15CC1E4 VA: 0x15D01E4
	public BaseInput get_inputOverride() { }

	// RVA: 0x15D01EC Offset: 0x15CC1EC VA: 0x15D01EC
	public void set_inputOverride(BaseInput value) { }

	// RVA: 0x15D01F4 Offset: 0x15CC1F4 VA: 0x15D01F4
	protected EventSystem get_eventSystem() { }

	// RVA: 0x15D01FC Offset: 0x15CC1FC VA: 0x15D01FC Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15D0274 Offset: 0x15CC274 VA: 0x15D0274 Slot: 7
	protected override void OnDisable() { }

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void Process();

	// RVA: 0x15D029C Offset: 0x15CC29C VA: 0x15D029C
	protected static RaycastResult FindFirstRaycast(List<RaycastResult> candidates) { }

	// RVA: 0x15D03B0 Offset: 0x15CC3B0 VA: 0x15D03B0
	protected static MoveDirection DetermineMoveDirection(float x, float y) { }

	// RVA: 0x15D0404 Offset: 0x15CC404 VA: 0x15D0404
	protected static MoveDirection DetermineMoveDirection(float x, float y, float deadZone) { }

	// RVA: 0x15D0454 Offset: 0x15CC454 VA: 0x15D0454
	protected static GameObject FindCommonRoot(GameObject g1, GameObject g2) { }

	// RVA: 0x15D05C8 Offset: 0x15CC5C8 VA: 0x15D05C8
	protected void HandlePointerExitAndEnter(PointerEventData currentPointerData, GameObject newEnterTarget) { }

	// RVA: 0x15D1050 Offset: 0x15CD050 VA: 0x15D1050 Slot: 18
	protected virtual AxisEventData GetAxisEventData(float x, float y, float moveDeadZone) { }

	// RVA: 0x15D1150 Offset: 0x15CD150 VA: 0x15D1150 Slot: 19
	protected virtual BaseEventData GetBaseEventData() { }

	// RVA: 0x15D11CC Offset: 0x15CD1CC VA: 0x15D11CC Slot: 20
	public virtual bool IsPointerOverGameObject(int pointerId) { }

	// RVA: 0x15D11D4 Offset: 0x15CD1D4 VA: 0x15D11D4 Slot: 21
	public virtual bool ShouldActivateModule() { }

	// RVA: 0x15D1214 Offset: 0x15CD214 VA: 0x15D1214 Slot: 22
	public virtual void DeactivateModule() { }

	// RVA: 0x15D1218 Offset: 0x15CD218 VA: 0x15D1218 Slot: 23
	public virtual void ActivateModule() { }

	// RVA: 0x15D121C Offset: 0x15CD21C VA: 0x15D121C Slot: 24
	public virtual void UpdateModule() { }

	// RVA: 0x15D1220 Offset: 0x15CD220 VA: 0x15D1220 Slot: 25
	public virtual bool IsModuleSupported() { }

	// RVA: 0x15D1228 Offset: 0x15CD228 VA: 0x15D1228 Slot: 26
	public virtual int ConvertUIToolkitPointerId(PointerEventData sourcePointerData) { }

	// RVA: 0x15D12A4 Offset: 0x15CD2A4 VA: 0x15D12A4
	protected void .ctor() { }
}


// Namespace: 
protected class PointerInputModule.ButtonState // TypeDefIndex: 6532
{
	// Fields
	private PointerEventData.InputButton m_Button; // 0x10
	private PointerInputModule.MouseButtonEventData m_EventData; // 0x18

	// Properties
	public PointerInputModule.MouseButtonEventData eventData { get; set; }
	public PointerEventData.InputButton button { get; set; }

	// Methods

	// RVA: 0x15D27B0 Offset: 0x15CE7B0 VA: 0x15D27B0
	public PointerInputModule.MouseButtonEventData get_eventData() { }

	// RVA: 0x15D27B8 Offset: 0x15CE7B8 VA: 0x15D27B8
	public void set_eventData(PointerInputModule.MouseButtonEventData value) { }

	// RVA: 0x15D27C0 Offset: 0x15CE7C0 VA: 0x15D27C0
	public PointerEventData.InputButton get_button() { }

	// RVA: 0x15D27C8 Offset: 0x15CE7C8 VA: 0x15D27C8
	public void set_button(PointerEventData.InputButton value) { }

	// RVA: 0x15D27D0 Offset: 0x15CE7D0 VA: 0x15D27D0
	public void .ctor() { }
}


// Namespace: 
protected class PointerInputModule.MouseState // TypeDefIndex: 6533
{
	// Fields
	private List<PointerInputModule.ButtonState> m_TrackedButtons; // 0x10

	// Methods

	// RVA: 0x15D27D8 Offset: 0x15CE7D8 VA: 0x15D27D8
	public PointerInputModule.ButtonState GetButtonState(PointerEventData.InputButton button) { }

	// RVA: 0x15D1C98 Offset: 0x15CDC98 VA: 0x15D1C98
	public void SetButtonState(PointerEventData.InputButton button, PointerEventData.FramePressState stateForMouseButton, PointerEventData data) { }

	// RVA: 0x15D2734 Offset: 0x15CE734 VA: 0x15D2734
	public void .ctor() { }
}


// Namespace: 
public class PointerInputModule.MouseButtonEventData // TypeDefIndex: 6534
{
	// Fields
	public PointerEventData.FramePressState buttonState; // 0x10
	public PointerEventData buttonData; // 0x18

	// Methods

	// RVA: 0x15D2940 Offset: 0x15CE940 VA: 0x15D2940
	public bool PressedThisFrame() { }

	// RVA: 0x15D2950 Offset: 0x15CE950 VA: 0x15D2950
	public bool ReleasedThisFrame() { }

	// RVA: 0x15D2938 Offset: 0x15CE938 VA: 0x15D2938
	public void .ctor() { }
}


// Namespace: UnityEngine.EventSystems
public abstract class PointerInputModule : BaseInputModule // TypeDefIndex: 6535
{
	// Fields
	public const int kMouseLeftId = -1;
	public const int kMouseRightId = -2;
	public const int kMouseMiddleId = -3;
	public const int kFakeTouchesId = -4;
	protected Dictionary<int, PointerEventData> m_PointerData; // 0x58
	private readonly PointerInputModule.MouseState m_MouseState; // 0x60

	// Methods

	// RVA: 0x15D1328 Offset: 0x15CD328 VA: 0x15D1328
	protected bool GetPointerData(int id, out PointerEventData data, bool create) { }

	// RVA: 0x15D141C Offset: 0x15CD41C VA: 0x15D141C
	protected void RemovePointerData(PointerEventData data) { }

	// RVA: 0x15D148C Offset: 0x15CD48C VA: 0x15D148C
	protected PointerEventData GetTouchPointerEventData(Touch input, out bool pressed, out bool released) { }

	// RVA: 0x15D1838 Offset: 0x15CD838 VA: 0x15D1838
	protected void CopyFromTo(PointerEventData from, PointerEventData to) { }

	// RVA: 0x15D18C0 Offset: 0x15CD8C0 VA: 0x15D18C0
	protected PointerEventData.FramePressState StateForMouseButton(int buttonId) { }

	// RVA: 0x15D193C Offset: 0x15CD93C VA: 0x15D193C Slot: 27
	protected virtual PointerInputModule.MouseState GetMousePointerEventData() { }

	// RVA: 0x15D1950 Offset: 0x15CD950 VA: 0x15D1950 Slot: 28
	protected virtual PointerInputModule.MouseState GetMousePointerEventData(int id) { }

	// RVA: 0x15D1CD0 Offset: 0x15CDCD0 VA: 0x15D1CD0
	protected PointerEventData GetLastPointerEventData(int id) { }

	// RVA: 0x15D1CF0 Offset: 0x15CDCF0 VA: 0x15D1CF0
	private static bool ShouldStartDrag(Vector2 pressPos, Vector2 currentPos, float threshold, bool useDragThreshold) { }

	// RVA: 0x15D1D20 Offset: 0x15CDD20 VA: 0x15D1D20 Slot: 29
	protected virtual void ProcessMove(PointerEventData pointerEvent) { }

	// RVA: 0x15D1D64 Offset: 0x15CDD64 VA: 0x15D1D64 Slot: 30
	protected virtual void ProcessDrag(PointerEventData pointerEvent) { }

	// RVA: 0x15D2024 Offset: 0x15CE024 VA: 0x15D2024 Slot: 20
	public override bool IsPointerOverGameObject(int pointerId) { }

	// RVA: 0x15D20C0 Offset: 0x15CE0C0 VA: 0x15D20C0
	protected void ClearSelection() { }

	// RVA: 0x15D22A4 Offset: 0x15CE2A4 VA: 0x15D22A4 Slot: 3
	public override string ToString() { }

	// RVA: 0x15D25A8 Offset: 0x15CE5A8 VA: 0x15D25A8
	protected void DeselectIfSelectionChanged(GameObject currentOverGo, BaseEventData pointerEvent) { }

	// RVA: 0x15D2694 Offset: 0x15CE694 VA: 0x15D2694
	protected void .ctor() { }
}


// Namespace: 
[Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", False)]
public enum StandaloneInputModule.InputMode // TypeDefIndex: 6536
{
	// Fields
	public int value__; // 0x0
	public const StandaloneInputModule.InputMode Mouse = 0;
	public const StandaloneInputModule.InputMode Buttons = 1;
}


// Namespace: UnityEngine.EventSystems
public class StandaloneInputModule : PointerInputModule // TypeDefIndex: 6537
{
	// Fields
	private float m_PrevActionTime; // 0x68
	private Vector2 m_LastMoveVector; // 0x6C
	private int m_ConsecutiveMoveCount; // 0x74
	private Vector2 m_LastMousePosition; // 0x78
	private Vector2 m_MousePosition; // 0x80
	private GameObject m_CurrentFocusedGameObject; // 0x88
	private PointerEventData m_InputPointerEvent; // 0x90
	private const float doubleClickTime = 0.3;
	[SerializeField]
	private string m_HorizontalAxis; // 0x98
	[SerializeField]
	private string m_VerticalAxis; // 0xA0
	[SerializeField]
	private string m_SubmitButton; // 0xA8
	[SerializeField]
	private string m_CancelButton; // 0xB0
	[SerializeField]
	private float m_InputActionsPerSecond; // 0xB8
	[SerializeField]
	private float m_RepeatDelay; // 0xBC
	[SerializeField]
	[FormerlySerializedAs("m_AllowActivationOnMobileDevice")]
	private bool m_ForceModuleActive; // 0xC0

	// Properties
	[Obsolete("Mode is no longer needed on input module as it handles both mouse and keyboard simultaneously.", False)]
	public StandaloneInputModule.InputMode inputMode { get; }
	[Obsolete("allowActivationOnMobileDevice has been deprecated. Use forceModuleActive instead (UnityUpgradable) -> forceModuleActive")]
	public bool allowActivationOnMobileDevice { get; set; }
	[Obsolete("forceModuleActive has been deprecated. There is no need to force the module awake as StandaloneInputModule works for all platforms")]
	public bool forceModuleActive { get; set; }
	public float inputActionsPerSecond { get; set; }
	public float repeatDelay { get; set; }
	public string horizontalAxis { get; set; }
	public string verticalAxis { get; set; }
	public string submitButton { get; set; }
	public string cancelButton { get; set; }

	// Methods

	// RVA: 0x15D2964 Offset: 0x15CE964 VA: 0x15D2964
	protected void .ctor() { }

	// RVA: 0x15D2A18 Offset: 0x15CEA18 VA: 0x15D2A18
	public StandaloneInputModule.InputMode get_inputMode() { }

	// RVA: 0x15D2A20 Offset: 0x15CEA20 VA: 0x15D2A20
	public bool get_allowActivationOnMobileDevice() { }

	// RVA: 0x15D2A28 Offset: 0x15CEA28 VA: 0x15D2A28
	public void set_allowActivationOnMobileDevice(bool value) { }

	// RVA: 0x15D2A34 Offset: 0x15CEA34 VA: 0x15D2A34
	public bool get_forceModuleActive() { }

	// RVA: 0x15D2A3C Offset: 0x15CEA3C VA: 0x15D2A3C
	public void set_forceModuleActive(bool value) { }

	// RVA: 0x15D2A48 Offset: 0x15CEA48 VA: 0x15D2A48
	public float get_inputActionsPerSecond() { }

	// RVA: 0x15D2A50 Offset: 0x15CEA50 VA: 0x15D2A50
	public void set_inputActionsPerSecond(float value) { }

	// RVA: 0x15D2A58 Offset: 0x15CEA58 VA: 0x15D2A58
	public float get_repeatDelay() { }

	// RVA: 0x15D2A60 Offset: 0x15CEA60 VA: 0x15D2A60
	public void set_repeatDelay(float value) { }

	// RVA: 0x15D2A68 Offset: 0x15CEA68 VA: 0x15D2A68
	public string get_horizontalAxis() { }

	// RVA: 0x15D2A70 Offset: 0x15CEA70 VA: 0x15D2A70
	public void set_horizontalAxis(string value) { }

	// RVA: 0x15D2A78 Offset: 0x15CEA78 VA: 0x15D2A78
	public string get_verticalAxis() { }

	// RVA: 0x15D2A80 Offset: 0x15CEA80 VA: 0x15D2A80
	public void set_verticalAxis(string value) { }

	// RVA: 0x15D2A88 Offset: 0x15CEA88 VA: 0x15D2A88
	public string get_submitButton() { }

	// RVA: 0x15D2A90 Offset: 0x15CEA90 VA: 0x15D2A90
	public void set_submitButton(string value) { }

	// RVA: 0x15D2A98 Offset: 0x15CEA98 VA: 0x15D2A98
	public string get_cancelButton() { }

	// RVA: 0x15D2AA0 Offset: 0x15CEAA0 VA: 0x15D2AA0
	public void set_cancelButton(string value) { }

	// RVA: 0x15D2AA8 Offset: 0x15CEAA8 VA: 0x15D2AA8
	private bool ShouldIgnoreEventsOnNoFocus() { }

	// RVA: 0x15D2AB0 Offset: 0x15CEAB0 VA: 0x15D2AB0 Slot: 24
	public override void UpdateModule() { }

	// RVA: 0x15D2B80 Offset: 0x15CEB80 VA: 0x15D2B80
	private void ReleaseMouse(PointerEventData pointerEvent, GameObject currentOverGo) { }

	// RVA: 0x15D2EEC Offset: 0x15CEEEC VA: 0x15D2EEC Slot: 21
	public override bool ShouldActivateModule() { }

	// RVA: 0x15D3124 Offset: 0x15CF124 VA: 0x15D3124 Slot: 23
	public override void ActivateModule() { }

	// RVA: 0x15D3224 Offset: 0x15CF224 VA: 0x15D3224 Slot: 22
	public override void DeactivateModule() { }

	// RVA: 0x15D3228 Offset: 0x15CF228 VA: 0x15D3228 Slot: 17
	public override void Process() { }

	// RVA: 0x15D3414 Offset: 0x15CF414 VA: 0x15D3414
	private bool ProcessTouchEvents() { }

	// RVA: 0x15D39F4 Offset: 0x15CF9F4 VA: 0x15D39F4
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released) { }

	// RVA: 0x15D37E0 Offset: 0x15CF7E0 VA: 0x15D37E0
	protected bool SendSubmitEventToSelectedObject() { }

	// RVA: 0x15D4088 Offset: 0x15D0088 VA: 0x15D4088
	private Vector2 GetRawMoveVector() { }

	// RVA: 0x15D3580 Offset: 0x15CF580 VA: 0x15D3580
	protected bool SendMoveEventToSelectedObject() { }

	// RVA: 0x15D3578 Offset: 0x15CF578 VA: 0x15D3578
	protected void ProcessMouseEvent() { }

	[Obsolete("This method is no longer checked, overriding it with return true does nothing!")]
	// RVA: 0x15D443C Offset: 0x15D043C VA: 0x15D443C Slot: 31
	protected virtual bool ForceAutoSelect() { }

	// RVA: 0x15D4194 Offset: 0x15D0194 VA: 0x15D4194
	protected void ProcessMouseEvent(int id) { }

	// RVA: 0x15D32CC Offset: 0x15CF2CC VA: 0x15D32CC
	protected bool SendUpdateEventToSelectedObject() { }

	// RVA: 0x15D4444 Offset: 0x15D0444 VA: 0x15D4444
	protected void ProcessMousePress(PointerInputModule.MouseButtonEventData data) { }

	// RVA: 0x15D47B8 Offset: 0x15D07B8 VA: 0x15D47B8
	protected GameObject GetCurrentFocusedGameObject() { }
}


// Namespace: UnityEngine.EventSystems
[Obsolete("TouchInputModule is no longer required as Touch input is now handled in StandaloneInputModule.")]
public class TouchInputModule : PointerInputModule // TypeDefIndex: 6538
{
	// Fields
	private Vector2 m_LastMousePosition; // 0x68
	private Vector2 m_MousePosition; // 0x70
	private PointerEventData m_InputPointerEvent; // 0x78
	[FormerlySerializedAs("m_AllowActivationOnStandalone")]
	[SerializeField]
	private bool m_ForceModuleActive; // 0x80

	// Properties
	[Obsolete("allowActivationOnStandalone has been deprecated. Use forceModuleActive instead (UnityUpgradable) -> forceModuleActive")]
	public bool allowActivationOnStandalone { get; set; }
	public bool forceModuleActive { get; set; }

	// Methods

	// RVA: 0x15D47C0 Offset: 0x15D07C0 VA: 0x15D47C0
	protected void .ctor() { }

	// RVA: 0x15D47C4 Offset: 0x15D07C4 VA: 0x15D47C4
	public bool get_allowActivationOnStandalone() { }

	// RVA: 0x15D47CC Offset: 0x15D07CC VA: 0x15D47CC
	public void set_allowActivationOnStandalone(bool value) { }

	// RVA: 0x15D47D8 Offset: 0x15D07D8 VA: 0x15D47D8
	public bool get_forceModuleActive() { }

	// RVA: 0x15D47E0 Offset: 0x15D07E0 VA: 0x15D47E0
	public void set_forceModuleActive(bool value) { }

	// RVA: 0x15D47EC Offset: 0x15D07EC VA: 0x15D47EC Slot: 24
	public override void UpdateModule() { }

	// RVA: 0x15D493C Offset: 0x15D093C VA: 0x15D493C Slot: 25
	public override bool IsModuleSupported() { }

	// RVA: 0x15D4974 Offset: 0x15D0974 VA: 0x15D4974 Slot: 21
	public override bool ShouldActivateModule() { }

	// RVA: 0x15D4A18 Offset: 0x15D0A18 VA: 0x15D4A18
	private bool UseFakeInput() { }

	// RVA: 0x15D4A48 Offset: 0x15D0A48 VA: 0x15D4A48 Slot: 17
	public override void Process() { }

	// RVA: 0x15D4A70 Offset: 0x15D0A70 VA: 0x15D4A70
	private void FakeTouches() { }

	// RVA: 0x15D4B98 Offset: 0x15D0B98 VA: 0x15D4B98
	private void ProcessTouchEvents() { }

	// RVA: 0x15D4CE0 Offset: 0x15D0CE0 VA: 0x15D4CE0
	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released) { }

	// RVA: 0x15D5364 Offset: 0x15D1364 VA: 0x15D5364 Slot: 22
	public override void DeactivateModule() { }

	// RVA: 0x15D5368 Offset: 0x15D1368 VA: 0x15D5368 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.EventSystems
public enum MoveDirection // TypeDefIndex: 6539
{
	// Fields
	public int value__; // 0x0
	public const MoveDirection Left = 0;
	public const MoveDirection Up = 1;
	public const MoveDirection Right = 2;
	public const MoveDirection Down = 3;
	public const MoveDirection None = 4;
}


// Namespace: UnityEngine.EventSystems
public static class RaycasterManager // TypeDefIndex: 6540
{
	// Fields
	private static readonly List<BaseRaycaster> s_Raycasters; // 0x0

	// Methods

	// RVA: 0x15D55D4 Offset: 0x15D15D4 VA: 0x15D55D4
	internal static void AddRaycaster(BaseRaycaster baseRaycaster) { }

	// RVA: 0x15D56A4 Offset: 0x15D16A4 VA: 0x15D56A4
	public static List<BaseRaycaster> GetRaycasters() { }

	// RVA: 0x15D56FC Offset: 0x15D16FC VA: 0x15D56FC
	internal static void RemoveRaycasters(BaseRaycaster baseRaycaster) { }

	// RVA: 0x15D57CC Offset: 0x15D17CC VA: 0x15D57CC
	private static void .cctor() { }
}


// Namespace: UnityEngine.EventSystems
public abstract class BaseRaycaster : UIBehaviour // TypeDefIndex: 6541
{
	// Fields
	private BaseRaycaster m_RootRaycaster; // 0x20

	// Properties
	public abstract Camera eventCamera { get; }
	[Obsolete("Please use sortOrderPriority and renderOrderPriority", False)]
	public virtual int priority { get; }
	public virtual int sortOrderPriority { get; }
	public virtual int renderOrderPriority { get; }
	public BaseRaycaster rootRaycaster { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList);

	// RVA: -1 Offset: -1 Slot: 18
	public abstract Camera get_eventCamera();

	// RVA: 0x15D5858 Offset: 0x15D1858 VA: 0x15D5858 Slot: 19
	public virtual int get_priority() { }

	// RVA: 0x15D5860 Offset: 0x15D1860 VA: 0x15D5860 Slot: 20
	public virtual int get_sortOrderPriority() { }

	// RVA: 0x15D5868 Offset: 0x15D1868 VA: 0x15D5868 Slot: 21
	public virtual int get_renderOrderPriority() { }

	// RVA: 0x15D5870 Offset: 0x15D1870 VA: 0x15D5870
	public BaseRaycaster get_rootRaycaster() { }

	// RVA: 0x15D5928 Offset: 0x15D1928 VA: 0x15D5928 Slot: 3
	public override string ToString() { }

	// RVA: 0x15D5AF0 Offset: 0x15D1AF0 VA: 0x15D5AF0 Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x15D5B48 Offset: 0x15D1B48 VA: 0x15D5B48 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x15D5BA0 Offset: 0x15D1BA0 VA: 0x15D5BA0 Slot: 15
	protected override void OnCanvasHierarchyChanged() { }

	// RVA: 0x15D5BAC Offset: 0x15D1BAC VA: 0x15D5BAC Slot: 12
	protected override void OnTransformParentChanged() { }

	// RVA: 0x15D5BB8 Offset: 0x15D1BB8 VA: 0x15D5BB8
	protected void .ctor() { }
}


// Namespace: UnityEngine.EventSystems
[RequireComponent(typeof(Camera))]
public class Physics2DRaycaster : PhysicsRaycaster // TypeDefIndex: 6542
{
	// Fields
	private RaycastHit2D[] m_Hits; // 0x48

	// Methods

	// RVA: 0x15D5BC8 Offset: 0x15D1BC8 VA: 0x15D5BC8
	protected void .ctor() { }

	// RVA: 0x15D5C18 Offset: 0x15D1C18 VA: 0x15D5C18 Slot: 17
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList) { }
}


// Namespace: 
private class PhysicsRaycaster.RaycastHitComparer : IComparer<RaycastHit> // TypeDefIndex: 6543
{
	// Fields
	public static PhysicsRaycaster.RaycastHitComparer instance; // 0x0

	// Methods

	// RVA: 0x15D6B88 Offset: 0x15D2B88 VA: 0x15D6B88 Slot: 4
	public int Compare(RaycastHit x, RaycastHit y) { }

	// RVA: 0x15D6BC8 Offset: 0x15D2BC8 VA: 0x15D6BC8
	public void .ctor() { }

	// RVA: 0x15D6BD0 Offset: 0x15D2BD0 VA: 0x15D6BD0
	private static void .cctor() { }
}


// Namespace: UnityEngine.EventSystems
[RequireComponent(typeof(Camera))]
public class PhysicsRaycaster : BaseRaycaster // TypeDefIndex: 6544
{
	// Fields
	protected const int kNoEventMaskSet = -1;
	protected Camera m_EventCamera; // 0x28
	[SerializeField]
	protected LayerMask m_EventMask; // 0x30
	[SerializeField]
	protected int m_MaxRayIntersections; // 0x34
	protected int m_LastMaxRayIntersections; // 0x38
	private RaycastHit[] m_Hits; // 0x40

	// Properties
	public override Camera eventCamera { get; }
	public virtual int depth { get; }
	public int finalEventMask { get; }
	public LayerMask eventMask { get; set; }
	public int maxRayIntersections { get; set; }

	// Methods

	// RVA: 0x15D5BF0 Offset: 0x15D1BF0 VA: 0x15D5BF0
	protected void .ctor() { }

	// RVA: 0x15D6648 Offset: 0x15D2648 VA: 0x15D6648 Slot: 18
	public override Camera get_eventCamera() { }

	// RVA: 0x15D6720 Offset: 0x15D2720 VA: 0x15D6720 Slot: 22
	public virtual int get_depth() { }

	// RVA: 0x15D6584 Offset: 0x15D2584 VA: 0x15D6584
	public int get_finalEventMask() { }

	// RVA: 0x15D67E4 Offset: 0x15D27E4 VA: 0x15D67E4
	public LayerMask get_eventMask() { }

	// RVA: 0x15D67EC Offset: 0x15D27EC VA: 0x15D67EC
	public void set_eventMask(LayerMask value) { }

	// RVA: 0x15D67F4 Offset: 0x15D27F4 VA: 0x15D67F4
	public int get_maxRayIntersections() { }

	// RVA: 0x15D67FC Offset: 0x15D27FC VA: 0x15D67FC
	public void set_maxRayIntersections(int value) { }

	// RVA: 0x15D6288 Offset: 0x15D2288 VA: 0x15D6288
	protected bool ComputeRayAndDistance(PointerEventData eventData, ref Ray ray, ref int eventDisplayIndex, ref float distanceToClipPlane) { }

	// RVA: 0x15D6804 Offset: 0x15D2804 VA: 0x15D6804 Slot: 17
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList) { }
}


// Namespace: UnityEngine.EventSystems
public struct RaycastResult // TypeDefIndex: 6545
{
	// Fields
	private GameObject m_GameObject; // 0x0
	public BaseRaycaster module; // 0x8
	public float distance; // 0x10
	public float index; // 0x14
	public int depth; // 0x18
	public int sortingGroupID; // 0x1C
	public int sortingGroupOrder; // 0x20
	public int sortingLayer; // 0x24
	public int sortingOrder; // 0x28
	public Vector3 worldPosition; // 0x2C
	public Vector3 worldNormal; // 0x38
	public Vector2 screenPosition; // 0x44
	public int displayIndex; // 0x4C

	// Properties
	public GameObject gameObject { get; set; }
	public bool isValid { get; }

	// Methods

	// RVA: 0x15D6C2C Offset: 0x15D2C2C VA: 0x15D6C2C
	public GameObject get_gameObject() { }

	// RVA: 0x15D6C34 Offset: 0x15D2C34 VA: 0x15D6C34
	public void set_gameObject(GameObject value) { }

	// RVA: 0x15D6C3C Offset: 0x15D2C3C VA: 0x15D6C3C
	public bool get_isValid() { }

	// RVA: 0x15D6CD4 Offset: 0x15D2CD4 VA: 0x15D6CD4 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.EventSystems
public abstract class UIBehaviour : MonoBehaviour // TypeDefIndex: 6546
{
	// Methods

	// RVA: 0x15D7104 Offset: 0x15D3104 VA: 0x15D7104 Slot: 4
	protected virtual void Awake() { }

	// RVA: 0x15D5B44 Offset: 0x15D1B44 VA: 0x15D5B44 Slot: 5
	protected virtual void OnEnable() { }

	// RVA: 0x15D7108 Offset: 0x15D3108 VA: 0x15D7108 Slot: 6
	protected virtual void Start() { }

	// RVA: 0x15D5B9C Offset: 0x15D1B9C VA: 0x15D5B9C Slot: 7
	protected virtual void OnDisable() { }

	// RVA: 0x15D710C Offset: 0x15D310C VA: 0x15D710C Slot: 8
	protected virtual void OnDestroy() { }

	// RVA: 0x15D7110 Offset: 0x15D3110 VA: 0x15D7110 Slot: 9
	public virtual bool IsActive() { }

	// RVA: 0x15D7118 Offset: 0x15D3118 VA: 0x15D7118 Slot: 10
	protected virtual void OnRectTransformDimensionsChange() { }

	// RVA: 0x15D711C Offset: 0x15D311C VA: 0x15D711C Slot: 11
	protected virtual void OnBeforeTransformParentChanged() { }

	// RVA: 0x15D5BB4 Offset: 0x15D1BB4 VA: 0x15D5BB4 Slot: 12
	protected virtual void OnTransformParentChanged() { }

	// RVA: 0x15D7120 Offset: 0x15D3120 VA: 0x15D7120 Slot: 13
	protected virtual void OnDidApplyAnimationProperties() { }

	// RVA: 0x15D7124 Offset: 0x15D3124 VA: 0x15D7124 Slot: 14
	protected virtual void OnCanvasGroupChanged() { }

	// RVA: 0x15D5BA8 Offset: 0x15D1BA8 VA: 0x15D5BA8 Slot: 15
	protected virtual void OnCanvasHierarchyChanged() { }

	// RVA: 0x15D7128 Offset: 0x15D3128 VA: 0x15D7128 Slot: 16
	public bool IsDestroyed() { }

	// RVA: 0x15D5BC0 Offset: 0x15D1BC0 VA: 0x15D5BC0
	protected void .ctor() { }
}


// Namespace: 
private struct <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 // TypeDefIndex: 6547
{}


// Namespace: 
[CompilerGenerated]
internal sealed class <PrivateImplementationDetails> // TypeDefIndex: 6548
{
	// Fields
	internal static readonly <PrivateImplementationDetails>.__StaticArrayInitTypeSize=12 1C3635C112D556F4C11A4FE6BDE6ED3F126C4B2B546811BDB64DE7BDED3A05CB /*Metadata offset 0x38E6D0*/; // 0x0
}
