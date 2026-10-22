using UnityEngine.Experimental.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public class RenderTexture : Texture
{
	public override int width
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public override int height
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public GraphicsFormat graphicsFormat
	{
		set
		{
		}
	}

	public bool useMipMap
	{
		set
		{
		}
	}

	public GraphicsFormat depthStencilFormat
	{
		set
		{
		}
	}

	public static RenderTexture active
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public RenderBuffer colorBuffer => default;

	public RenderBuffer depthBuffer => default;

	public RenderTextureDescriptor descriptor => default;

	private void SetColorFormat(GraphicsFormat format)
	{
	}

	private static RenderTexture GetActive()
	{
		return null;
	}

	private static void SetActive(RenderTexture rt)
	{
	}

	private RenderBuffer GetColorBuffer()
	{
		return default;
	}

	private RenderBuffer GetDepthBuffer()
	{
		return default;
	}

	private void SetMipMapCount(int count)
	{
	}

	public bool Create()
	{
		return false;
	}

	internal void SetSRGBReadWrite(bool srgb)
	{
	}

	private static void Internal_Create(RenderTexture rt)
	{
	}

	private void SetRenderTextureDescriptor(RenderTextureDescriptor desc)
	{
	}

	private RenderTextureDescriptor GetDescriptor()
	{
		return default;
	}

	private static RenderTexture GetTemporary_Internal(RenderTextureDescriptor desc)
	{
		return null;
	}

	public static void ReleaseTemporary(RenderTexture temp)
	{
	}

	[RequiredByNativeCode]
	protected internal RenderTexture()
	{
	}

	public RenderTexture(RenderTextureDescriptor desc)
	{
	}

	public RenderTexture(RenderTexture textureToCopy)
	{
	}

	public RenderTexture(int width, int height, int depth, DefaultFormat format)
	{
	}

	public RenderTexture(int width, int height, int depth, GraphicsFormat format)
	{
	}

	public RenderTexture(int width, int height, int depth, GraphicsFormat format, int mipCount)
	{
	}

	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat, int mipCount)
	{
	}

	public RenderTexture(int width, int height, GraphicsFormat colorFormat, GraphicsFormat depthStencilFormat)
	{
	}

	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
	}

	public RenderTexture(int width, int height, int depth, RenderTextureFormat format)
	{
	}

	public RenderTexture(int width, int height, int depth)
	{
	}

	public RenderTexture(int width, int height, int depth, RenderTextureFormat format, int mipCount)
	{
	}

	private void Initialize(int width, int height, int depth, RenderTextureFormat format, RenderTextureReadWrite readWrite, int mipCount)
	{
	}

	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, GraphicsFormat colorFormat)
	{
		return GraphicsFormat.None;
	}

	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, RenderTextureFormat format)
	{
		return GraphicsFormat.None;
	}

	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, DefaultFormat format)
	{
		return GraphicsFormat.None;
	}

	internal static GraphicsFormat GetDepthStencilFormatLegacy(int depthBits, bool requestedShadowMap)
	{
		return GraphicsFormat.None;
	}

	private static void ValidateRenderTextureDesc(RenderTextureDescriptor desc)
	{
	}

	internal static GraphicsFormat GetDefaultColorFormat(DefaultFormat format)
	{
		return GraphicsFormat.None;
	}

	internal static GraphicsFormat GetDefaultDepthStencilFormat(DefaultFormat format, int depth)
	{
		return GraphicsFormat.None;
	}

	internal static GraphicsFormat GetCompatibleFormat(RenderTextureFormat renderTextureFormat, RenderTextureReadWrite readWrite)
	{
		return GraphicsFormat.None;
	}

	public static RenderTexture GetTemporary(RenderTextureDescriptor desc)
	{
		return null;
	}

	private static RenderTexture GetTemporaryImpl(int width, int height, GraphicsFormat depthStencilFormat, GraphicsFormat colorFormat, int antiAliasing = 1, RenderTextureMemoryless memorylessMode = RenderTextureMemoryless.None, VRTextureUsage vrUsage = VRTextureUsage.None, bool useDynamicScale = false)
	{
		return null;
	}

	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode, VRTextureUsage vrUsage, bool useDynamicScale)
	{
		return null;
	}

	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode, VRTextureUsage vrUsage)
	{
		return null;
	}

	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing, RenderTextureMemoryless memorylessMode)
	{
		return null;
	}

	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite, int antiAliasing)
	{
		return null;
	}

	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format, RenderTextureReadWrite readWrite)
	{
		return null;
	}

	public static RenderTexture GetTemporary(int width, int height, int depthBuffer, RenderTextureFormat format)
	{
		return null;
	}

	private void GetColorBuffer_Injected(out RenderBuffer ret)
	{
		ret = default;
	}

	private void GetDepthBuffer_Injected(out RenderBuffer ret)
	{
		ret = default;
	}

	private void SetRenderTextureDescriptor_Injected(ref RenderTextureDescriptor desc)
	{
	}

	private void GetDescriptor_Injected(out RenderTextureDescriptor ret)
	{
		ret = default;
	}

	private static RenderTexture GetTemporary_Internal_Injected(ref RenderTextureDescriptor desc)
	{
		return null;
	}
}
