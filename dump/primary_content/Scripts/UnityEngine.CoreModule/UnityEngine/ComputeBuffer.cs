using System;
using UnityEngine.Scripting;

namespace UnityEngine;

[UsedByNativeCode]
public sealed class ComputeBuffer : IDisposable
{
	internal IntPtr m_Ptr;

	public int count => 0;

	~ComputeBuffer()
	{
	}

	public void Dispose()
	{
	}

	private void Dispose(bool disposing)
	{
	}

	private static IntPtr InitBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage)
	{
		return (IntPtr)0;
	}

	private static void DestroyBuffer(ComputeBuffer buf)
	{
	}

	public ComputeBuffer(int count, int stride)
	{
	}

	private ComputeBuffer(int count, int stride, ComputeBufferType type, ComputeBufferMode usage, int stackDepth)
	{
	}

	public void Release()
	{
	}

	public void SetData(Array data)
	{
	}

	private void InternalSetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	public void GetData(Array data)
	{
	}

	private void InternalGetData(Array data, int managedBufferStartIndex, int computeBufferStartIndex, int count, int elemSize)
	{
	}

	public IntPtr GetNativeBufferPtr()
	{
		return (IntPtr)0;
	}
}
