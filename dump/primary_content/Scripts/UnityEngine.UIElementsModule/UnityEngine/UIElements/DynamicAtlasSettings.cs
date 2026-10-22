using System;

namespace UnityEngine.UIElements;

[Serializable]
public class DynamicAtlasSettings
{
	[SerializeField]
	private int m_MinAtlasSize;

	[SerializeField]
	private int m_MaxAtlasSize;

	[SerializeField]
	private int m_MaxSubTextureSize;

	[SerializeField]
	private DynamicAtlasFilters m_ActiveFilters;

	private DynamicAtlasCustomFilter m_CustomFilter;

	public int minAtlasSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int maxAtlasSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public int maxSubTextureSize
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public DynamicAtlasFilters activeFilters
	{
		get
		{
			return DynamicAtlasFilters.None;
		}
		set
		{
		}
	}

	public static DynamicAtlasFilters defaultFilters => DynamicAtlasFilters.None;

	public DynamicAtlasCustomFilter customFilter
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static DynamicAtlasSettings defaults => null;
}
