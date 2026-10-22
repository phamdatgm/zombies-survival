using System;

namespace UnityEngine;

internal class ObjectGUIState : IDisposable
{
	internal IntPtr m_Ptr;

	public void Dispose()
	{
	}

	~ObjectGUIState()
	{
	}

	private void Destroy()
	{
	}

	private static IntPtr Internal_Create()
	{
		return (IntPtr)0;
	}

	private static void Internal_Destroy(IntPtr ptr)
	{
	}
}
