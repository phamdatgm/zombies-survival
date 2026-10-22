using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class Sprite : Object
{
	public Bounds bounds => default;

	public Rect rect => default;

	public Vector4 border => default;

	public Texture2D texture => null;

	public float pixelsPerUnit => 0f;

	public Texture2D associatedAlphaSplitTexture => null;

	public Vector2 pivot => default;

	public bool packed => false;

	public SpritePackingRotation packingRotation => SpritePackingRotation.None;

	public Vector2[] vertices => null;

	public ushort[] triangles => null;

	public Vector2[] uv => null;

	[RequiredByNativeCode]
	private Sprite()
	{
	}

	internal int GetPackingRotation()
	{
		return 0;
	}

	internal int GetPacked()
	{
		return 0;
	}

	internal Vector4 GetInnerUVs()
	{
		return default;
	}

	internal Vector4 GetOuterUVs()
	{
		return default;
	}

	internal Vector4 GetPadding()
	{
		return default;
	}

	internal static Sprite CreateSprite(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTextures)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot, float pixelsPerUnit)
	{
		return null;
	}

	public static Sprite Create(Texture2D texture, Rect rect, Vector2 pivot)
	{
		return null;
	}

	private void GetInnerUVs_Injected(out Vector4 ret)
	{
		ret = default;
	}

	private void GetOuterUVs_Injected(out Vector4 ret)
	{
		ret = default;
	}

	private void GetPadding_Injected(out Vector4 ret)
	{
		ret = default;
	}

	private static Sprite CreateSprite_Injected(Texture2D texture, ref Rect rect, ref Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, ref Vector4 border, bool generateFallbackPhysicsShape, SecondarySpriteTexture[] secondaryTexture)
	{
		return null;
	}

	[SpecialName]
	private void get_bounds_Injected(out Bounds ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_rect_Injected(out Rect ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_border_Injected(out Vector4 ret)
	{
		ret = default;
	}

	[SpecialName]
	private void get_pivot_Injected(out Vector2 ret)
	{
		ret = default;
	}
}
