using System.Collections.Generic;
using UnityEngine.Rendering;

namespace UnityEngine;

public class Graphics
{
	internal static readonly int kMaxDrawMeshInstanceCount;

	internal static Dictionary<int, RenderInstancedDataLayout> s_RenderInstancedDataLayouts;

	private static int Internal_GetMaxDrawMeshInstanceCount()
	{
		return 0;
	}

	private static void Internal_SetNullRT()
	{
	}

	private static void Internal_SetRTSimple(RenderBuffer color, RenderBuffer depth, int mip, CubemapFace face, int depthSlice)
	{
	}

	private static void Internal_DrawMeshNow2(Mesh mesh, int subsetIndex, Matrix4x4 matrix)
	{
	}

	private static void Internal_BlitMaterial5(Texture source, RenderTexture dest, Material mat, int pass, bool setRT)
	{
	}

	private static void Blit2(Texture source, RenderTexture dest)
	{
	}

	public static void ExecuteCommandBuffer(CommandBuffer buffer)
	{
	}

	internal static void SetRenderTargetImpl(RenderBuffer colorBuffer, RenderBuffer depthBuffer, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	internal static void SetRenderTargetImpl(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	public static void SetRenderTarget(RenderTexture rt, int mipLevel, CubemapFace face, int depthSlice)
	{
	}

	public static void DrawMeshNow(Mesh mesh, Matrix4x4 matrix, int materialIndex)
	{
	}

	public static void Blit(Texture source, RenderTexture dest)
	{
	}

	public static void Blit(Texture source, RenderTexture dest, Material mat, int pass)
	{
	}

	public static void Blit(Texture source, RenderTexture dest, Material mat)
	{
	}

	public static void SetRenderTarget(RenderTexture rt)
	{
	}

	private static void Internal_SetRTSimple_Injected(ref RenderBuffer color, ref RenderBuffer depth, int mip, CubemapFace face, int depthSlice)
	{
	}

	private static void Internal_DrawMeshNow2_Injected(Mesh mesh, int subsetIndex, ref Matrix4x4 matrix)
	{
	}
}
