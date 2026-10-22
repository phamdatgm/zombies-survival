using System;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

public sealed class Cubemap : Texture
{
	public override bool isReadable => false;

	private static bool Internal_CreateImpl(Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
		return false;
	}

	private static void Internal_Create(Cubemap mono, int ext, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex)
	{
	}

	internal bool ValidateFormat(TextureFormat format, int width)
	{
		return false;
	}

	internal bool ValidateFormat(GraphicsFormat format, int width)
	{
		return false;
	}

	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags)
	{
	}

	public Cubemap(int width, DefaultFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	[RequiredByNativeCode]
	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags)
	{
	}

	public Cubemap(int width, GraphicsFormat format, TextureCreationFlags flags, int mipCount)
	{
	}

	internal Cubemap(int width, TextureFormat textureFormat, int mipCount, IntPtr nativeTex, bool createUninitialized)
	{
	}

	public Cubemap(int width, TextureFormat textureFormat, bool mipChain)
	{
	}

	public Cubemap(int width, TextureFormat textureFormat, bool mipChain, bool createUninitialized)
	{
	}

	public Cubemap(int width, TextureFormat format, int mipCount)
	{
	}

	public Cubemap(int width, TextureFormat format, int mipCount, bool createUninitialized)
	{
	}

	private static void ValidateIsNotCrunched(TextureCreationFlags flags)
	{
	}
}
