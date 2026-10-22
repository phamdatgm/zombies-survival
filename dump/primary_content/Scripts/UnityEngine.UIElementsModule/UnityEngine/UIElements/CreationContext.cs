using System;
using System.Collections.Generic;

namespace UnityEngine.UIElements;

public struct CreationContext : IEquatable<CreationContext>
{
	public static readonly CreationContext Default;

	public VisualElement target { get; private set; } = null;

	public VisualTreeAsset visualTreeAsset { get; private set; } = null;

	public Dictionary<string, VisualElement> slotInsertionPoints { get; private set; } = null;

	internal List<TemplateAsset.AttributeOverride> attributeOverrides { get; private set; } = null;

	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, VisualTreeAsset vta, VisualElement target)
	{
	}

	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<TemplateAsset.AttributeOverride> attributeOverrides, VisualTreeAsset vta, VisualElement target)
	{
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public bool Equals(CreationContext other)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}
}
