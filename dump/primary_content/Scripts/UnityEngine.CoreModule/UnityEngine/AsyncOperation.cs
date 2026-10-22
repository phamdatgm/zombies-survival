using System;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[RequiredByNativeCode]
public class AsyncOperation : YieldInstruction
{
	internal IntPtr m_Ptr;

	private Action<AsyncOperation> m_completeCallback;

	public bool isDone => false;

	public event Action<AsyncOperation> completed
	{
		add
		{
		}
		remove
		{
		}
	}

	private static void InternalDestroy(IntPtr ptr)
	{
	}

	~AsyncOperation()
	{
	}

	[RequiredByNativeCode]
	internal void InvokeCompletionEvent()
	{
	}
}
