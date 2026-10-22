using System;
using UnityEngine;

public class MaxSdkAndroid : MaxSdkBase
{
	internal class BackgroundCallbackProxy : AndroidJavaProxy
	{
		public BackgroundCallbackProxy()
			: base((string)null)
		{
		}

		public void onEvent(string propsStr)
		{
		}
	}

	private static readonly AndroidJavaClass MaxUnityPluginClass;

	private static readonly BackgroundCallbackProxy BackgroundCallback;

	static MaxSdkAndroid()
	{
	}

	public static void InitializeSdk(string[] adUnitIds = null)
	{
	}

	public static bool IsInitialized()
	{
		return false;
	}

	public static void ShowMediationDebugger()
	{
	}

	public static void SetHasUserConsent(bool hasUserConsent)
	{
	}

	public static void SetDoNotSell(bool doNotSell)
	{
	}

	public static void CreateBanner(string adUnitIdentifier, AdViewConfiguration configuration)
	{
	}

	public static void ShowBanner(string adUnitIdentifier)
	{
	}

	public static void HideBanner(string adUnitIdentifier)
	{
	}

	public static void SetBannerBackgroundColor(string adUnitIdentifier, Color color)
	{
	}

	public static void LoadInterstitial(string adUnitIdentifier)
	{
	}

	public static bool IsInterstitialReady(string adUnitIdentifier)
	{
		return false;
	}

	public static void ShowInterstitial(string adUnitIdentifier, string placement = null, string customData = null)
	{
	}

	public static void LoadRewardedAd(string adUnitIdentifier)
	{
	}

	public static bool IsRewardedAdReady(string adUnitIdentifier)
	{
		return false;
	}

	public static void ShowRewardedAd(string adUnitIdentifier, string placement = null, string customData = null)
	{
	}

	public static void SetMuted(bool muted)
	{
	}

	public static bool IsVerboseLoggingEnabled()
	{
		return false;
	}

	[Obsolete("This API has been deprecated and will be removed in a future release. Please use CreateBanner(string adUnitIdentifier, AdViewConfiguration configuration) instead.")]
	public static void CreateBanner(string adUnitIdentifier, BannerPosition bannerPosition)
	{
	}
}
