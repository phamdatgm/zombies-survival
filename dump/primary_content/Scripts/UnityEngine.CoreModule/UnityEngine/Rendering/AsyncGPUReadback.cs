using System;

namespace UnityEngine.Rendering;

public static class AsyncGPUReadback
{
	public static AsyncGPUReadbackRequest Request(ComputeBuffer src, Action<AsyncGPUReadbackRequest> callback = null)
	{
		return default;
	}

	private unsafe static AsyncGPUReadbackRequest Request_Internal_ComputeBuffer_1(ComputeBuffer buffer, AsyncRequestNativeArrayData* data)
	{
		return default;
	}

	private unsafe static void Request_Internal_ComputeBuffer_1_Injected(ComputeBuffer buffer, AsyncRequestNativeArrayData* data, out AsyncGPUReadbackRequest ret)
	{
		ret = default;
	}
}
