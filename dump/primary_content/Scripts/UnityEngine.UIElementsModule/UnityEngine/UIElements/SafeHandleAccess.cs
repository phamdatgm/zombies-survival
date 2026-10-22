using System;

namespace UnityEngine.UIElements;

internal struct SafeHandleAccess(IntPtr ptr)
{
	private IntPtr m_Handle = (IntPtr)0;

	public bool IsNull()
	{
		return false;
	}

	public static implicit operator IntPtr(SafeHandleAccess a)
	{
		return (IntPtr)0;
	}
}
