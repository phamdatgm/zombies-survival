using System;

namespace UnityEngine.UIElements.UIR;

internal class ShaderInfoStorageRGBAFloat : ShaderInfoStorage<Color>
{
	private static readonly Func<Color, Color> s_Convert;

	public ShaderInfoStorageRGBAFloat(int initialSize = 64, int maxSize = 4096)
		: base((TextureFormat)0, (Func<Color, Color>)null, 0, 0)
	{
	}
}
