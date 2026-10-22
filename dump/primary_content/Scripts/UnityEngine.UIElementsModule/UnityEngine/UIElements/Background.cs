using System;

namespace UnityEngine.UIElements;

public struct Background : IEquatable<Background>
{
	private Texture2D m_Texture;

	private Sprite m_Sprite;

	private RenderTexture m_RenderTexture;

	private VectorImage m_VectorImage;

	public Texture2D texture
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Sprite sprite
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public RenderTexture renderTexture
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public VectorImage vectorImage
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static Background FromTexture2D(Texture2D t)
	{
		return default;
	}

	public static Background FromRenderTexture(RenderTexture rt)
	{
		return default;
	}

	public static Background FromSprite(Sprite s)
	{
		return default;
	}

	public static Background FromVectorImage(VectorImage vi)
	{
		return default;
	}

	internal static Background FromObject(object obj)
	{
		return default;
	}

	public static bool operator ==(Background lhs, Background rhs)
	{
		return false;
	}

	public static bool operator !=(Background lhs, Background rhs)
	{
		return false;
	}

	public bool Equals(Background other)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}
}
