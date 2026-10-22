using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
public class RemoteConfigSettings
{
	[NonSerialized]
	internal IntPtr m_Ptr;

	[CompilerGenerated]
	private Action<bool> Updated;

	[RequiredByNativeCode]
	internal static void RemoteConfigSettingsUpdated(RemoteConfigSettings rcs, bool wasLastUpdatedFromServer)
	{
	}
}
