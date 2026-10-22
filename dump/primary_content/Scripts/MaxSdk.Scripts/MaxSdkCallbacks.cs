using System;

public static class MaxSdkCallbacks
{
	public static class Interstitial
	{
		internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdDisplayedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> onAdDisplayFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent;

		internal static Action<string, MaxSdkBase.AdInfo, MaxSdkBase.AdInfo> onExpiredAdReloadedEvent;

		internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdHiddenEvent;

		public static event Action<string, MaxSdkBase.AdInfo> OnAdLoadedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.ErrorInfo> OnAdLoadFailedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdDisplayedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> OnAdDisplayFailedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdHiddenEvent
		{
			add
			{
			}
			remove
			{
			}
		}
	}

	public static class AppOpen
	{
		internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdDisplayedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> onAdDisplayFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent;

		internal static Action<string, MaxSdkBase.AdInfo, MaxSdkBase.AdInfo> onExpiredAdReloadedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdHiddenEvent;
	}

	public static class Rewarded
	{
		internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdDisplayedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> onAdDisplayFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent;

		internal static Action<string, MaxSdkBase.AdInfo, MaxSdkBase.AdInfo> onExpiredAdReloadedEvent;

		internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent;

		internal static Action<string, MaxSdkBase.Reward, MaxSdkBase.AdInfo> onAdReceivedRewardEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdHiddenEvent;

		public static event Action<string, MaxSdkBase.AdInfo> OnAdLoadedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.ErrorInfo> OnAdLoadFailedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdDisplayedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.ErrorInfo, MaxSdkBase.AdInfo> OnAdDisplayFailedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdClickedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.Reward, MaxSdkBase.AdInfo> OnAdReceivedRewardEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdHiddenEvent
		{
			add
			{
			}
			remove
			{
			}
		}
	}

	public static class Banner
	{
		internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent;

		internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdExpandedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdCollapsedEvent;

		public static event Action<string, MaxSdkBase.AdInfo> OnAdLoadedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.ErrorInfo> OnAdLoadFailedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdClickedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdExpandedEvent
		{
			add
			{
			}
			remove
			{
			}
		}

		public static event Action<string, MaxSdkBase.AdInfo> OnAdCollapsedEvent
		{
			add
			{
			}
			remove
			{
			}
		}
	}

	public static class MRec
	{
		internal static Action<string, MaxSdkBase.AdInfo> onAdLoadedEvent;

		internal static Action<string, MaxSdkBase.ErrorInfo> onAdLoadFailedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdClickedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdRevenuePaidEvent;

		internal static Action<string, string, MaxSdkBase.AdInfo> onAdReviewCreativeIdGeneratedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdExpandedEvent;

		internal static Action<string, MaxSdkBase.AdInfo> onAdCollapsedEvent;
	}

	private static Action<MaxSdkBase.SdkConfiguration> onSdkInitializedEvent;

	private static Action<bool> onApplicationStateChangedEvent;

	public static event Action<MaxSdkBase.SdkConfiguration> OnSdkInitializedEvent
	{
		add
		{
		}
		remove
		{
		}
	}

	public static void ForwardEvent(string eventPropsStr)
	{
	}

	private static void InvokeEvent<T>(Action<T> evt, T param, string eventName, bool keepInBackground)
	{
	}

	private static void InvokeEvent<T1, T2>(Action<T1, T2> evt, T1 param1, T2 param2, string eventName, bool keepInBackground)
	{
	}

	private static void InvokeEvent<T1, T2, T3>(Action<T1, T2, T3> evt, T1 param1, T2 param2, T3 param3, string eventName, bool keepInBackground)
	{
	}

	private static bool CanInvokeEvent(Delegate evt)
	{
		return false;
	}

	private static bool ShouldInvokeInBackground(bool keepInBackground)
	{
		return false;
	}

	private static void LogSubscribedToEvent(string eventName)
	{
	}

	private static void LogUnsubscribedToEvent(string eventName)
	{
	}
}
