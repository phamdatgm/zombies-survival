// Namespace: 
internal class <Module> // TypeDefIndex: 7663
{}


// Namespace: UnityEngine
public enum FontStyle // TypeDefIndex: 7664
{
	// Fields
	public int value__; // 0x0
	public const FontStyle Normal = 0;
	public const FontStyle Bold = 1;
	public const FontStyle Italic = 2;
	public const FontStyle BoldAndItalic = 3;
}


// Namespace: UnityEngine
[Flags]
internal enum TextGenerationError // TypeDefIndex: 7665
{
	// Fields
	public int value__; // 0x0
	public const TextGenerationError None = 0;
	public const TextGenerationError CustomSizeOnNonDynamicFont = 1;
	public const TextGenerationError CustomStyleOnNonDynamicFont = 2;
	public const TextGenerationError NoFont = 4;
}


// Namespace: UnityEngine
public struct TextGenerationSettings // TypeDefIndex: 7666
{
	// Fields
	public Font font; // 0x0
	public Color color; // 0x8
	public int fontSize; // 0x18
	public float lineSpacing; // 0x1C
	public bool richText; // 0x20
	public float scaleFactor; // 0x24
	public FontStyle fontStyle; // 0x28
	public TextAnchor textAnchor; // 0x2C
	public bool alignByGeometry; // 0x30
	public bool resizeTextForBestFit; // 0x31
	public int resizeTextMinSize; // 0x34
	public int resizeTextMaxSize; // 0x38
	public bool updateBounds; // 0x3C
	public VerticalWrapMode verticalOverflow; // 0x40
	public HorizontalWrapMode horizontalOverflow; // 0x44
	public Vector2 generationExtents; // 0x48
	public Vector2 pivot; // 0x50
	public bool generateOutOfBounds; // 0x58

	// Methods

	// RVA: 0x144B56C Offset: 0x144756C VA: 0x144B56C
	private bool CompareColors(Color left, Color right) { }

	// RVA: 0x144B6A4 Offset: 0x14476A4 VA: 0x144B6A4
	private bool CompareVector2(Vector2 left, Vector2 right) { }

	// RVA: 0x144B76C Offset: 0x144776C VA: 0x144B76C
	public bool Equals(TextGenerationSettings other) { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public sealed class TextGenerator : IDisposable // TypeDefIndex: 7667
{
	// Fields
	internal IntPtr m_Ptr; // 0x10
	private string m_LastString; // 0x18
	private TextGenerationSettings m_LastSettings; // 0x20
	private bool m_HasGenerated; // 0x80
	private TextGenerationError m_LastValid; // 0x84
	private readonly List<UIVertex> m_Verts; // 0x88
	private readonly List<UICharInfo> m_Characters; // 0x90
	private readonly List<UILineInfo> m_Lines; // 0x98
	private bool m_CachedVerts; // 0xA0
	private bool m_CachedCharacters; // 0xA1
	private bool m_CachedLines; // 0xA2

	// Properties
	public int characterCountVisible { get; }
	public IList<UIVertex> verts { get; }
	public IList<UICharInfo> characters { get; }
	public IList<UILineInfo> lines { get; }
	public Rect rectExtents { get; }
	public int characterCount { get; }
	public int lineCount { get; }

	// Methods

	// RVA: 0x144B98C Offset: 0x144798C VA: 0x144B98C
	public void .ctor() { }

	// RVA: 0x144B994 Offset: 0x1447994 VA: 0x144B994
	public void .ctor(int initialCapacity) { }

	// RVA: 0x144BB08 Offset: 0x1447B08 VA: 0x144BB08 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x144BC18 Offset: 0x1447C18 VA: 0x144BC18 Slot: 4
	private void System.IDisposable.Dispose() { }

	// RVA: 0x144BCB0 Offset: 0x1447CB0 VA: 0x144BCB0
	public int get_characterCountVisible() { }

	// RVA: 0x144BD30 Offset: 0x1447D30 VA: 0x144BD30
	private TextGenerationSettings ValidatedSettings(TextGenerationSettings settings) { }

	// RVA: 0x144C01C Offset: 0x144801C VA: 0x144C01C
	public void Invalidate() { }

	// RVA: 0x144C024 Offset: 0x1448024 VA: 0x144C024
	public void GetCharacters(List<UICharInfo> characters) { }

	// RVA: 0x144C0AC Offset: 0x14480AC VA: 0x144C0AC
	public void GetLines(List<UILineInfo> lines) { }

	// RVA: 0x144C134 Offset: 0x1448134 VA: 0x144C134
	public void GetVertices(List<UIVertex> vertices) { }

	// RVA: 0x144C1BC Offset: 0x14481BC VA: 0x144C1BC
	public float GetPreferredWidth(string str, TextGenerationSettings settings) { }

	// RVA: 0x144C2C8 Offset: 0x14482C8 VA: 0x144C2C8
	public float GetPreferredHeight(string str, TextGenerationSettings settings) { }

	// RVA: 0x144C328 Offset: 0x1448328 VA: 0x144C328
	public bool PopulateWithErrors(string str, TextGenerationSettings settings, GameObject context) { }

	// RVA: 0x144C220 Offset: 0x1448220 VA: 0x144C220
	public bool Populate(string str, TextGenerationSettings settings) { }

	// RVA: 0x144C4E0 Offset: 0x14484E0 VA: 0x144C4E0
	private TextGenerationError PopulateWithError(string str, TextGenerationSettings settings) { }

	// RVA: 0x144C570 Offset: 0x1448570 VA: 0x144C570
	private TextGenerationError PopulateAlways(string str, TextGenerationSettings settings) { }

	// RVA: 0x144C820 Offset: 0x1448820 VA: 0x144C820
	public IList<UIVertex> get_verts() { }

	// RVA: 0x144C87C Offset: 0x144887C VA: 0x144C87C
	public IList<UICharInfo> get_characters() { }

	// RVA: 0x144C8D8 Offset: 0x14488D8 VA: 0x144C8D8
	public IList<UILineInfo> get_lines() { }

	// RVA: 0x144C270 Offset: 0x1448270 VA: 0x144C270
	public Rect get_rectExtents() { }

	// RVA: 0x144BCF4 Offset: 0x1447CF4 VA: 0x144BCF4
	public int get_characterCount() { }

	// RVA: 0x144C978 Offset: 0x1448978 VA: 0x144C978
	public int get_lineCount() { }

	// RVA: 0x144BAE0 Offset: 0x1447AE0 VA: 0x144BAE0
	private static IntPtr Internal_Create() { }

	// RVA: 0x144BC74 Offset: 0x1447C74 VA: 0x144BC74
	private static void Internal_Destroy(IntPtr ptr) { }

	// RVA: 0x144C9B4 Offset: 0x14489B4 VA: 0x144C9B4
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error) { }

	// RVA: 0x144C678 Offset: 0x1448678 VA: 0x144C678
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, VerticalWrapMode verticalOverFlow, HorizontalWrapMode horizontalOverflow, bool updateBounds, TextAnchor anchor, Vector2 extents, Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, out TextGenerationError error) { }

	// RVA: 0x144C178 Offset: 0x1448178 VA: 0x144C178
	private void GetVerticesInternal(object vertices) { }

	// RVA: 0x144C068 Offset: 0x1448068 VA: 0x144C068
	private void GetCharactersInternal(object characters) { }

	// RVA: 0x144C0F0 Offset: 0x14480F0 VA: 0x144C0F0
	private void GetLinesInternal(object lines) { }

	// RVA: 0x144C934 Offset: 0x1448934 VA: 0x144C934
	private void get_rectExtents_Injected(out Rect ret) { }

	// RVA: 0x144CB00 Offset: 0x1448B00 VA: 0x144CB00
	private bool Populate_Internal_Injected(string str, Font font, ref Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error) { }
}


// Namespace: UnityEngine
public enum TextAnchor // TypeDefIndex: 7668
{
	// Fields
	public int value__; // 0x0
	public const TextAnchor UpperLeft = 0;
	public const TextAnchor UpperCenter = 1;
	public const TextAnchor UpperRight = 2;
	public const TextAnchor MiddleLeft = 3;
	public const TextAnchor MiddleCenter = 4;
	public const TextAnchor MiddleRight = 5;
	public const TextAnchor LowerLeft = 6;
	public const TextAnchor LowerCenter = 7;
	public const TextAnchor LowerRight = 8;
}


// Namespace: UnityEngine
public enum HorizontalWrapMode // TypeDefIndex: 7669
{
	// Fields
	public int value__; // 0x0
	public const HorizontalWrapMode Wrap = 0;
	public const HorizontalWrapMode Overflow = 1;
}


// Namespace: UnityEngine
public enum VerticalWrapMode // TypeDefIndex: 7670
{
	// Fields
	public int value__; // 0x0
	public const VerticalWrapMode Truncate = 0;
	public const VerticalWrapMode Overflow = 1;
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct CharacterInfo // TypeDefIndex: 7671
{
	// Fields
	public int index; // 0x0
	[Obsolete("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead.")]
	public Rect uv; // 0x4
	[Obsolete("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead.")]
	public Rect vert; // 0x14
	[Obsolete("CharacterInfo.width is deprecated. Use advance instead.")]
	public float width; // 0x24
	public int size; // 0x28
	public FontStyle style; // 0x2C
	[Obsolete("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation.")]
	public bool flipped; // 0x30

	// Properties
	public int advance { get; }
	public int glyphWidth { get; }
	public int glyphHeight { get; }
	public int minY { get; }
	public int maxY { get; }
	public int minX { get; }
	public int maxX { get; }
	internal Vector2 uvBottomLeftUnFlipped { get; }
	internal Vector2 uvBottomRightUnFlipped { get; }
	internal Vector2 uvTopRightUnFlipped { get; }
	internal Vector2 uvTopLeftUnFlipped { get; }
	public Vector2 uvBottomLeft { get; }
	public Vector2 uvBottomRight { get; }
	public Vector2 uvTopRight { get; }

	// Methods

	// RVA: 0x144CC30 Offset: 0x1448C30 VA: 0x144CC30
	public int get_advance() { }

	// RVA: 0x144CCE8 Offset: 0x1448CE8 VA: 0x144CCE8
	public int get_glyphWidth() { }

	// RVA: 0x144CD08 Offset: 0x1448D08 VA: 0x144CD08
	public int get_glyphHeight() { }

	// RVA: 0x144CD2C Offset: 0x1448D2C VA: 0x144CD2C
	public int get_minY() { }

	// RVA: 0x144CD54 Offset: 0x1448D54 VA: 0x144CD54
	public int get_maxY() { }

	// RVA: 0x144CD74 Offset: 0x1448D74 VA: 0x144CD74
	public int get_minX() { }

	// RVA: 0x144CD94 Offset: 0x1448D94 VA: 0x144CD94
	public int get_maxX() { }

	// RVA: 0x144CDBC Offset: 0x1448DBC VA: 0x144CDBC
	internal Vector2 get_uvBottomLeftUnFlipped() { }

	// RVA: 0x144CDC4 Offset: 0x1448DC4 VA: 0x144CDC4
	internal Vector2 get_uvBottomRightUnFlipped() { }

	// RVA: 0x144CDD4 Offset: 0x1448DD4 VA: 0x144CDD4
	internal Vector2 get_uvTopRightUnFlipped() { }

	// RVA: 0x144CDE8 Offset: 0x1448DE8 VA: 0x144CDE8
	internal Vector2 get_uvTopLeftUnFlipped() { }

	// RVA: 0x144CDF8 Offset: 0x1448DF8 VA: 0x144CDF8
	public Vector2 get_uvBottomLeft() { }

	// RVA: 0x144CE00 Offset: 0x1448E00 VA: 0x144CE00
	public Vector2 get_uvBottomRight() { }

	// RVA: 0x144CE28 Offset: 0x1448E28 VA: 0x144CE28
	public Vector2 get_uvTopRight() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct UICharInfo // TypeDefIndex: 7672
{
	// Fields
	public Vector2 cursorPos; // 0x0
	public float charWidth; // 0x8
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct UILineInfo // TypeDefIndex: 7673
{
	// Fields
	public int startCharIdx; // 0x0
	public int height; // 0x4
	public float topY; // 0x8
	public float leading; // 0xC
}


// Namespace: UnityEngine
[UsedByNativeCode]
public struct UIVertex // TypeDefIndex: 7674
{
	// Fields
	public Vector3 position; // 0x0
	public Vector3 normal; // 0xC
	public Vector4 tangent; // 0x18
	public Color32 color; // 0x28
	public Vector4 uv0; // 0x2C
	public Vector4 uv1; // 0x3C
	public Vector4 uv2; // 0x4C
	public Vector4 uv3; // 0x5C
	private static readonly Color32 s_DefaultColor; // 0x0
	private static readonly Vector4 s_DefaultTangent; // 0x4
	public static UIVertex simpleVert; // 0x14

	// Methods

	// RVA: 0x144CE3C Offset: 0x1448E3C VA: 0x144CE3C
	private static void .cctor() { }
}


// Namespace: 
public sealed class Font.FontTextureRebuildCallback : MulticastDelegate // TypeDefIndex: 7675
{
	// Methods

	// RVA: 0x144D45C Offset: 0x144945C VA: 0x144D45C
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x144D4E4 Offset: 0x14494E4 VA: 0x144D4E4 Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
public sealed class Font : Object // TypeDefIndex: 7676
{
	// Fields
	[CompilerGenerated]
	private static Action<Font> textureRebuilt; // 0x0
	[CompilerGenerated]
	private Font.FontTextureRebuildCallback m_FontTextureRebuildCallback; // 0x18

	// Properties
	public Material material { get; }
	public bool dynamic { get; }
	public int fontSize { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x144CFA8 Offset: 0x1448FA8 VA: 0x144CFA8
	public static void add_textureRebuilt(Action<Font> value) { }

	[CompilerGenerated]
	// RVA: 0x144D074 Offset: 0x1449074 VA: 0x144D074
	public static void remove_textureRebuilt(Action<Font> value) { }

	// RVA: 0x144D140 Offset: 0x1449140 VA: 0x144D140
	public Material get_material() { }

	// RVA: 0x144BFE0 Offset: 0x1447FE0 VA: 0x144BFE0
	public bool get_dynamic() { }

	// RVA: 0x144D17C Offset: 0x144917C VA: 0x144D17C
	public int get_fontSize() { }

	// RVA: 0x144D1B8 Offset: 0x14491B8 VA: 0x144D1B8
	public void .ctor() { }

	[RequiredByNativeCode]
	// RVA: 0x144D280 Offset: 0x1449280 VA: 0x144D280
	internal static void InvokeTextureRebuilt_Internal(Font font) { }

	// RVA: 0x144D30C Offset: 0x144930C VA: 0x144D30C
	public bool HasCharacter(char c) { }

	// RVA: 0x144D350 Offset: 0x1449350 VA: 0x144D350
	private bool HasCharacter(int c) { }

	// RVA: 0x144D23C Offset: 0x144923C VA: 0x144D23C
	private static void Internal_CreateFont(Font self, string name) { }

	// RVA: 0x144D394 Offset: 0x1449394 VA: 0x144D394
	public bool GetCharacterInfo(char ch, out CharacterInfo info, int size, FontStyle style) { }

	// RVA: 0x144D400 Offset: 0x1449400 VA: 0x144D400
	public void RequestCharactersInTexture(string characters, int size, FontStyle style) { }
}
