using System.Collections.Generic;

namespace UnityEngine.UIElements.StyleSheets;

internal static class StyleSheetCache
{
	private struct SheetHandleKey(StyleSheet sheet, int index)
	{
		public readonly int sheetInstanceID = 0;

		public readonly int index = 0;
	}

	private class SheetHandleKeyComparer : IEqualityComparer<SheetHandleKey>
	{
		public bool Equals(SheetHandleKey x, SheetHandleKey y)
		{
			return false;
		}

		public int GetHashCode(SheetHandleKey key)
		{
			return 0;
		}
	}

	private static SheetHandleKeyComparer s_Comparer;

	private static Dictionary<SheetHandleKey, StylePropertyId[]> s_RulePropertyIdsCache;

	internal static StylePropertyId[] GetPropertyIds(StyleSheet sheet, int ruleIndex)
	{
		return null;
	}

	internal static StylePropertyId[] GetPropertyIds(StyleRule rule)
	{
		return null;
	}

	private static StylePropertyId GetPropertyId(StyleRule rule, int index)
	{
		return StylePropertyId.Unknown;
	}
}
