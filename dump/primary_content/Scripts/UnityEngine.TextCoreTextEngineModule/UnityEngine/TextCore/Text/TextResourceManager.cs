using System.Collections.Generic;

namespace UnityEngine.TextCore.Text;

internal class TextResourceManager
{
	private struct FontAssetRef(int nameHashCode, int familyNameHashCode, int styleNameHashCode, FontAsset fontAsset)
	{
		public int nameHashCode = 0;

		public int familyNameHashCode = 0;

		public int styleNameHashCode = 0;

		public long familyNameAndStyleHashCode = 0L;

		public readonly FontAsset fontAsset = null;
	}

	private static readonly Dictionary<int, FontAssetRef> s_FontAssetReferences;

	private static readonly Dictionary<int, FontAsset> s_FontAssetNameReferenceLookup;

	private static readonly Dictionary<long, FontAsset> s_FontAssetFamilyNameAndStyleReferenceLookup;

	private static readonly List<int> s_FontAssetRemovalList;

	private static readonly int k_RegularStyleHashCode;

	internal static void AddFontAsset(FontAsset fontAsset)
	{
	}
}
