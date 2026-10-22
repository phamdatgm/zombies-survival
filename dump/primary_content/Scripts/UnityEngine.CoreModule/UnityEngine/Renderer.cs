using System.Runtime.CompilerServices;
using UnityEngine.Rendering;
using UnityEngine.Scripting;
using UnityEngineInternal;

namespace UnityEngine;

[RequireComponent(typeof(Transform))]
[UsedByNativeCode]
public class Renderer : Component
{
	public Bounds bounds => default;

	public bool enabled
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool isVisible => false;

	public ShadowCastingMode shadowCastingMode
	{
		set
		{
		}
	}

	public int sortingLayerID => 0;

	public int sortingOrder
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	internal int sortingGroupID => 0;

	internal int sortingGroupOrder => 0;

	public bool isPartOfStaticBatch => false;

	public int lightmapIndex
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public Vector4 lightmapScaleOffset
	{
		get
		{
			return default;
		}
		set
		{
		}
	}

	public Material[] materials
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Material material
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Material[] sharedMaterials => null;

	private void SetStaticLightmapST(Vector4 st)
	{
	}

	private Material GetMaterial()
	{
		return null;
	}

	private void SetMaterial(Material m)
	{
	}

	private Material[] GetMaterialArray()
	{
		return null;
	}

	private void SetMaterialArray(Material[] m, int length)
	{
	}

	private void SetMaterialArray(Material[] m)
	{
	}

	private int GetLightmapIndex(LightmapType lt)
	{
		return 0;
	}

	private void SetLightmapIndex(int index, LightmapType lt)
	{
	}

	private Vector4 GetLightmapST(LightmapType lt)
	{
		return default;
	}

	private Material[] GetSharedMaterialArray()
	{
		return null;
	}

	[SpecialName]
	private void get_bounds_Injected(out Bounds ret)
	{
		ret = default;
	}

	private void SetStaticLightmapST_Injected(ref Vector4 st)
	{
	}

	private void GetLightmapST_Injected(LightmapType lt, out Vector4 ret)
	{
		ret = default;
	}
}
