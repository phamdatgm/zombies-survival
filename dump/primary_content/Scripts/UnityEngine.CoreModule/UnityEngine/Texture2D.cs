using System;
using Unity.Collections;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public sealed class Texture2D : Texture
{
	internal const int streamingMipmapsPriorityMin = -128;

	internal const int streamingMipmapsPriorityMax = 127;

	public TextureFormat format => (TextureFormat)0;

	public static Texture2D whiteTexture => null;

	public override bool isReadable => false;

	private static bool Internal_CreateImpl(Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName)
	{
		return false;
	}

	private static void Internal_Create(Texture2D mono, int w, int h, int mipCount, GraphicsFormat format, TextureColorSpace colorSpace, TextureCreationFlags flags, IntPtr nativeTex, string mipmapLimitGroupName)
	{
	}

	private void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	private bool ReinitializeImpl(int width, int height)
	{
		return false;
	}

	private void SetPixelImpl(int image, int mip, int x, int y, Color color)
	{
	}

	private Color GetPixelBilinearImpl(int image, int mip, float u, float v)
	{
		return default;
	}

	private bool ReinitializeWithTextureFormatImpl(int width, int height, TextureFormat textureFormat, bool hasMipMap)
	{
		return false;
	}

	private IntPtr GetWritableImageData(int frame)
	{
		return (IntPtr)0;
	}

	private ulong GetRawImageDataSize()
	{
		return 0uL;
	}

	private void SetAllPixels32(Color32[] colors, int miplevel)
	{
	}

	internal bool ValidateFormat(TextureFormat format, int width, int height)
	{
		return false;
	}

	internal Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear, IntPtr nativeTex, bool createUninitialized, bool ignoreMipmapLimit, string mipmapLimitGroupName)
	{
	}

	public Texture2D(int width, int height, TextureFormat textureFormat, int mipCount, bool linear)
	{
	}

	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain, bool linear)
	{
	}

	public Texture2D(int width, int height, TextureFormat textureFormat, bool mipChain)
	{
	}

	public Texture2D(int width, int height)
	{
	}

	public static Texture2D CreateExternalTexture(int width, int height, TextureFormat format, bool mipChain, bool linear, IntPtr nativeTex)
	{
		return null;
	}

	public void SetPixel(int x, int y, Color color)
	{
	}

	public Color GetPixelBilinear(float u, float v)
	{
		return default;
	}

	public NativeArray<T> GetRawTextureData<T>() where T : struct
	{
		return default;
	}

	public void Apply(bool updateMipmaps, bool makeNoLongerReadable)
	{
	}

	public void Apply()
	{
	}

	public bool Reinitialize(int width, int height)
	{
		return false;
	}

	public bool Reinitialize(int width, int height, TextureFormat format, bool hasMipMap)
	{
		return false;
	}

	public void SetPixels32(Color32[] colors, int miplevel)
	{
	}

	public void SetPixels32(Color32[] colors)
	{
	}

	private void SetPixelImpl_Injected(int image, int mip, int x, int y, ref Color color)
	{
	}

	private void GetPixelBilinearImpl_Injected(int image, int mip, float u, float v, out Color ret)
	{
		ret = default;
	}
}
