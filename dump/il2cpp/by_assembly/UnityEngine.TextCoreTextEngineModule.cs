// Namespace: 
internal class <Module> // TypeDefIndex: 6549
{}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class Character : TextElement // TypeDefIndex: 6550
{
	// Methods

	// RVA: 0x141BBAC Offset: 0x1417BAC VA: 0x141BBAC
	public void .ctor() { }

	// RVA: 0x141BBE4 Offset: 0x1417BE4 VA: 0x141BBE4
	public void .ctor(uint unicode, FontAsset fontAsset, Glyph glyph) { }

	// RVA: 0x141BC64 Offset: 0x1417C64 VA: 0x141BC64
	internal void .ctor(uint unicode, uint glyphIndex) { }
}


// Namespace: UnityEngine.TextCore.Text
internal static class ColorUtilities // TypeDefIndex: 6551
{
	// Methods

	// RVA: 0x141BCA4 Offset: 0x1417CA4 VA: 0x141BCA4
	internal static bool CompareColors(Color32 a, Color32 b) { }

	// RVA: 0x141BCB4 Offset: 0x1417CB4 VA: 0x141BCB4
	internal static Color32 MultiplyColors(Color32 c1, Color32 c2) { }
}


// Namespace: UnityEngine.TextCore.Text
public enum TextFontWeight // TypeDefIndex: 6552
{
	// Fields
	public int value__; // 0x0
	public const TextFontWeight Thin = 100;
	public const TextFontWeight ExtraLight = 200;
	public const TextFontWeight Light = 300;
	public const TextFontWeight Regular = 400;
	public const TextFontWeight Medium = 500;
	public const TextFontWeight SemiBold = 600;
	public const TextFontWeight Bold = 700;
	public const TextFontWeight Heavy = 800;
	public const TextFontWeight Black = 900;
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public struct FontWeightPair // TypeDefIndex: 6553
{
	// Fields
	public FontAsset regularTypeface; // 0x0
	public FontAsset italicTypeface; // 0x8
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public struct FontAssetCreationEditorSettings // TypeDefIndex: 6554
{
	// Fields
	public string sourceFontFileGUID; // 0x0
	public int faceIndex; // 0x8
	public int pointSizeSamplingMode; // 0xC
	public int pointSize; // 0x10
	public int padding; // 0x14
	public int paddingMode; // 0x18
	public int packingMode; // 0x1C
	public int atlasWidth; // 0x20
	public int atlasHeight; // 0x24
	public int characterSetSelectionMode; // 0x28
	public string characterSequence; // 0x30
	public string referencedFontAssetGUID; // 0x38
	public string referencedTextAssetGUID; // 0x40
	public int fontStyle; // 0x48
	public float fontStyleModifier; // 0x4C
	public int renderMode; // 0x50
	public bool includeFontFeatures; // 0x54
}


// Namespace: UnityEngine.TextCore.Text
public enum AtlasPopulationMode // TypeDefIndex: 6555
{
	// Fields
	public int value__; // 0x0
	public const AtlasPopulationMode Static = 0;
	public const AtlasPopulationMode Dynamic = 1;
	public const AtlasPopulationMode DynamicOS = 2;
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class FontAsset.<>c // TypeDefIndex: 6556
{
	// Fields
	public static readonly FontAsset.<>c <>9; // 0x0
	public static Func<Character, uint> <>9__151_0; // 0x8
	public static Func<Glyph, uint> <>9__152_0; // 0x10

	// Methods

	// RVA: 0x1424D34 Offset: 0x1420D34 VA: 0x1424D34
	private static void .cctor() { }

	// RVA: 0x1424D90 Offset: 0x1420D90 VA: 0x1424D90
	public void .ctor() { }

	// RVA: 0x1424D98 Offset: 0x1420D98 VA: 0x1424D98
	internal uint <SortCharacterTable>b__151_0(Character c) { }

	// RVA: 0x1424DB0 Offset: 0x1420DB0 VA: 0x1424DB0
	internal uint <SortGlyphTable>b__152_0(Glyph c) { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class FontAsset : TextAsset // TypeDefIndex: 6557
{
	// Fields
	[SerializeField]
	internal string m_SourceFontFileGUID; // 0x38
	[SerializeField]
	internal FontAssetCreationEditorSettings m_fontAssetCreationEditorSettings; // 0x40
	[SerializeField]
	private Font m_SourceFontFile; // 0x98
	[SerializeField]
	private string m_SourceFontFilePath; // 0xA0
	[SerializeField]
	private AtlasPopulationMode m_AtlasPopulationMode; // 0xA8
	[SerializeField]
	internal bool InternalDynamicOS; // 0xAC
	[SerializeField]
	internal FaceInfo m_FaceInfo; // 0xB0
	private int m_FamilyNameHashCode; // 0x110
	private int m_StyleNameHashCode; // 0x114
	[SerializeField]
	internal List<Glyph> m_GlyphTable; // 0x118
	internal Dictionary<uint, Glyph> m_GlyphLookupDictionary; // 0x120
	[SerializeField]
	internal List<Character> m_CharacterTable; // 0x128
	internal Dictionary<uint, Character> m_CharacterLookupDictionary; // 0x130
	internal Texture2D m_AtlasTexture; // 0x138
	[SerializeField]
	internal Texture2D[] m_AtlasTextures; // 0x140
	[SerializeField]
	internal int m_AtlasTextureIndex; // 0x148
	[SerializeField]
	private bool m_IsMultiAtlasTexturesEnabled; // 0x14C
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild; // 0x14D
	[SerializeField]
	internal int m_AtlasWidth; // 0x150
	[SerializeField]
	internal int m_AtlasHeight; // 0x154
	[SerializeField]
	internal int m_AtlasPadding; // 0x158
	[SerializeField]
	internal GlyphRenderMode m_AtlasRenderMode; // 0x15C
	[SerializeField]
	private List<GlyphRect> m_UsedGlyphRects; // 0x160
	[SerializeField]
	private List<GlyphRect> m_FreeGlyphRects; // 0x168
	[SerializeField]
	internal FontFeatureTable m_FontFeatureTable; // 0x170
	[SerializeField]
	internal List<FontAsset> m_FallbackFontAssetTable; // 0x178
	[SerializeField]
	private FontWeightPair[] m_FontWeightTable; // 0x180
	[FormerlySerializedAs("normalStyle")]
	[SerializeField]
	internal float m_RegularStyleWeight; // 0x188
	[FormerlySerializedAs("normalSpacingOffset")]
	[SerializeField]
	internal float m_RegularStyleSpacing; // 0x18C
	[FormerlySerializedAs("boldStyle")]
	[SerializeField]
	internal float m_BoldStyleWeight; // 0x190
	[SerializeField]
	[FormerlySerializedAs("boldSpacing")]
	internal float m_BoldStyleSpacing; // 0x194
	[SerializeField]
	[FormerlySerializedAs("italicStyle")]
	internal byte m_ItalicStyleSlant; // 0x198
	[SerializeField]
	[FormerlySerializedAs("tabSize")]
	internal byte m_TabMultiple; // 0x199
	internal bool IsFontAssetLookupTablesDirty; // 0x19A
	private static ProfilerMarker k_ReadFontAssetDefinitionMarker; // 0x0
	private static ProfilerMarker k_AddSynthesizedCharactersMarker; // 0x8
	private static ProfilerMarker k_TryAddCharacterMarker; // 0x10
	private static ProfilerMarker k_TryAddCharactersMarker; // 0x18
	private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker; // 0x20
	private static ProfilerMarker k_UpdateDiacriticalMarkAdjustmentRecordsMarker; // 0x28
	private static ProfilerMarker k_ClearFontAssetDataMarker; // 0x30
	private static ProfilerMarker k_UpdateFontAssetDataMarker; // 0x38
	private static ProfilerMarker k_TryAddGlyphMarker; // 0x40
	private static string s_DefaultMaterialSuffix; // 0x48
	private static HashSet<int> k_SearchedFontAssetLookup; // 0x50
	private static List<FontAsset> k_FontAssets_FontFeaturesUpdateQueue; // 0x58
	private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup; // 0x60
	private static List<Texture2D> k_FontAssets_AtlasTexturesUpdateQueue; // 0x68
	private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup; // 0x70
	private List<Glyph> m_GlyphsToRender; // 0x1A0
	private List<Glyph> m_GlyphsRendered; // 0x1A8
	private List<uint> m_GlyphIndexList; // 0x1B0
	private List<uint> m_GlyphIndexListNewlyAdded; // 0x1B8
	internal List<uint> m_GlyphsToAdd; // 0x1C0
	internal HashSet<uint> m_GlyphsToAddLookup; // 0x1C8
	internal List<Character> m_CharactersToAdd; // 0x1D0
	internal HashSet<uint> m_CharactersToAddLookup; // 0x1D8
	internal List<uint> s_MissingCharacterList; // 0x1E0
	internal HashSet<uint> m_MissingUnicodesFromFontFile; // 0x1E8
	internal static uint[] k_GlyphIndexArray; // 0x78

	// Properties
	public FontAssetCreationEditorSettings fontAssetCreationEditorSettings { get; set; }
	public Font sourceFontFile { get; set; }
	public AtlasPopulationMode atlasPopulationMode { get; set; }
	public FaceInfo faceInfo { get; set; }
	internal int familyNameHashCode { get; set; }
	internal int styleNameHashCode { get; set; }
	public List<Glyph> glyphTable { get; set; }
	public Dictionary<uint, Glyph> glyphLookupTable { get; }
	public List<Character> characterTable { get; set; }
	public Dictionary<uint, Character> characterLookupTable { get; }
	public Texture2D atlasTexture { get; }
	public Texture2D[] atlasTextures { get; set; }
	public int atlasTextureCount { get; }
	public bool isMultiAtlasTexturesEnabled { get; set; }
	internal bool clearDynamicDataOnBuild { get; set; }
	public int atlasWidth { get; set; }
	public int atlasHeight { get; set; }
	public int atlasPadding { get; set; }
	public GlyphRenderMode atlasRenderMode { get; set; }
	internal List<GlyphRect> usedGlyphRects { get; set; }
	internal List<GlyphRect> freeGlyphRects { get; set; }
	public FontFeatureTable fontFeatureTable { get; set; }
	public List<FontAsset> fallbackFontAssetTable { get; set; }
	public FontWeightPair[] fontWeightTable { get; set; }
	public float regularStyleWeight { get; set; }
	public float regularStyleSpacing { get; set; }
	public float boldStyleWeight { get; set; }
	public float boldStyleSpacing { get; set; }
	public byte italicStyleSlant { get; set; }
	public byte tabMultiple { get; set; }

	// Methods

	// RVA: 0x141BD6C Offset: 0x1417D6C VA: 0x141BD6C
	public FontAssetCreationEditorSettings get_fontAssetCreationEditorSettings() { }

	// RVA: 0x141BD88 Offset: 0x1417D88 VA: 0x141BD88
	public void set_fontAssetCreationEditorSettings(FontAssetCreationEditorSettings value) { }

	// RVA: 0x141BDA0 Offset: 0x1417DA0 VA: 0x141BDA0
	public Font get_sourceFontFile() { }

	// RVA: 0x141BDA8 Offset: 0x1417DA8 VA: 0x141BDA8
	internal void set_sourceFontFile(Font value) { }

	// RVA: 0x141BDB0 Offset: 0x1417DB0 VA: 0x141BDB0
	public AtlasPopulationMode get_atlasPopulationMode() { }

	// RVA: 0x141BDB8 Offset: 0x1417DB8 VA: 0x141BDB8
	public void set_atlasPopulationMode(AtlasPopulationMode value) { }

	// RVA: 0x141BDC0 Offset: 0x1417DC0 VA: 0x141BDC0
	public FaceInfo get_faceInfo() { }

	// RVA: 0x141BDDC Offset: 0x1417DDC VA: 0x141BDDC
	public void set_faceInfo(FaceInfo value) { }

	// RVA: 0x141BDF4 Offset: 0x1417DF4 VA: 0x141BDF4
	internal int get_familyNameHashCode() { }

	// RVA: 0x141BE24 Offset: 0x1417E24 VA: 0x141BE24
	internal void set_familyNameHashCode(int value) { }

	// RVA: 0x141BE2C Offset: 0x1417E2C VA: 0x141BE2C
	internal int get_styleNameHashCode() { }

	// RVA: 0x141BE5C Offset: 0x1417E5C VA: 0x141BE5C
	internal void set_styleNameHashCode(int value) { }

	// RVA: 0x141BE64 Offset: 0x1417E64 VA: 0x141BE64
	public List<Glyph> get_glyphTable() { }

	// RVA: 0x141BE6C Offset: 0x1417E6C VA: 0x141BE6C
	internal void set_glyphTable(List<Glyph> value) { }

	// RVA: 0x141BE74 Offset: 0x1417E74 VA: 0x141BE74
	public Dictionary<uint, Glyph> get_glyphLookupTable() { }

	// RVA: 0x141C280 Offset: 0x1418280 VA: 0x141C280
	public List<Character> get_characterTable() { }

	// RVA: 0x141C288 Offset: 0x1418288 VA: 0x141C288
	internal void set_characterTable(List<Character> value) { }

	// RVA: 0x141C290 Offset: 0x1418290 VA: 0x141C290
	public Dictionary<uint, Character> get_characterLookupTable() { }

	// RVA: 0x141C2B4 Offset: 0x14182B4 VA: 0x141C2B4
	public Texture2D get_atlasTexture() { }

	// RVA: 0x141C344 Offset: 0x1418344 VA: 0x141C344
	public Texture2D[] get_atlasTextures() { }

	// RVA: 0x141C34C Offset: 0x141834C VA: 0x141C34C
	public void set_atlasTextures(Texture2D[] value) { }

	// RVA: 0x141C354 Offset: 0x1418354 VA: 0x141C354
	public int get_atlasTextureCount() { }

	// RVA: 0x141C360 Offset: 0x1418360 VA: 0x141C360
	public bool get_isMultiAtlasTexturesEnabled() { }

	// RVA: 0x141C368 Offset: 0x1418368 VA: 0x141C368
	public void set_isMultiAtlasTexturesEnabled(bool value) { }

	// RVA: 0x141C374 Offset: 0x1418374 VA: 0x141C374
	internal bool get_clearDynamicDataOnBuild() { }

	// RVA: 0x141C37C Offset: 0x141837C VA: 0x141C37C
	internal void set_clearDynamicDataOnBuild(bool value) { }

	// RVA: 0x141C388 Offset: 0x1418388 VA: 0x141C388
	public int get_atlasWidth() { }

	// RVA: 0x141C390 Offset: 0x1418390 VA: 0x141C390
	internal void set_atlasWidth(int value) { }

	// RVA: 0x141C398 Offset: 0x1418398 VA: 0x141C398
	public int get_atlasHeight() { }

	// RVA: 0x141C3A0 Offset: 0x14183A0 VA: 0x141C3A0
	internal void set_atlasHeight(int value) { }

	// RVA: 0x141C3A8 Offset: 0x14183A8 VA: 0x141C3A8
	public int get_atlasPadding() { }

	// RVA: 0x141C3B0 Offset: 0x14183B0 VA: 0x141C3B0
	internal void set_atlasPadding(int value) { }

	// RVA: 0x141C3B8 Offset: 0x14183B8 VA: 0x141C3B8
	public GlyphRenderMode get_atlasRenderMode() { }

	// RVA: 0x141C3C0 Offset: 0x14183C0 VA: 0x141C3C0
	internal void set_atlasRenderMode(GlyphRenderMode value) { }

	// RVA: 0x141C3C8 Offset: 0x14183C8 VA: 0x141C3C8
	internal List<GlyphRect> get_usedGlyphRects() { }

	// RVA: 0x141C3D0 Offset: 0x14183D0 VA: 0x141C3D0
	internal void set_usedGlyphRects(List<GlyphRect> value) { }

	// RVA: 0x141C3D8 Offset: 0x14183D8 VA: 0x141C3D8
	internal List<GlyphRect> get_freeGlyphRects() { }

	// RVA: 0x141C3E0 Offset: 0x14183E0 VA: 0x141C3E0
	internal void set_freeGlyphRects(List<GlyphRect> value) { }

	// RVA: 0x141C3E8 Offset: 0x14183E8 VA: 0x141C3E8
	public FontFeatureTable get_fontFeatureTable() { }

	// RVA: 0x141C3F0 Offset: 0x14183F0 VA: 0x141C3F0
	internal void set_fontFeatureTable(FontFeatureTable value) { }

	// RVA: 0x141C3F8 Offset: 0x14183F8 VA: 0x141C3F8
	public List<FontAsset> get_fallbackFontAssetTable() { }

	// RVA: 0x141C400 Offset: 0x1418400 VA: 0x141C400
	public void set_fallbackFontAssetTable(List<FontAsset> value) { }

	// RVA: 0x141C408 Offset: 0x1418408 VA: 0x141C408
	public FontWeightPair[] get_fontWeightTable() { }

	// RVA: 0x141C410 Offset: 0x1418410 VA: 0x141C410
	internal void set_fontWeightTable(FontWeightPair[] value) { }

	// RVA: 0x141C418 Offset: 0x1418418 VA: 0x141C418
	public float get_regularStyleWeight() { }

	// RVA: 0x141C420 Offset: 0x1418420 VA: 0x141C420
	public void set_regularStyleWeight(float value) { }

	// RVA: 0x141C428 Offset: 0x1418428 VA: 0x141C428
	public float get_regularStyleSpacing() { }

	// RVA: 0x141C430 Offset: 0x1418430 VA: 0x141C430
	public void set_regularStyleSpacing(float value) { }

	// RVA: 0x141C438 Offset: 0x1418438 VA: 0x141C438
	public float get_boldStyleWeight() { }

	// RVA: 0x141C440 Offset: 0x1418440 VA: 0x141C440
	public void set_boldStyleWeight(float value) { }

	// RVA: 0x141C448 Offset: 0x1418448 VA: 0x141C448
	public float get_boldStyleSpacing() { }

	// RVA: 0x141C450 Offset: 0x1418450 VA: 0x141C450
	public void set_boldStyleSpacing(float value) { }

	// RVA: 0x141C458 Offset: 0x1418458 VA: 0x141C458
	public byte get_italicStyleSlant() { }

	// RVA: 0x141C460 Offset: 0x1418460 VA: 0x141C460
	public void set_italicStyleSlant(byte value) { }

	// RVA: 0x141C468 Offset: 0x1418468 VA: 0x141C468
	public byte get_tabMultiple() { }

	// RVA: 0x141C470 Offset: 0x1418470 VA: 0x141C470
	public void set_tabMultiple(byte value) { }

	// RVA: 0x141C478 Offset: 0x1418478 VA: 0x141C478
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90) { }

	// RVA: 0x141C7C4 Offset: 0x14187C4 VA: 0x141C7C4
	public static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight) { }

	// RVA: 0x141C650 Offset: 0x1418650 VA: 0x141C650
	private static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = 2, bool enableMultiAtlasSupport = True) { }

	// RVA: 0x141CCB0 Offset: 0x1418CB0 VA: 0x141CCB0
	public static FontAsset CreateFontAsset(Font font) { }

	// RVA: 0x141CD2C Offset: 0x1418D2C VA: 0x141CD2C
	public static FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = 1, bool enableMultiAtlasSupport = True) { }

	// RVA: 0x141CDEC Offset: 0x1418DEC VA: 0x141CDEC
	private static FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = 1, bool enableMultiAtlasSupport = True) { }

	// RVA: 0x141C878 Offset: 0x1418878 VA: 0x141C878
	private static FontAsset CreateFontAssetInstance(Font font, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport) { }

	// RVA: 0x141D01C Offset: 0x141901C VA: 0x141D01C
	private void OnDestroy() { }

	// RVA: 0x141BE98 Offset: 0x1417E98 VA: 0x141BE98
	public void ReadFontAssetDefinition() { }

	// RVA: 0x141D144 Offset: 0x1419144 VA: 0x141D144
	internal void InitializeDictionaryLookupTables() { }

	// RVA: 0x141D354 Offset: 0x1419354 VA: 0x141D354
	internal void InitializeGlyphLookupDictionary() { }

	// RVA: 0x141D63C Offset: 0x141963C VA: 0x141D63C
	internal void InitializeCharacterLookupDictionary() { }

	// RVA: 0x141D7F4 Offset: 0x14197F4 VA: 0x141D7F4
	internal void InitializeLigatureSubstitutionLookupDictionary() { }

	// RVA: 0x141DAA8 Offset: 0x1419AA8 VA: 0x141DAA8
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary() { }

	// RVA: 0x141DCE8 Offset: 0x1419CE8 VA: 0x141DCE8
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary() { }

	// RVA: 0x141DED0 Offset: 0x1419ED0 VA: 0x141DED0
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary() { }

	// RVA: 0x141D17C Offset: 0x141917C VA: 0x141D17C
	internal void AddSynthesizedCharactersAndFaceMetrics() { }

	// RVA: 0x141E24C Offset: 0x141A24C VA: 0x141E24C
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = False) { }

	// RVA: 0x141E49C Offset: 0x141A49C VA: 0x141E49C
	internal void AddCharacterToLookupCache(uint unicode, Character character) { }

	// RVA: 0x141E0C0 Offset: 0x141A0C0 VA: 0x141E0C0
	private FontEngineError LoadFontFace() { }

	// RVA: 0x141E50C Offset: 0x141A50C VA: 0x141E50C
	internal void SortCharacterTable() { }

	// RVA: 0x141E640 Offset: 0x141A640 VA: 0x141E640
	internal void SortGlyphTable() { }

	// RVA: 0x141E774 Offset: 0x141A774 VA: 0x141E774
	internal void SortFontFeatureTable() { }

	// RVA: 0x141ED6C Offset: 0x141AD6C VA: 0x141ED6C
	internal void SortAllTables() { }

	// RVA: 0x141ED8C Offset: 0x141AD8C VA: 0x141ED8C
	public bool HasCharacter(int character) { }

	// RVA: 0x141EDF4 Offset: 0x141ADF4 VA: 0x141EDF4
	public bool HasCharacter(char character, bool searchFallbacks = False, bool tryAddCharacter = False) { }

	// RVA: 0x141EE04 Offset: 0x141AE04 VA: 0x141EE04
	public bool HasCharacter(uint character, bool searchFallbacks = False, bool tryAddCharacter = False) { }

	// RVA: 0x141F8A0 Offset: 0x141B8A0 VA: 0x141F8A0
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = False, bool tryAddCharacter = False) { }

	// RVA: 0x141FAE8 Offset: 0x141BAE8 VA: 0x141FAE8
	public bool HasCharacters(string text, out List<char> missingCharacters) { }

	// RVA: 0x141FC58 Offset: 0x141BC58 VA: 0x141FC58
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = False, bool tryAddCharacter = False) { }

	// RVA: 0x14200AC Offset: 0x141C0AC VA: 0x14200AC
	public bool HasCharacters(string text) { }

	// RVA: 0x1420178 Offset: 0x141C178 VA: 0x1420178
	public static string GetCharacters(FontAsset fontAsset) { }

	// RVA: 0x142028C Offset: 0x141C28C VA: 0x142028C
	public static int[] GetCharactersArray(FontAsset fontAsset) { }

	// RVA: 0x1420380 Offset: 0x141C380 VA: 0x1420380
	internal uint GetGlyphIndex(uint unicode) { }

	// RVA: 0x1420470 Offset: 0x141C470 VA: 0x1420470
	internal static void RegisterFontAssetForFontFeatureUpdate(FontAsset fontAsset) { }

	// RVA: 0x142058C Offset: 0x141C58C VA: 0x142058C
	internal static void UpdateFontFeaturesForFontAssetsInQueue() { }

	// RVA: 0x14207D0 Offset: 0x141C7D0 VA: 0x14207D0
	internal static void RegisterAtlasTextureForApply(Texture2D texture) { }

	// RVA: 0x14208BC Offset: 0x141C8BC VA: 0x14208BC
	internal static void UpdateAtlasTexturesInQueue() { }

	// RVA: 0x1420A68 Offset: 0x141CA68 VA: 0x1420A68
	internal static void UpdateFontAssetsInUpdateQueue() { }

	// RVA: 0x1420AB8 Offset: 0x141CAB8 VA: 0x1420AB8
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = False) { }

	// RVA: 0x1420AD8 Offset: 0x141CAD8 VA: 0x1420AD8
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = False) { }

	// RVA: 0x142190C Offset: 0x141D90C VA: 0x142190C
	public bool TryAddCharacters(string characters, bool includeFontFeatures = False) { }

	// RVA: 0x142192C Offset: 0x141D92C VA: 0x142192C
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = False) { }

	// RVA: 0x14223B8 Offset: 0x141E3B8 VA: 0x14223B8
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph) { }

	// RVA: 0x141F134 Offset: 0x141B134 VA: 0x141F134
	internal bool TryAddCharacterInternal(uint unicode, out Character character, bool shouldGetFontFeatures = False) { }

	// RVA: 0x1422E1C Offset: 0x141EE1C VA: 0x1422E1C
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out Character character, bool shouldGetFontFeatures = False) { }

	// RVA: 0x1421578 Offset: 0x141D578 VA: 0x1421578
	private bool TryAddGlyphsToNewAtlasTexture() { }

	// RVA: 0x1422BB8 Offset: 0x141EBB8 VA: 0x1422BB8
	private void SetupNewAtlasTexture() { }

	// RVA: 0x142072C Offset: 0x141C72C VA: 0x142072C
	private void UpdateAllFontFeatures() { }

	// RVA: 0x1423208 Offset: 0x141F208 VA: 0x1423208
	internal void UpdateGlyphAdjustmentRecords() { }

	// RVA: 0x14238F4 Offset: 0x141F8F4 VA: 0x14238F4
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes) { }

	// RVA: -1 Offset: -1
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB8ABA4 Offset: 0xB86BA4 VA: 0xB8ABA4
	|-FontAsset.CopyListDataToArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1423D0C Offset: 0x141FD0C VA: 0x1423D0C
	public void ClearFontAssetData(bool setAtlasSizeToZero = False) { }

	// RVA: 0x14244E8 Offset: 0x14204E8 VA: 0x14244E8
	internal void ClearFontAssetDataInternal(bool clearFontFeatures = False) { }

	// RVA: 0x1424508 Offset: 0x1420508 VA: 0x1424508
	internal void UpdateFontAssetData() { }

	// RVA: 0x1423E4C Offset: 0x141FE4C VA: 0x1423E4C
	internal void ClearFontAssetTables(bool clearFontFeatures) { }

	// RVA: 0x14242FC Offset: 0x14202FC VA: 0x14242FC
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = False) { }

	// RVA: 0x141D080 Offset: 0x1419080 VA: 0x141D080
	private void DestroyAtlasTextures() { }

	// RVA: 0x142474C Offset: 0x142074C VA: 0x142474C
	public void .ctor() { }

	// RVA: 0x14249CC Offset: 0x14209CC VA: 0x14249CC
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal static class FontAssetUtilities // TypeDefIndex: 6558
{
	// Fields
	private static HashSet<int> k_SearchedAssets; // 0x0

	// Methods

	// RVA: 0x1424DC8 Offset: 0x1420DC8 VA: 0x1424DC8
	internal static Character GetCharacterFromFontAsset(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface) { }

	// RVA: 0x1424EC8 Offset: 0x1420EC8 VA: 0x1424EC8
	private static Character GetCharacterFromFontAsset_Internal(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface) { }

	// RVA: 0x1425330 Offset: 0x1421330 VA: 0x1425330
	public static Character GetCharacterFromFontAssets(uint unicode, FontAsset sourceFontAsset, List<FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface) { }

	// RVA: 0x14254E8 Offset: 0x14214E8 VA: 0x14254E8
	public static SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks) { }

	// RVA: 0x14257B8 Offset: 0x14217B8 VA: 0x14257B8
	private static SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks) { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class FontFeatureTable.<>c // TypeDefIndex: 6559
{
	// Fields
	public static readonly FontFeatureTable.<>c <>9; // 0x0
	public static Func<GlyphPairAdjustmentRecord, uint> <>9__25_0; // 0x8
	public static Func<GlyphPairAdjustmentRecord, uint> <>9__25_1; // 0x10
	public static Func<MarkToBaseAdjustmentRecord, uint> <>9__26_0; // 0x18
	public static Func<MarkToBaseAdjustmentRecord, uint> <>9__26_1; // 0x20
	public static Func<MarkToMarkAdjustmentRecord, uint> <>9__27_0; // 0x28
	public static Func<MarkToMarkAdjustmentRecord, uint> <>9__27_1; // 0x30

	// Methods

	// RVA: 0x1425984 Offset: 0x1421984 VA: 0x1425984
	private static void .cctor() { }

	// RVA: 0x14259E0 Offset: 0x14219E0 VA: 0x14259E0
	public void .ctor() { }

	// RVA: 0x14259E8 Offset: 0x14219E8 VA: 0x14259E8
	internal uint <SortGlyphPairAdjustmentRecords>b__25_0(GlyphPairAdjustmentRecord s) { }

	// RVA: 0x1425A30 Offset: 0x1421A30 VA: 0x1425A30
	internal uint <SortGlyphPairAdjustmentRecords>b__25_1(GlyphPairAdjustmentRecord s) { }

	// RVA: 0x1425A78 Offset: 0x1421A78 VA: 0x1425A78
	internal uint <SortMarkToBaseAdjustmentRecords>b__26_0(MarkToBaseAdjustmentRecord s) { }

	// RVA: 0x1425A84 Offset: 0x1421A84 VA: 0x1425A84
	internal uint <SortMarkToBaseAdjustmentRecords>b__26_1(MarkToBaseAdjustmentRecord s) { }

	// RVA: 0x1425A90 Offset: 0x1421A90 VA: 0x1425A90
	internal uint <SortMarkToMarkAdjustmentRecords>b__27_0(MarkToMarkAdjustmentRecord s) { }

	// RVA: 0x1425A9C Offset: 0x1421A9C VA: 0x1425A9C
	internal uint <SortMarkToMarkAdjustmentRecords>b__27_1(MarkToMarkAdjustmentRecord s) { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class FontFeatureTable // TypeDefIndex: 6560
{
	// Fields
	[SerializeField]
	internal List<MultipleSubstitutionRecord> m_MultipleSubstitutionRecords; // 0x10
	[SerializeField]
	internal List<LigatureSubstitutionRecord> m_LigatureSubstitutionRecords; // 0x18
	[SerializeField]
	internal List<GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords; // 0x20
	[SerializeField]
	internal List<MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecords; // 0x28
	[SerializeField]
	internal List<MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecords; // 0x30
	internal Dictionary<uint, List<LigatureSubstitutionRecord>> m_LigatureSubstitutionRecordLookup; // 0x38
	internal Dictionary<uint, GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookup; // 0x40
	internal Dictionary<uint, MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecordLookup; // 0x48
	internal Dictionary<uint, MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecordLookup; // 0x50

	// Methods

	// RVA: 0x142369C Offset: 0x141F69C VA: 0x142369C
	internal void .ctor() { }

	// RVA: 0x141E7A8 Offset: 0x141A7A8 VA: 0x141E7A8
	public void SortGlyphPairAdjustmentRecords() { }

	// RVA: 0x141E994 Offset: 0x141A994 VA: 0x141E994
	public void SortMarkToBaseAdjustmentRecords() { }

	// RVA: 0x141EB80 Offset: 0x141AB80 VA: 0x141EB80
	public void SortMarkToMarkAdjustmentRecords() { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct Extents // TypeDefIndex: 6561
{
	// Fields
	public Vector2 min; // 0x0
	public Vector2 max; // 0x8

	// Methods

	// RVA: 0x1425AA8 Offset: 0x1421AA8 VA: 0x1425AA8 Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct LineInfo // TypeDefIndex: 6562
{
	// Fields
	internal int controlCharacterCount; // 0x0
	public int characterCount; // 0x4
	public int visibleCharacterCount; // 0x8
	public int spaceCount; // 0xC
	public int visibleSpaceCount; // 0x10
	public int wordCount; // 0x14
	public int firstCharacterIndex; // 0x18
	public int firstVisibleCharacterIndex; // 0x1C
	public int lastCharacterIndex; // 0x20
	public int lastVisibleCharacterIndex; // 0x24
	public float length; // 0x28
	public float lineHeight; // 0x2C
	public float ascender; // 0x30
	public float baseline; // 0x34
	public float descender; // 0x38
	public float maxAdvance; // 0x3C
	public float width; // 0x40
	public float marginLeft; // 0x44
	public float marginRight; // 0x48
	public TextAlignment alignment; // 0x4C
	public Extents lineExtents; // 0x50
}


// Namespace: UnityEngine.TextCore.Text
internal struct LinkInfo // TypeDefIndex: 6563
{
	// Fields
	public int hashCode; // 0x0
	public int linkIdFirstCharacterIndex; // 0x4
	public int linkIdLength; // 0x8
	public int linkTextfirstCharacterIndex; // 0xC
	public int linkTextLength; // 0x10
	internal char[] linkId; // 0x18
	private string m_LinkIdString; // 0x20
	private string m_LinkTextString; // 0x28

	// Methods

	// RVA: 0x1425C48 Offset: 0x1421C48 VA: 0x1425C48
	internal void SetLinkId(char[] text, int startIndex, int length) { }

	// RVA: 0x1425D24 Offset: 0x1421D24 VA: 0x1425D24
	public string GetLinkText(TextInfo textInfo) { }

	// RVA: 0x1425E1C Offset: 0x1421E1C VA: 0x1425E1C
	public string GetLinkId() { }
}


// Namespace: UnityEngine.TextCore.Text
internal static class MaterialManager // TypeDefIndex: 6564
{
	// Fields
	private static Dictionary<long, Material> s_FallbackMaterials; // 0x0

	// Methods

	// RVA: 0x1425E60 Offset: 0x1421E60 VA: 0x1425E60
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial) { }

	// RVA: 0x14264BC Offset: 0x14224BC VA: 0x14264BC
	public static Material GetFallbackMaterial(FontAsset fontAsset, Material sourceMaterial, int atlasIndex) { }

	// RVA: 0x1426234 Offset: 0x1422234 VA: 0x1426234
	private static void CopyMaterialPresetProperties(Material source, Material destination) { }

	// RVA: 0x14266E4 Offset: 0x14226E4 VA: 0x14266E4
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct MaterialReference // TypeDefIndex: 6565
{
	// Fields
	public int index; // 0x0
	public FontAsset fontAsset; // 0x8
	public SpriteAsset spriteAsset; // 0x10
	public Material material; // 0x18
	public bool isDefaultMaterial; // 0x20
	public bool isFallbackMaterial; // 0x21
	public Material fallbackMaterial; // 0x28
	public float padding; // 0x30
	public int referenceCount; // 0x34

	// Methods

	// RVA: 0x1426770 Offset: 0x1422770 VA: 0x1426770
	public void .ctor(int index, FontAsset fontAsset, SpriteAsset spriteAsset, Material material, float padding) { }

	// RVA: 0x14267EC Offset: 0x14227EC VA: 0x14267EC
	public static int AddMaterialReference(Material material, FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup) { }

	// RVA: 0x1426A00 Offset: 0x1422A00 VA: 0x1426A00
	public static int AddMaterialReference(Material material, SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup) { }
}


// Namespace: UnityEngine.TextCore.Text
internal class MaterialReferenceManager // TypeDefIndex: 6566
{
	// Fields
	private static MaterialReferenceManager s_Instance; // 0x0
	private Dictionary<int, Material> m_FontMaterialReferenceLookup; // 0x10
	private Dictionary<int, FontAsset> m_FontAssetReferenceLookup; // 0x18
	private Dictionary<int, SpriteAsset> m_SpriteAssetReferenceLookup; // 0x20
	private Dictionary<int, TextColorGradient> m_ColorGradientReferenceLookup; // 0x28

	// Properties
	public static MaterialReferenceManager instance { get; }

	// Methods

	// RVA: 0x1426BE0 Offset: 0x1422BE0 VA: 0x1426BE0
	public static MaterialReferenceManager get_instance() { }

	// RVA: 0x1426DA4 Offset: 0x1422DA4 VA: 0x1426DA4
	public static void AddFontAsset(FontAsset fontAsset) { }

	// RVA: 0x1426DC4 Offset: 0x1422DC4 VA: 0x1426DC4
	private void AddFontAssetInternal(FontAsset fontAsset) { }

	// RVA: 0x1426F80 Offset: 0x1422F80 VA: 0x1426F80
	public static void AddSpriteAsset(int hashCode, SpriteAsset spriteAsset) { }

	// RVA: 0x1426FB0 Offset: 0x1422FB0 VA: 0x1426FB0
	private void AddSpriteAssetInternal(int hashCode, SpriteAsset spriteAsset) { }

	// RVA: 0x142708C Offset: 0x142308C VA: 0x142708C
	public static void AddFontMaterial(int hashCode, Material material) { }

	// RVA: 0x14270BC Offset: 0x14230BC VA: 0x14270BC
	private void AddFontMaterialInternal(int hashCode, Material material) { }

	// RVA: 0x142712C Offset: 0x142312C VA: 0x142712C
	public static void AddColorGradientPreset(int hashCode, TextColorGradient spriteAsset) { }

	// RVA: 0x142715C Offset: 0x142315C VA: 0x142715C
	private void AddColorGradientPreset_Internal(int hashCode, TextColorGradient spriteAsset) { }

	// RVA: 0x14271FC Offset: 0x14231FC VA: 0x14271FC
	public static bool TryGetFontAsset(int hashCode, out FontAsset fontAsset) { }

	// RVA: 0x142722C Offset: 0x142322C VA: 0x142722C
	private bool TryGetFontAssetInternal(int hashCode, out FontAsset fontAsset) { }

	// RVA: 0x14272A4 Offset: 0x14232A4 VA: 0x14272A4
	public static bool TryGetSpriteAsset(int hashCode, out SpriteAsset spriteAsset) { }

	// RVA: 0x14272D4 Offset: 0x14232D4 VA: 0x14272D4
	private bool TryGetSpriteAssetInternal(int hashCode, out SpriteAsset spriteAsset) { }

	// RVA: 0x142734C Offset: 0x142334C VA: 0x142734C
	public static bool TryGetColorGradientPreset(int hashCode, out TextColorGradient gradientPreset) { }

	// RVA: 0x142737C Offset: 0x142337C VA: 0x142737C
	private bool TryGetColorGradientPresetInternal(int hashCode, out TextColorGradient gradientPreset) { }

	// RVA: 0x14273F4 Offset: 0x14233F4 VA: 0x14273F4
	public static bool TryGetMaterial(int hashCode, out Material material) { }

	// RVA: 0x1427424 Offset: 0x1423424 VA: 0x1427424
	private bool TryGetMaterialInternal(int hashCode, out Material material) { }

	// RVA: 0x1426C50 Offset: 0x1422C50 VA: 0x1426C50
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal enum VertexSortingOrder // TypeDefIndex: 6567
{
	// Fields
	public int value__; // 0x0
	public const VertexSortingOrder Normal = 0;
	public const VertexSortingOrder Reverse = 1;
}


// Namespace: UnityEngine.TextCore.Text
internal struct MeshInfo // TypeDefIndex: 6568
{
	// Fields
	private static readonly Color32 k_DefaultColor; // 0x0
	private static readonly Vector3 k_DefaultNormal; // 0x4
	private static readonly Vector4 k_DefaultTangent; // 0x10
	public int vertexCount; // 0x0
	public Vector3[] vertices; // 0x8
	public Vector3[] normals; // 0x10
	public Vector4[] tangents; // 0x18
	public Vector4[] uvs0; // 0x20
	public Vector2[] uvs2; // 0x28
	public Color32[] colors32; // 0x30
	public int[] triangles; // 0x38
	public Material material; // 0x40
	internal GlyphRenderMode glyphRenderMode; // 0x48

	// Methods

	// RVA: 0x142749C Offset: 0x142349C VA: 0x142749C
	public void .ctor(int size) { }

	// RVA: 0x14278B8 Offset: 0x14238B8 VA: 0x14278B8
	internal void ResizeMeshInfo(int size) { }

	// RVA: 0x1427AB0 Offset: 0x1423AB0 VA: 0x1427AB0
	internal void Clear(bool uploadChanges) { }

	// RVA: 0x1427ADC Offset: 0x1423ADC VA: 0x1427ADC
	internal void ClearUnusedVertices() { }

	// RVA: 0x1427B18 Offset: 0x1423B18 VA: 0x1427B18
	internal void SortGeometry(VertexSortingOrder order) { }

	// RVA: 0x1427BCC Offset: 0x1423BCC VA: 0x1427BCC
	internal void SwapVertexData(int src, int dst) { }

	// RVA: 0x1428158 Offset: 0x1424158 VA: 0x1428158
	private static void .cctor() { }
}


// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class SpriteAsset.<>c // TypeDefIndex: 6569
{
	// Fields
	public static readonly SpriteAsset.<>c <>9; // 0x0
	public static Func<SpriteGlyph, uint> <>9__37_0; // 0x8
	public static Func<SpriteCharacter, uint> <>9__38_0; // 0x10

	// Methods

	// RVA: 0x14295D0 Offset: 0x14255D0 VA: 0x14295D0
	private static void .cctor() { }

	// RVA: 0x142962C Offset: 0x142562C VA: 0x142962C
	public void .ctor() { }

	// RVA: 0x1429634 Offset: 0x1425634 VA: 0x1429634
	internal uint <SortGlyphTable>b__37_0(SpriteGlyph item) { }

	// RVA: 0x142964C Offset: 0x142564C VA: 0x142964C
	internal uint <SortCharacterTable>b__38_0(SpriteCharacter c) { }
}


// Namespace: UnityEngine.TextCore.Text
public class SpriteAsset : TextAsset // TypeDefIndex: 6570
{
	// Fields
	internal Dictionary<int, int> m_NameLookup; // 0x38
	internal Dictionary<uint, int> m_GlyphIndexLookup; // 0x40
	[SerializeField]
	internal FaceInfo m_FaceInfo; // 0x48
	[FormerlySerializedAs("spriteSheet")]
	[SerializeField]
	internal Texture m_SpriteAtlasTexture; // 0xA8
	[SerializeField]
	private List<SpriteCharacter> m_SpriteCharacterTable; // 0xB0
	internal Dictionary<uint, SpriteCharacter> m_SpriteCharacterLookup; // 0xB8
	[SerializeField]
	private List<SpriteGlyph> m_SpriteGlyphTable; // 0xC0
	internal Dictionary<uint, SpriteGlyph> m_SpriteGlyphLookup; // 0xC8
	[SerializeField]
	public List<SpriteAsset> fallbackSpriteAssets; // 0xD0
	internal bool m_IsSpriteAssetLookupTablesDirty; // 0xD8
	private static HashSet<int> k_searchedSpriteAssets; // 0x0

	// Properties
	public FaceInfo faceInfo { get; set; }
	public Texture spriteSheet { get; set; }
	public List<SpriteCharacter> spriteCharacterTable { get; set; }
	public Dictionary<uint, SpriteCharacter> spriteCharacterLookupTable { get; set; }
	public List<SpriteGlyph> spriteGlyphTable { get; set; }

	// Methods

	// RVA: 0x14281CC Offset: 0x14241CC VA: 0x14281CC
	public FaceInfo get_faceInfo() { }

	// RVA: 0x14281E8 Offset: 0x14241E8 VA: 0x14281E8
	internal void set_faceInfo(FaceInfo value) { }

	// RVA: 0x1428200 Offset: 0x1424200 VA: 0x1428200
	public Texture get_spriteSheet() { }

	// RVA: 0x1428208 Offset: 0x1424208 VA: 0x1428208
	internal void set_spriteSheet(Texture value) { }

	// RVA: 0x1428210 Offset: 0x1424210 VA: 0x1428210
	public List<SpriteCharacter> get_spriteCharacterTable() { }

	// RVA: 0x142873C Offset: 0x142473C VA: 0x142873C
	internal void set_spriteCharacterTable(List<SpriteCharacter> value) { }

	// RVA: 0x1425794 Offset: 0x1421794 VA: 0x1425794
	public Dictionary<uint, SpriteCharacter> get_spriteCharacterLookupTable() { }

	// RVA: 0x1428744 Offset: 0x1424744 VA: 0x1428744
	internal void set_spriteCharacterLookupTable(Dictionary<uint, SpriteCharacter> value) { }

	// RVA: 0x142874C Offset: 0x142474C VA: 0x142874C
	public List<SpriteGlyph> get_spriteGlyphTable() { }

	// RVA: 0x1428754 Offset: 0x1424754 VA: 0x1428754
	internal void set_spriteGlyphTable(List<SpriteGlyph> value) { }

	// RVA: 0x1428234 Offset: 0x1424234 VA: 0x1428234
	public void UpdateLookupTables() { }

	// RVA: 0x1428764 Offset: 0x1424764 VA: 0x1428764
	public int GetSpriteIndexFromHashcode(int hashCode) { }

	// RVA: 0x14287F0 Offset: 0x14247F0 VA: 0x14287F0
	public int GetSpriteIndexFromUnicode(uint unicode) { }

	// RVA: 0x1428888 Offset: 0x1424888 VA: 0x1428888
	public int GetSpriteIndexFromName(string name) { }

	// RVA: 0x14288C8 Offset: 0x14248C8 VA: 0x14288C8
	public static SpriteAsset SearchForSpriteByUnicode(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex) { }

	// RVA: 0x1428A88 Offset: 0x1424A88 VA: 0x1428A88
	private static SpriteAsset SearchForSpriteByUnicodeInternal(List<SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex) { }

	// RVA: 0x1428C34 Offset: 0x1424C34 VA: 0x1428C34
	private static SpriteAsset SearchForSpriteByUnicodeInternal(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex) { }

	// RVA: 0x1428CE4 Offset: 0x1424CE4 VA: 0x1428CE4
	public static SpriteAsset SearchForSpriteByHashCode(SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex, TextSettings textSettings) { }

	// RVA: 0x1429024 Offset: 0x1425024 VA: 0x1429024
	private static SpriteAsset SearchForSpriteByHashCodeInternal(List<SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex) { }

	// RVA: 0x14291DC Offset: 0x14251DC VA: 0x14291DC
	private static SpriteAsset SearchForSpriteByHashCodeInternal(SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex) { }

	// RVA: 0x142928C Offset: 0x142528C VA: 0x142928C
	public void SortGlyphTable() { }

	// RVA: 0x14293BC Offset: 0x14253BC VA: 0x14293BC
	internal void SortCharacterTable() { }

	// RVA: 0x14294F0 Offset: 0x14254F0 VA: 0x14294F0
	internal void SortGlyphAndCharacterTables() { }

	// RVA: 0x1429508 Offset: 0x1425508 VA: 0x1429508
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class SpriteCharacter : TextElement // TypeDefIndex: 6571
{
	// Fields
	[SerializeField]
	private string m_Name; // 0x30

	// Properties
	public string name { get; }

	// Methods

	// RVA: 0x142875C Offset: 0x142475C VA: 0x142875C
	public string get_name() { }

	// RVA: 0x1429664 Offset: 0x1425664 VA: 0x1429664
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class SpriteGlyph : Glyph // TypeDefIndex: 6572
{
	// Fields
	public Sprite sprite; // 0x48

	// Methods

	// RVA: 0x1429684 Offset: 0x1425684 VA: 0x1429684
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public abstract class TextAsset : ScriptableObject // TypeDefIndex: 6573
{
	// Fields
	[SerializeField]
	internal string m_Version; // 0x18
	internal int m_InstanceID; // 0x20
	internal int m_HashCode; // 0x24
	[FormerlySerializedAs("material")]
	[SerializeField]
	internal Material m_Material; // 0x28
	internal int m_MaterialHashCode; // 0x30

	// Properties
	public string version { get; set; }
	public int instanceID { get; }
	public int hashCode { get; set; }
	public Material material { get; set; }
	public int materialHashCode { get; set; }

	// Methods

	// RVA: 0x142968C Offset: 0x142568C VA: 0x142968C
	public string get_version() { }

	// RVA: 0x1429694 Offset: 0x1425694 VA: 0x1429694
	internal void set_version(string value) { }

	// RVA: 0x1420564 Offset: 0x141C564 VA: 0x1420564
	public int get_instanceID() { }

	// RVA: 0x1426EB8 Offset: 0x1422EB8 VA: 0x1426EB8
	public int get_hashCode() { }

	// RVA: 0x142969C Offset: 0x142569C VA: 0x142969C
	public void set_hashCode(int value) { }

	// RVA: 0x14296A4 Offset: 0x14256A4 VA: 0x14296A4
	public Material get_material() { }

	// RVA: 0x14296AC Offset: 0x14256AC VA: 0x14296AC
	public void set_material(Material value) { }

	// RVA: 0x1426EE8 Offset: 0x1422EE8 VA: 0x1426EE8
	public int get_materialHashCode() { }

	// RVA: 0x14296B4 Offset: 0x14256B4 VA: 0x14296B4
	public void set_materialHashCode(int value) { }

	// RVA: 0x14249C4 Offset: 0x14209C4 VA: 0x14249C4
	protected void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
public enum ColorGradientMode // TypeDefIndex: 6574
{
	// Fields
	public int value__; // 0x0
	public const ColorGradientMode Single = 0;
	public const ColorGradientMode HorizontalGradient = 1;
	public const ColorGradientMode VerticalGradient = 2;
	public const ColorGradientMode FourCornersGradient = 3;
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class TextColorGradient : ScriptableObject // TypeDefIndex: 6575
{
	// Fields
	public ColorGradientMode colorMode; // 0x18
	public Color topLeft; // 0x1C
	public Color topRight; // 0x2C
	public Color bottomLeft; // 0x3C
	public Color bottomRight; // 0x4C
	private const ColorGradientMode k_DefaultColorMode = 3;
	private static readonly Color k_DefaultColor; // 0x0

	// Methods

	// RVA: 0x14296BC Offset: 0x14256BC VA: 0x14296BC
	public void .ctor() { }

	// RVA: 0x1429758 Offset: 0x1425758 VA: 0x1429758
	public void .ctor(Color color) { }

	// RVA: 0x14297C4 Offset: 0x14257C4 VA: 0x14297C4
	public void .ctor(Color color0, Color color1, Color color2, Color color3) { }

	// RVA: 0x1429868 Offset: 0x1425868 VA: 0x1429868
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
public enum TextElementType // TypeDefIndex: 6576
{
	// Fields
	public byte value__; // 0x0
	public const TextElementType Character = 1;
	public const TextElementType Sprite = 2;
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public abstract class TextElement // TypeDefIndex: 6577
{
	// Fields
	[SerializeField]
	protected TextElementType m_ElementType; // 0x10
	[SerializeField]
	internal uint m_Unicode; // 0x14
	internal TextAsset m_TextAsset; // 0x18
	internal Glyph m_Glyph; // 0x20
	[SerializeField]
	internal uint m_GlyphIndex; // 0x28
	[SerializeField]
	internal float m_Scale; // 0x2C

	// Properties
	public TextElementType elementType { get; }
	public uint unicode { get; set; }
	public TextAsset textAsset { get; set; }
	public Glyph glyph { get; set; }
	public uint glyphIndex { get; set; }
	public float scale { get; set; }

	// Methods

	// RVA: 0x14298B4 Offset: 0x14258B4 VA: 0x14298B4
	public TextElementType get_elementType() { }

	// RVA: 0x141E0B8 Offset: 0x141A0B8 VA: 0x141E0B8
	public uint get_unicode() { }

	// RVA: 0x141BC44 Offset: 0x1417C44 VA: 0x141BC44
	public void set_unicode(uint value) { }

	// RVA: 0x1425328 Offset: 0x1421328 VA: 0x1425328
	public TextAsset get_textAsset() { }

	// RVA: 0x141BC4C Offset: 0x1417C4C VA: 0x141BC4C
	public void set_textAsset(TextAsset value) { }

	// RVA: 0x14298BC Offset: 0x14258BC VA: 0x14298BC
	public Glyph get_glyph() { }

	// RVA: 0x141BC54 Offset: 0x1417C54 VA: 0x141BC54
	public void set_glyph(Glyph value) { }

	// RVA: 0x141D34C Offset: 0x141934C VA: 0x141D34C
	public uint get_glyphIndex() { }

	// RVA: 0x141BC5C Offset: 0x1417C5C VA: 0x141BC5C
	public void set_glyphIndex(uint value) { }

	// RVA: 0x14298C4 Offset: 0x14258C4 VA: 0x14298C4
	public float get_scale() { }

	// RVA: 0x141BBDC Offset: 0x1417BDC VA: 0x141BBDC
	public void set_scale(float value) { }

	// RVA: 0x141BBD4 Offset: 0x1417BD4 VA: 0x141BBD4
	protected void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct TextVertex // TypeDefIndex: 6578
{
	// Fields
	public Vector3 position; // 0x0
	public Vector4 uv; // 0xC
	public Vector2 uv2; // 0x1C
	public Color32 color; // 0x24
}


// Namespace: UnityEngine.TextCore.Text
internal struct TextElementInfo // TypeDefIndex: 6579
{
	// Fields
	public char character; // 0x0
	public int index; // 0x4
	public TextElementType elementType; // 0x8
	public int stringLength; // 0xC
	public TextElement textElement; // 0x10
	public Glyph alternativeGlyph; // 0x18
	public FontAsset fontAsset; // 0x20
	public SpriteAsset spriteAsset; // 0x28
	public int spriteIndex; // 0x30
	public Material material; // 0x38
	public int materialReferenceIndex; // 0x40
	public bool isUsingAlternateTypeface; // 0x44
	public float pointSize; // 0x48
	public int lineNumber; // 0x4C
	public int pageNumber; // 0x50
	public int vertexIndex; // 0x54
	public TextVertex vertexTopLeft; // 0x58
	public TextVertex vertexBottomLeft; // 0x80
	public TextVertex vertexTopRight; // 0xA8
	public TextVertex vertexBottomRight; // 0xD0
	public Vector3 topLeft; // 0xF8
	public Vector3 bottomLeft; // 0x104
	public Vector3 topRight; // 0x110
	public Vector3 bottomRight; // 0x11C
	public float origin; // 0x128
	public float ascender; // 0x12C
	public float baseLine; // 0x130
	public float descender; // 0x134
	internal float adjustedAscender; // 0x138
	internal float adjustedDescender; // 0x13C
	internal float adjustedHorizontalAdvance; // 0x140
	public float xAdvance; // 0x144
	public float aspectRatio; // 0x148
	public float scale; // 0x14C
	public Color32 color; // 0x150
	public Color32 underlineColor; // 0x154
	public int underlineVertexIndex; // 0x158
	public Color32 strikethroughColor; // 0x15C
	public int strikethroughVertexIndex; // 0x160
	public Color32 highlightColor; // 0x164
	public HighlightState highlightState; // 0x168
	public FontStyles style; // 0x17C
	public bool isVisible; // 0x180

	// Methods

	// RVA: 0x14298CC Offset: 0x14258CC VA: 0x14298CC Slot: 3
	public override string ToString() { }
}


// Namespace: UnityEngine.TextCore.Text
internal class TextGenerationSettings : IEquatable<TextGenerationSettings> // TypeDefIndex: 6580
{
	// Fields
	public string text; // 0x10
	public Rect screenRect; // 0x18
	public Vector4 margins; // 0x28
	public float scale; // 0x38
	public FontAsset fontAsset; // 0x40
	public Material material; // 0x48
	public SpriteAsset spriteAsset; // 0x50
	public TextStyleSheet styleSheet; // 0x58
	public FontStyles fontStyle; // 0x60
	public TextSettings textSettings; // 0x68
	public TextAlignment textAlignment; // 0x70
	public TextOverflowMode overflowMode; // 0x74
	public bool wordWrap; // 0x78
	public float wordWrappingRatio; // 0x7C
	public Color color; // 0x80
	public TextColorGradient fontColorGradient; // 0x90
	public TextColorGradient fontColorGradientPreset; // 0x98
	public bool tintSprites; // 0xA0
	public bool overrideRichTextColors; // 0xA1
	public bool shouldConvertToLinearSpace; // 0xA2
	public float fontSize; // 0xA4
	public bool autoSize; // 0xA8
	public float fontSizeMin; // 0xAC
	public float fontSizeMax; // 0xB0
	public bool enableKerning; // 0xB4
	public bool richText; // 0xB5
	public bool isRightToLeft; // 0xB6
	public float extraPadding; // 0xB8
	public bool parseControlCharacters; // 0xBC
	public bool isOrthographic; // 0xBD
	public bool tagNoParsing; // 0xBE
	public float characterSpacing; // 0xC0
	public float wordSpacing; // 0xC4
	public float lineSpacing; // 0xC8
	public float paragraphSpacing; // 0xCC
	public float lineSpacingMax; // 0xD0
	public TextWrappingMode textWrappingMode; // 0xD4
	public int maxVisibleCharacters; // 0xD8
	public int maxVisibleWords; // 0xDC
	public int maxVisibleLines; // 0xE0
	public int firstVisibleCharacter; // 0xE4
	public bool useMaxVisibleDescender; // 0xE8
	public TextFontWeight fontWeight; // 0xEC
	public int pageToDisplay; // 0xF0
	public TextureMapping horizontalMapping; // 0xF4
	public TextureMapping verticalMapping; // 0xF8
	public float uvLineOffset; // 0xFC
	public VertexSortingOrder geometrySortingOrder; // 0x100
	public bool inverseYAxis; // 0x104
	public float charWidthMaxAdj; // 0x108
	internal TextInputSource inputSource; // 0x10C

	// Methods

	// RVA: 0x142AFC4 Offset: 0x1426FC4 VA: 0x142AFC4 Slot: 4
	public bool Equals(TextGenerationSettings other) { }

	// RVA: 0x142B46C Offset: 0x142746C VA: 0x142B46C Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x142B578 Offset: 0x1427578 VA: 0x142B578 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x142BB94 Offset: 0x1427B94 VA: 0x142BB94
	public static bool op_Equality(TextGenerationSettings left, TextGenerationSettings right) { }

	// RVA: 0x142BB9C Offset: 0x1427B9C VA: 0x142BB9C Slot: 3
	public override string ToString() { }

	// RVA: 0x142D644 Offset: 0x1429644 VA: 0x142D644
	public void .ctor() { }
}


// Namespace: 
public sealed class TextGenerator.MissingCharacterEventCallback : MulticastDelegate // TypeDefIndex: 6581
{
	// Methods

	// RVA: 0x1442384 Offset: 0x143E384 VA: 0x1442384
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x1442410 Offset: 0x143E410 VA: 0x1442410 Slot: 12
	public virtual void Invoke(uint unicode, int stringIndex, TextInfo text, FontAsset fontAsset) { }
}


// Namespace: 
protected struct TextGenerator.SpecialCharacter // TypeDefIndex: 6582
{
	// Fields
	public Character character; // 0x0
	public FontAsset fontAsset; // 0x8
	public Material material; // 0x10
	public int materialIndex; // 0x18

	// Methods

	// RVA: 0x1442424 Offset: 0x143E424 VA: 0x1442424
	public void .ctor(Character character, int materialIndex) { }
}


// Namespace: UnityEngine.TextCore.Text
internal class TextGenerator // TypeDefIndex: 6583
{
	// Fields
	private static TextGenerator s_TextGenerator; // 0x0
	private TextBackingContainer m_TextBackingArray; // 0x10
	internal TextProcessingElement[] m_TextProcessingArray; // 0x20
	internal int m_InternalTextProcessingArraySize; // 0x28
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction; // 0x2C
	private char[] m_HtmlTag; // 0x30
	internal HighlightState m_HighlightState; // 0x38
	protected bool m_IsIgnoringAlignment; // 0x4C
	protected static bool m_IsTextTruncated; // 0x8
	[CompilerGenerated]
	private static TextGenerator.MissingCharacterEventCallback OnMissingCharacter; // 0x10
	private Vector3[] m_RectTransformCorners; // 0x50
	private float m_MarginWidth; // 0x58
	private float m_MarginHeight; // 0x5C
	private float m_PreferredWidth; // 0x60
	private float m_PreferredHeight; // 0x64
	private FontAsset m_CurrentFontAsset; // 0x68
	private Material m_CurrentMaterial; // 0x70
	private int m_CurrentMaterialIndex; // 0x78
	private TextProcessingStack<MaterialReference> m_MaterialReferenceStack; // 0x80
	private float m_Padding; // 0xD8
	private SpriteAsset m_CurrentSpriteAsset; // 0xE0
	private int m_TotalCharacterCount; // 0xE8
	private float m_FontSize; // 0xEC
	private float m_FontScaleMultiplier; // 0xF0
	private float m_CurrentFontSize; // 0xF4
	private TextProcessingStack<float> m_SizeStack; // 0xF8
	protected TextProcessingStack<int>[] m_TextStyleStacks; // 0x118
	protected int m_TextStyleStackDepth; // 0x120
	private FontStyles m_FontStyleInternal; // 0x124
	private FontStyleStack m_FontStyleStack; // 0x128
	private TextFontWeight m_FontWeightInternal; // 0x134
	private TextProcessingStack<TextFontWeight> m_FontWeightStack; // 0x138
	private TextAlignment m_LineJustification; // 0x158
	private TextProcessingStack<TextAlignment> m_LineJustificationStack; // 0x160
	private float m_BaselineOffset; // 0x180
	private TextProcessingStack<float> m_BaselineOffsetStack; // 0x188
	private Color32 m_FontColor32; // 0x1A8
	private Color32 m_HtmlColor; // 0x1AC
	private Color32 m_UnderlineColor; // 0x1B0
	private Color32 m_StrikethroughColor; // 0x1B4
	private TextProcessingStack<Color32> m_ColorStack; // 0x1B8
	private TextProcessingStack<Color32> m_UnderlineColorStack; // 0x1D8
	private TextProcessingStack<Color32> m_StrikethroughColorStack; // 0x1F8
	private TextProcessingStack<Color32> m_HighlightColorStack; // 0x218
	private TextProcessingStack<HighlightState> m_HighlightStateStack; // 0x238
	private TextProcessingStack<int> m_ItalicAngleStack; // 0x268
	private TextColorGradient m_ColorGradientPreset; // 0x288
	private TextProcessingStack<TextColorGradient> m_ColorGradientStack; // 0x290
	private bool m_ColorGradientPresetIsTinted; // 0x2B8
	private TextProcessingStack<int> m_ActionStack; // 0x2C0
	private float m_LineOffset; // 0x2E0
	private float m_LineHeight; // 0x2E4
	private bool m_IsDrivenLineSpacing; // 0x2E8
	private float m_CSpacing; // 0x2EC
	private float m_MonoSpacing; // 0x2F0
	private float m_XAdvance; // 0x2F4
	private float m_TagLineIndent; // 0x2F8
	private float m_TagIndent; // 0x2FC
	private TextProcessingStack<float> m_IndentStack; // 0x300
	private bool m_TagNoParsing; // 0x320
	private int m_CharacterCount; // 0x324
	private int m_FirstCharacterOfLine; // 0x328
	private int m_LastCharacterOfLine; // 0x32C
	private int m_FirstVisibleCharacterOfLine; // 0x330
	private int m_LastVisibleCharacterOfLine; // 0x334
	private float m_MaxLineAscender; // 0x338
	private float m_MaxLineDescender; // 0x33C
	private int m_LineNumber; // 0x340
	private int m_LineVisibleCharacterCount; // 0x344
	private int m_LineVisibleSpaceCount; // 0x348
	private int m_FirstOverflowCharacterIndex; // 0x34C
	private int m_PageNumber; // 0x350
	private float m_MarginLeft; // 0x354
	private float m_MarginRight; // 0x358
	private float m_Width; // 0x35C
	private Extents m_MeshExtents; // 0x360
	private float m_MaxCapHeight; // 0x370
	private float m_MaxAscender; // 0x374
	private float m_MaxDescender; // 0x378
	private bool m_IsNewPage; // 0x37C
	private bool m_IsNonBreakingSpace; // 0x37D
	private WordWrapState m_SavedWordWrapState; // 0x380
	private WordWrapState m_SavedLineState; // 0x718
	private WordWrapState m_SavedEllipsisState; // 0xAB0
	private WordWrapState m_SavedLastValidState; // 0xE48
	private WordWrapState m_SavedSoftLineBreakState; // 0x11E0
	private TextElementType m_TextElementType; // 0x1578
	private bool m_isTextLayoutPhase; // 0x1579
	private int m_SpriteIndex; // 0x157C
	private Color32 m_SpriteColor; // 0x1580
	private TextElement m_CachedTextElement; // 0x1588
	private Color32 m_HighlightColor; // 0x1590
	private float m_CharWidthAdjDelta; // 0x1594
	private float m_MaxFontSize; // 0x1598
	private float m_MinFontSize; // 0x159C
	private int m_AutoSizeIterationCount; // 0x15A0
	private int m_AutoSizeMaxIterationCount; // 0x15A4
	private bool m_IsAutoSizePointSizeSet; // 0x15A8
	private float m_StartOfLineAscender; // 0x15AC
	private float m_LineSpacingDelta; // 0x15B0
	private MaterialReference[] m_MaterialReferences; // 0x15B8
	private int m_SpriteCount; // 0x15C0
	private TextProcessingStack<int> m_StyleStack; // 0x15C8
	private TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack; // 0x15E8
	private int m_SpriteAnimationId; // 0x19A0
	private int m_ItalicAngle; // 0x19A4
	private Vector3 m_FXScale; // 0x19A8
	private Quaternion m_FXRotation; // 0x19B4
	private int m_LastBaseGlyphIndex; // 0x19C4
	private float m_PageAscender; // 0x19C8
	private RichTextTagAttribute[] m_XmlAttribute; // 0x19D0
	private float[] m_AttributeParameterValues; // 0x19D8
	private Dictionary<int, int> m_MaterialReferenceIndexLookup; // 0x19E0
	private bool m_IsCalculatingPreferredValues; // 0x19E8
	private SpriteAsset m_DefaultSpriteAsset; // 0x19F0
	private bool m_TintSprite; // 0x19F8
	protected TextGenerator.SpecialCharacter m_Ellipsis; // 0x1A00
	protected TextGenerator.SpecialCharacter m_Underline; // 0x1A20
	private TextElementInfo[] m_InternalTextElementInfo; // 0x1A40

	// Properties
	public static bool isTextTruncated { get; }

	// Methods

	// RVA: 0x1434DD0 Offset: 0x1430DD0 VA: 0x1434DD0
	private static TextGenerator GetTextGenerator() { }

	// RVA: 0x14354C0 Offset: 0x14314C0 VA: 0x14354C0
	public static void GenerateText(TextGenerationSettings settings, TextInfo textInfo) { }

	// RVA: 0x1435728 Offset: 0x1431728 VA: 0x1435728
	public static Vector2 GetPreferredValues(TextGenerationSettings settings, TextInfo textInfo) { }

	// RVA: 0x1435994 Offset: 0x1431994 VA: 0x1435994
	public static bool get_isTextTruncated() { }

	// RVA: 0x1435634 Offset: 0x1431634 VA: 0x1435634
	private void Prepare(TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x142D6C0 Offset: 0x14296C0 VA: 0x142D6C0
	private void GenerateTextMesh(TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x1437BE4 Offset: 0x1433BE4 VA: 0x1437BE4
	private void SaveWordWrappingState(ref WordWrapState state, int index, int count, TextInfo textInfo) { }

	// RVA: 0x1437E78 Offset: 0x1433E78 VA: 0x1437E78
	protected int RestoreWordWrappingState(ref WordWrapState state, TextInfo textInfo) { }

	// RVA: 0x1438138 Offset: 0x1434138 VA: 0x1438138
	protected bool ValidateHtmlTag(TextProcessingElement[] chars, int startIndex, out int endIndex, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143C8BC Offset: 0x14388BC VA: 0x143C8BC
	private void SaveGlyphVertexInfo(float padding, float stylePadding, Color32 vertexColor, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143D428 Offset: 0x1439428 VA: 0x143D428
	private void SaveSpriteVertexInfo(Color32 vertexColor, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143DC50 Offset: 0x1439C50 VA: 0x143DC50
	private void DrawUnderlineMesh(Vector3 start, Vector3 end, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143E87C Offset: 0x143A87C VA: 0x143E87C
	private void DrawTextHighlight(Vector3 start, Vector3 end, Color32 highlightColor, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143EDF8 Offset: 0x143ADF8 VA: 0x143EDF8
	private static void ClearMesh(bool updateMesh, TextInfo textInfo) { }

	// RVA: 0x14367CC Offset: 0x14327CC VA: 0x14367CC
	internal int SetArraySizes(TextProcessingElement[] textProcessingArray, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143EFB4 Offset: 0x143AFB4 VA: 0x143EFB4
	internal TextElement GetTextElement(TextGenerationSettings generationSettings, uint unicode, FontAsset fontAsset, FontStyles fontStyle, TextFontWeight fontWeight, out bool isUsingAlternativeTypeface) { }

	// RVA: 0x1435A04 Offset: 0x1431A04 VA: 0x1435A04
	private void ComputeMarginSize(Rect rect, Vector4 margins) { }

	// RVA: 0x14359DC Offset: 0x14319DC VA: 0x14359DC
	protected void GetSpecialCharacters(TextGenerationSettings generationSettings) { }

	// RVA: 0x143EE18 Offset: 0x143AE18 VA: 0x143EE18
	protected void GetEllipsisSpecialCharacter(TextGenerationSettings generationSettings) { }

	// RVA: 0x143E7F8 Offset: 0x143A7F8 VA: 0x143E7F8
	protected void GetUnderlineSpecialCharacter(TextGenerationSettings generationSettings) { }

	// RVA: 0x1435858 Offset: 0x1431858 VA: 0x1435858
	private Vector2 GetPreferredValuesInternal(TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143F33C Offset: 0x143B33C VA: 0x143F33C Slot: 4
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, TextWrappingMode textWrapMode, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x1435A6C Offset: 0x1431A6C VA: 0x1435A6C
	private void PopulateTextBackingArray(string sourceText) { }

	// RVA: 0x1441D84 Offset: 0x143DD84 VA: 0x1441D84
	private void PopulateTextBackingArray(string sourceText, int start, int length) { }

	// RVA: 0x1435A84 Offset: 0x1431A84 VA: 0x1435A84
	private void PopulateTextProcessingArray(TextGenerationSettings generationSettings) { }

	// RVA: 0x1441E78 Offset: 0x143DE78 VA: 0x1441E78
	private void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x143F2A0 Offset: 0x143B2A0 VA: 0x143F2A0
	protected void DoMissingGlyphCallback(uint unicode, int stringIndex, FontAsset fontAsset, TextInfo textInfo) { }

	// RVA: 0x143C858 Offset: 0x1438858 VA: 0x143C858
	private void ClearMarkupTagAttributes() { }

	// RVA: 0x1434E40 Offset: 0x1430E40 VA: 0x1434E40
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal enum TextAlignment // TypeDefIndex: 6584
{
	// Fields
	public int value__; // 0x0
	public const TextAlignment TopLeft = 257;
	public const TextAlignment TopCenter = 258;
	public const TextAlignment TopRight = 260;
	public const TextAlignment TopJustified = 264;
	public const TextAlignment TopFlush = 272;
	public const TextAlignment TopGeoAligned = 288;
	public const TextAlignment MiddleLeft = 513;
	public const TextAlignment MiddleCenter = 514;
	public const TextAlignment MiddleRight = 516;
	public const TextAlignment MiddleJustified = 520;
	public const TextAlignment MiddleFlush = 528;
	public const TextAlignment MiddleGeoAligned = 544;
	public const TextAlignment BottomLeft = 1025;
	public const TextAlignment BottomCenter = 1026;
	public const TextAlignment BottomRight = 1028;
	public const TextAlignment BottomJustified = 1032;
	public const TextAlignment BottomFlush = 1040;
	public const TextAlignment BottomGeoAligned = 1056;
	public const TextAlignment BaselineLeft = 2049;
	public const TextAlignment BaselineCenter = 2050;
	public const TextAlignment BaselineRight = 2052;
	public const TextAlignment BaselineJustified = 2056;
	public const TextAlignment BaselineFlush = 2064;
	public const TextAlignment BaselineGeoAligned = 2080;
	public const TextAlignment MidlineLeft = 4097;
	public const TextAlignment MidlineCenter = 4098;
	public const TextAlignment MidlineRight = 4100;
	public const TextAlignment MidlineJustified = 4104;
	public const TextAlignment MidlineFlush = 4112;
	public const TextAlignment MidlineGeoAligned = 4128;
	public const TextAlignment CaplineLeft = 8193;
	public const TextAlignment CaplineCenter = 8194;
	public const TextAlignment CaplineRight = 8196;
	public const TextAlignment CaplineJustified = 8200;
	public const TextAlignment CaplineFlush = 8208;
	public const TextAlignment CaplineGeoAligned = 8224;
}


// Namespace: UnityEngine.TextCore.Text
[Flags]
public enum FontStyles // TypeDefIndex: 6585
{
	// Fields
	public int value__; // 0x0
	public const FontStyles Normal = 0;
	public const FontStyles Bold = 1;
	public const FontStyles Italic = 2;
	public const FontStyles Underline = 4;
	public const FontStyles LowerCase = 8;
	public const FontStyles UpperCase = 16;
	public const FontStyles SmallCaps = 32;
	public const FontStyles Strikethrough = 64;
	public const FontStyles Superscript = 128;
	public const FontStyles Subscript = 256;
	public const FontStyles Highlight = 512;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TextOverflowMode // TypeDefIndex: 6586
{
	// Fields
	public int value__; // 0x0
	public const TextOverflowMode Overflow = 0;
	public const TextOverflowMode Ellipsis = 1;
	public const TextOverflowMode Masking = 2;
	public const TextOverflowMode Truncate = 3;
	public const TextOverflowMode ScrollRect = 4;
	public const TextOverflowMode Page = 5;
	public const TextOverflowMode Linked = 6;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TextureMapping // TypeDefIndex: 6587
{
	// Fields
	public int value__; // 0x0
	public const TextureMapping Character = 0;
	public const TextureMapping Line = 1;
	public const TextureMapping Paragraph = 2;
	public const TextureMapping MatchAspect = 3;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TextWrappingMode // TypeDefIndex: 6588
{
	// Fields
	public int value__; // 0x0
	public const TextWrappingMode NoWrap = 0;
	public const TextWrappingMode Normal = 1;
	public const TextWrappingMode PreserveWhitespace = 2;
	public const TextWrappingMode PreserveWhitespaceNoWrap = 3;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TextInputSource // TypeDefIndex: 6589
{
	// Fields
	public int value__; // 0x0
	public const TextInputSource TextInputBox = 0;
	public const TextInputSource SetText = 1;
	public const TextInputSource SetTextArray = 2;
	public const TextInputSource TextString = 3;
}


// Namespace: UnityEngine.TextCore.Text
internal struct RichTextTagAttribute // TypeDefIndex: 6590
{
	// Fields
	public int nameHashCode; // 0x0
	public int valueHashCode; // 0x4
	public TagValueType valueType; // 0x8
	public int valueStartIndex; // 0xC
	public int valueLength; // 0x10
	public TagUnitType unitType; // 0x14
}


// Namespace: UnityEngine.TextCore.Text
internal struct TextProcessingElement // TypeDefIndex: 6591
{
	// Fields
	public TextProcessingElementType elementType; // 0x0
	public uint unicode; // 0x4
	public int stringIndex; // 0x8
	public int length; // 0xC
}


// Namespace: UnityEngine.TextCore.Text
[DefaultMember("Item")]
internal struct TextBackingContainer // TypeDefIndex: 6592
{
	// Fields
	private uint[] m_Array; // 0x0
	private int m_Count; // 0x8

	// Properties
	public int Capacity { get; }
	public int Count { get; set; }
	public uint Item { get; set; }

	// Methods

	// RVA: 0x1442518 Offset: 0x143E518 VA: 0x1442518
	public int get_Capacity() { }

	// RVA: 0x1442534 Offset: 0x143E534 VA: 0x1442534
	public int get_Count() { }

	// RVA: 0x144253C Offset: 0x143E53C VA: 0x144253C
	public void set_Count(int value) { }

	// RVA: 0x1442544 Offset: 0x143E544 VA: 0x1442544
	public uint get_Item(int index) { }

	// RVA: 0x1442574 Offset: 0x143E574 VA: 0x1442574
	public void set_Item(int index, uint value) { }

	// RVA: 0x1442638 Offset: 0x143E638 VA: 0x1442638
	public void .ctor(int size) { }

	// RVA: 0x14425D4 Offset: 0x143E5D4 VA: 0x14425D4
	public void Resize(int size) { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct CharacterSubstitution // TypeDefIndex: 6593
{
	// Fields
	public int index; // 0x0
	public uint unicode; // 0x4

	// Methods

	// RVA: 0x1442698 Offset: 0x143E698 VA: 0x1442698
	public void .ctor(int index, uint unicode) { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct Offset // TypeDefIndex: 6594
{
	// Fields
	private float m_Left; // 0x0
	private float m_Right; // 0x4
	private float m_Top; // 0x8
	private float m_Bottom; // 0xC
	private static readonly Offset k_ZeroOffset; // 0x0

	// Properties
	public float left { get; }
	public float right { get; }
	public float top { get; }
	public float bottom { get; }
	public static Offset zero { get; }

	// Methods

	// RVA: 0x14426A0 Offset: 0x143E6A0 VA: 0x14426A0
	public float get_left() { }

	// RVA: 0x14426A8 Offset: 0x143E6A8 VA: 0x14426A8
	public float get_right() { }

	// RVA: 0x14426B0 Offset: 0x143E6B0 VA: 0x14426B0
	public float get_top() { }

	// RVA: 0x14426B8 Offset: 0x143E6B8 VA: 0x14426B8
	public float get_bottom() { }

	// RVA: 0x14426C0 Offset: 0x143E6C0 VA: 0x14426C0
	public static Offset get_zero() { }

	// RVA: 0x144271C Offset: 0x143E71C VA: 0x144271C
	public void .ctor(float left, float right, float top, float bottom) { }

	// RVA: 0x1442728 Offset: 0x143E728 VA: 0x1442728
	public static bool op_Equality(Offset lhs, Offset rhs) { }

	// RVA: 0x1442758 Offset: 0x143E758 VA: 0x1442758
	public static Offset op_Multiply(Offset a, float b) { }

	// RVA: 0x144276C Offset: 0x143E76C VA: 0x144276C Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x14427D0 Offset: 0x143E7D0 VA: 0x14427D0 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x1442848 Offset: 0x143E848 VA: 0x1442848
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct HighlightState // TypeDefIndex: 6595
{
	// Fields
	public Color32 color; // 0x0
	public Offset padding; // 0x4

	// Methods

	// RVA: 0x1442890 Offset: 0x143E890 VA: 0x1442890
	public void .ctor(Color32 color, Offset padding) { }

	// RVA: 0x14428A0 Offset: 0x143E8A0 VA: 0x14428A0
	public static bool op_Equality(HighlightState lhs, HighlightState rhs) { }

	// RVA: 0x1442994 Offset: 0x143E994 VA: 0x1442994
	public static bool op_Inequality(HighlightState lhs, HighlightState rhs) { }

	// RVA: 0x14429DC Offset: 0x143E9DC VA: 0x14429DC Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x1442A48 Offset: 0x143EA48 VA: 0x1442A48 Slot: 0
	public override bool Equals(object obj) { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct WordWrapState // TypeDefIndex: 6596
{
	// Fields
	public int previousWordBreak; // 0x0
	public int totalCharacterCount; // 0x4
	public int visibleCharacterCount; // 0x8
	public int visibleSpaceCount; // 0xC
	public int visibleSpriteCount; // 0x10
	public int visibleLinkCount; // 0x14
	public int firstCharacterIndex; // 0x18
	public int firstVisibleCharacterIndex; // 0x1C
	public int lastCharacterIndex; // 0x20
	public int lastVisibleCharIndex; // 0x24
	public int lineNumber; // 0x28
	public float maxCapHeight; // 0x2C
	public float maxAscender; // 0x30
	public float maxDescender; // 0x34
	public float maxLineAscender; // 0x38
	public float maxLineDescender; // 0x3C
	public float startOfLineAscender; // 0x40
	public float xAdvance; // 0x44
	public float preferredWidth; // 0x48
	public float preferredHeight; // 0x4C
	public float previousLineScale; // 0x50
	public float pageAscender; // 0x54
	public int wordCount; // 0x58
	public FontStyles fontStyle; // 0x5C
	public float fontScale; // 0x60
	public float fontScaleMultiplier; // 0x64
	public int italicAngle; // 0x68
	public float currentFontSize; // 0x6C
	public float baselineOffset; // 0x70
	public float lineOffset; // 0x74
	public TextInfo textInfo; // 0x78
	public LineInfo lineInfo; // 0x80
	public Color32 vertexColor; // 0xE0
	public Color32 underlineColor; // 0xE4
	public Color32 strikethroughColor; // 0xE8
	public Color32 highlightColor; // 0xEC
	public HighlightState highlightState; // 0xF0
	public FontStyleStack basicStyleStack; // 0x104
	public TextProcessingStack<int> italicAngleStack; // 0x110
	public TextProcessingStack<Color32> colorStack; // 0x130
	public TextProcessingStack<Color32> underlineColorStack; // 0x150
	public TextProcessingStack<Color32> strikethroughColorStack; // 0x170
	public TextProcessingStack<Color32> highlightColorStack; // 0x190
	public TextProcessingStack<HighlightState> highlightStateStack; // 0x1B0
	public TextProcessingStack<TextColorGradient> colorGradientStack; // 0x1E0
	public TextProcessingStack<float> sizeStack; // 0x208
	public TextProcessingStack<float> indentStack; // 0x228
	public TextProcessingStack<TextFontWeight> fontWeightStack; // 0x248
	public TextProcessingStack<int> styleStack; // 0x268
	public TextProcessingStack<float> baselineStack; // 0x288
	public TextProcessingStack<int> actionStack; // 0x2A8
	public TextProcessingStack<MaterialReference> materialReferenceStack; // 0x2C8
	public TextProcessingStack<TextAlignment> lineJustificationStack; // 0x320
	public int lastBaseGlyphIndex; // 0x340
	public int spriteAnimationId; // 0x344
	public FontAsset currentFontAsset; // 0x348
	public SpriteAsset currentSpriteAsset; // 0x350
	public Material currentMaterial; // 0x358
	public int currentMaterialIndex; // 0x360
	public Extents meshExtents; // 0x364
	public bool tagNoParsing; // 0x374
	public bool isNonBreakingSpace; // 0x375
	public bool isDrivenLineSpacing; // 0x376
	public Vector3 fxScale; // 0x378
	public Quaternion fxRotation; // 0x384
}


// Namespace: UnityEngine.TextCore.Text
[Extension]
internal static class TextGeneratorUtilities // TypeDefIndex: 6597
{
	// Fields
	public static readonly Vector2 largePositiveVector2; // 0x0
	public static readonly Vector2 largeNegativeVector2; // 0x8

	// Methods

	// RVA: 0x1442AC8 Offset: 0x143EAC8 VA: 0x1442AC8
	public static bool Approximately(float a, float b) { }

	// RVA: 0x1442AF8 Offset: 0x143EAF8 VA: 0x1442AF8
	public static Color32 HexCharsToColor(char[] hexChars, int tagCount) { }

	// RVA: 0x144312C Offset: 0x143F12C VA: 0x144312C
	public static Color32 HexCharsToColor(char[] hexChars, int startIndex, int length) { }

	// RVA: 0x1443100 Offset: 0x143F100 VA: 0x1443100
	public static uint HexToInt(char hex) { }

	// RVA: 0x14433B8 Offset: 0x143F3B8 VA: 0x14433B8
	public static float ConvertToFloat(char[] chars, int startIndex, int length) { }

	// RVA: 0x1443438 Offset: 0x143F438 VA: 0x1443438
	public static float ConvertToFloat(char[] chars, int startIndex, int length, out int lastIndex) { }

	// RVA: 0x1443598 Offset: 0x143F598 VA: 0x1443598
	public static Vector2 PackUV(float x, float y, float scale) { }

	// RVA: -1 Offset: -1
	public static void ResizeInternalArray<T>(ref T[] array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBABE48 Offset: 0xBA7E48 VA: 0xBABE48
	|-TextGeneratorUtilities.ResizeInternalArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static void ResizeInternalArray<T>(ref T[] array, int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBABEA0 Offset: 0xBA7EA0 VA: 0xBABEA0
	|-TextGeneratorUtilities.ResizeInternalArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x14435F8 Offset: 0x143F5F8 VA: 0x14435F8
	internal static void InsertOpeningTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1443BA4 Offset: 0x143FBA4 VA: 0x1443BA4
	internal static void InsertClosingTextStyle(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1443CB4 Offset: 0x143FCB4 VA: 0x1443CB4
	public static bool ReplaceOpeningStyleTag(ref TextBackingContainer sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1443FE4 Offset: 0x143FFE4 VA: 0x1443FE4
	private static bool ReplaceOpeningStyleTag(ref uint[] sourceText, int srcIndex, out int srcOffset, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x144421C Offset: 0x144021C VA: 0x144421C
	public static void ReplaceClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1444348 Offset: 0x1440348 VA: 0x1444348
	internal static void InsertOpeningStyleTag(TextStyle style, ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1444430 Offset: 0x1440430 VA: 0x1444430
	internal static void InsertClosingStyleTag(ref TextProcessingElement[] charBuffer, ref int writeIndex, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1443710 Offset: 0x143F710 VA: 0x1443710
	private static void InsertTextStyleInTextProcessingArray(ref TextProcessingElement[] charBuffer, ref int writeIndex, uint[] styleDefinition, ref int textStyleStackDepth, ref TextProcessingStack<int>[] textStyleStacks, ref TextGenerationSettings generationSettings) { }

	// RVA: 0x1443F00 Offset: 0x143FF00 VA: 0x1443F00
	public static TextStyle GetStyle(TextGenerationSettings generationSetting, int hashCode) { }

	// RVA: 0x1444144 Offset: 0x1440144 VA: 0x1444144
	public static int GetStyleHashCode(ref uint[] text, int index, out int closeIndex) { }

	// RVA: 0x1443E14 Offset: 0x143FE14 VA: 0x1443E14
	public static int GetStyleHashCode(ref TextBackingContainer text, int index, out int closeIndex) { }

	// RVA: 0x144451C Offset: 0x144051C VA: 0x144451C
	public static uint GetUTF16(uint[] text, int i) { }

	// RVA: 0x144499C Offset: 0x144099C VA: 0x144499C
	public static uint GetUTF16(TextBackingContainer text, int i) { }

	// RVA: 0x1444604 Offset: 0x1440604 VA: 0x1444604
	public static uint GetUTF32(uint[] text, int i) { }

	// RVA: 0x1444A58 Offset: 0x1440A58 VA: 0x1444A58
	public static uint GetUTF32(TextBackingContainer text, int i) { }

	// RVA: 0x1444B64 Offset: 0x1440B64 VA: 0x1444B64
	public static void FillCharacterVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x144559C Offset: 0x144159C VA: 0x144559C
	public static void FillSpriteVertexBuffers(int i, bool convertToLinearSpace, TextGenerationSettings generationSettings, TextInfo textInfo) { }

	// RVA: 0x1445E3C Offset: 0x1441E3C VA: 0x1445E3C
	public static void AdjustLineOffset(int startIndex, int endIndex, float offset, TextInfo textInfo) { }

	// RVA: 0x1445FBC Offset: 0x1441FBC VA: 0x1445FBC
	public static void ResizeLineExtents(int size, TextInfo textInfo) { }

	// RVA: 0x1446168 Offset: 0x1442168 VA: 0x1446168
	public static FontStyles LegacyStyleToNewStyle(FontStyle fontStyle) { }

	// RVA: 0x1446178 Offset: 0x1442178 VA: 0x1446178
	public static TextAlignment LegacyAlignmentToNewAlignment(TextAnchor anchor) { }

	// RVA: 0x144619C Offset: 0x144219C VA: 0x144619C
	public static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate) { }

	// RVA: 0x14461B0 Offset: 0x14421B0 VA: 0x14461B0
	public static int GetMarkupTagHashCode(TextBackingContainer styleDefinition, int readIndex) { }

	// RVA: 0x1444784 Offset: 0x1440784 VA: 0x1444784
	public static int GetMarkupTagHashCode(uint[] styleDefinition, int readIndex) { }

	// RVA: 0x1444928 Offset: 0x1440928 VA: 0x1444928
	public static char ToUpperASCIIFast(char c) { }

	// RVA: 0x14462B4 Offset: 0x14422B4 VA: 0x14462B4
	public static uint ToUpperASCIIFast(uint c) { }

	// RVA: 0x1446328 Offset: 0x1442328 VA: 0x1446328
	public static char ToUpperFast(char c) { }

	// RVA: 0x144639C Offset: 0x144239C VA: 0x144639C
	public static int GetAttributeParameters(char[] chars, int startIndex, int length, ref float[] parameters) { }

	// RVA: 0x1446480 Offset: 0x1442480 VA: 0x1446480
	public static bool IsBitmapRendering(GlyphRenderMode glyphRenderMode) { }

	// RVA: 0x14464C0 Offset: 0x14424C0 VA: 0x14464C0
	public static bool IsBaseGlyph(uint c) { }

	[Extension]
	// RVA: 0x14465E8 Offset: 0x14425E8 VA: 0x14465E8
	public static Color MinAlpha(Color c1, Color c2) { }

	// RVA: 0x1445500 Offset: 0x1441500 VA: 0x1445500
	internal static Color32 GammaToLinear(Color32 c) { }

	// RVA: 0x14465F4 Offset: 0x14425F4 VA: 0x14465F4
	private static byte GammaToLinear(byte value) { }

	// RVA: 0x14466A4 Offset: 0x14426A4 VA: 0x14466A4
	public static bool IsValidUTF16(TextBackingContainer text, int index) { }

	// RVA: 0x1446740 Offset: 0x1442740 VA: 0x1446740
	public static bool IsValidUTF32(TextBackingContainer text, int index) { }

	// RVA: 0x14467DC Offset: 0x14427DC VA: 0x14467DC
	internal static bool IsHangul(uint c) { }

	// RVA: 0x144684C Offset: 0x144284C VA: 0x144684C
	internal static bool IsCJK(uint c) { }

	// RVA: 0x1446A04 Offset: 0x1442A04 VA: 0x1446A04
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal class TextHandle // TypeDefIndex: 6598
{
	// Fields
	private Vector2 m_PreferredSize; // 0x10
	private TextInfo m_TextInfo; // 0x18
	private static TextInfo m_LayoutTextInfo; // 0x0
	private int m_PreviousGenerationSettingsHash; // 0x20
	protected TextGenerationSettings textGenerationSettings; // 0x28
	protected static TextGenerationSettings s_LayoutSettings; // 0x8
	private bool isDirty; // 0x30

	// Properties
	internal TextInfo textInfo { get; }
	internal static TextInfo layoutTextInfo { get; }

	// Methods

	// RVA: 0x1446A68 Offset: 0x1442A68 VA: 0x1446A68
	public void .ctor() { }

	// RVA: 0x1446ACC Offset: 0x1442ACC VA: 0x1446ACC
	internal TextInfo get_textInfo() { }

	// RVA: 0x1446C64 Offset: 0x1442C64 VA: 0x1446C64
	internal static TextInfo get_layoutTextInfo() { }

	// RVA: 0x1446D1C Offset: 0x1442D1C VA: 0x1446D1C
	public bool IsDirty() { }

	// RVA: 0x1446D6C Offset: 0x1442D6C VA: 0x1446D6C
	public Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, bool inverseYAxis = True) { }

	// RVA: 0x1446EBC Offset: 0x1442EBC VA: 0x1446EBC
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, bool useXAdvance = False, bool inverseYAxis = True) { }

	// RVA: 0x1447048 Offset: 0x1443048 VA: 0x1447048
	public int GetCursorIndexFromPosition(Vector2 position, bool inverseYAxis = True) { }

	// RVA: 0x14474F0 Offset: 0x14434F0 VA: 0x14474F0
	public int LineDownCharacterPosition(int originalPos) { }

	// RVA: 0x14476CC Offset: 0x14436CC VA: 0x14476CC
	public int LineUpCharacterPosition(int originalPos) { }

	// RVA: 0x1447160 Offset: 0x1443160 VA: 0x1447160
	public int FindNearestLine(Vector2 position) { }

	// RVA: 0x1447230 Offset: 0x1443230 VA: 0x1447230
	public int FindNearestCharacterOnLine(Vector2 position, int line, bool visibleOnly) { }

	// RVA: 0x1447A1C Offset: 0x1443A1C VA: 0x1447A1C
	public int FindIntersectingLink(Vector3 position, bool inverseYAxis = True) { }

	// RVA: 0x1447894 Offset: 0x1443894 VA: 0x1447894
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d) { }

	// RVA: 0x1447954 Offset: 0x1443954 VA: 0x1447954
	private static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point) { }

	// RVA: 0x1447CE0 Offset: 0x1443CE0 VA: 0x1447CE0
	public int GetLineNumber(int index) { }

	// RVA: 0x1447D70 Offset: 0x1443D70 VA: 0x1447D70
	public float GetLineHeight(int lineNumber) { }

	// RVA: 0x1447E00 Offset: 0x1443E00 VA: 0x1447E00
	public float GetLineHeightFromCharacterIndex(int index) { }

	// RVA: 0x1447E94 Offset: 0x1443E94 VA: 0x1447E94
	public float GetCharacterHeightFromIndex(int index) { }

	// RVA: 0x1447F2C Offset: 0x1443F2C VA: 0x1447F2C
	public bool IsElided() { }

	// RVA: 0x1447F6C Offset: 0x1443F6C VA: 0x1447F6C
	public string Substring(int startIndex, int length) { }

	// RVA: 0x14480A4 Offset: 0x14440A4 VA: 0x14480A4
	public int IndexOf(char value, int startIndex) { }

	// RVA: 0x144818C Offset: 0x144418C VA: 0x144818C
	public int LastIndexOf(char value, int startIndex) { }

	// RVA: 0x1448258 Offset: 0x1444258 VA: 0x1448258
	protected float ComputeTextWidth(TextGenerationSettings tgs) { }

	// RVA: 0x14482E4 Offset: 0x14442E4 VA: 0x14482E4
	protected float ComputeTextHeight(TextGenerationSettings tgs) { }

	// RVA: 0x1448270 Offset: 0x1444270 VA: 0x1448270
	protected void UpdatePreferredValues(TextGenerationSettings tgs) { }

	// RVA: 0x14482FC Offset: 0x14442FC VA: 0x14482FC
	protected TextInfo Update(TextGenerationSettings tgs) { }

	// RVA: 0x1448368 Offset: 0x1444368 VA: 0x1448368
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct PageInfo // TypeDefIndex: 6599
{
	// Fields
	public int firstCharacterIndex; // 0x0
	public int lastCharacterIndex; // 0x4
	public float ascender; // 0x8
	public float baseLine; // 0xC
	public float descender; // 0x10
}


// Namespace: UnityEngine.TextCore.Text
internal struct WordInfo // TypeDefIndex: 6600
{
	// Fields
	public int firstCharacterIndex; // 0x0
	public int lastCharacterIndex; // 0x4
	public int characterCount; // 0x8
}


// Namespace: UnityEngine.TextCore.Text
internal class TextInfo // TypeDefIndex: 6601
{
	// Fields
	private static Vector2 s_InfinityVectorPositive; // 0x0
	private static Vector2 s_InfinityVectorNegative; // 0x8
	public int characterCount; // 0x10
	public int spriteCount; // 0x14
	public int spaceCount; // 0x18
	public int wordCount; // 0x1C
	public int linkCount; // 0x20
	public int lineCount; // 0x24
	public int pageCount; // 0x28
	public int materialCount; // 0x2C
	public TextElementInfo[] textElementInfo; // 0x30
	public WordInfo[] wordInfo; // 0x38
	public LinkInfo[] linkInfo; // 0x40
	public LineInfo[] lineInfo; // 0x48
	public PageInfo[] pageInfo; // 0x50
	public MeshInfo[] meshInfo; // 0x58
	public bool isDirty; // 0x60
	public bool hasMultipleColors; // 0x61

	// Methods

	// RVA: 0x1446B2C Offset: 0x1442B2C VA: 0x1446B2C
	public void .ctor() { }

	// RVA: 0x14483D8 Offset: 0x14443D8 VA: 0x14483D8
	internal void Clear() { }

	// RVA: 0x1448438 Offset: 0x1444438 VA: 0x1448438
	internal void ClearMeshInfo(bool updateMesh) { }

	// RVA: 0x14484F4 Offset: 0x14444F4 VA: 0x14484F4
	internal void ClearLineInfo() { }

	// RVA: 0x1448664 Offset: 0x1444664 VA: 0x1448664
	internal void ClearPageInfo() { }

	// RVA: -1 Offset: -1
	internal static void Resize<T>(ref T[] array, int size) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBABEEC Offset: 0xBA7EEC VA: 0xBABEEC
	|-TextInfo.Resize<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	internal static void Resize<T>(ref T[] array, int size, bool isBlockAllocated) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBABF48 Offset: 0xBA7F48 VA: 0xBABF48
	|-TextInfo.Resize<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x14486FC Offset: 0x14446FC VA: 0x14486FC
	private static void .cctor() { }
}


// Namespace: UnityEngine.TextCore.Text
internal enum MarkupTag // TypeDefIndex: 6602
{
	// Fields
	public int value__; // 0x0
	public const MarkupTag BOLD = 66;
	public const MarkupTag SLASH_BOLD = 1613;
	public const MarkupTag ITALIC = 73;
	public const MarkupTag SLASH_ITALIC = 1606;
	public const MarkupTag UNDERLINE = 85;
	public const MarkupTag SLASH_UNDERLINE = 1626;
	public const MarkupTag STRIKETHROUGH = 83;
	public const MarkupTag SLASH_STRIKETHROUGH = 1628;
	public const MarkupTag MARK = 2699125;
	public const MarkupTag SLASH_MARK = 57644506;
	public const MarkupTag SUBSCRIPT = 92132;
	public const MarkupTag SLASH_SUBSCRIPT = 1770219;
	public const MarkupTag SUPERSCRIPT = 92150;
	public const MarkupTag SLASH_SUPERSCRIPT = 1770233;
	public const MarkupTag COLOR = 81999901;
	public const MarkupTag SLASH_COLOR = 1909026194;
	public const MarkupTag ALPHA = 75165780;
	public const MarkupTag A = 65;
	public const MarkupTag SLASH_A = 1614;
	public const MarkupTag SIZE = 3061285;
	public const MarkupTag SLASH_SIZE = 58429962;
	public const MarkupTag SPRITE = -991527447;
	public const MarkupTag NO_BREAK = 2856657;
	public const MarkupTag SLASH_NO_BREAK = 57477502;
	public const MarkupTag STYLE = 100252951;
	public const MarkupTag SLASH_STYLE = 1927738392;
	public const MarkupTag FONT = 2586451;
	public const MarkupTag SLASH_FONT = 57747708;
	public const MarkupTag SLASH_MATERIAL = -1100708252;
	public const MarkupTag LINK = 2656128;
	public const MarkupTag SLASH_LINK = 57686191;
	public const MarkupTag FONT_WEIGHT = -1889896162;
	public const MarkupTag SLASH_FONT_WEIGHT = -757976431;
	public const MarkupTag NO_PARSE = -408011596;
	public const MarkupTag SLASH_NO_PARSE = -294095813;
	public const MarkupTag POSITION = 85420;
	public const MarkupTag SLASH_POSITION = 1777699;
	public const MarkupTag VERTICAL_OFFSET = 1952379995;
	public const MarkupTag SLASH_VERTICAL_OFFSET = -11107948;
	public const MarkupTag SPACE = 100083556;
	public const MarkupTag SLASH_SPACE = 1927873067;
	public const MarkupTag PAGE = 2808691;
	public const MarkupTag SLASH_PAGE = 58683868;
	public const MarkupTag ALIGN = 75138797;
	public const MarkupTag SLASH_ALIGN = 1916026786;
	public const MarkupTag WIDTH = 105793766;
	public const MarkupTag SLASH_WIDTH = 1923459625;
	public const MarkupTag GRADIENT = -1999759898;
	public const MarkupTag SLASH_GRADIENT = -1854491959;
	public const MarkupTag CHARACTER_SPACE = -1584382009;
	public const MarkupTag SLASH_CHARACTER_SPACE = -1394426712;
	public const MarkupTag MONOSPACE = -1340221943;
	public const MarkupTag SLASH_MONOSPACE = -1638865562;
	public const MarkupTag CLASS = 82115566;
	public const MarkupTag INDENT = -1514123076;
	public const MarkupTag SLASH_INDENT = -1496889389;
	public const MarkupTag LINE_INDENT = -844305121;
	public const MarkupTag SLASH_LINE_INDENT = 93886352;
	public const MarkupTag MARGIN = -1355614050;
	public const MarkupTag SLASH_MARGIN = -1649644303;
	public const MarkupTag MARGIN_LEFT = -272933656;
	public const MarkupTag MARGIN_RIGHT = -447416589;
	public const MarkupTag LINE_HEIGHT = -799081892;
	public const MarkupTag SLASH_LINE_HEIGHT = 200452819;
	public const MarkupTag ACTION = -1827519330;
	public const MarkupTag SLASH_ACTION = -1187217679;
	public const MarkupTag SCALE = 100553336;
	public const MarkupTag SLASH_SCALE = 1928413879;
	public const MarkupTag ROTATE = -1000007783;
	public const MarkupTag SLASH_ROTATE = -764695562;
	public const MarkupTag TABLE = 226476955;
	public const MarkupTag SLASH_TABLE = -979118220;
	public const MarkupTag TH = 5862489;
	public const MarkupTag SLASH_TH = 193346070;
	public const MarkupTag TR = 5862467;
	public const MarkupTag SLASH_TR = 193346060;
	public const MarkupTag TD = 5862485;
	public const MarkupTag SLASH_TD = 193346074;
	public const MarkupTag LOWERCASE = -1506899689;
	public const MarkupTag SLASH_LOWERCASE = -1451284584;
	public const MarkupTag ALLCAPS = 218273952;
	public const MarkupTag SLASH_ALLCAPS = -797437649;
	public const MarkupTag UPPERCASE = -305409418;
	public const MarkupTag SLASH_UPPERCASE = -582368199;
	public const MarkupTag SMALLCAPS = -766062114;
	public const MarkupTag SLASH_SMALLCAPS = 199921873;
	public const MarkupTag LIGA = 2655971;
	public const MarkupTag SLASH_LIGA = 57686604;
	public const MarkupTag FRAC = 2598518;
	public const MarkupTag SLASH_FRAC = 57774681;
	public const MarkupTag NAME = 2875623;
	public const MarkupTag INDEX = 84268030;
	public const MarkupTag TINT = 2960519;
	public const MarkupTag ANIM = 2283339;
	public const MarkupTag MATERIAL = 825491659;
	public const MarkupTag HREF = 2535353;
	public const MarkupTag ANGLE = 75347905;
	public const MarkupTag PADDING = -2144568463;
	public const MarkupTag FAMILYNAME = 704251153;
	public const MarkupTag STYLENAME = -1207081936;
	public const MarkupTag RED = 91635;
	public const MarkupTag GREEN = 87065851;
	public const MarkupTag BLUE = 2457214;
	public const MarkupTag YELLOW = -882444668;
	public const MarkupTag ORANGE = -1108587920;
	public const MarkupTag BLACK = 81074727;
	public const MarkupTag WHITE = 105680263;
	public const MarkupTag PURPLE = -1250222130;
	public const MarkupTag BR = 2256;
	public const MarkupTag CR = 2289;
	public const MarkupTag ZWSP = 3288238;
	public const MarkupTag ZWJ = 99623;
	public const MarkupTag NBSP = 2869039;
	public const MarkupTag SHY = 92674;
	public const MarkupTag LEFT = 2660507;
	public const MarkupTag RIGHT = 99937376;
	public const MarkupTag CENTER = -1591113269;
	public const MarkupTag JUSTIFIED = 817091359;
	public const MarkupTag FLUSH = 85552164;
	public const MarkupTag NONE = 2857034;
	public const MarkupTag PLUS = 43;
	public const MarkupTag MINUS = 45;
	public const MarkupTag PX = 2568;
	public const MarkupTag PLUS_PX = 49507;
	public const MarkupTag MINUS_PX = 47461;
	public const MarkupTag EM = 2216;
	public const MarkupTag PLUS_EM = 49091;
	public const MarkupTag MINUS_EM = 46789;
	public const MarkupTag PCT = 85031;
	public const MarkupTag PLUS_PCT = 1634348;
	public const MarkupTag MINUS_PCT = 1567082;
	public const MarkupTag PERCENTAGE = 37;
	public const MarkupTag PLUS_PERCENTAGE = 1454;
	public const MarkupTag MINUS_PERCENTAGE = 1512;
	public const MarkupTag TRUE = 2932022;
	public const MarkupTag FALSE = 85422813;
	public const MarkupTag INVALID = 1585415185;
	public const MarkupTag NOTDEF = 612146780;
	public const MarkupTag NORMAL = -1183493901;
	public const MarkupTag DEFAULT = -620974005;
	public const MarkupTag REGULAR = 1291372090;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TagValueType // TypeDefIndex: 6603
{
	// Fields
	public int value__; // 0x0
	public const TagValueType None = 0;
	public const TagValueType NumericalValue = 1;
	public const TagValueType StringValue = 2;
	public const TagValueType ColorValue = 4;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TagUnitType // TypeDefIndex: 6604
{
	// Fields
	public int value__; // 0x0
	public const TagUnitType Pixels = 0;
	public const TagUnitType FontUnits = 1;
	public const TagUnitType Percentage = 2;
}


// Namespace: UnityEngine.TextCore.Text
internal enum TextProcessingElementType // TypeDefIndex: 6605
{
	// Fields
	public int value__; // 0x0
	public const TextProcessingElementType Undefined = 0;
	public const TextProcessingElementType TextCharacterElement = 1;
	public const TextProcessingElementType TextMarkupElement = 2;
}


// Namespace: UnityEngine.TextCore.Text
internal struct FontStyleStack // TypeDefIndex: 6606
{
	// Fields
	public byte bold; // 0x0
	public byte italic; // 0x1
	public byte underline; // 0x2
	public byte strikethrough; // 0x3
	public byte highlight; // 0x4
	public byte superscript; // 0x5
	public byte subscript; // 0x6
	public byte uppercase; // 0x7
	public byte lowercase; // 0x8
	public byte smallcaps; // 0x9

	// Methods

	// RVA: 0x1448768 Offset: 0x1444768 VA: 0x1448768
	public void Clear() { }

	// RVA: 0x1448774 Offset: 0x1444774 VA: 0x1448774
	public byte Add(FontStyles style) { }

	// RVA: 0x1448870 Offset: 0x1444870 VA: 0x1448870
	public byte Remove(FontStyles style) { }
}


// Namespace: UnityEngine.TextCore.Text
internal struct TextProcessingStack<T> // TypeDefIndex: 6607
{
	// Fields
	public T[] itemStack; // 0x0
	public int index; // 0x0
	private T m_DefaultItem; // 0x0
	private int m_Capacity; // 0x0
	private int m_RolloverSize; // 0x0
	private int m_Count; // 0x0

	// Properties
	public int Count { get; }
	public T current { get; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(T[] stack) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC68410 Offset: 0xC64410 VA: 0xC68410
	|-TextProcessingStack<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(int capacity) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC685D8 Offset: 0xC645D8 VA: 0xC685D8
	|-TextProcessingStack<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public void .ctor(int capacity, int rolloverSize) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC687D4 Offset: 0xC647D4 VA: 0xC687D4
	|-TextProcessingStack<__Il2CppFullySharedGenericType>..ctor
	*/

	// RVA: -1 Offset: -1
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC689D4 Offset: 0xC649D4 VA: 0xC689D4
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.get_Count
	*/

	// RVA: -1 Offset: -1
	public T get_current() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC68A18 Offset: 0xC64A18 VA: 0xC68A18
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.get_current
	*/

	// RVA: -1 Offset: -1
	internal static void SetDefault(TextProcessingStack<T>[] stack, T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC68BFC Offset: 0xC64BFC VA: 0xC68BFC
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.SetDefault
	*/

	// RVA: -1 Offset: -1
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC68D98 Offset: 0xC64D98 VA: 0xC68D98
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.Clear
	*/

	// RVA: -1 Offset: -1
	public void SetDefault(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC68E34 Offset: 0xC64E34 VA: 0xC68E34
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.SetDefault
	*/

	// RVA: -1 Offset: -1
	public void Add(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC69154 Offset: 0xC65154 VA: 0xC69154
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.Add
	*/

	// RVA: -1 Offset: -1
	public T Remove() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC693D8 Offset: 0xC653D8 VA: 0xC693D8
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.Remove
	*/

	// RVA: -1 Offset: -1
	public void Push(T item) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC69724 Offset: 0xC65724 VA: 0xC69724
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.Push
	*/

	// RVA: -1 Offset: -1
	public T Pop() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC69CC8 Offset: 0xC65CC8 VA: 0xC69CC8
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.Pop
	*/

	// RVA: -1 Offset: -1
	public T Peek() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC6A28C Offset: 0xC6628C VA: 0xC6A28C
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.Peek
	*/

	// RVA: -1 Offset: -1
	public T CurrentItem() { }
	/* GenericInstMethod :
	|
	|-RVA: 0xC6A470 Offset: 0xC66470 VA: 0xC6A470
	|-TextProcessingStack<__Il2CppFullySharedGenericType>.CurrentItem
	*/
}


// Namespace: 
private struct TextResourceManager.FontAssetRef // TypeDefIndex: 6608
{
	// Fields
	public int nameHashCode; // 0x0
	public int familyNameHashCode; // 0x4
	public int styleNameHashCode; // 0x8
	public long familyNameAndStyleHashCode; // 0x10
	public readonly FontAsset fontAsset; // 0x18

	// Methods

	// RVA: 0x1448EFC Offset: 0x1444EFC VA: 0x1448EFC
	public void .ctor(int nameHashCode, int familyNameHashCode, int styleNameHashCode, FontAsset fontAsset) { }
}


// Namespace: UnityEngine.TextCore.Text
internal class TextResourceManager // TypeDefIndex: 6609
{
	// Fields
	private static readonly Dictionary<int, TextResourceManager.FontAssetRef> s_FontAssetReferences; // 0x0
	private static readonly Dictionary<int, FontAsset> s_FontAssetNameReferenceLookup; // 0x8
	private static readonly Dictionary<long, FontAsset> s_FontAssetFamilyNameAndStyleReferenceLookup; // 0x10
	private static readonly List<int> s_FontAssetRemovalList; // 0x18
	private static readonly int k_RegularStyleHashCode; // 0x20

	// Methods

	// RVA: 0x14489B4 Offset: 0x14449B4 VA: 0x14489B4
	internal static void AddFontAsset(FontAsset fontAsset) { }

	// RVA: 0x1448F1C Offset: 0x1444F1C VA: 0x1448F1C
	private static void .cctor() { }
}


// Namespace: 
[Serializable]
private struct TextSettings.FontReferenceMap // TypeDefIndex: 6610
{
	// Fields
	public Font font; // 0x0
	public FontAsset fontAsset; // 0x8

	// Methods

	// RVA: 0x14499E8 Offset: 0x14459E8 VA: 0x14499E8
	public void .ctor(Font font, FontAsset fontAsset) { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class TextSettings : ScriptableObject // TypeDefIndex: 6611
{
	// Fields
	[SerializeField]
	protected string m_Version; // 0x18
	[SerializeField]
	[FormerlySerializedAs("m_defaultFontAsset")]
	protected FontAsset m_DefaultFontAsset; // 0x20
	[SerializeField]
	[FormerlySerializedAs("m_defaultFontAssetPath")]
	protected string m_DefaultFontAssetPath; // 0x28
	[FormerlySerializedAs("m_fallbackFontAssets")]
	[SerializeField]
	protected List<FontAsset> m_FallbackFontAssets; // 0x30
	[FormerlySerializedAs("m_matchMaterialPreset")]
	[SerializeField]
	protected bool m_MatchMaterialPreset; // 0x38
	[FormerlySerializedAs("m_missingGlyphCharacter")]
	[SerializeField]
	protected int m_MissingCharacterUnicode; // 0x3C
	[SerializeField]
	protected bool m_ClearDynamicDataOnBuild; // 0x40
	[SerializeField]
	[FormerlySerializedAs("m_defaultSpriteAsset")]
	protected SpriteAsset m_DefaultSpriteAsset; // 0x48
	[FormerlySerializedAs("m_defaultSpriteAssetPath")]
	[SerializeField]
	protected string m_DefaultSpriteAssetPath; // 0x50
	[SerializeField]
	protected List<SpriteAsset> m_FallbackSpriteAssets; // 0x58
	[SerializeField]
	protected uint m_MissingSpriteCharacterUnicode; // 0x60
	[FormerlySerializedAs("m_defaultStyleSheet")]
	[SerializeField]
	protected TextStyleSheet m_DefaultStyleSheet; // 0x68
	[SerializeField]
	protected string m_StyleSheetsResourcePath; // 0x70
	[FormerlySerializedAs("m_defaultColorGradientPresetsPath")]
	[SerializeField]
	protected string m_DefaultColorGradientPresetsPath; // 0x78
	[SerializeField]
	protected UnicodeLineBreakingRules m_UnicodeLineBreakingRules; // 0x80
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules; // 0x88
	[SerializeField]
	[FormerlySerializedAs("m_warningsDisabled")]
	protected bool m_DisplayWarnings; // 0x89
	internal Dictionary<int, FontAsset> m_FontLookup; // 0x90
	private List<TextSettings.FontReferenceMap> m_FontReferences; // 0x98

	// Properties
	public string version { get; set; }
	public FontAsset defaultFontAsset { get; set; }
	public string defaultFontAssetPath { get; set; }
	public List<FontAsset> fallbackFontAssets { get; set; }
	public bool matchMaterialPreset { get; set; }
	public int missingCharacterUnicode { get; set; }
	public bool clearDynamicDataOnBuild { get; set; }
	public SpriteAsset defaultSpriteAsset { get; set; }
	public string defaultSpriteAssetPath { get; set; }
	public List<SpriteAsset> fallbackSpriteAssets { get; set; }
	public uint missingSpriteCharacterUnicode { get; set; }
	public TextStyleSheet defaultStyleSheet { get; set; }
	public string styleSheetsResourcePath { get; set; }
	public string defaultColorGradientPresetsPath { get; set; }
	public UnicodeLineBreakingRules lineBreakingRules { get; set; }
	public bool useModernHangulLineBreakingRules { get; set; }
	public bool displayWarnings { get; set; }

	// Methods

	// RVA: 0x1449134 Offset: 0x1445134 VA: 0x1449134
	public string get_version() { }

	// RVA: 0x144913C Offset: 0x144513C VA: 0x144913C
	internal void set_version(string value) { }

	// RVA: 0x1449144 Offset: 0x1445144 VA: 0x1449144
	public FontAsset get_defaultFontAsset() { }

	// RVA: 0x144914C Offset: 0x144514C VA: 0x144914C
	public void set_defaultFontAsset(FontAsset value) { }

	// RVA: 0x1449154 Offset: 0x1445154 VA: 0x1449154
	public string get_defaultFontAssetPath() { }

	// RVA: 0x144915C Offset: 0x144515C VA: 0x144915C
	public void set_defaultFontAssetPath(string value) { }

	// RVA: 0x1449164 Offset: 0x1445164 VA: 0x1449164
	public List<FontAsset> get_fallbackFontAssets() { }

	// RVA: 0x144916C Offset: 0x144516C VA: 0x144916C
	public void set_fallbackFontAssets(List<FontAsset> value) { }

	// RVA: 0x1449174 Offset: 0x1445174 VA: 0x1449174
	public bool get_matchMaterialPreset() { }

	// RVA: 0x144917C Offset: 0x144517C VA: 0x144917C
	public void set_matchMaterialPreset(bool value) { }

	// RVA: 0x1449188 Offset: 0x1445188 VA: 0x1449188
	public int get_missingCharacterUnicode() { }

	// RVA: 0x1449190 Offset: 0x1445190 VA: 0x1449190
	public void set_missingCharacterUnicode(int value) { }

	// RVA: 0x1449198 Offset: 0x1445198 VA: 0x1449198
	public bool get_clearDynamicDataOnBuild() { }

	// RVA: 0x14491A0 Offset: 0x14451A0 VA: 0x14491A0
	public void set_clearDynamicDataOnBuild(bool value) { }

	// RVA: 0x14491AC Offset: 0x14451AC VA: 0x14491AC
	public SpriteAsset get_defaultSpriteAsset() { }

	// RVA: 0x14491B4 Offset: 0x14451B4 VA: 0x14491B4
	public void set_defaultSpriteAsset(SpriteAsset value) { }

	// RVA: 0x14491BC Offset: 0x14451BC VA: 0x14491BC
	public string get_defaultSpriteAssetPath() { }

	// RVA: 0x14491C4 Offset: 0x14451C4 VA: 0x14491C4
	public void set_defaultSpriteAssetPath(string value) { }

	// RVA: 0x14491CC Offset: 0x14451CC VA: 0x14491CC
	public List<SpriteAsset> get_fallbackSpriteAssets() { }

	// RVA: 0x14491D4 Offset: 0x14451D4 VA: 0x14491D4
	public void set_fallbackSpriteAssets(List<SpriteAsset> value) { }

	// RVA: 0x14491DC Offset: 0x14451DC VA: 0x14491DC
	public uint get_missingSpriteCharacterUnicode() { }

	// RVA: 0x14491E4 Offset: 0x14451E4 VA: 0x14491E4
	public void set_missingSpriteCharacterUnicode(uint value) { }

	// RVA: 0x14491EC Offset: 0x14451EC VA: 0x14491EC
	public TextStyleSheet get_defaultStyleSheet() { }

	// RVA: 0x14491F4 Offset: 0x14451F4 VA: 0x14491F4
	public void set_defaultStyleSheet(TextStyleSheet value) { }

	// RVA: 0x14491FC Offset: 0x14451FC VA: 0x14491FC
	public string get_styleSheetsResourcePath() { }

	// RVA: 0x1449204 Offset: 0x1445204 VA: 0x1449204
	public void set_styleSheetsResourcePath(string value) { }

	// RVA: 0x144920C Offset: 0x144520C VA: 0x144920C
	public string get_defaultColorGradientPresetsPath() { }

	// RVA: 0x1449214 Offset: 0x1445214 VA: 0x1449214
	public void set_defaultColorGradientPresetsPath(string value) { }

	// RVA: 0x144921C Offset: 0x144521C VA: 0x144921C
	public UnicodeLineBreakingRules get_lineBreakingRules() { }

	// RVA: 0x144947C Offset: 0x144547C VA: 0x144947C
	public void set_lineBreakingRules(UnicodeLineBreakingRules value) { }

	// RVA: 0x1449484 Offset: 0x1445484 VA: 0x1449484
	public bool get_useModernHangulLineBreakingRules() { }

	// RVA: 0x144948C Offset: 0x144548C VA: 0x144948C
	public void set_useModernHangulLineBreakingRules(bool value) { }

	// RVA: 0x1449498 Offset: 0x1445498 VA: 0x1449498
	public bool get_displayWarnings() { }

	// RVA: 0x14494A0 Offset: 0x14454A0 VA: 0x14494A0
	public void set_displayWarnings(bool value) { }

	// RVA: 0x14494AC Offset: 0x14454AC VA: 0x14494AC
	private void OnEnable() { }

	// RVA: 0x14494C4 Offset: 0x14454C4 VA: 0x14494C4
	protected void InitializeFontReferenceLookup() { }

	// RVA: 0x1449708 Offset: 0x1445708 VA: 0x1449708
	protected FontAsset GetCachedFontAssetInternal(Font font) { }

	// RVA: 0x14499F0 Offset: 0x14459F0 VA: 0x14499F0
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
public static class TextShaderUtilities // TypeDefIndex: 6612
{
	// Fields
	public static int ID_MainTex; // 0x0
	public static int ID_FaceTex; // 0x4
	public static int ID_FaceColor; // 0x8
	public static int ID_FaceDilate; // 0xC
	public static int ID_Shininess; // 0x10
	public static int ID_OutlineOffset1; // 0x14
	public static int ID_OutlineOffset2; // 0x18
	public static int ID_OutlineOffset3; // 0x1C
	public static int ID_OutlineMode; // 0x20
	public static int ID_IsoPerimeter; // 0x24
	public static int ID_Softness; // 0x28
	public static int ID_UnderlayColor; // 0x2C
	public static int ID_UnderlayOffsetX; // 0x30
	public static int ID_UnderlayOffsetY; // 0x34
	public static int ID_UnderlayDilate; // 0x38
	public static int ID_UnderlaySoftness; // 0x3C
	public static int ID_UnderlayOffset; // 0x40
	public static int ID_UnderlayIsoPerimeter; // 0x44
	public static int ID_WeightNormal; // 0x48
	public static int ID_WeightBold; // 0x4C
	public static int ID_OutlineTex; // 0x50
	public static int ID_OutlineWidth; // 0x54
	public static int ID_OutlineSoftness; // 0x58
	public static int ID_OutlineColor; // 0x5C
	public static int ID_Outline2Color; // 0x60
	public static int ID_Outline2Width; // 0x64
	public static int ID_Padding; // 0x68
	public static int ID_GradientScale; // 0x6C
	public static int ID_ScaleX; // 0x70
	public static int ID_ScaleY; // 0x74
	public static int ID_PerspectiveFilter; // 0x78
	public static int ID_Sharpness; // 0x7C
	public static int ID_TextureWidth; // 0x80
	public static int ID_TextureHeight; // 0x84
	public static int ID_BevelAmount; // 0x88
	public static int ID_GlowColor; // 0x8C
	public static int ID_GlowOffset; // 0x90
	public static int ID_GlowPower; // 0x94
	public static int ID_GlowOuter; // 0x98
	public static int ID_GlowInner; // 0x9C
	public static int ID_LightAngle; // 0xA0
	public static int ID_EnvMap; // 0xA4
	public static int ID_EnvMatrix; // 0xA8
	public static int ID_EnvMatrixRotation; // 0xAC
	public static int ID_MaskCoord; // 0xB0
	public static int ID_ClipRect; // 0xB4
	public static int ID_MaskSoftnessX; // 0xB8
	public static int ID_MaskSoftnessY; // 0xBC
	public static int ID_VertexOffsetX; // 0xC0
	public static int ID_VertexOffsetY; // 0xC4
	public static int ID_UseClipRect; // 0xC8
	public static int ID_StencilID; // 0xCC
	public static int ID_StencilOp; // 0xD0
	public static int ID_StencilComp; // 0xD4
	public static int ID_StencilReadMask; // 0xD8
	public static int ID_StencilWriteMask; // 0xDC
	public static int ID_ShaderFlags; // 0xE0
	public static int ID_ScaleRatio_A; // 0xE4
	public static int ID_ScaleRatio_B; // 0xE8
	public static int ID_ScaleRatio_C; // 0xEC
	public static string Keyword_Bevel; // 0xF0
	public static string Keyword_Glow; // 0xF8
	public static string Keyword_Underlay; // 0x100
	public static string Keyword_Ratios; // 0x108
	public static string Keyword_MASK_SOFT; // 0x110
	public static string Keyword_MASK_HARD; // 0x118
	public static string Keyword_MASK_TEX; // 0x120
	public static string Keyword_Outline; // 0x128
	public static string ShaderTag_ZTestMode; // 0x130
	public static string ShaderTag_CullMode; // 0x138
	private static float m_clamp; // 0x140
	public static bool isInitialized; // 0x144
	private static Shader k_ShaderRef_MobileSDF; // 0x148
	private static Shader k_ShaderRef_MobileBitmap; // 0x150

	// Properties
	internal static Shader ShaderRef_MobileSDF { get; }
	internal static Shader ShaderRef_MobileBitmap { get; }

	// Methods

	// RVA: 0x1449AF4 Offset: 0x1445AF4 VA: 0x1449AF4
	internal static Shader get_ShaderRef_MobileSDF() { }

	// RVA: 0x1449CDC Offset: 0x1445CDC VA: 0x1449CDC
	internal static Shader get_ShaderRef_MobileBitmap() { }

	// RVA: 0x1449EC4 Offset: 0x1445EC4 VA: 0x1449EC4
	private static void .cctor() { }

	// RVA: 0x144A040 Offset: 0x1446040 VA: 0x144A040
	internal static void GetShaderPropertyIDs() { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class TextStyle // TypeDefIndex: 6613
{
	// Fields
	internal static TextStyle k_NormalStyle; // 0x0
	[SerializeField]
	private string m_Name; // 0x10
	[SerializeField]
	private int m_HashCode; // 0x18
	[SerializeField]
	private string m_OpeningDefinition; // 0x20
	[SerializeField]
	private string m_ClosingDefinition; // 0x28
	[SerializeField]
	private uint[] m_OpeningTagArray; // 0x30
	[SerializeField]
	private uint[] m_ClosingTagArray; // 0x38
	[SerializeField]
	internal uint[] m_OpeningTagUnicodeArray; // 0x40
	[SerializeField]
	internal uint[] m_ClosingTagUnicodeArray; // 0x48

	// Properties
	public int hashCode { get; }
	public uint[] styleOpeningTagArray { get; }
	public uint[] styleClosingTagArray { get; }

	// Methods

	// RVA: 0x1443700 Offset: 0x143F700 VA: 0x1443700
	public int get_hashCode() { }

	// RVA: 0x1443708 Offset: 0x143F708 VA: 0x1443708
	public uint[] get_styleOpeningTagArray() { }

	// RVA: 0x1443CAC Offset: 0x143FCAC VA: 0x1443CAC
	public uint[] get_styleClosingTagArray() { }

	// RVA: 0x144AB08 Offset: 0x1446B08 VA: 0x144AB08
	internal void .ctor(string styleName, string styleOpeningDefinition, string styleClosingDefinition) { }

	// RVA: 0x144AB54 Offset: 0x1446B54 VA: 0x144AB54
	public void RefreshStyle() { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class TextStyleSheet : ScriptableObject // TypeDefIndex: 6614
{
	// Fields
	[SerializeField]
	private List<TextStyle> m_StyleList; // 0x18
	private Dictionary<int, TextStyle> m_StyleLookupDictionary; // 0x20

	// Properties
	internal List<TextStyle> styles { get; }

	// Methods

	// RVA: 0x144AD08 Offset: 0x1446D08 VA: 0x144AD08
	internal List<TextStyle> get_styles() { }

	// RVA: 0x144AD10 Offset: 0x1446D10 VA: 0x144AD10
	private void Reset() { }

	// RVA: 0x144489C Offset: 0x144089C VA: 0x144489C
	public TextStyle GetStyle(int hashCode) { }

	// RVA: 0x144AFC4 Offset: 0x1446FC4 VA: 0x144AFC4
	public TextStyle GetStyle(string name) { }

	// RVA: 0x144B05C Offset: 0x144705C VA: 0x144B05C
	public void RefreshStyles() { }

	// RVA: 0x144AD14 Offset: 0x1446D14 VA: 0x144AD14
	private void LoadStyleDictionaryInternal() { }

	// RVA: 0x144B060 Offset: 0x1447060 VA: 0x144B060
	public void .ctor() { }
}


// Namespace: UnityEngine.TextCore.Text
[Extension]
internal static class TextUtilities // TypeDefIndex: 6615
{
	// Methods

	// RVA: 0x144B0E0 Offset: 0x14470E0 VA: 0x144B0E0
	internal static char ToUpperFast(char c) { }

	// RVA: 0x14490C4 Offset: 0x14450C4 VA: 0x14490C4
	public static int GetHashCodeCaseInSensitive(string s) { }

	[Extension]
	// RVA: 0x144B154 Offset: 0x1447154 VA: 0x144B154
	internal static string UintToString(List<uint> unicodes) { }
}


// Namespace: UnityEngine.TextCore.Text
[Serializable]
public class UnicodeLineBreakingRules // TypeDefIndex: 6616
{
	// Fields
	[SerializeField]
	private TextAsset m_UnicodeLineBreakingRules; // 0x10
	[SerializeField]
	private TextAsset m_LeadingCharacters; // 0x18
	[SerializeField]
	private TextAsset m_FollowingCharacters; // 0x20
	[SerializeField]
	private bool m_UseModernHangulLineBreakingRules; // 0x28
	private HashSet<uint> m_LeadingCharactersLookup; // 0x30
	private HashSet<uint> m_FollowingCharactersLookup; // 0x38

	// Properties
	public TextAsset leadingCharacters { get; }
	public TextAsset followingCharacters { get; }
	internal HashSet<uint> leadingCharactersLookup { get; }
	internal HashSet<uint> followingCharactersLookup { get; }
	public bool useModernHangulLineBreakingRules { get; }

	// Methods

	// RVA: 0x144B240 Offset: 0x1447240 VA: 0x144B240
	public TextAsset get_leadingCharacters() { }

	// RVA: 0x144B248 Offset: 0x1447248 VA: 0x144B248
	public TextAsset get_followingCharacters() { }

	// RVA: 0x144B250 Offset: 0x1447250 VA: 0x144B250
	internal HashSet<uint> get_leadingCharactersLookup() { }

	// RVA: 0x144B44C Offset: 0x144744C VA: 0x144B44C
	internal HashSet<uint> get_followingCharactersLookup() { }

	// RVA: 0x144B474 Offset: 0x1447474 VA: 0x144B474
	public bool get_useModernHangulLineBreakingRules() { }

	// RVA: 0x1449298 Offset: 0x1445298 VA: 0x1449298
	internal void LoadLineBreakingRules() { }

	// RVA: 0x144B278 Offset: 0x1447278 VA: 0x144B278
	internal void LoadLineBreakingRules(TextAsset leadingRules, TextAsset followingRules) { }

	// RVA: 0x144B47C Offset: 0x144747C VA: 0x144B47C
	private static HashSet<uint> GetCharacters(TextAsset file) { }

	// RVA: 0x1449290 Offset: 0x1445290 VA: 0x1449290
	public void .ctor() { }
}
