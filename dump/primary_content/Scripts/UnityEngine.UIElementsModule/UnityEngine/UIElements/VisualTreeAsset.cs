using System;
using System.Collections.Generic;

namespace UnityEngine.UIElements;

[Serializable]
public class VisualTreeAsset : ScriptableObject
{
	[Serializable]
	internal struct UsingEntry(string alias, string path)
	{
		internal static readonly IComparer<UsingEntry> comparer;

		[SerializeField]
		public string alias = null;

		[SerializeField]
		public string path = null;

		[SerializeField]
		public VisualTreeAsset asset = null;
	}

	private class UsingEntryComparer : IComparer<UsingEntry>
	{
		public int Compare(UsingEntry x, UsingEntry y)
		{
			return 0;
		}
	}

	[Serializable]
	internal struct SlotDefinition
	{
		[SerializeField]
		public string name;

		[SerializeField]
		public int insertionPointId;
	}

	[Serializable]
	internal struct SlotUsageEntry
	{
		[SerializeField]
		public string slotName;

		[SerializeField]
		public int assetId;
	}

	[Serializable]
	internal struct UxmlObjectEntry(int parentId, List<UxmlObjectAsset> uxmlObjectAssets)
	{
		[SerializeField]
		public int parentId = 0;

		[SerializeField]
		public List<UxmlObjectAsset> uxmlObjectAssets = null;
	}

	[Serializable]
	private struct AssetEntry
	{
		[SerializeField]
		public string path = null;

		[SerializeField]
		public string typeFullName = null;

		[SerializeField]
		public Object asset = null;

		private Type m_CachedType = null;

		public Type type => null;

		public AssetEntry(string path, Type type, Object asset)
		{
		}
	}

	internal static string LinkedVEAInTemplatePropertyName;

	[SerializeField]
	private bool m_ImportedWithErrors;

	[SerializeField]
	private bool m_ImportedWithWarnings;

	private static readonly Dictionary<string, VisualElement> s_TemporarySlotInsertionPoints;

	[SerializeField]
	private List<UsingEntry> m_Usings;

	[SerializeField]
	internal StyleSheet inlineSheet;

	[SerializeField]
	private List<VisualElementAsset> m_VisualElementAssets;

	[SerializeField]
	private List<TemplateAsset> m_TemplateAssets;

	[SerializeField]
	private List<UxmlObjectEntry> m_UxmlObjectEntries;

	[SerializeField]
	private List<int> m_UxmlObjectIds;

	[SerializeField]
	private List<AssetEntry> m_AssetEntries;

	[SerializeField]
	private List<SlotDefinition> m_Slots;

	[SerializeField]
	private int m_ContentContainerId;

	[SerializeField]
	private int m_ContentHash;

	public bool importedWithErrors
	{
		get
		{
			return false;
		}
		internal set
		{
		}
	}

	public bool importedWithWarnings
	{
		get
		{
			return false;
		}
		internal set
		{
		}
	}

	public IEnumerable<VisualTreeAsset> templateDependencies => null;

	public IEnumerable<StyleSheet> stylesheets => null;

	internal List<VisualElementAsset> visualElementAssets
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal List<TemplateAsset> templateAssets
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal List<UxmlObjectEntry> uxmlObjectEntries => null;

	internal List<int> uxmlObjectIds => null;

	internal List<SlotDefinition> slots
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	internal int contentContainerId
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int contentHash
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	internal int GetNextChildSerialNumber()
	{
		return 0;
	}

	internal void RegisterUxmlObject(UxmlObjectAsset uxmlObjectAsset)
	{
	}

	internal List<T> GetUxmlObjects<T>(IUxmlAttributes asset, CreationContext cc) where T : new()
	{
		return null;
	}

	internal bool AssetEntryExists(string path, Type type)
	{
		return false;
	}

	internal void RegisterAssetEntry(string path, Type type, Object asset)
	{
	}

	internal T GetAsset<T>(string path) where T : Object
	{
		return null;
	}

	internal UxmlObjectEntry GetUxmlObjectEntry(int id)
	{
		return default;
	}

	private IBaseUxmlObjectFactory GetUxmlObjectFactory(UxmlObjectAsset uxmlObjectAsset)
	{
		return null;
	}

	public TemplateContainer Instantiate()
	{
		return null;
	}

	public TemplateContainer Instantiate(string bindingPath)
	{
		return null;
	}

	public TemplateContainer CloneTree()
	{
		return null;
	}

	public TemplateContainer CloneTree(string bindingPath)
	{
		return null;
	}

	public void CloneTree(VisualElement target)
	{
	}

	public void CloneTree(VisualElement target, out int firstElementIndex, out int elementAddedCount)
	{
		firstElementIndex = default;
		elementAddedCount = default;
	}

	internal void CloneTree(VisualElement target, Dictionary<string, VisualElement> slotInsertionPoints, List<TemplateAsset.AttributeOverride> attributeOverrides)
	{
	}

	private VisualElement CloneSetupRecursively(VisualElementAsset root, Dictionary<int, List<VisualElementAsset>> idToChildren, CreationContext context)
	{
		return null;
	}

	private static int CompareForOrder(VisualElementAsset a, VisualElementAsset b)
	{
		return 0;
	}

	internal bool TryGetSlotInsertionPoint(int insertionPointId, out string slotName)
	{
		slotName = null;
		return false;
	}

	internal VisualTreeAsset ResolveTemplate(string templateName)
	{
		return null;
	}

	internal static VisualElement Create(VisualElementAsset asset, CreationContext ctx)
	{
		return null;
	}

	private static void AssignClassListFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}

	private static void AssignStyleSheetFromAssetToElement(VisualElementAsset asset, VisualElement element)
	{
	}
}
