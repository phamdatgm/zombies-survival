using System;
using System.Collections.Generic;

namespace UnityEngine.UIElements;

public abstract class UxmlAttributeDescription
{
	public enum Use
	{
		None = 0,
		Optional = 1,
		Prohibited = 2,
		Required = 3
	}

	private string[] m_ObsoleteNames;

	public string name { get; set; }

	public IEnumerable<string> obsoleteNames
	{
		set
		{
		}
	}

	protected string type { set; }

	protected string typeNamespace { set; }

	public Use use { set; }

	public UxmlTypeRestriction restriction { set; }

	internal bool TryGetValueFromBagAsString(IUxmlAttributes bag, CreationContext cc, out string value)
	{
		value = null;
		return false;
	}

	protected bool TryGetValueFromBag<T>(IUxmlAttributes bag, CreationContext cc, Func<string, T, T> converterFunc, T defaultValue, ref T value)
	{
		return false;
	}

	protected T GetValueFromBag<T>(IUxmlAttributes bag, CreationContext cc, Func<string, T, T> converterFunc, T defaultValue)
	{
		return default;
	}
}
