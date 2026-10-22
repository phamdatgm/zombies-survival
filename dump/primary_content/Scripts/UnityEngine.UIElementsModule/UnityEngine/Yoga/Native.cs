using System;
using UnityEngine.Scripting;

namespace UnityEngine.Yoga;

internal static class Native
{
	public static IntPtr YGNodeNewWithConfig(IntPtr config)
	{
		return (IntPtr)0;
	}

	public static void YGNodeFree(IntPtr ygNode)
	{
	}

	private static void YGNodeFreeInternal(IntPtr ygNode)
	{
	}

	public static void YGSetManagedObject(IntPtr ygNode, YogaNode node)
	{
	}

	public static void YGNodeSetConfig(IntPtr ygNode, IntPtr config)
	{
	}

	public static IntPtr YGConfigGetDefault()
	{
		return (IntPtr)0;
	}

	public static IntPtr YGConfigNew()
	{
		return (IntPtr)0;
	}

	public static void YGConfigFree(IntPtr config)
	{
	}

	private static void YGConfigFreeInternal(IntPtr config)
	{
	}

	public static void YGConfigSetUseWebDefaults(IntPtr config, bool useWebDefaults)
	{
	}

	public static bool YGConfigGetUseWebDefaults(IntPtr config)
	{
		return false;
	}

	public static void YGConfigSetPointScaleFactor(IntPtr config, float pixelsInPoint)
	{
	}

	public static void YGNodeInsertChild(IntPtr node, IntPtr child, uint index)
	{
	}

	public static void YGNodeRemoveChild(IntPtr node, IntPtr child)
	{
	}

	public static void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, YogaDirection parentDirection)
	{
	}

	public static void YGNodeMarkDirty(IntPtr node)
	{
	}

	public static bool YGNodeIsDirty(IntPtr node)
	{
		return false;
	}

	public static void YGNodeCopyStyle(IntPtr dstNode, IntPtr srcNode)
	{
	}

	public static void YGNodeSetMeasureFunc(IntPtr node)
	{
	}

	public static void YGNodeRemoveMeasureFunc(IntPtr node)
	{
	}

	[RequiredByNativeCode]
	public static void YGNodeMeasureInvoke(YogaNode node, float width, YogaMeasureMode widthMode, float height, YogaMeasureMode heightMode, IntPtr returnValueAddress)
	{
	}

	[RequiredByNativeCode]
	public static void YGNodeBaselineInvoke(YogaNode node, float width, float height, IntPtr returnValueAddress)
	{
	}

	public static void YGNodeSetHasNewLayout(IntPtr node, bool hasNewLayout)
	{
	}

	public static bool YGNodeGetHasNewLayout(IntPtr node)
	{
		return false;
	}

	public static YogaDirection YGNodeStyleGetDirection(IntPtr node)
	{
		return YogaDirection.Inherit;
	}

	public static void YGNodeStyleSetFlexDirection(IntPtr node, YogaFlexDirection flexDirection)
	{
	}

	public static void YGNodeStyleSetJustifyContent(IntPtr node, YogaJustify justifyContent)
	{
	}

	public static void YGNodeStyleSetAlignContent(IntPtr node, YogaAlign alignContent)
	{
	}

	public static void YGNodeStyleSetAlignItems(IntPtr node, YogaAlign alignItems)
	{
	}

	public static void YGNodeStyleSetAlignSelf(IntPtr node, YogaAlign alignSelf)
	{
	}

	public static void YGNodeStyleSetPositionType(IntPtr node, YogaPositionType positionType)
	{
	}

	public static void YGNodeStyleSetFlexWrap(IntPtr node, YogaWrap flexWrap)
	{
	}

	public static void YGNodeStyleSetOverflow(IntPtr node, YogaOverflow flexWrap)
	{
	}

	public static void YGNodeStyleSetDisplay(IntPtr node, YogaDisplay display)
	{
	}

	public static void YGNodeStyleSetFlex(IntPtr node, float flex)
	{
	}

	public static void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow)
	{
	}

	public static void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink)
	{
	}

	public static void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis)
	{
	}

	public static void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis)
	{
	}

	public static void YGNodeStyleSetFlexBasisAuto(IntPtr node)
	{
	}

	public static void YGNodeStyleSetWidth(IntPtr node, float width)
	{
	}

	public static void YGNodeStyleSetWidthPercent(IntPtr node, float width)
	{
	}

	public static void YGNodeStyleSetWidthAuto(IntPtr node)
	{
	}

	public static void YGNodeStyleSetHeight(IntPtr node, float height)
	{
	}

	public static void YGNodeStyleSetHeightPercent(IntPtr node, float height)
	{
	}

	public static void YGNodeStyleSetHeightAuto(IntPtr node)
	{
	}

	public static void YGNodeStyleSetMinWidth(IntPtr node, float minWidth)
	{
	}

	public static void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth)
	{
	}

	public static void YGNodeStyleSetMinHeight(IntPtr node, float minHeight)
	{
	}

	public static void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight)
	{
	}

	public static void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth)
	{
	}

	public static void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth)
	{
	}

	public static void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight)
	{
	}

	public static void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight)
	{
	}

	public static void YGNodeStyleSetPosition(IntPtr node, YogaEdge edge, float position)
	{
	}

	public static void YGNodeStyleSetPositionPercent(IntPtr node, YogaEdge edge, float position)
	{
	}

	public static void YGNodeStyleSetMargin(IntPtr node, YogaEdge edge, float margin)
	{
	}

	public static void YGNodeStyleSetMarginPercent(IntPtr node, YogaEdge edge, float margin)
	{
	}

	public static void YGNodeStyleSetMarginAuto(IntPtr node, YogaEdge edge)
	{
	}

	public static void YGNodeStyleSetPadding(IntPtr node, YogaEdge edge, float padding)
	{
	}

	public static void YGNodeStyleSetPaddingPercent(IntPtr node, YogaEdge edge, float padding)
	{
	}

	public static void YGNodeStyleSetBorder(IntPtr node, YogaEdge edge, float border)
	{
	}

	public static float YGNodeLayoutGetLeft(IntPtr node)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetTop(IntPtr node)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetRight(IntPtr node)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetBottom(IntPtr node)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetWidth(IntPtr node)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetHeight(IntPtr node)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetMargin(IntPtr node, YogaEdge edge)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetPadding(IntPtr node, YogaEdge edge)
	{
		return 0f;
	}

	public static float YGNodeLayoutGetBorder(IntPtr node, YogaEdge edge)
	{
		return 0f;
	}
}
