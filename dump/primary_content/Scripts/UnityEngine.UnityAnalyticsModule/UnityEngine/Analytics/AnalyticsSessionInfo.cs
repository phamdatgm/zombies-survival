using System.Runtime.CompilerServices;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[RequiredByNativeCode]
public static class AnalyticsSessionInfo
{
	public delegate void SessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged);

	public delegate void IdentityTokenChanged(string token);

	[CompilerGenerated]
	private static SessionStateChanged sessionStateChanged;

	[CompilerGenerated]
	private static IdentityTokenChanged identityTokenChanged;

	[RequiredByNativeCode]
	internal static void CallSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged)
	{
	}

	[RequiredByNativeCode]
	internal static void CallIdentityTokenChanged(string token)
	{
	}
}
