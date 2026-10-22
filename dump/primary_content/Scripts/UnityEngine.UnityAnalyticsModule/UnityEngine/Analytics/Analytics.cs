using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace UnityEngine.Analytics;

[StructLayout((LayoutKind)0)]
public static class Analytics
{
	internal static bool IsInitialized()
	{
		return false;
	}

	private static AnalyticsResult Transaction(string productId, double amount, string currency, string receiptPurchaseData, string signature, bool usingIAPService)
	{
		return AnalyticsResult.Ok;
	}

	private static AnalyticsResult SendCustomEventName(string customEventName)
	{
		return AnalyticsResult.Ok;
	}

	private static AnalyticsResult SendCustomEvent(CustomEventData eventData)
	{
		return AnalyticsResult.Ok;
	}

	public static AnalyticsResult Transaction(string productId, decimal amount, string currency, string receiptPurchaseData, string signature)
	{
		return AnalyticsResult.Ok;
	}

	public static AnalyticsResult Transaction(string productId, decimal amount, string currency, string receiptPurchaseData, string signature, bool usingIAPService)
	{
		return AnalyticsResult.Ok;
	}

	public static AnalyticsResult CustomEvent(string customEventName)
	{
		return AnalyticsResult.Ok;
	}

	public static AnalyticsResult CustomEvent(string customEventName, IDictionary<string, object> eventData)
	{
		return AnalyticsResult.Ok;
	}
}
