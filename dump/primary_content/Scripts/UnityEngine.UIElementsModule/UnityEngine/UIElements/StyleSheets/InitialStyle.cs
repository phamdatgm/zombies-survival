using System.Collections.Generic;

namespace UnityEngine.UIElements.StyleSheets;

internal static class InitialStyle
{
	private static ComputedStyle s_InitialStyle;

	public static Align alignContent => Align.Auto;

	public static Align alignItems => Align.Auto;

	public static Align alignSelf => Align.Auto;

	public static Color backgroundColor => default;

	public static Background backgroundImage => default;

	public static BackgroundPosition backgroundPositionX => default;

	public static BackgroundPosition backgroundPositionY => default;

	public static BackgroundRepeat backgroundRepeat => default;

	public static BackgroundSize backgroundSize => default;

	public static Color borderBottomColor => default;

	public static Length borderBottomLeftRadius => default;

	public static Length borderBottomRightRadius => default;

	public static float borderBottomWidth => 0f;

	public static Color borderLeftColor => default;

	public static float borderLeftWidth => 0f;

	public static Color borderRightColor => default;

	public static float borderRightWidth => 0f;

	public static Color borderTopColor => default;

	public static Length borderTopLeftRadius => default;

	public static Length borderTopRightRadius => default;

	public static float borderTopWidth => 0f;

	public static Length bottom => default;

	public static Color color => default;

	public static Cursor cursor => default;

	public static DisplayStyle display => DisplayStyle.Flex;

	public static Length flexBasis => default;

	public static FlexDirection flexDirection => FlexDirection.Column;

	public static float flexGrow => 0f;

	public static float flexShrink => 0f;

	public static Wrap flexWrap => Wrap.NoWrap;

	public static Length fontSize => default;

	public static Length height => default;

	public static Justify justifyContent => Justify.FlexStart;

	public static Length left => default;

	public static Length letterSpacing => default;

	public static Length marginBottom => default;

	public static Length marginLeft => default;

	public static Length marginRight => default;

	public static Length marginTop => default;

	public static Length maxHeight => default;

	public static Length maxWidth => default;

	public static Length minHeight => default;

	public static Length minWidth => default;

	public static float opacity => 0f;

	public static OverflowInternal overflow => OverflowInternal.Visible;

	public static Length paddingBottom => default;

	public static Length paddingLeft => default;

	public static Length paddingRight => default;

	public static Length paddingTop => default;

	public static Position position => Position.Relative;

	public static Length right => default;

	public static Rotate rotate => default;

	public static Scale scale => default;

	public static TextOverflow textOverflow => TextOverflow.Clip;

	public static TextShadow textShadow => default;

	public static Length top => default;

	public static TransformOrigin transformOrigin => default;

	public static List<TimeValue> transitionDelay => null;

	public static List<TimeValue> transitionDuration => null;

	public static List<StylePropertyName> transitionProperty => null;

	public static List<EasingFunction> transitionTimingFunction => null;

	public static Translate translate => default;

	public static Color unityBackgroundImageTintColor => default;

	public static Font unityFont => null;

	public static FontDefinition unityFontDefinition => default;

	public static FontStyle unityFontStyleAndWeight => FontStyle.Normal;

	public static OverflowClipBox unityOverflowClipBox => OverflowClipBox.PaddingBox;

	public static Length unityParagraphSpacing => default;

	public static int unitySliceBottom => 0;

	public static int unitySliceLeft => 0;

	public static int unitySliceRight => 0;

	public static float unitySliceScale => 0f;

	public static int unitySliceTop => 0;

	public static TextAnchor unityTextAlign => TextAnchor.UpperLeft;

	public static Color unityTextOutlineColor => default;

	public static float unityTextOutlineWidth => 0f;

	public static TextOverflowPosition unityTextOverflowPosition => TextOverflowPosition.End;

	public static Visibility visibility => Visibility.Visible;

	public static WhiteSpace whiteSpace => WhiteSpace.Normal;

	public static Length width => default;

	public static Length wordSpacing => default;

	public static ref ComputedStyle Get()
	{
		throw null;
	}

	public static ComputedStyle Acquire()
	{
		return default;
	}

	static InitialStyle()
	{
	}
}
