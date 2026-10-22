using System;
using System.Runtime.CompilerServices;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public class Texture : Object
{
	public static readonly int GenerateAllMips;

	public virtual int width
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public virtual int height
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public virtual bool isReadable => false;

	public TextureWrapMode wrapMode
	{
		get
		{
			return TextureWrapMode.Repeat;
		}
		set
		{
		}
	}

	public FilterMode filterMode
	{
		get
		{
			return FilterMode.Point;
		}
		set
		{
		}
	}

	public Vector2 texelSize => default;

	internal ColorSpace activeTextureColorSpace => ColorSpace.Gamma;

	protected Texture()
	{
	}

	private int GetDataWidth()
	{
		return 0;
	}

	private int GetDataHeight()
	{
		return 0;
	}

	public IntPtr GetNativeTexturePtr()
	{
		return (IntPtr)0;
	}

	private int Internal_GetActiveTextureColorSpace()
	{
		return 0;
	}

	internal TextureColorSpace GetTextureColorSpace(bool linear)
	{
		return TextureColorSpace.Linear;
	}

	internal TextureColorSpace GetTextureColorSpace(GraphicsFormat format)
	{
		return TextureColorSpace.Linear;
	}

	internal bool ValidateFormat(TextureFormat format)
	{
		return false;
	}

	internal bool ValidateFormat(GraphicsFormat format, FormatUsage usage)
	{
		return false;
	}

	internal UnityException CreateNonReadableException(Texture t)
	{
		return null;
	}

	internal UnityException CreateNativeArrayLengthOverflowException()
	{
		return null;
	}

	[SpecialName]
	private void get_texelSize_Injected(out Vector2 ret)
	{
		ret = default;
	}
}
