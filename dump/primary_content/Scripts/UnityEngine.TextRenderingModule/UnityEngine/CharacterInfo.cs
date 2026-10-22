using System;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public struct CharacterInfo
{
	public int index;

	[Obsolete("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead.")]
	public Rect uv;

	[Obsolete("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead.")]
	public Rect vert;

	[Obsolete("CharacterInfo.width is deprecated. Use advance instead.")]
	public float width;

	public int size;

	public FontStyle style;

	[Obsolete("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation.")]
	public bool flipped;

	public int advance => 0;

	public int glyphWidth => 0;

	public int glyphHeight => 0;

	public int minY => 0;

	public int maxY => 0;

	public int minX => 0;

	public int maxX => 0;

	internal Vector2 uvBottomLeftUnFlipped => default;

	internal Vector2 uvBottomRightUnFlipped => default;

	internal Vector2 uvTopRightUnFlipped => default;

	internal Vector2 uvTopLeftUnFlipped => default;

	public Vector2 uvBottomLeft => default;

	public Vector2 uvBottomRight => default;

	public Vector2 uvTopRight => default;
}
