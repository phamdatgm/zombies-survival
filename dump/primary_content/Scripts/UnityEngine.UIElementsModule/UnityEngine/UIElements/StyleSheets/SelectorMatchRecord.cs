namespace UnityEngine.UIElements.StyleSheets;

internal struct SelectorMatchRecord(StyleSheet sheet, int styleSheetIndexInStack)
{
	public StyleSheet sheet = null;

	public int styleSheetIndexInStack = 0;

	public StyleComplexSelector complexSelector = null;

	public static int Compare(SelectorMatchRecord a, SelectorMatchRecord b)
	{
		return 0;
	}
}
