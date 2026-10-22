using System;
using UnityEngine.Scripting;

namespace UnityEngine;

internal class BootConfigData
{
	private IntPtr m_Ptr;

	[RequiredByNativeCode]
	private static BootConfigData WrapBootConfigData(IntPtr nativeHandle)
	{
		return null;
	}

	private BootConfigData(IntPtr nativeHandle)
	{
	}
}
