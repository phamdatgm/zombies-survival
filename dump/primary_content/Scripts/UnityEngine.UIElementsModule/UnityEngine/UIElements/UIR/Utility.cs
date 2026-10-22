using System;
using System.Runtime.CompilerServices;
using Unity.Collections;
using Unity.Profiling;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements.UIR;

internal class Utility
{
	internal enum GPUBufferType
	{
		Vertex = 0,
		Index = 1
	}

	public class GPUBuffer<T> : IDisposable where T : struct
	{
		private IntPtr buffer;

		private int elemCount;

		private int elemStride;

		public int ElementStride => 0;

		internal IntPtr BufferPointer => (IntPtr)0;

		public GPUBuffer(int elementCount, GPUBufferType type)
		{
		}

		public void Dispose()
		{
		}

		public void UpdateRanges(NativeSlice<GfxUpdateBufferRange> ranges, int rangesMin, int rangesMax)
		{
		}
	}

	[CompilerGenerated]
	private static Action<bool> m_GraphicsResourcesRecreate;

	[CompilerGenerated]
	private static Action m_EngineUpdate;

	[CompilerGenerated]
	private static Action m_FlushPendingResources;

	[CompilerGenerated]
	private static Action<Camera> m_RegisterIntermediateRenderers;

	[CompilerGenerated]
	private static Action<IntPtr> RenderNodeAdd;

	[CompilerGenerated]
	private static Action<IntPtr> m_RenderNodeExecute;

	[CompilerGenerated]
	private static Action<IntPtr> RenderNodeCleanup;

	private static ProfilerMarker s_MarkerRaiseEngineUpdate;

	public static event Action<bool> GraphicsResourcesRecreate
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action EngineUpdate
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action FlushPendingResources
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action<Camera> RegisterIntermediateRenderers
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static event Action<IntPtr> RenderNodeExecute
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public static void SetVectorArray<T>(MaterialPropertyBlock props, int name, NativeSlice<T> vector4s) where T : struct
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseGraphicsResourcesRecreate(bool recreate)
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseEngineUpdate()
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseFlushPendingResources()
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseRegisterIntermediateRenderers(Camera camera)
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseRenderNodeAdd(IntPtr userData)
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseRenderNodeExecute(IntPtr userData)
	{
	}

	[RequiredByNativeCode]
	internal static void RaiseRenderNodeCleanup(IntPtr userData)
	{
	}

	private static IntPtr AllocateBuffer(int elementCount, int elementStride, bool vertexBuffer)
	{
		return (IntPtr)0;
	}

	private static void FreeBuffer(IntPtr buffer)
	{
	}

	private static void UpdateBufferRanges(IntPtr buffer, IntPtr ranges, int rangeCount, int writeRangeStart, int writeRangeEnd)
	{
	}

	private static void SetVectorArray(MaterialPropertyBlock props, int name, IntPtr vector4s, int count)
	{
	}

	public static IntPtr GetVertexDeclaration(VertexAttributeDescriptor[] vertexAttributes)
	{
		return (IntPtr)0;
	}

	public static void RegisterIntermediateRenderer(Camera camera, Material material, Matrix4x4 transform, Bounds aabb, int renderLayer, int shadowCasting, bool receiveShadows, int sameDistanceSortPriority, ulong sceneCullingMask, int rendererCallbackFlags, IntPtr userData, int userDataSize)
	{
	}

	public unsafe static void DrawRanges(IntPtr ib, IntPtr* vertexStreams, int streamCount, IntPtr ranges, int rangeCount, IntPtr vertexDecl)
	{
	}

	public static void SetPropertyBlock(MaterialPropertyBlock props)
	{
	}

	public static void SetScissorRect(RectInt scissorRect)
	{
	}

	public static void DisableScissor()
	{
	}

	public static IntPtr CreateStencilState(StencilState stencilState)
	{
		return (IntPtr)0;
	}

	public static void SetStencilState(IntPtr stencilState, int stencilRef)
	{
	}

	public static bool HasMappedBufferRange()
	{
		return false;
	}

	public static uint InsertCPUFence()
	{
		return 0u;
	}

	public static bool CPUFencePassed(uint fence)
	{
		return false;
	}

	public static void WaitForCPUFencePassed(uint fence)
	{
	}

	public static void SyncRenderThread()
	{
	}

	public static RectInt GetActiveViewport()
	{
		return default;
	}

	public static void ProfileDrawChainBegin()
	{
	}

	public static void ProfileDrawChainEnd()
	{
	}

	public static void NotifyOfUIREvents(bool subscribe)
	{
	}

	public static Matrix4x4 GetUnityProjectionMatrix()
	{
		return default;
	}

	private static void RegisterIntermediateRenderer_Injected(Camera camera, Material material, ref Matrix4x4 transform, ref Bounds aabb, int renderLayer, int shadowCasting, bool receiveShadows, int sameDistanceSortPriority, ulong sceneCullingMask, int rendererCallbackFlags, IntPtr userData, int userDataSize)
	{
	}

	private static void SetScissorRect_Injected(ref RectInt scissorRect)
	{
	}

	private static IntPtr CreateStencilState_Injected(ref StencilState stencilState)
	{
		return (IntPtr)0;
	}

	private static void GetActiveViewport_Injected(out RectInt ret)
	{
		ret = default;
	}

	private static void GetUnityProjectionMatrix_Injected(out Matrix4x4 ret)
	{
		ret = default;
	}
}
