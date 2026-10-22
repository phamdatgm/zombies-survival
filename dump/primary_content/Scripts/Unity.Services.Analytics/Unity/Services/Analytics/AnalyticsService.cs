using System;
using System.Collections.Generic;
using Unity.Services.Analytics.Internal;
using Unity.Services.Core.Internal;

namespace Unity.Services.Analytics;

public static class AnalyticsService
{
	private static AnalyticsServiceInstance m_Instance;

	private static IDispatcherDebug m_DispatcherDebug;

	private static IBufferDebug m_BufferDebug;

	private static Action<string, string, DateTime, byte[]> m_EventRecordedCallback;

	private static Action<HashSet<string>> m_EventsClearingCallback;

	private static Action<byte[]> m_FlushStartedCallback;

	private static Action<int, bool, bool, bool, bool, byte[]> m_FlushCompletedCallback;

	public static IAnalyticsService Instance => null;

	internal static void Initialize(CoreRegistry registry)
	{
	}

	internal static void TearDown()
	{
	}
}
