using System;
using System.Collections.Generic;
using UnityEngine.UIElements.StyleSheets;
using UnityEngine.Yoga;

namespace UnityEngine.UIElements;

internal struct ComputedStyle
{
	public StyleDataRef<InheritedData> inheritedData;

	public StyleDataRef<LayoutData> layoutData;

	public StyleDataRef<RareData> rareData;

	public StyleDataRef<TransformData> transformData;

	public StyleDataRef<TransitionData> transitionData;

	public StyleDataRef<VisualData> visualData;

	public YogaNode yogaNode;

	public Dictionary<string, StylePropertyValue> customProperties;

	public long matchingRulesHash;

	public float dpiScaling;

	public ComputedTransitionProperty[] computedTransitions;

	public int customPropertiesCount => 0;

	public bool hasTransition => false;

	public Align alignContent => Align.Auto;

	public Align alignItems => Align.Auto;

	public Align alignSelf => Align.Auto;

	public Color backgroundColor => default;

	public Background backgroundImage => default;

	public BackgroundPosition backgroundPositionX => default;

	public BackgroundPosition backgroundPositionY => default;

	public BackgroundRepeat backgroundRepeat => default;

	public BackgroundSize backgroundSize => default;

	public Color borderBottomColor => default;

	public Length borderBottomLeftRadius => default;

	public Length borderBottomRightRadius => default;

	public float borderBottomWidth => 0f;

	public Color borderLeftColor => default;

	public float borderLeftWidth => 0f;

	public Color borderRightColor => default;

	public float borderRightWidth => 0f;

	public Color borderTopColor => default;

	public Length borderTopLeftRadius => default;

	public Length borderTopRightRadius => default;

	public float borderTopWidth => 0f;

	public Length bottom => default;

	public Color color => default;

	public Cursor cursor => default;

	public DisplayStyle display => DisplayStyle.Flex;

	public Length flexBasis => default;

	public FlexDirection flexDirection => FlexDirection.Column;

	public float flexGrow => 0f;

	public float flexShrink => 0f;

	public Wrap flexWrap => Wrap.NoWrap;

	public Length fontSize => default;

	public Length height => default;

	public Justify justifyContent => Justify.FlexStart;

	public Length left => default;

	public Length letterSpacing => default;

	public Length marginBottom => default;

	public Length marginLeft => default;

	public Length marginRight => default;

	public Length marginTop => default;

	public Length maxHeight => default;

	public Length maxWidth => default;

	public Length minHeight => default;

	public Length minWidth => default;

	public float opacity => 0f;

	public OverflowInternal overflow => OverflowInternal.Visible;

	public Length paddingBottom => default;

	public Length paddingLeft => default;

	public Length paddingRight => default;

	public Length paddingTop => default;

	public Position position => Position.Relative;

	public Length right => default;

	public Rotate rotate => default;

	public Scale scale => default;

	public TextOverflow textOverflow => TextOverflow.Clip;

	public TextShadow textShadow => default;

	public Length top => default;

	public TransformOrigin transformOrigin => default;

	public List<TimeValue> transitionDelay => null;

	public List<TimeValue> transitionDuration => null;

	public List<StylePropertyName> transitionProperty => null;

	public List<EasingFunction> transitionTimingFunction => null;

	public Translate translate => default;

	public Color unityBackgroundImageTintColor => default;

	public Font unityFont => null;

	public FontDefinition unityFontDefinition => default;

	public FontStyle unityFontStyleAndWeight => FontStyle.Normal;

	public OverflowClipBox unityOverflowClipBox => OverflowClipBox.PaddingBox;

	public Length unityParagraphSpacing => default;

	public int unitySliceBottom => 0;

	public int unitySliceLeft => 0;

	public int unitySliceRight => 0;

	public float unitySliceScale => 0f;

	public int unitySliceTop => 0;

	public TextAnchor unityTextAlign => TextAnchor.UpperLeft;

	public Color unityTextOutlineColor => default;

	public float unityTextOutlineWidth => 0f;

	public TextOverflowPosition unityTextOverflowPosition => TextOverflowPosition.End;

	public Visibility visibility => Visibility.Visible;

	public WhiteSpace whiteSpace => WhiteSpace.Normal;

	public Length width => default;

	public Length wordSpacing => default;

	public void FinalizeApply(ref ComputedStyle parentStyle)
	{
	}

	public void SyncWithLayout(YogaNode targetNode)
	{
	}

	private bool ApplyGlobalKeyword(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
		return false;
	}

	private bool ApplyGlobalKeyword(StylePropertyId id, StyleKeyword keyword, ref ComputedStyle parentStyle)
	{
		return false;
	}

	private void RemoveCustomStyleProperty(StylePropertyReader reader)
	{
	}

	private void ApplyCustomStyleProperty(StylePropertyReader reader)
	{
	}

	private void ApplyAllPropertyInitial()
	{
	}

	private void ResetComputedTransitions()
	{
	}

	public static bool StartAnimationInlineTranslate(VisualElement element, ref ComputedStyle computedStyle, StyleTranslate translate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return false;
	}

	public static ComputedStyle Create(ref ComputedStyle parentStyle)
	{
		return default;
	}

	public static ComputedStyle CreateInitial()
	{
		return default;
	}

	public ComputedStyle Acquire()
	{
		return default;
	}

	public void Release()
	{
	}

	public void CopyFrom(ref ComputedStyle other)
	{
	}

	public void ApplyProperties(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	public void ApplyStyleValue(StyleValue sv, ref ComputedStyle parentStyle)
	{
	}

	public void ApplyStyleValueManaged(StyleValueManaged sv, ref ComputedStyle parentStyle)
	{
	}

	public void ApplyStyleCursor(Cursor cursor)
	{
	}

	public void ApplyStyleTextShadow(TextShadow st)
	{
	}

	public void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle other)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Length newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, float newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, int newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundPosition newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundRepeat newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundSize newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Color newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Background newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Font newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, FontDefinition newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TextShadow newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Translate newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TransformOrigin newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Rotate newValue)
	{
	}

	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Scale newValue)
	{
	}

	public static bool StartAnimation(VisualElement element, StylePropertyId id, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return false;
	}

	public static bool StartAnimationAllProperty(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return false;
	}

	public static bool StartAnimationInline(VisualElement element, StylePropertyId id, ref ComputedStyle computedStyle, StyleValue sv, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return false;
	}

	public void ApplyStyleTransformOrigin(TransformOrigin st)
	{
	}

	public void ApplyStyleTranslate(Translate translateValue)
	{
	}

	public void ApplyStyleRotate(Rotate rotateValue)
	{
	}

	public void ApplyStyleScale(Scale scaleValue)
	{
	}

	public void ApplyStyleBackgroundSize(BackgroundSize backgroundSizeValue)
	{
	}

	public void ApplyInitialValue(StylePropertyReader reader)
	{
	}

	public void ApplyInitialValue(StylePropertyId id)
	{
	}

	public void ApplyUnsetValue(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	public void ApplyUnsetValue(StylePropertyId id, ref ComputedStyle parentStyle)
	{
	}

	public static VersionChangeType CompareChanges(ref ComputedStyle x, ref ComputedStyle y)
	{
		return (VersionChangeType)0;
	}
}
