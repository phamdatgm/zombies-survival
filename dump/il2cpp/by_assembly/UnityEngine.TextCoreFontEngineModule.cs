// Namespace: 
internal class <Module> // TypeDefIndex: 7614
{}


// Namespace: UnityEngine.TextCore
[UsedByNativeCode]
[Serializable]
public struct FaceInfo // TypeDefIndex: 7615
{
	// Fields
	[SerializeField]
	private int m_FaceIndex; // 0x0
	[SerializeField]
	private string m_FamilyName; // 0x8
	[SerializeField]
	private string m_StyleName; // 0x10
	[SerializeField]
	private int m_PointSize; // 0x18
	[SerializeField]
	private float m_Scale; // 0x1C
	[SerializeField]
	private int m_UnitsPerEM; // 0x20
	[SerializeField]
	private float m_LineHeight; // 0x24
	[SerializeField]
	private float m_AscentLine; // 0x28
	[SerializeField]
	private float m_CapLine; // 0x2C
	[SerializeField]
	private float m_MeanLine; // 0x30
	[SerializeField]
	private float m_Baseline; // 0x34
	[SerializeField]
	private float m_DescentLine; // 0x38
	[SerializeField]
	private float m_SuperscriptOffset; // 0x3C
	[SerializeField]
	private float m_SuperscriptSize; // 0x40
	[SerializeField]
	private float m_SubscriptOffset; // 0x44
	[SerializeField]
	private float m_SubscriptSize; // 0x48
	[SerializeField]
	private float m_UnderlineOffset; // 0x4C
	[SerializeField]
	private float m_UnderlineThickness; // 0x50
	[SerializeField]
	private float m_StrikethroughOffset; // 0x54
	[SerializeField]
	private float m_StrikethroughThickness; // 0x58
	[SerializeField]
	private float m_TabWidth; // 0x5C

	// Properties
	internal int faceIndex { get; }
	public string familyName { get; }
	public string styleName { get; }
	public int pointSize { get; }
	public float scale { get; set; }
	public float lineHeight { get; }
	public float ascentLine { get; }
	public float capLine { get; set; }
	public float meanLine { get; set; }
	public float baseline { get; }
	public float descentLine { get; }
	public float superscriptOffset { get; }
	public float superscriptSize { get; }
	public float subscriptOffset { get; }
	public float subscriptSize { get; }
	public float underlineOffset { get; }
	public float underlineThickness { get; }
	public float strikethroughOffset { get; set; }
	public float tabWidth { get; }

	// Methods

	// RVA: 0x14193C0 Offset: 0x14153C0 VA: 0x14193C0
	internal int get_faceIndex() { }

	// RVA: 0x14193C8 Offset: 0x14153C8 VA: 0x14193C8
	public string get_familyName() { }

	// RVA: 0x14193D0 Offset: 0x14153D0 VA: 0x14193D0
	public string get_styleName() { }

	// RVA: 0x14193D8 Offset: 0x14153D8 VA: 0x14193D8
	public int get_pointSize() { }

	// RVA: 0x14193E0 Offset: 0x14153E0 VA: 0x14193E0
	public float get_scale() { }

	// RVA: 0x14193E8 Offset: 0x14153E8 VA: 0x14193E8
	public void set_scale(float value) { }

	// RVA: 0x14193F0 Offset: 0x14153F0 VA: 0x14193F0
	public float get_lineHeight() { }

	// RVA: 0x14193F8 Offset: 0x14153F8 VA: 0x14193F8
	public float get_ascentLine() { }

	// RVA: 0x1419400 Offset: 0x1415400 VA: 0x1419400
	public float get_capLine() { }

	// RVA: 0x1419408 Offset: 0x1415408 VA: 0x1419408
	public void set_capLine(float value) { }

	// RVA: 0x1419410 Offset: 0x1415410 VA: 0x1419410
	public float get_meanLine() { }

	// RVA: 0x1419418 Offset: 0x1415418 VA: 0x1419418
	public void set_meanLine(float value) { }

	// RVA: 0x1419420 Offset: 0x1415420 VA: 0x1419420
	public float get_baseline() { }

	// RVA: 0x1419428 Offset: 0x1415428 VA: 0x1419428
	public float get_descentLine() { }

	// RVA: 0x1419430 Offset: 0x1415430 VA: 0x1419430
	public float get_superscriptOffset() { }

	// RVA: 0x1419438 Offset: 0x1415438 VA: 0x1419438
	public float get_superscriptSize() { }

	// RVA: 0x1419440 Offset: 0x1415440 VA: 0x1419440
	public float get_subscriptOffset() { }

	// RVA: 0x1419448 Offset: 0x1415448 VA: 0x1419448
	public float get_subscriptSize() { }

	// RVA: 0x1419450 Offset: 0x1415450 VA: 0x1419450
	public float get_underlineOffset() { }

	// RVA: 0x1419458 Offset: 0x1415458 VA: 0x1419458
	public float get_underlineThickness() { }

	// RVA: 0x1419460 Offset: 0x1415460 VA: 0x1419460
	public float get_strikethroughOffset() { }

	// RVA: 0x1419468 Offset: 0x1415468 VA: 0x1419468
	public void set_strikethroughOffset(float value) { }

	// RVA: 0x1419470 Offset: 0x1415470 VA: 0x1419470
	public float get_tabWidth() { }
}


// Namespace: UnityEngine.TextCore
public enum GlyphClassDefinitionType // TypeDefIndex: 7616
{
	// Fields
	public int value__; // 0x0
	public const GlyphClassDefinitionType Undefined = 0;
	public const GlyphClassDefinitionType Base = 1;
	public const GlyphClassDefinitionType Ligature = 2;
	public const GlyphClassDefinitionType Mark = 3;
	public const GlyphClassDefinitionType Component = 4;
}


// Namespace: UnityEngine.TextCore
[UsedByNativeCode]
[Serializable]
public struct GlyphRect : IEquatable<GlyphRect> // TypeDefIndex: 7617
{
	// Fields
	[SerializeField]
	private int m_X; // 0x0
	[SerializeField]
	private int m_Y; // 0x4
	[SerializeField]
	private int m_Width; // 0x8
	[SerializeField]
	private int m_Height; // 0xC
	private static readonly GlyphRect s_ZeroGlyphRect; // 0x0

	// Properties
	public int x { get; }
	public int y { get; }
	public int width { get; }
	public int height { get; }
	public static GlyphRect zero { get; }

	// Methods

	// RVA: 0x1419478 Offset: 0x1415478 VA: 0x1419478
	public int get_x() { }

	// RVA: 0x1419480 Offset: 0x1415480 VA: 0x1419480
	public int get_y() { }

	// RVA: 0x1419488 Offset: 0x1415488 VA: 0x1419488
	public int get_width() { }

	// RVA: 0x1419490 Offset: 0x1415490 VA: 0x1419490
	public int get_height() { }

	// RVA: 0x1419498 Offset: 0x1415498 VA: 0x1419498
	public static GlyphRect get_zero() { }

	// RVA: 0x14194F0 Offset: 0x14154F0 VA: 0x14194F0
	public void .ctor(int x, int y, int width, int height) { }

	// RVA: 0x14194FC Offset: 0x14154FC VA: 0x14194FC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1419560 Offset: 0x1415560 VA: 0x1419560 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x14195D8 Offset: 0x14155D8 VA: 0x14195D8 Slot: 4
	public bool Equals(GlyphRect other) { }

	// RVA: 0x141966C Offset: 0x141566C VA: 0x141966C
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore
[UsedByNativeCode]
[Serializable]
public struct GlyphMetrics : IEquatable<GlyphMetrics> // TypeDefIndex: 7618
{
	// Fields
	[SerializeField]
	private float m_Width; // 0x0
	[SerializeField]
	private float m_Height; // 0x4
	[SerializeField]
	private float m_HorizontalBearingX; // 0x8
	[SerializeField]
	private float m_HorizontalBearingY; // 0xC
	[SerializeField]
	private float m_HorizontalAdvance; // 0x10

	// Properties
	public float width { get; }
	public float height { get; }
	public float horizontalBearingX { get; }
	public float horizontalBearingY { get; }
	public float horizontalAdvance { get; }

	// Methods

	// RVA: 0x14196B4 Offset: 0x14156B4 VA: 0x14196B4
	public float get_width() { }

	// RVA: 0x14196BC Offset: 0x14156BC VA: 0x14196BC
	public float get_height() { }

	// RVA: 0x14196C4 Offset: 0x14156C4 VA: 0x14196C4
	public float get_horizontalBearingX() { }

	// RVA: 0x14196CC Offset: 0x14156CC VA: 0x14196CC
	public float get_horizontalBearingY() { }

	// RVA: 0x14196D4 Offset: 0x14156D4 VA: 0x14196D4
	public float get_horizontalAdvance() { }

	// RVA: 0x14196DC Offset: 0x14156DC VA: 0x14196DC
	public void .ctor(float width, float height, float bearingX, float bearingY, float advance) { }

	// RVA: 0x14196EC Offset: 0x14156EC VA: 0x14196EC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1419758 Offset: 0x1415758 VA: 0x1419758 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x14197D8 Offset: 0x14157D8 VA: 0x14197D8 Slot: 4
	public bool Equals(GlyphMetrics other) { }
}


// Namespace: UnityEngine.TextCore
[UsedByNativeCode]
[Serializable]
public class Glyph // TypeDefIndex: 7619
{
	// Fields
	[SerializeField]
	private uint m_Index; // 0x10
	[SerializeField]
	private GlyphMetrics m_Metrics; // 0x14
	[SerializeField]
	private GlyphRect m_GlyphRect; // 0x28
	[SerializeField]
	private float m_Scale; // 0x38
	[SerializeField]
	private int m_AtlasIndex; // 0x3C
	[SerializeField]
	private GlyphClassDefinitionType m_ClassDefinitionType; // 0x40

	// Properties
	public uint index { get; }
	public GlyphMetrics metrics { get; }
	public GlyphRect glyphRect { get; }
	public float scale { get; }
	public int atlasIndex { get; set; }

	// Methods

	// RVA: 0x141987C Offset: 0x141587C VA: 0x141987C
	public uint get_index() { }

	// RVA: 0x1419884 Offset: 0x1415884 VA: 0x1419884
	public GlyphMetrics get_metrics() { }

	// RVA: 0x1419898 Offset: 0x1415898 VA: 0x1419898
	public GlyphRect get_glyphRect() { }

	// RVA: 0x14198A4 Offset: 0x14158A4 VA: 0x14198A4
	public float get_scale() { }

	// RVA: 0x14198AC Offset: 0x14158AC VA: 0x14198AC
	public int get_atlasIndex() { }

	// RVA: 0x14198B4 Offset: 0x14158B4 VA: 0x14198B4
	public void set_atlasIndex(int value) { }

	// RVA: 0x14198BC Offset: 0x14158BC VA: 0x14198BC
	public void .ctor() { }

	// RVA: 0x14198E4 Offset: 0x14158E4 VA: 0x14198E4
	internal void .ctor(GlyphMarshallingStruct glyphStruct) { }

	// RVA: 0x1419970 Offset: 0x1415970 VA: 0x1419970
	public void .ctor(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex) { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Flags]
public enum GlyphLoadFlags // TypeDefIndex: 7620
{
	// Fields
	public int value__; // 0x0
	public const GlyphLoadFlags LOAD_DEFAULT = 0;
	public const GlyphLoadFlags LOAD_NO_SCALE = 1;
	public const GlyphLoadFlags LOAD_NO_HINTING = 2;
	public const GlyphLoadFlags LOAD_RENDER = 4;
	public const GlyphLoadFlags LOAD_NO_BITMAP = 8;
	public const GlyphLoadFlags LOAD_FORCE_AUTOHINT = 32;
	public const GlyphLoadFlags LOAD_MONOCHROME = 4096;
	public const GlyphLoadFlags LOAD_NO_AUTOHINT = 32768;
	public const GlyphLoadFlags LOAD_COLOR = 1048576;
	public const GlyphLoadFlags LOAD_COMPUTE_METRICS = 2097152;
	public const GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY = 4194304;
}


// Namespace: UnityEngine.TextCore.LowLevel
public enum FontEngineError // TypeDefIndex: 7621
{
	// Fields
	public int value__; // 0x0
	public const FontEngineError Success = 0;
	public const FontEngineError Invalid_File_Path = 1;
	public const FontEngineError Invalid_File_Format = 2;
	public const FontEngineError Invalid_File_Structure = 3;
	public const FontEngineError Invalid_File = 4;
	public const FontEngineError Invalid_Table = 8;
	public const FontEngineError Invalid_Glyph_Index = 16;
	public const FontEngineError Invalid_Character_Code = 17;
	public const FontEngineError Invalid_Pixel_Size = 23;
	public const FontEngineError Invalid_Library = 33;
	public const FontEngineError Invalid_Face = 35;
	public const FontEngineError Invalid_Library_or_Face = 41;
	public const FontEngineError Atlas_Generation_Cancelled = 100;
	public const FontEngineError Invalid_SharedTextureData = 101;
	public const FontEngineError OpenTypeLayoutLookup_Mismatch = 116;
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
public enum GlyphRenderMode // TypeDefIndex: 7622
{
	// Fields
	public int value__; // 0x0
	public const GlyphRenderMode SMOOTH_HINTED = 4121;
	public const GlyphRenderMode SMOOTH = 4117;
	public const GlyphRenderMode COLOR_HINTED = 69656;
	public const GlyphRenderMode COLOR = 69652;
	public const GlyphRenderMode RASTER_HINTED = 4122;
	public const GlyphRenderMode RASTER = 4118;
	public const GlyphRenderMode SDF = 4134;
	public const GlyphRenderMode SDF8 = 8230;
	public const GlyphRenderMode SDF16 = 16422;
	public const GlyphRenderMode SDF32 = 32806;
	public const GlyphRenderMode SDFAA_HINTED = 4169;
	public const GlyphRenderMode SDFAA = 4165;
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
public enum GlyphPackingMode // TypeDefIndex: 7623
{
	// Fields
	public int value__; // 0x0
	public const GlyphPackingMode BestShortSideFit = 0;
	public const GlyphPackingMode BestLongSideFit = 1;
	public const GlyphPackingMode BestAreaFit = 2;
	public const GlyphPackingMode BottomLeftRule = 3;
	public const GlyphPackingMode ContactPointRule = 4;
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
internal struct FontReference // TypeDefIndex: 7624
{
	// Fields
	public string familyName; // 0x0
	public string styleName; // 0x8
	public int faceIndex; // 0x10
	public string filePath; // 0x18
}


// Namespace: UnityEngine.TextCore.LowLevel
public sealed class FontEngine // TypeDefIndex: 7625
{
	// Fields
	private static Glyph[] s_Glyphs; // 0x0
	private static uint[] s_GlyphIndexes_MarshallingArray_A; // 0x8
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_IN; // 0x10
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_OUT; // 0x18
	private static GlyphRect[] s_FreeGlyphRects; // 0x20
	private static GlyphRect[] s_UsedGlyphRects; // 0x28
	private static GlyphPairAdjustmentRecord[] s_PairAdjustmentRecords_MarshallingArray; // 0x30
	private static Dictionary<uint, Glyph> s_GlyphLookupDictionary; // 0x38

	// Methods

	// RVA: 0x14199E0 Offset: 0x14159E0 VA: 0x14199E0
	public static FontEngineError LoadFontFace(string filePath, int pointSize, int faceIndex) { }

	// RVA: 0x1419A6C Offset: 0x1415A6C VA: 0x1419A6C
	private static int LoadFontFace_With_Size_And_FaceIndex_Internal(string filePath, int pointSize, int faceIndex) { }

	// RVA: 0x1419AC0 Offset: 0x1415AC0 VA: 0x1419AC0
	public static FontEngineError LoadFontFace(Font font, int pointSize, int faceIndex) { }

	// RVA: 0x1419B4C Offset: 0x1415B4C VA: 0x1419B4C
	private static int LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(Font font, int pointSize, int faceIndex) { }

	// RVA: 0x1419BA0 Offset: 0x1415BA0 VA: 0x1419BA0
	public static FontEngineError LoadFontFace(string familyName, string styleName, int pointSize) { }

	// RVA: 0x1419C2C Offset: 0x1415C2C VA: 0x1419C2C
	private static int LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(string familyName, string styleName, int pointSize) { }

	// RVA: 0x1419C80 Offset: 0x1415C80 VA: 0x1419C80
	internal static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef) { }

	// RVA: 0x1419D0C Offset: 0x1415D0C VA: 0x1419D0C
	private static bool TryGetSystemFontReference_Internal(string familyName, string styleName, out FontReference fontRef) { }

	// RVA: 0x1419D60 Offset: 0x1415D60 VA: 0x1419D60
	public static FaceInfo GetFaceInfo() { }

	// RVA: 0x1419E00 Offset: 0x1415E00 VA: 0x1419E00
	private static int GetFaceInfo_Internal(ref FaceInfo faceInfo) { }

	// RVA: 0x1419E3C Offset: 0x1415E3C VA: 0x1419E3C
	internal static uint GetGlyphIndex(uint unicode) { }

	// RVA: 0x1419E78 Offset: 0x1415E78 VA: 0x1419E78
	public static bool TryGetGlyphWithUnicodeValue(uint unicode, GlyphLoadFlags flags, out Glyph glyph) { }

	// RVA: 0x1419FBC Offset: 0x1415FBC VA: 0x1419FBC
	private static bool TryGetGlyphWithUnicodeValue_Internal(uint unicode, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct) { }

	// RVA: 0x141A010 Offset: 0x1416010 VA: 0x141A010
	public static bool TryGetGlyphWithIndexValue(uint glyphIndex, GlyphLoadFlags flags, out Glyph glyph) { }

	// RVA: 0x141A154 Offset: 0x1416154 VA: 0x141A154
	private static bool TryGetGlyphWithIndexValue_Internal(uint glyphIndex, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct) { }

	// RVA: 0x141A1A8 Offset: 0x14161A8 VA: 0x141A1A8
	internal static void SetTextureUploadMode(bool shouldUploadImmediately) { }

	// RVA: 0x141A1E4 Offset: 0x14161E4 VA: 0x141A1E4
	internal static bool TryAddGlyphToTexture(uint glyphIndex, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph glyph) { }

	// RVA: 0x141A72C Offset: 0x141672C VA: 0x141A72C
	private static bool TryAddGlyphToTexture_Internal(uint glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct glyph) { }

	// RVA: 0x141A7C8 Offset: 0x14167C8 VA: 0x141A7C8
	internal static bool TryAddGlyphsToTexture(List<uint> glyphIndexes, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph[] glyphs) { }

	// RVA: 0x141B08C Offset: 0x141708C VA: 0x141B08C
	private static bool TryAddGlyphsToTexture_Internal(uint[] glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, [Out] GlyphMarshallingStruct[] glyphs, ref int glyphCount) { }

	// RVA: 0x141B134 Offset: 0x1417134 VA: 0x141B134
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(uint[] glyphIndexes) { }

	// RVA: 0x141B304 Offset: 0x1417304 VA: 0x141B304
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentRecords(List<uint> glyphIndexes, out int recordCount) { }

	// RVA: 0x141B284 Offset: 0x1417284 VA: 0x141B284
	private static int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(uint[] glyphIndexes, out int recordCount) { }

	// RVA: 0x141B2C8 Offset: 0x14172C8 VA: 0x141B2C8
	private static int GetPairAdjustmentRecordsFromMarshallingArray([Out] GlyphPairAdjustmentRecord[] glyphPairAdjustmentRecords) { }

	// RVA: -1 Offset: -1
	private static void GenericListToMarshallingArray<T>(ref List<T> srcList, ref T[] dstArray) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8AD0C Offset: 0xB86D0C VA: 0xB8AD0C
	|-FontEngine.GenericListToMarshallingArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	private static void SetMarshallingArraySize<T>(ref T[] marshallingArray, int recordCount) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8AF4C Offset: 0xB86F4C VA: 0xB8AF4C
	|-FontEngine.SetMarshallingArraySize<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x141B48C Offset: 0x141748C VA: 0x141B48C
	internal static void ResetAtlasTexture(Texture2D texture) { }

	// RVA: 0x141B4C8 Offset: 0x14174C8 VA: 0x141B4C8
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.LowLevel
internal struct FontEngineUtilities // TypeDefIndex: 7626
{
	// Methods

	// RVA: 0x141B06C Offset: 0x141706C VA: 0x141B06C
	internal static int MaxValue(int a, int b, int c) { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
internal struct GlyphMarshallingStruct // TypeDefIndex: 7627
{
	// Fields
	public uint index; // 0x0
	public GlyphMetrics metrics; // 0x4
	public GlyphRect glyphRect; // 0x18
	public float scale; // 0x28
	public int atlasIndex; // 0x2C
	public GlyphClassDefinitionType classDefinitionType; // 0x30
}


// Namespace: UnityEngine.TextCore.LowLevel
[Flags]
public enum FontFeatureLookupFlags // TypeDefIndex: 7628
{
	// Fields
	public int value__; // 0x0
	public const FontFeatureLookupFlags None = 0;
	public const FontFeatureLookupFlags IgnoreLigatures = 4;
	public const FontFeatureLookupFlags IgnoreSpacingAdjustments = 256;
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
public struct GlyphValueRecord : IEquatable<GlyphValueRecord> // TypeDefIndex: 7629
{
	// Fields
	[SerializeField]
	private float m_XPlacement; // 0x0
	[SerializeField]
	private float m_YPlacement; // 0x4
	[SerializeField]
	private float m_XAdvance; // 0x8
	[SerializeField]
	private float m_YAdvance; // 0xC

	// Properties
	public float xPlacement { get; set; }
	public float yPlacement { get; set; }
	public float xAdvance { get; }
	public float yAdvance { get; }

	// Methods

	// RVA: 0x141B610 Offset: 0x1417610 VA: 0x141B610
	public float get_xPlacement() { }

	// RVA: 0x141B618 Offset: 0x1417618 VA: 0x141B618
	public void set_xPlacement(float value) { }

	// RVA: 0x141B620 Offset: 0x1417620 VA: 0x141B620
	public float get_yPlacement() { }

	// RVA: 0x141B628 Offset: 0x1417628 VA: 0x141B628
	public void set_yPlacement(float value) { }

	// RVA: 0x141B630 Offset: 0x1417630 VA: 0x141B630
	public float get_xAdvance() { }

	// RVA: 0x141B638 Offset: 0x1417638 VA: 0x141B638
	public float get_yAdvance() { }

	// RVA: 0x141B640 Offset: 0x1417640 VA: 0x141B640
	public static GlyphValueRecord op_Addition(GlyphValueRecord a, GlyphValueRecord b) { }

	// RVA: 0x141B654 Offset: 0x1417654 VA: 0x141B654 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x141B6B8 Offset: 0x14176B8 VA: 0x141B6B8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x141B730 Offset: 0x1417730 VA: 0x141B730 Slot: 4
	public bool Equals(GlyphValueRecord other) { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
public struct GlyphAdjustmentRecord : IEquatable<GlyphAdjustmentRecord> // TypeDefIndex: 7630
{
	// Fields
	[SerializeField]
	private uint m_GlyphIndex; // 0x0
	[SerializeField]
	private GlyphValueRecord m_GlyphValueRecord; // 0x4

	// Properties
	public uint glyphIndex { get; }
	public GlyphValueRecord glyphValueRecord { get; }

	// Methods

	// RVA: 0x141B7D8 Offset: 0x14177D8 VA: 0x141B7D8
	public uint get_glyphIndex() { }

	// RVA: 0x141B7E0 Offset: 0x14177E0 VA: 0x141B7E0
	public GlyphValueRecord get_glyphValueRecord() { }

	// RVA: 0x141B7EC Offset: 0x14177EC VA: 0x141B7EC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x141B858 Offset: 0x1417858 VA: 0x141B858 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x141B8D8 Offset: 0x14178D8 VA: 0x141B8D8 Slot: 4
	public bool Equals(GlyphAdjustmentRecord other) { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
public struct GlyphPairAdjustmentRecord : IEquatable<GlyphPairAdjustmentRecord> // TypeDefIndex: 7631
{
	// Fields
	[SerializeField]
	private GlyphAdjustmentRecord m_FirstAdjustmentRecord; // 0x0
	[SerializeField]
	private GlyphAdjustmentRecord m_SecondAdjustmentRecord; // 0x14
	[SerializeField]
	private FontFeatureLookupFlags m_FeatureLookupFlags; // 0x28

	// Properties
	public GlyphAdjustmentRecord firstAdjustmentRecord { get; }
	public GlyphAdjustmentRecord secondAdjustmentRecord { get; }
	public FontFeatureLookupFlags featureLookupFlags { get; }

	// Methods

	// RVA: 0x141B97C Offset: 0x141797C VA: 0x141B97C
	public GlyphAdjustmentRecord get_firstAdjustmentRecord() { }

	// RVA: 0x141B990 Offset: 0x1417990 VA: 0x141B990
	public GlyphAdjustmentRecord get_secondAdjustmentRecord() { }

	// RVA: 0x141B9A4 Offset: 0x14179A4 VA: 0x141B9A4
	public FontFeatureLookupFlags get_featureLookupFlags() { }

	// RVA: 0x141B9AC Offset: 0x14179AC VA: 0x141B9AC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x141BA18 Offset: 0x1417A18 VA: 0x141BA18 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x141BA98 Offset: 0x1417A98 VA: 0x141BA98 Slot: 4
	public bool Equals(GlyphPairAdjustmentRecord other) { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
internal struct GlyphAnchorPoint // TypeDefIndex: 7632
{
	// Fields
	[SerializeField]
	private float m_XCoordinate; // 0x0
	[SerializeField]
	private float m_YCoordinate; // 0x4

	// Properties
	public float xCoordinate { get; }
	public float yCoordinate { get; }

	// Methods

	// RVA: 0x141BB3C Offset: 0x1417B3C VA: 0x141BB3C
	public float get_xCoordinate() { }

	// RVA: 0x141BB44 Offset: 0x1417B44 VA: 0x141BB44
	public float get_yCoordinate() { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
internal struct MarkPositionAdjustment // TypeDefIndex: 7633
{
	// Fields
	[SerializeField]
	private float m_XPositionAdjustment; // 0x0
	[SerializeField]
	private float m_YPositionAdjustment; // 0x4

	// Properties
	public float xPositionAdjustment { get; }
	public float yPositionAdjustment { get; }

	// Methods

	// RVA: 0x141BB4C Offset: 0x1417B4C VA: 0x141BB4C
	public float get_xPositionAdjustment() { }

	// RVA: 0x141BB54 Offset: 0x1417B54 VA: 0x141BB54
	public float get_yPositionAdjustment() { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
internal struct MarkToBaseAdjustmentRecord // TypeDefIndex: 7634
{
	// Fields
	[SerializeField]
	private uint m_BaseGlyphID; // 0x0
	[SerializeField]
	private GlyphAnchorPoint m_BaseGlyphAnchorPoint; // 0x4
	[SerializeField]
	private uint m_MarkGlyphID; // 0xC
	[SerializeField]
	private MarkPositionAdjustment m_MarkPositionAdjustment; // 0x10

	// Properties
	public uint baseGlyphID { get; }
	public GlyphAnchorPoint baseGlyphAnchorPoint { get; }
	public uint markGlyphID { get; }
	public MarkPositionAdjustment markPositionAdjustment { get; }

	// Methods

	// RVA: 0x141BB5C Offset: 0x1417B5C VA: 0x141BB5C
	public uint get_baseGlyphID() { }

	// RVA: 0x141BB64 Offset: 0x1417B64 VA: 0x141BB64
	public GlyphAnchorPoint get_baseGlyphAnchorPoint() { }

	// RVA: 0x141BB6C Offset: 0x1417B6C VA: 0x141BB6C
	public uint get_markGlyphID() { }

	// RVA: 0x141BB74 Offset: 0x1417B74 VA: 0x141BB74
	public MarkPositionAdjustment get_markPositionAdjustment() { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
internal struct MarkToMarkAdjustmentRecord // TypeDefIndex: 7635
{
	// Fields
	[SerializeField]
	private uint m_BaseMarkGlyphID; // 0x0
	[SerializeField]
	private GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint; // 0x4
	[SerializeField]
	private uint m_CombiningMarkGlyphID; // 0xC
	[SerializeField]
	private MarkPositionAdjustment m_CombiningMarkPositionAdjustment; // 0x10

	// Properties
	public uint baseMarkGlyphID { get; }
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint { get; }
	public uint combiningMarkGlyphID { get; }
	public MarkPositionAdjustment combiningMarkPositionAdjustment { get; }

	// Methods

	// RVA: 0x141BB7C Offset: 0x1417B7C VA: 0x141BB7C
	public uint get_baseMarkGlyphID() { }

	// RVA: 0x141BB84 Offset: 0x1417B84 VA: 0x141BB84
	public GlyphAnchorPoint get_baseMarkGlyphAnchorPoint() { }

	// RVA: 0x141BB8C Offset: 0x1417B8C VA: 0x141BB8C
	public uint get_combiningMarkGlyphID() { }

	// RVA: 0x141BB94 Offset: 0x1417B94 VA: 0x141BB94
	public MarkPositionAdjustment get_combiningMarkPositionAdjustment() { }
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
internal struct MultipleSubstitutionRecord // TypeDefIndex: 7636
{
	// Fields
	[SerializeField]
	private uint m_TargetGlyphID; // 0x0
	[SerializeField]
	private uint[] m_SubstituteGlyphIDs; // 0x8
}


// Namespace: UnityEngine.TextCore.LowLevel
[UsedByNativeCode]
[Serializable]
internal struct LigatureSubstitutionRecord // TypeDefIndex: 7637
{
	// Fields
	[SerializeField]
	private uint[] m_ComponentGlyphIDs; // 0x0
	[SerializeField]
	private uint m_LigatureGlyphID; // 0x8

	// Properties
	public uint[] componentGlyphIDs { get; }
	public uint ligatureGlyphID { get; }

	// Methods

	// RVA: 0x141BB9C Offset: 0x1417B9C VA: 0x141BB9C
	public uint[] get_componentGlyphIDs() { }

	// RVA: 0x141BBA4 Offset: 0x1417BA4 VA: 0x141BBA4
	public uint get_ligatureGlyphID() { }
}
