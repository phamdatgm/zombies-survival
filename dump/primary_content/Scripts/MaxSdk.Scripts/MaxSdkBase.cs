using System;
using System.Collections.Generic;

public abstract class MaxSdkBase
{
	public enum ConsentFlowUserGeography
	{
		Unknown = 0,
		Gdpr = 1,
		Other = 2
	}

	public enum InitializationStatus
	{
		NotInitialized = -4,
		DoesNotApply = -3,
		Initializing = -2,
		InitializedUnknown = -1,
		InitializedFailure = 0,
		InitializedSuccess = 1
	}

	public enum AdViewPosition
	{
		TopLeft = 0,
		TopCenter = 1,
		TopRight = 2,
		Centered = 3,
		CenterLeft = 4,
		CenterRight = 5,
		BottomLeft = 6,
		BottomCenter = 7,
		BottomRight = 8
	}

	public class AdViewConfiguration
	{
		public AdViewPosition Position { get; private set; }

		public float XCoordinate { get; }

		public float YCoordinate { get; }

		public bool IsAdaptive { get; set; }

		internal bool UseCoordinates { get; private set; }

		public AdViewConfiguration(AdViewPosition position)
		{
		}
	}

	public class SdkConfiguration
	{
		private bool IsSuccessfullyInitialized { set; }

		private string CountryCode { set; }

		private bool IsTestModeEnabled { set; }

		private ConsentFlowUserGeography ConsentFlowUserGeography { set; }

		[Obsolete("This API has been deprecated and will be removed in a future release.")]
		private ConsentDialogState ConsentDialogState { set; }

		public static SdkConfiguration Create(IDictionary<string, object> eventProps)
		{
			return null;
		}
	}

	public struct Reward
	{
		public string Label;

		public int Amount;

		public override string ToString()
		{
			return null;
		}
	}

	public enum ErrorCode
	{
		Unspecified = -1,
		NoFill = 204,
		AdLoadFailed = -5001,
		AdDisplayFailed = -4205,
		NetworkError = -1000,
		NetworkTimeout = -1001,
		NoNetwork = -1009,
		FullscreenAdAlreadyShowing = -23,
		FullscreenAdNotReady = -24,
		FullscreenAdAlreadyLoading = -26,
		FullscreenAdLoadWhileShowing = -27,
		DontKeepActivitiesEnabled = -5602,
		InvalidAdUnitId = -5603
	}

	public enum MaxAdLoadState
	{
		AdLoadNotAttempted = 0,
		AdLoaded = 1,
		FailedToLoad = 2
	}

	public class AdInfo
	{
		public string AdUnitIdentifier { get; private set; }

		public string AdFormat { get; private set; }

		public string NetworkName { get; private set; }

		public string NetworkPlacement { get; private set; }

		public string Placement { get; private set; }

		public string CreativeIdentifier { get; private set; }

		public double Revenue { get; private set; }

		public string RevenuePrecision { get; private set; }

		private WaterfallInfo WaterfallInfo { set; }

		public long LatencyMillis { get; private set; }

		public string DspName { get; private set; }

		public AdInfo(IDictionary<string, object> adInfoDictionary)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}

	public class WaterfallInfo
	{
		public string Name { get; private set; }

		public string TestName { get; private set; }

		public List<NetworkResponseInfo> NetworkResponses { get; private set; }

		public long LatencyMillis { get; private set; }

		public WaterfallInfo(IDictionary<string, object> waterfallInfoDict)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}

	public class NetworkResponseInfo
	{
		public MaxAdLoadState AdLoadState { get; private set; }

		public MediatedNetworkInfo MediatedNetwork { get; private set; }

		public Dictionary<string, object> Credentials { get; private set; }

		private bool IsBidding { set; }

		public long LatencyMillis { get; private set; }

		public ErrorInfo Error { get; private set; }

		public NetworkResponseInfo(IDictionary<string, object> networkResponseInfoDict)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}

	public class MediatedNetworkInfo
	{
		public string Name { get; private set; }

		public string AdapterClassName { get; private set; }

		public string AdapterVersion { get; private set; }

		public string SdkVersion { get; private set; }

		public InitializationStatus InitializationStatus { get; private set; }

		public MediatedNetworkInfo(IDictionary<string, object> mediatedNetworkDictionary)
		{
		}

		public override string ToString()
		{
			return null;
		}

		private static InitializationStatus InitializationStatusFromCode(int code)
		{
			return InitializationStatus.InitializedFailure;
		}
	}

	public class ErrorInfo
	{
		public ErrorCode Code { get; private set; }

		public string Message { get; private set; }

		public int MediatedNetworkErrorCode { get; private set; }

		public string MediatedNetworkErrorMessage { get; private set; }

		public string AdLoadFailureInfo { get; private set; }

		private WaterfallInfo WaterfallInfo { set; }

		public long LatencyMillis { get; private set; }

		public ErrorInfo(IDictionary<string, object> errorInfoDictionary)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}

	[Obsolete("This API has been deprecated and will be removed in a future release. Please use AdViewPosition instead.")]
	public enum BannerPosition
	{
		TopLeft = 0,
		TopCenter = 1,
		TopRight = 2,
		Centered = 3,
		CenterLeft = 4,
		CenterRight = 5,
		BottomLeft = 6,
		BottomCenter = 7,
		BottomRight = 8
	}

	[Obsolete("This API has been deprecated and will be removed in a future release.")]
	public enum ConsentDialogState
	{
		Unknown = 0,
		Applies = 1,
		DoesNotApply = 2
	}

	public static bool? InvokeEventsOnUnityMainThread { get; }

	internal static bool DisableAllLogs { get; }

	protected static void ValidateAdUnitIdentifier(string adUnitIdentifier, string debugPurpose)
	{
	}

	protected static void InitializeEventExecutor()
	{
	}

	protected static string GenerateMetaData()
	{
		return null;
	}

	protected static void HandleBackgroundCallback(string propsStr)
	{
	}
}
