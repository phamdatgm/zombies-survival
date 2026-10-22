using System;

namespace UnityEngine;

public sealed class MaterialPropertyBlock
{
	internal IntPtr m_Ptr;

	private void SetTextureImpl(int name, Texture value)
	{
	}

	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	private static IntPtr CreateImpl()
	{
		return (IntPtr)0;
	}

	private static void DestroyImpl(IntPtr mpb)
	{
	}

	private void Clear(bool keepMemory)
	{
	}

	public void Clear()
	{
	}

	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	~MaterialPropertyBlock()
	{
	}

	private void Dispose()
	{
	}

	public void SetTexture(int nameID, Texture value)
	{
	}

	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}
}
