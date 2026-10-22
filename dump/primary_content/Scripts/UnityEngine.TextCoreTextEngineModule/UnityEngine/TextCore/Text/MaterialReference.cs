using System.Collections.Generic;

namespace UnityEngine.TextCore.Text;

internal struct MaterialReference(int index, FontAsset fontAsset, SpriteAsset spriteAsset, Material material, float padding)
{
	public int index = 0;

	public FontAsset fontAsset = null;

	public SpriteAsset spriteAsset = null;

	public Material material = null;

	public bool isDefaultMaterial = false;

	public bool isFallbackMaterial = false;

	public Material fallbackMaterial = null;

	public float padding = 0f;

	public int referenceCount = 0;

	public static int AddMaterialReference(Material material, FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return 0;
	}

	public static int AddMaterialReference(Material material, SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return 0;
	}
}
