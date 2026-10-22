using System;
using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine;

public static class RemoteSettings
{
	public delegate void UpdatedEventHandler();

	[CompilerGenerated]
	private static UpdatedEventHandler Updated;

	[CompilerGenerated]
	private static Action BeforeFetchFromServer;

	[CompilerGenerated]
	private static Action<bool, bool, int> Completed;

	[RequiredByNativeCode]
	internal static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer)
	{
	}

	[RequiredByNativeCode]
	internal static void RemoteSettingsBeforeFetchFromServer()
	{
	}

	[RequiredByNativeCode]
	internal static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int response)
	{
	}
}
