namespace Adverty.Communication.Models;

internal struct SettingsData
{
	private const int DEFAULT_ADSESSION_DURATION = 300;

	private const int DEFAULT_REFRESH_DURATION = 60;

	private const float DEFAULT_CHECK_INTERVAL = 0.125f;

	private const float DEFAULT_DURATION_BEST_CASE = 1f;

	private const float DEFAULT_DURATION_WORST_CASE = 3f;

	private const int DEFAULT_POST_IMPRESSION_SUMMARY_DELAY = 10;

	private const float DEFAULT_STATIC_HTML_UPDATE_INTERVAL = 3f;

	private const float DEFAULT_ANIMATED_HTML_UPDATE_INTERVAL = 0.2f;

	private const float DEFAULT_HTML_READY_CHECK_INTERVAL = 0.5f;

	private const int DEFAULT_STATIC_HTML_UPDATE_TIMES = 2;

	private const int DEFAULT_OVERLAP_TO_VISIBILITY_RATIO = 3;

	private const int DEFAULT_WEBVIEWS_LOAD_COUNT_LIMIT = 3;

	private const int DEFAULT_LOAD_HTML_DEFAULT_TIMEOUT = 40;

	private static int[] DEFAULT_HTTP_RETRY_TIMES;

	private const float DEFAULT_IN_MENU_UNIT_GRAYSCALE_MAX_DIFF = 0.7f;

	private const float DEFAULT_IN_MENU_UNIT_CHECK_INTERVAL = 0.5f;

	private const int DEFAULT_AD_POOL_CAPACITY = 15;

	private const float DEFAULT_MIN_TRIGGER_SHERE_UNIT_SIZE = 0.01f;

	private const int MIN_REQUESR_SIZE_FOR_COMPRESSION = 100;

	public int[] HttpRequestRetryTimes => null;

	public int AdSessionDuration => 0;

	public int RefreshDuration => 0;

	public int InactiveRefreshDuration => 0;

	public float AnimatedHtmlUpdateInterval => 0f;

	public float CheckInterval => 0f;

	public float DurationBestCase => 0f;

	public float DurationWorstCase => 0f;

	public int LoadHtmlTimeout => 0;

	public float HtmlTextureReadyCheckInterval => 0f;

	public int StaticHtmlUpdateTimes => 0;

	public bool VisibilityCheckEnabled => false;

	public int OverlapToVisibilityRatio => 0;

	public int PostImpressionSummaryDelay => 0;

	public float StaticHtmlUpdateInterval => 0f;

	public int WebViewsLoadCountLimit => 0;

	public float InMenuUnitGreyScaleMaxDifference => 0f;

	public float InMenuUnitCheckInterval => 0f;

	public int AdPoolCapacity => 0;

	public string DestinationUrlBlackList => null;

	public bool IsTextureTransitionEnabled => false;

	public float MinTriggerSphereUnitSize => 0f;

	internal bool UiVisibiltyCheckIsDisabled => false;

	internal int MinRequestSizeForCompression => 0;

	public int[] httpRetryTimes { private get; set; }

	public int adSessionDuration { private get; set; }

	public int refreshDuration { private get; set; }

	public int inactiveRefreshDuration { private get; set; }

	public double angleSpan { get; set; }

	public double checkInterval { private get; set; }

	public double durationBestCase { private get; set; }

	public double durationWorstCase { private get; set; }

	public double minimumAllowedBlockingOpacity { get; set; }

	public double minimumLightFactor { get; set; }

	public double maximumLightFactor { get; set; }

	public double upperBound { get; set; }

	public int overlapToVisibiltyRatio { private get; set; }

	public bool visibiltyCheckIsDisabled { private get; set; }

	public double vrMinimalOverlapArea { get; set; }

	public double vrMaximumOverlapArea { get; set; }

	public double arMinimalOverlapArea { get; set; }

	public double arMaximumOverlapArea { get; set; }

	public string watermarkFontName { get; set; }

	public int watermarkFontSize { get; set; }

	public double watermarkHeightRatio { get; set; }

	public double watermarkTextPadding { get; set; }

	public double animatedHtmlUpdateInterval { private get; set; }

	public double htmlTextureReadyCheckInterval { private get; set; }

	public int staticHtmlUpdateTimes { private get; set; }

	public int loadHtmlTimeout { private get; set; }

	public int postImpressionSummaryDelay { private get; set; }

	public double staticHtmlUpdateInterval { private get; set; }

	public int webViewsLoadCountLimit { private get; set; }

	public double menuUnitGrayScaleMaxDifference { private get; set; }

	public double menuUnitCheckInterval { private get; set; }

	public int adPoolCapacity { private get; set; }

	public string destinationUrlBlackList { private get; set; }

	public bool isTextureTransitionEnabled { private get; set; }

	public double minTriggerSphereUnitSize { private get; set; }

	public bool uiVisibiltyCheckIsDisabled { private get; set; }

	public int minRequestSizeForCompression { private get; set; }
}
