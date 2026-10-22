using System.Collections.Generic;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

internal class StyleValueCollection
{
	internal List<StyleValue> m_Values;

	public StyleLength GetStyleLength(StylePropertyId id)
	{
		return default;
	}

	public StyleFloat GetStyleFloat(StylePropertyId id)
	{
		return default;
	}

	public StyleInt GetStyleInt(StylePropertyId id)
	{
		return default;
	}

	public bool TryGetStyleValue(StylePropertyId id, ref StyleValue value)
	{
		return false;
	}

	public void SetStyleValue(StyleValue value)
	{
	}
}
