using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public sealed class ComputeShader : Object
{
	[RequiredByNativeCode]
	public int FindKernel(string name)
	{
		return 0;
	}

	private void Internal_SetBuffer(int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	public void SetBuffer(int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	public void SetBuffer(int kernelIndex, string name, ComputeBuffer buffer)
	{
	}
}
