using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[RequiredByNativeCode]
public sealed class Coroutine : YieldInstruction
{
	internal IntPtr m_Ptr;

	private Coroutine()
	{
	}

	~Coroutine()
	{
	}

	private static void ReleaseCoroutine(IntPtr ptr)
	{
	}
}
