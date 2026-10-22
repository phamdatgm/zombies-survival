using System;
using System.Runtime.InteropServices;
using Unity.Collections;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
public sealed class DownloadHandlerBuffer : DownloadHandler
{
	private NativeArray<byte> m_NativeData;

	private static IntPtr Create(DownloadHandlerBuffer obj)
	{
		return (IntPtr)0;
	}

	private void InternalCreateBuffer()
	{
	}

	protected override NativeArray<byte> GetNativeData()
	{
		return default;
	}

	public override void Dispose()
	{
	}
}
