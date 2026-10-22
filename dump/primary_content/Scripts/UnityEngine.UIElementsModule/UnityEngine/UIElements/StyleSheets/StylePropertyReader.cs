using System.Collections.Generic;

namespace UnityEngine.UIElements.StyleSheets;

internal class StylePropertyReader
{
	internal delegate int GetCursorIdFunction(StyleSheet sheet, StyleValueHandle handle);

	internal static GetCursorIdFunction getCursorIdFunc;

	private List<StylePropertyValue> m_Values;

	private List<int> m_ValueCount;

	private StyleVariableResolver m_Resolver;

	private StyleSheet m_Sheet;

	private StyleProperty[] m_Properties;

	private StylePropertyId[] m_PropertyIds;

	private int m_CurrentValueIndex;

	private int m_CurrentPropertyIndex;

	public StyleProperty property { get; private set; }

	public StylePropertyId propertyId { get; private set; }

	public int valueCount { get; private set; }

	public float dpiScaling { get; private set; }

	public void SetContext(StyleSheet sheet, StyleComplexSelector selector, StyleVariableContext varContext, float dpiScaling = 1f)
	{
	}

	public void SetInlineContext(StyleSheet sheet, StyleProperty[] properties, StylePropertyId[] propertyIds, float dpiScaling = 1f)
	{
	}

	public StylePropertyId MoveNextProperty()
	{
		return StylePropertyId.Unknown;
	}

	public StylePropertyValue GetValue(int index)
	{
		return default;
	}

	public StyleValueType GetValueType(int index)
	{
		return StyleValueType.Invalid;
	}

	public bool IsValueType(int index, StyleValueType type)
	{
		return false;
	}

	public bool IsKeyword(int index, StyleValueKeyword keyword)
	{
		return false;
	}

	public string ReadAsString(int index)
	{
		return null;
	}

	public Length ReadLength(int index)
	{
		return default;
	}

	public TimeValue ReadTimeValue(int index)
	{
		return default;
	}

	public Translate ReadTranslate(int index)
	{
		return default;
	}

	public TransformOrigin ReadTransformOrigin(int index)
	{
		return default;
	}

	public Rotate ReadRotate(int index)
	{
		return default;
	}

	public Scale ReadScale(int index)
	{
		return default;
	}

	public float ReadFloat(int index)
	{
		return 0f;
	}

	public int ReadInt(int index)
	{
		return 0;
	}

	public Color ReadColor(int index)
	{
		return default;
	}

	public int ReadEnum(StyleEnumType enumType, int index)
	{
		return 0;
	}

	public FontDefinition ReadFontDefinition(int index)
	{
		return default;
	}

	public Font ReadFont(int index)
	{
		return null;
	}

	public Background ReadBackground(int index)
	{
		return default;
	}

	public Cursor ReadCursor(int index)
	{
		return default;
	}

	public TextShadow ReadTextShadow(int index)
	{
		return default;
	}

	public BackgroundPosition ReadBackgroundPositionX(int index)
	{
		return default;
	}

	public BackgroundPosition ReadBackgroundPositionY(int index)
	{
		return default;
	}

	private BackgroundPosition ReadBackgroundPosition(int index, BackgroundPositionKeyword keyword)
	{
		return default;
	}

	public BackgroundRepeat ReadBackgroundRepeat(int index)
	{
		return default;
	}

	public BackgroundSize ReadBackgroundSize(int index)
	{
		return default;
	}

	public void ReadListEasingFunction(List<EasingFunction> list, int index)
	{
	}

	public void ReadListTimeValue(List<TimeValue> list, int index)
	{
	}

	public void ReadListStylePropertyName(List<StylePropertyName> list, int index)
	{
	}

	private void LoadProperties()
	{
	}

	private void SetCurrentProperty()
	{
	}

	public static TransformOrigin ReadTransformOrigin(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue zVvalue)
	{
		return default;
	}

	private static Length ReadTransformOriginEnum(StylePropertyValue value, out bool isVertical, out bool isHorizontal)
	{
		isVertical = default;
		isHorizontal = default;
		return default;
	}

	public static Translate ReadTranslate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default;
	}

	public static Scale ReadScale(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default;
	}

	public static Rotate ReadRotate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default;
	}

	private static bool TryReadEnum(StyleEnumType enumType, StylePropertyValue value, out int intValue)
	{
		intValue = default;
		return false;
	}

	private static int ReadEnum(StyleEnumType enumType, StylePropertyValue value)
	{
		return 0;
	}

	public static Angle ReadAngle(StylePropertyValue value)
	{
		return default;
	}

	public static BackgroundPosition ReadBackgroundPosition(int valCount, StylePropertyValue val1, StylePropertyValue val2, BackgroundPositionKeyword keyword)
	{
		return default;
	}

	public static BackgroundRepeat ReadBackgroundRepeat(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default;
	}

	public static BackgroundSize ReadBackgroundSize(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default;
	}

	internal static bool TryGetImageSourceFromValue(StylePropertyValue propertyValue, float dpiScaling, out ImageSource source)
	{
		source = default;
		return false;
	}
}
